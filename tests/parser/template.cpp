#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <memory>
#include <vector>

#include "helpers.h"
#include "libtypedef/parser/ast_functions.h"
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

  vec_i32: vector<i32>;
  map_i32_f64: map<i32, f64>;
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
<for n in s.vec_i32>
  <n>
</for>
"#

template PrintMap(s: SomeStruct) t#"
<for k,v in s.map_i32_f64>
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
  map_i32_f64: map<i32, f64>;
}

template PrintMap(s: SomeStruct) t#"
<for n in s.map_i32_f64>
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

const std::string base_test_template = R"(
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

  vec_i32: vector<i32>;
  vec_i64: vector<i64>;
  vec_SomeOtherStruct: vector<SomeOtherStruct>;
  vec_YetSomeOtherStruct: vector<YetSomeOtherStruct>;
  map_i32_f64: map<i32, f64>;
  map_i16_f64: map<i16, f64>;
  map_i32_f32: map<i16, f32>;
  map_i32_SomeOtherStruct: map<i16, SomeOtherStruct>;
}

struct SomeOtherStruct {
  bar: i32;
}
struct YetSomeOtherStruct {
  asdf: str;
}

variant SomeVariant {
  example_char: char;
  example_str: str;
  another_struct: SomeOtherStruct;
  vec_i32: vector<i32>;
  map_i32_f64: map<i32, f64>;
}

template Print_bool(foo: bool) t#"<foo>"#
template Print_char(foo: char) t#"<foo>"#
template Print_str(foo: str) t#"<foo>"#
template Print_f32(foo: f32) t#"<foo>"#
template Print_f64(foo: f64) t#"<foo>"#
template Print_u8(foo: u8) t#"<foo>"#
template Print_u16(foo: u16) t#"<foo>"#
template Print_u32(foo: u32) t#"<foo>"#
template Print_u64(foo: u64) t#"<foo>"#
template Print_i8(foo: i8) t#"<foo>"#
template Print_i16(foo: i16) t#"<foo>"#
template Print_i32(foo: i32) t#"<foo>"#
template Print_i64(foo: i64) t#"<foo>"#
template Print_Struct(s: SomeStruct) t#"
  <s.example_bool>
  <s.example_char>
  <s.example_str>
  <s.example_f32>
  <s.example_f64>
  <s.example_u8>
  <s.example_u16>
  <s.example_u32>
  <s.example_u64>
  <s.example_i8>
  <s.example_i16>
  <s.example_i32>
  <s.example_i64>
  <s.another_struct.bar>
  <s.inline_struct.foo>
  <s.nested_struct.a>
  <for foo in s.vec_i32>
    <foo>
  </for>
  <for key, val in s.map_i32_f64>
    <key>: <val>
  </for>
"#

template Print_Vector_i32(vec: vector<i32>) t#"
<for foo in vec>
  <foo>
</for>
"#

template Print_Vector_SomeOtherStruct(vec: vector<SomeOtherStruct>) t#"
<for foo in vec>
  <foo.bar>
</for>
"#

template Print_Map_i32_f64(m: map<i32, f64>) t#"
<for key, val in m>
  <key>: <val>
</for>
"#
)";
size_t base_lines_offset(size_t i) {
  return i +
         std::count(base_test_template.begin(), base_test_template.end(), '\n');
}

TEST_CASE("Call methods with expected types.", "[template]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"
      <Print_bool(s.example_bool)>
      <Print_char(s.example_char)>
      <Print_str(s.example_str)>
      <Print_f32(s.example_f32)>
      <Print_f64(s.example_f64)>
      <Print_u8(s.example_u8)>
      <Print_u16(s.example_u16)>
      <Print_u32(s.example_u32)>
      <Print_u64(s.example_u64)>
      <Print_i8(s.example_i8)>
      <Print_i16(s.example_i16)>
      <Print_i32(s.example_i32)>
      <Print_i64(s.example_i64)>
      <Print_Struct(s)>
      <Print_Vector_i32(s.vec_i32)>
      <Print_Map_i32_f64(s.map_i32_f64)>
    "#
  )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
}

#define REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, x)                         \
  REQUIRE(parser.Parse() == 1);                                               \
  REQUIRE(parser.GetError().error_type == ParserErrorInfo::INVALID_ARGUMENT); \
  REQUIRE(parser.GetError().line == base_lines_offset(x));

// -----------------------------------------------------------------------------
// A bunch of tests that call template functions from a template with a
// primitive type. They should all fail.
// -----------------------------------------------------------------------------

TEST_CASE("Call bool with char should fail.", "[template][call_with:bool]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_bool(s.example_char)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call char with bool should fail.", "[template][call_with:bool]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_char(s.example_bool)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call str with bool should fail.", "[template][call_with:bool]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_str(s.example_bool)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call f32 with bool should fail.", "[template][call_with:bool]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_f32(s.example_bool)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call f64 with bool should fail.", "[template][call_with:bool]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_f64(s.example_bool)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call u8 with bool should fail.", "[template][call_with:bool]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_u8(s.example_bool)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call u16 with bool should fail.", "[template][call_with:bool]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_u16(s.example_bool)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call u32 with bool should fail.", "[template][call_with:bool]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_u32(s.example_bool)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call u64 with bool should fail.", "[template][call_with:bool]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_u64(s.example_bool)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call i8 with bool should fail.", "[template][call_with:bool]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_i8(s.example_bool)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call i16 with bool should fail.", "[template][call_with:bool]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_i16(s.example_bool)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call i32 with bool should fail.", "[template][call_with:bool]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_i32(s.example_bool)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call i64 with bool should fail.", "[template][call_with:bool]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_i64(s.example_bool)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call struct with bool should fail.", "[template][call_with:bool]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_Struct(s.example_bool)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call vector with bool should fail.", "[template][call_with:bool]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_Vector_i32(s.example_bool)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call map with bool should fail.", "[template][call_with:bool]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_Map_i32_f64(s.example_bool)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}

// -----------------------------------------------------------------------------
// A bunch of tests that call template functions from a template with a
// struct type. They should all fail.
// -----------------------------------------------------------------------------

TEST_CASE("Call bool with struct should fail.",
          "[template][call_with:struct]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_bool(s)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call char with struct should fail.",
          "[template][call_with:struct]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_char(s)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call str with struct should fail.", "[template][call_with:struct]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_str(s)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call f32 with struct should fail.", "[template][call_with:struct]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_f32(s)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call f64 with struct should fail.", "[template][call_with:struct]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_f64(s)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call u8 with struct should fail.", "[template][call_with:struct]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_u8(s)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call u16 with struct should fail.", "[template][call_with:struct]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_u16(s)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call u32 with struct should fail.", "[template][call_with:struct]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_u32(s)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call u64 with struct should fail.", "[template][call_with:struct]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_u64(s)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call i8 with struct should fail.", "[template][call_with:struct]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_i8(s)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call i16 with struct should fail.", "[template][call_with:struct]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_i16(s)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call i32 with struct should fail.", "[template][call_with:struct]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_i32(s)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call i64 with struct should fail.", "[template][call_with:struct]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_i64(s)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call struct with wrong struct should fail.",
          "[template][call_with:struct]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeOtherStruct) t#"<Print_Struct(s)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call vector with struct should fail.",
          "[template][call_with:struct]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_Vector_i32(s)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call map with struct should fail.", "[template][call_with:struct]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_Map_i32_f64(s)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}

// -----------------------------------------------------------------------------
// A bunch of tests that call template functions from a template with a
// vector type. They should all fail.
// -----------------------------------------------------------------------------
TEST_CASE("Call bool with vector should fail.",
          "[template][call_with:vector]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_bool(s.vec_i32)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call char with vector should fail.",
          "[template][call_with:vector]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_char(s.vec_i32)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call str with vector should fail.", "[template][call_with:vector]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_str(s.vec_i32)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call f32 with vector should fail.", "[template][call_with:vector]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_f32(s.vec_i32)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call f64 with vector should fail.", "[template][call_with:vector]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_f64(s.vec_i32)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call u8 with vector should fail.", "[template][call_with:vector]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_u8(s.vec_i32)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call u16 with vector should fail.", "[template][call_with:vector]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_u16(s.vec_i32)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call u32 with vector should fail.", "[template][call_with:vector]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_u32(s.vec_i32)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call u64 with vector should fail.", "[template][call_with:vector]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_u64(s.vec_i32)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call i8 with vector should fail.", "[template][call_with:vector]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_i8(s.vec_i32)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call i16 with vector should fail.", "[template][call_with:vector]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_i16(s.vec_i32)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call i32 with vector should fail.", "[template][call_with:vector]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_i32(s.vec_i32)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call i64 with vector should fail.", "[template][call_with:vector]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_i64(s.vec_i32)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call struct with vector should fail.",
          "[template][call_with:vector]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_Struct(s.vec_i32)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call vector with wrong vector should fail.",
          "[template][call_with:vector]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_Vector_i32(s.vec_i64)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call map with vector should fail.", "[template][call_with:vector]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_Map_i32_f64(s.vec_i32)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}

// -----------------------------------------------------------------------------
// A bunch of tests that call template functions from a template with a
// map type. They should all fail.
// -----------------------------------------------------------------------------
TEST_CASE("Call bool with map should fail.", "[template][call_with:map]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_bool(s.map_i32_f64)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call char with map should fail.", "[template][call_with:map]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_char(s.map_i32_f64)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call str with map should fail.", "[template][call_with:map]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_str(s.map_i32_f64)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call f32 with map should fail.", "[template][call_with:map]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_f32(s.map_i32_f64)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call f64 with map should fail.", "[template][call_with:map]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_f64(s.map_i32_f64)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call u8 with map should fail.", "[template][call_with:map]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_u8(s.map_i32_f64)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call u16 with map should fail.", "[template][call_with:map]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_u16(s.map_i32_f64)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call u32 with map should fail.", "[template][call_with:map]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_u32(s.map_i32_f64)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call u64 with map should fail.", "[template][call_with:map]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_u64(s.map_i32_f64)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call i8 with map should fail.", "[template][call_with:map]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_i8(s.map_i32_f64)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call i16 with map should fail.", "[template][call_with:map]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_i16(s.map_i32_f64)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call i32 with map should fail.", "[template][call_with:map]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_i32(s.map_i32_f64)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call i64 with map should fail.", "[template][call_with:map]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_i64(s.map_i32_f64)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call struct with map should fail.", "[template][call_with:map]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_Struct(s.map_i32_f64)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call vector with map should fail.", "[template][call_with:map]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_Vector_i32(s.map_i16_f64)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}
TEST_CASE("Call map with another map should fail.",
          "[template][call_with:map]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_Map_i32_f64(s.map_i16_f64)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}

TEST_CASE(
    "Call map with another map *using a struct type argument) should fail.",
    "[template][call_with:map]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_Map_i32_f64(s.map_i32_SomeOtherStruct)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}

// -----------------------------------------------------------------------------
// Other tests
// -----------------------------------------------------------------------------
TEST_CASE(
    "Calling a template with a struct-valued vector argument should succeed.",
    "[template][other]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_Vector_SomeOtherStruct(s.vec_SomeOtherStruct)>"#
  )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
}

// -----------------------------------------------------------------------------
// Variant tests
// -----------------------------------------------------------------------------
TEST_CASE("Calling a variant template should succeed.", "[template][variant]") {
  Parser parser(base_test_template + R"(
    template DoIt(v: SomeVariant) t#"
      <switch v>
      </switch>
    "#
  )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
}

TEST_CASE("Switch statement with non-variant type should fail.",
          "[template][variant]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"
      <switch s>
      </switch>
    "#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 3);
}

TEST_CASE("Switch statement with non-whitespace inner text should fail.",
          "[template][variant]") {
  Parser parser(base_test_template + R"(
    template DoIt(v: SomeVariant) t#"
      <switch v>
      asdf
      </switch>
    "#
  )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type == ParserErrorInfo::OTHER);
}

TEST_CASE(
    "Case statements within a switch must belong to the switched variant.",
    "[template][variant]") {
  Parser parser(base_test_template + R"(
    template DoIt(v: SomeVariant) t#"
      <switch v>
      </switch>
    "#
  )");
  REQUIRE(false);
}
TEST_CASE("Case statements must either exhaust the switch or have a default.",
          "[template][variant]") {
  Parser parser(base_test_template + R"(
    template DoIt(v: SomeVariant) t#"
      <switch v>
      </switch>
    "#
  )");
  REQUIRE(false);
}

// -----------------------------------------------------------------------------
// Other tests
// -----------------------------------------------------------------------------
TEST_CASE(
    "Calling a template with a different struct-valued vector argument should "
    "succeed.",
    "[template][other]") {
  Parser parser(base_test_template + R"(
    template DoIt(s: SomeStruct) t#"<Print_Vector_SomeOtherStruct(s.vec_YetSomeOtherStruct)>"#
  )");
  REQUIRE_SINGLE_INVALID_ARGUMENT_AT(parser, 2);
}