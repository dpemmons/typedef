#include "symbol_table.h"

#include <charconv>
#include <codecvt>
#include <ios>
#include <variant>

#define FMT_HEADER_ONLY
#include "fmt/core.h"
#include "fmt/ostream.h"

namespace td {

// helper type for the visitor #4
template <class... Ts>
struct overloaded : Ts... {
  using Ts::operator()...;
};

// explicit deduction guide (not needed as of C++20)
template <class... Ts>
overloaded(Ts...) -> overloaded<Ts...>;

std::ostream& operator<<(std::ostream& os, const SymbolTable& value) {
  for (auto kv : value.table_) {
    std::visit(
        overloaded{
            [&os, &kv](std::monostate&) { fmt::print(os, "{}", kv.first); },
            [&os, &kv](bool&) {
              fmt::print(os, "{} = {}\n", kv.first, std::get<bool>(kv.second));
            },
            [&os, &kv](char32_t&) {
              // Convert to UTF-8.
              std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t>
                  converter;
              fmt::print(os, "{} = {}\n", kv.first,
                         converter.to_bytes(std::get<char32_t>(kv.second)));
            },
            [&os, &kv](std::string&) {
              fmt::print(os, "{} = {}\n", kv.first,
                         std::get<std::string>(kv.second));
            },
            [&os, &kv](float&) {
              fmt::print(os, "{} = {}\n", kv.first, std::get<float>(kv.second));
            },
            [&os, &kv](double&) {
              fmt::print(os, "{} = {}\n", kv.first,
                         std::get<double>(kv.second));
            },
            [&os, &kv](int8_t&) {
              fmt::print(os, "{} = {}\n", kv.first,
                         std::get<int8_t>(kv.second));
            },
            [&os, &kv](int16_t&) {
              fmt::print(os, "{} = {}\n", kv.first,
                         std::get<int16_t>(kv.second));
            },
            [&os, &kv](int32_t&) {
              fmt::print(os, "{} = {}\n", kv.first,
                         std::get<int32_t>(kv.second));
            },
            [&os, &kv](int64_t&) {
              fmt::print(os, "{} = {}\n", kv.first,
                         std::get<int64_t>(kv.second));
            },
            [&os, &kv](uint8_t&) {
              fmt::print(os, "{} = {}\n", kv.first,
                         std::get<uint8_t>(kv.second));
            },
            [&os, &kv](uint16_t&) {
              fmt::print(os, "{} = {}\n", kv.first,
                         std::get<uint16_t>(kv.second));
            },
            [&os, &kv](uint32_t&) {
              fmt::print(os, "{} = {}\n", kv.first,
                         std::get<uint32_t>(kv.second));
            },
            [&os, &kv](uint64_t&) {
              fmt::print(os, "{} = {}\n", kv.first,
                         std::get<uint64_t>(kv.second));
            }},
        kv.second);
  }
  return os;
}

}  // namespace td
