#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <sstream>
#include <string>

#include "typedef_parser.h"

using Catch::Matchers::Equals;

TEST_CASE("Valid version declaration detected.") {
  SECTION("Simple valid 'alpha' version string.") {
    auto parsed_file = td::Parse(R"(
typedef=alpha;
module someModule;
    )");
    REQUIRE(!parsed_file->HasErrors());
    REQUIRE(parsed_file->GetLanguageVersion() == td::LanguageVersion::ALPHA);
  }

  SECTION("Leading whitespace is ok.") {
    auto parsed_file = td::Parse(R"(
        typedef=alpha;
        module someModule;
    )");
    REQUIRE(!parsed_file->HasErrors());
    REQUIRE(parsed_file->GetLanguageVersion() == td::LanguageVersion::ALPHA);
  }

  SECTION("Missing version fails.") {
    auto parser = td::Parse(R"(
        typedef=;
        module someModule;
    )");
    REQUIRE(parser->HasErrors());
  }
}