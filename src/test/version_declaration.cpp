#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <sstream>
#include <string>

#include "typedef_parser.h"

using Catch::Matchers::Equals;

TEST_CASE("Version declarations.") {
  SECTION("Simple valid 'alpha' version string.") {
    auto parsed_file = td::Parse(R"(
typedef=alpha;
    )");
    REQUIRE(!parsed_file->HasErrors());
    REQUIRE(parsed_file->GetLanguageVersion() == td::LanguageVersion::ALPHA);
  }

  SECTION("Leading whitespace is ok.") {
    auto parsed_file = td::Parse(R"(
        typedef=alpha;
    )");
    REQUIRE(!parsed_file->HasErrors());
    REQUIRE(parsed_file->GetLanguageVersion() == td::LanguageVersion::ALPHA);
  }

  SECTION("Other whitespace is ok.") {
    auto parsed_file = td::Parse(R"(
        typedef = alpha ;
    )");
    REQUIRE(!parsed_file->HasErrors());
    REQUIRE(parsed_file->GetLanguageVersion() == td::LanguageVersion::ALPHA);
  }

  SECTION("Invalid version string fails.") {
    auto parsed_file = td::Parse(R"(
        typedef=qwer;
    )");
    REQUIRE(parsed_file->HasErrors());
    REQUIRE(parsed_file->GetErrors().size() == 1);
    REQUIRE(parsed_file->GetErrors()[0].error_type == td::ParserErrorInfo::INVALID_LANGUAGE_VERSION);
    REQUIRE(parsed_file->GetLanguageVersion() == td::LanguageVersion::UNKNOWN);
  }

  SECTION("Missing version fails.") {
    auto parsed_file = td::Parse(R"(
        typedef=;
    )");
    REQUIRE(parsed_file->HasErrors());
    REQUIRE(parsed_file->GetErrors().size() == 1);
    REQUIRE(parsed_file->GetErrors()[0].error_type == td::ParserErrorInfo::PARSE_ERROR);
    REQUIRE(parsed_file->GetLanguageVersion() == td::LanguageVersion::UNKNOWN);

  }
}