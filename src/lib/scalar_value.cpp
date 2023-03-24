#include "scalar_value.h"

#include <codecvt>
#include <locale>
#include <sstream>

#define FMT_HEADER_ONLY
#include "fmt/core.h"
#include "fmt/ostream.h"

namespace td {

std::ostream &operator<<(std::ostream &os, const ScalarValue &value) {
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

  return os;
}

std::string ScalarValue::ToString() const {
  std::stringstream ss;
  ss << (*this);
  return ss.str();
}

}  // namespace td