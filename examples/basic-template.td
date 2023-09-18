typedef=alpha;
module test;

struct Person {
  name: str;
  birthday: struct {
    year: u16;
  };
  buddies: vector<Buddy>;
  asdf: map<i32, str>;
}

struct Buddy {
  buddy_name: str;
  parent: Person;
}

template sayHi(w: Person) t#"Hello <w.name>!"#

template callAnother(f: Person) t#"
  <sayHi(f)>
"#

template VectorLoop(fs: vector<Person>) t#"
  <for foo in fs>
    Hi <foo.name>!
  </for>
"#

template MapLoop(fs: map<str, Person>) t#"
  <for a, b in fs>
    <a> says hi to <b.name>, whose birthday is <b.birthday.year>
    <for bud in b.buddies>
      <b.name> is also friends with <bud.buddy_name> whose parent is <bud.parent.name>. <sayHi(bud.parent)>
    </for>
  </for>
"#
