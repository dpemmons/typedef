#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <sstream>
#include <string>

#include "file_parser.h"

using Catch::Matchers::Equals;

TEST_CASE("Valid version declaration detected.") {
  SECTION("Simple valid 'alpha' version string.") {
    td::ParseResult result = td::Parse(R"(
typedef=alpha;
module someModule;
    )");
    REQUIRE(!result.HasErrors());
    CHECK_THAT(result.tree.version, Equals("alpha"));
  }

  SECTION("Leading whitespace is ok.") {
    td::ParseResult result = td::Parse(R"(
        typedef=alpha;
        module someModule;
    )");
    REQUIRE(!result.HasErrors());
    CHECK_THAT(result.tree.version, Equals("alpha"));
  }

  SECTION("Missing version fails.") {
    td::ParseResult result = td::Parse(R"(
        typedef=;
        module someModule;
    )");
    REQUIRE(result.HasErrors());
  }
}