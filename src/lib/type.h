#pragma once

#include <string>

namespace td {

class Type {
 public:
  static Type CreateBOOL() { return Type(Type_::BOOL); };
  static Type CreateCHAR() { return Type(Type_::CHAR); };
  static Type CreateC32() { return Type(Type_::C32); };
  static Type CreateF32() { return Type(Type_::F32); };
  static Type CreateF64() { return Type(Type_::F64); };
  static Type CreateI8() { return Type(Type_::I8); };
  static Type CreateI16() { return Type(Type_::I16); };
  static Type CreateI32() { return Type(Type_::I32); };
  static Type CreateI64() { return Type(Type_::I64); };
  static Type CreateI128() { return Type(Type_::I128); };
  static Type CreateU8() { return Type(Type_::U8); };
  static Type CreateU16() { return Type(Type_::U16); };
  static Type CreateU32() { return Type(Type_::U32); };
  static Type CreateU64() { return Type(Type_::U64); };
  static Type CreateU128() { return Type(Type_::U128); };

  bool IsInteger() const {
    return type_ > Type_::INTEGERS_START && type_ < Type_::INTEGERS_END;
  };
  bool IsScalar() const {
    return type_ > Type_::SCALARS_START && type_ < Type_::SCALARS_END;
  };

  std::string ToString() const {
    switch (type_) {
      case Type_::UNKNOWN:
        return "unknown";
      case Type_::BOOL:
        return "bool";
      case Type_::CHAR:
        return "char";
      case Type_::C32:
        return "c32";
      case Type_::F32:
        return "f32";
      case Type_::F64:
        return "f64";
      case Type_::I8:
        return "i8";
      case Type_::I16:
        return "i16";
      case Type_::I32:
        return "i32";
      case Type_::I64:
        return "i64";
      case Type_::I128:
        return "i128";
      case Type_::U8:
        return "u8";
      case Type_::U16:
        return "u16";
      case Type_::U32:
        return "u32";
      case Type_::U64:
        return "u64";
      case Type_::U128:
        return "u128";
      default:
        return "unimplemented";
    }
  };

 private:
  enum class Type_ {
    UNKNOWN = 0,

    // Scalars
    SCALARS_START = 10,

    BOOL = 11,

    // Characters
    CHAR = 20,  // 8-bit 'ascii' char
    C32 = 21,   // UTF-8 char

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
  
  Type(Type_ t) : type_(t) {};
};

}  // namespace td