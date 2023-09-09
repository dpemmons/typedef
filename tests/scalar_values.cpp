#include <antlr4/antlr4-runtime.h>

#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <memory>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
#define FMT_HEADER_ONLY
#include <fmt/core.h>
#include <fmt/ostream.h>

#include "libtypedef/parser/grammar/TypedefLexer.h"
#include "libtypedef/parser/grammar/TypedefParser.h"
#include "libtypedef/parser/typedef_parser.h"

using Catch::Matchers::Equals;
using namespace std;
using namespace td;

#if 0
namespace {
const std::vector<td::ParserErrorInfo> empty_errors;

struct EqualsSymbolMatcher : Catch::Matchers::MatcherGenericBase {
  EqualsSymbolMatcher(td::Symbol const& s) : s_{s} {}

  bool match(td::Symbol const& other) const {
    return s_.IdentiferEquals(other) && s_.TypeEquals(other);
  }

  std::string describe() const override {
    std::stringstream ss;
    fmt::print(ss, "Equals: ");
    ss << s_;
    return ss.str();
  }

 private:
  td::Symbol const& s_;
};

auto EqualsSymbol(const td::Symbol& s) -> EqualsSymbolMatcher {
  return EqualsSymbolMatcher{s};
}

}  // namespace

// ----------------------------------------------------------------------------
// Booleans
// ----------------------------------------------------------------------------

TEST_CASE("Declare a true boolean.", "[scalar_values][bool]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
val : bool = true;
    )");
  REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));

  REQUIRE(parsed_file->GetSymbols() == 1);
  auto actual_symbol = parsed_file->GetSymbol(0);
  td::Symbol expected(make_unique<td::Identifier>("val"),
                      make_unique<td::Bool>(true));
  REQUIRE_THAT(*actual_symbol, EqualsSymbol(expected));
}

TEST_CASE("Declare a false boolean.", "[scalar_values][bool]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
val : bool = false;
    )");
  REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));

  REQUIRE(parsed_file->GetSymbols() == 1);
  auto actual_symbol = parsed_file->GetSymbol(0);
  td::Symbol expected(make_unique<td::Identifier>("val"),
                      make_unique<td::Bool>(false));
  REQUIRE_THAT(*actual_symbol, EqualsSymbol(expected));
}

TEST_CASE("Declare a char.", "[scalar_values][char]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
val : char = 'a';
    )");
  REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));

  REQUIRE(parsed_file->GetSymbols() == 1);
  auto actual_symbol = parsed_file->GetSymbol(0);
  td::Symbol expected(make_unique<td::Identifier>("val"),
                      make_unique<td::Char>(U'a'));
  REQUIRE_THAT(*actual_symbol, EqualsSymbol(expected));
}

// ----------------------------------------------------------------------------
// f32
// ----------------------------------------------------------------------------

TEST_CASE("Declare a simple f32.", "[scalar_values][f32]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
val : f32 = 3.14;
    )");
  REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));

  REQUIRE(parsed_file->GetSymbols() == 1);
  auto actual_symbol = parsed_file->GetSymbol(0);
  td::Symbol expected(make_unique<td::Identifier>("val"),
                      make_unique<td::F32>(3.14));
  REQUIRE_THAT(*actual_symbol, EqualsSymbol(expected));
}

// ----------------------------------------------------------------------------
// f64
// ----------------------------------------------------------------------------

TEST_CASE("Declare a simple f64.", "[scalar_values][f64]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
val : f64 = 3.14;
    )");
  REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));

  REQUIRE(parsed_file->GetSymbols() == 1);
  auto actual_symbol = parsed_file->GetSymbol(0);
  td::Symbol expected(make_unique<td::Identifier>("val"),
                      make_unique<td::F64>(3.14));
  REQUIRE_THAT(*actual_symbol, EqualsSymbol(expected));
}

// ----------------------------------------------------------------------------
// i8
// ----------------------------------------------------------------------------

TEST_CASE("Declare a simple i8.", "[scalar_values][i8]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
val : i8 = 3;
    )");
  REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));

  REQUIRE(parsed_file->GetSymbols() == 1);
  auto actual_symbol = parsed_file->GetSymbol(0);
  td::Symbol expected(make_unique<td::Identifier>("val"),
                      make_unique<td::I8>(3));
  REQUIRE_THAT(*actual_symbol, EqualsSymbol(expected));
}

// ----------------------------------------------------------------------------
// i16
// ----------------------------------------------------------------------------

TEST_CASE("Declare a simple i16.", "[scalar_values][i16]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
val : i16 = 3;
    )");
  REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));

  REQUIRE(parsed_file->GetSymbols() == 1);
  auto actual_symbol = parsed_file->GetSymbol(0);
  td::Symbol expected(make_unique<td::Identifier>("val"),
                      make_unique<td::I16>(3));
  REQUIRE_THAT(*actual_symbol, EqualsSymbol(expected));
}

// ----------------------------------------------------------------------------
// i32
// ----------------------------------------------------------------------------

TEST_CASE("Declare a simple i32.", "[scalar_values][i32]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
val : i32 = 3;
    )");
  REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));

  REQUIRE(parsed_file->GetSymbols() == 1);
  auto actual_symbol = parsed_file->GetSymbol(0);
  td::Symbol expected(make_unique<td::Identifier>("val"),
                      make_unique<td::I32>(3));
  REQUIRE_THAT(*actual_symbol, EqualsSymbol(expected));
}

// ----------------------------------------------------------------------------
// i64
// ----------------------------------------------------------------------------

TEST_CASE("Declare a simple i64.", "[scalar_values][i64]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
val : i64 = 3;
    )");
  REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));

  REQUIRE(parsed_file->GetSymbols() == 1);
  auto actual_symbol = parsed_file->GetSymbol(0);
  td::Symbol expected(make_unique<td::Identifier>("val"),
                      make_unique<td::I64>(3));
  REQUIRE_THAT(*actual_symbol, EqualsSymbol(expected));
}

// ----------------------------------------------------------------------------
// u8
// ----------------------------------------------------------------------------

TEST_CASE("Declare a simple u8.", "[scalar_values][u8]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
val : u8 = 3;
    )");
  REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));

  REQUIRE(parsed_file->GetSymbols() == 1);
  auto actual_symbol = parsed_file->GetSymbol(0);
  td::Symbol expected(make_unique<td::Identifier>("val"),
                      make_unique<td::U8>(3));
  REQUIRE_THAT(*actual_symbol, EqualsSymbol(expected));
}

// ----------------------------------------------------------------------------
// u16
// ----------------------------------------------------------------------------

TEST_CASE("Declare a simple u16.", "[scalar_values][u16]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
val : u16 = 3;
    )");
  REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));

  REQUIRE(parsed_file->GetSymbols() == 1);
  auto actual_symbol = parsed_file->GetSymbol(0);
  td::Symbol expected(make_unique<td::Identifier>("val"),
                      make_unique<td::U16>(3));
  REQUIRE_THAT(*actual_symbol, EqualsSymbol(expected));
}

// ----------------------------------------------------------------------------
// u32
// ----------------------------------------------------------------------------

TEST_CASE("Declare a simple u32.", "[scalar_values][u32]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
val : u32 = 3;
    )");
  REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));

  REQUIRE(parsed_file->GetSymbols() == 1);
  auto actual_symbol = parsed_file->GetSymbol(0);
  td::Symbol expected(make_unique<td::Identifier>("val"),
                      make_unique<td::U32>(3));
  REQUIRE_THAT(*actual_symbol, EqualsSymbol(expected));
}

// ----------------------------------------------------------------------------
// u64
// ----------------------------------------------------------------------------

TEST_CASE("Declare a simple u64.", "[scalar_values][u64]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
val : u64 = 3;
    )");
  REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));

  REQUIRE(parsed_file->GetSymbols() == 1);
  auto actual_symbol = parsed_file->GetSymbol(0);
  td::Symbol expected(make_unique<td::Identifier>("val"),
                      make_unique<td::U64>(3));
  REQUIRE_THAT(*actual_symbol, EqualsSymbol(expected));
}

// ----------------------------------------------------------------------------
// missing type
// ----------------------------------------------------------------------------

TEST_CASE("Missing type.", "[scalar_values]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
val = 3;
    )");
  REQUIRE(parsed_file->HasErrors());
  // TODO maybe a bit more...
}
#endif