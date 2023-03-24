#pragma once

#include <string>

namespace td {

class Type {
 public:
  static Type CreateBOOL() { return Type(Type_::BOOL); };
  static Type CreateCHAR() { return Type(Type_::CHAR); };
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
  static Type CreateFromString(const std::string& str) {
    if (str.compare("bool") == 0) {
      return CreateBOOL();
    } else if (str.compare("char") == 0) {
      return CreateCHAR();
    } else if (str.compare("f32") == 0) {
      return CreateF32();
    } else if (str.compare("f64") == 0) {
      return CreateF64();
    } else if (str.compare("i8") == 0) {
      return CreateI8();
    } else if (str.compare("i16") == 0) {
      return CreateI16();
    } else if (str.compare("i32") == 0) {
      return CreateI32();
    } else if (str.compare("i64") == 0) {
      return CreateI64();
    } else if (str.compare("i128") == 0) {
      return CreateI128();
    } else if (str.compare("u8") == 0) {
      return CreateU8();
    } else if (str.compare("u16") == 0) {
      return CreateU16();
    } else if (str.compare("u32") == 0) {
      return CreateU32();
    } else if (str.compare("u64") == 0) {
      return CreateU64();
    } else if (str.compare("u128") == 0) {
      return CreateU128();
    } else {
      return CreateUnknown();
    }
  };

  bool IsUnknown() const { return type_ == Type_::UNKNOWN; }

  bool IsBool() const { return type_ == Type_::BOOL; };
  bool IsInteger() const {
    return type_ > Type_::INTEGERS_START && type_ < Type_::INTEGERS_END;
  };
  bool IsScalar() const {
    return type_ > Type_::SCALARS_START && type_ < Type_::SCALARS_END;
  };
  bool IsBOOL() const { return type_ == Type_::BOOL; }
  bool IsCHAR() const { return type_ == Type_::CHAR; }
  bool IsF32() const { return type_ == Type_::F32; }
  bool IsF64() const { return type_ == Type_::F64; }
  bool IsI8() const { return type_ == Type_::I8; }
  bool IsI16() const { return type_ == Type_::I16; }
  bool IsI32() const { return type_ == Type_::I32; }
  bool IsI64() const { return type_ == Type_::I64; }
  bool IsI128() const { return type_ == Type_::I128; }
  bool IsU8() const { return type_ == Type_::U8; }
  bool IsU16() const { return type_ == Type_::U16; }
  bool IsU32() const { return type_ == Type_::U32; }
  bool IsU64() const { return type_ == Type_::U64; }
  bool IsU128() const { return type_ == Type_::U128; }

  std::string ToString() const {
    switch (type_) {
      case Type_::UNKNOWN:
        return "unknown";
      case Type_::BOOL:
        return "bool";
      case Type_::CHAR:
        return "char";
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
        abort();
    }
  };

  friend bool operator==(const Type& c1, const Type& c2) {
    return c1.type_ == c2.type_;
  }
  friend bool operator!=(const Type& c1, const Type& c2) {
    return c1.type_ != c2.type_;
  }

 private:
  static Type CreateUnknown() { return Type(Type_::UNKNOWN); }
  enum class Type_ {
    UNKNOWN = 0,

    // Scalars
    SCALARS_START = 10,

    BOOL = 11,

    // Characters
    CHAR = 20,  // 32-bit utf-8 character

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

  Type(Type_ t) : type_(t){};
};

}  // namespace td