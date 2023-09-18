#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <memory>
#include <vector>

#include "helpers.h"
#include "libtypedef/parser/parser_error_info.h"
#include "libtypedef/parser/typedef_parser.h"

using namespace td;

TEST_CASE("Template function params.", "[template]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeVals {
  val_a: i32;
};

template DoIt(foo: i32, bar: SomeVals) t#"
this is a template test.
"#
  )");

  REQUIRE_NO_PARSE_ERROR(parser.Parse());
}