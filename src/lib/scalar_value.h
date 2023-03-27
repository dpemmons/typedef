#pragma once

#include <charconv>
#include <cstring>
#include <limits>
#include <optional>
#include <string>
#include <string_view>

#include "type.h"

namespace td {

class ScalarValue {
 public:
  ScalarValue(Type type, bool suffixed) : type_(type), suffixed_(suffixed) {}

  static ScalarValue CreateBOOL(bool val, bool suffixed = true);
  static ScalarValue CreateCHAR(char32_t val, bool suffixed = true);
  static ScalarValue CreateF32(float val, bool suffixed = true);
  static ScalarValue CreateF64(double val, bool suffixed = true);
  // Integers
  static ScalarValue CreateI8(int8_t val, bool suffixed = true);
  static ScalarValue CreateI16(int16_t val, bool suffixed = true);
  static ScalarValue CreateI32(int32_t val, bool suffixed = true);
  static ScalarValue CreateI64(int64_t val, bool suffixed = true);
  static ScalarValue CreateI128(__int128_t val, bool suffixed = true);
  static ScalarValue CreateU8(uint8_t val, bool suffixed = true);
  static ScalarValue CreateU16(uint16_t val, bool suffixed = true);
  static ScalarValue CreateU32(uint32_t val, bool suffixed = true);
  static ScalarValue CreateU64(uint64_t val, bool suffixed = true);
  static ScalarValue CreateU128(__uint128_t val, bool suffixed = true);

  template <typename T>
  static ScalarValue CreateInt(T val, bool suffixed = true);
  template <typename T>
  static std::optional<ScalarValue> MaybeCreateIntFromString(
      std::string_view digits, int base, bool suffixed = true) {
    T val = 0;
    // TODO: Do it faster?
    // https://kholdstare.github.io/technical/2020/05/26/faster-integer-parsing.html
    auto result = std::from_chars(digits.begin(), digits.end(), val, base);
    if (result.ec == std::errc()) {
      return ScalarValue::CreateInt(val, suffixed);
    } else {
      return std::nullopt;
    }
  }
  static std::optional<ScalarValue> MaybeCreateIntFromUnknownString(
      std::string_view digits, int base);

  Type GetType() const;
  bool IsSuffixed() const;

  bool BoolValue() const;
  char32_t CharValue() const;
  float FloatValue() const;
  double DoubleValue() const;
  int8_t Int8Value() const;
  int16_t Int16Value() const;
  int32_t Int32Value() const;
  int64_t Int64Value() const;
  __int128_t Int128Value() const;
  uint8_t Uint8Value() const;
  uint16_t Uint16Value() const;
  uint32_t Uint32Value() const;
  uint64_t Uint64Value() const;
  __uint128_t Uint128Value() const;

  static const int8_t I8MinValue = std::numeric_limits<int8_t>::min();
  static const int8_t I8MaxValue = std::numeric_limits<int8_t>::max();
  static const int16_t I16MinValue = std::numeric_limits<int16_t>::min();
  static const int16_t I16MaxValue = std::numeric_limits<int16_t>::max();
  static const int32_t I32MinValue = std::numeric_limits<int32_t>::min();
  static const int32_t I32MaxValue = std::numeric_limits<int32_t>::max();
  static const int64_t I64MinValue = std::numeric_limits<int64_t>::min();
  static const int64_t I64MaxValue = std::numeric_limits<int64_t>::max();
  static const __int128_t I128MinValue = std::numeric_limits<__int128_t>::min();
  static const __int128_t I128MaxValue = std::numeric_limits<__int128_t>::max();
  static const uint8_t U8MinValue = std::numeric_limits<uint8_t>::min();
  static const uint8_t U8MaxValue = std::numeric_limits<uint8_t>::max();
  static const uint16_t U16MinValue = std::numeric_limits<uint16_t>::min();
  static const uint16_t U16MaxValue = std::numeric_limits<uint16_t>::max();
  static const uint32_t U32MinValue = std::numeric_limits<uint32_t>::min();
  static const uint32_t U32MaxValue = std::numeric_limits<uint32_t>::max();
  static const uint64_t U64MinValue = std::numeric_limits<uint64_t>::min();
  static const uint64_t U64MaxValue = std::numeric_limits<uint64_t>::max();
  static const __uint128_t U128MinValue = std::numeric_limits<__uint128_t>::min();
  static const __uint128_t U128MaxValue = std::numeric_limits<__uint128_t>::max();

static const ScalarValue I8Min;
static const ScalarValue I8Max;
static const ScalarValue I16Min;
static const ScalarValue I16Max;
static const ScalarValue I32Min;
static const ScalarValue I32Max;
static const ScalarValue I64Min;
static const ScalarValue I64Max;
static const ScalarValue I128Min;
static const ScalarValue I128Max;
static const ScalarValue U8Min;
static const ScalarValue U8Max;
static const ScalarValue U16Min;
static const ScalarValue U16Max;
static const ScalarValue U32Min;
static const ScalarValue U32Max;
static const ScalarValue U64Min;
static const ScalarValue U64Max;
static const ScalarValue U128Min;
static const ScalarValue U128Max;

  friend bool operator==(const ScalarValue& c1, const ScalarValue& c2);
  friend bool operator!=(const ScalarValue& c1, const ScalarValue& c2);
  bool eq(const ScalarValue& other) const;

  friend std::ostream& operator<<(std::ostream& os, const ScalarValue& value);
  std::string ToString() const;

 private:
  bool suffixed_;
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