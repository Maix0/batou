#![allow(unused)]
mod serde_mod;

use color_eyre::{eyre::eyre, Result};

use crate::serde_mod::MyParseAction;

static DATA: &str = include_str!("../out.json");

// serde_mod::Output {
//         mut symbol_names,
//         mut values,
//         mut symbols,
//         mut symbols_names,
//         mut unique_symbols_map,
//         mut field_identifiers,
//         mut field_names,
//         mut symbol_metadata,
//         mut alias_sequences,
//         mut non_terminal_alias_map,
//         mut primary_state_ids,
//         mut field_map_slices,
//         mut field_map_entries,
//         mut lex_state,
//         mut char_set,
//         mut lex_modes,
//         mut external_scanner_symbol_identifiers,
//         mut external_scanner_symbol_map,
//         mut external_scanner_states,
//         mut parse_table,
//         mut small_parse_table,
//         mut small_parse_table_map,
//         //mut parse_actions,
//     }
fn main() -> Result<()> {
    color_eyre::install()?;

    let data: serde_mod::Output = serde_json::from_str(DATA)?;
    let parse_actions = parse_actions(&data)?;
    let small_parse_table_map = small_parse_table_map(&data)?;
    //parse_actions.iter().for_each(|r| println!("{r}"));
    //small_parse_table_map.iter().for_each(|r| println!("{r}"));

    Ok(())
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

fn small_parse_table(
    serde_mod::Output {
        small_parse_table, ..
    }: &serde_mod::Output,
) -> Result<Vec<String>> {
    let mut out = Vec::new();
    for (i, (u, v)) in small_parse_table {
        let s = format!("v->a[{}] = {v};", i);
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
