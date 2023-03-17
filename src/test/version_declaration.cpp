#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <sstream>
#include <string>

#include "typedef_parser.h"

using Catch::Matchers::Equals;

TEST_CASE("Simple valid 'alpha' version string.", "[version_declarations]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
    )");
  REQUIRE(!parsed_file->HasErrors());
  REQUIRE(parsed_file->GetLanguageVersion() == td::LanguageVersion::ALPHA);
}

TEST_CASE("Leading whitespace is ok.", "[version_declarations]") {
  auto parsed_file = td::Parse(R"(
        typedef=alpha;
    )");
  REQUIRE(!parsed_file->HasErrors());
  REQUIRE(parsed_file->GetLanguageVersion() == td::LanguageVersion::ALPHA);
}

TEST_CASE("Other whitespace is ok.", "[version_declarations]") {
  auto parsed_file = td::Parse(R"(
        typedef = alpha ;
    )");
  REQUIRE(!parsed_file->HasErrors());
  REQUIRE(parsed_file->GetLanguageVersion() == td::LanguageVersion::ALPHA);
}

TEST_CASE("Semicolon required.", "[version_declarations]") {
  auto parsed_file = td::Parse(R"(
        typedef = alpha
    )");
  REQUIRE(parsed_file->HasErrors());
  REQUIRE(parsed_file->GetErrors().size() == 1);
  REQUIRE(parsed_file->GetErrors()[0].error_type ==
          td::ParserErrorInfo::PARSE_ERROR);
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