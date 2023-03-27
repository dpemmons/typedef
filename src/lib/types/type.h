#pragma once

#include <cstdint>
#include <memory>
#include <optional>
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
  // static Type CreateFromLiteral(const std::string& str);

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

  virtual void print(std::ostream& os) const;

 protected:
  Type() {}
};

class Primitive : public Type {
 public:
  bool IsPrimitive() const override { return true; }

 protected:
  Primitive() : Type() {}
};

class Scalar : public Primitive {
 public:
  bool IsScalar() const override { return true; }

 protected:
  Scalar() : Primitive(){};
};

class Bool : public Scalar {
 public:
  bool IsBool() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<bool> Value() const { return val_; }

  static std::unique_ptr<Bool> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const = 0;

 protected:
  std::optional<bool> val_;
};

class Char : public Scalar {
 public:
  Char(char32_t val) : Scalar(), val_(val){};
  bool IsChar() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<char32_t> Value() const { return val_; }

  static std::unique_ptr<Char> FromLiteral(std::string_view literal);

 protected:
  Char(const Char&) = delete;

  std::optional<char32_t> val_;
};

class Float : public Scalar {
 public:
  bool IsFloat() const override { return true; }

 protected:
};

class Float32 : public Float {
 public:
  bool IsF32() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<float> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<Float32> FromLiteral(std::string_view literal);

 protected:
  std::optional<float> val_;
};

class Float64 : public Float {
 public:
  bool IsF64() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<double> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<Float64> FromLiteral(std::string_view literal);

 protected:
  std::optional<double> val_;
};

class Integer : public Scalar {
 public:
  bool IsInteger() const override { return true; }

 protected:
};

class SignedInteger : public Integer {
 public:
  bool IsSignedInteger() const override { return true; }

 protected:
};

class I8 : public SignedInteger {
 public:
  bool IsI8() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<int8_t> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<I8> FromLiteral(std::string_view literal);

 protected:
  std::optional<int8_t> val_;
};

class I16 : public SignedInteger {
 public:
  bool IsI16() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<int16_t> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<I16> FromLiteral(std::string_view literal);

 protected:
  std::optional<int16_t> val_;
};

class I32 : public SignedInteger {
 public:
  bool IsI32() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<int32_t> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<I32> FromLiteral(std::string_view literal);

 protected:
  std::optional<int32_t> val_;
};

class I64 : public SignedInteger {
 public:
  bool IsI64() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<int64_t> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<I64> FromLiteral(std::string_view literal);

 protected:
  std::optional<int64_t> val_;
};

class UnsignedInteger : public Integer {
 public:
  bool IsUnsignedInteger() const override { return true; }

 protected:
};

class U8 : public SignedInteger {
 public:
  bool IsU8() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<uint8_t> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<U8> FromLiteral(std::string_view literal);

 protected:
  std::optional<uint8_t> val_;
};

class U16 : public SignedInteger {
 public:
  bool IsU16() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<uint16_t> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<U16> FromLiteral(std::string_view literal);

 protected:
  std::optional<uint16_t> val_;
};

class U32 : public SignedInteger {
 public:
  bool IsU32() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<uint32_t> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<U32> FromLiteral(std::string_view literal);

 protected:
  std::optional<uint32_t> val_;
};

class U64 : public SignedInteger {
 public:
  bool IsU64() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<uint64_t> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<U64> FromLiteral(std::string_view literal);

 protected:
  std::optional<uint64_t> val_;
};

}  // namespace types
}  // namespace td