#pragma once

#include <cstdint>
#include <optional>

#include "scalar.h"

namespace td {
namespace types {

class Integer : public Scalar {
 public:
  bool IsInteger() const override { return true; }

 private:
};

class SignedInteger : public Integer {
 public:
  bool IsSignedInteger() const override { return true; }

 private:
};

class I8 : public SignedInteger {
 public:
  bool IsI8() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<int8_t> Value() const { return val_; }

 private:
  std::optional<int8_t> val_;
};

class I16 : public SignedInteger {
 public:
  bool IsI16() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<int16_t> Value() const { return val_; }

 private:
  std::optional<int16_t> val_;
};

class I32 : public SignedInteger {
 public:
  bool IsI32() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<int32_t> Value() const { return val_; }

 private:
  std::optional<int32_t> val_;
};

class I64 : public SignedInteger {
 public:
  bool IsI64() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<int64_t> Value() const { return val_; }

 private:
  std::optional<int64_t> val_;
};

class UnsignedInteger : public Integer {
 public:
  bool IsUnsignedInteger() const override { return true; }

 private:
};

class U8 : public SignedInteger {
 public:
  bool IsU8() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<uint8_t> Value() const { return val_; }

 private:
  std::optional<uint8_t> val_;
};

class U16 : public SignedInteger {
 public:
  bool IsU16() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<uint16_t> Value() const { return val_; }

 private:
  std::optional<uint16_t> val_;
};

class U32 : public SignedInteger {
 public:
  bool IsU32() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<uint32_t> Value() const { return val_; }

 private:
  std::optional<uint32_t> val_;
};

class U64 : public SignedInteger {
 public:
  bool IsU64() const override { return true; }
  bool HasValue() const override { return val_.has_value(); }
  std::optional<uint64_t> Value() const { return val_; }

 private:
  std::optional<uint64_t> val_;
};

}  // namespace types
}  // namespace td