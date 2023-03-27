#pragma once

#include <string>

namespace td {
namespace types {

class Type {
 public:
  virtual bool IsPrimitive() const { return false; }
  virtual bool IsScalar() const { return false; }
  virtual bool IsBool() const { return false; }
  virtual bool IsChar() const { return false; }
  virtual bool IsFloat() const { return false; }
  virtual bool IsF32() const { return false; }
  virtual bool IsF64() const { return false; }
  virtual bool IsInteger() const { return false; }
  virtual bool IsSignedInteger() const { return false; }
  virtual bool IsUnsignedInteger() const { return false; }
  virtual bool IsI8() const { return false; }
  virtual bool IsI16() const { return false; }
  virtual bool IsI32() const { return false; }
  virtual bool IsI64() const { return false; }
  virtual bool IsU8() const { return false; }
  virtual bool IsU16() const { return false; }
  virtual bool IsU32() const { return false; }
  virtual bool IsU64() const { return false; }

  virtual bool HasValue() const { return false; }

  // static Type CreateBOOL();
  // static Type CreateCHAR();
  // static Type CreateF32();
  // static Type CreateF64();

  // static Type CreateI8();
  // static Type CreateI16();
  // static Type CreateI32();
  // static Type CreateI64();
  // static Type CreateI128();
  // static Type CreateU8();
  // static Type CreateU16();
  // static Type CreateU32();
  // static Type CreateU64();
  // static Type CreateU128();
  // static Type CreateFromString(const std::string& str);

  // bool IsUnknown() const;

  // bool IsBool() const;
  // bool IsInteger() const;
  // bool IsScalar() const;
  // bool IsBOOL() const;
  // bool IsCHAR() const;
  // bool IsF32() const;
  // bool IsF64() const;
  // bool IsI8() const;
  // bool IsI16() const;
  // bool IsI32() const;
  // bool IsI64() const;
  // bool IsI128() const;
  // bool IsU8() const;
  // bool IsU16() const;
  // bool IsU32() const;
  // bool IsU64() const;
  // bool IsU128() const;

  // std::string ToString() const;

  // friend bool operator==(const Type& c1, const Type& c2);
  // friend bool operator!=(const Type& c1, const Type& c2);

  virtual void print(std::ostream& os) const = 0;

 protected:
  Type() {}

  // static Type CreateUnknown() { return Type(Type_::UNKNOWN); }
  // enum class Type_ {
  //   UNKNOWN = 0,

  //   // Scalars
  //   SCALARS_START = 10,

  //   BOOL = 11,

  //   // Characters
  //   CHAR = 20,  // 32-bit utf-8 character

  //   // Floating Point Scalars
  //   F32 = 30,
  //   F64 = 31,

  //   // Integar Scalars
  //   INTEGERS_START = 40,
  //   SIGNED_INTEGERS_START = 41,
  //   I8 = 42,
  //   I16 = 43,
  //   I32 = 44,
  //   I64 = 45,
  //   I128 = 46,
  //   SIGNED_INTEGERS_END = 49,
  //   // Unsigned Integer Scalars
  //   UNSIGNED_INTEGERS_START = 50,
  //   U8 = 51,
  //   U16 = 52,
  //   U32 = 53,
  //   U64 = 54,
  //   U128 = 55,
  //   UNSIGNED_INTEGERS_END = 58,
  //   INTEGERS_END = 59,

  //   SCALARS_END = 99,

  //   ENUM = 100,

  //   // Product Types
  //   LIST = 200,
  //   TUPLE = 300,
  //   SET = 400,
  //   DICTIONARY = 500,

  //   STRUCT = 600,
  //   MESSAGE = 700,

  //   // Not (yet) sure how to categorize.

  //   // Sum Type
  //   VARIANT = 1100,

  //   // Interface Types

  // } type_;

  // Type(Type_ t) : type_(t){};
};

}  // namespace types
}  // namespace td