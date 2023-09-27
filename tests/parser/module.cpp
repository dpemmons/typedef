#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <memory>
#include <vector>

#include "helpers.h"
#include "libtypedef/parser/ast_functions.h"
#include "libtypedef/parser/parser_error_info.h"
#include "libtypedef/parser/typedef_parser.h"

using Catch::Matchers::Equals;
using Catch::Matchers::SizeIs;
using namespace td;

TEST_CASE("typedef declaration parses.", "[module]") {
  Parser parser(R"(
typedef=alpha;
module someModule;
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  REQUIRE(parser.GetCompilationUnitContext()
              ->typedefVersionDeclaration()
              ->identifier()
              ->id == "alpha");
}

TEST_CASE("Invalid typedef declaration fails.", "[module]") {
  Parser parser(R"(
typedef=asdf;
module someModule;
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type ==
          ParserErrorInfo::INVALID_LANGUAGE_VERSION);
}

TEST_CASE("Module declaration parses.", "[module]") {
  Parser parser(R"(
typedef=alpha;
module someModule;
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  REQUIRE(parser.GetCompilationUnitContext()->moduleDeclaration());
  REQUIRE(ToString(parser.GetCompilationUnitContext()->moduleDeclaration()) ==
          "::someModule");
}

TEST_CASE("Use declarations", "[module]") {
  // TODO use declarations don't actually have any effect at the moment.
  Parser parser(R"(
typedef=alpha;
module test;
use someModule;
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
}

TEST_CASE("Duplicate structs should error", "[module]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  inlineMap: map<i32, f64>;
};

struct SomeStruct {
  inlineMap: map<i32, f64>;
};
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.Errors()[0].error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
}