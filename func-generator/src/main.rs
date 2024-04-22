use std::io::Write;

fn main() {
    let funcs_name = std::env::args().skip(1).next().unwrap_or(String::new());
    let funcs_count = std::env::args()
        .skip(2)
        .next()
        .map(|s| s.parse::<usize>().unwrap())
        .unwrap_or(0);

    let names_vals = (0..=funcs_count)
        .map(|s| (s, format!("{funcs_name}{s}")))
        .collect::<Vec<_>>();
    let mut names = names_vals.chunks(20).enumerate().peekable();

    let mut fidx = 0;
    loop {
        let mut file = std::fs::OpenOptions::new()
            .write(true)
            .truncate(true)
            .create(true)
            .open(format!("out/{funcs_name}_array{fidx}.c"))
            .unwrap();
        writeln!(
            &mut file,
            include_str!("./42header"),
            format!("{:<51}", format!("{funcs_name}_array{fidx}.c"))
        )
        .unwrap();
        writeln!(&mut file, "#include \"./{funcs_name}_array.h\"\n",).unwrap();
        for (idx, funcs) in names.by_ref().take(5) {
            writeln!(&mut file, "void\tinit_{funcs_name}_array{idx}(__type__ *v)").unwrap();
            writeln!(&mut file, "{{").unwrap();
            for (i, func) in funcs {
                writeln!(&mut file, "\tv->arr[{i}] = {func};").unwrap();
            }
            writeln!(&mut file, "\tinit_{funcs_name}_array{}(v);", idx + 1).unwrap();
            writeln!(&mut file, "}}\n").unwrap();
        }
        writeln!(&mut file, "// End of File").unwrap();
        if names.peek().is_none() {
            break;
        }
        fidx += 1;
    }
    {
        let mut file = std::fs::OpenOptions::new()
            .write(true)
            .truncate(true)
            .create(true)
            .open(format!("out/{funcs_name}_array.h"))
            .unwrap();
        writeln!(
            &mut file,
            include_str!("./42header"),
            format!("{:<51}", format!("{funcs_name}_array.h"))
        )
        .unwrap();
        let guard = format!("{funcs_name}_array_h").to_uppercase();
        writeln!(&mut file, "#ifndef {guard}").unwrap();
        writeln!(&mut file, "# define {guard}").unwrap();
        writeln!(&mut file, "").unwrap();
        for idx in 0..=funcs_count {
            writeln!(
                &mut file,
                "void\tinit_{funcs_name}_array{idx}(__type__ *v);"
            )
            .unwrap();
        }
        writeln!(&mut file, "").unwrap();
        writeln!(&mut file, "#endif // {guard}").unwrap();
    }
}
