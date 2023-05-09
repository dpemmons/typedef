#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <sstream>
#include <string>
#include <algorithm>
#include <memory>
#include <vector>

#include "antlr4/antlr4-runtime.h"
#include "grammar/TypedefLexer.h"
#include "grammar/TypedefParser.h"
#include "typedef_parser.h"
#include "language_version.h"
#include "parsed_file.h"
#include "parser_error_info.h"

using Catch::Matchers::Equals;

namespace {
const std::vector<td::ParserErrorInfo> empty_errors;

std::vector<td::ParserErrorInfo> SingleError(td::PEIBuilder& builder) {
  std::vector<td::ParserErrorInfo> errors;
  errors.emplace_back(builder.build());
  return errors;
}

}  // namespace

TEST_CASE("Simple valid 'alpha' version string.", "[version_declarations]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
    )");
  REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));
  REQUIRE(parsed_file->GetLanguageVersion() == td::LanguageVersion::ALPHA);
}

TEST_CASE("Leading whitespace is ok.", "[version_declarations]") {
  auto parsed_file = td::Parse(R"(
        typedef=alpha;
    )");
  REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));
  REQUIRE(parsed_file->GetLanguageVersion() == td::LanguageVersion::ALPHA);
}

TEST_CASE("Other whitespace is ok.", "[version_declarations]") {
  auto parsed_file = td::Parse(R"(
        typedef = alpha ;
    )");
  REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));
  REQUIRE(parsed_file->GetLanguageVersion() == td::LanguageVersion::ALPHA);
}

TEST_CASE("Semicolon required.", "[version_declarations]") {
  auto parsed_file = td::Parse(R"(
        typedef = alpha
    )");
  REQUIRE(parsed_file->HasErrors());
  auto expected_errors =
      SingleError(td::PEIBuilder()
                      .SetType(td::ParserErrorInfo::PARSE_ERROR)
                      .SetMessage("missing ';' at '<EOF>'")
                      .SetTokenType(antlr4::Token::EOF)
                      .SetCharOffset(29)
                      .SetLine(3)
                      .SetLineOffset(4)
                      .SetLength(0));
  REQUIRE_THAT(parsed_file->GetErrors(), Equals(expected_errors));
  REQUIRE(parsed_file->GetLanguageVersion() == td::LanguageVersion::ALPHA);
}

TEST_CASE("Must be an identifier.", "[version_declarations]") {
  auto parsed_file = td::Parse(R"(
        typedef = 123;
    )");
  REQUIRE(parsed_file->HasErrors());
  REQUIRE(parsed_file->GetErrors().size() == 1);
  REQUIRE(parsed_file->GetErrors()[0].error_type ==
          td::ParserErrorInfo::PARSE_ERROR);
  REQUIRE(parsed_file->GetLanguageVersion() == td::LanguageVersion::UNKNOWN);
}

TEST_CASE("Identifier must exist..", "[version_declarations]") {
  auto parsed_file = td::Parse(R"(
        typedef=;
    )");
  REQUIRE(parsed_file->HasErrors());
  REQUIRE(parsed_file->GetErrors().size() == 1);
  REQUIRE(parsed_file->GetErrors()[0].error_type ==
          td::ParserErrorInfo::PARSE_ERROR);
  REQUIRE(parsed_file->GetLanguageVersion() == td::LanguageVersion::UNKNOWN);
}

TEST_CASE("Must be a known version identifier.", "[version_declarations]") {
  auto parsed_file = td::Parse(R"(
        typedef=qwer;
    )");
  REQUIRE(parsed_file->HasErrors());
  REQUIRE(parsed_file->GetErrors().size() == 1);
  REQUIRE(parsed_file->GetErrors()[0].error_type ==
          td::ParserErrorInfo::INVALID_LANGUAGE_VERSION);
  REQUIRE(parsed_file->GetLanguageVersion() == td::LanguageVersion::UNKNOWN);
}