use std::io::{BufRead, Write};

fn main() {
    let mut args = std::env::args().skip(1);
    let source_file = args.next().unwrap();
    let skip_line = args.next().unwrap();
    let end_range = args.next().unwrap();
    let out_dir = args.next().unwrap();

    dbg!(&source_file);
    dbg!(&skip_line);
    dbg!(&end_range);
    dbg!(&out_dir);

    let in_file = std::io::BufReader::new(std::fs::File::open(&source_file).unwrap());

    let mut lines = in_file
        .lines()
        .map(Result::unwrap)
        .take(end_range.parse().unwrap())
        .skip(skip_line.parse().unwrap())
        .take_while(|s| !s.trim().starts_with("}"))
        .peekable();

    let mut count = 0;
    let mut out = Vec::new();
    while lines.peek().is_some() {
        out.push(create_file(count, lines.by_ref().take(15)).unwrap());
        count += 1;
    }
    let funcs = (0..count)
        .map(|c| format!("void\tinit_thingy{c}(__TYPE__ *v);\n"))
        .collect::<String>();

    let mut file = std::fs::OpenOptions::new()
        .write(true)
        .truncate(true)
        .create(true)
        .open(format!("{out_dir}/funcs.h"))
        .unwrap();
    write!(&mut file, include_str!("42header"), "funcs.h").unwrap();
    writeln!(&mut file, "#ifndef FUNCS_H\n# define FUNCS_H\n").unwrap();
    write!(&mut file, "{funcs}\n").unwrap();
    writeln!(&mut file, "#endif // FUNCS_H").unwrap();
    println!("created {} functions", out.len());
    for (idx, chunk) in out.chunks(5).enumerate() {
        let name = format!("funcs{idx}.c");
        let mut file = std::fs::OpenOptions::new()
            .write(true)
            .truncate(true)
            .create(true)
            .open(format!("{out_dir}/{name}"))
            .unwrap();
        write!(&mut file, include_str!("42header"), name).unwrap();
        //writeln!(&mut file, "__HEADERS__").unwrap();
        writeln!(&mut file, "#include \"funcs.h\"\n").unwrap();
        for func in chunk {
            writeln!(&mut file, "{func}").unwrap();
        }
        writeln!(&mut file, "// file {name}").unwrap();
    }
}

fn create_file(
    count: usize,
    iter: impl Iterator<Item = String>,
) -> Result<String, std::fmt::Error> {
    use std::fmt::Write;

    let mut f = String::new();
    writeln!(&mut f, "void\tinit_thingy{count}(__TYPE__ *v)")?;
    writeln!(&mut f, "{{")?;

    let mut  lines = 0;
    for s in iter {
        if s.chars().fold(0, |s, c| {
            if c == '\t' {
                let mut next = 4 - s % 4;
                if next == 0 {
                    next = 4
                };
                s + next
            } else {
                s + 1
            }
        }) < 80
        {
            writeln!(&mut f, "{s}")?;
            lines +=1;
        } else {
            let (idx, _) = s.char_indices().fold((0, 0), |(idx, len), (cidx, c)| {
                if len > 80 {
                    (idx, 99999)
                } else {
                    let newlen = if c == '\t' {
                        let mut next = 4 - len % 4;
                        if next == 0 {
                            next = 4
                        };
                        len + next
                    } else {
                        len + 1
                    };
                    if newlen > 80 {
                        (idx, 999999)
                    } else {
                        (cidx, newlen)
                    }
                }
            });
            let split = s[..=idx].rfind(&[' ', '\t']).unwrap_or(s.len());
            writeln!(&mut f, "{} \\", &s[..split]).unwrap();
            writeln!(&mut f, "\t{}", &s[(split+1)..]).unwrap();
            lines += 2;
        }
        if lines >= 22 {
            break;
        }
    }
    writeln!(&mut f, "\tinit_thingy{}(v);", count + 1)?;
    writeln!(&mut f, "}}")?;

    Ok(f)
}
