typedef=alpha;
module test;

struct Person {
  name: str;
  birthday: struct {
    year: u16;
  };
  friends: vector<Person>;
  asdf: map<i32, str>;
}

template sayHi(w: Person) t#"Hello <w.name>!"#
template sayBirthday(w: Person) t#"Hello <w.name>, your birthday is <w.birthday.year>!"#

template callAnother(f: Person) t#"
<sayHi(f)>
"#

template multilineLoop(fs: vector<Person>) t#"
  <for asdf in fs>
    Hi <asdf.name>!
  </for>
"#

template friendsSayingHiToEachOther(fs: map<str, str>) t#"
  <for a, b in fs>
    <a> says hi to <b>
  </for>
"#
