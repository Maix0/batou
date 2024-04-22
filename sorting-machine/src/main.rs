use indexmap::IndexMap;

const DATA: &str = include_str!("../../normed/source_files.list");

fn main() {
    let mut category = IndexMap::new();
    for line in DATA.lines() {
        let line = line.strip_prefix("./").unwrap_or(line);
        let (cat, rest) = line.split_once("/").unwrap();
        if !category.contains_key(cat) {
            category.insert(cat.to_string(), vec![rest.to_string()]);
        } else {
            category.get_mut(cat).unwrap().push(rest.to_string());
        }
    }
    category.sort_by(|_, v1, _, v2| v1.len().cmp(&v2.len()));
    let ascii_chars = ('\x00'..='\x7f')
        .filter(|c| !c.is_digit(10))
        .collect::<Vec<_>>();
    for (_, vals) in &mut category {
        vals.sort_by_key(|v| {
            let s = v.strip_suffix("_inner").unwrap_or(v);
            let last = s.rfind(ascii_chars.as_slice()).map(|i| i + 1).unwrap_or(0);
            s[last..].parse::<i32>().unwrap_or(0)
        })
    }
    for (cat, file) in category
        .iter()
        .flat_map(|(k, v)| std::iter::zip(std::iter::repeat(k.as_str()), v.iter()))
    {
        println!("./{cat}/{file}")
    }
}
