#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <memory>
#include <sstream>
#include <string>
#include <variant>

#include "libtypedef/parser/grammar_functions.h"
#include "libtypedef/parser/typedef_parser.h"
#include "tests/test_helpers.h"

using namespace std;
using Catch::Matchers::Equals;
using Catch::Matchers::SizeIs;

/**
 * This file contains tests of structs. Valid typedef structs (those that should
 * not produce compile errors) are also contained in examples/tests/structs.td
 */

TEST_CASE("Struct with explictly typed primitive fields", "[struct]") {
  TestParser parser(R"(
typedef=alpha;
module test;

struct SomeStruct0 {
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
  REQUIRE(!parser.Parse());
  auto* ctx = td::FindType(parser.GetCompilationUnitContext(), "SomeStruct0");
  REQUIRE(ctx);

  REQUIRE(td::FindField(ctx, "example_bool"));
  REQUIRE(td::IsBool(td::FindField(ctx, "example_bool")));
  REQUIRE(td::FindField(ctx, "example_char"));
  REQUIRE(td::IsChar(td::FindField(ctx, "example_char")));
  REQUIRE(td::FindField(ctx, "example_str"));
  REQUIRE(td::IsStr(td::FindField(ctx, "example_str")));
  REQUIRE(td::FindField(ctx, "example_f32"));
  REQUIRE(td::IsF32(td::FindField(ctx, "example_f32")));
  REQUIRE(td::FindField(ctx, "example_f64"));
  REQUIRE(td::IsF64(td::FindField(ctx, "example_f64")));
  REQUIRE(td::FindField(ctx, "example_u8"));
  REQUIRE(td::IsU8(td::FindField(ctx, "example_u8")));
  REQUIRE(td::FindField(ctx, "example_u16"));
  REQUIRE(td::IsU16(td::FindField(ctx, "example_u16")));
  REQUIRE(td::FindField(ctx, "example_u32"));
  REQUIRE(td::IsU32(td::FindField(ctx, "example_u32")));
  REQUIRE(td::FindField(ctx, "example_u64"));
  REQUIRE(td::IsU64(td::FindField(ctx, "example_u64")));
  REQUIRE(td::FindField(ctx, "example_i8"));
  REQUIRE(td::IsI8(td::FindField(ctx, "example_i8")));
  REQUIRE(td::FindField(ctx, "example_i16"));
  REQUIRE(td::IsI16(td::FindField(ctx, "example_i16")));
  REQUIRE(td::FindField(ctx, "example_i32"));
  REQUIRE(td::IsI32(td::FindField(ctx, "example_i32")));
  REQUIRE(td::FindField(ctx, "example_i64"));
  REQUIRE(td::IsI64(td::FindField(ctx, "example_i64")));
}

TEST_CASE(
    "Struct with explictly typed primitive fields and bool, char and string "
    "literals",
    "[struct]") {
  TestParser parser(R"(
typedef=alpha;
module test;

struct SomeStruct1 {
  example_bool: bool = true;
  example_char: char = '🔥';
  example_str: str = "hello world";
};
    )");
  REQUIRE(!parser.Parse());

///  THIS IS WHERE I'M LEAVING OFF....

  auto st = parser.mod->GetStruct("SomeStruct1");
  REQUIRE(st);

  REQUIRE(st->GetField("example_bool"));
  REQUIRE(st->GetField("example_bool")->IsBool());
  REQUIRE(st->GetField("example_bool")->GetBool() == true);
  REQUIRE(st->GetField("example_char"));
  REQUIRE(st->GetField("example_char")->IsChar());
  REQUIRE(st->GetField("example_char")->GetChar() == 128293);
  REQUIRE(st->GetField("example_str"));
  REQUIRE(st->GetField("example_str")->IsStr());
  REQUIRE(*st->GetField("example_str")->GetStr() == "hello world");
}

TEST_CASE(
    "Struct with explictly typed primitive fields and typed numerical literals",
    "[struct]") {
  TestParser parser(R"(
typedef=alpha;
module test;

struct SomeStruct2 {
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
  REQUIRE(!parser.Parse());
  auto st = parser.mod->GetStruct("SomeStruct2");
  REQUIRE(st);

  REQUIRE(st->GetField("example_f32"));
  REQUIRE(st->GetField("example_f32")->IsF32());
  REQUIRE(st->GetField("example_f32")->GetF32() == 3.14f);
  REQUIRE(st->GetField("example_f64"));
  REQUIRE(st->GetField("example_f64")->IsF64());
  REQUIRE(st->GetField("example_f64")->GetF64() == 5.16);
  REQUIRE(st->GetField("example_u8"));
  REQUIRE(st->GetField("example_u8")->IsU8());
  REQUIRE(st->GetField("example_u8")->GetU8() == 8);
  REQUIRE(st->GetField("example_u16"));
  REQUIRE(st->GetField("example_u16")->IsU16());
  REQUIRE(st->GetField("example_u16")->GetU16() == 16);
  REQUIRE(st->GetField("example_u32"));
  REQUIRE(st->GetField("example_u32")->IsU32());
  REQUIRE(st->GetField("example_u32")->GetU32() == 32);
  REQUIRE(st->GetField("example_u64"));
  REQUIRE(st->GetField("example_u64")->IsU64());
  REQUIRE(st->GetField("example_u64")->GetU64() == 64);
  REQUIRE(st->GetField("example_i8"));
  REQUIRE(st->GetField("example_i8")->IsI8());
  REQUIRE(st->GetField("example_i8")->GetI8() == -8);
  REQUIRE(st->GetField("example_i16"));
  REQUIRE(st->GetField("example_i16")->IsI16());
  REQUIRE(st->GetField("example_i16")->GetI16() == -16);
  REQUIRE(st->GetField("example_i32"));
  REQUIRE(st->GetField("example_i32")->IsI32());
  REQUIRE(st->GetField("example_i32")->GetI32() == -32);
  REQUIRE(st->GetField("example_i64"));
  REQUIRE(st->GetField("example_i64")->IsI64());
  REQUIRE(st->GetField("example_i64")->GetI64() == -64);
}

TEST_CASE(
    "Struct with explictly typed primitive fields and type-implied numerical "
    "literals",
    "[struct]") {
  TestParser parser(R"(
typedef=alpha;
module test;

struct SomeStruct3 {
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
  REQUIRE(!parser.Parse());
  auto st = parser.mod->GetStruct("SomeStruct3");
  REQUIRE(st);

  REQUIRE(st->GetField("example_f32"));
  REQUIRE(st->GetField("example_f32")->IsF32());
  REQUIRE(st->GetField("example_f32")->GetF32() == 3.14f);
  REQUIRE(st->GetField("example_f64"));
  REQUIRE(st->GetField("example_f64")->IsF64());
  REQUIRE(st->GetField("example_f64")->GetF64() == 5.16);
  REQUIRE(st->GetField("example_u8"));
  REQUIRE(st->GetField("example_u8")->IsU8());
  REQUIRE(st->GetField("example_u8")->GetU8() == 8);
  REQUIRE(st->GetField("example_u16"));
  REQUIRE(st->GetField("example_u16")->IsU16());
  REQUIRE(st->GetField("example_u16")->GetU16() == 16);
  REQUIRE(st->GetField("example_u32"));
  REQUIRE(st->GetField("example_u32")->IsU32());
  REQUIRE(st->GetField("example_u32")->GetU32() == 32);
  REQUIRE(st->GetField("example_u64"));
  REQUIRE(st->GetField("example_u64")->IsU64());
  REQUIRE(st->GetField("example_u64")->GetU64() == 64);
  REQUIRE(st->GetField("example_i8"));
  REQUIRE(st->GetField("example_i8")->IsI8());
  REQUIRE(st->GetField("example_i8")->GetI8() == -8);
  REQUIRE(st->GetField("example_i16"));
  REQUIRE(st->GetField("example_i16")->IsI16());
  REQUIRE(st->GetField("example_i16")->GetI16() == -16);
  REQUIRE(st->GetField("example_i32"));
  REQUIRE(st->GetField("example_i32")->IsI32());
  REQUIRE(st->GetField("example_i32")->GetI32() == -32);
  REQUIRE(st->GetField("example_i64"));
  REQUIRE(st->GetField("example_i64")->IsI64());
  REQUIRE(st->GetField("example_i64")->GetI64() == -64);
}

TEST_CASE(
    "Struct with implicitly typed primitive fields with explicitly typed "
    "literals.",
    "[struct]") {
  TestParser parser(R"(
typedef=alpha;
module test;

struct SomeStruct4 {
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
  REQUIRE(!parser.Parse());
  auto st = parser.mod->GetStruct("SomeStruct4");
  REQUIRE(st);

  REQUIRE(st->GetField("example_f32"));
  REQUIRE(st->GetField("example_f32")->IsF32());
  REQUIRE(st->GetField("example_f32")->GetF32() == 3.14f);
  REQUIRE(st->GetField("example_f64"));
  REQUIRE(st->GetField("example_f64")->IsF64());
  REQUIRE(st->GetField("example_f64")->GetF64() == 5.16);
  REQUIRE(st->GetField("example_u8"));
  REQUIRE(st->GetField("example_u8")->IsU8());
  REQUIRE(st->GetField("example_u8")->GetU8() == 8);
  REQUIRE(st->GetField("example_u16"));
  REQUIRE(st->GetField("example_u16")->IsU16());
  REQUIRE(st->GetField("example_u16")->GetU16() == 16);
  REQUIRE(st->GetField("example_u32"));
  REQUIRE(st->GetField("example_u32")->IsU32());
  REQUIRE(st->GetField("example_u32")->GetU32() == 32);
  REQUIRE(st->GetField("example_u64"));
  REQUIRE(st->GetField("example_u64")->IsU64());
  REQUIRE(st->GetField("example_u64")->GetU64() == 64);
  REQUIRE(st->GetField("example_i8"));
  REQUIRE(st->GetField("example_i8")->IsI8());
  REQUIRE(st->GetField("example_i8")->GetI8() == -8);
  REQUIRE(st->GetField("example_i16"));
  REQUIRE(st->GetField("example_i16")->IsI16());
  REQUIRE(st->GetField("example_i16")->GetI16() == -16);
  REQUIRE(st->GetField("example_i32"));
  REQUIRE(st->GetField("example_i32")->IsI32());
  REQUIRE(st->GetField("example_i32")->GetI32() == -32);
  REQUIRE(st->GetField("example_i64"));
  REQUIRE(st->GetField("example_i64")->IsI64());
  REQUIRE(st->GetField("example_i64")->GetI64() == -64);
}

TEST_CASE(
    "Struct with implicitly typed primitive fields with implicitly typed "
    "literals.",
    "[struct]") {
  TestParser parser(R"(
typedef=alpha;
module test;

struct SomeStruct5 {
  example_bool = true;
  example_char = '🔥';
  example_str = "hello world";
  example_f32 = 3.14;
  example_i32 = -32;
};
    )");
  REQUIRE(!parser.Parse());
  auto st = parser.mod->GetStruct("SomeStruct5");
  REQUIRE(st);

  REQUIRE(st->GetField("example_bool"));
  REQUIRE(st->GetField("example_bool")->IsBool());
  REQUIRE(st->GetField("example_bool")->GetBool() == true);
  REQUIRE(st->GetField("example_char"));
  REQUIRE(st->GetField("example_char")->IsChar());
  REQUIRE(st->GetField("example_char")->GetChar() == 128293);
  REQUIRE(st->GetField("example_str"));
  REQUIRE(st->GetField("example_str")->IsStr());
  REQUIRE(*st->GetField("example_str")->GetStr() == "hello world");
  REQUIRE(st->GetField("example_f32"));
  REQUIRE(st->GetField("example_f32")->IsF32());
  REQUIRE(st->GetField("example_f32")->GetF32() == 3.14f);
  REQUIRE(st->GetField("example_i32"));
  REQUIRE(st->GetField("example_i32")->IsI32());
  REQUIRE(st->GetField("example_i32")->GetI32() == -32);
}

TEST_CASE("Struct with an inline struct", "[struct]") {
  TestParser parser(R"(
typedef=alpha;
module test;

struct SomeStruct10 {
  an_inline_struct: struct {
    a: i32;
  };
};
    )");
  REQUIRE(!parser.Parse());
  auto st = parser.mod->GetStruct("SomeStruct10");
  REQUIRE(st);

  auto inline_struct_field = st->GetField("an_inline_struct");
  REQUIRE(inline_struct_field);
  REQUIRE(inline_struct_field->IsStruct());
  REQUIRE(inline_struct_field->GetStruct());
  REQUIRE(inline_struct_field->GetStruct()->GetField("a"));
  REQUIRE(inline_struct_field->GetStruct()->GetField("a")->IsI32());
}

TEST_CASE("Struct with an inline variant", "[struct]") {
  TestParser parser(R"(
typedef=alpha;
module test;

struct SomeStruct11 {
  an_inline_variant: variant {
    va: i32;
    vb: str;
  };
};
    )");
  REQUIRE(!parser.Parse());
  auto st = parser.mod->GetStruct("SomeStruct11");
  REQUIRE(st);

  auto inline_varaint_field = st->GetField("an_inline_variant");
  REQUIRE(inline_varaint_field);
  REQUIRE(inline_varaint_field->IsVariant());
  REQUIRE(inline_varaint_field->GetVariant());
  REQUIRE(inline_varaint_field->GetVariant()->GetField("va"));
  REQUIRE(inline_varaint_field->GetVariant()->GetField("va")->IsI32());
  REQUIRE(inline_varaint_field->GetVariant()->GetField("vb"));
  REQUIRE(inline_varaint_field->GetVariant()->GetField("vb")->IsStr());
}

TEST_CASE("Struct with an inline vector", "[struct]") {
  TestParser parser(R"(
typedef=alpha;
module test;

struct SomeStruct12 {
  inline_vector: vector<i32>;
};
    )");
  REQUIRE(!parser.Parse());
  auto st = parser.mod->GetStruct("SomeStruct12");
  REQUIRE(st);

  auto inline_vector_field = st->GetField("inline_vector");
  REQUIRE(inline_vector_field);
  REQUIRE(inline_vector_field->IsVector());
  REQUIRE(inline_vector_field->GetVector());
  REQUIRE(inline_vector_field->GetVector()->element_type->IsI32());
}

TEST_CASE("Struct with an inline map", "[struct]") {
  TestParser parser(R"(
typedef=alpha;
module test;

struct SomeStruct13 {
  inline_map: map<i32, f64>;
};
    )");
  REQUIRE(!parser.Parse());
  auto st = parser.mod->GetStruct("SomeStruct13");
  REQUIRE(st);

  auto inline_map_field = st->GetField("inline_map");
  REQUIRE(inline_map_field);
  REQUIRE(inline_map_field->IsMap());
  REQUIRE(inline_map_field->GetMap());
  REQUIRE(inline_map_field->GetMap()->key_type->IsI32());
  REQUIRE(inline_map_field->GetMap()->value_type->IsF64());
}

TEST_CASE("Struct with an nested struct", "[struct]") {
  TestParser parser(R"(
typedef=alpha;
module test;

struct SomeStruct20 {
  struct NestedStruct {
    a: i32;
  };
};
    )");
  REQUIRE(!parser.Parse());
  auto st = parser.mod->GetStruct("SomeStruct20");
  REQUIRE(st);

  auto struct_field = st->GetType("NestedStruct");
  REQUIRE(struct_field);
  REQUIRE(struct_field->IsStruct());
  REQUIRE(struct_field->GetStruct()->GetField("a"));
  REQUIRE(struct_field->GetStruct()->GetField("a")->IsI32());
}

TEST_CASE("Struct with an nested variant", "[struct]") {
  TestParser parser(R"(
typedef=alpha;
module test;

struct SomeStruct21 {
  variant NestedVariant {
    va: i32;
    vb: str;
  };
};
    )");
  REQUIRE(!parser.Parse());
  auto st = parser.mod->GetStruct("SomeStruct21");
  REQUIRE(st);

  auto variant_field = st->GetType("NestedVariant");
  REQUIRE(variant_field);
  REQUIRE(variant_field->IsVariant());
  REQUIRE(variant_field->GetVariant()->GetField("va"));
  REQUIRE(variant_field->GetVariant()->GetField("va")->IsI32());
  REQUIRE(variant_field->GetVariant()->GetField("vb"));
  REQUIRE(variant_field->GetVariant()->GetField("vb")->IsStr());
}

TEST_CASE("Struct with an nested vector", "[struct]") {
  TestParser parser(R"(
typedef=alpha;
module test;

struct SomeStruct22 {
  vector NestedVector<i32>;
};
    )");
  REQUIRE(!parser.Parse());
  auto st = parser.mod->GetStruct("SomeStruct22");
  REQUIRE(st);

  auto vector_field = st->GetType("NestedVector");
  REQUIRE(vector_field);
  REQUIRE(vector_field->IsVector());
  REQUIRE(vector_field->GetVector());
  REQUIRE(vector_field->GetVector()->element_type->IsI32());
}

TEST_CASE("Struct with an nested map", "[struct]") {
  TestParser parser(R"(
typedef=alpha;
module test;

struct SomeStruct23 {
  map NestedMap<i32, f64>;
};
    )");
  REQUIRE(!parser.Parse());
  auto st = parser.mod->GetStruct("SomeStruct23");
  REQUIRE(st);

  auto map_field = st->GetType("NestedMap");
  REQUIRE(map_field);
  REQUIRE(map_field->IsMap());
  REQUIRE(map_field->GetMap());
  REQUIRE(map_field->GetMap()->key_type->IsI32());
  REQUIRE(map_field->GetMap()->value_type->IsF64());
}

TEST_CASE("Struct with an duplicate fields should error", "[struct]") {
  TestParser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  an_int: i32;
  an_int: i32;
};
    )");
  REQUIRE(parser.Parse());
  REQUIRE(parser.errors.size() == 1);
  REQUIRE(parser.errors[0].error_type == td::ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Struct with an duplicate types should error", "[struct]") {
  TestParser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  struct StructA {};
  struct StructA {};
};
    )");
  REQUIRE(parser.Parse());
  REQUIRE(parser.errors.size() == 1);
  REQUIRE(parser.errors[0].error_type == td::ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Struct with an duplicate types of different types should error",
          "[struct]") {
  TestParser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  struct TypeA {};
  variant TypeA {};
  vector TypeA<i32>;
  map TypeA<i32, i32>;
};
    )");
  REQUIRE(parser.Parse());
  REQUIRE(parser.errors.size() == 3);
  REQUIRE(parser.errors[0].error_type == td::ParserErrorInfo::DUPLICATE_SYMBOL);
  REQUIRE(parser.errors[1].error_type == td::ParserErrorInfo::DUPLICATE_SYMBOL);
  REQUIRE(parser.errors[2].error_type == td::ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Struct with an duplicate and field names should error", "[struct]") {
  TestParser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  a_field: i32;
  struct a_field {};
};
    )");
  REQUIRE(parser.Parse());
  REQUIRE(parser.errors.size() == 1);
  REQUIRE(parser.errors[0].error_type == td::ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Inline struct with an duplicate fields should error", "[struct]") {
  TestParser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  inline_struct: struct {
    an_int: i32;
    an_int: i32;
  };
};
    )");
  REQUIRE(parser.Parse());
  REQUIRE(parser.errors.size() == 1);
  REQUIRE(parser.errors[0].error_type == td::ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Inline struct with an duplicate types should error", "[struct]") {
  TestParser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  inline_struct: struct {
    struct StructA {};
    struct StructA {};
  };
};
    )");
  REQUIRE(parser.Parse());
  REQUIRE(parser.errors.size() == 1);
  REQUIRE(parser.errors[0].error_type == td::ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE(
    "Inline struct with an duplicate types of different types should error",
    "[struct]") {
  TestParser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  inline_struct: struct {
    struct TypeA {};
    variant TypeA {};
    vector TypeA<i32>;
    map TypeA<i32, i32>;
  };
};
    )");
  REQUIRE(parser.Parse());
  REQUIRE(parser.errors.size() == 3);
  REQUIRE(parser.errors[0].error_type == td::ParserErrorInfo::DUPLICATE_SYMBOL);
  REQUIRE(parser.errors[1].error_type == td::ParserErrorInfo::DUPLICATE_SYMBOL);
  REQUIRE(parser.errors[2].error_type == td::ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Inline struct with an duplicate and field names should error",
          "[struct]") {
  TestParser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  inline_struct: struct {
    a_field: i32;
    struct a_field {};
  };
};
    )");
  REQUIRE(parser.Parse());
  REQUIRE(parser.errors.size() == 1);
  REQUIRE(parser.errors[0].error_type == td::ParserErrorInfo::DUPLICATE_SYMBOL);
};