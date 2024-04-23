use indexmap::IndexMap;

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
    pub values: IndexMap<String, String>,
    pub symbols: IndexMap<String, usize>,
    pub symbols_names: IndexMap<String, String>,
    pub unique_symbols_map: IndexMap<String, String>,
    pub field_identifiers: IndexMap<String, usize>,
    pub field_names: IndexMap<String, String>,
    pub symbol_metadata: IndexMap<String, SymbolMetadata>,
    pub alias_sequences: IndexMap<usize, IndexMap<usize, String>>,
    pub non_terminal_alias_map: IndexMap<String, Vec<String>>,
    pub primary_state_ids: IndexMap<usize, usize>,
    pub field_map_slices: IndexMap<usize, Production>,
    pub field_map_entries: IndexMap<usize, Vec<Entry>>,
    pub lex_state: IndexMap<String, IndexMap<usize, Vec<ActionCondition>>>,
    pub char_set: IndexMap<String, Vec<(char, char)>>,
    pub lex_modes: IndexMap<usize, LexMode>,
    pub external_scanner_symbol_identifiers: IndexMap<String, usize>,
    pub external_scanner_symbol_map: IndexMap<String, String>,
    pub external_scanner_states: (usize, IndexMap<usize, IndexMap<String, bool>>),
    pub parse_table: IndexMap<usize, IndexMap<String, ParseThingy>>,
    pub small_parse_table: IndexMap<usize, (usize, Vec<((ParseThingy, usize), Vec<String>)>)>,
    pub small_parse_table_map: IndexMap<usize, usize>,
    pub parse_actions: IndexMap<usize, (Vec<MyParseAction>, bool)>,
}
