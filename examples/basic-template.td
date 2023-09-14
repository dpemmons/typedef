typedef=alpha;
module test;

struct Person {
  name: str;
  birthday: struct {
    year: u16;
  };
  friends: vector<Person>;
}

template sayHi(who: Person) t#"Hello <person.name>!"#
template sayBirthday(who: Person) t#"Hello <who.name>, your birthday is <who.birthday.year>!"#

template callAnother(friend: Person) t#"
<sayHi(friend)>
"#
/*
template multilineLoop(friends: vector<Person>) t#"
  <for friend in friends>
    Hi <friend.name>!
  </for>
"#
*/
template callsAnother(who: Person) t#"
  <for friend in friends>
    <sayHi(friend)>
  </for>
"#
