#pragma once

namespace td {

class Type {
 public:
  Type() {}

 private:
  enum class Type_ {
    UNKNOWN = 0,

    // Scalars
    SCALARS_START = 10,

    BOOL = 11,
    
    // Characters
    C8 = 20,   // 8-bit 'ascii' char
    C32 = 21,  // UTF-8 char

    // Floating Point Scalars
    F32 = 30,
    F64 = 31,

    // Integar Scalars
    INTEGERS_START = 40,
    SIGNED_INTEGERS_START = 41,
    I8 = 42,
    I16 = 43,
    I32 = 44,
    I64 = 45,
    I128 = 46,
    SIGNED_INTEGERS_END = 49,
    // Unsigned Integer Scalars
    UNSIGNED_INTEGERS_START = 50,
    U8 = 51,
    U16 = 52,
    U32 = 53,
    U64 = 54,
    U128 = 55,
    UNSIGNED_INTEGERS_END = 58,
    INTEGERS_END = 59,

    SCALARS_END = 99,

    ENUM = 100,

    // Product Types
    LIST = 200,
    TUPLE = 300,
    SET = 400,
    DICTIONARY = 500,

    STRUCT = 600,
    MESSAGE = 700,

    // Not (yet) sure how to categorize.

    // Sum Type
    VARIANT = 1100,

    // Interface Types

  } type_;
};

}  // namespace td