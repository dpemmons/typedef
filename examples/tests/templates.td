typedef=alpha;
module test;

struct SomeVals {
  val_a: i32;
};

template DoIt(foo: i32, bar: SomeVals) t"Hello World!";
