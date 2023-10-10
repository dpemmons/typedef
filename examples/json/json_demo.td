typedef=alpha;
module json_demo;

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

  struct NestedStruct {
    a: i32;
  };
  nested_struct: NestedStruct;
  inline_struct: struct {
    b: str;
  };

  variant NestedVariant {
    c: i32;
    d: str;
  }
  nested_variant: NestedVariant;
  inline_variant: variant {
    e: i32;
    f: str;
  };
}

struct StructB {
  struct NestedStruct {
    a: i32;
  };

  example_vec_bool: vector<bool>;
  example_vec_char: vector<char>;
  example_vec_str: vector<str>;
  example_vec_int: vector<i32>;
  example_vec_nested_struct: vector<NestedStruct>;
  example_vec_vec_int: vector<vector<i32>>;
  example_vec_map_str_int: vector<map<str, i32>>;
}

struct StructC {
  struct NestedStruct {
    a: i32;
  };

  example_map_bool_bool: map<bool, bool>;
  example_map_char_char: map<char, char>;
  example_map_str_str: map<str, str>;
  example_map_int_int: map<i32, i32>;

  example_map_str_nested_struct: map<str, NestedStruct>;
  example_map_str_vec: map<str, vector<i32>>;
  example_map_str_map: map<str, map<str, i32>>;
}

variant VariantA {
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