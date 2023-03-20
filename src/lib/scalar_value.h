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

#include <string>

namespace td {

class ScalarValue {
 public:

  ScalarValue(ScalarType type) : type_(type) {}

  static ScalarValue CreateBOOL(bool val) {
    ScalarValue s(ScalarType::BOOL);
    s.val_.bool_ = val;
    return s;
  }
  static ScalarValue CreateCHAR(char val) {
    ScalarValue s(ScalarType::CHAR);
    s.val_.char_ = val;
    return s;
  }
  static ScalarValue CreateF32(float val) {
    ScalarValue s(ScalarType::F32);
    s.val_.f32_ = val;
    return s;
  }
  static ScalarValue CreateF64(double val) {
    ScalarValue s(ScalarType::F64);
    s.val_.f64_ = val;
    return s;
  }
  static ScalarValue CreateI8(int8_t val) {
    ScalarValue s(ScalarType::I8);
    s.val_.i8_ = val;
    return s;
  }
  static ScalarValue CreateI16(int16_t val) {
    ScalarValue s(ScalarType::I16);
    s.val_.i16_ = val;
    return s;
  }
  static ScalarValue CreateI32(int32_t val) {
    ScalarValue s(ScalarType::I32);
    s.val_.i32_ = val;
    return s;
  }
  static ScalarValue CreateI64(int64_t val) {
    ScalarValue s(ScalarType::I64);
    s.val_.i64_ = val;
    return s;
  }
  static ScalarValue CreateI128(__int128_t val) {
    ScalarValue s(ScalarType::I128);
    s.val_.i128_ = val;
    return s;
  }
  static ScalarValue CreateU8(uint8_t val) {
    ScalarValue s(ScalarType::U8);
    s.val_.u8_ = val;
    return s;
  }
  static ScalarValue CreateU16(uint16_t val) {
    ScalarValue s(ScalarType::U16);
    s.val_.u16_ = val;
    return s;
  }
  static ScalarValue CreateU32(uint32_t val) {
    ScalarValue s(ScalarType::U32);
    s.val_.u32_ = val;
    return s;
  }
  static ScalarValue CreateU64(uint64_t val) {
    ScalarValue s(ScalarType::U64);
    s.val_.u64_ = val;
    return s;
  }
  static ScalarValue CreateU128(__uint128_t val) {
    ScalarValue s(ScalarType::U128);
    s.val_.u128_ = val;
    return s;
  }

  ScalarType GetType() const { return type_; }
  bool IsInteger() const {
    switch (type_) {
      case ScalarType::I8:
      case ScalarType::I16:
      case ScalarType::I32:
      case ScalarType::I64:
      case ScalarType::I128:
      case ScalarType::U8:
      case ScalarType::U16:
      case ScalarType::U32:
      case ScalarType::U64:
      case ScalarType::U128:
        return true;
      default:
        return false;
    }
  }
  bool IsFloat() const {
    switch (type_) {
      case ScalarType::F32:
      case ScalarType::F64:
        return true;
      default:
        return false;
    }
  }

  bool BoolValue() const {}
  char CharValue() const {}
  float FloatValue() const {}
  double DoubleValue() const {}
  int8_t Int8Value() const {}
  int16_t Int16Value() const {}
  int32_t Int32Value() const {}
  int64_t Int64Value() const {}
  __int128_t Int128Value() const {}
  uint8_t Uint8Value() const {}
  uint16_t Uint16Value() const {}
  uint32_t Uint32Value() const {}
  uint64_t Uint64Value() const {}
  __uint128_t Uint128Value() const {}

 private:
  ScalarType type_;
  union Val {
    bool bool_;
    char char_;
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