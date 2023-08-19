#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <memory>
#include <sstream>
#include <string>
#include <variant>

#include "libtypedef/parser/typedef_parser.h"

using namespace std;
using Catch::Matchers::Equals;
using Catch::Matchers::SizeIs;

namespace {
const std::vector<td::ParserErrorInfo> empty_errors;
}  // namespace

TEST_CASE("Struct with explictly typed primitive fields", "[struct]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
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
};
    )");
  REQUIRE(!parsed_file->HasErrors());

  std::shared_ptr<td::table::TypeDeclaration> ss =
      parsed_file->mod->Get("SomeStruct");
  auto st = parsed_file->mod->GetStruct("SomeStruct");
  REQUIRE(st);

  REQUIRE(st->GetField("example_bool"));
  REQUIRE(st->GetField("example_bool")->IsBool());
  REQUIRE(st->GetField("example_char"));
  REQUIRE(st->GetField("example_char")->IsChar());
  REQUIRE(st->GetField("example_str"));
  REQUIRE(st->GetField("example_str")->IsStr());
  REQUIRE(st->GetField("example_f32"));
  REQUIRE(st->GetField("example_f32")->IsF32());
  REQUIRE(st->GetField("example_f64"));
  REQUIRE(st->GetField("example_f64")->IsF64());
  REQUIRE(st->GetField("example_u8"));
  REQUIRE(st->GetField("example_u8")->IsU8());
  REQUIRE(st->GetField("example_u16"));
  REQUIRE(st->GetField("example_u16")->IsU16());
  REQUIRE(st->GetField("example_u32"));
  REQUIRE(st->GetField("example_u32")->IsU32());
  REQUIRE(st->GetField("example_u64"));
  REQUIRE(st->GetField("example_u64")->IsU64());
  REQUIRE(st->GetField("example_i8"));
  REQUIRE(st->GetField("example_i8")->IsI8());
  REQUIRE(st->GetField("example_i16"));
  REQUIRE(st->GetField("example_i16")->IsI16());
  REQUIRE(st->GetField("example_i32"));
  REQUIRE(st->GetField("example_i32")->IsI32());
  REQUIRE(st->GetField("example_i64"));
  REQUIRE(st->GetField("example_i64")->IsI64());
}

TEST_CASE(
    "Struct with explictly typed primitive fields and bool, char and string "
    "literals",
    "[struct]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

struct SomeStruct {
  example_bool: bool = true;
  example_char: char = '🔥';
  example_str: str = "hello world";
};
    )");
  REQUIRE(!parsed_file->HasErrors());
  std::shared_ptr<td::table::TypeDeclaration> ss =
      parsed_file->mod->Get("SomeStruct");
  auto st = parsed_file->mod->GetStruct("SomeStruct");
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
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

struct SomeStruct {
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
  REQUIRE(!parsed_file->HasErrors());
  std::shared_ptr<td::table::TypeDeclaration> ss =
      parsed_file->mod->Get("SomeStruct");
  auto st = parsed_file->mod->GetStruct("SomeStruct");
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
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

struct SomeStruct {
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
  REQUIRE(!parsed_file->HasErrors());
  std::shared_ptr<td::table::TypeDeclaration> ss =
      parsed_file->mod->Get("SomeStruct");
  auto st = parsed_file->mod->GetStruct("SomeStruct");
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
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

struct SomeStruct {
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
  REQUIRE(!parsed_file->HasErrors());
  std::shared_ptr<td::table::TypeDeclaration> ss =
      parsed_file->mod->Get("SomeStruct");
  auto st = parsed_file->mod->GetStruct("SomeStruct");
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
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

struct SomeStruct {
  example_bool = true;
  example_char = '🔥';
  example_str = "hello world";
  example_f32 = 3.14;
  example_i32 = -32;
};
    )");
  REQUIRE(!parsed_file->HasErrors());
  std::shared_ptr<td::table::TypeDeclaration> ss =
      parsed_file->mod->Get("SomeStruct");
  auto st = parsed_file->mod->GetStruct("SomeStruct");
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
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

struct SomeStruct {
  an_inline_struct: struct {
    a: i32;
  };
};
    )");
  REQUIRE(!parsed_file->HasErrors());
  auto st = parsed_file->mod->GetStruct("SomeStruct");
  REQUIRE(st);

  // optional<td::SymbolTable::Value> value =
  //     parsed_file->symbols2_.Get(td::Identifier::TypeIdentifier("SomeStruct"));
  // REQUIRE(value);
  // REQUIRE(holds_alternative<shared_ptr<td::Struct>>(*value));
  // auto s = get<shared_ptr<td::Struct>>(*value);

  // optional<td::SymbolTable::Value> struct_val =
  //     s->table.Get(td::Identifier::ValueIdentifier("an_inline_struct"));
  // REQUIRE(struct_val);
  // REQUIRE(holds_alternative<shared_ptr<td::Struct>>(*struct_val));
  // shared_ptr<td::Struct> the_sturct =
  // get<shared_ptr<td::Struct>>(*struct_val); REQUIRE(the_sturct);
}

TEST_CASE("Struct with an inline variant", "[struct]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

struct SomeStruct {
  an_inline_variant: variant {
    va: i32;
    vb: str;
  };
};
    )");
  REQUIRE(!parsed_file->HasErrors());

  auto ss = parsed_file->mod->Get("SomeStruct");
  REQUIRE(ss);
  REQUIRE(ss->declaration_type ==
          td::table::NonPrimitiveType::NONPRIMITIVE_TYPE_STRUCT);

  // optional<td::SymbolTable::Value> value =
  //     parsed_file->symbols2_.Get(td::Identifier::TypeIdentifier("SomeStruct"));
  // REQUIRE(value);
  // REQUIRE(holds_alternative<shared_ptr<td::Struct>>(*value));
  // auto s = get<shared_ptr<td::Struct>>(*value);

  // optional<td::SymbolTable::Value> variant_val =
  //     s->table.Get(td::Identifier::ValueIdentifier("an_inline_variant"));
  // REQUIRE(variant_val);
  // REQUIRE(holds_alternative<shared_ptr<td::Variant>>(*variant_val));
  // shared_ptr<td::Variant> the_variant =
  //     get<shared_ptr<td::Variant>>(*variant_val);
  // REQUIRE(the_variant);
}

TEST_CASE("Struct with an inline vector", "[struct]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

struct SomeStruct {
  inlineVector: vector<i32>;
};
    )");
  REQUIRE(!parsed_file->HasErrors());

  auto ss = parsed_file->mod->Get("SomeStruct");
  REQUIRE(ss);
  REQUIRE(ss->declaration_type ==
          td::table::NonPrimitiveType::NONPRIMITIVE_TYPE_STRUCT);

  // optional<td::SymbolTable::Value> value =
  //     parsed_file->symbols2_.Get(td::Identifier::TypeIdentifier("SomeStruct"));
  // REQUIRE(value);
  // REQUIRE(holds_alternative<shared_ptr<td::Struct>>(*value));
  // auto s = get<shared_ptr<td::Struct>>(*value);

  // optional<td::SymbolTable::Value> vector_val =
  //     s->table.Get(td::Identifier::ValueIdentifier("inlineVector"));
  // REQUIRE(vector_val);
  // REQUIRE(holds_alternative<shared_ptr<td::Vector>>(*vector_val));
  // shared_ptr<td::Vector> the_vector =
  // get<shared_ptr<td::Vector>>(*vector_val); REQUIRE(the_vector);
}

TEST_CASE("Struct with an inline map", "[struct]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

struct SomeStruct {
  inlineMap: map<i32, f64>;
};
    )");
  REQUIRE(!parsed_file->HasErrors());

  auto ss = parsed_file->mod->Get("SomeStruct");
  REQUIRE(ss);
  REQUIRE(ss->declaration_type ==
          td::table::NonPrimitiveType::NONPRIMITIVE_TYPE_STRUCT);

  // optional<td::SymbolTable::Value> value =
  //     parsed_file->symbols2_.Get(td::Identifier::TypeIdentifier("SomeStruct"));
  // REQUIRE(value);
  // REQUIRE(holds_alternative<shared_ptr<td::Struct>>(*value));
  // auto s = get<shared_ptr<td::Struct>>(*value);

  // optional<td::SymbolTable::Value> map_val =
  //     s->table.Get(td::Identifier::ValueIdentifier("inlineMap"));
  // REQUIRE(map_val);
  // REQUIRE(holds_alternative<shared_ptr<td::Map>>(*map_val));
  // shared_ptr<td::Map> the_map = get<shared_ptr<td::Map>>(*map_val);
  // REQUIRE(the_map);
}
