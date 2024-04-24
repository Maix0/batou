#![allow(unused)]
mod serde_mod;

use std::path::Path;

use color_eyre::{eyre::eyre, Result};
use indexmap::IndexMap;
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

fn array_to_files(
    folder: impl AsRef<Path>,
    basefilename: impl AsRef<str>,
    typename: impl AsRef<str>,
    vec: &Vec<String>,
    remove_dir: bool,
) -> Result<usize> {
    use std::io::Write;
    let mut iterator = vec.chunks(20).enumerate().peekable();
    let mut count = 0;
    let mut folder = folder.as_ref().to_path_buf();
    let func_number = vec.chunks(20).count();
    let basefilename = basefilename.as_ref();
    let typename = typename.as_ref();
    if remove_dir {
        let _ = std::fs::remove_dir_all(&folder);
    }
    std::fs::create_dir_all(&folder)?;
    let mut functions_headers = Vec::new();
    let mut tot_file = 0;

    while iterator.peek().is_some() {
        let filename = format!("{basefilename}_{count}.c");
        let mut file = {
            folder.push(&filename);
            let ret = std::fs::OpenOptions::new()
                .create(true)
                .write(true)
                .truncate(true)
                .open(&folder);
            folder.pop();
            tot_file += 1;
            ret?
        };
        writeln!(&mut file, include_str!("./42header"), filename)?;
        writeln!(&mut file, "#include \"./{basefilename}.h\"")?;
        for (fcount, lines) in iterator.by_ref().take(5) {
            writeln!(
                &mut file,
                "void\t{basefilename}_{fcount}({typename} *v)\n{{"
            )?;
            functions_headers.push(format!("void\t{basefilename}_{fcount}({typename} *v);"));
            for line in lines {
                let mut line = line.clone();
                if line.len() + 4 >= 80 {
                    if let Some(idx) = line[1..].find(|c: char| c.is_ascii_whitespace()) {
                        line.insert_str(idx + 2, "\\\n\t");
                    };
                }
                writeln!(&mut file, "\t{line}")?;
            }
            if fcount + 1 < func_number {
                writeln!(&mut file, "\t{basefilename}_{}(v);", fcount + 1)?;
            }
            writeln!(&mut file, "}}\n")?;
        }
        writeln!(&mut file, "/* EOF {filename} */")?;
        count += 1;
    }
    {
        let mut filename = format!("{basefilename}.h");
        let mut file = {
            folder.push(&filename);
            let ret = std::fs::OpenOptions::new()
                .create(true)
                .write(true)
                .truncate(true)
                .open(&folder);
            folder.pop();
            tot_file += 1;
            ret?
        };
        writeln!(&mut file, include_str!("./42header"), filename)?;
        filename.pop();
        filename.pop();
        filename.push_str("_H");
        filename.make_ascii_uppercase();
        writeln!(&mut file, "#ifndef {filename}")?;
        writeln!(&mut file, "# define {filename}\n")?;
        writeln!(&mut file, "# include \"../types/type_{basefilename}.h\"")?;
        writeln!(&mut file, "# include \"../headers/symbols.h\"")?;
        writeln!(
            &mut file,
            "# include \"../headers/external_scanner_symbol_identifiers.h\""
        )?;
        writeln!(&mut file, "# include \"../headers/field_identifiers.h\"\n")?;
        writeln!(&mut file, "# include \"../headers/constants.h\"\n")?;
        for sig in functions_headers {
            writeln!(&mut file, "{sig}")?;
        }
        writeln!(&mut file, "\n#endif // {filename}")?;
        count += 1;
    }

    Ok(count)
}

fn enum_to_files(
    folder: impl AsRef<Path>,
    basefilename: impl AsRef<str>,
    typename: impl AsRef<str>,
    vec: &Vec<String>,
    remove_dir: bool,
) -> Result<usize> {
    use std::io::Write;

    let mut iterator = vec.iter();
    let mut folder = folder.as_ref().to_path_buf();
    let basefilename = basefilename.as_ref();
    let typename = typename.as_ref();
    if remove_dir {
        let _ = std::fs::remove_dir_all(&folder);
    }
    std::fs::create_dir_all(&folder)?;

    let mut filename = format!("{basefilename}.h");
    let mut file = {
        folder.push(&filename);
        let ret = std::fs::OpenOptions::new()
            .create(true)
            .write(true)
            .truncate(true)
            .open(&folder);
        folder.pop();
        ret?
    };

    writeln!(&mut file, include_str!("./42header"), filename)?;
    filename.pop();
    filename.pop();
    filename.push_str("_H");
    filename.make_ascii_uppercase();
    writeln!(&mut file, "#ifndef {filename}")?;
    writeln!(&mut file, "# define {filename}\n")?;

    writeln!(&mut file, "enum {typename} {{")?;
    for line in vec {
        writeln!(&mut file, "\t{line}")?;
    }
    writeln!(&mut file, "}};")?;
    writeln!(&mut file, "\n#endif // {filename}")?;

    Ok(1)
}

fn define_to_files(
    folder: impl AsRef<Path>,
    basefilename: impl AsRef<str>,
    vec: &Vec<String>,
    remove_dir: bool,
) -> Result<usize> {
    use std::io::Write;

    let mut iterator = vec.iter();
    let mut folder = folder.as_ref().to_path_buf();
    let basefilename = basefilename.as_ref();
    if remove_dir {
        let _ = std::fs::remove_dir_all(&folder);
    }
    std::fs::create_dir_all(&folder)?;

    let mut filename = format!("{basefilename}.h");
    let mut file = {
        folder.push(&filename);
        let ret = std::fs::OpenOptions::new()
            .create(true)
            .write(true)
            .truncate(true)
            .open(&folder);
        folder.pop();
        ret?
    };

    writeln!(&mut file, include_str!("./42header"), filename)?;
    filename.pop();
    filename.pop();
    filename.push_str("_H");
    filename.make_ascii_uppercase();
    writeln!(&mut file, "#ifndef {filename}")?;
    writeln!(&mut file, "# define {filename}\n")?;

    for line in vec {
        writeln!(&mut file, "{line}")?;
    }
    writeln!(&mut file, "\n#endif // {filename}")?;

    Ok(1)
}

fn line_norminette(s: &str) -> Vec<String> {
    let mut lines = Vec::new();
    lines.push(s.to_string());
    while lines.last().map(|l| l.len() > 60).unwrap_or(false) {
        let mut last = lines.pop().unwrap();
        if last.len() > 60 {
            let split = last[..60].rfind(char::is_whitespace).unwrap_or_else(|| {
                last[60..]
                    .find(char::is_whitespace)
                    .expect("no whitespace wtf")
                    + 60
            }) + 1;
            let (before, after) = last.split_at(split);
            lines.push((format!("{before}\\")));
            lines.push((format!("\t{after}")));
        } else {
            lines.push(last);
        }
    }
    lines
}

fn charset_to_files(
    folder: impl AsRef<Path>,
    basefilename: impl AsRef<str>,
    vec: &Vec<String>,
    remove_dir: bool,
) -> Result<usize> {
    use std::io::Write;

    let mut iterator = vec.iter();
    let mut folder = folder.as_ref().to_path_buf();
    let basefilename = basefilename.as_ref();
    if remove_dir {
        let _ = std::fs::remove_dir_all(&folder);
    }
    std::fs::create_dir_all(&folder)?;

    let mut filename = format!("{basefilename}_inline.h");
    let mut file = {
        folder.push(&filename);
        let ret = std::fs::OpenOptions::new()
            .create(true)
            .write(true)
            .truncate(true)
            .open(&folder);
        folder.pop();
        ret?
    };

    writeln!(&mut file, include_str!("./42header"), filename)?;
    filename.pop();
    filename.pop();
    filename.push_str("_H");
    filename.make_ascii_uppercase();
    writeln!(&mut file, "#ifndef {filename}")?;
    writeln!(&mut file, "# define {filename}")?;
    writeln!(&mut file, "# include \"parser/charset.h\"")?;
    writeln!(&mut file, "# include <stdint.h>\n")?;

    for line in vec {
        let line = line.clone();
        let name = &line["t_char_range\t".len()..line.find('[').expect("This isn't a charset wtf")];
        let line = line.replacen(&name, "char_set_val", 1);
        let lines = line_norminette(&format!("static {line}"));
        writeln!(&mut file, "static inline t_char_range\t*{name}(void)")?;
        writeln!(&mut file, "{{")?;
        for l in lines {
            writeln!(&mut file, "\t{l}")?;
        }
        writeln!(&mut file, "\n\treturn (char_set_val);")?;
        writeln!(&mut file, "}}\n")?;
    }
    writeln!(&mut file, "#endif // {filename}")?;

    Ok(1)
}

fn lex_funcs_to_files(
    folder: impl AsRef<Path>,
    basefilename: impl AsRef<str>,
    vec: &Vec<String>,
    remove_dir: bool,
) -> Result<usize> {
    use std::io::Write;

    let mut iterator = vec.iter();
    let mut folder = folder.as_ref().to_path_buf();
    let basefilename = basefilename.as_ref();
    if remove_dir {
        let _ = std::fs::remove_dir_all(&folder);
    }
    std::fs::create_dir_all(&folder)?;

    let mut data: IndexMap<
        String,
        (
            usize,
            String,
            Vec</*main funcs */ (Option<usize>, String)>,
            Vec</*inline funcs */ (usize, String)>,
        ),
    > = Default::default();

    for func in iterator {
        let Some(first) = func.lines().next() else {
            eprintln!("empty line for lex_funcs");
            continue;
        };

        let mut ws = first.split_whitespace();
        if (ws.next() != Some("//")) {
            eprintln!("missing info lex_funcs \"header\" (no //)");
            continue;
        }
        let ty = match ws.next() {
            Some("COUNT") => "COUNT",
            Some("STATE") => "STATE",
            Some("INLINE") => "INLINE",
            Some("MAIN") => "MAIN",
            _ => {
                eprintln!("missing info lex_funcs \"header\" (no or invalid TYPE)");
                eprintln!("line = {first:?}");
                continue;
            }
        };
        let Some(next) = ws.next() else {
            eprintln!("missing info lex_funcs \"header\" (no lex_type)");
            continue;
        };
        let Some(arg) = ws.next() else {
            eprintln!("missing info lex_funcs \"header\" (no ARG)");
            continue;
        };
        let entry = data.entry(next.to_string()).or_default();

        match ty {
            "MAIN" => {
                entry.1 = func
                    .lines()
                    .skip(1)
                    .flat_map(|l| [l, "\n"])
                    .collect::<String>();
            }
            "COUNT" => {
                entry.0 = arg.parse()?;
            }
            "STATE" => {
                let parsed = if (arg == "DEFAULT") {
                    None
                } else {
                    Some(arg.parse()?)
                };
                entry.2.push((
                    parsed,
                    func.lines()
                        .skip(1)
                        .flat_map(|l| [l, "\n"])
                        .collect::<String>(),
                ));
            }
            "INLINE" => {
                let parsed = arg.parse()?;
                entry.3.push((
                    parsed,
                    func.lines()
                        .skip(1)
                        .flat_map(|l| [l, "\n"])
                        .collect::<String>(),
                ));
            }
            _ => {
                unreachable!("should've gotten pruned before")
            }
        }
    }

    let mut file_count = 0;
    for (ty, (count, mut main_func, mut funcs, mut inlined)) in data {
        folder.push(&ty);
        folder.push("inline");
        std::fs::create_dir_all(&folder)?;

        {
            let mut inlined = std::mem::take(&mut inlined).into_iter().peekable();
            let mut header_count = 0;
            while inlined.peek().is_some() {
                let mut filename = format!("inline_impl{header_count}.h");
                let mut file = {
                    folder.push(&filename);
                    let ret = std::fs::OpenOptions::new()
                        .create(true)
                        .write(true)
                        .truncate(true)
                        .open(&folder);
                    folder.pop();
                    file_count += 1;
                    ret?
                };

                writeln!(&mut file, include_str!("./42header"), filename)?;
                filename.pop();
                filename.pop();
                filename.push_str("_H");
                filename.make_ascii_uppercase();
                writeln!(&mut file, "#ifndef {filename}")?;
                writeln!(&mut file, "# define {filename}\n")?;
                writeln!(&mut file, "# include \"../../../headers/symbols.h\"")?;
                writeln!(
                    &mut file,
                    "# include \"../../../headers/external_scanner_symbol_identifiers.h\""
                )?;
                writeln!(
                    &mut file,
                    "# include \"../../../headers/field_identifiers.h\""
                )?;
                writeln!(&mut file, "# include \"../../../headers/constants.h\"")?;
                writeln!(&mut file, "# include \"parser/charset.h\"")?;
                for (state, f) in inlined.by_ref().take(5) {
                    for line in f.lines() {
                        for l in line_norminette(line) {
                            writeln!(&mut file, "{l}")?;
                        }
                    }
                }
                writeln!(&mut file, "#endif // {filename}")?;
                header_count += 1;
            }
            folder.pop();
            let mut filename = format!("inline.h");
            let mut file = {
                folder.push(&filename);
                let ret = std::fs::OpenOptions::new()
                    .create(true)
                    .write(true)
                    .truncate(true)
                    .open(&folder);
                folder.pop();
                file_count += 1;
                ret?
            };

            writeln!(&mut file, include_str!("./42header"), filename)?;
            filename.pop();
            filename.pop();
            filename.push_str("_H");
            filename.make_ascii_uppercase();
            writeln!(&mut file, "#ifndef {filename}")?;
            writeln!(&mut file, "# define {filename}\n")?;
            writeln!(&mut file, "# include \"../headers/symbols.h\"")?;
            writeln!(
                &mut file,
                "# include \"../headers/external_scanner_symbol_identifiers.h\""
            )?;
            writeln!(&mut file, "# include \"../../headers/field_identifiers.h\"")?;
            writeln!(&mut file, "# include \"../../headers/constants.h\"")?;
            writeln!(&mut file, "# include \"parser/charset.h\"")?;

            for i in 0..header_count {
                writeln!(&mut file, "# include \"./inline/inline_impl{i}.h\"")?;
            }

            writeln!(&mut file, "\n#endif // {filename}")?;
        }
        let mut func_names: Vec<String> = Vec::new();

        {
            let mut funcs = std::mem::take(&mut funcs).into_iter().peekable();
            let mut func_file_count = 0;
            while funcs.peek().is_some() {
                let mut filename = format!("state_{func_file_count}.c");
                let mut file = {
                    folder.push(&filename);
                    let ret = std::fs::OpenOptions::new()
                        .create(true)
                        .write(true)
                        .truncate(true)
                        .open(&folder);
                    folder.pop();
                    file_count += 1;
                    ret?
                };

                writeln!(&mut file, include_str!("./42header"), filename)?;
                writeln!(&mut file, "#include \"./{ty}_funcs.h\"")?;
                for (state, f) in funcs.by_ref().take(5) {
                    if let Some(line) = f.lines().filter(|s| !s.trim().is_empty()).next() {
                        func_names.push(line.trim().to_string());
                    }
                    for line in f.lines() {
                        for l in line_norminette(line) {
                            writeln!(&mut file, "{l}")?;
                        }
                    }
                    // for line in f.lines() {
                    //     for l in line_norminette(line) {
                    //         writeln!(&mut file, "{line}")?;
                    //     }
                    // }
                }
                func_file_count += 1;
            }
            let mut filename = format!("main_func.c");
            let mut file = {
                folder.push(&filename);
                let ret = std::fs::OpenOptions::new()
                    .create(true)
                    .write(true)
                    .truncate(true)
                    .open(&folder);
                folder.pop();
                file_count += 1;
                ret?
            };

            writeln!(&mut file, include_str!("./42header"), filename)?;
            writeln!(&mut file, "#include \"./{ty}_funcs.h\"")?;
            for line in main_func.lines() {
                for l in line_norminette(line) {
                    writeln!(&mut file, "{l}")?;
                }
            }
            writeln!(&mut file, "#endif // {filename}")?;
        }
        // HERE
        {
            let mut filename = format!("{ty}_funcs.h");
            let mut file = {
                folder.push(&filename);
                let ret = std::fs::OpenOptions::new()
                    .create(true)
                    .write(true)
                    .truncate(true)
                    .open(&folder);
                folder.pop();
                file_count += 1;
                ret?
            };

            writeln!(&mut file, include_str!("./42header"), filename)?;
            filename.pop();
            filename.pop();
            filename.push_str("_H");
            filename.make_ascii_uppercase();
            writeln!(&mut file, "#ifndef {filename}")?;
            writeln!(&mut file, "# define {filename}\n")?;
            writeln!(&mut file, "# include \"../types/type_{basefilename}.h\"")?;
            writeln!(&mut file, "# include \"../../headers/symbols.h\"")?;
            writeln!(
                &mut file,
                "# include \"../../headers/external_scanner_symbol_identifiers.h\""
            )?;
            writeln!(&mut file, "# include \"../../headers/field_identifiers.h\"")?;
            writeln!(&mut file, "# include \"../../headers/constants.h\"")?;
            writeln!(&mut file, "# include \"./inline.h\"")?;
            writeln!(&mut file, "# include \"parser/charset.h\"\n")?;

            for func in func_names {
                writeln!(&mut file, "{func};")?;
            }

            writeln!(&mut file, "\n#endif // {filename}")?;
        }
        let mut funcs_name = Vec::new();
        {
            let mut func_count = 0;
            folder.push("./create_table");
            std::fs::create_dir_all(&folder)?;
            let mut funcs = (0..count).peekable();
            let mut file_array_count = 0;
            while funcs.peek().is_some() {
                let mut filename = format!("{ty}_array{file_array_count}.c");
                let mut file = {
                    folder.push(&filename);
                    let ret = std::fs::OpenOptions::new()
                        .create(true)
                        .write(true)
                        .truncate(true)
                        .open(&folder);
                    folder.pop();
                    file_count += 1;
                    ret?
                };

                writeln!(&mut file, include_str!("./42header"), filename)?;
                writeln!(&mut file, "#include \"../../headers/symbols.h\"")?;
                writeln!(
                    &mut file,
                    "#include \"../../headers/external_scanner_symbol_identifiers.h\""
                )?;
                writeln!(&mut file, "#include \"../../headers/field_identifiers.h\"")?;
                writeln!(&mut file, "#include \"../../headers/constants.h\"")?;
                writeln!(&mut file, "#include \"../{ty}_funcs.h\"")?;
                writeln!(&mut file, "#include \"./{ty}_array_funcs.h\"")?;
                writeln!(&mut file, "#include \"parser/charset.h\"")?;

                for _ in 0..5 {
                    writeln!(&mut file, "\nvoid\t{ty}_array{func_count}(t_{ty}_array *v)")?;
                    funcs_name.push(format!("void\t{ty}_array{func_count}(t_{ty}_array *v)"));
                    writeln!(&mut file, "{{")?;
                    for i in funcs.by_ref().take(20) {
                        writeln!(&mut file, "\tv->a[{i}] = {ty}_s{i};")?;
                    }
                    if (funcs.peek().is_some()) {
                        writeln!(&mut file, "\t{ty}_array{func_count}(v);")?;
                        writeln!(&mut file, "}}")?;
                    } else {
                        writeln!(&mut file, "}}")?;
                        break;
                    }
                    func_count += 1;
                }
                writeln!(&mut file, "\n/* EOF {filename} */")?;
                file_array_count += 1;
            }
            {
                let mut filename = format!("{ty}_array.h");
                let mut file = {
                    folder.push(&filename);
                    let ret = std::fs::OpenOptions::new()
                        .create(true)
                        .write(true)
                        .truncate(true)
                        .open(&folder);
                    folder.pop();
                    file_count += 1;
                    ret?
                };

                writeln!(&mut file, include_str!("./42header"), filename)?;
                filename.pop();
                filename.pop();
                filename.push_str("_H");
                filename.make_ascii_uppercase();
                writeln!(&mut file, "#ifndef {filename}")?;
                writeln!(&mut file, "# define {filename}\n")?;
                writeln!(&mut file, "# include \"../types/type_{ty}.h\"")?;
                writeln!(&mut file, "# include \"../../headers/symbols.h\"")?;
                writeln!(
                    &mut file,
                    "# include \"../../headers/external_scanner_symbol_identifiers.h\""
                )?;
                writeln!(&mut file, "# include \"../../headers/field_identifiers.h\"")?;
                writeln!(&mut file, "# include \"../../headers/constants.h\"")?;
                writeln!(&mut file, "# include \"../{ty}_funcs.h\"")?;
                writeln!(&mut file, "# include \"parser/charset.h\"\n")?;

                for prot in &funcs_name {
                    writeln!(&mut file, "{prot};")?;
                }
                writeln!(&mut file, "\n#endif // {filename}")?;
            }
            folder.pop();
        }

        folder.pop();
    }

    Ok(file_count)
}

fn define_type(
    outdir: impl AsRef<Path>,
    typename: impl AsRef<str>,
    arraytype: (impl AsRef<str>, impl AsRef<str>, impl AsRef<str>),
) -> Result<()> {
    use std::io::Write;
    let mut outpath = outdir.as_ref().to_path_buf();
    std::fs::create_dir_all(&outpath)?;
    let typename = typename.as_ref();
    let (at_pre, at_mid, at_post) = (
        arraytype.0.as_ref(),
        arraytype.1.as_ref(),
        arraytype.2.as_ref(),
    );

    let mut filename = format!("type_{typename}.h");
    outpath.push(&filename);
    let mut file = std::fs::OpenOptions::new()
        .create(true)
        .write(true)
        .truncate(true)
        .open(&outpath)?;

    writeln!(&mut file, include_str!("./42header"), filename)?;
    filename.pop();
    filename.pop();
    filename.push_str("_H");
    filename.make_ascii_uppercase();
    writeln!(&mut file, "#ifndef {filename}")?;
    writeln!(&mut file, "# define {filename}\n")?;
    writeln!(&mut file, "# include \"../headers/symbols.h\"")?;
    writeln!(
        &mut file,
        "# include \"../headers/external_scanner_symbol_identifiers.h\""
    )?;
    writeln!(&mut file, "# include \"../headers/field_identifiers.h\"")?;
    writeln!(&mut file, "# include \"../headers/constants.h\"\n")?;

    writeln!(&mut file, "typedef struct s_{typename}_array {{")?;
    writeln!(&mut file, "\t{at_pre}\t{at_mid}a{at_post};")?;
    writeln!(&mut file, "}}\tt_{typename}_array;\n")?;
    writeln!(&mut file, "\n#endif // {filename}")?;

    Ok(())
}

#[rustfmt::skip]
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
    // char_set(&data)?.print_lines();
    // lex_state(&data)?.print_lines();
    // lex_modes(&data)?.print_lines();
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
    
    array_to_files("out/parse_actions", "parse_actions", "t_parse_actions_array", &parse_actions(&data)?, true)?;
    array_to_files("out/small_parse_table_map", "small_parse_table_map", "t_small_parse_table_map_array", &small_parse_table_map(&data)?, true)?;
    array_to_files("out/small_parse_table", "small_parse_table", "t_small_parse_table_array", &small_parse_table(&data)?, true)?;
    array_to_files("out/parse_table", "parse_table", "t_parse_table_array", &parse_table(&data)?, true)?;
    array_to_files("out/external_scanner_states", "external_scanner_states", "t_external_scanner_states_array", &external_scanner_states(&data)?, true)?;
    array_to_files("out/external_scanner_symbol_map", "external_scanner_symbol_map", "t_external_scanner_symbol_map_array", &external_scanner_symbol_map(&data)?, true)?;
    array_to_files("out/lex_modes", "lex_modes", "t_lex_modes_array", &lex_modes(&data)?, true)?;
    array_to_files("out/field_map_entries", "field_map_entries", "t_field_map_entries_array", &field_map_entries(&data)?, true)?;
    array_to_files("out/field_map_slices", "field_map_slices", "t_field_map_slices_array", &field_map_slices(&data)?, true)?;
    array_to_files("out/primary_state_ids", "primary_state_ids", "t_primary_state_ids_array", &primary_state_ids(&data)?, true)?;
    array_to_files("out/non_terminal_alias_map", "non_terminal_alias_map", "t_non_terminal_alias_map_array", &non_terminal_alias_map(&data)?, true)?;
    array_to_files("out/alias_sequences", "alias_sequences", "t_alias_sequences_array", &alias_sequences(&data)?, true)?;
    array_to_files("out/field_names", "field_names", "t_field_names_array", &field_names(&data)?, true)?;
    array_to_files("out/unique_symbols_map", "unique_symbols_map", "t_unique_symbols_map_array", &unique_symbols_map(&data)?, true)?;
    array_to_files("out/symbols_names", "symbols_names", "t_symbols_names_array", &symbols_names(&data)?, true)?;
    
    define_type("out/types", "parse_actions", ("t_parse_actions", "", "[]"))?;
    define_type("out/types", "small_parse_table_map", ("uint32_t", "", "[]"))?;
    define_type("out/types", "small_parse_table", ("uint16_t", "", "[]"))?;
    define_type("out/types", "parse_table", ("uint16_t", "", "[LARGE_STATE_COUNT][SYMBOL_COUNT]"))?;
    define_type("out/types", "external_scanner_states", ("bool", "", format!("[{}][EXTERNAL_TOKEN_COUNT]", data.external_scanner_states.0)))?;
    define_type("out/types", "external_scanner_symbol_map", ("t_symbol", "", "[EXTERNAL_TOKEN_COUNT]"))?;
    define_type("out/types", "lex_modes", ("t_lex_modes", "", "[STATE_COUNT]"))?;
    define_type("out/types", "field_map_entries", ("t_field_map_entry", "", "[]"))?;
    define_type("out/types", "field_map_slices", ("t_field_map_slice", "", "[PRODUCTION_COUNT]"))?;
    define_type("out/types", "primary_state_ids", ("t_state_id", "", "[STATE_COUNT]"))?;
    define_type("out/types", "non_terminal_alias_map", ("uint16_t", "", "[]"))?;
    define_type("out/types", "alias_sequences", ("t_symbol", "", "[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH]"))?;
    define_type("out/types", "field_names", ("const char", "*", "[]"))?;
    define_type("out/types", "unique_symbol_map", ("t_symbol", "", "[]"))?;
    define_type("out/types", "symbols_names", ("const char", "*", "[]"))?;

    /* ENUM */
    enum_to_files("out/headers", "symbols", "e_symbols", &symbols(&data)?, true)?;
    enum_to_files("out/headers", "external_scanner_symbol_identifiers", "e_external_scanner_symbol_identifiers", &external_scanner_symbol_identifiers(&data)?, false)?;
    enum_to_files("out/headers", "field_identifiers", "e_field_identifiers", &field_identifiers(&data)?, false)?;
    define_to_files("out/headers", "constants", &values(&data)?, false)?;
    
    charset_to_files("out/char_set", "charset", &char_set(&data)?, true)?;
    
    lex_funcs_to_files("out/lex_funcs", "lex_func", &lex_state(&data)?, true)?;

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
        out.push(format!("v->a[{sym}] = \"{}\";", escape_str(name.as_str())));
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
        out.push(format!("v->a[{sym}] = \"{}\";", escape_str(name.as_str())));
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
            "v->a[{sym}] = sym_metadata({visible}, {named}, {supertype});"
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
            out.push(format!("v->a[{i}][{j}] = {alias};"))
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
            writeln!(&mut func, "// MAIN {base} 0\n")?;
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
            writeln!(&mut f, "// STATE {base} {state}\n")?;
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
            writeln!(
                &mut f,
                "\treturn (advance_map_inner(map, sizeof(map) / size(*map), lexer, s));"
            )?;
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
