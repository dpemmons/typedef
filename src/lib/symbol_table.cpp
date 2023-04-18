#include "symbol_table.h"

#include <charconv>
#include <codecvt>
#include <ios>
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

void PrintField(ostream& os, const SymbolTable::Field& f) {
  auto kv = f;
  visit(overloaded{
            [&os, &kv](monostate&) { fmt::print(os, "{}", kv.first); },
            [&os, &kv](optional<bool>&) {
              auto maybe_val = get<optional<bool>>(kv.second);
              if (maybe_val) {
                fmt::print(os, "{} : bool = {}\n", kv.first, *maybe_val);
              } else {
                fmt::print(os, "{} : bool;\n", kv.first);
              }
            },
            [&os, &kv](optional<char32_t>&) {
              auto maybe_val = get<optional<char32_t>>(kv.second);

              if (maybe_val) {
                // Convert to UTF-8.
                wstring_convert<codecvt_utf8<char32_t>, char32_t> converter;
                fmt::print(os, "{} : char = {}\n", kv.first,
                           converter.to_bytes(*maybe_val));
              } else {
                fmt::print(os, "{} : char;\n", kv.first);
              }
            },
            [&os, &kv](optional<string>&) {
              auto maybe_val = get<optional<string>>(kv.second);
              if (maybe_val) {
                fmt::print(os, "{} : str = {}\n", kv.first, *maybe_val);
              } else {
                fmt::print(os, "{} : str;\n", kv.first);
              }
            },
            [&os, &kv](optional<float>&) {
              auto maybe_val = get<optional<float>>(kv.second);
              if (maybe_val) {
                fmt::print(os, "{} : f32 = {}\n", kv.first, *maybe_val);
              } else {
                fmt::print(os, "{} : f32;\n", kv.first);
              }
            },
            [&os, &kv](optional<double>&) {
              auto maybe_val = get<optional<double>>(kv.second);
              if (maybe_val) {
                fmt::print(os, "{} : f64 = {}\n", kv.first, *maybe_val);
              } else {
                fmt::print(os, "{} : f64;\n", kv.first);
              }
            },
            [&os, &kv](optional<int8_t>&) {
              auto maybe_val = get<optional<int8_t>>(kv.second);
              if (maybe_val) {
                fmt::print(os, "{} : i8 = {}\n", kv.first, *maybe_val);
              } else {
                fmt::print(os, "{} : i8;\n", kv.first);
              }
            },
            [&os, &kv](optional<int16_t>&) {
              auto maybe_val = get<optional<int16_t>>(kv.second);
              if (maybe_val) {
                fmt::print(os, "{} : i16 = {}\n", kv.first, *maybe_val);
              } else {
                fmt::print(os, "{} : i16;\n", kv.first);
              }
            },
            [&os, &kv](optional<int32_t>&) {
              auto maybe_val = get<optional<int32_t>>(kv.second);
              if (maybe_val) {
                fmt::print(os, "{} : i32 = {}\n", kv.first, *maybe_val);
              } else {
                fmt::print(os, "{} : i32;\n", kv.first);
              }
            },
            [&os, &kv](optional<int64_t>&) {
              auto maybe_val = get<optional<int64_t>>(kv.second);
              if (maybe_val) {
                fmt::print(os, "{} : i64 = {}\n", kv.first, *maybe_val);
              } else {
                fmt::print(os, "{} : i64;\n", kv.first);
              }
            },
            [&os, &kv](optional<uint8_t>&) {
              auto maybe_val = get<optional<uint8_t>>(kv.second);
              if (maybe_val) {
                fmt::print(os, "{} : u8 = {}\n", kv.first, *maybe_val);
              } else {
                fmt::print(os, "{} : u8;\n", kv.first);
              }
            },
            [&os, &kv](optional<uint16_t>&) {
              auto maybe_val = get<optional<uint16_t>>(kv.second);
              if (maybe_val) {
                fmt::print(os, "{} : u16 = {}\n", kv.first, *maybe_val);
              } else {
                fmt::print(os, "{} : u16;\n", kv.first);
              }
            },
            [&os, &kv](optional<uint32_t>&) {
              auto maybe_val = get<optional<uint32_t>>(kv.second);
              if (maybe_val) {
                fmt::print(os, "{} : u32 = {}\n", kv.first, *maybe_val);
              } else {
                fmt::print(os, "{} : u32;\n", kv.first);
              }
            },
            [&os, &kv](optional<uint64_t>&) {
              auto maybe_val = get<optional<uint64_t>>(kv.second);
              if (maybe_val) {
                fmt::print(os, "{} : u64 = {}\n", kv.first, *maybe_val);
              } else {
                fmt::print(os, "{} : u64;\n", kv.first);
              }
            },
            [&os, &kv](shared_ptr<SymbolTable::Struct>&) {
              auto ptr = get<shared_ptr<SymbolTable::Struct>>(kv.second);
              if (ptr) {
                std::stringstream ss;
                ss << *ptr;
                fmt::print(os, "{} : struct {{ {} }}", kv.first, ss.str());
              }
            }},
        kv.second);
}

ostream& operator<<(ostream& os, const SymbolTable::Struct& s) {
  for (auto kv : s.table) {
    PrintField(os, kv);
  }
  return os;
}

ostream& operator<<(ostream& os, const SymbolTable& value) {
  for (auto kv : value.table_) {
    PrintField(os, kv);
  }
  return os;
}

}  // namespace td
