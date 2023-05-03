typedef=alpha;
module sv::t;

ValBool : bool = true;
r#ValBool2 : bool = true;

Val_u8 : u8 = 88;
Val_u8_suffix : u8 = 88u8;

Val_u16 : u16 = 88;
Val_u16_suffix : u16 = 88u16;

Val_u32 : u32 = 88;
Val_u32_suffix : u32 = 88u32;

Val_u64 : u64 = 88;
Val_u64_suffix : u64 = 88u64;

val_i32 : i32 = -32;

val_i32_bare_℘ = 2_147_483_647;
val_i32_bare2 = 2_147_483_64;

русский_идентификатор = 2;

val_f32 : f32 = 3.14159265;
val_f32_suffix = 3.14_f32;
val_f64 : f64 = 3.141592653589793;
val_f64_suffix = 3.141592653589793_f64;

val_f32_bare = 3.14;

ValB : char = '\u{1F600}'; // Smiling Face with Smiling Eyes
ValC : char = '🔥';
ValD : str = "hello \
world";
ValE : str = "Hello,\n \u{01F600}!";
VAL : str = "hello";
ValRaw : str = r#"
👋 Hello world, oh how you spin!
🌍 A place of wonder, let the journey begin.
💻 Code and keystrokes, a language we share.
👨‍💻 Together we create, a world beyond compare.
"#;

impliedStr = "a string";
impliedChar = 'c';

StructA: struct {
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

StructB: struct {
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

StructC: struct {
  asdf: StructA;
  zxcv: i32;
  jkl: i32;
};

VecA: vector<u8>;
VariantA: variant {
  a: bool;
  b: i8;
};
MapA: map<i32, str>;

VariantB: variant {
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

VecB: vector<StructC>;
VecC: vector<VariantB>;
VecD: vector<MapA>;

MapB: map<str, StructC>;
MapC: map<str, VecA>;
MapD: map<str, VariantA>;

StructD: struct {
  a_struct: StructA;
  b_variant: VariantA;
  c_vec: VecA;
  d_map: MapA;
};

//ValArr: array<i32, 3> = "";