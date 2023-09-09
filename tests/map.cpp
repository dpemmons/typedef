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

TEST_CASE("Map with various scalar key types", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

map SomeBoolMap<bool, str>;
map SomeCharMap<char, str>;
map SomeU8Map<u8, str>;
map SomeU16Map<u16, str>;
map SomeU32Map<u32, str>;
map SomeU64Map<u64, str>;
map SomeI8Map<i8, str>;
map SomeI16Map<i16, str>;
map SomeI32Map<i32, str>;
map SomeI64Map<i64, str>;
map SomeStrMap<str, str>;
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

TEST_CASE("Map with a struct key type should error", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct StructA {
  an_int: i32;
};

map SomeBoolMap<StructA, str>;
    )");
  REQUIRE(parser.Parse());
  // REQUIRE(parsed_file->errors.size() == 1);
  // REQUIRE(parsed_file->errors[0].error_type ==
  //         ParserErrorInfo::TYPE_CONSTRAINT_VIOLATION);
}

TEST_CASE("Map with a float key type should error", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

map SomeBoolMap<f32, str>;
    )");
  REQUIRE(parser.Parse());
  // REQUIRE(parsed_file->errors.size() == 1);
  // REQUIRE(parsed_file->errors[0].error_type ==
  //         ParserErrorInfo::TYPE_CONSTRAINT_VIOLATION);
}

TEST_CASE("Map with a variant key type should error", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant VariantA {
  an_int: i32;
};

map SomeBoolMap<VariantA, str>;
    )");
  REQUIRE(parser.Parse());
  // REQUIRE(parsed_file->errors.size() == 1);
  // REQUIRE(parsed_file->errors[0].error_type ==
  //         ParserErrorInfo::TYPE_CONSTRAINT_VIOLATION);
}

TEST_CASE("Map with a vector key type should error", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

vector VecA<i32>;

map SomeBoolMap<VecA, str>;
    )");
  REQUIRE(parser.Parse());
  // REQUIRE(parsed_file->errors.size() == 1);
  // REQUIRE(parsed_file->errors[0].error_type ==
  //         ParserErrorInfo::TYPE_CONSTRAINT_VIOLATION);
}

TEST_CASE("Map with a map key type should error", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

map MapA<i32, str>;

map SomeBoolMap<MapA, str>;
    )");
  REQUIRE(parser.Parse());
  // REQUIRE(parsed_file->errors.size() == 1);
  // REQUIRE(parsed_file->errors[0].error_type ==
  //         ParserErrorInfo::TYPE_CONSTRAINT_VIOLATION);
}