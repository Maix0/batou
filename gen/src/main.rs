#![allow(unused)]
mod serde_mod;

use color_eyre::{eyre::eyre, Result};
use serde_mod::{Entry, LexMode, Production, SymbolMetadata};

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
//         mut lex_state,
//         mut char_set,
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
    // char_set(&data)?.print_lines(); // TODO!
    // lex_state(&data)?.print_lines(); // TODO!
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

fn lex_state(serde_mod::Output { lex_state, .. }: &serde_mod::Output) -> Result<Vec<String>> {
    let mut out = Vec::new();
    //
    for (lex_func_name, state_and_condition_action) in lex_state {
        let func_name_base = format!("lex_{lex_func_name}");
        for (state, action) in state_and_condition_action {
            // format!("{func_name_base}{state}"); // func_name
            todo!("Generate functions for the lex state!");
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
