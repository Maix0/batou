use std::{
    cell::RefCell,
    cmp,
    collections::{HashMap, HashSet},
    fmt::Write,
    mem::swap,
    rc::Rc,
};

use super::{
    build_tables::Tables,
    grammars::{ExternalToken, LexicalGrammar, SyntaxGrammar, VariableType},
    nfa::CharacterSet,
    rules::{Alias, AliasMap, Symbol, SymbolType},
    tables::{
        AdvanceAction, FieldLocation, GotoAction, LexState, LexTable, ParseAction, ParseTable,
        ParseTableEntry,
    },
};

const SMALL_STATE_THRESHOLD: usize = 64;
const ABI_VERSION_MIN: usize = 13;
const ABI_VERSION_MAX: usize = tree_sitter::LANGUAGE_VERSION;
const ABI_VERSION_WITH_PRIMARY_STATES: usize = 14;

macro_rules! add {
    ($this: tt, $($arg: tt)*) => {{
        $this.buffer.write_fmt(format_args!($($arg)*)).unwrap();
    }}
}

macro_rules! add_whitespace {
    ($this:tt) => {{
        for _ in 0..$this.indent_level {
            write!(&mut $this.buffer, "  ").unwrap();
        }
    }};
}

macro_rules! add_line {
    ($this: tt, $($arg: tt)*) => {
        add_whitespace!($this);
        $this.buffer.write_fmt(format_args!($($arg)*)).unwrap();
        $this.buffer += "\n";
    }
}

macro_rules! indent {
    ($this:tt) => {
        $this.indent_level += 1;
    };
}

macro_rules! dedent {
    ($this:tt) => {
        assert_ne!($this.indent_level, 0);
        $this.indent_level -= 1;
    };
}

struct Generator {
    buffer: String,
    indent_level: usize,
    language_name: String,
    parse_table: ParseTable,
    main_lex_table: LexTable,
    keyword_lex_table: LexTable,
    large_character_sets: Vec<(Option<Symbol>, CharacterSet)>,
    large_character_set_info: Vec<LargeCharacterSetInfo>,
    large_state_count: usize,
    keyword_capture_token: Option<Symbol>,
    syntax_grammar: SyntaxGrammar,
    lexical_grammar: LexicalGrammar,
    default_aliases: AliasMap,
    symbol_order: HashMap<Symbol, usize>,
    symbol_ids: HashMap<Symbol, String>,
    alias_ids: HashMap<Alias, String>,
    unique_aliases: Vec<Alias>,
    symbol_map: HashMap<Symbol, Symbol>,
    field_names: Vec<String>,
    output: Rc<RefCell<Output>>,

    #[allow(unused)]
    abi_version: usize,
}

struct LargeCharacterSetInfo {
    constant_name: String,
    is_used: bool,
}

#[derive(Debug, Default, serde::Deserialize, serde::Serialize)]
pub struct SymbolMetadata {
    pub named: bool,
    pub visible: bool,
    pub supertype: bool,
}

#[derive(Debug, Default, serde::Deserialize, serde::Serialize)]
pub struct Production {
    pub row_id: usize,
    pub length: usize,
}

#[derive(Debug, Default, serde::Deserialize, serde::Serialize)]
pub struct Entry {
    pub field_id: String,
    pub index: usize,
    pub inherited: bool,
}

#[derive(Debug, serde::Deserialize, serde::Serialize)]
pub enum Action {
    AcceptToken(String),
    Advance(String),
    Skip(String),
    AdvanceMap(Vec<(char, usize)>),
    EndState,
}
#[derive(Debug, serde::Deserialize, serde::Serialize)]
pub struct ActionCondition {
    pub condition: Vec<Condition>,
    pub action: Action,
}
#[derive(Debug, serde::Deserialize, serde::Serialize)]
pub enum Condition {
    Group(Vec<Condition>),
    LookaheadEq(char),
    LookaheadNe(char),
    LookaheadLe(char),
    LookaheadGe(char),
    LookaheadLt(char),
    LookaheadGt(char),
    And,
    Or,
    Eof,
    NotEof,
    SetContains(String, usize),
}
#[derive(Debug, serde::Deserialize, serde::Serialize)]
pub enum LexMode {
    EndOfNonTerminalExtra,
    External {
        lex_state: usize,
        external_lex_state: usize,
    },
    Normal {
        lex_state: usize,
    },
}

#[derive(Debug, serde::Deserialize, serde::Serialize)]
pub enum ParseThingy {
    Actions(usize),
    State(usize),
}

#[derive(Debug, serde::Deserialize, serde::Serialize)]
pub enum MyParseAction {
    AcceptInput,
    ShiftExtra,
    Recover,
    Shift(usize),
    ShiftRepeat(usize),
    Reduce(String, usize, i32, usize),
}

#[derive(Debug, Default, serde::Deserialize, serde::Serialize)]
pub struct Output {
    pub symbol_names: Vec<String>,
    pub values: HashMap<String, String>,
    pub symbols: HashMap<String, usize>,
    pub symbols_names: HashMap<String, String>,
    pub unique_symbols_map: HashMap<String, String>,
    pub field_identifiers: HashMap<String, usize>,
    pub field_names: HashMap<String, String>,
    pub symbol_metadata: HashMap<String, SymbolMetadata>,
    pub alias_sequences: HashMap<usize, HashMap<usize, String>>,
    pub non_terminal_alias_map: HashMap<String, Vec<String>>,
    pub primary_state_ids: HashMap<usize, usize>,
    pub field_map_slices: HashMap<usize, Production>,
    pub field_map_entries: HashMap<usize, Vec<Entry>>,
    pub lex_state: HashMap<String, HashMap<usize, Vec<ActionCondition>>>,
    pub char_set: HashMap<String, Vec<(char, char)>>,
    pub lex_modes: HashMap<usize, LexMode>,
    pub external_scanner_symbol_identifiers: HashMap<String, usize>,
    pub external_scanner_symbol_map: HashMap<String, String>,
    pub external_scanner_states: HashMap<usize, HashMap<String, bool>>,
    pub parse_table: HashMap<usize, HashMap<String, ParseThingy>>,
    pub small_parse_table: HashMap<usize, (usize, Vec<((ParseThingy, usize), Vec<String>)>)>,
    pub small_parse_table_map: HashMap<usize, usize>,
    pub parse_actions: HashMap<usize, (Vec<MyParseAction>, bool)>,
}

thread_local! {
    pub static OUTPUT: std::rc::Rc<std::cell::RefCell<Output>> = std::rc::Rc::new(Default::default());
}

impl Generator {
    fn generate(mut self) -> String {
        self.init();
        self.add_includes();
        self.add_pragmas();
        self.add_stats();
        self.add_symbol_enum();
        self.add_symbol_names_list();
        self.add_unique_symbol_map();
        self.add_symbol_metadata_list();

        if !self.field_names.is_empty() {
            self.add_field_name_enum();
            self.add_field_name_names_list();
            self.add_field_sequences();
        }

        if !self.parse_table.production_infos.is_empty() {
            self.add_alias_sequences();
        }

        self.add_non_terminal_alias_map();

        if self.abi_version >= ABI_VERSION_WITH_PRIMARY_STATES {
            self.add_primary_state_id_list();
        }

        let buffer_offset_before_lex_functions = self.buffer.len();

        let mut main_lex_table = LexTable::default();
        swap(&mut main_lex_table, &mut self.main_lex_table);
        self.add_lex_function("ts_lex", main_lex_table);

        if self.keyword_capture_token.is_some() {
            let mut keyword_lex_table = LexTable::default();
            swap(&mut keyword_lex_table, &mut self.keyword_lex_table);
            self.add_lex_function("ts_lex_keywords", keyword_lex_table);
        }

        // Once the lex functions are generated, and we've determined which large
        // character sets are actually used, we can generate the large character set
        // constants. Insert them into the output buffer before the lex functions.
        let lex_functions = self.buffer[buffer_offset_before_lex_functions..].to_string();
        self.buffer.truncate(buffer_offset_before_lex_functions);
        for ix in 0..self.large_character_sets.len() {
            self.add_character_set(ix);
        }
        self.buffer.push_str(&lex_functions);

        self.add_lex_modes_list();
        self.add_parse_table();

        if !self.syntax_grammar.external_tokens.is_empty() {
            self.add_external_token_enum();
            self.add_external_scanner_symbol_map();
            self.add_external_scanner_states_list();
        }

        self.add_parser_export();

        self.buffer
    }

    fn init(&mut self) {
        let mut symbol_identifiers = HashSet::new();
        for i in 0..self.parse_table.symbols.len() {
            self.assign_symbol_id(self.parse_table.symbols[i], &mut symbol_identifiers);
        }
        self.symbol_ids.insert(
            Symbol::end_of_nonterminal_extra(),
            self.symbol_ids[&Symbol::end()].clone(),
        );

        self.symbol_map = HashMap::new();

        for symbol in &self.parse_table.symbols {
            let mut mapping = symbol;

            // There can be multiple symbols in the grammar that have the same name and kind,
            // due to simple aliases. When that happens, ensure that they map to the same
            // public-facing symbol. If one of the symbols is not aliased, choose that one
            // to be the public-facing symbol. Otherwise, pick the symbol with the lowest
            // numeric value.
            if let Some(alias) = self.default_aliases.get(symbol) {
                let kind = alias.kind();
                for other_symbol in &self.parse_table.symbols {
                    if let Some(other_alias) = self.default_aliases.get(other_symbol) {
                        if other_symbol < mapping && other_alias == alias {
                            mapping = other_symbol;
                        }
                    } else if self.metadata_for_symbol(*other_symbol) == (&alias.value, kind) {
                        mapping = other_symbol;
                        break;
                    }
                }
            }
            // Two anonymous tokens with different flags but the same string value
            // should be represented with the same symbol in the public API. Examples:
            // * "<" and token(prec(1, "<"))
            // * "(" and token.immediate("(")
            else if symbol.is_terminal() {
                let metadata = self.metadata_for_symbol(*symbol);
                for other_symbol in &self.parse_table.symbols {
                    let other_metadata = self.metadata_for_symbol(*other_symbol);
                    if other_metadata == metadata {
                        if let Some(mapped) = self.symbol_map.get(other_symbol) {
                            if mapped == symbol {
                                break;
                            }
                        }
                        mapping = other_symbol;
                        break;
                    }
                }
            }

            self.symbol_map.insert(*symbol, *mapping);
        }

        for production_info in &self.parse_table.production_infos {
            // Build a list of all field names
            for field_name in production_info.field_map.keys() {
                if let Err(i) = self.field_names.binary_search(field_name) {
                    self.field_names.insert(i, field_name.clone());
                }
            }

            for alias in &production_info.alias_sequence {
                // Generate a mapping from aliases to C identifiers.
                if let Some(alias) = &alias {
                    let existing_symbol = self.parse_table.symbols.iter().copied().find(|symbol| {
                        self.default_aliases.get(symbol).map_or_else(
                            || {
                                let (name, kind) = self.metadata_for_symbol(*symbol);
                                name == alias.value && kind == alias.kind()
                            },
                            |default_alias| default_alias == alias,
                        )
                    });

                    // Some aliases match an existing symbol in the grammar.
                    let alias_id = if let Some(existing_symbol) = existing_symbol {
                        self.symbol_ids[&self.symbol_map[&existing_symbol]].clone()
                    }
                    // Other aliases don't match any existing symbol, and need their own
                    // identifiers.
                    else {
                        if let Err(i) = self.unique_aliases.binary_search(alias) {
                            self.unique_aliases.insert(i, alias.clone());
                        }

                        if alias.is_named {
                            format!("alias_sym_{}", self.sanitize_identifier(&alias.value))
                        } else {
                            format!("anon_alias_sym_{}", self.sanitize_identifier(&alias.value))
                        }
                    };

                    self.alias_ids.entry(alias.clone()).or_insert(alias_id);
                }
            }
        }

        for (ix, (symbol, _)) in self.large_character_sets.iter().enumerate() {
            let count = self.large_character_sets[0..ix]
                .iter()
                .filter(|(sym, _)| sym == symbol)
                .count()
                + 1;
            let constant_name = if let Some(symbol) = symbol {
                format!("{}_character_set_{}", self.symbol_ids[&symbol], count)
            } else {
                format!("extras_character_set_{}", count)
            };
            self.large_character_set_info.push(LargeCharacterSetInfo {
                constant_name,
                is_used: false,
            });
        }

        // Determine which states should use the "small state" representation, and which should
        // use the normal array representation.
        let threshold = cmp::min(SMALL_STATE_THRESHOLD, self.parse_table.symbols.len() / 2);
        self.large_state_count = self
            .parse_table
            .states
            .iter()
            .enumerate()
            .take_while(|(i, s)| {
                *i <= 1 || s.terminal_entries.len() + s.nonterminal_entries.len() > threshold
            })
            .count();
    }

    fn add_includes(&mut self) {
        add_line!(self, "#include \"tree_sitter/parser.h\"");
        add_line!(self, "");
    }

    fn add_pragmas(&mut self) {
        add_line!(self, "#if defined(__GNUC__) || defined(__clang__)");
        add_line!(
            self,
            "#pragma GCC diagnostic ignored \"-Wmissing-field-initializers\""
        );
        add_line!(self, "#endif");
        add_line!(self, "");

        // Compiling large lexer functions can be very slow. Disabling optimizations
        // is not ideal, but only a very small fraction of overall parse time is
        // spent lexing, so the performance impact of this is negligible.
        if self.main_lex_table.states.len() > 300 {
            add_line!(self, "#ifdef _MSC_VER");
            add_line!(self, "#pragma optimize(\"\", off)");
            add_line!(self, "#elif defined(__clang__)");
            add_line!(self, "#pragma clang optimize off");
            add_line!(self, "#elif defined(__GNUC__)");
            add_line!(self, "#pragma GCC optimize (\"O0\")");
            add_line!(self, "#endif");
            add_line!(self, "");
        }
    }

    fn add_stats(&mut self) {
        let mut output = self.output.borrow_mut();
        let token_count = self
            .parse_table
            .symbols
            .iter()
            .filter(|symbol| {
                if symbol.is_terminal() || symbol.is_eof() {
                    true
                } else if symbol.is_external() {
                    self.syntax_grammar.external_tokens[symbol.index]
                        .corresponding_internal_token
                        .is_none()
                } else {
                    false
                }
            })
            .count();

        add_line!(self, "#define LANGUAGE_VERSION {}", self.abi_version);
        output
            .values
            .insert("LANGUAGE_VERSION".to_string(), self.abi_version.to_string());
        add_line!(
            self,
            "#define STATE_COUNT {}",
            self.parse_table.states.len()
        );
        output
            .values
            .insert("STATE_COUNT".to_string(), self.parse_table.states.len().to_string());

        add_line!(self, "#define LARGE_STATE_COUNT {}", self.large_state_count);
        output
            .values
            .insert("LARGE_STATE_COUNT".to_string(), self.large_state_count.to_string());

        add_line!(
            self,
            "#define SYMBOL_COUNT {}",
            self.parse_table.symbols.len()
        );
        output
            .values
            .insert("SYMBOL_COUNT".to_string(), self.parse_table.symbols.len().to_string());
        add_line!(self, "#define ALIAS_COUNT {}", self.unique_aliases.len());
        output
            .values
            .insert("ALIAS_COUNT".to_string(), self.unique_aliases.len().to_string());
        add_line!(self, "#define TOKEN_COUNT {}", token_count);
        output.values.insert("TOKEN_COUNT".to_string(), token_count.to_string());
        add_line!(
            self,
            "#define EXTERNAL_TOKEN_COUNT {}",
            self.syntax_grammar.external_tokens.len()
        );
        output.values.insert(
            "EXTERNAL_TOKEN_COUNT".to_string(),
            self.syntax_grammar.external_tokens.len().to_string(),
        );
        add_line!(self, "#define FIELD_COUNT {}", self.field_names.len());
        output
            .values
            .insert("FIELD_COUNT".to_string(), self.field_names.len().to_string());
        add_line!(
            self,
            "#define MAX_ALIAS_SEQUENCE_LENGTH {}",
            self.parse_table.max_aliased_production_length
        );
        output.values.insert(
            "MAX_ALIAS_SEQUENCE_LENGTH".to_string(),
            self.parse_table.max_aliased_production_length.to_string(),
        );
        add_line!(
            self,
            "#define PRODUCTION_ID_COUNT {}",
            self.parse_table.production_infos.len()
        );
        output.values.insert(
            "PRODUCTION_ID_COUNT".to_string(),
            self.parse_table.production_infos.len().to_string(),
        );
        add_line!(self, "");
    }

    fn add_symbol_enum(&mut self) {
        let mut output = self.output.borrow_mut();
        add_line!(self, "enum ts_symbol_identifiers {{");
        indent!(self);
        self.symbol_order.insert(Symbol::end(), 0);
        let mut i = 1;
        for symbol in &self.parse_table.symbols {
            if *symbol != Symbol::end() {
                self.symbol_order.insert(*symbol, i);
                add_line!(self, "{} = {},", self.symbol_ids[symbol], i);
                output.symbols.insert(self.symbol_ids[symbol].clone(), i);
                i += 1;
            }
        }
        for alias in &self.unique_aliases {
            add_line!(self, "{} = {},", self.alias_ids[alias], i);
            output.symbols.insert(self.alias_ids[alias].clone(), i);
            i += 1;
        }
        dedent!(self);
        add_line!(self, "}};");
        add_line!(self, "");
    }

    fn add_symbol_names_list(&mut self) {
        let mut output = self.output.borrow_mut();
        indent!(self);
        add_line!(self, "const char * const table[] = {{");
        for symbol in &self.parse_table.symbols {
            let name = self.sanitize_string(
                self.default_aliases
                    .get(symbol)
                    .map_or(self.metadata_for_symbol(*symbol).0, |alias| {
                        alias.value.as_str()
                    }),
            );
            add_line!(self, "[{}] = \"{}\",", self.symbol_ids[symbol], name);
            output
                .symbols_names
                .insert(self.symbol_ids[symbol].clone(), name.clone());
        }
        for alias in &self.unique_aliases {
            add_line!(
                self,
                "[{}] = \"{}\",",
                self.alias_ids[alias],
                self.sanitize_string(&alias.value)
            );
            output.symbols_names.insert(
                self.alias_ids[alias].clone(),
                self.sanitize_string(&alias.value),
            );
        }
        dedent!(self);
        add_line!(self, "}};");
        add_line!(self, "");
    }

    fn add_unique_symbol_map(&mut self) {
        let mut output = self.output.borrow_mut();
        add_line!(self, "static const TSSymbol ts_symbol_map[] = {{");
        indent!(self);
        for symbol in &self.parse_table.symbols {
            add_line!(
                self,
                "[{}] = {},",
                self.symbol_ids[symbol],
                self.symbol_ids[&self.symbol_map[symbol]],
            );
            output.unique_symbols_map.insert(
                self.symbol_ids[symbol].clone(),
                self.symbol_ids[&self.symbol_map[symbol]].clone(),
            );
        }

        for alias in &self.unique_aliases {
            add_line!(
                self,
                "[{}] = {},",
                self.alias_ids[alias],
                self.alias_ids[alias],
            );
            output
                .unique_symbols_map
                .insert(self.alias_ids[alias].clone(), self.alias_ids[alias].clone());
        }

        dedent!(self);
        add_line!(self, "}};");
        add_line!(self, "");
    }

    fn add_field_name_enum(&mut self) {
        let mut output = self.output.borrow_mut();
        add_line!(self, "enum ts_field_identifiers {{");
        indent!(self);
        for (i, field_name) in self.field_names.iter().enumerate() {
            add_line!(self, "{} = {},", self.field_id(field_name), i + 1);
            output
                .field_identifiers
                .insert(self.field_id(field_name).clone(), i + 1);
        }
        dedent!(self);
        add_line!(self, "}};");
        add_line!(self, "");
    }

    fn add_field_name_names_list(&mut self) {
        let mut output = self.output.borrow_mut();
        add_line!(self, "static const char * const ts_field_names[] = {{");
        indent!(self);
        add_line!(self, "[0] = NULL,");
        for field_name in &self.field_names {
            add_line!(
                self,
                "[{}] = \"{}\",",
                self.field_id(field_name),
                field_name
            );
            output
                .field_names
                .insert(self.field_id(field_name).clone(), field_name.clone());
        }
        dedent!(self);
        add_line!(self, "}};");
        add_line!(self, "");
    }

    fn add_symbol_metadata_list(&mut self) {
        let mut output = self.output.borrow_mut();
        add_line!(
            self,
            "static const TSSymbolMetadata ts_symbol_metadata[] = {{"
        );
        indent!(self);
        for symbol in &self.parse_table.symbols {
            add_line!(self, "[{}] = {{", self.symbol_ids[symbol]);
            indent!(self);
            if let Some(Alias { is_named, .. }) = self.default_aliases.get(symbol) {
                add_line!(self, ".visible = true,");
                add_line!(self, ".named = {},", is_named);
                output.symbol_metadata.insert(
                    self.symbol_ids[symbol].clone(),
                    SymbolMetadata {
                        visible: true,
                        named: *is_named,
                        supertype: false,
                    },
                );
            } else {
                match self.metadata_for_symbol(*symbol).1 {
                    VariableType::Named => {
                        add_line!(self, ".visible = true,");
                        add_line!(self, ".named = true,");
                        output.symbol_metadata.insert(
                            self.symbol_ids[symbol].clone(),
                            SymbolMetadata {
                                visible: true,
                                named: true,
                                supertype: false,
                            },
                        );
                    }
                    VariableType::Anonymous => {
                        add_line!(self, ".visible = true,");
                        add_line!(self, ".named = false,");
                        output.symbol_metadata.insert(
                            self.symbol_ids[symbol].clone(),
                            SymbolMetadata {
                                visible: true,
                                named: false,
                                supertype: false,
                            },
                        );
                    }
                    VariableType::Hidden => {
                        add_line!(self, ".visible = false,");
                        add_line!(self, ".named = true,");
                        if self.syntax_grammar.supertype_symbols.contains(symbol) {
                            add_line!(self, ".supertype = true,");
                        }
                        output.symbol_metadata.insert(
                            self.symbol_ids[symbol].clone(),
                            SymbolMetadata {
                                visible: false,
                                named: true,
                                supertype: self.syntax_grammar.supertype_symbols.contains(symbol),
                            },
                        );
                    }
                    VariableType::Auxiliary => {
                        add_line!(self, ".visible = false,");
                        add_line!(self, ".named = false,");
                        output.symbol_metadata.insert(
                            self.symbol_ids[symbol].clone(),
                            SymbolMetadata {
                                visible: false,
                                named: false,
                                supertype: false,
                            },
                        );
                    }
                }
            }
            dedent!(self);
            add_line!(self, "}},");
        }
        for alias in &self.unique_aliases {
            add_line!(self, "[{}] = {{", self.alias_ids[alias]);
            indent!(self);
            add_line!(self, ".visible = true,");
            add_line!(self, ".named = {},", alias.is_named);
            output.symbol_metadata.insert(
                self.alias_ids[alias].clone(),
                SymbolMetadata {
                    visible: false,
                    named: alias.is_named,
                    supertype: false,
                },
            );
            dedent!(self);
            add_line!(self, "}},");
        }
        dedent!(self);
        add_line!(self, "}};");
        add_line!(self, "");
    }

    fn add_alias_sequences(&mut self) {
        let mut output = self.output.borrow_mut();

        add_line!(
            self,
            "static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {{",
        );
        indent!(self);
        for (i, production_info) in self.parse_table.production_infos.iter().enumerate() {
            if production_info.alias_sequence.is_empty() {
                // Work around MSVC's intolerance of empty array initializers by
                // explicitly zero-initializing the first element.
                if i == 0 {
                    add_line!(self, "[0] = {{0}},");
                }
                continue;
            }

            add_line!(self, "[{}] = {{", i);
            let value = output.alias_sequences.entry(i).or_default();
            indent!(self);
            for (j, alias) in production_info.alias_sequence.iter().enumerate() {
                if let Some(alias) = alias {
                    add_line!(self, "[{}] = {},", j, self.alias_ids[alias]);
                    value.insert(j, self.alias_ids[alias].clone());
                }
            }
            dedent!(self);
            add_line!(self, "}},");
        }
        dedent!(self);
        add_line!(self, "}};");
        add_line!(self, "");
    }

    fn add_non_terminal_alias_map(&mut self) {
        let mut alias_ids_by_symbol = HashMap::new();
        for variable in &self.syntax_grammar.variables {
            for production in &variable.productions {
                for step in &production.steps {
                    if let Some(alias) = &step.alias {
                        if step.symbol.is_non_terminal()
                            && Some(alias) != self.default_aliases.get(&step.symbol)
                            && self.symbol_ids.contains_key(&step.symbol)
                        {
                            if let Some(alias_id) = self.alias_ids.get(alias) {
                                let alias_ids =
                                    alias_ids_by_symbol.entry(step.symbol).or_insert(Vec::new());
                                if let Err(i) = alias_ids.binary_search(&alias_id) {
                                    alias_ids.insert(i, alias_id);
                                }
                            }
                        }
                    }
                }
            }
        }

        let mut alias_ids_by_symbol = alias_ids_by_symbol.iter().collect::<Vec<_>>();
        alias_ids_by_symbol.sort_unstable_by_key(|e| e.0);

        let mut output = self.output.borrow_mut();

        add_line!(
            self,
            "static const uint16_t ts_non_terminal_alias_map[] = {{"
        );
        indent!(self);
        for (symbol, alias_ids) in alias_ids_by_symbol {
            let symbol_id = &self.symbol_ids[symbol];
            let public_symbol_id = &self.symbol_ids[&self.symbol_map[symbol]];
            add_line!(self, "{symbol_id}, {},", 1 + alias_ids.len());
            let val = output
                .non_terminal_alias_map
                .entry(symbol_id.to_string())
                .or_default();
            indent!(self);
            add_line!(self, "{public_symbol_id},");
            val.push(public_symbol_id.clone());
            for alias_id in alias_ids {
                add_line!(self, "{alias_id},");
                val.push(alias_id.to_string());
            }
            dedent!(self);
        }
        add_line!(self, "0,");
        dedent!(self);
        add_line!(self, "}};");
        add_line!(self, "");
    }

    /// Produces a list of the "primary state" for every state in the grammar.
    ///
    /// The "primary state" for a given state is the first encountered state that behaves
    /// identically with respect to query analysis. We derive this by keeping track of the `core_id`
    /// for each state and treating the first state with a given `core_id` as primary.
    fn add_primary_state_id_list(&mut self) {
        let mut output = self.output.borrow_mut();
        add_line!(
            self,
            "static const TSStateId ts_primary_state_ids[STATE_COUNT] = {{"
        );
        indent!(self);
        let mut first_state_for_each_core_id = HashMap::new();
        for (idx, state) in self.parse_table.states.iter().enumerate() {
            let primary_state = first_state_for_each_core_id
                .entry(state.core_id)
                .or_insert(idx);
            add_line!(self, "[{idx}] = {primary_state},");
            output.primary_state_ids.insert(idx, *primary_state);
        }
        dedent!(self);
        add_line!(self, "}};");
        add_line!(self, "");
    }

    fn add_field_sequences(&mut self) {
        let mut output = self.output.borrow_mut();
        let mut flat_field_maps = vec![];
        let mut next_flat_field_map_index = 0;
        self.get_field_map_id(
            Vec::new(),
            &mut flat_field_maps,
            &mut next_flat_field_map_index,
        );

        let mut field_map_ids = Vec::new();
        for production_info in &self.parse_table.production_infos {
            if production_info.field_map.is_empty() {
                field_map_ids.push((0, 0));
            } else {
                let mut flat_field_map = Vec::new();
                for (field_name, locations) in &production_info.field_map {
                    for location in locations {
                        flat_field_map.push((field_name.clone(), *location));
                    }
                }
                field_map_ids.push((
                    self.get_field_map_id(
                        flat_field_map.clone(),
                        &mut flat_field_maps,
                        &mut next_flat_field_map_index,
                    ),
                    flat_field_map.len(),
                ));
            }
        }

        add_line!(
            self,
            "static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {{",
        );
        indent!(self);
        for (production_id, (row_id, length)) in field_map_ids.into_iter().enumerate() {
            if length > 0 {
                add_line!(
                    self,
                    "[{production_id}] = {{.index = {row_id}, .length = {length}}},",
                );
                output
                    .field_map_slices
                    .insert(production_id, Production { row_id, length });
            }
        }
        dedent!(self);
        add_line!(self, "}};");
        add_line!(self, "");

        add_line!(
            self,
            "static const TSFieldMapEntry ts_field_map_entries[] = {{",
        );
        indent!(self);
        for (row_index, field_pairs) in flat_field_maps.into_iter().skip(1) {
            add_line!(self, "[{row_index}] =");
            let val = output.field_map_entries.entry(row_index).or_default();
            indent!(self);
            for (field_name, location) in field_pairs {
                add_whitespace!(self);
                add!(self, "{{{}, {}", self.field_id(&field_name), location.index);
                if location.inherited {
                    add!(self, ", .inherited = true");
                }
                add!(self, "}},\n");
                val.push(Entry {
                    field_id: self.field_id(&field_name).clone(),
                    index: location.index,
                    inherited: location.inherited,
                });
            }
            dedent!(self);
        }

        dedent!(self);
        add_line!(self, "}};");
        add_line!(self, "");
    }

    fn add_lex_function(&mut self, name: &str, lex_table: LexTable) {
        add_line!(
            self,
            "static bool {name}(TSLexer *lexer, TSStateId state) {{",
        );
        indent!(self);

        add_line!(self, "START_LEXER();");
        add_line!(self, "eof = lexer->eof(lexer);");
        add_line!(self, "switch (state) {{");

        indent!(self);
        for (i, state) in lex_table.states.into_iter().enumerate() {
            add_line!(self, "case {i}:");
            indent!(self);
            self.add_lex_state(name, i, state);
            dedent!(self);
        }

        add_line!(self, "default:");
        indent!(self);
        add_line!(self, "return false;");
        dedent!(self);

        dedent!(self);
        add_line!(self, "}}");

        dedent!(self);
        add_line!(self, "}}");
        add_line!(self, "");
    }

    fn add_lex_state(&mut self, name: &str, _state_ix: usize, state: LexState) {
        let output = self.output.clone();
        let mut output = output.borrow_mut();

        let val = output
            .lex_state
            .entry(name.to_string())
            .or_default()
            .entry(_state_ix)
            .or_default();
        if let Some(accept_action) = state.accept_action {
            add_line!(self, "ACCEPT_TOKEN({});", self.symbol_ids[&accept_action]);
            val.push(ActionCondition {
                action: Action::AcceptToken(self.symbol_ids[&accept_action].clone()),
                condition: Vec::new(),
            });
        }

        if let Some(eof_action) = state.eof_action {
            add_line!(self, "if (eof) ADVANCE({});", eof_action.state);
            val.push(ActionCondition {
                action: Action::Advance(eof_action.state.to_string()),
                condition: vec![Condition::Eof],
            });
        }

        let mut chars_copy = CharacterSet::empty();
        let mut large_set = CharacterSet::empty();
        let mut ruled_out_chars = CharacterSet::empty();

        // The transitions in a lex state are sorted with the single-character
        // transitions first. If there are many single-character transitions,
        // then implement them using an array of (lookahead character, state)
        // pairs, instead of individual if statements, in order to reduce compile
        // time.
        let mut leading_simple_transition_count = 0;
        let mut leading_simple_transition_range_count = 0;
        for (chars, action) in &state.advance_actions {
            if action.in_main_token
                && chars.ranges().all(|r| {
                    let start = *r.start() as u32;
                    let end = *r.end() as u32;
                    end <= start + 1 && end <= u16::MAX as u32
                })
            {
                leading_simple_transition_count += 1;
                leading_simple_transition_range_count += chars.range_count();
            } else {
                break;
            }
        }

        if leading_simple_transition_range_count >= 8 {
            let mut advance_map = Vec::new();
            add_line!(self, "ADVANCE_MAP(");
            indent!(self);
            for (chars, action) in &state.advance_actions[0..leading_simple_transition_count] {
                for range in chars.ranges() {
                    add_whitespace!(self);
                    self.add_character(*range.start());
                    add!(self, ", {},\n", action.state);
                    advance_map.push((*range.start(), action.state));
                    if range.end() > range.start() {
                        add_whitespace!(self);
                        self.add_character(*range.end());
                        add!(self, ", {},\n", action.state);
                        advance_map.push((*range.end(), action.state));
                    }
                }
                ruled_out_chars = ruled_out_chars.add(chars);
            }
            dedent!(self);
            add_line!(self, ");");
            val.push(ActionCondition {
                action: Action::AdvanceMap(advance_map),
                condition: vec![],
            });
        } else {
            leading_simple_transition_count = 0;
        }

        for (chars, action) in &state.advance_actions[leading_simple_transition_count..] {
            add_whitespace!(self);

            // The lex state's advance actions are represented with disjoint
            // sets of characters. When translating these disjoint sets into a
            // sequence of checks, we don't need to re-check conditions that
            // have already been checked due to previous transitions.
            //
            // Note that this simplification may result in an empty character set.
            // That means that the transition is guaranteed (nothing further needs to
            // be checked), not that this transition is impossible.
            let simplified_chars = chars.simplify_ignoring(&ruled_out_chars);

            // For large character sets, find the best matching character set from
            // a pre-selected list of large character sets, which are based on the
            // state transitions for invidual tokens. This transition may not exactly
            // match one of the pre-selected character sets. In that case, determine
            // the additional checks that need to be performed to match this transition.
            let mut best_large_char_set: Option<(usize, CharacterSet, CharacterSet)> = None;
            if simplified_chars.range_count() >= super::build_tables::LARGE_CHARACTER_RANGE_COUNT {
                for (ix, (_, set)) in self.large_character_sets.iter().enumerate() {
                    chars_copy.assign(&simplified_chars);
                    large_set.assign(set);
                    let intersection = chars_copy.remove_intersection(&mut large_set);
                    if !intersection.is_empty() {
                        let additions = chars_copy.simplify_ignoring(&ruled_out_chars);
                        let removals = large_set.simplify_ignoring(&ruled_out_chars);
                        let total_range_count = additions.range_count() + removals.range_count();
                        if total_range_count >= simplified_chars.range_count() {
                            continue;
                        }
                        if let Some((_, best_additions, best_removals)) = &best_large_char_set {
                            let best_range_count =
                                best_additions.range_count() + best_removals.range_count();
                            if best_range_count < total_range_count {
                                continue;
                            }
                        }
                        best_large_char_set = Some((ix, additions, removals));
                    }
                }
            }

            // Add this transition's character set to the set of ruled out characters,
            // which don't need to be checked for subsequent transitions in this state.
            ruled_out_chars = ruled_out_chars.add(chars);

            let mut large_char_set_ix = None;
            let mut asserted_chars = simplified_chars;
            let mut negated_chars = CharacterSet::empty();
            if let Some((char_set_ix, additions, removals)) = best_large_char_set {
                asserted_chars = additions;
                negated_chars = removals;
                large_char_set_ix = Some(char_set_ix);
            }

            let mut line_break = "\n".to_string();
            for _ in 0..self.indent_level + 2 {
                line_break.push_str("  ");
            }

            let has_positive_condition = large_char_set_ix.is_some() || !asserted_chars.is_empty();
            let has_negative_condition = !negated_chars.is_empty();
            let has_condition = has_positive_condition || has_negative_condition;
            if has_condition {
                add!(self, "if (");
                if has_positive_condition && has_negative_condition {
                    add!(self, "(");
                }
            }

            let mut conditions = Vec::new();
            if let Some(large_char_set_ix) = large_char_set_ix {
                let large_set = &self.large_character_sets[large_char_set_ix].1;

                // If the character set contains the null character, check that we
                // are not at the end of the file.
                let check_eof = large_set.contains('\0');
                if check_eof {
                    add!(self, "(!eof && ");
                    conditions.push(Condition::NotEof);
                    conditions.push(Condition::And);
                }

                let char_set_info = &mut self.large_character_set_info[large_char_set_ix];
                char_set_info.is_used = true;
                add!(
                    self,
                    "set_contains({}, {}, lookahead)",
                    &char_set_info.constant_name,
                    large_set.range_count(),
                );
                conditions.push(Condition::SetContains(
                    char_set_info.constant_name.clone(),
                    large_set.range_count(),
                ));
                if check_eof {
                    add!(self, ")");
                }
            }

            if !asserted_chars.is_empty() {
                if large_char_set_ix.is_some() {
                    add!(self, " ||{line_break}");
                    conditions.push(Condition::Or);
                }

                // If the character set contains the max character, than it probably
                // corresponds to a negated character class in a regex, so it will be more
                // concise and readable to express it in terms of negated ranges.
                let is_included = !asserted_chars.contains(char::MAX);
                if !is_included {
                    asserted_chars = asserted_chars.negate().add_char('\0');
                }

                self.add_character_range_conditions(
                    &asserted_chars,
                    is_included,
                    &line_break,
                    &mut conditions,
                );
            }

            if has_negative_condition {
                if has_positive_condition {
                    add!(self, ") &&{line_break}");
                    conditions.push(Condition::And);
                }
                self.add_character_range_conditions(
                    &negated_chars,
                    false,
                    &line_break,
                    &mut conditions,
                );
            }

            if has_condition {
                add!(self, ") ");
            }

            self.add_advance_action(action, val);
            add!(self, "\n");
        }

        add_line!(self, "END_STATE();");
        val.push(ActionCondition {
            action: Action::EndState,
            condition: vec![],
        });
    }

    fn add_character_range_conditions(
        &mut self,
        characters: &CharacterSet,
        is_included: bool,
        line_break: &str,
        conditions: &mut Vec<Condition>,
    ) {
        let mut out = Vec::new();
        for (i, range) in characters.ranges().enumerate() {
            let start = *range.start();
            let end = *range.end();

            if is_included {
                if i > 0 {
                    add!(self, " ||{line_break}");
                    out.push(Condition::Or);
                }

                if start == '\0' {
                    add!(self, "(!eof && ");
                    let mut out2 = vec![Condition::NotEof, Condition::And];
                    if end == '\0' {
                        add!(self, "lookahead == 0");
                        out2.push(Condition::LookaheadEq(end));
                    } else {
                        out2.push(Condition::LookaheadLe(end));
                        add!(self, "lookahead <= ");
                    }
                    self.add_character(end);
                    add!(self, ")");
                    out.push(Condition::Group(out2));
                    continue;
                } else if end == start {
                    add!(self, "lookahead == ");
                    self.add_character(start);
                    out.push(Condition::LookaheadEq(start));
                } else if end as u32 == start as u32 + 1 {
                    add!(self, "lookahead == ");
                    out.push(Condition::LookaheadEq(start));
                    out.push(Condition::Or);
                    out.push(Condition::LookaheadEq(end));
                    self.add_character(start);
                    add!(self, " ||{line_break}lookahead == ");
                    self.add_character(end);
                } else {
                    add!(self, "(");
                    out.push(Condition::Group(vec![
                        Condition::LookaheadGe(start),
                        Condition::And,
                        Condition::LookaheadLe(end),
                    ]));
                    self.add_character(start);
                    add!(self, " <= lookahead && lookahead <= ");
                    self.add_character(end);
                    add!(self, ")");
                }
            } else {
                if i > 0 {
                    add!(self, " &&{line_break}");
                    out.push(Condition::And);
                }
                if end == start {
                    out.push(Condition::LookaheadNe(start));
                    add!(self, "lookahead != ");
                    self.add_character(start);
                } else if end as u32 == start as u32 + 1 {
                    out.push(Condition::LookaheadNe(start));
                    out.push(Condition::And);
                    out.push(Condition::LookaheadNe(end));
                    add!(self, "lookahead != ");
                    self.add_character(start);
                    add!(self, " &&{line_break}lookahead != ");
                    self.add_character(end);
                } else if start != '\0' {
                    out.push(Condition::Group(vec![
                        Condition::LookaheadGt(start),
                        Condition::And,
                        Condition::LookaheadLt(end),
                    ]));
                    add!(self, "(lookahead < ");
                    self.add_character(start);
                    add!(self, " || ");
                    self.add_character(end);
                    add!(self, " < lookahead)");
                } else {
                    out.push(Condition::LookaheadGt(start));
                    add!(self, "lookahead > ");
                    self.add_character(end);
                }
            }
        }
        conditions.push(Condition::Group(out));
    }

    fn add_character_set(&mut self, ix: usize) {
        let characters = self.large_character_sets[ix].1.clone();
        let info = &self.large_character_set_info[ix];
        if !info.is_used {
            return;
        }

        add_line!(
            self,
            "static TSCharacterRange {}[] = {{",
            info.constant_name
        );
        let output = self.output.clone();
        let mut output = output.borrow_mut();
        let val = output
            .char_set
            .entry(info.constant_name.clone())
            .or_default();

        indent!(self);
        for (ix, range) in characters.ranges().enumerate() {
            let column = ix % 8;
            if column == 0 {
                if ix > 0 {
                    add!(self, "\n");
                }
                add_whitespace!(self);
            } else {
                add!(self, " ");
            }
            add!(self, "{{");
            self.add_character(*range.start());

            add!(self, ", ");
            self.add_character(*range.end());
            add!(self, "}},");
            val.push((*range.start(), *range.end()));
        }
        add!(self, "\n");
        dedent!(self);
        add_line!(self, "}};");
        add_line!(self, "");
    }

    fn add_advance_action(&mut self, action: &AdvanceAction, val: &mut Vec<ActionCondition>) {
        if action.in_main_token {
            val.push(ActionCondition {
                condition: Vec::new(),
                action: Action::Advance(action.state.to_string()),
            });
            add!(self, "ADVANCE({});", action.state);
        } else {
            val.push(ActionCondition {
                condition: Vec::new(),
                action: Action::Skip(action.state.to_string()),
            });
            add!(self, "SKIP({});", action.state);
        }
    }

    fn add_lex_modes_list(&mut self) {
        add_line!(
            self,
            "static const TSLexMode ts_lex_modes[STATE_COUNT] = {{"
        );
        indent!(self);
        let output = self.output.clone();
        let mut output = output.borrow_mut();

        let lex_modes = &mut output.lex_modes;

        for (i, state) in self.parse_table.states.iter().enumerate() {
            if state.is_end_of_non_terminal_extra() {
                add_line!(self, "[{i}] = {{(TSStateId)(-1)}},");
                lex_modes.insert(i, LexMode::EndOfNonTerminalExtra);
            } else if state.external_lex_state_id > 0 {
                add_line!(
                    self,
                    "[{i}] = {{.lex_state = {}, .external_lex_state = {}}},",
                    state.lex_state_id,
                    state.external_lex_state_id
                );
                lex_modes.insert(
                    i,
                    LexMode::External {
                        lex_state: state.lex_state_id,
                        external_lex_state: state.external_lex_state_id,
                    },
                );
            } else {
                add_line!(self, "[{i}] = {{.lex_state = {}}},", state.lex_state_id);
                lex_modes.insert(
                    i,
                    LexMode::Normal {
                        lex_state: state.lex_state_id,
                    },
                );
            }
        }
        dedent!(self);
        add_line!(self, "}};");
        add_line!(self, "");
    }

    fn add_external_token_enum(&mut self) {
        add_line!(self, "enum ts_external_scanner_symbol_identifiers {{");
        indent!(self);
        let output = self.output.clone();
        let mut output = output.borrow_mut();

        let val = &mut output.external_scanner_symbol_identifiers;
        for i in 0..self.syntax_grammar.external_tokens.len() {
            add_line!(
                self,
                "{} = {},",
                self.external_token_id(&self.syntax_grammar.external_tokens[i]),
                i
            );
            val.insert(
                self.external_token_id(&self.syntax_grammar.external_tokens[i]),
                i,
            );
        }
        dedent!(self);
        add_line!(self, "}};");
        add_line!(self, "");
    }

    fn add_external_scanner_symbol_map(&mut self) {
        add_line!(
            self,
            "static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {{"
        );
        indent!(self);
        let output = self.output.clone();
        let mut output = output.borrow_mut();

        let val = &mut output.external_scanner_symbol_map;
        for i in 0..self.syntax_grammar.external_tokens.len() {
            let token = &self.syntax_grammar.external_tokens[i];
            let id_token = token
                .corresponding_internal_token
                .unwrap_or_else(|| Symbol::external(i));
            add_line!(
                self,
                "[{}] = {},",
                self.external_token_id(token),
                self.symbol_ids[&id_token],
            );
            val.insert(
                self.external_token_id(token),
                self.symbol_ids[&id_token].clone(),
            );
        }
        dedent!(self);
        add_line!(self, "}};");
        add_line!(self, "");
    }

    fn add_external_scanner_states_list(&mut self) {
        add_line!(
            self,
            "static const bool ts_external_scanner_states[{}][EXTERNAL_TOKEN_COUNT] = {{",
            self.parse_table.external_lex_states.len(),
        );
        indent!(self);
        let output = self.output.clone();
        let mut output = output.borrow_mut();

        let val = &mut output.external_scanner_states;
        for i in 0..self.parse_table.external_lex_states.len() {
            if !self.parse_table.external_lex_states[i].is_empty() {
                add_line!(self, "[{}] = {{", i);
                let val2 = val.entry(i).or_default();
                indent!(self);
                for token in self.parse_table.external_lex_states[i].iter() {
                    add_line!(
                        self,
                        "[{}] = true,",
                        self.external_token_id(&self.syntax_grammar.external_tokens[token.index])
                    );
                    val2.insert(
                        self.external_token_id(&self.syntax_grammar.external_tokens[token.index]),
                        true,
                    );
                }
                dedent!(self);
                add_line!(self, "}},");
            }
        }
        dedent!(self);
        add_line!(self, "}};");
        add_line!(self, "");
    }

    fn add_parse_table(&mut self) {
        let mut parse_table_entries = HashMap::new();
        let mut next_parse_action_list_index = 0;

        self.get_parse_action_list_id(
            &ParseTableEntry {
                actions: Vec::new(),
                reusable: false,
            },
            &mut parse_table_entries,
            &mut next_parse_action_list_index,
        );

        let output = self.output.clone();
        let mut output = output.borrow_mut();

        let val = &mut output.parse_table;
        add_line!(
            self,
            "static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {{",
        );
        indent!(self);

        let mut terminal_entries = Vec::new();
        let mut nonterminal_entries = Vec::new();

        for (i, state) in self
            .parse_table
            .states
            .iter()
            .enumerate()
            .take(self.large_state_count)
        {
            add_line!(self, "[{}] = {{", i);
            indent!(self);

            let val2 = val.entry(i).or_default();

            // Ensure the entries are in a deterministic order, since they are
            // internally represented as a hash map.
            terminal_entries.clear();
            nonterminal_entries.clear();
            terminal_entries.extend(state.terminal_entries.iter());
            nonterminal_entries.extend(state.nonterminal_entries.iter());
            terminal_entries.sort_unstable_by_key(|e| self.symbol_order.get(e.0));
            nonterminal_entries.sort_unstable_by_key(|k| k.0);

            for (symbol, action) in &nonterminal_entries {
                add_line!(
                    self,
                    "[{}] = STATE({}),",
                    self.symbol_ids[symbol],
                    match action {
                        GotoAction::Goto(state) => *state,
                        GotoAction::ShiftExtra => i,
                    }
                );
                val2.insert(
                    self.symbol_ids.get(symbol).cloned().unwrap(),
                    ParseThingy::State(match action {
                        GotoAction::Goto(state) => *state,
                        GotoAction::ShiftExtra => i,
                    }),
                );
            }

            for (symbol, entry) in &terminal_entries {
                let entry_id = self.get_parse_action_list_id(
                    entry,
                    &mut parse_table_entries,
                    &mut next_parse_action_list_index,
                );
                add_line!(self, "[{}] = ACTIONS({entry_id}),", self.symbol_ids[symbol]);
                val2.insert(
                    self.symbol_ids.get(symbol).cloned().unwrap(),
                    ParseThingy::Actions(entry_id),
                );
            }
            dedent!(self);
            add_line!(self, "}},");
        }
        dedent!(self);
        add_line!(self, "}};");
        add_line!(self, "");

        let val = &mut output.small_parse_table;
        if self.large_state_count < self.parse_table.states.len() {
            add_line!(self, "static const uint16_t ts_small_parse_table[] = {{");
            indent!(self);

            let mut index = 0;
            let mut small_state_indices = Vec::new();
            let mut symbols_by_value = HashMap::<(usize, SymbolType), Vec<Symbol>>::new();
            for state in self.parse_table.states.iter().skip(self.large_state_count) {
                small_state_indices.push(index);
                symbols_by_value.clear();

                terminal_entries.clear();
                terminal_entries.extend(state.terminal_entries.iter());
                terminal_entries.sort_unstable_by_key(|e| self.symbol_order.get(e.0));

                // In a given parse state, many lookahead symbols have the same actions.
                // So in the "small state" representation, group symbols by their action
                // in order to avoid repeating the action.
                for (symbol, entry) in &terminal_entries {
                    let entry_id = self.get_parse_action_list_id(
                        entry,
                        &mut parse_table_entries,
                        &mut next_parse_action_list_index,
                    );
                    symbols_by_value
                        .entry((entry_id, SymbolType::Terminal))
                        .or_default()
                        .push(**symbol);
                }
                for (symbol, action) in &state.nonterminal_entries {
                    let state_id = match action {
                        GotoAction::Goto(i) => *i,
                        GotoAction::ShiftExtra => {
                            self.large_state_count + small_state_indices.len() - 1
                        }
                    };
                    symbols_by_value
                        .entry((state_id, SymbolType::NonTerminal))
                        .or_default()
                        .push(*symbol);
                }

                let mut values_with_symbols = symbols_by_value.drain().collect::<Vec<_>>();
                values_with_symbols.sort_unstable_by_key(|((value, kind), symbols)| {
                    (symbols.len(), *kind, *value, symbols[0])
                });

                add_line!(self, "[{index}] = {},", values_with_symbols.len());
                indent!(self);

                let mut truc = Vec::new();
                for ((value, kind), symbols) in &mut values_with_symbols {
                    let thingy = if *kind == SymbolType::NonTerminal {
                        add_line!(self, "STATE({value}), {},", symbols.len());
                        (ParseThingy::State(*value), symbols.len())
                    } else {
                        add_line!(self, "ACTIONS({value}), {},", symbols.len());
                        (ParseThingy::Actions(*value), symbols.len())
                    };

                    symbols.sort_unstable();
                    indent!(self);
                    for symbol in symbols.iter() {
                        add_line!(self, "{},", self.symbol_ids[symbol]);
                    }
                    let a = (
                        thingy,
                        symbols
                            .iter()
                            .map(|s| self.symbol_ids[s].clone())
                            .collect::<Vec<_>>(),
                    );
                    truc.push(a);
                    dedent!(self);
                }
                val.insert(index, (values_with_symbols.len(), truc));

                dedent!(self);

                index += 1 + values_with_symbols
                    .iter()
                    .map(|(_, symbols)| 2 + symbols.len())
                    .sum::<usize>();
            }

            dedent!(self);
            add_line!(self, "}};");
            add_line!(self, "");

            add_line!(
                self,
                "static const uint32_t ts_small_parse_table_map[] = {{"
            );
            let val = &mut output.small_parse_table_map;
            indent!(self);
            for i in self.large_state_count..self.parse_table.states.len() {
                add_line!(
                    self,
                    "[SMALL_STATE({i})] = {},",
                    small_state_indices[i - self.large_state_count]
                );
                val.insert(i, small_state_indices[i - self.large_state_count]);
            }
            dedent!(self);
            add_line!(self, "}};");
            add_line!(self, "");
        }

        let mut parse_table_entries = parse_table_entries
            .into_iter()
            .map(|(entry, i)| (i, entry))
            .collect::<Vec<_>>();
        parse_table_entries.sort_by_key(|(index, _)| *index);
        drop(output);
        self.add_parse_action_list(parse_table_entries);
    }

    fn add_parse_action_list(&mut self, parse_table_entries: Vec<(usize, ParseTableEntry)>) {
        add_line!(
            self,
            "static const TSParseActionEntry ts_parse_actions[] = {{"
        );
        let output = self.output.clone();
        let mut output = output.borrow_mut();

        let val = &mut output.parse_actions;

        indent!(self);
        for (i, entry) in parse_table_entries {
            add!(
                self,
                "  [{i}] = {{.entry = {{.count = {}, .reusable = {}}}}},",
                entry.actions.len(),
                entry.reusable
            );
            let mut actions = Vec::new();
            for action in entry.actions {
                add!(self, " ");
                match action {
                    ParseAction::Accept => {
                        add!(self, " ACCEPT_INPUT()");
                        actions.push(MyParseAction::AcceptInput);
                    }
                    ParseAction::Recover => {
                        add!(self, "RECOVER()");
                        actions.push(MyParseAction::Recover);
                    }
                    ParseAction::ShiftExtra => {
                        add!(self, "SHIFT_EXTRA()");
                        actions.push(MyParseAction::ShiftExtra);
                    }
                    ParseAction::Shift {
                        state,
                        is_repetition,
                    } => {
                        if is_repetition {
                            add!(self, "SHIFT_REPEAT({state})");
                            actions.push(MyParseAction::ShiftRepeat(state));
                        } else {
                            actions.push(MyParseAction::Shift(state));
                            add!(self, "SHIFT({state})");
                        }
                    }
                    ParseAction::Reduce {
                        symbol,
                        child_count,
                        dynamic_precedence,
                        production_id,
                        ..
                    } => {
                        add!(
                            self,
                            "REDUCE({}, {child_count}, {dynamic_precedence}, {production_id})",
                            self.symbol_ids[&symbol]
                        );
                        actions.push(MyParseAction::Reduce(
                            self.symbol_ids[&symbol].clone(),
                            child_count,
                            dynamic_precedence,
                            production_id,
                        ));
                    }
                }
                add!(self, ",");
            }
            val.insert(i, (actions, entry.reusable));
            add!(self, "\n");
        }
        dedent!(self);
        add_line!(self, "}};");
        add_line!(self, "");
    }

    fn add_parser_export(&mut self) {
        let language_function_name = format!("tree_sitter_{}", self.language_name);
        let external_scanner_name = format!("{language_function_name}_external_scanner");

        add_line!(self, "#ifdef __cplusplus");
        add_line!(self, r#"extern "C" {{"#);
        add_line!(self, "#endif");

        if !self.syntax_grammar.external_tokens.is_empty() {
            add_line!(self, "void *{external_scanner_name}_create(void);");
            add_line!(self, "void {external_scanner_name}_destroy(void *);");
            add_line!(
                self,
                "bool {external_scanner_name}_scan(void *, TSLexer *, const bool *);",
            );
            add_line!(
                self,
                "unsigned {external_scanner_name}_serialize(void *, char *);",
            );
            add_line!(
                self,
                "void {external_scanner_name}_deserialize(void *, const char *, unsigned);",
            );
            add_line!(self, "");
        }

        add_line!(self, "#ifdef TREE_SITTER_HIDE_SYMBOLS");
        add_line!(self, "#define TS_PUBLIC");
        add_line!(self, "#elif defined(_WIN32)");
        add_line!(self, "#define TS_PUBLIC __declspec(dllexport)");
        add_line!(self, "#else");
        add_line!(
            self,
            "#define TS_PUBLIC __attribute__((visibility(\"default\")))"
        );
        add_line!(self, "#endif");
        add_line!(self, "");

        add_line!(
            self,
            "TS_PUBLIC const TSLanguage *{language_function_name}(void) {{",
        );
        indent!(self);
        add_line!(self, "static const TSLanguage language = {{");
        indent!(self);
        add_line!(self, ".version = LANGUAGE_VERSION,");

        // Quantities
        add_line!(self, ".symbol_count = SYMBOL_COUNT,");
        add_line!(self, ".alias_count = ALIAS_COUNT,");
        add_line!(self, ".token_count = TOKEN_COUNT,");
        add_line!(self, ".external_token_count = EXTERNAL_TOKEN_COUNT,");
        add_line!(self, ".state_count = STATE_COUNT,");
        add_line!(self, ".large_state_count = LARGE_STATE_COUNT,");
        add_line!(self, ".production_id_count = PRODUCTION_ID_COUNT,");
        add_line!(self, ".field_count = FIELD_COUNT,");
        add_line!(
            self,
            ".max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,"
        );

        // Parse table
        add_line!(self, ".parse_table = &ts_parse_table[0][0],");
        if self.large_state_count < self.parse_table.states.len() {
            add_line!(self, ".small_parse_table = ts_small_parse_table,");
            add_line!(self, ".small_parse_table_map = ts_small_parse_table_map,");
        }
        add_line!(self, ".parse_actions = ts_parse_actions,");

        // Metadata
        add_line!(self, ".symbol_names = ts_symbol_names,");
        if !self.field_names.is_empty() {
            add_line!(self, ".field_names = ts_field_names,");
            add_line!(self, ".field_map_slices = ts_field_map_slices,");
            add_line!(self, ".field_map_entries = ts_field_map_entries,");
        }
        add_line!(self, ".symbol_metadata = ts_symbol_metadata,");
        add_line!(self, ".public_symbol_map = ts_symbol_map,");
        add_line!(self, ".alias_map = ts_non_terminal_alias_map,");
        if !self.parse_table.production_infos.is_empty() {
            add_line!(self, ".alias_sequences = &ts_alias_sequences[0][0],");
        }

        // Lexing
        add_line!(self, ".lex_modes = ts_lex_modes,");
        add_line!(self, ".lex_fn = ts_lex,");
        if let Some(keyword_capture_token) = self.keyword_capture_token {
            add_line!(self, ".keyword_lex_fn = ts_lex_keywords,");
            add_line!(
                self,
                ".keyword_capture_token = {},",
                self.symbol_ids[&keyword_capture_token]
            );
        }

        if !self.syntax_grammar.external_tokens.is_empty() {
            add_line!(self, ".external_scanner = {{");
            indent!(self);
            add_line!(self, "&ts_external_scanner_states[0][0],");
            add_line!(self, "ts_external_scanner_symbol_map,");
            add_line!(self, "{external_scanner_name}_create,");
            add_line!(self, "{external_scanner_name}_destroy,");
            add_line!(self, "{external_scanner_name}_scan,");
            add_line!(self, "{external_scanner_name}_serialize,");
            add_line!(self, "{external_scanner_name}_deserialize,");
            dedent!(self);
            add_line!(self, "}},");
        }

        if self.abi_version >= ABI_VERSION_WITH_PRIMARY_STATES {
            add_line!(self, ".primary_state_ids = ts_primary_state_ids,");
        }

        dedent!(self);
        add_line!(self, "}};");
        add_line!(self, "return &language;");
        dedent!(self);
        add_line!(self, "}}");
        add_line!(self, "#ifdef __cplusplus");
        add_line!(self, "}}");
        add_line!(self, "#endif");
    }

    fn get_parse_action_list_id(
        &self,
        entry: &ParseTableEntry,
        parse_table_entries: &mut HashMap<ParseTableEntry, usize>,
        next_parse_action_list_index: &mut usize,
    ) -> usize {
        if let Some(&index) = parse_table_entries.get(entry) {
            index
        } else {
            let result = *next_parse_action_list_index;
            parse_table_entries.insert(entry.clone(), result);
            *next_parse_action_list_index += 1 + entry.actions.len();
            result
        }
    }

    fn get_field_map_id(
        &self,
        flat_field_map: Vec<(String, FieldLocation)>,
        flat_field_maps: &mut Vec<(usize, Vec<(String, FieldLocation)>)>,
        next_flat_field_map_index: &mut usize,
    ) -> usize {
        if let Some((index, _)) = flat_field_maps.iter().find(|(_, e)| *e == *flat_field_map) {
            return *index;
        }

        let result = *next_flat_field_map_index;
        *next_flat_field_map_index += flat_field_map.len();
        flat_field_maps.push((result, flat_field_map));
        result
    }

    fn external_token_id(&self, token: &ExternalToken) -> String {
        format!(
            "ts_external_token_{}",
            self.sanitize_identifier(&token.name)
        )
    }

    fn assign_symbol_id(&mut self, symbol: Symbol, used_identifiers: &mut HashSet<String>) {
        let mut id;
        if symbol == Symbol::end() {
            id = "ts_builtin_sym_end".to_string();
        } else {
            let (name, kind) = self.metadata_for_symbol(symbol);
            id = match kind {
                VariableType::Auxiliary => format!("aux_sym_{}", self.sanitize_identifier(name)),
                VariableType::Anonymous => format!("anon_sym_{}", self.sanitize_identifier(name)),
                VariableType::Hidden | VariableType::Named => {
                    format!("sym_{}", self.sanitize_identifier(name))
                }
            };

            let mut suffix_number = 1;
            let mut suffix = String::new();
            while used_identifiers.contains(&id) {
                id.drain(id.len() - suffix.len()..);
                suffix_number += 1;
                suffix = suffix_number.to_string();
                id += &suffix;
            }
        }

        used_identifiers.insert(id.clone());
        self.symbol_ids.insert(symbol, id);
    }

    fn field_id(&self, field_name: &str) -> String {
        format!("field_{field_name}")
    }

    fn metadata_for_symbol(&self, symbol: Symbol) -> (&str, VariableType) {
        match symbol.kind {
            SymbolType::End | SymbolType::EndOfNonTerminalExtra => ("end", VariableType::Hidden),
            SymbolType::NonTerminal => {
                let variable = &self.syntax_grammar.variables[symbol.index];
                (&variable.name, variable.kind)
            }
            SymbolType::Terminal => {
                let variable = &self.lexical_grammar.variables[symbol.index];
                (&variable.name, variable.kind)
            }
            SymbolType::External => {
                let token = &self.syntax_grammar.external_tokens[symbol.index];
                (&token.name, token.kind)
            }
        }
    }

    fn sanitize_identifier(&self, name: &str) -> String {
        let mut result = String::with_capacity(name.len());
        for c in name.chars() {
            if c.is_ascii_alphanumeric() || c == '_' {
                result.push(c);
            } else {
                'special_chars: {
                    let replacement = match c {
                        ' ' if name.len() == 1 => "SPACE",
                        '~' => "TILDE",
                        '`' => "BQUOTE",
                        '!' => "BANG",
                        '@' => "AT",
                        '#' => "POUND",
                        '$' => "DOLLAR",
                        '%' => "PERCENT",
                        '^' => "CARET",
                        '&' => "AMP",
                        '*' => "STAR",
                        '(' => "LPAREN",
                        ')' => "RPAREN",
                        '-' => "DASH",
                        '+' => "PLUS",
                        '=' => "EQ",
                        '{' => "LBRACE",
                        '}' => "RBRACE",
                        '[' => "LBRACK",
                        ']' => "RBRACK",
                        '\\' => "BSLASH",
                        '|' => "PIPE",
                        ':' => "COLON",
                        ';' => "SEMI",
                        '"' => "DQUOTE",
                        '\'' => "SQUOTE",
                        '<' => "LT",
                        '>' => "GT",
                        ',' => "COMMA",
                        '.' => "DOT",
                        '?' => "QMARK",
                        '/' => "SLASH",
                        '\n' => "LF",
                        '\r' => "CR",
                        '\t' => "TAB",
                        '\0' => "NULL",
                        '\u{0001}' => "SOH",
                        '\u{0002}' => "STX",
                        '\u{0003}' => "ETX",
                        '\u{0004}' => "EOT",
                        '\u{0005}' => "ENQ",
                        '\u{0006}' => "ACK",
                        '\u{0007}' => "BEL",
                        '\u{0008}' => "BS",
                        '\u{000b}' => "VTAB",
                        '\u{000c}' => "FF",
                        '\u{000e}' => "SO",
                        '\u{000f}' => "SI",
                        '\u{0010}' => "DLE",
                        '\u{0011}' => "DC1",
                        '\u{0012}' => "DC2",
                        '\u{0013}' => "DC3",
                        '\u{0014}' => "DC4",
                        '\u{0015}' => "NAK",
                        '\u{0016}' => "SYN",
                        '\u{0017}' => "ETB",
                        '\u{0018}' => "CAN",
                        '\u{0019}' => "EM",
                        '\u{001a}' => "SUB",
                        '\u{001b}' => "ESC",
                        '\u{001c}' => "FS",
                        '\u{001d}' => "GS",
                        '\u{001e}' => "RS",
                        '\u{001f}' => "US",
                        '\u{007F}' => "DEL",
                        '\u{FEFF}' => "BOM",
                        '\u{0080}'..='\u{FFFF}' => {
                            result.push_str(&format!("u{:04x}", c as u32));
                            break 'special_chars;
                        }
                        '\u{10000}'..='\u{10FFFF}' => {
                            result.push_str(&format!("U{:08x}", c as u32));
                            break 'special_chars;
                        }
                        '0'..='9' | 'a'..='z' | 'A'..='Z' | '_' => unreachable!(),
                        ' ' => break 'special_chars,
                    };
                    if !result.is_empty() && !result.ends_with('_') {
                        result.push('_');
                    }
                    result += replacement;
                }
            }
        }
        result
    }

    fn sanitize_string(&self, name: &str) -> String {
        let mut result = String::with_capacity(name.len());
        for c in name.chars() {
            match c {
                '\"' => result += "\\\"",
                '?' => result += "\\?",
                '\\' => result += "\\\\",
                '\u{0007}' => result += "\\a",
                '\u{0008}' => result += "\\b",
                '\u{000b}' => result += "\\v",
                '\u{000c}' => result += "\\f",
                '\n' => result += "\\n",
                '\r' => result += "\\r",
                '\t' => result += "\\t",
                '\0' => result += "\\0",
                '\u{0001}'..='\u{001f}' => result += &format!("\\x{:02x}", c as u32),
                '\u{007F}'..='\u{FFFF}' => result += &format!("\\u{:04x}", c as u32),
                '\u{10000}'..='\u{10FFFF}' => {
                    result.push_str(&format!("\\U{:08x}", c as u32));
                }
                _ => result.push(c),
            }
        }
        result
    }

    fn add_character(&mut self, c: char) {
        match c {
            '\'' => add!(self, "'\\''"),
            '\\' => add!(self, "'\\\\'"),
            '\u{000c}' => add!(self, "'\\f'"),
            '\n' => add!(self, "'\\n'"),
            '\t' => add!(self, "'\\t'"),
            '\r' => add!(self, "'\\r'"),
            _ => {
                if c == '\0' {
                    add!(self, "0")
                } else if c == ' ' || c.is_ascii_graphic() {
                    add!(self, "'{c}'");
                } else {
                    add!(self, "0x{:02x}", c as u32);
                }
            }
        }
    }
}

/// Returns a String of C code for the given components of a parser.
///
/// # Arguments
///
/// * `name` - A string slice containing the name of the language
/// * `parse_table` - The generated parse table for the language
/// * `main_lex_table` - The generated lexing table for the language
/// * `keyword_lex_table` - The generated keyword lexing table for the language
/// * `keyword_capture_token` - A symbol indicating which token is used for keyword capture, if any.
/// * `syntax_grammar` - The syntax grammar extracted from the language's grammar
/// * `lexical_grammar` - The lexical grammar extracted from the language's grammar
/// * `default_aliases` - A map describing the global rename rules that should apply. the keys are
///   symbols that are *always* aliased in the same way, and the values are the aliases that are
///   applied to those symbols.
/// * `abi_version` - The language ABI version that should be generated. Usually you want
///   Tree-sitter's current version, but right after making an ABI change, it may be useful to
///   generate code with the previous ABI.
#[allow(clippy::too_many_arguments)]
pub fn render_c_code(
    name: &str,
    tables: Tables,
    syntax_grammar: SyntaxGrammar,
    lexical_grammar: LexicalGrammar,
    default_aliases: AliasMap,
    abi_version: usize,
) -> String {
    assert!(
        (ABI_VERSION_MIN..=ABI_VERSION_MAX).contains(&abi_version),
        "This version of Tree-sitter can only generate parsers with ABI version {ABI_VERSION_MIN} - {ABI_VERSION_MAX}, not {abi_version}",
    );

    let ret = Generator {
        output: OUTPUT.with(Rc::clone),
        buffer: String::new(),
        indent_level: 0,
        language_name: name.to_string(),
        large_state_count: 0,
        parse_table: tables.parse_table,
        main_lex_table: tables.main_lex_table,
        keyword_lex_table: tables.keyword_lex_table,
        keyword_capture_token: tables.word_token,
        large_character_sets: tables.large_character_sets,
        large_character_set_info: Vec::new(),
        syntax_grammar,
        lexical_grammar,
        default_aliases,
        symbol_ids: HashMap::new(),
        symbol_order: HashMap::new(),
        alias_ids: HashMap::new(),
        symbol_map: HashMap::new(),
        unique_aliases: Vec::new(),
        field_names: Vec::new(),
        abi_version,
    }
    .generate();

    let mut file = std::fs::OpenOptions::new()
        .write(true)
        .truncate(true)
        .create(true)
        .open("./out.json")
        .unwrap();
    let val = OUTPUT.with(|s| s.clone());
    serde_json::to_writer(&mut file, &*val.borrow()).unwrap();

    ret
}
