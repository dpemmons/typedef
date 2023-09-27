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

TEST_CASE("Variant with explictly typed primitive fields", "[variant]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeVariant0 {
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
};
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeVariant0");
  REQUIRE(ctx);
  REQUIRE(DefinesVariant(ctx));

  REQUIRE(FindField(ctx, "example_bool"));
  REQUIRE(IsBool(FindField(ctx, "example_bool")));
  REQUIRE(FindField(ctx, "example_char"));
  REQUIRE(IsChar(FindField(ctx, "example_char")));
  REQUIRE(FindField(ctx, "example_str"));
  REQUIRE(IsStr(FindField(ctx, "example_str")));
  REQUIRE(FindField(ctx, "example_f32"));
  REQUIRE(IsF32(FindField(ctx, "example_f32")));
  REQUIRE(FindField(ctx, "example_f64"));
  REQUIRE(IsF64(FindField(ctx, "example_f64")));
  REQUIRE(FindField(ctx, "example_u8"));
  REQUIRE(IsU8(FindField(ctx, "example_u8")));
  REQUIRE(FindField(ctx, "example_u16"));
  REQUIRE(IsU16(FindField(ctx, "example_u16")));
  REQUIRE(FindField(ctx, "example_u32"));
  REQUIRE(IsU32(FindField(ctx, "example_u32")));
  REQUIRE(FindField(ctx, "example_u64"));
  REQUIRE(IsU64(FindField(ctx, "example_u64")));
  REQUIRE(FindField(ctx, "example_i8"));
  REQUIRE(IsI8(FindField(ctx, "example_i8")));
  REQUIRE(FindField(ctx, "example_i16"));
  REQUIRE(IsI16(FindField(ctx, "example_i16")));
  REQUIRE(FindField(ctx, "example_i32"));
  REQUIRE(IsI32(FindField(ctx, "example_i32")));
  REQUIRE(FindField(ctx, "example_i64"));
  REQUIRE(IsI64(FindField(ctx, "example_i64")));
}

TEST_CASE(
    "Variant with explictly typed primitive fields and bool, char and string "
    "literals",
    "[variant]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeVariant1 {
  example_bool: bool = true;
  example_char: char = '🔥';
  example_str: str = "hello world";
};
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeVariant1");
  REQUIRE(ctx);
  REQUIRE(DefinesVariant(ctx));

  REQUIRE(FindField(ctx, "example_bool"));
  REQUIRE(IsBool(FindField(ctx, "example_bool")));
  REQUIRE(GetBool(FindField(ctx, "example_bool")) == true);
  REQUIRE(FindField(ctx, "example_char"));
  REQUIRE(IsChar(FindField(ctx, "example_char")));
  REQUIRE(GetChar(FindField(ctx, "example_char")) == 128293);
  REQUIRE(FindField(ctx, "example_str"));
  REQUIRE(IsStr(FindField(ctx, "example_str")));
  REQUIRE(*GetStr(FindField(ctx, "example_str")) == "hello world");
}

TEST_CASE(
    "Variant with explictly typed primitive fields and typed numerical "
    "literals",
    "[variant]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeVariant2 {
  example_f32: f32 = 3.14f32;
  example_f64: f64 = 5.16f64;
  example_u8: u8 = 8u8;
  example_u16: u16 = 16u16;
  example_u32: u32 = 32u32;
  example_u64: u64 = 64u64;
  example_i8: i8 = -8i8;
  example_i16: i16 = -16i16;
  example_i32: i32 = -32i32;
  example_i64: i64 = -64i64;
};
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeVariant2");
  REQUIRE(ctx);
  REQUIRE(DefinesVariant(ctx));

  REQUIRE(FindField(ctx, "example_f32"));
  REQUIRE(IsF32(FindField(ctx, "example_f32")));
  REQUIRE(GetF32(FindField(ctx, "example_f32")) == 3.14f);
  REQUIRE(FindField(ctx, "example_f64"));
  REQUIRE(IsF64(FindField(ctx, "example_f64")));
  REQUIRE(GetF64(FindField(ctx, "example_f64")) == 5.16);
  REQUIRE(FindField(ctx, "example_u8"));
  REQUIRE(IsU8(FindField(ctx, "example_u8")));
  REQUIRE(GetU8(FindField(ctx, "example_u8")) == 8);
  REQUIRE(FindField(ctx, "example_u16"));
  REQUIRE(IsU16(FindField(ctx, "example_u16")));
  REQUIRE(GetU16(FindField(ctx, "example_u16")) == 16);
  REQUIRE(FindField(ctx, "example_u32"));
  REQUIRE(IsU32(FindField(ctx, "example_u32")));
  REQUIRE(GetU32(FindField(ctx, "example_u32")) == 32);
  REQUIRE(FindField(ctx, "example_u64"));
  REQUIRE(IsU64(FindField(ctx, "example_u64")));
  REQUIRE(GetU64(FindField(ctx, "example_u64")) == 64);
  REQUIRE(FindField(ctx, "example_i8"));
  REQUIRE(IsI8(FindField(ctx, "example_i8")));
  REQUIRE(GetI8(FindField(ctx, "example_i8")) == -8);
  REQUIRE(FindField(ctx, "example_i16"));
  REQUIRE(IsI16(FindField(ctx, "example_i16")));
  REQUIRE(GetI16(FindField(ctx, "example_i16")) == -16);
  REQUIRE(FindField(ctx, "example_i32"));
  REQUIRE(IsI32(FindField(ctx, "example_i32")));
  REQUIRE(GetI32(FindField(ctx, "example_i32")) == -32);
  REQUIRE(FindField(ctx, "example_i64"));
  REQUIRE(IsI64(FindField(ctx, "example_i64")));
  REQUIRE(GetI64(FindField(ctx, "example_i64")) == -64);
}

TEST_CASE(
    "Variant with explictly typed primitive fields and type-implied numerical "
    "literals",
    "[variant]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeVariant3 {
  example_f32: f32 = 3.14;
  example_f64: f64 = 5.16;
  example_u8: u8 = 8;
  example_u16: u16 = 16;
  example_u32: u32 = 32;
  example_u64: u64 = 64;
  example_i8: i8 = -8;
  example_i16: i16 = -16;
  example_i32: i32 = -32;
  example_i64: i64 = -64;
};
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeVariant3");
  REQUIRE(ctx);
  REQUIRE(DefinesVariant(ctx));

  REQUIRE(FindField(ctx, "example_f32"));
  REQUIRE(IsF32(FindField(ctx, "example_f32")));
  REQUIRE(GetF32(FindField(ctx, "example_f32")) == 3.14f);
  REQUIRE(FindField(ctx, "example_f64"));
  REQUIRE(IsF64(FindField(ctx, "example_f64")));
  REQUIRE(GetF64(FindField(ctx, "example_f64")) == 5.16);
  REQUIRE(FindField(ctx, "example_u8"));
  REQUIRE(IsU8(FindField(ctx, "example_u8")));
  REQUIRE(GetU8(FindField(ctx, "example_u8")) == 8);
  REQUIRE(FindField(ctx, "example_u16"));
  REQUIRE(IsU16(FindField(ctx, "example_u16")));
  REQUIRE(GetU16(FindField(ctx, "example_u16")) == 16);
  REQUIRE(FindField(ctx, "example_u32"));
  REQUIRE(IsU32(FindField(ctx, "example_u32")));
  REQUIRE(GetU32(FindField(ctx, "example_u32")) == 32);
  REQUIRE(FindField(ctx, "example_u64"));
  REQUIRE(IsU64(FindField(ctx, "example_u64")));
  REQUIRE(GetU64(FindField(ctx, "example_u64")) == 64);
  REQUIRE(FindField(ctx, "example_i8"));
  REQUIRE(IsI8(FindField(ctx, "example_i8")));
  REQUIRE(GetI8(FindField(ctx, "example_i8")) == -8);
  REQUIRE(FindField(ctx, "example_i16"));
  REQUIRE(IsI16(FindField(ctx, "example_i16")));
  REQUIRE(GetI16(FindField(ctx, "example_i16")) == -16);
  REQUIRE(FindField(ctx, "example_i32"));
  REQUIRE(IsI32(FindField(ctx, "example_i32")));
  REQUIRE(GetI32(FindField(ctx, "example_i32")) == -32);
  REQUIRE(FindField(ctx, "example_i64"));
  REQUIRE(IsI64(FindField(ctx, "example_i64")));
  REQUIRE(GetI64(FindField(ctx, "example_i64")) == -64);
}

TEST_CASE(
    "Variant with implicitly typed primitive fields with explicitly typed "
    "literals should fail.",
    "[variant]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeVariant4 {
  example_f32 = 3.14f32;
  example_f64 = 5.16f64;
  example_u8 = 8u8;
  example_u16 = 16u16;
  example_u32 = 32u32;
  example_u64 = 64u64;
  example_i8 = -8i8;
  example_i16 = -16i16;
  example_i32 = -32i32;
  example_i64 = -64i64;
};
    )");
  REQUIRE(parser.Parse() == 10);
}

TEST_CASE(
    "Variant with implicitly typed primitive fields with implicitly typed "
    "literals should fail.",
    "[variant]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeVariant5 {
  example_bool = true;
  example_char = '🔥';
  example_str = "hello world";
  example_f32 = 3.14;
  example_i32 = -32;
};
    )");
  REQUIRE(parser.Parse() == 5);
}

TEST_CASE("Variant with an inline struct", "[variant]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeVariant10 {
  an_inline_struct: struct {
    a: i32;
  };
};
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeVariant10");
  REQUIRE(ctx);
  REQUIRE(DefinesVariant(ctx));

  auto* fctx = FindField(ctx, "an_inline_struct");
  REQUIRE(fctx);
  REQUIRE(HasTypeDefinition(fctx));
  REQUIRE(DefinesStruct(GetTypeDefinition(fctx)));
  REQUIRE(FindField(GetTypeDefinition(fctx), "a"));
  REQUIRE(IsI32(FindField(GetTypeDefinition(fctx), "a")));
}

TEST_CASE("Variant with an inline variant", "[variant]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeVariant11 {
  an_inline_variant: variant {
    va: i32;
    vb: str;
  };
};
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeVariant11");
  REQUIRE(ctx);
  REQUIRE(DefinesVariant(ctx));

  auto* fctx = FindField(ctx, "an_inline_variant");
  REQUIRE(fctx);
  REQUIRE(HasTypeDefinition(fctx));
  REQUIRE(DefinesVariant(GetTypeDefinition(fctx)));
  REQUIRE(FindField(GetTypeDefinition(fctx), "va"));
  REQUIRE(IsI32(FindField(GetTypeDefinition(fctx), "va")));
  REQUIRE(FindField(GetTypeDefinition(fctx), "vb"));
  REQUIRE(IsStr(FindField(GetTypeDefinition(fctx), "vb")));
}

TEST_CASE("Variant with an inline vector", "[variant]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeVariant12 {
  inline_vector: vector<i32>;
};
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeVariant12");
  REQUIRE(ctx);

  auto* fctx = FindField(ctx, "inline_vector");
  REQUIRE(fctx);
  REQUIRE(!HasTypeDefinition(fctx));
  REQUIRE(ReferencesBuiltinVectorType(GetTypeAnnotation(fctx)));
}

TEST_CASE("Variant with an inline map", "[variant]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeVariant13 {
  inline_map: map<i32, f64>;
};
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeVariant13");
  REQUIRE(ctx);

  auto* fctx = FindField(ctx, "inline_map");
  REQUIRE(fctx);
  REQUIRE(!HasTypeDefinition(fctx));
  REQUIRE(ReferencesBuiltinMapType(GetTypeAnnotation(fctx)));
}

TEST_CASE("Variant with an nested struct", "[variant]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeVariant20 {
  struct NestedStruct {
    a: i32;
  };
};
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeVariant20");
  REQUIRE(ctx);
  REQUIRE(DefinesVariant(ctx));

  auto* sctx = FindType(ctx, "NestedStruct");
  REQUIRE(sctx);
  REQUIRE(DefinesStruct(sctx));
  REQUIRE(FindField(sctx, "a"));
  REQUIRE(IsI32(FindField(sctx, "a")));
}

TEST_CASE("Variant with an nested variant", "[variant]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeVariant21 {
  variant NestedVariant {
    va: i32;
    vb: str;
  };
};
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeVariant21");
  REQUIRE(ctx);
  REQUIRE(DefinesVariant(ctx));

  auto* vctx = FindType(ctx, "NestedVariant");
  REQUIRE(vctx);
  REQUIRE(DefinesVariant(vctx));
  REQUIRE(FindField(vctx, "va"));
  REQUIRE(IsI32(FindField(vctx, "va")));
  REQUIRE(FindField(vctx, "vb"));
  REQUIRE(IsStr(FindField(vctx, "vb")));
}

TEST_CASE("Variant with an duplicate fields should error", "[variant]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeVariant {
  an_int: i32;
  an_int: i32;
};
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Variant with an duplicate types should error", "[variant]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeVariant {
  variant VariantA {};
  variant VariantA {};
};
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Variant with an duplicate types of different types should error",
          "[variant]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeVariant {
  struct foo {};
  variant foo {};
  foo: vector <i32>;
  foo: map <i32, i32>;
};
    )");
  REQUIRE(parser.Parse() == 3);
  REQUIRE(parser.GetError(0).error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
  REQUIRE(parser.GetError(1).error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
  REQUIRE(parser.GetError(2).error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Variant with an duplicate and field names should error",
          "[variant]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeVariant {
  a_field: i32;
  variant a_field {};
};
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Inline variant with an duplicate fields should error", "[variant]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeVariant {
  inline_variant: variant {
    an_int: i32;
    an_int: i32;
  };
};
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Inline variant with an duplicate types should error", "[variant]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeVariant {
  inline_variant: variant {
    variant VariantA {};
    variant VariantA {};
  };
};
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE(
    "Inline variant with an duplicate types of different types should error",
    "[variant]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeVariant {
  inline_variant: variant {
    struct foo {};
    variant foo {};
    foo: vector<i32>;
    foo: map<i32, i32>;
  };
};
    )");
  REQUIRE(parser.Parse() == 3);
  REQUIRE(parser.GetError(0).error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
  REQUIRE(parser.GetError(1).error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
  REQUIRE(parser.GetError(2).error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Inline variant with an duplicate and field names should error",
          "[variant]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeVariant {
  inline_variant: variant {
    a_field: i32;
    variant a_field {};
  };
};
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
};