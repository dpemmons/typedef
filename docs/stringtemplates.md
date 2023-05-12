# String Templates

## Overview

Typedef implements a string template engine that includes replacement, control flow (if/loops), calls and recursion.

## Synopsis

```typedef
typedef=alpha;
module StExample;

struct TemplateExample {

  struct Person {
    name: str;
    birthday: struct {
      year: uint16;
    };
    friends: vector<Person>;
    sayHi: stringTemplate<Person> = "Hi <name>!";
  }

  simple: stringTemplate<Person> = "Hello <name>!";

  subStruct: stringTemplate<Person> = "Hello <name>, your birthday is <birthday.year>!";

  multilineLoop: stringTemplate<Person> = r#"
    <for friend in friends>
      Hi <friend.name>!
    <endfor>
  "#;

  // TODO: how to resolve ambiguity?
  callsAnother: stringTemplate<Person> = r#"
    <for friend in friends>
      <sayHi(friend)>
    <endfor>
  "#;
};

```

Called via C++:
```cpp
```

Result:
```
```

## Overview

### Simple Replacement

### Control Flow

#### If / Else

#### Loops

### Calls

### Recursion




