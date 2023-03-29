#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <utility>
#include <vector>

#include "types/type.h"

namespace Catch {
template <>
struct StringMaker<std::unique_ptr<td::types::Char>> {
  static std::string convert(std::unique_ptr<td::types::Char> const& v) {
    return v->ToString();
  }
};
}  // namespace Catch

namespace td {
namespace types {

TEST_CASE("Char resolves \"'c''\"", "[types][char]") {
  auto actual = Char::FromLiteral("'c'");
  REQUIRE(actual != nullptr);
  REQUIRE(actual->IsChar());
  REQUIRE(actual->HasValue());
  REQUIRE(actual->Value().has_value());
  REQUIRE(actual->Value() == 'c');
}

TEST_CASE("Several valid escaped characters", "[types][char]") {
  std::vector<std::pair<std::string, char32_t>> valid_test_cases = {
      // normal character
      {"'a'", U'a'},
      // quote escapes
      {"'\\''", U'\''},
      {"'\\\"'", U'\"'},
      // ascii escapes
      {"'\\n'", U'\n'},
      {"'\\r'", U'\r'},
      {"'\\t'", U'\t'},
      {"'\\\\'", U'\\'},
      {"'\\0'", U'\0'},
      {"'\\x41'", U'\x41'},
      {"'\\x0A'", U'\x0A'},
      // Valid unicode escapes
      {"'\\u{1F600}'", 0x0001F600},   // smiley face
      {"'\\u{01F600}'", 0x0001F600},  // smiley face
      {"'\\u{A9}'", 0x000000A9}       // copyright
  };
  for (auto p : valid_test_cases) {
    DYNAMIC_SECTION(p.first << " -> " << p.second) {
      auto actual = Char::FromLiteral(p.first);
      REQUIRE(actual != nullptr);
      REQUIRE(actual->IsChar());
      REQUIRE(actual->HasValue());
      REQUIRE(actual->Value().has_value());
      REQUIRE(actual->Value() == p.second);
    }
  }
}

TEST_CASE("Several invalid escaped characters", "[types][char]") {
  std::vector<std::string> invalid_values = {
      " ",              // empty
      "''",             // empty
      "'\\x'",          // invalid escape
      "'\\xG0'"         //
      "'\\x1'",         //
      "'\\u'",          //
      "'\\u{1F60'",     // incomplete unicode
      "\\u{01F6000}'",  // Too long unicode sequence
      "'\\z'"           // invalid escape
  };
  for (auto val : invalid_values) {
    DYNAMIC_SECTION(val) {
      auto actual = Char::FromLiteral(val);
      REQUIRE(actual == nullptr);
    }
  }
}

}  // namespace types
}  // namespace td

#if 0

TEST_CASE("Declare an ascii char value.", "[simple_values][char]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
val : char = 'c';
    )");

  REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));

  std::vector<td::ValueDefinition> actual_value_definitions =
      parsed_file->GetValueDefinitions();
  REQUIRE(actual_value_definitions.size() == 1);

  td::ValueDefinition expected(td::QualifiedIdentifier("val"),
                               td::ScalarValue::CreateCHAR('c'));
  REQUIRE_THAT(actual_value_definitions[0], EqualsValueDefinition(expected));
}

namespace {
void ValidCharsTest(std::string expression, char32_t expected_char32) {
  SECTION(expression) {
    try {
      std::string file = fmt::format(
          R"(
            typedef=alpha;
            val : char = {};
          )",
          expression);
      auto parsed_file = td::Parse(file);

      REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));

      std::vector<td::ValueDefinition> actual_value_definitions =
          parsed_file->GetValueDefinitions();
      REQUIRE(actual_value_definitions.size() == 1);

      td::ValueDefinition expected(
          td::QualifiedIdentifier("val"),
          td::ScalarValue::CreateCHAR(expected_char32));
      REQUIRE_THAT(actual_value_definitions[0],
                   EqualsValueDefinition(expected));
    } catch (const std::exception& e) {
      FAIL(e.what());
    }
  }
}
}  // namespace

TEST_CASE("Several valid escaped characters", "[simple_values][char]") {
  std::vector<std::pair<std::string, char32_t>> valid_test_cases = {
      // normal character
      {"'a'", U'a'},
      // quote escapes
      {"'\\''", U'\''},
      {"'\\\"'", U'\"'},
      // ascii escapes
      {"'\\n'", U'\n'},
      {"'\\r'", U'\r'},
      {"'\\t'", U'\t'},
      {"'\\\\'", U'\\'},
      {"'\\0'", U'\0'},
      {"'\\x41'", U'\x41'},
      {"'\\x0A'", U'\x0A'},
      // Valid unicode escapes
      {"'\\u{1F600}'", 0x0001F600},   // smiley face
      {"'\\u{01F600}'", 0x0001F600},  // smiley face
      {"'\\u{A9}'", 0x000000A9}       // copyright
  };
  for (auto p : valid_test_cases) {
    ValidCharsTest(p.first, p.second);
  }
}

namespace {
void InvalidCharsTest(std::string expression,
                      td::ParserErrorInfo expected_error) {
  SECTION(expression) {
    try {
      std::string file = fmt::format(
          R"(
            typedef=alpha;
            val : char = {};
          )",
          expression);
      auto parsed_file = td::Parse(file);

      std::vector<td::ParserErrorInfo> expected_errors;
      expected_errors.push_back(expected_error);
      REQUIRE_THAT(parsed_file->GetErrors(), Equals(expected_errors));

      REQUIRE(parsed_file->GetValueDefinitions().empty());
    } catch (const std::exception& e) {
      FAIL(e.what());
    }
  }
}
}  // namespace

#endif
