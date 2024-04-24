#![allow(unused)]
mod serde_mod;

use color_eyre::{eyre::eyre, Result};
use serde_mod::{Condition, Entry, LexMode, Production, SymbolMetadata};

use crate::serde_mod::MyParseAction;

static DATA: &str = include_str!("../out.json");

trait PrintLines {
    fn print_lines(&self);
    fn count_lines(&self);
}

impl PrintLines for Vec<String> {
    fn print_lines(&self) {
        let mut over_80 = 0;
        self.iter()
            .inspect(|l| {
                over_80 += (l.len() > 80) as usize;
            })
            .for_each(|l| println!("{l}"));
        self.count_lines();
        println!("{over_80} lines over 80 characters");
    }
    fn count_lines(&self) {
        println!("{} lines", self.len());
    }
}

// serde_mod::Output {
//         // mut symbol_names,
//         // mut values,
//         // mut symbols,
//         // mut symbols_names,
//         // mut unique_symbols_map,
//         // mut field_identifiers,
//         // mut field_names,
//         // mut symbol_metadata,
//         // mut alias_sequences,
//         // mut non_terminal_alias_map,
//         // mut primary_state_ids,
//         // mut field_map_slices,
//         // mut field_map_entries,
//         // mut lex_state,
//         // mut char_set,
//         // mut lex_modes,
//         // mut external_scanner_symbol_identifiers,
//         // mut external_scanner_symbol_map,
//         // mut external_scanner_states,
//         // mut parse_table,
//         // mut small_parse_table,
//         // mut small_parse_table_map,
//         // mut parse_actions,
//     }

fn escape_char(chr: char) -> impl std::fmt::Display {
    struct CEscapedChar(char);

    impl std::fmt::Display for CEscapedChar {
        fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
            let c = self.0;
            match c {
                '\'' => write!(f, "'\\''")?,
                '\\' => write!(f, "'\\\\'")?,
                '\u{000c}' => write!(f, "'\\f'")?,
                '\n' => write!(f, "'\\n'")?,
                '\t' => write!(f, "'\\t'")?,
                '\r' => write!(f, "'\\r'")?,
                _ => {
                    if c == '\0' {
                        write!(f, "0")?
                    } else if c == ' ' || c.is_ascii_graphic() {
                        write!(f, "'{c}'")?;
                    } else {
                        write!(f, "0x{:02x}", c as u32)?;
                    }
                }
            }
            Ok(())
        }
    }

    CEscapedChar(chr)
}
fn escape_str(s: &str) -> impl std::fmt::Display + '_ {
    struct CEscapedStr<'a>(&'a str);

    impl<'a> std::fmt::Display for CEscapedStr<'a> {
        fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
            for c in self.0.chars() {
                match c {
                    '\"' => write!(f, "\\\""),
                    '?' => write!(f, "\\?"),
                    '\\' => write!(f, "\\\\"),
                    '\u{0007}' => write!(f, "\\a"),
                    '\u{0008}' => write!(f, "\\b"),
                    '\u{000b}' => write!(f, "\\v"),
                    '\u{000c}' => write!(f, "\\f"),
                    '\n' => write!(f, "\\n"),
                    '\r' => write!(f, "\\r"),
                    '\t' => write!(f, "\\t"),
                    '\0' => write!(f, "\\0"),
                    '\u{0001}'..='\u{001f}' => write!(f, "\\x{:02x}", c as u32),
                    '\u{007F}'..='\u{FFFF}' => write!(f, "\\u{:04x}", c as u32),
                    '\u{10000}'..='\u{10FFFF}' => write!(f, "\\U{:08x}", c as u32),
                    _ => write!(f, "{c}"),
                }?;
            }
            Ok(())
        }
    }

    CEscapedStr(s)
}

fn main() -> Result<()> {
    color_eyre::install()?;

    let data: serde_mod::Output = serde_json::from_str(DATA)?;
    // parse_actions(&data)?.print_lines();
    // small_parse_table_map(&data)?.print_lines();
    // small_parse_table(&data)?.print_lines();
    // parse_table(&data)?.print_lines();
    // external_scanner_states(&data)?.print_lines();
    // external_scanner_symbol_map(&data)?.print_lines();
    // external_scanner_symbol_identifiers(&data)?.print_lines();
    // lex_modes(&data)?.print_lines();
    // char_set(&data)?.print_lines();
    lex_state(&data)?.print_lines(); // TODO!

    // field_map_entries(&data)?.print_lines();
    // field_map_slices(&data)?.print_lines();
    // primary_state_ids(&data)?.print_lines();
    // non_terminal_alias_map(&data)?.print_lines();
    // alias_sequences(&data)?.print_lines();
    // symbol_metadata(&data)?.print_lines();
    // field_names(&data)?.print_lines();
    // field_identifiers(&data)?.print_lines();
    // unique_symbols_map(&data)?.print_lines();
    // symbols_names(&data)?.print_lines();
    // symbols(&data)?.print_lines();
    // values(&data)?.print_lines();

    Ok(())
}

fn values(serde_mod::Output { values, .. }: &serde_mod::Output) -> Result<Vec<String>> {
    let mut out = Vec::new();
    for (sym, val) in values {
        out.push(format!("# define {sym} {val}"));
    }
    Ok(out)
}

fn symbols(serde_mod::Output { symbols, .. }: &serde_mod::Output) -> Result<Vec<String>> {
    let mut out = Vec::new();
    for (sym, val) in symbols {
        out.push(format!("{sym} = {val},"));
    }
    Ok(out)
}

fn symbols_names(
    serde_mod::Output { symbols_names, .. }: &serde_mod::Output,
) -> Result<Vec<String>> {
    let mut out = Vec::new();
    for (sym, name) in symbols_names {
        out.push(format!("v->[{sym}] = \"{}\";", escape_str(name.as_str())));
    }
    Ok(out)
}

fn unique_symbols_map(
    serde_mod::Output {
        unique_symbols_map, ..
    }: &serde_mod::Output,
) -> Result<Vec<String>> {
    let mut out = Vec::new();
    for (sym, name) in unique_symbols_map {
        out.push(format!("v->a[{sym}] = {name};"));
    }
    Ok(out)
}

fn field_identifiers(
    serde_mod::Output {
        field_identifiers, ..
    }: &serde_mod::Output,
) -> Result<Vec<String>> {
    let mut out = Vec::new();
    for (sym, val) in field_identifiers {
        out.push(format!("{sym} = {val},"));
    }
    Ok(out)
}

fn field_names(serde_mod::Output { field_names, .. }: &serde_mod::Output) -> Result<Vec<String>> {
    let mut out = Vec::new();
    for (sym, name) in field_names {
        out.push(format!("v->[{sym}] = \"{}\";", escape_str(name.as_str())));
    }
    Ok(out)
}

fn symbol_metadata(
    serde_mod::Output {
        symbol_metadata, ..
    }: &serde_mod::Output,
) -> Result<Vec<String>> {
    let mut out = Vec::new();
    for (
        sym,
        SymbolMetadata {
            named,
            visible,
            supertype,
        },
    ) in symbol_metadata
    {
        out.push(format!(
            "v->[{sym}] = sym_metadata({visible}, {named}, {supertype});"
        ));
    }
    Ok(out)
}

fn alias_sequences(
    serde_mod::Output {
        alias_sequences, ..
    }: &serde_mod::Output,
) -> Result<Vec<String>> {
    let mut out = Vec::new();
    for (i, list_alias) in alias_sequences {
        for (j, alias) in list_alias {
            out.push(format!("v->[{i}][{j}] = {alias};"))
        }
    }
    Ok(out)
}

fn non_terminal_alias_map(
    serde_mod::Output {
        non_terminal_alias_map,
        ..
    }: &serde_mod::Output,
) -> Result<Vec<String>> {
    let mut out = Vec::new();
    let mut num = 0;
    for (i, v) in non_terminal_alias_map {
        out.push(format!("v->a[{num}] = {i};"));
        num += 1;
        out.push(format!("v->a[{num}] = {};", v.len()));
        num += 1;
        for alias in v.iter() {
            out.push(format!("v->a[{num}] = {alias};"));
            num += 1;
        }
    }
    out.push(format!("v->a[{num}] = 0;"));
    Ok(out)
}

fn primary_state_ids(
    serde_mod::Output {
        primary_state_ids, ..
    }: &serde_mod::Output,
) -> Result<Vec<String>> {
    let mut out = Vec::new();
    for (i, v) in primary_state_ids {
        out.push(format!("v->a[{i}] = {v};",));
    }
    Ok(out)
}

fn field_map_slices(
    serde_mod::Output {
        field_map_slices, ..
    }: &serde_mod::Output,
) -> Result<Vec<String>> {
    let mut out = Vec::new();
    for (i, Production { row_id, length }) in field_map_slices {
        out.push(format!("v->a[{i}] = fmap_slice({row_id}, {length});"));
    }
    Ok(out)
}

fn field_map_entries(
    serde_mod::Output {
        field_map_entries, ..
    }: &serde_mod::Output,
) -> Result<Vec<String>> {
    let mut out = Vec::new();
    for (i, rhs) in field_map_entries {
        for (
            k,
            Entry {
                field_id,
                index,
                inherited,
            },
        ) in rhs.iter().enumerate()
        {
            out.push(format!(
                "v->a[{}] = fmap_entry({field_id}, {index}, {inherited});",
                i + k
            ));
        }
    }
    Ok(out)
}

fn add_conditions(f: &mut impl std::fmt::Write, cond: &[Condition]) -> Result<()> {
    write!(f, "(")?;
    for elem in cond {
        match elem {
            Condition::Or => {
                write!(f, " || ")?;
            }
            Condition::And => {
                write!(f, " && ")?;
            }
            Condition::Eof => {
                write!(f, "s->eof")?;
            }
            Condition::NotEof => {
                write!(f, "!s->eof")?;
            }
            Condition::LookaheadEq(chr) => {
                write!(f, "s->lookahead == {}", escape_char(*chr))?;
            }
            Condition::LookaheadNe(chr) => {
                write!(f, "s->lookahead != {}", escape_char(*chr))?;
            }
            Condition::LookaheadGt(chr) => {
                write!(f, "s->lookahead > {}", escape_char(*chr))?;
            }
            Condition::LookaheadGe(chr) => {
                write!(f, "s->lookahead >= {}", escape_char(*chr))?;
            }
            Condition::LookaheadLt(chr) => {
                write!(f, "s->lookahead < {}", escape_char(*chr))?;
            }
            Condition::LookaheadLe(chr) => {
                write!(f, "s->lookahead <= {}", escape_char(*chr))?;
            }
            Condition::SetContains(name, count) => {
                write!(f, "set_contains({name}, {count}, s->lookahead)")?;
            }
            Condition::Group(conds) => {
                add_conditions(f, conds)?;
            }
        }
    }
    write!(f, ")")?;
    Ok(())
}

fn lex_state(serde_mod::Output { lex_state, .. }: &serde_mod::Output) -> Result<Vec<String>> {
    use std::fmt::Write;

    let mut out = Vec::new();

    for (lex_func_name, state_and_condition_action) in lex_state {
        let mut advance_map = Vec::new();
        let base = format!(
            "lex_{}",
            lex_func_name
                .strip_prefix("ts_lex_")
                .unwrap_or(lex_func_name.as_str())
        );
        {
            let mut func = String::new();
            writeln!(&mut func, "// MAIN {base}\n")?;
            writeln!(
                &mut func,
                "bool\t{base}_main(t_lexer *t, t_state_id state)\n{{"
            )?;
            writeln!(&mut func, "\tt_state_id\ts;\n")?;
            writeln!(
                &mut func,
                "\ts = (t_state_id){{.result = false, .skip = false, .eof = false}};"
            )?;
            writeln!(&mut func, "\ts.state = state;")?;
            // ==START
            writeln!(&mut func, "\ts.skip = false;")?;
            writeln!(&mut func, "\ts.lookahead = lexer->lookahead;")?;
            writeln!(&mut func, "\ts.eof = lexer->eof(lexer);")?;
            // ==START
            writeln!(&mut func, "\twhile ({base}_call(lexer, &s))")?;
            writeln!(&mut func, "\t{{")?;
            writeln!(&mut func, "\t\tlexer->advance(lexer, s.skip);")?;
            writeln!(&mut func, "\t\ts.skip = false;")?;
            writeln!(&mut func, "\t\ts.lookahead = lexer->lookahead;")?;
            writeln!(&mut func, "\t\ts.eof = lexer->eof(lexer);")?;
            writeln!(&mut func, "\t}}")?;
            writeln!(&mut func, "\treturn (s.result);")?;
            writeln!(&mut func, "}}")?;
            out.push(func);
        }
        for (&state, actions) in state_and_condition_action {
            let mut f = String::new();
            writeln!(&mut f, "// STATE {base}{state}\n")?;
            writeln!(
                &mut f,
                "bool\t{base}_s{state}(t_lexer *lexer, t_lexer_state *s)\n{{"
            )?;
            let mut end_state = false;
            for serde_mod::ActionCondition { action, condition } in actions {
                if let serde_mod::Action::AdvanceMap(map) = action {
                    assert_eq!(condition.len(), 0);
                    advance_map.push((state, map));
                    writeln!(&mut f, "\tif ({base}_map{state}(lexer, s))")?;
                } else if !condition.is_empty() {
                    write!(&mut f, "\tif ")?;
                    add_conditions(&mut f, condition)?;
                    writeln!(&mut f);
                }
                let ident = &"\t\t\t\t\t\t\t"[..(!condition.is_empty() as usize + 1)];
                match action {
                    serde_mod::Action::AcceptToken(sym) => {
                        writeln!(&mut f, "{ident}accept_token({sym}, lexer, s);")
                    }
                    serde_mod::Action::AdvanceMap(map) => writeln!(&mut f, "\t\treturn (true);"),
                    serde_mod::Action::Advance(sym) => {
                        writeln!(&mut f, "{ident}return (advance({sym}, lexer, s));")
                    }
                    serde_mod::Action::Skip(sym) => {
                        writeln!(&mut f, "{ident}return (skip({sym}, lexer, s));")
                    }
                    serde_mod::Action::EndState => {
                        end_state = true;
                        writeln!(&mut f, "{ident}return (end_state());")
                    }
                }?;
            }
            if !end_state {
                writeln!(&mut f, "\treturn (true);")?;
            }
            writeln!(&mut f, "}}")?;
            out.push(f);
        }
        {
            let mut f = String::new();
            writeln!(&mut f, "// STATE {base} DEFAULT\n")?;
            writeln!(
                &mut f,
                "bool\t{base}_default(t_lexer *lexer, t_lexer_state *s)\n{{"
            )?;
            writeln!(&mut f, "\t(void)(lexer);")?;
            writeln!(&mut f, "\t(void)(s);")?;
            writeln!(&mut f, "\ts->result = false;")?;
            writeln!(&mut f, "\treturn (false);")?;
            writeln!(&mut f, "}}")?;
            out.push(f);
        }
        for (state, chars) in advance_map {
            let mut f = String::new();
            
            let mut s = String::new();
            for (chr, state) in chars {
                write!(&mut s, "{}, {state}, ", escape_char(*chr))?;
            }
            s.pop();
            s.pop();
            writeln!(&mut f, "// INLINE {base} {state}\n")?;
            writeln!(
                &mut f,
                "static inline bool\t{base}_map{state}(t_lexer *lexer, t_lexer_state *s)\n{{"
            )?;
            writeln!(&mut f, "\tstatic uint32_t\tmap[] = {{{s}}};\n")?;
            writeln!(&mut f, "\treturn (advance_map_inner(map, sizeof(map) / size(*map), lexer, s))")?;
            writeln!(&mut f, "}}")?;
            out.push(f);
        }
        {
            let mut f = String::new();
            writeln!(
                &mut f,
                "// COUNT {base} {}\n",
                state_and_condition_action.len()
            )?;
            out.push(f);
        }
    }
    Ok(out)
}

fn char_set(serde_mod::Output { char_set, .. }: &serde_mod::Output) -> Result<Vec<String>> {
    use std::fmt::Write;
    let mut out = Vec::new();
    for (setname, chars) in char_set {
        let mut inside = String::new();
        for (start, end) in chars {
            write!(
                &mut inside,
                "{{{}, {}}}, ",
                escape_char(*start),
                escape_char(*end)
            )?;
        }
        inside.pop();
        inside.pop();
        out.push(format!(
            "uint32_t\t{setname}[{}] = {{{inside}}};",
            char_set.len()
        ));
    }
    Ok(out)
}

fn lex_modes(serde_mod::Output { lex_modes, .. }: &serde_mod::Output) -> Result<Vec<String>> {
    let mut out = Vec::new();
    for (lhs, rhs) in lex_modes {
        out.push(format!(
            "v->a[{lhs}] = {};",
            match rhs {
                LexMode::Normal { lex_state } => format!("lex_mode_normal({lex_state})"),
                LexMode::External {
                    lex_state,
                    external_lex_state,
                } => format!("lex_mode_external({lex_state}, {external_lex_state})"),
                LexMode::EndOfNonTerminalExtra => format!("lex_mode_end()"),
            }
        ));
    }
    Ok(out)
}

fn external_scanner_symbol_identifiers(
    serde_mod::Output {
        external_scanner_symbol_identifiers,
        ..
    }: &serde_mod::Output,
) -> Result<Vec<String>> {
    let mut out = Vec::new();
    for (lhs, rhs) in external_scanner_symbol_identifiers {
        out.push(format!("{lhs} = {rhs},",));
    }
    Ok(out)
}

fn external_scanner_symbol_map(
    serde_mod::Output {
        external_scanner_symbol_map,
        ..
    }: &serde_mod::Output,
) -> Result<Vec<String>> {
    let mut out = Vec::new();
    for (lhs, rhs) in external_scanner_symbol_map {
        out.push(format!("v->a[{lhs}] = {rhs};",));
    }
    Ok(out)
}

fn external_scanner_states(
    serde_mod::Output {
        external_scanner_states,
        ..
    }: &serde_mod::Output,
) -> Result<Vec<String>> {
    let mut out = Vec::new();
    for (first_index, sec_table) in &(external_scanner_states.1) {
        for (symbol, state) in sec_table.iter() {
            out.push(format!("v->a[{first_index}][{symbol}] = {state};",));
        }
    }
    Ok(out)
}

fn parse_table(serde_mod::Output { parse_table, .. }: &serde_mod::Output) -> Result<Vec<String>> {
    let mut out = Vec::new();
    for (first_index, sec_table) in parse_table {
        for (symbol, action) in sec_table.iter() {
            out.push(format!(
                "v->a[{first_index}][{symbol}] = {};",
                match action {
                    serde_mod::ParseThingy::State(u) => format!("state({u})"),
                    serde_mod::ParseThingy::Actions(u) => format!("actions({u})"),
                }
            ));
        }
    }
    Ok(out)
}

fn small_parse_table(
    serde_mod::Output {
        small_parse_table, ..
    }: &serde_mod::Output,
) -> Result<Vec<String>> {
    let mut out = Vec::new();
    for (i, (u, v)) in small_parse_table {
        let s = format!("v->a[{i}] = {u};");
        out.push(s);
        for (k, ((state, count), symbols)) in v.iter().enumerate() {
            out.push(format!(
                "v->a[{}] = {};",
                i + 2 * k + 1,
                match state {
                    serde_mod::ParseThingy::State(u) => format!("state({u})"),
                    serde_mod::ParseThingy::Actions(u) => format!("actions({u})"),
                }
            ));
            out.push(format!("v->a[{}] = {count};", i + 2 * k + 2,));
        }
    }
    Ok(out)
}

fn small_parse_table_map(
    serde_mod::Output {
        small_parse_table_map,
        values,
        ..
    }: &serde_mod::Output,
) -> Result<Vec<String>> {
    let mut out = Vec::new();
    let large_state_count = values
        .get("LARGE_STATE_COUNT")
        .ok_or(eyre!("Missing LARGE_STATE_COUNT define value"))?
        .parse::<usize>()?;
    for (i, v) in small_parse_table_map {
        let s = format!("v->a[{}] = {v};", i - large_state_count);
        out.push(s);
    }
    Ok(out)
}

fn parse_actions(
    serde_mod::Output { parse_actions, .. }: &serde_mod::Output,
) -> Result<Vec<String>> {
    let mut parse_actions_vec = Vec::new();
    for (k, (v, reusable)) in parse_actions {
        parse_actions_vec.push(format!("v->a[{k}] = entry({}, {reusable});", v.len()));
        for (i, action) in v.iter().enumerate() {
            parse_actions_vec.push(format!(
                "v->a[{}] = {};",
                k + i + 1,
                match action {
                    MyParseAction::Recover => format!("recover()"),
                    MyParseAction::AcceptInput => format!("accept()"),
                    MyParseAction::ShiftExtra => format!("shift_extra()"),
                    MyParseAction::Shift(state) => format!("shift({state})"),
                    MyParseAction::ShiftRepeat(state) => format!("shift_repeat({state})"),
                    MyParseAction::Reduce(symbol, count, precedence, production_id) =>
                        format!("shift_repeat({symbol}, {count}, {precedence}, {production_id})"),
                }
            ));
        }
    }
    Ok(parse_actions_vec)
}
