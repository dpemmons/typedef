#pragma once

//   template <typename T>
//   bool nodeToInteger(antlr4::tree::TerminalNode* node, T& numVal) {
//     static_assert(std::is_integral<T>::value, "Integral required.");
//     const std::string& text = node->getText();
//     auto [ptr,
//           ec]{std::from_chars(text.data(), text.data() + text.size(),
//           numVal)};
//     if (ec != std::errc()) {
//       errors_.push_back(makeError(ec, node));
//       return false;
//     }
//     return true;
//   }

#pragma once

#include <cstring>
#include <string>

#include "type.h"

namespace td {

class ScalarValue {
 public:
  ScalarValue(Type type) : type_(type) {}

  static ScalarValue CreateBOOL(bool val) {
    ScalarValue s(Type::CreateBOOL());
    s.val_.bool_ = val;
    return s;
  }
  static ScalarValue CreateCHAR(char32_t val) {
    ScalarValue s(Type::CreateCHAR());
    s.val_.char_ = val;
    return s;
  }
  static ScalarValue CreateF32(float val) {
    ScalarValue s(Type::CreateF32());
    s.val_.f32_ = val;
    return s;
  }
  static ScalarValue CreateF64(double val) {
    ScalarValue s(Type::CreateF64());
    s.val_.f64_ = val;
    return s;
  }
  static ScalarValue CreateI8(int8_t val) {
    ScalarValue s(Type::CreateI8());
    s.val_.i8_ = val;
    return s;
  }
  static ScalarValue CreateI16(int16_t val) {
    ScalarValue s(Type::CreateI16());
    s.val_.i16_ = val;
    return s;
  }
  static ScalarValue CreateI32(int32_t val) {
    ScalarValue s(Type::CreateI32());
    s.val_.i32_ = val;
    return s;
  }
  static ScalarValue CreateI64(int64_t val) {
    ScalarValue s(Type::CreateI64());
    s.val_.i64_ = val;
    return s;
  }
  static ScalarValue CreateI128(__int128_t val) {
    ScalarValue s(Type::CreateI128());
    s.val_.i128_ = val;
    return s;
  }
  static ScalarValue CreateU8(uint8_t val) {
    ScalarValue s(Type::CreateU8());
    s.val_.u8_ = val;
    return s;
  }
  static ScalarValue CreateU16(uint16_t val) {
    ScalarValue s(Type::CreateU16());
    s.val_.u16_ = val;
    return s;
  }
  static ScalarValue CreateU32(uint32_t val) {
    ScalarValue s(Type::CreateU32());
    s.val_.u32_ = val;
    return s;
  }
  static ScalarValue CreateU64(uint64_t val) {
    ScalarValue s(Type::CreateU64());
    s.val_.u64_ = val;
    return s;
  }
  static ScalarValue CreateU128(__uint128_t val) {
    ScalarValue s(Type::CreateU128());
    s.val_.u128_ = val;
    return s;
  }

  Type GetType() const { return type_; }

  bool BoolValue() const { return val_.bool_; }
  char32_t CharValue() const { return val_.char_; }
  float FloatValue() const { return val_.f32_; }
  double DoubleValue() const { return val_.f64_; }
  int8_t Int8Value() const { return val_.i8_; }
  int16_t Int16Value() const { return val_.i16_; }
  int32_t Int32Value() const { return val_.i32_; }
  int64_t Int64Value() const { return val_.i64_; }
  __int128_t Int128Value() const { return val_.i128_; }
  uint8_t Uint8Value() const { return val_.u8_; }
  uint16_t Uint16Value() const { return val_.u16_; }
  uint32_t Uint32Value() const { return val_.u32_; }
  uint64_t Uint64Value() const { return val_.u64_; }
  __uint128_t Uint128Value() const { return val_.u128_; }

  friend bool operator==(const ScalarValue& c1, const ScalarValue& c2) {
    return c1.eq(c2);
  }
  friend bool operator!=(const ScalarValue& c1, const ScalarValue& c2) {
    return !c1.eq(c2);
  }
  bool eq(const ScalarValue& other) const {
    if (type_ == other.type_) {
      if (type_.IsBOOL()) {
        return BoolValue() == other.BoolValue();
      } else if (type_.IsCHAR()) {
        return CharValue() == other.CharValue();
      } else if (type_.IsF32()) {
        return FloatValue() == other.FloatValue();
      } else if (type_.IsF64()) {
        return DoubleValue() == other.DoubleValue();
      } else if (type_.IsI8()) {
        return Int8Value() == other.Int8Value();
      } else if (type_.IsI16()) {
        return Int16Value() == other.Int16Value();
      } else if (type_.IsI32()) {
        return Int32Value() == other.Int32Value();
      } else if (type_.IsI64()) {
        return Int64Value() == other.Int64Value();
      } else if (type_.IsI128()) {
        return Int128Value() == other.Int128Value();
      } else if (type_.IsU8()) {
        return Uint8Value() == other.Uint8Value();
      } else if (type_.IsU16()) {
        return Uint16Value() == other.Uint16Value();
      } else if (type_.IsU32()) {
        return Uint32Value() == other.Uint32Value();
      } else if (type_.IsU64()) {
        return Uint64Value() == other.Uint64Value();
      } else if (type_.IsU128()) {
        return Uint128Value() == other.Uint128Value();
      }
    }
    return false;
  }

  std::string ToString() const;
  friend std::ostream& operator<<(std::ostream& os, const ScalarValue& value);

 private:
  Type type_;
  union Val {
    bool bool_;
    char32_t char_;
    float f32_;
    double f64_;
    int8_t i8_;
    int16_t i16_;
    int32_t i32_;
    int64_t i64_;
    __int128_t i128_;
    uint8_t u8_;
    uint16_t u16_;
    uint32_t u32_;
    uint64_t u64_;
    __uint128_t u128_;
  } val_;
};

}  // namespace td