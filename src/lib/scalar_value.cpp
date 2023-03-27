#include "scalar_value.h"

#include <codecvt>
#include <locale>
#include <sstream>

#define FMT_HEADER_ONLY
#include "fmt/core.h"
#include "fmt/ostream.h"

namespace td {

ScalarValue ScalarValue::CreateBOOL(bool val, bool suffixed) {
  ScalarValue s(Type::CreateBOOL(), suffixed);
  s.val_.bool_ = val;
  return s;
}
ScalarValue ScalarValue::CreateCHAR(char32_t val, bool suffixed) {
  ScalarValue s(Type::CreateCHAR(), suffixed);
  s.val_.char_ = val;
  return s;
}
ScalarValue ScalarValue::CreateF32(float val, bool suffixed) {
  ScalarValue s(Type::CreateF32(), suffixed);
  s.val_.f32_ = val;
  return s;
}
ScalarValue ScalarValue::CreateF64(double val, bool suffixed) {
  ScalarValue s(Type::CreateF64(), suffixed);
  s.val_.f64_ = val;
  return s;
}
ScalarValue ScalarValue::CreateI8(int8_t val, bool suffixed) {
  ScalarValue s(Type::CreateI8(), suffixed);
  s.val_.i8_ = val;
  return s;
}
ScalarValue ScalarValue::CreateI16(int16_t val, bool suffixed) {
  ScalarValue s(Type::CreateI16(), suffixed);
  s.val_.i16_ = val;
  return s;
}
ScalarValue ScalarValue::CreateI32(int32_t val, bool suffixed) {
  ScalarValue s(Type::CreateI32(), suffixed);
  s.val_.i32_ = val;
  return s;
}
ScalarValue ScalarValue::CreateI64(int64_t val, bool suffixed) {
  ScalarValue s(Type::CreateI64(), suffixed);
  s.val_.i64_ = val;
  return s;
}
ScalarValue ScalarValue::CreateI128(__int128_t val, bool suffixed) {
  ScalarValue s(Type::CreateI128(), suffixed);
  s.val_.i128_ = val;
  return s;
}
ScalarValue ScalarValue::CreateU8(uint8_t val, bool suffixed) {
  ScalarValue s(Type::CreateU8(), suffixed);
  s.val_.u8_ = val;
  return s;
}
ScalarValue ScalarValue::CreateU16(uint16_t val, bool suffixed) {
  ScalarValue s(Type::CreateU16(), suffixed);
  s.val_.u16_ = val;
  return s;
}
ScalarValue ScalarValue::CreateU32(uint32_t val, bool suffixed) {
  ScalarValue s(Type::CreateU32(), suffixed);
  s.val_.u32_ = val;
  return s;
}
ScalarValue ScalarValue::CreateU64(uint64_t val, bool suffixed) {
  ScalarValue s(Type::CreateU64(), suffixed);
  s.val_.u64_ = val;
  return s;
}
ScalarValue ScalarValue::CreateU128(__uint128_t val, bool suffixed) {
  ScalarValue s(Type::CreateU128(), suffixed);
  s.val_.u128_ = val;
  return s;
}

template <>
ScalarValue ScalarValue::CreateInt<int8_t>(int8_t val, bool suffixed) {
  return CreateI8(val, suffixed);
}
template <>
ScalarValue ScalarValue::CreateInt<int16_t>(int16_t val, bool suffixed) {
  return CreateI16(val, suffixed);
}
template <>
ScalarValue ScalarValue::CreateInt<int32_t>(int32_t val, bool suffixed) {
  return CreateI32(val, suffixed);
}
template <>
ScalarValue ScalarValue::CreateInt<int64_t>(int64_t val, bool suffixed) {
  return CreateI64(val, suffixed);
}
template <>
ScalarValue ScalarValue::CreateInt<__int128_t>(__int128_t val, bool suffixed) {
  return CreateI128(val, suffixed);
}
template <>
ScalarValue ScalarValue::CreateInt<uint8_t>(uint8_t val, bool suffixed) {
  return CreateU8(val, suffixed);
}
template <>
ScalarValue ScalarValue::CreateInt<uint16_t>(uint16_t val, bool suffixed) {
  return CreateU16(val, suffixed);
}
template <>
ScalarValue ScalarValue::CreateInt<uint32_t>(uint32_t val, bool suffixed) {
  return CreateU32(val, suffixed);
}
template <>
ScalarValue ScalarValue::CreateInt<uint64_t>(uint64_t val, bool suffixed) {
  return CreateU64(val, suffixed);
}
template <>
ScalarValue ScalarValue::CreateInt<__uint128_t>(__uint128_t val,
                                                bool suffixed) {
  return CreateU128(val, suffixed);
}

std::optional<td::ScalarValue> ScalarValue::MaybeCreateIntFromUnknownString(
    std::string_view digits, int base) {
  auto i32 =
      ScalarValue::MaybeCreateIntFromString<int32_t>(digits, base, false);
  if (i32.has_value()) {
    return i32;
  }
  auto u32 =
      ScalarValue::MaybeCreateIntFromString<uint32_t>(digits, base, false);
  if (u32.has_value()) {
    return u32;
  }

  auto i64 =
      ScalarValue::MaybeCreateIntFromString<int64_t>(digits, base, false);
  if (i64.has_value()) {
    return i64;
  }
  auto u64 =
      ScalarValue::MaybeCreateIntFromString<uint64_t>(digits, base, false);
  if (u64.has_value()) {
    return u64;
  }
  return std::nullopt;
}

Type ScalarValue::GetType() const { return type_; }
bool ScalarValue::IsSuffixed() const { return suffixed_; }

bool ScalarValue::BoolValue() const { return val_.bool_; }
char32_t ScalarValue::CharValue() const { return val_.char_; }
float ScalarValue::FloatValue() const { return val_.f32_; }
double ScalarValue::DoubleValue() const { return val_.f64_; }
int8_t ScalarValue::Int8Value() const { return val_.i8_; }
int16_t ScalarValue::Int16Value() const { return val_.i16_; }
int32_t ScalarValue::Int32Value() const { return val_.i32_; }
int64_t ScalarValue::Int64Value() const { return val_.i64_; }
__int128_t ScalarValue::Int128Value() const { return val_.i128_; }
uint8_t ScalarValue::Uint8Value() const { return val_.u8_; }
uint16_t ScalarValue::Uint16Value() const { return val_.u16_; }
uint32_t ScalarValue::Uint32Value() const { return val_.u32_; }
uint64_t ScalarValue::Uint64Value() const { return val_.u64_; }
__uint128_t ScalarValue::Uint128Value() const { return val_.u128_; }

bool operator==(const ScalarValue& c1, const ScalarValue& c2) {
  return c1.eq(c2);
}
bool operator!=(const ScalarValue& c1, const ScalarValue& c2) {
  return !c1.eq(c2);
}

bool ScalarValue::eq(const ScalarValue& other) const {
  if (suffixed_ != other.suffixed_) {
    return false;
  }
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

std::ostream& operator<<(std::ostream& os, const ScalarValue& value) {
  if (value.type_.IsUnknown()) {
    fmt::print(os, "unknown");
  } else if (value.type_.IsBOOL()) {
    if (value.BoolValue()) {
      fmt::print(os, "true");
    } else {
      fmt::print(os, "false");
    }
  } else if (value.type_.IsCHAR()) {
    std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;
    std::string myString = converter.to_bytes(value.CharValue());
    fmt::print(os, "'{}'", myString);
  } else if (value.type_.IsF32()) {
    fmt::print(os, "{}_f32", value.FloatValue());
  } else if (value.type_.IsF64()) {
    fmt::print(os, "{}_f64", value.DoubleValue());
  } else if (value.type_.IsI8()) {
    fmt::print(os, "{}_i8", value.Int8Value());
  } else if (value.type_.IsI16()) {
    fmt::print(os, "{}_i16", value.Int16Value());
  } else if (value.type_.IsI32()) {
    fmt::print(os, "{}_i32", value.Int32Value());
  } else if (value.type_.IsI64()) {
    fmt::print(os, "{}_i64", value.Int64Value());
  } else if (value.type_.IsI128()) {
    fmt::print(os, "{}_i128", value.Int128Value());
  } else if (value.type_.IsU8()) {
    fmt::print(os, "{}_u8", value.Uint8Value());
  } else if (value.type_.IsU16()) {
    fmt::print(os, "{}_u16", value.Uint16Value());
  } else if (value.type_.IsU32()) {
    fmt::print(os, "{}_u32", value.Uint32Value());
  } else if (value.type_.IsU64()) {
    fmt::print(os, "{}_u64", value.Uint64Value());
  } else if (value.type_.IsU128()) {
    fmt::print(os, "{}_u128", value.Uint128Value());
  } else {
    abort();
  }
  if (!value.IsSuffixed()) {
    fmt::print(os, "(implied)");
  }

  return os;
}

std::string ScalarValue::ToString() const {
  std::stringstream ss;
  ss << (*this);
  return ss.str();
}

}  // namespace td