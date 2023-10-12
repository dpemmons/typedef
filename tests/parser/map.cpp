#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <memory>
#include <sstream>
#include <string>
#include <variant>

#include "helpers.h"
#include "libtypedef/parser/ast_functions.h"
#include "libtypedef/parser/typedef_parser.h"

using namespace std;
using namespace td;
using Catch::Matchers::Equals;
using Catch::Matchers::SizeIs;

TEST_CASE("Map with various scalar key types", "[map]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  some_bool_map: map<bool, str>;
  some_char_map: map<char, str>;
  some_u8_map: map<u8, str>;
  some_u16_map: map<u16, str>;
  some_u32_map: map<u32, str>;
  some_u64_map: map<u64, str>;
  some_i8_map: map<i8, str>;
  some_i16_map: map<i16, str>;
  some_i32_map: map<i32, str>;
  some_i64_map: map<i64, str>;
  some_str_map: map<str, str>;
}
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeStruct");
  REQUIRE(IsBool(GetTypeArgument(GetTypeAnnotation(FindField(ctx, "some_bool_map")))));
  REQUIRE(IsStr(GetTypeArgument(GetTypeAnnotation(FindField(ctx, "some_bool_map")), 1)));

  REQUIRE(IsChar(GetTypeArgument(GetTypeAnnotation(FindField(ctx, "some_char_map")))));
  REQUIRE(IsU8(GetTypeArgument(GetTypeAnnotation(FindField(ctx, "some_u8_map")))));
  REQUIRE(IsU16(GetTypeArgument(GetTypeAnnotation(FindField(ctx, "some_u16_map")))));
  REQUIRE(IsU32(GetTypeArgument(GetTypeAnnotation(FindField(ctx, "some_u32_map")))));
  REQUIRE(IsU64(GetTypeArgument(GetTypeAnnotation(FindField(ctx, "some_u64_map")))));
  REQUIRE(IsI8(GetTypeArgument(GetTypeAnnotation(FindField(ctx, "some_i8_map")))));
  REQUIRE(IsI16(GetTypeArgument(GetTypeAnnotation(FindField(ctx, "some_i16_map")))));
  REQUIRE(IsI32(GetTypeArgument(GetTypeAnnotation(FindField(ctx, "some_i32_map")))));
  REQUIRE(IsI64(GetTypeArgument(GetTypeAnnotation(FindField(ctx, "some_i64_map")))));
  REQUIRE(IsStr(GetTypeArgument(GetTypeAnnotation(FindField(ctx, "some_str_map")))));
}

TEST_CASE("Map with invalid type argument count should error", "[map]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  some_map: map <i32, i32, str>;
}
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type ==
          ParserErrorInfo::INVALID_TYPE_ARGUMENTS);
}

TEST_CASE("Map with a struct key type should error", "[map]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  struct StructA {
    an_int: i32;
  }
  some_bool_map: map <StructA, str>;
}
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type ==
          ParserErrorInfo::TYPE_CONSTRAINT_VIOLATION);
}

TEST_CASE("Map with a float key type should error", "[map]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  some_bool_map: map<f32, str>;
}
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type ==
          ParserErrorInfo::TYPE_CONSTRAINT_VIOLATION);
}

TEST_CASE("Map with a variant key type should error", "[map]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  variant VariantA {
    an_int: i32;
  };
  some_bool_map: map<VariantA, str>;
}
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type ==
          ParserErrorInfo::TYPE_CONSTRAINT_VIOLATION);
}

TEST_CASE("Map with a vector key type should error", "[map]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct A {};

struct SomeStruct {
  vec_a: vector<i32>;
  some_bool_map: map<A, str>;
}
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type ==
          ParserErrorInfo::TYPE_CONSTRAINT_VIOLATION);
}

TEST_CASE("Map with a map key type should error", "[map]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct A {};

struct SomeStruct {
  map_a: map<i32, str>;
  some_bool_map: map<A, str>;
}
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type ==
          ParserErrorInfo::TYPE_CONSTRAINT_VIOLATION);
}