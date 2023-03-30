#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>

namespace td {
namespace types {

class Type {
 public:
  virtual std::string_view TypeName() const = 0;

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

  virtual void print(std::ostream& os) const = 0;
  std::string ToString() const;

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
  Bool(bool val) : Scalar(), val_(val){};

  std::string_view TypeName() const override;

  bool IsBool() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<bool> Value() const { return val_; }

  static std::unique_ptr<Bool> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;

 protected:
  std::optional<bool> val_;
};

class Char : public Scalar {
 public:
  Char(char32_t val) : Scalar(), val_(val){};

  std::string_view TypeName() const override;

  bool IsChar() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<char32_t> Value() const { return val_; }

  static std::unique_ptr<Char> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;

  friend std::ostream& operator<<(std::ostream& os, const Char& c) {
    c.print(os);
    return os;
  }

 protected:
  Char(const Char&) = delete;

  std::optional<char32_t> val_;
};

class Float : public Scalar {
 public:
  bool IsFloat() const override { return true; }

 protected:
};

class F32 : public Float {
 public:
  F32(float val) : Float(), val_(val){};

  std::string_view TypeName() const override { return typename_; }

  bool IsF32() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<float> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<F32> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;

 protected:
  std::optional<float> val_;
  static constexpr std::string_view typename_ = std::string_view("f32", 3);
};

class F64 : public Float {
 public:
  F64(double val) : Float(), val_(val){};

  std::string_view TypeName() const override { return typename_; }

  bool IsF64() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<double> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<F64> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;

 protected:
  std::optional<double> val_;
  static constexpr std::string_view typename_ = std::string_view("f64", 3);
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
  I8(int8_t val) : SignedInteger(), val_(val){};

  std::string_view TypeName() const override { return typename_; }

  bool IsI8() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<int8_t> Value() const { return val_; }

  // TODO(dpemmons) do we need this?
  static bool LiteralHasSuffix(std::string_view literal);

  static std::unique_ptr<I8> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;

 protected:
  std::optional<int8_t> val_;
  static constexpr std::string_view typename_ = std::string_view("i8", 2);
};

class I16 : public SignedInteger {
 public:
  I16(int16_t val) : SignedInteger(), val_(val){};

  std::string_view TypeName() const override { return typename_; }

  bool IsI16() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<int16_t> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<I16> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;

 protected:
  std::optional<int16_t> val_;
  static constexpr std::string_view typename_ = std::string_view("i16", 3);
};

class I32 : public SignedInteger {
 public:
  I32(int32_t val) : SignedInteger(), val_(val){};

  std::string_view TypeName() const override { return typename_; }

  bool IsI32() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<int32_t> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<I32> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;

 protected:
  std::optional<int32_t> val_;
  static constexpr std::string_view typename_ = std::string_view("i32", 3);
};

class I64 : public SignedInteger {
 public:
  I64(int64_t val) : SignedInteger(), val_(val){};

  std::string_view TypeName() const override { return typename_; }

  bool IsI64() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<int64_t> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<I64> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;

 protected:
  std::optional<int64_t> val_;
  static constexpr std::string_view typename_ = std::string_view("i64", 3);
};

class UnsignedInteger : public Integer {
 public:
  bool IsUnsignedInteger() const override { return true; }

 protected:
};

class U8 : public SignedInteger {
 public:
  U8(uint8_t val) : SignedInteger(), val_(val){};

  std::string_view TypeName() const override { return typename_; }

  bool IsU8() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<uint8_t> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<U8> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;

 protected:
  std::optional<uint8_t> val_;
  static constexpr std::string_view typename_ = std::string_view("i8", 2);
};

class U16 : public SignedInteger {
 public:
  U16(uint16_t val) : SignedInteger(), val_(val){};

  std::string_view TypeName() const override { return typename_; }

  bool IsU16() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<uint16_t> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<U16> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;

 protected:
  std::optional<uint16_t> val_;
  static constexpr std::string_view typename_ = std::string_view("i16", 3);
};

class U32 : public SignedInteger {
 public:
  U32(uint32_t val) : SignedInteger(), val_(val){};

  std::string_view TypeName() const override { return typename_; }

  bool IsU32() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<uint32_t> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<U32> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;

 protected:
  std::optional<uint32_t> val_;
  static constexpr std::string_view typename_ = std::string_view("i32", 3);
};

class U64 : public SignedInteger {
 public:
  U64(uint64_t val) : SignedInteger(), val_(val){};

  std::string_view TypeName() const override { return typename_; }

  bool IsU64() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<uint64_t> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<U64> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;

 protected:
  std::optional<uint64_t> val_;
  static constexpr std::string_view typename_ = std::string_view("i64", 3);
};

}  // namespace types
}  // namespace td