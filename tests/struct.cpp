#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <memory>
#include <sstream>
#include <string>
#include <variant>

#include "libtypedef/parser/grammar_functions.h"
#include "libtypedef/parser/typedef_parser.h"

using namespace std;
using namespace td;
using Catch::Matchers::Equals;
using Catch::Matchers::SizeIs;

/**
 * This file contains tests of structs. Valid typedef structs (those that should
 * not produce compile errors) are also contained in examples/tests/structs.td
 */

TEST_CASE("Struct with explictly typed primitive fields", "[struct]") {
  Parser parser(R"(
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
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeStruct0");
  REQUIRE(ctx);
  REQUIRE(DefinesStruct(ctx));

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
    "Struct with explictly typed primitive fields and bool, char and string "
    "literals",
    "[struct]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct1 {
  example_bool: bool = true;
  example_char: char = '🔥';
  example_str: str = "hello world";
};
    )");
  REQUIRE(!parser.Parse());
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeStruct1");
  REQUIRE(ctx);
  REQUIRE(DefinesStruct(ctx));

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
    "Struct with explictly typed primitive fields and typed numerical literals",
    "[struct]") {
  Parser parser(R"(
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
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeStruct2");
  REQUIRE(ctx);
  REQUIRE(DefinesStruct(ctx));

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
    "Struct with explictly typed primitive fields and type-implied numerical "
    "literals",
    "[struct]") {
  Parser parser(R"(
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
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeStruct3");
  REQUIRE(ctx);
  REQUIRE(DefinesStruct(ctx));

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
    "Struct with implicitly typed primitive fields with explicitly typed "
    "literals.",
    "[struct]") {
  Parser parser(R"(
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
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeStruct4");
  REQUIRE(ctx);
  REQUIRE(DefinesStruct(ctx));

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
    "Struct with implicitly typed primitive fields with implicitly typed "
    "literals.",
    "[struct]") {
  Parser parser(R"(
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
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeStruct5");
  REQUIRE(ctx);
  REQUIRE(DefinesStruct(ctx));

  REQUIRE(FindField(ctx, "example_bool"));
  REQUIRE(IsBool(FindField(ctx, "example_bool")));
  REQUIRE(GetBool(FindField(ctx, "example_bool")) == true);
  REQUIRE(FindField(ctx, "example_char"));
  REQUIRE(IsChar(FindField(ctx, "example_char")));
  REQUIRE(GetChar(FindField(ctx, "example_char")) == 128293);
  REQUIRE(FindField(ctx, "example_str"));
  REQUIRE(IsStr(FindField(ctx, "example_str")));
  REQUIRE(*GetStr(FindField(ctx, "example_str")) == "hello world");
  REQUIRE(FindField(ctx, "example_f32"));
  REQUIRE(IsF32(FindField(ctx, "example_f32")));
  REQUIRE(GetF32(FindField(ctx, "example_f32")) == 3.14f);
  REQUIRE(FindField(ctx, "example_i32"));
  REQUIRE(IsI32(FindField(ctx, "example_i32")));
  REQUIRE(GetI32(FindField(ctx, "example_i32")) == -32);
}

TEST_CASE("Struct with an inline struct", "[struct]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct10 {
  an_inline_struct: struct {
    a: i32;
  };
};
    )");
  REQUIRE(!parser.Parse());
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeStruct10");
  REQUIRE(ctx);
  REQUIRE(DefinesStruct(ctx));

  auto* fctx = FindField(ctx, "an_inline_struct");
  REQUIRE(fctx);
  REQUIRE(!HasTypeDefinition(fctx));
  REQUIRE(DefinesStruct(GetTypeDefinition(fctx)));
  REQUIRE(FindField(GetTypeDefinition(fctx), "a"));
  REQUIRE(IsI32(FindField(GetTypeDefinition(fctx), "a")));
}

TEST_CASE("Struct with an inline variant", "[struct]") {
  Parser parser(R"(
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
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeStruct11");
  REQUIRE(ctx);
  REQUIRE(DefinesStruct(ctx));

  auto* fctx = FindField(ctx, "an_inline_variant");
  REQUIRE(fctx);
  REQUIRE(!HasTypeDefinition(fctx));
  REQUIRE(DefinesVariant(GetTypeDefinition(fctx)));
  REQUIRE(FindField(GetTypeDefinition(fctx), "va"));
  REQUIRE(IsI32(FindField(GetTypeDefinition(fctx), "va")));
  REQUIRE(FindField(GetTypeDefinition(fctx), "vb"));
  REQUIRE(IsStr(FindField(GetTypeDefinition(fctx), "vb")));
}

// TEST_CASE("Struct with an inline vector", "[struct]") {
//   Parser parser(R"(
// typedef=alpha;
// module test;

// struct SomeStruct12 {
//   inline_vector: vector<i32>;
// };
//     )");
//   REQUIRE(!parser.Parse());
//   auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeStruct12");
//   REQUIRE(ctx);

//   auto inline_vector_field = st->GetField("inline_vector");
//   REQUIRE(inline_vector_field);
//   REQUIRE(inline_vector_field->IsVector());
//   REQUIRE(inline_vector_field->GetVector());
//   REQUIRE(inline_vector_field->GetVector()->element_type->IsI32());
// }

// TEST_CASE("Struct with an inline map", "[struct]") {
//   Parser parser(R"(
// typedef=alpha;
// module test;

// struct SomeStruct13 {
//   inline_map: map<i32, f64>;
// };
//     )");
//   REQUIRE(!parser.Parse());
//   auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeStruct13");
//   REQUIRE(ctx);

//   auto inline_map_field = st->GetField("inline_map");
//   REQUIRE(inline_map_field);
//   REQUIRE(inline_map_field->IsMap());
//   REQUIRE(inline_map_field->GetMap());
//   REQUIRE(inline_map_field->GetMap()->key_type->IsI32());
//   REQUIRE(inline_map_field->GetMap()->value_type->IsF64());
// }

TEST_CASE("Struct with an nested struct", "[struct]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct20 {
  struct NestedStruct {
    a: i32;
  };
};
    )");
  REQUIRE(!parser.Parse());
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeStruct20");
  REQUIRE(ctx);
  REQUIRE(DefinesStruct(ctx));

  auto* sctx = FindType(ctx, "NestedStruct");
  REQUIRE(sctx);
  REQUIRE(DefinesStruct(sctx));
  REQUIRE(FindField(sctx, "a"));
  REQUIRE(IsI32(FindField(sctx, "a")));
}

TEST_CASE("Struct with an nested variant", "[struct]") {
  Parser parser(R"(
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
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeStruct21");
  REQUIRE(ctx);
  REQUIRE(DefinesStruct(ctx));

  auto* vctx = FindType(ctx, "NestedVariant");
  REQUIRE(vctx);
  REQUIRE(DefinesVariant(vctx));
  REQUIRE(FindField(vctx, "va"));
  REQUIRE(IsI32(FindField(vctx, "va")));
  REQUIRE(FindField(vctx, "vb"));
  REQUIRE(IsStr(FindField(vctx, "vb")));
}

// TEST_CASE("Struct with an nested vector", "[struct]") {
//   Parser parser(R"(
// typedef=alpha;
// module test;

// struct SomeStruct22 {
//   vector NestedVector<i32>;
// };
//     )");
//   REQUIRE(!parser.Parse());
//   auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeStruct22");
//   REQUIRE(ctx);

//   auto vector_field = st->GetType("NestedVector");
//   REQUIRE(vector_field);
//   REQUIRE(vector_field->IsVector());
//   REQUIRE(vector_field->GetVector());
//   REQUIRE(vector_field->GetVector()->element_type->IsI32());
// }

// TEST_CASE("Struct with an nested map", "[struct]") {
//   Parser parser(R"(
// typedef=alpha;
// module test;

// struct SomeStruct23 {
//   map NestedMap<i32, f64>;
// };
//     )");
//   REQUIRE(!parser.Parse());
//   auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeStruct23");
//   REQUIRE(ctx);

//   auto map_field = st->GetType("NestedMap");
//   REQUIRE(map_field);
//   REQUIRE(map_field->IsMap());
//   REQUIRE(map_field->GetMap());
//   REQUIRE(map_field->GetMap()->key_type->IsI32());
//   REQUIRE(map_field->GetMap()->value_type->IsF64());
// }

TEST_CASE("Struct with an duplicate fields should error", "[struct]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  an_int: i32;
  an_int: i32;
};
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Struct with an duplicate types should error", "[struct]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  struct StructA {};
  struct StructA {};
};
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Struct with an duplicate types of different types should error",
          "[struct]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  struct TypeA {};
  variant TypeA {};
  vector TypeA<i32>;
  map TypeA<i32, i32>;
};
    )");
  REQUIRE(parser.Parse() == 3);
  REQUIRE(parser.GetError(0).error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
  REQUIRE(parser.GetError(1).error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
  REQUIRE(parser.GetError(2).error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Struct with an duplicate and field names should error", "[struct]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  a_field: i32;
  struct a_field {};
};
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Inline struct with an duplicate fields should error", "[struct]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  inline_struct: struct {
    an_int: i32;
    an_int: i32;
  };
};
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Inline struct with an duplicate types should error", "[struct]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  inline_struct: struct {
    struct StructA {};
    struct StructA {};
  };
};
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE(
    "Inline struct with an duplicate types of different types should error",
    "[struct]") {
  Parser parser(R"(
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
  REQUIRE(parser.Parse() == 3);
  REQUIRE(parser.GetError(0).error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
  REQUIRE(parser.GetError(1).error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
  REQUIRE(parser.GetError(2).error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Inline struct with an duplicate and field names should error",
          "[struct]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  inline_struct: struct {
    a_field: i32;
    struct a_field {};
  };
};
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type == ParserErrorInfo::DUPLICATE_SYMBOL);
};