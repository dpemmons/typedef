#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <sstream>
#include <string>

#include "libtypedef/parser/typedef_parser.h"

using Catch::Matchers::Equals;
using Catch::Matchers::SizeIs;
using namespace td;

TEST_CASE("Use declarations", "[use_declarations]") {
  // TODO use declarations don't actually have any effect at the moment.
  Parser parser(R"(
typedef=alpha;
module test;
use someModule;
    )");
  REQUIRE(!parser.Parse());
}
