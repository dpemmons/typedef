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
  static ScalarValue CreateCHAR(char val) {
    ScalarValue s(Type::CreateCHAR());
    s.val_.char_ = val;
    return s;
  }
  // TODO: figure out how to actually handle UTF-8.
  static ScalarValue CreateCHAR32(char32_t val) {
    ScalarValue s(Type::CreateC32());
    s.val_.c32_ = val;
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
  Type type_;
  union Val {
    bool bool_;
    char char_;
    char32_t c32_;
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