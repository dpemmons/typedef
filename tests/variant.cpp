#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <memory>
#include <sstream>
#include <string>
#include <variant>

#include "libtypedef/parser/typedef_parser.h"
#include "tests/test_helpers.h"

using namespace std;
using Catch::Matchers::Equals;
using Catch::Matchers::SizeIs;

TEST_CASE("Variant with explictly typed primitive fields", "[variant]") {
  TestParser parser(R"(
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
  REQUIRE(!parser.Parse());
  auto var = parsed_file->mod->GetVariant("SomeVariant0");
  REQUIRE(var);

  REQUIRE(var->GetField("example_bool"));
  REQUIRE(var->GetField("example_bool")->IsBool());
  REQUIRE(var->GetField("example_char"));
  REQUIRE(var->GetField("example_char")->IsChar());
  REQUIRE(var->GetField("example_str"));
  REQUIRE(var->GetField("example_str")->IsStr());
  REQUIRE(var->GetField("example_f32"));
  REQUIRE(var->GetField("example_f32")->IsF32());
  REQUIRE(var->GetField("example_f64"));
  REQUIRE(var->GetField("example_f64")->IsF64());
  REQUIRE(var->GetField("example_u8"));
  REQUIRE(var->GetField("example_u8")->IsU8());
  REQUIRE(var->GetField("example_u16"));
  REQUIRE(var->GetField("example_u16")->IsU16());
  REQUIRE(var->GetField("example_u32"));
  REQUIRE(var->GetField("example_u32")->IsU32());
  REQUIRE(var->GetField("example_u64"));
  REQUIRE(var->GetField("example_u64")->IsU64());
  REQUIRE(var->GetField("example_i8"));
  REQUIRE(var->GetField("example_i8")->IsI8());
  REQUIRE(var->GetField("example_i16"));
  REQUIRE(var->GetField("example_i16")->IsI16());
  REQUIRE(var->GetField("example_i32"));
  REQUIRE(var->GetField("example_i32")->IsI32());
  REQUIRE(var->GetField("example_i64"));
  REQUIRE(var->GetField("example_i64")->IsI64());
}

TEST_CASE(
    "Variant with explictly typed primitive fields and bool, char and string "
    "literals",
    "[variant]") {
  TestParser parser(R"(
typedef=alpha;
module test;

variant SomeVariant1 {
  example_bool: bool = true;
  example_char: char = '🔥';
  example_str: str = "hello world";
};
    )");
  REQUIRE(!parser.Parse());
  auto var = parsed_file->mod->GetVariant("SomeVariant1");
  REQUIRE(var);

  REQUIRE(var->GetField("example_bool"));
  REQUIRE(var->GetField("example_bool")->IsBool());
  REQUIRE(var->GetField("example_bool")->GetBool() == true);
  REQUIRE(var->GetField("example_char"));
  REQUIRE(var->GetField("example_char")->IsChar());
  REQUIRE(var->GetField("example_char")->GetChar() == 128293);
  REQUIRE(var->GetField("example_str"));
  REQUIRE(var->GetField("example_str")->IsStr());
  REQUIRE(*var->GetField("example_str")->GetStr() == "hello world");
}

TEST_CASE(
    "Variant with explictly typed primitive fields and typed numerical literals",
    "[variant]") {
  TestParser parser(R"(
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
  REQUIRE(!parser.Parse());
  auto var = parsed_file->mod->GetVariant("SomeVariant2");
  REQUIRE(var);

  REQUIRE(var->GetField("example_f32"));
  REQUIRE(var->GetField("example_f32")->IsF32());
  REQUIRE(var->GetField("example_f32")->GetF32() == 3.14f);
  REQUIRE(var->GetField("example_f64"));
  REQUIRE(var->GetField("example_f64")->IsF64());
  REQUIRE(var->GetField("example_f64")->GetF64() == 5.16);
  REQUIRE(var->GetField("example_u8"));
  REQUIRE(var->GetField("example_u8")->IsU8());
  REQUIRE(var->GetField("example_u8")->GetU8() == 8);
  REQUIRE(var->GetField("example_u16"));
  REQUIRE(var->GetField("example_u16")->IsU16());
  REQUIRE(var->GetField("example_u16")->GetU16() == 16);
  REQUIRE(var->GetField("example_u32"));
  REQUIRE(var->GetField("example_u32")->IsU32());
  REQUIRE(var->GetField("example_u32")->GetU32() == 32);
  REQUIRE(var->GetField("example_u64"));
  REQUIRE(var->GetField("example_u64")->IsU64());
  REQUIRE(var->GetField("example_u64")->GetU64() == 64);
  REQUIRE(var->GetField("example_i8"));
  REQUIRE(var->GetField("example_i8")->IsI8());
  REQUIRE(var->GetField("example_i8")->GetI8() == -8);
  REQUIRE(var->GetField("example_i16"));
  REQUIRE(var->GetField("example_i16")->IsI16());
  REQUIRE(var->GetField("example_i16")->GetI16() == -16);
  REQUIRE(var->GetField("example_i32"));
  REQUIRE(var->GetField("example_i32")->IsI32());
  REQUIRE(var->GetField("example_i32")->GetI32() == -32);
  REQUIRE(var->GetField("example_i64"));
  REQUIRE(var->GetField("example_i64")->IsI64());
  REQUIRE(var->GetField("example_i64")->GetI64() == -64);
}

TEST_CASE(
    "Variant with explictly typed primitive fields and type-implied numerical "
    "literals",
    "[variant]") {
  TestParser parser(R"(
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
  REQUIRE(!parser.Parse());
  auto var = parsed_file->mod->GetVariant("SomeVariant3");
  REQUIRE(var);

  REQUIRE(var->GetField("example_f32"));
  REQUIRE(var->GetField("example_f32")->IsF32());
  REQUIRE(var->GetField("example_f32")->GetF32() == 3.14f);
  REQUIRE(var->GetField("example_f64"));
  REQUIRE(var->GetField("example_f64")->IsF64());
  REQUIRE(var->GetField("example_f64")->GetF64() == 5.16);
  REQUIRE(var->GetField("example_u8"));
  REQUIRE(var->GetField("example_u8")->IsU8());
  REQUIRE(var->GetField("example_u8")->GetU8() == 8);
  REQUIRE(var->GetField("example_u16"));
  REQUIRE(var->GetField("example_u16")->IsU16());
  REQUIRE(var->GetField("example_u16")->GetU16() == 16);
  REQUIRE(var->GetField("example_u32"));
  REQUIRE(var->GetField("example_u32")->IsU32());
  REQUIRE(var->GetField("example_u32")->GetU32() == 32);
  REQUIRE(var->GetField("example_u64"));
  REQUIRE(var->GetField("example_u64")->IsU64());
  REQUIRE(var->GetField("example_u64")->GetU64() == 64);
  REQUIRE(var->GetField("example_i8"));
  REQUIRE(var->GetField("example_i8")->IsI8());
  REQUIRE(var->GetField("example_i8")->GetI8() == -8);
  REQUIRE(var->GetField("example_i16"));
  REQUIRE(var->GetField("example_i16")->IsI16());
  REQUIRE(var->GetField("example_i16")->GetI16() == -16);
  REQUIRE(var->GetField("example_i32"));
  REQUIRE(var->GetField("example_i32")->IsI32());
  REQUIRE(var->GetField("example_i32")->GetI32() == -32);
  REQUIRE(var->GetField("example_i64"));
  REQUIRE(var->GetField("example_i64")->IsI64());
  REQUIRE(var->GetField("example_i64")->GetI64() == -64);
}

TEST_CASE(
    "Variant with implicitly typed primitive fields with explicitly typed "
    "literals.",
    "[variant]") {
  TestParser parser(R"(
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
  REQUIRE(!parser.Parse());
  auto var = parsed_file->mod->GetVariant("SomeVariant4");
  REQUIRE(var);

  REQUIRE(var->GetField("example_f32"));
  REQUIRE(var->GetField("example_f32")->IsF32());
  REQUIRE(var->GetField("example_f32")->GetF32() == 3.14f);
  REQUIRE(var->GetField("example_f64"));
  REQUIRE(var->GetField("example_f64")->IsF64());
  REQUIRE(var->GetField("example_f64")->GetF64() == 5.16);
  REQUIRE(var->GetField("example_u8"));
  REQUIRE(var->GetField("example_u8")->IsU8());
  REQUIRE(var->GetField("example_u8")->GetU8() == 8);
  REQUIRE(var->GetField("example_u16"));
  REQUIRE(var->GetField("example_u16")->IsU16());
  REQUIRE(var->GetField("example_u16")->GetU16() == 16);
  REQUIRE(var->GetField("example_u32"));
  REQUIRE(var->GetField("example_u32")->IsU32());
  REQUIRE(var->GetField("example_u32")->GetU32() == 32);
  REQUIRE(var->GetField("example_u64"));
  REQUIRE(var->GetField("example_u64")->IsU64());
  REQUIRE(var->GetField("example_u64")->GetU64() == 64);
  REQUIRE(var->GetField("example_i8"));
  REQUIRE(var->GetField("example_i8")->IsI8());
  REQUIRE(var->GetField("example_i8")->GetI8() == -8);
  REQUIRE(var->GetField("example_i16"));
  REQUIRE(var->GetField("example_i16")->IsI16());
  REQUIRE(var->GetField("example_i16")->GetI16() == -16);
  REQUIRE(var->GetField("example_i32"));
  REQUIRE(var->GetField("example_i32")->IsI32());
  REQUIRE(var->GetField("example_i32")->GetI32() == -32);
  REQUIRE(var->GetField("example_i64"));
  REQUIRE(var->GetField("example_i64")->IsI64());
  REQUIRE(var->GetField("example_i64")->GetI64() == -64);
}

TEST_CASE(
    "Variant with implicitly typed primitive fields with implicitly typed "
    "literals.",
    "[variant]") {
  TestParser parser(R"(
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
  REQUIRE(!parser.Parse());
  auto var = parsed_file->mod->GetVariant("SomeVariant5");
  REQUIRE(var);

  REQUIRE(var->GetField("example_bool"));
  REQUIRE(var->GetField("example_bool")->IsBool());
  REQUIRE(var->GetField("example_bool")->GetBool() == true);
  REQUIRE(var->GetField("example_char"));
  REQUIRE(var->GetField("example_char")->IsChar());
  REQUIRE(var->GetField("example_char")->GetChar() == 128293);
  REQUIRE(var->GetField("example_str"));
  REQUIRE(var->GetField("example_str")->IsStr());
  REQUIRE(*var->GetField("example_str")->GetStr() == "hello world");
  REQUIRE(var->GetField("example_f32"));
  REQUIRE(var->GetField("example_f32")->IsF32());
  REQUIRE(var->GetField("example_f32")->GetF32() == 3.14f);
  REQUIRE(var->GetField("example_i32"));
  REQUIRE(var->GetField("example_i32")->IsI32());
  REQUIRE(var->GetField("example_i32")->GetI32() == -32);
}

TEST_CASE("Variant with an inline struct", "[variant]") {
  TestParser parser(R"(
typedef=alpha;
module test;

variant SomeVariant10 {
  an_inline_struct: struct {
    a: i32;
  };
};
    )");
  REQUIRE(!parser.Parse());
  auto var = parsed_file->mod->GetVariant("SomeVariant10");
  REQUIRE(var);

  auto inline_struct_field = var->GetField("an_inline_struct");
  REQUIRE(inline_struct_field);
  REQUIRE(inline_struct_field->IsStruct());
  REQUIRE(inline_struct_field->GetStruct());
  REQUIRE(inline_struct_field->GetStruct()->GetField("a"));
  REQUIRE(inline_struct_field->GetStruct()->GetField("a")->IsI32());
}

TEST_CASE("Variant with an inline variant", "[variant]") {
  TestParser parser(R"(
typedef=alpha;
module test;

variant SomeVariant11 {
  an_inline_variant: variant {
    va: i32;
    vb: str;
  };
};
    )");
  REQUIRE(!parser.Parse());
  auto var = parsed_file->mod->GetVariant("SomeVariant11");
  REQUIRE(var);

  auto inline_varaint_field = var->GetField("an_inline_variant");
  REQUIRE(inline_varaint_field);
  REQUIRE(inline_varaint_field->IsVariant());
  REQUIRE(inline_varaint_field->GetVariant());
  REQUIRE(inline_varaint_field->GetVariant()->GetField("va"));
  REQUIRE(inline_varaint_field->GetVariant()->GetField("va")->IsI32());
  REQUIRE(inline_varaint_field->GetVariant()->GetField("vb"));
  REQUIRE(inline_varaint_field->GetVariant()->GetField("vb")->IsStr());
}

TEST_CASE("Variant with an inline vector", "[variant]") {
  TestParser parser(R"(
typedef=alpha;
module test;

variant SomeVariant12 {
  inline_vector: vector<i32>;
};
    )");
  REQUIRE(!parser.Parse());
  auto var = parsed_file->mod->GetVariant("SomeVariant12");
  REQUIRE(var);

  auto inline_vector_field = var->GetField("inline_vector");
  REQUIRE(inline_vector_field);
  REQUIRE(inline_vector_field->IsVector());
  REQUIRE(inline_vector_field->GetVector());
  REQUIRE(inline_vector_field->GetVector()->element_type->IsI32());
}

TEST_CASE("Variant with an inline map", "[variant]") {
  TestParser parser(R"(
typedef=alpha;
module test;

variant SomeVariant13 {
  inline_map: map<i32, f64>;
};
    )");
  REQUIRE(!parser.Parse());
  auto var = parsed_file->mod->GetVariant("SomeVariant13");
  REQUIRE(var);

  auto inline_map_field = var->GetField("inline_map");
  REQUIRE(inline_map_field);
  REQUIRE(inline_map_field->IsMap());
  REQUIRE(inline_map_field->GetMap());
  REQUIRE(inline_map_field->GetMap()->key_type->IsI32());
  REQUIRE(inline_map_field->GetMap()->value_type->IsF64());
}

TEST_CASE("Variant with an nested struct", "[variant]") {
  TestParser parser(R"(
typedef=alpha;
module test;

variant SomeVariant20 {
  struct NestedStruct {
    a: i32;
  };
};
    )");
  REQUIRE(!parser.Parse());
  auto var = parsed_file->mod->GetVariant("SomeVariant20");
  REQUIRE(var);

  auto struct_field = var->GetType("NestedStruct");
  REQUIRE(struct_field);
  REQUIRE(struct_field->IsStruct());
  REQUIRE(struct_field->GetStruct()->GetField("a"));
  REQUIRE(struct_field->GetStruct()->GetField("a")->IsI32());
}

TEST_CASE("Variant with an nested variant", "[variant]") {
  TestParser parser(R"(
typedef=alpha;
module test;

variant SomeVariant21 {
  variant NestedVariant {
    va: i32;
    vb: str;
  };
};
    )");
  REQUIRE(!parser.Parse());
  auto var = parsed_file->mod->GetVariant("SomeVariant21");
  REQUIRE(var);

  auto variant_field = var->GetType("NestedVariant");
  REQUIRE(variant_field);
  REQUIRE(variant_field->IsVariant());
  REQUIRE(variant_field->GetVariant()->GetField("va"));
  REQUIRE(variant_field->GetVariant()->GetField("va")->IsI32());
  REQUIRE(variant_field->GetVariant()->GetField("vb"));
  REQUIRE(variant_field->GetVariant()->GetField("vb")->IsStr());
}

TEST_CASE("Variant with an nested vector", "[variant]") {
  TestParser parser(R"(
typedef=alpha;
module test;

variant SomeVariant22 {
  vector NestedVector<i32>;
};
    )");
  REQUIRE(!parser.Parse());
  auto var = parsed_file->mod->GetVariant("SomeVariant22");
  REQUIRE(var);

  auto vector_field = var->GetType("NestedVector");
  REQUIRE(vector_field);
  REQUIRE(vector_field->IsVector());
  REQUIRE(vector_field->GetVector());
  REQUIRE(vector_field->GetVector()->element_type->IsI32());
}

TEST_CASE("Variant with an nested map", "[variant]") {
  TestParser parser(R"(
typedef=alpha;
module test;

variant SomeVariant23 {
  map NestedMap<i32, f64>;
};
    )");
  REQUIRE(!parser.Parse());
  auto var = parsed_file->mod->GetVariant("SomeVariant23");
  REQUIRE(var);

  auto map_field = var->GetType("NestedMap");
  REQUIRE(map_field);
  REQUIRE(map_field->IsMap());
  REQUIRE(map_field->GetMap());
  REQUIRE(map_field->GetMap()->key_type->IsI32());
  REQUIRE(map_field->GetMap()->value_type->IsF64());
}

TEST_CASE("Variant with an duplicate fields should error", "[variant]") {
  TestParser parser(R"(
typedef=alpha;
module test;

variant SomeVariant {
  an_int: i32;
  an_int: i32;
};
    )");
  REQUIRE(parser.Parse());
  REQUIRE(parsed_file->errors.size() == 1);
  REQUIRE(parsed_file->errors[0].error_type ==
          td::ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Variant with an duplicate types should error", "[variant]") {
  TestParser parser(R"(
typedef=alpha;
module test;

variant SomeVariant {
  variant VariantA {};
  variant VariantA {};
};
    )");
  REQUIRE(parser.Parse());
  REQUIRE(parsed_file->errors.size() == 1);
  REQUIRE(parsed_file->errors[0].error_type ==
          td::ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Variant with an duplicate types of different types should error",
          "[variant]") {
  TestParser parser(R"(
typedef=alpha;
module test;

variant SomeVariant {
  variant TypeA {};
  variant TypeA {};
  vector TypeA<i32>;
  map TypeA<i32, i32>;
};
    )");
  REQUIRE(parser.Parse());
  REQUIRE(parsed_file->errors.size() == 3);
  REQUIRE(parsed_file->errors[0].error_type ==
          td::ParserErrorInfo::DUPLICATE_SYMBOL);
  REQUIRE(parsed_file->errors[1].error_type ==
          td::ParserErrorInfo::DUPLICATE_SYMBOL);
  REQUIRE(parsed_file->errors[2].error_type ==
          td::ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Variant with an duplicate and field names should error", "[variant]") {
  TestParser parser(R"(
typedef=alpha;
module test;

variant SomeVariant {
  a_field: i32;
  variant a_field {};
};
    )");
  REQUIRE(parser.Parse());
  REQUIRE(parsed_file->errors.size() == 1);
  REQUIRE(parsed_file->errors[0].error_type ==
          td::ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Inline variant with an duplicate fields should error", "[variant]") {
  TestParser parser(R"(
typedef=alpha;
module test;

variant SomeVariant {
  inline_variant: variant {
    an_int: i32;
    an_int: i32;
  };
};
    )");
  REQUIRE(parser.Parse());
  REQUIRE(parsed_file->errors.size() == 1);
  REQUIRE(parsed_file->errors[0].error_type ==
          td::ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Inline variant with an duplicate types should error", "[variant]") {
  TestParser parser(R"(
typedef=alpha;
module test;

variant SomeVariant {
  inline_variant: variant {
    variant VariantA {};
    variant VariantA {};
  };
};
    )");
  REQUIRE(parser.Parse());
  REQUIRE(parsed_file->errors.size() == 1);
  REQUIRE(parsed_file->errors[0].error_type ==
          td::ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Inline variant with an duplicate types of different types should error",
          "[variant]") {
  TestParser parser(R"(
typedef=alpha;
module test;

variant SomeVariant {
  inline_variant: variant {
    variant TypeA {};
    variant TypeA {};
    vector TypeA<i32>;
    map TypeA<i32, i32>;
  };
};
    )");
  REQUIRE(parser.Parse());
  REQUIRE(parsed_file->errors.size() == 3);
  REQUIRE(parsed_file->errors[0].error_type ==
          td::ParserErrorInfo::DUPLICATE_SYMBOL);
  REQUIRE(parsed_file->errors[1].error_type ==
          td::ParserErrorInfo::DUPLICATE_SYMBOL);
  REQUIRE(parsed_file->errors[2].error_type ==
          td::ParserErrorInfo::DUPLICATE_SYMBOL);
};

TEST_CASE("Inline variant with an duplicate and field names should error", "[variant]") {
  TestParser parser(R"(
typedef=alpha;
module test;

variant SomeVariant {
  inline_variant: variant {
    a_field: i32;
    variant a_field {};
  };
};
    )");
  REQUIRE(parser.Parse());
  REQUIRE(parsed_file->errors.size() == 1);
  REQUIRE(parsed_file->errors[0].error_type ==
          td::ParserErrorInfo::DUPLICATE_SYMBOL);
};