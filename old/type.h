#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <ostream>
#include <string>
#include <vector>

namespace td {

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

  virtual bool IsString() const { return false; }

  virtual bool IsArray() const { return false; }
  virtual bool IsVector() const { return false; }
  virtual bool IsStruct() const { return false; }
  virtual bool IsMessage() const { return false; }
  virtual bool IsEnum() const { return false; }
  virtual bool IsVariant() const { return false; }

  virtual bool HasValue() const { return false; }

  virtual void print(std::ostream& os) const = 0;
  std::string ToString() const;

  friend std::ostream& operator<<(std::ostream& os, const Type& value);

  bool HasSameType(Type const& other) { return type_ == other.type_; }

 protected:
  enum class Type_ {
    UNKNOWN,
    BOOL,
    CHAR,
    F32,
    F64,
    I8,
    I16,
    I32,
    I64,
    U8,
    U16,
    U32,
    U64,
    STR,
    ARRAY,
    VECTOR,
    STRUCT,
    MESSAGE,
    ENUM,
    VARIANT
  } type_;
  Type(Type_ t) : type_(t) {}
};

class Primitive : public Type {
 public:
  bool IsPrimitive() const override { return true; }

 protected:
  Primitive(Type_ t) : Type(t) {}
};

class Scalar : public Primitive {
 public:
  bool IsScalar() const override { return true; }

 protected:
  Scalar(Type_ t) : Primitive(t){};
};

class Bool : public Scalar {
 public:
  Bool(bool val) : Scalar(Type_::BOOL), val_(val){};

  static std::string_view TypeName() { return typename_; };

  bool IsBool() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<bool> Value() const { return val_; }

  static std::unique_ptr<Bool> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;
  friend std::ostream& operator<<(std::ostream& os, const Bool& c) {
    c.print(os);
    return os;
  }

  bool operator==(Bool const& other) const { return val_ == other.val_; }
  bool operator!=(Bool const& other) const { return val_ != other.val_; }

 protected:
  std::optional<bool> val_;
  static constexpr std::string_view typename_ = std::string_view("bool", 4);
};

class Char : public Scalar {
 public:
  Char(char32_t val) : Scalar(Type_::CHAR), val_(val){};

  static std::string_view TypeName() { return typename_; };

  bool IsChar() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<char32_t> Value() const { return val_; }

  static std::unique_ptr<Char> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;
  friend std::ostream& operator<<(std::ostream& os, const Char& c) {
    c.print(os);
    return os;
  }

  bool operator==(Char const& other) const { return val_ == other.val_; }
  bool operator!=(Char const& other) const { return val_ != other.val_; }

 protected:
  Char(const Char&) = delete;

  // UTF-32 aka UCS-4.
  std::optional<char32_t> val_;
  static constexpr std::string_view typename_ = std::string_view("char", 4);
};

class Float : public Scalar {
 public:
  bool IsFloat() const override { return true; }

 protected:
  Float(Type_ t) : Scalar(t){};
};

class F32 : public Float {
 public:
  F32(float val) : Float(Type_::F32), val_(val){};

  static std::string_view TypeName() { return typename_; };

  bool IsF32() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<float> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<F32> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;
  friend std::ostream& operator<<(std::ostream& os, const F32& c) {
    c.print(os);
    return os;
  }

  bool operator==(F32 const& other) const { return val_ == other.val_; }
  bool operator!=(F32 const& other) const { return val_ != other.val_; }

 protected:
  std::optional<float> val_;
  static constexpr std::string_view typename_ = std::string_view("f32", 3);
};

class F64 : public Float {
 public:
  F64(double val) : Float(Type_::F64), val_(val){};

  static std::string_view TypeName() { return typename_; };

  bool IsF64() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<double> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<F64> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;
  friend std::ostream& operator<<(std::ostream& os, const F64& c) {
    c.print(os);
    return os;
  }

  bool operator==(F64 const& other) const { return val_ == other.val_; }
  bool operator!=(F64 const& other) const { return val_ != other.val_; }

 protected:
  std::optional<double> val_;
  static constexpr std::string_view typename_ = std::string_view("f64", 3);
};

class Integer : public Scalar {
 public:
  bool IsInteger() const override { return true; }

 protected:
  Integer(Type_ t) : Scalar(t){};
};

class SignedInteger : public Integer {
 public:
  bool IsSignedInteger() const override { return true; }

 protected:
  SignedInteger(Type_ t) : Integer(t){};
};

class I8 : public SignedInteger {
 public:
  I8(int8_t val) : SignedInteger(Type_::I8), val_(val){};

  static std::string_view TypeName() { return typename_; };

  bool IsI8() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<int8_t> Value() const { return val_; }

  // TODO(dpemmons) do we need this?
  static bool LiteralHasSuffix(std::string_view literal);

  static std::unique_ptr<I8> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;
  friend std::ostream& operator<<(std::ostream& os, const I8& c) {
    c.print(os);
    return os;
  }

  bool operator==(I8 const& other) const { return val_ == other.val_; }
  bool operator!=(I8 const& other) const { return val_ != other.val_; }

 protected:
  std::optional<int8_t> val_;
  static constexpr std::string_view typename_ = std::string_view("i8", 2);
};

class I16 : public SignedInteger {
 public:
  I16(int16_t val) : SignedInteger(Type_::I16), val_(val){};

  static std::string_view TypeName() { return typename_; };

  bool IsI16() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<int16_t> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<I16> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;
  friend std::ostream& operator<<(std::ostream& os, const I16& c) {
    c.print(os);
    return os;
  }

  bool operator==(I16 const& other) const { return val_ == other.val_; }
  bool operator!=(I16 const& other) const { return val_ != other.val_; }

 protected:
  std::optional<int16_t> val_;
  static constexpr std::string_view typename_ = std::string_view("i16", 3);
};

class I32 : public SignedInteger {
 public:
  I32(int32_t val) : SignedInteger(Type_::I32), val_(val){};

  static std::string_view TypeName() { return typename_; };

  bool IsI32() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<int32_t> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<I32> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;
  friend std::ostream& operator<<(std::ostream& os, const I32& c) {
    c.print(os);
    return os;
  }

  bool operator==(I32 const& other) const { return val_ == other.val_; }
  bool operator!=(I32 const& other) const { return val_ != other.val_; }

 protected:
  std::optional<int32_t> val_;
  static constexpr std::string_view typename_ = std::string_view("i32", 3);
};

class I64 : public SignedInteger {
 public:
  I64(int64_t val) : SignedInteger(Type_::I64), val_(val){};

  static std::string_view TypeName() { return typename_; };

  bool IsI64() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<int64_t> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<I64> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;
  friend std::ostream& operator<<(std::ostream& os, const I64& c) {
    c.print(os);
    return os;
  }

  bool operator==(I64 const& other) const { return val_ == other.val_; }
  bool operator!=(I64 const& other) const { return val_ != other.val_; }

 protected:
  std::optional<int64_t> val_;
  static constexpr std::string_view typename_ = std::string_view("i64", 3);
};

class UnsignedInteger : public Integer {
 public:
  bool IsUnsignedInteger() const override { return true; }

 protected:
  UnsignedInteger(Type_ t) : Integer(t){};
};

class U8 : public UnsignedInteger {
 public:
  U8(uint8_t val) : UnsignedInteger(Type_::U8), val_(val){};

  static std::string_view TypeName() { return typename_; };

  bool IsU8() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<uint8_t> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<U8> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;
  friend std::ostream& operator<<(std::ostream& os, const U8& c) {
    c.print(os);
    return os;
  }

  bool operator==(U8 const& other) const { return val_ == other.val_; }
  bool operator!=(U8 const& other) const { return val_ != other.val_; }

 protected:
  std::optional<uint8_t> val_;
  static constexpr std::string_view typename_ = std::string_view("u8", 2);
};

class U16 : public UnsignedInteger {
 public:
  U16(uint16_t val) : UnsignedInteger(Type_::U16), val_(val){};

  static std::string_view TypeName() { return typename_; };

  bool IsU16() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<uint16_t> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<U16> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;
  friend std::ostream& operator<<(std::ostream& os, const U16& c) {
    c.print(os);
    return os;
  }

  bool operator==(U16 const& other) const { return val_ == other.val_; }
  bool operator!=(U16 const& other) const { return val_ != other.val_; }

 protected:
  std::optional<uint16_t> val_;
  static constexpr std::string_view typename_ = std::string_view("u16", 3);
};

class U32 : public UnsignedInteger {
 public:
  U32(uint32_t val) : UnsignedInteger(Type_::U32), val_(val){};

  static std::string_view TypeName() { return typename_; };

  bool IsU32() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<uint32_t> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<U32> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;
  friend std::ostream& operator<<(std::ostream& os, const U32& c) {
    c.print(os);
    return os;
  }

  bool operator==(U32 const& other) const { return val_ == other.val_; }
  bool operator!=(U32 const& other) const { return val_ != other.val_; }

 protected:
  std::optional<uint32_t> val_;
  static constexpr std::string_view typename_ = std::string_view("u32", 3);
};

class U64 : public UnsignedInteger {
 public:
  U64(uint64_t val) : UnsignedInteger(Type_::U64), val_(val){};

  static std::string_view TypeName() { return typename_; };

  bool IsU64() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<uint64_t> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<U64> FromLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;
  friend std::ostream& operator<<(std::ostream& os, const U64& c) {
    c.print(os);
    return os;
  }

  // TODO do these comparisons fail if both val_ are empty? (is that ok?)
  bool operator==(U64 const& other) const { return val_ == other.val_; }
  bool operator!=(U64 const& other) const { return val_ != other.val_; }

 protected:
  std::optional<uint64_t> val_;
  static constexpr std::string_view typename_ = std::string_view("u64", 3);
};

class Str : public Primitive {
 public:
  Str(std::string val) : Primitive(Type_::STR), val_(val){};

  static std::string_view TypeName() { return typename_; };

  bool IsString() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<std::string> Value() const { return val_; }

  static bool LiteralHasSuffix(std::string_view literal);
  static std::unique_ptr<Str> FromStringLiteral(std::string_view literal);
  static std::unique_ptr<Str> FromRawStringLiteral(std::string_view literal);

  virtual void print(std::ostream& os) const override;
  friend std::ostream& operator<<(std::ostream& os, const Str& c) {
    c.print(os);
    return os;
  }

  bool operator==(Str const& other) const {
    return val_ && other.val_ && val_.value().compare(other.val_.value()) == 0;
  }
  bool operator!=(Str const& other) const {
    return !val_ || other.val_ || val_.value().compare(other.val_.value());
  }

 protected:
  std::optional<std::string> val_;
  static constexpr std::string_view typename_ = std::string_view("str", 3);
};

// ----------------------------------------------------------------------------
// Parameterized
// ----------------------------------------------------------------------------

class Parameterized : public Type {
 public:
 protected:
  Parameterized(Type_ t) : Type(t) {}
};

class Array : public Parameterized {
 public:
  Array(std::unique_ptr<Type> contained_type, uint64_t count)
      : Parameterized(Type_::ARRAY),
        count_(count),
        contained_type_(std::move(contained_type)) {}

  static std::string_view TypeName() { return typename_; };

  std::unique_ptr<Type> const& ContainedType() { return contained_type_; }
  void EmplaceBack(std::unique_ptr<Type> val) {
    contained_values_.emplace_back(std::move(val));
  }
  std::unique_ptr<Type> const& Get(uint64_t index) {
    return contained_values_[index];
  }

  virtual bool IsArray() const { return true; }

 protected:
  std::unique_ptr<Type> contained_type_;  // carries no value.
  uint64_t count_;
  std::vector<std::unique_ptr<Type> > contained_values_;
  static constexpr std::string_view typename_ = std::string_view("array", 5);
};

class Vector : public Parameterized {
 public:
  Vector() : Parameterized(Type_::VECTOR) {}

  static std::string_view TypeName() { return typename_; };

  std::unique_ptr<Type> const& ContainedType() { return containedType_; }

  virtual bool IsVector() const { return true; }

 protected:
  std::unique_ptr<Type> containedType_;
  static constexpr std::string_view typename_ = std::string_view("vector", 6);
};

class Struct : public Type {
 public:
  Struct() : Type(Type_::STRUCT) {}

  static std::string_view TypeName() { return typename_; };

  virtual bool IsStruct() const { return true; }

 protected:
  static constexpr std::string_view typename_ = std::string_view("struct", 6);
};

class Message : public Type {
 public:
  Message() : Type(Type_::MESSAGE) {}

  static std::string_view TypeName() { return typename_; };

  virtual bool IsMessage() const { return true; }

 protected:
  static constexpr std::string_view typename_ = std::string_view("message", 7);
};

class Enum : public Type {
 public:
  Enum() : Type(Type_::ENUM) {}

  static std::string_view TypeName() { return typename_; };

  virtual bool IsEnum() const { return true; }

 protected:
  static constexpr std::string_view typename_ = std::string_view("enum", 4);
};

class Variant : public Type {
 public:
  Variant() : Type(Type_::VARIANT) {}

  static std::string_view TypeName() { return typename_; };

  virtual bool IsVariant() const { return true; }

 protected:
  static constexpr std::string_view typename_ = std::string_view("variant", 7);
};

}  // namespace td