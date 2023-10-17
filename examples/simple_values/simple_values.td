typedef=alpha;
module simple_values;

struct StructA {
  example_bool: bool;

  example_char: char;

  example_str: str;

  example_f32: f32;
  example_f64: f64;

  example_u8: u8;
  example_u16: u16;
  example_u32: u32;
  example_u64: u64;

  example_i8: i8;
  example_i16: i16;
  example_i32: i32;
  example_i64: i64;
}

// With default values.
struct StructB {
  example_bool: bool = true;

  example_char: char = '🔥';

  example_str: str = "hello👋 world🌎";

  example_f32: f32 = 3.14;
  example_f64: f64 = 5.16;

  example_u8: u8 = 8;
  example_u16: u16 = 16;
  example_u32: u32 = 32;
  example_u64: u64 = 64;

  example_i8: i8 = -8;
  example_i16: i16 = -16;
  example_i32: i32 = -32;
  example_i64: i64 = -64;
}

struct StructC {
  asdf: StructA;
  zxcv: i32;
  jkl: i32;
}

variant VariantA {
  a: bool;
  b: i8;
}

variant VariantB {
  a: bool;
  b: char;
  c: str;
  d: u8;
  e: u16;
  f: u32;
  g: u64;
  h: i8;
  i: i16;
  j: i32;
  k: i64;

  sa: StructA;
  sb: StructB;
  sc: StructC;

  va: vector<u8>;
  vara: VariantA;
  mapa: map<i32, VariantB>;
}

struct StructD {
  a_struct: StructA;
  b_variant: VariantA;
  c_vec: vector<u8>;
  d_map: map<i32, VariantB>;
}

struct StructE {
  inlineStruct: struct {
    a: i32;
  };
  // Test that name collisions don't happen.
  variant VariantE {
    va: i32;
    vb: str;
  };
  vec_a: vector<i32>;
  map_a: map<str, StructD>;


  struct NestedStruct {
    a: i32;
  };
  nestedStructField: NestedStruct;

  variant NestedVariant {
    a: i64;
  };
  nestedVariantField: NestedVariant;
}

variant VariantC {
  inlineStruct: struct {
    a: i32;
  };
  // Test that name collisions don't happen.
  VariantF: variant {
    va: i32;
    vb: str;
  };
  vec_a: vector<i32>;
  map_a: map<str, StructD>;

  struct NestedStruct {
    a: i32;
  };
  nestedStructField: NestedStruct;

  variant NestedVariant {
    a: i64;
  };
  nestedVariantField: NestedVariant;

  map_b: map<i32, NestedVariant>;
  vec_b: vector<i32>;
}
