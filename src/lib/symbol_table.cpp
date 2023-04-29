#include "symbol_table.h"

#include <charconv>
#include <codecvt>
#include <cstdint>
#include <ios>
#include <locale>
#include <sstream>
#include <variant>

#define FMT_HEADER_ONLY
#include "fmt/core.h"
#include "fmt/ostream.h"

namespace td {

using namespace std;

// helper type for the visitor #4
template <class... Ts>
struct overloaded : Ts... {
  using Ts::operator()...;
};

// explicit deduction guide (not needed as of C++20)
template <class... Ts>
overloaded(Ts...) -> overloaded<Ts...>;

void PrintType(ostream& os, const SymbolTable::Value& v) {
  if (holds_alternative<optional<bool>>(v)) {
    fmt::print(os, "bool");
  } else if (holds_alternative<optional<char32_t>>(v)) {
    fmt::print(os, "char");
  } else if (holds_alternative<optional<string>>(v)) {
    fmt::print(os, "str");
  } else if (holds_alternative<optional<float>>(v)) {
    fmt::print(os, "f32");
  } else if (holds_alternative<optional<double>>(v)) {
    fmt::print(os, "f64");
  } else if (holds_alternative<optional<int8_t>>(v)) {
    fmt::print(os, "i8");
  } else if (holds_alternative<optional<int16_t>>(v)) {
    fmt::print(os, "i16");
  } else if (holds_alternative<optional<int32_t>>(v)) {
    fmt::print(os, "i32");
  } else if (holds_alternative<optional<int64_t>>(v)) {
    fmt::print(os, "i64");
  } else if (holds_alternative<optional<uint8_t>>(v)) {
    fmt::print(os, "u8");
  } else if (holds_alternative<optional<uint16_t>>(v)) {
    fmt::print(os, "u16");
  } else if (holds_alternative<optional<uint32_t>>(v)) {
    fmt::print(os, "u32");
  } else if (holds_alternative<optional<uint64_t>>(v)) {
    fmt::print(os, "u64");
  } else if (holds_alternative<shared_ptr<Struct>>(v)) {
    fmt::print(os, "struct");
  } else if (holds_alternative<shared_ptr<Variant>>(v)) {
    fmt::print(os, "variant");
  } else if (holds_alternative<shared_ptr<Vector>>(v)) {
    fmt::print(os, "vector");
  } else if (holds_alternative<shared_ptr<Map>>(v)) {
    fmt::print(os, "map");
  } else {
    abort();
  }
}

void MaybePrintValue(ostream& os, const SymbolTable::Value& v) {
  if (holds_alternative<optional<bool>>(v)) {
    fmt::print(os, "{}", *get<optional<bool>>(v));
  } else if (holds_alternative<optional<char32_t>>(v)) {
    auto maybe_val = get<optional<char32_t>>(v);
    wstring_convert<codecvt_utf8<char32_t>, char32_t> converter;
    fmt::print(os, "{}", converter.to_bytes(*maybe_val));
  } else if (holds_alternative<optional<string>>(v)) {
    fmt::print(os, "\"{}\"");
  } else if (holds_alternative<optional<float>>(v)) {
    fmt::print(os, "{}", *get<optional<float>>(v));
  } else if (holds_alternative<optional<double>>(v)) {
    fmt::print(os, "{}", *get<optional<double>>(v));
  } else if (holds_alternative<optional<int8_t>>(v)) {
    fmt::print(os, "{}", *get<optional<int8_t>>(v));
  } else if (holds_alternative<optional<int16_t>>(v)) {
    fmt::print(os, "{}", *get<optional<int16_t>>(v));
  } else if (holds_alternative<optional<int32_t>>(v)) {
    fmt::print(os, "{}", *get<optional<int32_t>>(v));
  } else if (holds_alternative<optional<int64_t>>(v)) {
    fmt::print(os, "{}", *get<optional<int64_t>>(v));
  } else if (holds_alternative<optional<uint8_t>>(v)) {
    fmt::print(os, "{}", *get<optional<uint8_t>>(v));
  } else if (holds_alternative<optional<uint16_t>>(v)) {
    fmt::print(os, "{}", *get<optional<uint16_t>>(v));
  } else if (holds_alternative<optional<uint32_t>>(v)) {
    fmt::print(os, "{}", *get<optional<uint32_t>>(v));
  } else if (holds_alternative<optional<uint64_t>>(v)) {
    fmt::print(os, "{}", *get<optional<uint64_t>>(v));
  } else if (holds_alternative<shared_ptr<Struct>>(v)) {
    auto maybe_val = get<shared_ptr<Struct>>(v);
    fmt::print(os, "{}", fmt::streamed(*maybe_val));
  } else if (holds_alternative<shared_ptr<Variant>>(v)) {
    auto maybe_val = get<shared_ptr<Variant>>(v);
    fmt::print(os, "{}", fmt::streamed(*maybe_val));
  } else if (holds_alternative<shared_ptr<Vector>>(v)) {
    auto maybe_val = get<shared_ptr<Vector>>(v);
    fmt::print(os, "{}", fmt::streamed(*maybe_val));
  } else if (holds_alternative<shared_ptr<Map>>(v)) {
    auto maybe_val = get<shared_ptr<Map>>(v);
    fmt::print(os, "{}", fmt::streamed(*maybe_val));
  } else {
    abort();
  }
}

void PrintField(ostream& os, const SymbolTable::Symbol& s) {
  fmt::print(os, "{} : ", s.first);
  PrintType(os, s.second);
  fmt::print(os, " = ");
  MaybePrintValue(os, s.second);
  fmt::print(os, "\n");
}

ostream& operator<<(ostream& os, const Struct& s) {
  os << s.table;
  return os;
}

ostream& operator<<(ostream& os, const Variant& s) {
  for (auto kv : s.table.table_) {
    PrintField(os, kv);
  }
  return os;
}

ostream& operator<<(ostream& os, const Vector& s) {
  PrintType(os, s.type);
  return os;
}

ostream& operator<<(ostream& os, const Map& s) {
  fmt::print(os, "<");
  PrintType(os, s.key_type);
  fmt::print(os, ", ");
  PrintType(os, s.value_type);
  fmt::print(os, ">");
  return os;
}

ostream& operator<<(ostream& os, const SymbolTable& value) {
  for (auto kv : value.table_) {
    PrintField(os, kv);
  }
  return os;
}

}  // namespace td
