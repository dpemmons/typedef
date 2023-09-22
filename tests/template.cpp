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
  REQUIRE(IsI32(insertion->tmplStringExpression()
                    ->tmplValueReferencePath()
                    ->leaf_annotation));
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

TEST_CASE("Dereference all standard struct fields does not error.",
          "[template]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  example_bool: bool;
  example_char: char;
  example_str: str;
  example_f32: f32;
  example_f64: f64;
  example_u8: u8;
  example_u16: u16;
  example_u32: u32;
  example_u64: u64;
  example_i8: i8;
  example_i16: i16;
  example_i32: i32;
  example_i64: i64;

  another_struct: SomeOtherStruct;

  inline_struct: struct {
    foo: str;
  };

  struct NestedStruct {
    a: i32;
  }
  nested_struct: NestedStruct;

  inline_vector: vector<i32>;
  inline_map: map<i32, f64>;
}

struct SomeOtherStruct {
  bar: i32;
}

template Print_bool(s: SomeStruct) t#"<s.example_bool>"#
template Print_char(s: SomeStruct) t#"<s.example_char>"#
template Print_str(s: SomeStruct) t#"<s.example_str>"#
template Print_f32(s: SomeStruct) t#"<s.example_f32>"#
template Print_f64(s: SomeStruct) t#"<s.example_f64>"#
template Print_u8(s: SomeStruct) t#"<s.example_u8>"#
template Print_u16(s: SomeStruct) t#"<s.example_u16>"#
template Print_u32(s: SomeStruct) t#"<s.example_u32>"#
template Print_u64(s: SomeStruct) t#"<s.example_u64>"#
template Print_i8(s: SomeStruct) t#"<s.example_i8>"#
template Print_i16(s: SomeStruct) t#"<s.example_i16>"#
template Print_i32(s: SomeStruct) t#"<s.example_i32>"#
template Print_i64(s: SomeStruct) t#"<s.example_i64>"#

template PrintReferencedStruct(s: SomeStruct) t#"<s.another_struct.bar>"#
template PrintInlineStruct(s: SomeStruct) t#"<s.inline_struct.foo>"#
template PrintNestedStruct(s: SomeStruct) t#"<s.nested_struct.a>"#

template PrintVector(s: SomeStruct) t#"
<for n in s.inline_vector>
  <n>
</for>
"#

template PrintMap(s: SomeStruct) t#"
<for k,v in s.inline_map>
  <k> -> <v>
</for>
"#
  )");

  REQUIRE_NO_PARSE_ERROR(parser.Parse());
}

TEST_CASE("Missing binding variable in map for loop should error.",
          "[template]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  inline_map: map<i32, f64>;
}

template PrintMap(s: SomeStruct) t#"
<for n in s.inline_map>
</for>
"#
  )");

  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type ==
          ParserErrorInfo::BINDING_VARIABLE_MISMATCH);
  REQUIRE(parser.GetError().line == 10);
}

TEST_CASE("Extraneous binding var in vector for loop should error.",
          "[template]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  vec: vector<i32>;
}

template PrintMap(s: SomeStruct) t#"
<for a, b in s.vec>
</for>
"#
  )");

  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type ==
          ParserErrorInfo::BINDING_VARIABLE_MISMATCH);
  REQUIRE(parser.GetError().line == 10);
}
