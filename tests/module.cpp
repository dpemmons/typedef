#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <memory>
#include <vector>

#include "libtypedef/parser/grammar_functions.h"
#include "libtypedef/parser/parser_error_info.h"
#include "libtypedef/parser/typedef_parser.h"

using Catch::Matchers::Equals;
using Catch::Matchers::SizeIs;
using namespace td;

TEST_CASE("Module declaration throws an UNIMPLEMENTED error.", "[module]") {
  Parser parser(R"(
typedef=alpha;
module someModule;
    )");
  REQUIRE(!parser.Parse());
  REQUIRE(parser.GetCompilationUnitContext()->moduleDeclaration());
  REQUIRE(
      ToString(parser.GetCompilationUnitContext()->moduleDeclaration()) ==
      "::someModule");
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
  REQUIRE(parser.Errors()[0].error_type ==
          ParserErrorInfo::DUPLICATE_SYMBOL);
}