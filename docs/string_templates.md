# Template Strings

- [Overview](#overview)
- [Synopsis](#synopsis)
  - [Simple Replacement](#simple-replacement)
  - [Control Flow](#control-flow)
    - [If / Else](#if--else)
    - [Loops](#loops)
  - [Calls](#calls)
  - [Recursion](#recursion)

## Overview

Typedef implements a string template engine that includes replacement, control flow (if/loops), calls and recursion.

## Synopsis

```typedef
typedef=alpha;
module StExample;


struct Person {
  name: str;
  birthday: struct {
    year: uint16;
  };
  friends: vector<Person>;
}

template sayHi(who: Person) t#"Hello <person.name>!"#
template sayBirthday(who: Person) t#"Hello <who.name>, your birthday is <who.birthday.year>!"#;

template multilineLoop(friends: vector<Person>) t#"
  <for friend in friends>
    Hi <friend.name>!
  <endfor>
"#;

template callsAnother(who: Person) = t#"
  <for friend in friends>
    <sayHi(friend)>
  <endfor>
"#;

```

### Simple Replacement

### Control Flow

#### If / Else

#### Loops

### Calls

### Recursion
