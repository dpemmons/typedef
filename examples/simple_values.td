typedef=alpha;
module sv::t;

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
};

struct StructB {
  example_bool = true;

  example_char = '🔥';

  example_str = "hello world";

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
};

struct StructC {
  asdf: StructA;
  zxcv: i32;
  jkl: i32;
};

vector VecA<u8>;
variant VariantA {
  a: bool;
  b: i8;
};
// using something declared below
map MapA<i32, VariantB>;

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

  va: VecA;
  vara: VariantA;
  mapa: MapA;
};

vector VecB<StructC>;
vector VecC<VariantB>;
vector VecD<MapA>;

map MapB<str, StructC>;
map MapC<str, VecA>;
map MapD<str, VariantA>;

struct StructD {
  a_struct: StructA;
  b_variant: VariantA;
  c_vec: VecA;
  d_map: MapA;
};

struct StructE {
  inlineStruct: struct {
    a: i32;
  };
  // Test that name collisions don't happen.
  VariantB: variant {
    va: i32;
    vb: str;
  };
  inlineVector: vector<i32>;
  inlineMap: map<str, StructD>;
};

variant VariantC {
  inlineStruct: struct {
    a: i32;
  };
  // Test that name collisions don't happen.
  VariantB: variant {
    va: i32;
    vb: str;
  };
  inlineVector: vector<i32>;
  inlineMap: map<str, StructD>;
};
