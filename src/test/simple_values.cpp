#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <sstream>
#include <string>

#include "typedef_parser.h"

TEST_CASE("Declare a simple i32.", "[simple_values][i32]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
val : i32 = 0;
    )");
  REQUIRE(!parsed_file->HasErrors());
}
