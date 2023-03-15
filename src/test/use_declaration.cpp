#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <sstream>
#include <string>

#include "typedef_parser.h"

using Catch::Matchers::Equals;
using Catch::Matchers::SizeIs;

TEST_CASE("Imports.") {
  SECTION("Single import.") {
    auto parser = td::Parse(R"(
typedef=alpha;
module someModule;
    )");
    REQUIRE(!parser->HasErrors());
    // auto moduleDecl = parser->GetImports();
    // CHECK_THAT(1);
  }
}