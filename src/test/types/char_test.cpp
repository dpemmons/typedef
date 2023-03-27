#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>

// ----------------------------------------------------------------------------
// Char
// ----------------------------------------------------------------------------

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

TEST_CASE("Empty char ''", "[simple_values][char]") {
  InvalidCharsTest("''", td::PEIBuilder()
                             .SetType(td::ParserErrorInfo::PARSE_ERROR)
                             .SetMessage("Parse error")
                             .SetTokenType(TypedefLexer::SEMI)
                             .SetCharOffset(55)
                             .SetLine(3)
                             .SetLineOffset(27)
                             .SetLength(1)
                             .build());
}

TEST_CASE("Missing escape '\\'", "[simple_values][char]") {
  InvalidCharsTest("'\\'", td::PEIBuilder()
                               .SetType(td::ParserErrorInfo::PARSE_ERROR)
                               .SetMessage("Parse error")
                               .SetTokenType(TypedefLexer::EOF)
                               .SetCharOffset(68)
                               .SetLine(4)
                               .SetLineOffset(10)
                               .SetLength(0)
                               .build());
}

TEST_CASE("Missing ASCII hex sequence '\\x'", "[simple_values][char]") {
  InvalidCharsTest("'\\x'", td::PEIBuilder()
                                .SetType(td::ParserErrorInfo::PARSE_ERROR)
                                .SetMessage("Parse error")
                                .SetTokenType(TypedefLexer::SEMI)
                                .SetCharOffset(57)
                                .SetLine(3)
                                .SetLineOffset(29)
                                .SetLength(1)
                                .build());
}

// TODO: come back to this after integer parsing is compelte
// TEST_CASE("Out of range ASCII hex sequence '\\xG0'", "[simple_values][char]")
// {
//   InvalidCharsTest("'\\xG0'", td::PEIBuilder()
//                                   .SetType(td::ParserErrorInfo::PARSE_ERROR)
//                                   .SetMessage("Parse error")
//                                   .SetTokenType(TypedefLexer::EOF)
//                                   .SetCharOffset(71)
//                                   .SetLine(4)
//                                   .SetLineOffset(10)
//                                   .SetLength(0)
//                                   .build());
// }

TEST_CASE("Incomplete ASCII hex sequence '\\x1'", "[simple_values][char]") {
  InvalidCharsTest("'\\x1'", td::PEIBuilder()
                                 .SetType(td::ParserErrorInfo::PARSE_ERROR)
                                 .SetMessage("Parse error")
                                 .SetTokenType(TypedefLexer::SEMI)
                                 .SetCharOffset(58)
                                 .SetLine(3)
                                 .SetLineOffset(30)
                                 .SetLength(1)
                                 .build());
}

TEST_CASE("Missing unicode sequence '\\u'", "[simple_values][char]") {
  InvalidCharsTest("'\\u'", td::PEIBuilder()
                                .SetType(td::ParserErrorInfo::PARSE_ERROR)
                                .SetMessage("Parse error")
                                .SetTokenType(TypedefLexer::SEMI)
                                .SetCharOffset(57)
                                .SetLine(3)
                                .SetLineOffset(29)
                                .SetLength(1)
                                .build());
}

TEST_CASE("Empty unicode sequence '\\u{}'", "[simple_values][char]") {
  InvalidCharsTest("'\\u{}'", td::PEIBuilder()
                                  .SetType(td::ParserErrorInfo::PARSE_ERROR)
                                  .SetMessage("Parse error")
                                  .SetTokenType(TypedefLexer::EOF)
                                  .SetCharOffset(71)
                                  .SetLine(4)
                                  .SetLineOffset(10)
                                  .SetLength(0)
                                  .build());
}

TEST_CASE("Open unicode sequence '\\u{1F60'", "[simple_values][char]") {
  InvalidCharsTest("'\\u{1F60'", td::PEIBuilder()
                                     .SetType(td::ParserErrorInfo::PARSE_ERROR)
                                     .SetMessage("Parse error")
                                     .SetTokenType(TypedefLexer::SEMI)
                                     .SetCharOffset(62)
                                     .SetLine(3)
                                     .SetLineOffset(34)
                                     .SetLength(1)
                                     .build());
}

TEST_CASE("Too long unicode sequence '\\u{01F6000}'", "[simple_values][char]") {
  std::string file(R"(
            typedef=alpha;
            val : char = \\u{01F6000}';
          )");
  auto parsed_file = td::Parse(file);
  // TODO: this currently spits out lots of errors; is it worth consolidating
  // them somehow?
  REQUIRE(parsed_file->HasErrors());
  REQUIRE(parsed_file->GetValueDefinitions().empty());
}

TEST_CASE("Invalid escape '\\z'", "[simple_values][char]") {
  InvalidCharsTest("'\\z'", td::PEIBuilder()
                                .SetType(td::ParserErrorInfo::PARSE_ERROR)
                                .SetMessage("Parse error")
                                .SetTokenType(TypedefLexer::EOF)
                                .SetCharOffset(69)
                                .SetLine(4)
                                .SetLineOffset(10)
                                .SetLength(0)
                                .build());
}

#endif
