
pub fn reverse(input: &str) -> String {
    let mut chars = input.chars();
    let mut ans = String::from("");
    for _count in 0..input.len() {
        let strChar = match chars.next() {
            Some(value) => String::from(value),
            None => String::from(""),
        };
        ans = strChar + &ans; 
    }
    ans

}
