typedef=alpha;
module test;

struct SomeVals {
  val_a: i32;
};

template TrivialTemplate(foo: i32, bar: SomeVals) t#"
this is a trivial template.
< foo >
"#
