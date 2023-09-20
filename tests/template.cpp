#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <memory>
#include <vector>

#include "helpers.h"
#include "libtypedef/parser/grammar_functions.h"
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

template SomeFunc(foo: i32, bar: SomeVals) t#"
this is a template test.
"#
  )");

  REQUIRE_NO_PARSE_ERROR(parser.Parse());
}

TEST_CASE("Template function params resolve.", "[template]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeVals {
  val_a: i32;
};

template SomeFunc(foo: i32, bar: SomeVals) t#"
<foo>
"#
  )");

  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  auto* somefunc =
      FindTempalteFunc(parser.GetCompilationUnitContext(), "SomeFunc");
  REQUIRE(somefunc);

  auto* insertion = GetTmplExpression(somefunc, 0);
  REQUIRE(insertion);
  REQUIRE(IsI32(insertion->tmplValueReferencePath()->leaf_type));
}

TEST_CASE("Template function params resolve when calling another function.",
          "[template]") {
  Parser parser(R"(
typedef=alpha;
module test;

template SomeFunc(foo: i32) t#"
<SomeOtherFunc(foo)>
"#

template SomeOtherFunc(bar: i32) t#"
<bar>
"#
  )");

  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  auto* somefunc =
      FindTempalteFunc(parser.GetCompilationUnitContext(), "SomeFunc");
  REQUIRE(somefunc);

  auto* someotherfunc =
      FindTempalteFunc(parser.GetCompilationUnitContext(), "SomeOtherFunc");
  REQUIRE(someotherfunc);
}

TEST_CASE("Binding variables do not resolve.", "[template]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeVals {
  vec_a: vector<i32>;
};

template SomeFunc(foo: SomeVals) t#"
<for val in foo.vec_a>
  <val>
</for>
"#
  )");

  // REQUIRE_NO_PARSE_ERROR(parser.Parse());
}