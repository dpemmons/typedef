typedef=alpha;
module examples::tests::structs;

// Struct with explictly typed primitive fields
struct SomeStruct0 {
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
/*
// Struct with explictly typed primitive fields and bool, char and string literals.
struct SomeStruct1 {
  example_bool: bool = true;
  example_char: char = '🔥';
  example_str: str = "hello world";
};

// Struct with explictly typed primitive fields and typed numerical literals
struct SomeStruct2 {
  example_f32: f32 = 3.14f32;
  example_f64: f64 = 5.16f64;
  example_u8: u8 = 8u8;
  example_u16: u16 = 16u16;
  example_u32: u32 = 32u32;
  example_u64: u64 = 64u64;
  example_i8: i8 = -8i8;
  example_i16: i16 = -16i16;
  example_i32: i32 = -32i32;
  example_i64: i64 = -64i64;
};

// Struct with explictly typed primitive fields and type-implied numerical literals.
struct SomeStruct3 {
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

// Struct with implicitly typed primitive fields with explicitly typed literals.
struct SomeStruct4 {
  example_f32 = 3.14f32;
  example_f64 = 5.16f64;
  example_u8 = 8u8;
  example_u16 = 16u16;
  example_u32 = 32u32;
  example_u64 = 64u64;
  example_i8 = -8i8;
  example_i16 = -16i16;
  example_i32 = -32i32;
  example_i64 = -64i64;
};

// Struct with implicitly typed primitive fields with implicitly typed literals.
struct SomeStruct5 {
  example_bool = true;
  example_char = '🔥';
  example_str = "hello world";
  example_f32 = 3.14;
  example_i32 = -32;
};

// Struct with an inline struct
struct SomeStruct10 {
  an_inline_struct: struct {
    a: i32;
  };
};

// Struct with an inline variant
struct SomeStruct11 {
  an_inline_variant: variant {
    va: i32;
    vb: str;
  };
};

// Struct with an inline vector
struct SomeStruct12 {
  inline_vector: vector<i32>;
};

// Struct with an inline map
struct SomeStruct13 {
  inline_map: map<i32, f64>;
};

// Struct with an nested struct
struct SomeStruct20 {
  struct NestedStruct {
    a: i32;
  };
};

// Struct with an nested variant
struct SomeStruct21 {
  variant NestedVariant {
    va: i32;
    vb: str;
  };
};

// Struct with an nested vector
struct SomeStruct22 {
  //vector NestedVector<i32>;
};

// Struct with an nested map
struct SomeStruct23 {
  //map NestedMap<i32, f64>;
};
*/