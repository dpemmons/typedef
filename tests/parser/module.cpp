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

TEST_CASE("FQNs should resolve", "[module]") {
  Parser parser(R"(
typedef=alpha;
module ModA::ModB;

struct SomeStruct {
  some_val: i32;
  struct SomeNestedStruct {
    some_other_val: i32;
  };
  an_inline_struct: struct {
    a: i32;
  };
};
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  auto* ss = FindType(parser.GetCompilationUnitContext(), "SomeStruct");
  REQUIRE(GetFQN(ss) == std::vector<std::optional<std::string>>(
                            {"ModA", "ModB", "SomeStruct"}));

  auto* sns = FindType(ss, "SomeNestedStruct");
  REQUIRE(GetFQN(sns) ==
          std::vector<std::optional<std::string>>(
              {"ModA", "ModB", "SomeStruct", "SomeNestedStruct"}));

  auto* isf = FindField(ss, "an_inline_struct");
  REQUIRE(GetFQN(GetTypeDefinition(isf)) ==
          std::vector<std::optional<std::string>>(
              {"ModA", "ModB", "SomeStruct", std::nullopt}));
}