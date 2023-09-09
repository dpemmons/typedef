#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <memory>
#include <sstream>
#include <string>
#include <variant>

#include "libtypedef/parser/typedef_parser.h"

using namespace std;
using namespace td;
using Catch::Matchers::Equals;
using Catch::Matchers::SizeIs;
#if 0
TEST_CASE("Struct with a symbol reference to another struct", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeUninvolvedStruct {
  asdf: str;
};

struct SomeStruct {
  inlineMap: map<i32, f64>;
};

struct SomeOtherUninvolvedStruct {
  qwer: i32;
};

struct SomeOtherStruct {
  ref_to_some_struct: SomeStruct;
};
    )");
  REQUIRE(!parser.Parse());
  auto st = parsed_file->mod->GetStruct("SomeOtherStruct");
  REQUIRE(st->GetField("ref_to_some_struct")->SymrefIsResolved());

  // Test that the reference resolves to the right thing.
  auto target = st->GetField("ref_to_some_struct")->Symref();
  REQUIRE(target);
  REQUIRE(target->IsStruct());
  REQUIRE(target->HasStructIdentifier("SomeStruct"));
  REQUIRE(target->GetStruct()->GetField("inlineMap"));
}

TEST_CASE("Struct with a symbol reference to an non-existant type should fail",
          "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeOtherStruct {
  asdf: DoesNotExist;
};
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parsed_file->errors[0].error_type ==
          ParserErrorInfo::UNRESOLVED_SYMBOL_REFERENCE);
}

TEST_CASE("Struct with a symbol reference to an inline value field should fail",
          "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  ref_to_inline: inlineStruct;
  inlineStruct: struct {
    valA: i32;
  };
};
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parsed_file->errors[0].error_type ==
          ParserErrorInfo::UNRESOLVED_SYMBOL_REFERENCE);
}

TEST_CASE("Struct with a symbol reference to an nested struct", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  ref_to_nested: NestedStruct;
  struct NestedStruct {
    valA: i32;
  };
};
    )");
  REQUIRE(!parser.Parse());

  auto st = parsed_file->mod->GetStruct("SomeStruct");
  REQUIRE(st->GetField("ref_to_nested"));

  // Test that the reference resolves to the right thing.
  auto target = st->GetField("ref_to_nested")->Symref();
  REQUIRE(target);
  REQUIRE(target->IsStruct());
  REQUIRE(target->HasStructIdentifier("NestedStruct"));
  REQUIRE(target->GetStruct()->GetField("valA"));
}

TEST_CASE("Inline struct with a symbol reference to an nested struct",
          "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  inline_struct: struct {
    nested_struct: NestedStruct;
  };
  struct NestedStruct {
    valA: i32;
  };
};
    )");
  REQUIRE(!parser.Parse());
  auto st = parsed_file->mod->GetStruct("SomeStruct");

  auto target = st->GetField("inline_struct")
                    ->GetStruct()
                    ->GetField("nested_struct")
                    ->Symref();
  REQUIRE(target);
  REQUIRE(target->IsStruct());
  REQUIRE(target->HasStructIdentifier("NestedStruct"));
  REQUIRE(target->GetStruct()->GetField("valA"));
}

TEST_CASE("Struct with a symbol reference to a vector type", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

vector VecA<u8>;

struct SomeStruct {
  vec_a: VecA;
};
    )");
  REQUIRE(!parser.Parse());

  auto st = parsed_file->mod->GetStruct("SomeStruct");
  REQUIRE(st->GetField("vec_a"));

  // Test that the reference resolves to the right thing.
  auto target = st->GetField("vec_a")->Symref();
  REQUIRE(target);
  REQUIRE(target->IsVector());
  REQUIRE(*target->GetIdentifier() == "VecA");
}

TEST_CASE("Struct with a symbol reference to a variant type", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant VariantA {
  a: bool;
  b: i8;
};

struct SomeStruct {
  var_a: VariantA;
};
    )");
  REQUIRE(!parser.Parse());

  auto st = parsed_file->mod->GetStruct("SomeStruct");
  REQUIRE(st->GetField("var_a"));

  // Test that the reference resolves to the right thing.
  auto target = st->GetField("var_a")->Symref();
  REQUIRE(target);
  REQUIRE(target->IsVariant());
  REQUIRE(*target->GetIdentifier() == "VariantA");
}

TEST_CASE("Struct with a symbol reference to a map type", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

map MapA<i32, str>;

struct SomeStruct {
  map_a: MapA;
};
    )");
  REQUIRE(!parser.Parse());

  auto st = parsed_file->mod->GetStruct("SomeStruct");
  REQUIRE(st->GetField("map_a"));

  // Test that the reference resolves to the right thing.
  auto target = st->GetField("map_a")->Symref();
  REQUIRE(target);
  REQUIRE(target->IsMap());
  REQUIRE(*target->GetIdentifier() == "MapA");
}

TEST_CASE("Variant with a symbol reference to a struct type", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  an_int: i32;
};

variant SomeVariant {
  a_str: str;
  some_struct: SomeStruct;
};

    )");
  REQUIRE(!parser.Parse());

  auto var = parsed_file->mod->GetVariant("SomeVariant");
  REQUIRE(var->GetField("some_struct"));

  // Test that the reference resolves to the right thing.
  auto target = var->GetField("some_struct")->Symref();
  REQUIRE(target);
  REQUIRE(target->IsStruct());
  REQUIRE(*target->GetIdentifier() == "SomeStruct");
}

TEST_CASE("Variant with a symbol reference to another variant type",
          "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeOtherVariant {
  an_int: i32;
  another_int: i64;
};

variant SomeVariant {
  a_str: str;
  some_other_variant: SomeOtherVariant;
};
    )");
  REQUIRE(!parser.Parse());

  auto var = parsed_file->mod->GetVariant("SomeVariant");
  REQUIRE(var->GetField("some_other_variant"));

  // Test that the reference resolves to the right thing.
  auto target = var->GetField("some_other_variant")->Symref();
  REQUIRE(target);
  REQUIRE(target->IsVariant());
  REQUIRE(*target->GetIdentifier() == "SomeOtherVariant");
}

TEST_CASE("Variant with a symbol reference to a vector type", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

vector VecA<u8>;

variant SomeVariant {
  a_str: str;
  vec_a: VecA;
};
    )");
  REQUIRE(!parser.Parse());

  auto var = parsed_file->mod->GetVariant("SomeVariant");
  REQUIRE(var->GetField("vec_a"));

  // Test that the reference resolves to the right thing.
  auto target = var->GetField("vec_a")->Symref();
  REQUIRE(target);
  REQUIRE(target->IsVector());
  REQUIRE(*target->GetIdentifier() == "VecA");
}

TEST_CASE("Variant with a symbol reference to a map type", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

map MapA<i32, str>;

variant SomeVariant {
  a_str: str;
  map_a: MapA;
};
    )");
  REQUIRE(!parser.Parse());

  auto var = parsed_file->mod->GetVariant("SomeVariant");
  REQUIRE(var->GetField("map_a"));

  // Test that the reference resolves to the right thing.
  auto target = var->GetField("map_a")->Symref();
  REQUIRE(target);
  REQUIRE(target->IsMap());
  REQUIRE(*target->GetIdentifier() == "MapA");
}

TEST_CASE("Vector with a symbol reference to a struct type", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  an_int: i32;
};

vector SomeVector<SomeStruct>;

    )");
  REQUIRE(!parser.Parse());

  auto vec = parsed_file->mod->GetVector("SomeVector");
  REQUIRE(vec->element_type->IsSymref());
  REQUIRE(vec->element_type->SymrefIsResolved());
  REQUIRE(*vec->element_type->Symref()->GetIdentifier() == "SomeStruct");
  REQUIRE(vec->element_type->Symref()->GetStruct()->GetField("an_int"));
}

TEST_CASE("Vector with a symbol reference to a variant type", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeOtherVariant {
  an_int: i32;
  another_int: i64;
};

vector SomeVector<SomeOtherVariant>;
    )");
  REQUIRE(!parser.Parse());

  auto vec = parsed_file->mod->GetVector("SomeVector");
  REQUIRE(vec->element_type->IsSymref());
  REQUIRE(vec->element_type->SymrefIsResolved());
  REQUIRE(*vec->element_type->Symref()->GetIdentifier() == "SomeOtherVariant");
  REQUIRE(vec->element_type->Symref()->GetVariant()->GetField("an_int"));
}

TEST_CASE("Vector with a symbol reference to another vector type", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

vector VecA<u8>;

vector SomeVector<VecA>;
    )");
  REQUIRE(!parser.Parse());

  auto vec = parsed_file->mod->GetVector("SomeVector");
  REQUIRE(vec->element_type->IsSymref());
  REQUIRE(vec->element_type->SymrefIsResolved());
  REQUIRE(*vec->element_type->Symref()->GetIdentifier() == "VecA");
  REQUIRE(vec->element_type->Symref()->GetVector()->element_type->IsU8());
}

TEST_CASE("Vector with a symbol reference to a map type", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

map MapA<i32, str>;

vector SomeVector<MapA>;
    )");
  REQUIRE(!parser.Parse());

  auto vec = parsed_file->mod->GetVector("SomeVector");
  REQUIRE(vec->element_type->IsSymref());
  REQUIRE(vec->element_type->SymrefIsResolved());
  REQUIRE(*vec->element_type->Symref()->GetIdentifier() == "MapA");
  REQUIRE(vec->element_type->Symref()->GetMap()->key_type->IsI32());
}

TEST_CASE("Map with a symbol reference to a struct type", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  an_int: i32;
};

map SomeMap<i32, SomeStruct>;

    )");
  REQUIRE(!parser.Parse());

  auto map = parsed_file->mod->GetMap("SomeMap");
  REQUIRE(map->value_type->IsSymref());
  REQUIRE(map->value_type->SymrefIsResolved());
  REQUIRE(*map->value_type->Symref()->GetIdentifier() == "SomeStruct");
  REQUIRE(map->value_type->Symref()->GetStruct()->GetField("an_int")->IsI32());
}

TEST_CASE("Map with a symbol reference to a variant type", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeVariant {
  an_int: i32;
  another_int: i64;
};

map SomeMap<i32, SomeVariant>;
    )");
  REQUIRE(!parser.Parse());

  auto map = parsed_file->mod->GetMap("SomeMap");
  REQUIRE(map->value_type->IsSymref());
  REQUIRE(map->value_type->SymrefIsResolved());
  REQUIRE(*map->value_type->Symref()->GetIdentifier() == "SomeVariant");
  REQUIRE(map->value_type->Symref()->GetVariant()->GetField("an_int")->IsI32());
}

TEST_CASE("Map with a symbol reference to a vector type", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

vector VecA<u8>;

map SomeMap<i32, VecA>;
    )");
  REQUIRE(!parser.Parse());

  auto map = parsed_file->mod->GetMap("SomeMap");
  REQUIRE(map->value_type->IsSymref());
  REQUIRE(map->value_type->SymrefIsResolved());
  REQUIRE(*map->value_type->Symref()->GetIdentifier() == "VecA");
  REQUIRE(map->value_type->Symref()->GetVector()->element_type->IsU8());
}

TEST_CASE("Map with a symbol reference to another map type", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

map MapA<i32, str>;

map SomeMap<i32, MapA>;
    )");
  REQUIRE(!parser.Parse());

  auto map = parsed_file->mod->GetMap("SomeMap");
  REQUIRE(map->value_type->IsSymref());
  REQUIRE(map->value_type->SymrefIsResolved());
  REQUIRE(*map->value_type->Symref()->GetIdentifier() == "MapA");
  REQUIRE(map->value_type->Symref()->GetMap()->key_type->IsI32());
}
#endif