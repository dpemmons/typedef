typedef=alpha;
module test;

struct SomeVals {
  val_a: i32;
};

template DoIt(name: str, bar: SomeVals) t#"
Hello <name>!
"#
