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
  REQUIRE(!parser.Parse());
  // REQUIRE(parsed_file->mod->GetMap("SomeBoolMap"));
  // REQUIRE(parsed_file->mod->GetMap("SomeBoolMap")->key_type->IsBool());
  // REQUIRE(parsed_file->mod->GetMap("SomeBoolMap")->value_type->IsStr());

  // REQUIRE(parsed_file->mod->GetMap("SomeCharMap"));
  // REQUIRE(parsed_file->mod->GetMap("SomeCharMap")->key_type->IsChar());
  // REQUIRE(parsed_file->mod->GetMap("SomeCharMap")->value_type->IsStr());

  // REQUIRE(parsed_file->mod->GetMap("SomeU8Map"));
  // REQUIRE(parsed_file->mod->GetMap("SomeU8Map")->key_type->IsU8());
  // REQUIRE(parsed_file->mod->GetMap("SomeU8Map")->value_type->IsStr());

  // REQUIRE(parsed_file->mod->GetMap("SomeU16Map"));
  // REQUIRE(parsed_file->mod->GetMap("SomeU16Map")->key_type->IsU16());
  // REQUIRE(parsed_file->mod->GetMap("SomeU16Map")->value_type->IsStr());

  // REQUIRE(parsed_file->mod->GetMap("SomeU32Map"));
  // REQUIRE(parsed_file->mod->GetMap("SomeU32Map")->key_type->IsU32());
  // REQUIRE(parsed_file->mod->GetMap("SomeU32Map")->value_type->IsStr());

  // REQUIRE(parsed_file->mod->GetMap("SomeU64Map"));
  // REQUIRE(parsed_file->mod->GetMap("SomeU64Map")->key_type->IsU64());
  // REQUIRE(parsed_file->mod->GetMap("SomeU64Map")->value_type->IsStr());

  // REQUIRE(parsed_file->mod->GetMap("SomeI8Map"));
  // REQUIRE(parsed_file->mod->GetMap("SomeI8Map")->key_type->IsI8());
  // REQUIRE(parsed_file->mod->GetMap("SomeI8Map")->value_type->IsStr());

  // REQUIRE(parsed_file->mod->GetMap("SomeI16Map"));
  // REQUIRE(parsed_file->mod->GetMap("SomeI16Map")->key_type->IsI16());
  // REQUIRE(parsed_file->mod->GetMap("SomeI16Map")->value_type->IsStr());

  // REQUIRE(parsed_file->mod->GetMap("SomeI32Map"));
  // REQUIRE(parsed_file->mod->GetMap("SomeI32Map")->key_type->IsI32());
  // REQUIRE(parsed_file->mod->GetMap("SomeI32Map")->value_type->IsStr());

  // REQUIRE(parsed_file->mod->GetMap("SomeI64Map"));
  // REQUIRE(parsed_file->mod->GetMap("SomeI64Map")->key_type->IsI64());
  // REQUIRE(parsed_file->mod->GetMap("SomeI64Map")->value_type->IsStr());

  // REQUIRE(parsed_file->mod->GetMap("SomeStrMap"));
  // REQUIRE(parsed_file->mod->GetMap("SomeStrMap")->key_type->IsStr());
  // REQUIRE(parsed_file->mod->GetMap("SomeStrMap")->value_type->IsStr());
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