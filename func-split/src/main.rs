use std::io::Write;

fn main() {
    let mut parser = tree_sitter::Parser::new();
    parser.set_language(&tree_sitter_c::language()).unwrap();
    let source_code = std::fs::read_to_string("../unnormed/lex_funcs2.c").unwrap();
    let tree = parser.parse(&source_code, None).unwrap();

    let mut cursor = tree.walk();

    let node = cursor.node();
    let mut out = Vec::new();
    let mut static_inline = Vec::new();
    let mut out_sig = Vec::new();

    for n in node.children(&mut cursor) {
        if n.kind() == "comment" {
            continue;
        };
        assert_eq!(n.kind(), "function_definition");
        let string = n.utf8_text(source_code.as_bytes()).unwrap().to_string();
        let mut walk = n.walk();
        let func_delc = n
            .children(&mut walk)
            .filter(|s| s.kind() != "compound_statement")
            .fold((String::new(), String::new()), |s, n| {
                if n.kind() == "function_declarator" {
                    (
                        n.utf8_text(source_code.as_bytes())
                            .unwrap()
                            .trim()
                            .to_string(),
                        s.1,
                    )
                } else {
                    (
                        s.0,
                        n.utf8_text(source_code.as_bytes())
                            .unwrap()
                            .trim()
                            .to_string(),
                    )
                }
            });
        if string.starts_with("static inline") {
            static_inline.push((func_delc, string));
        } else {
            out.push(string);
            out_sig.push(func_delc);
        }
    }
    let mut filelist = Vec::new();

    for (idx, funcs) in static_inline.chunks(5).enumerate() {
        let mut file = std::fs::OpenOptions::new()
            .write(true)
            .truncate(true)
            .create(true)
            .open(format!("out/inlined/advanced_map{idx}.h"))
            .unwrap();
        filelist.push(format!("inlined/advanced_map{idx}.h"));
        writeln!(
            &mut file,
            include_str!("./42header"),
            format_args!("advanced_map{idx}.h")
        )
        .unwrap();
        let guard = format!("advanced_map{idx}_h").to_uppercase();
        writeln!(&mut file, "#ifndef {guard}",).unwrap();
        writeln!(&mut file, "# define {guard}\n",).unwrap();
        for (_sig, func) in funcs {
            writeln!(&mut file, "{func}\n").unwrap();
        }

        writeln!(&mut file, "#endif",).unwrap();
    }
    {
        let mut file = std::fs::OpenOptions::new()
            .write(true)
            .truncate(true)
            .create(true)
            .open(format!("out/inlined.h"))
            .unwrap();
        writeln!(
            &mut file,
            include_str!("./42header"),
            format_args!("included.h")
        )
        .unwrap();
        let guard = format!("inlined_h").to_uppercase();
        writeln!(&mut file, "#ifndef {guard}",).unwrap();
        writeln!(&mut file, "# define {guard}\n",).unwrap();
        for f in filelist {
            writeln!(&mut file, "# include \"{f}\"").unwrap();
        }

        writeln!(&mut file, "\n#endif",).unwrap();
    }

    for (idx, funcs) in out.chunks(5).enumerate() {
        let mut file = std::fs::OpenOptions::new()
            .write(true)
            .truncate(true)
            .create(true)
            .open(format!("out/lexer_func{idx}.c"))
            .unwrap();
        writeln!(
            &mut file,
            include_str!("./42header"),
            format_args!("lexer_func{idx}.c")
        )
        .unwrap();
        writeln!(&mut file, "#include \"./lexer_funcs.h\"\n",).unwrap();
        for func in funcs {
            writeln!(&mut file, "{func}\n").unwrap();
        }
        writeln!(&mut file, "// End of File").unwrap();
    }

    {
        let mut file = std::fs::OpenOptions::new()
            .write(true)
            .truncate(true)
            .create(true)
            .open(format!("out/lexer_funcs.h"))
            .unwrap();
        writeln!(
            &mut file,
            include_str!("./42header"),
            format_args!("lexer_funcs.h")
        )
        .unwrap();
        let guard = format!("lexer_funcs_h").to_uppercase();
        writeln!(&mut file, "#ifndef {guard}",).unwrap();
        writeln!(&mut file, "# define {guard}\n",).unwrap();
        let div_len = out_sig.iter().fold(0, |s, current| s.max(current.1.len()));
        let div = {
            let mut s = String::new();
            for _ in 0..div_len {
                use std::fmt::Write;
                write!(&mut s, "\t").unwrap();
            }
            s
        };
        for (rest, ty) in out_sig {
            let len = (div_len - ty.len()) / 4 + 1;
            let whitespace = &div[..len];
            writeln!(&mut file, "{ty}{whitespace}{rest};").unwrap();
        }

        writeln!(&mut file, "\n#endif",).unwrap();
    }
}
