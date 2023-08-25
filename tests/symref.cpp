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

TEST_CASE("Struct with a symbol reference to another struct", "[symref]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
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
  REQUIRE(!parsed_file->HasErrors());
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
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

struct SomeOtherStruct {
  asdf: DoesNotExist;
};
    )");
  REQUIRE(parsed_file->HasErrors());
  REQUIRE(parsed_file->errors.size() == 1);
  REQUIRE(parsed_file->errors[0].error_type ==
          td::ParserErrorInfo::UNRESOLVED_SYMBOL_REFERENCE);
}

TEST_CASE("Struct with a symbol reference to an inline value field should fail",
          "[symref]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

struct SomeStruct {
  ref_to_inline: inlineStruct;
  inlineStruct: struct {
    valA: i32;
  };
};
    )");
  REQUIRE(parsed_file->HasErrors());
  REQUIRE(parsed_file->errors.size() == 1);
  REQUIRE(parsed_file->errors[0].error_type ==
          td::ParserErrorInfo::UNRESOLVED_SYMBOL_REFERENCE);
}

TEST_CASE("Struct with a symbol reference to an nested struct", "[symref]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

struct SomeStruct {
  ref_to_nested: NestedStruct;
  struct NestedStruct {
    valA: i32;
  };
};
    )");
  REQUIRE(!parsed_file->HasErrors());

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
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
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
  REQUIRE(!parsed_file->HasErrors());
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
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

vector VecA<u8>;

struct SomeStruct {
  vec_a: VecA;
};
    )");
  REQUIRE(!parsed_file->HasErrors());

  auto st = parsed_file->mod->GetStruct("SomeStruct");
  REQUIRE(st->GetField("vec_a"));

  // Test that the reference resolves to the right thing.
  auto target = st->GetField("vec_a")->Symref();
  REQUIRE(target);
  REQUIRE(target->IsVector());
  REQUIRE(*target->GetIdentifier() == "VecA");
}

TEST_CASE("Struct with a symbol reference to a variant type", "[symref]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
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
  REQUIRE(!parsed_file->HasErrors());

  auto st = parsed_file->mod->GetStruct("SomeStruct");
  REQUIRE(st->GetField("var_a"));

  // Test that the reference resolves to the right thing.
  auto target = st->GetField("var_a")->Symref();
  REQUIRE(target);
  REQUIRE(target->IsVariant());
  REQUIRE(*target->GetIdentifier() == "VariantA");
}

TEST_CASE("Struct with a symbol reference to a map type", "[symref]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

map MapA<i32, str>;

struct SomeStruct {
  map_a: MapA;
};
    )");
  REQUIRE(!parsed_file->HasErrors());

  auto st = parsed_file->mod->GetStruct("SomeStruct");
  REQUIRE(st->GetField("map_a"));

  // Test that the reference resolves to the right thing.
  auto target = st->GetField("map_a")->Symref();
  REQUIRE(target);
  REQUIRE(target->IsMap());
  REQUIRE(*target->GetIdentifier() == "MapA");
}

TEST_CASE("Variant with a symbol reference to a struct type", "[symref]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
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
  REQUIRE(!parsed_file->HasErrors());

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
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
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
  REQUIRE(!parsed_file->HasErrors());

  auto var = parsed_file->mod->GetVariant("SomeVariant");
  REQUIRE(var->GetField("some_other_variant"));

  // Test that the reference resolves to the right thing.
  auto target = var->GetField("some_other_variant")->Symref();
  REQUIRE(target);
  REQUIRE(target->IsVariant());
  REQUIRE(*target->GetIdentifier() == "SomeOtherVariant");
}

TEST_CASE("Variant with a symbol reference to a vector type", "[symref]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

vector VecA<u8>;

variant SomeVariant {
  a_str: str;
  vec_a: VecA;
};
    )");
  REQUIRE(!parsed_file->HasErrors());

  auto var = parsed_file->mod->GetVariant("SomeVariant");
  REQUIRE(var->GetField("vec_a"));

  // Test that the reference resolves to the right thing.
  auto target = var->GetField("vec_a")->Symref();
  REQUIRE(target);
  REQUIRE(target->IsVector());
  REQUIRE(*target->GetIdentifier() == "VecA");
}

TEST_CASE("Variant with a symbol reference to a map type", "[symref]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

map MapA<i32, str>;

variant SomeVariant {
  a_str: str;
  map_a: MapA;
};
    )");
  REQUIRE(!parsed_file->HasErrors());

  auto var = parsed_file->mod->GetVariant("SomeVariant");
  REQUIRE(var->GetField("map_a"));

  // Test that the reference resolves to the right thing.
  auto target = var->GetField("map_a")->Symref();
  REQUIRE(target);
  REQUIRE(target->IsMap());
  REQUIRE(*target->GetIdentifier() == "MapA");
}

#if 0

TEST_CASE("Vector with a symbol reference to a struct type", "[symref]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

struct SomeStruct {
  an_int: i32;
};

vector SomeVector<SomeStruct>;

    )");
  REQUIRE(!parsed_file->HasErrors());

  // optional<td::SymbolTable::Value> some_vec_value =
  //     parsed_file->symbols2_.Get(td::Identifier::TypeIdentifier("SomeVector"));
  // REQUIRE(some_vec_value);
  // REQUIRE(holds_alternative<shared_ptr<td::Vector>>(*some_vec_value));
  // auto s = get<shared_ptr<td::Vector>>(*some_vec_value);

  // REQUIRE(holds_alternative<td::SymbolRef>(s->type));
  // REQUIRE_THAT(get<td::SymbolRef>(s->type).id, Equals("SomeStruct"));
}

TEST_CASE("Vector with a symbol reference to a variant type", "[symref]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

variant SomeOtherVariant {
  an_int: i32;
  another_int: i64;
};

vector SomeVector<SomeOtherVariant>;
    )");
  REQUIRE(!parsed_file->HasErrors());

  // optional<td::SymbolTable::Value> some_vec_value =
  //     parsed_file->symbols2_.Get(td::Identifier::TypeIdentifier("SomeVector"));
  // REQUIRE(some_vec_value);
  // REQUIRE(holds_alternative<shared_ptr<td::Vector>>(*some_vec_value));
  // auto s = get<shared_ptr<td::Vector>>(*some_vec_value);

  // REQUIRE(holds_alternative<td::SymbolRef>(s->type));
  // REQUIRE_THAT(get<td::SymbolRef>(s->type).id, Equals("SomeOtherVariant"));
}

TEST_CASE("Vector with a symbol reference to another vector type", "[symref]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

vector VecA<u8>;

vector SomeVector<VecA>;
    )");
  REQUIRE(!parsed_file->HasErrors());

  // optional<td::SymbolTable::Value> some_vec_value =
  //     parsed_file->symbols2_.Get(td::Identifier::TypeIdentifier("SomeVector"));
  // REQUIRE(some_vec_value);
  // REQUIRE(holds_alternative<shared_ptr<td::Vector>>(*some_vec_value));
  // auto s = get<shared_ptr<td::Vector>>(*some_vec_value);

  // REQUIRE(holds_alternative<td::SymbolRef>(s->type));
  // REQUIRE_THAT(get<td::SymbolRef>(s->type).id, Equals("VecA"));
}

TEST_CASE("Vector with a symbol reference to a map type", "[symref]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

map MapA<i32, str>;

vector SomeVector<MapA>;
    )");
  REQUIRE(!parsed_file->HasErrors());

  // optional<td::SymbolTable::Value> some_vec_value =
  //     parsed_file->symbols2_.Get(td::Identifier::TypeIdentifier("SomeVector"));
  // REQUIRE(some_vec_value);
  // REQUIRE(holds_alternative<shared_ptr<td::Vector>>(*some_vec_value));
  // auto s = get<shared_ptr<td::Vector>>(*some_vec_value);

  // REQUIRE(holds_alternative<td::SymbolRef>(s->type));
  // REQUIRE_THAT(get<td::SymbolRef>(s->type).id, Equals("MapA"));
}

TEST_CASE("Map with a symbol reference to a struct type", "[symref]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

struct SomeStruct {
  an_int: i32;
};

map SomeMap<i32, SomeStruct>;

    )");
  REQUIRE(!parsed_file->HasErrors());

  // optional<td::SymbolTable::Value> some_map_val =
  //     parsed_file->symbols2_.Get(td::Identifier::TypeIdentifier("SomeMap"));
  // REQUIRE(some_map_val);
  // REQUIRE(holds_alternative<shared_ptr<td::Map>>(*some_map_val));
  // auto s = get<shared_ptr<td::Map>>(*some_map_val);

  // REQUIRE(holds_alternative<td::SymbolRef>(s->value_type));
  // REQUIRE_THAT(get<td::SymbolRef>(s->value_type).id, Equals("SomeStruct"));
}

TEST_CASE("Map with a symbol reference to a variant type", "[symref]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

variant SomeVariant {
  an_int: i32;
  another_int: i64;
};

map SomeMap<i32, SomeVariant>;
    )");
  REQUIRE(!parsed_file->HasErrors());

  // optional<td::SymbolTable::Value> some_map_val =
  //     parsed_file->symbols2_.Get(td::Identifier::TypeIdentifier("SomeMap"));
  // REQUIRE(some_map_val);
  // REQUIRE(holds_alternative<shared_ptr<td::Map>>(*some_map_val));
  // auto s = get<shared_ptr<td::Map>>(*some_map_val);

  // REQUIRE(holds_alternative<td::SymbolRef>(s->value_type));
  // REQUIRE_THAT(get<td::SymbolRef>(s->value_type).id, Equals("SomeVariant"));
}

TEST_CASE("Map with a symbol reference to a vector type", "[symref]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

vector VecA<u8>;

map SomeMap<i32, VecA>;
    )");
  REQUIRE(!parsed_file->HasErrors());

  // optional<td::SymbolTable::Value> some_map_val =
  //     parsed_file->symbols2_.Get(td::Identifier::TypeIdentifier("SomeMap"));
  // REQUIRE(some_map_val);
  // REQUIRE(holds_alternative<shared_ptr<td::Map>>(*some_map_val));
  // auto s = get<shared_ptr<td::Map>>(*some_map_val);

  // REQUIRE(holds_alternative<td::SymbolRef>(s->value_type));
  // REQUIRE_THAT(get<td::SymbolRef>(s->value_type).id, Equals("VecA"));
}

TEST_CASE("Map with a symbol reference to another map type", "[symref]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

map MapA<i32, str>;

map SomeMap<i32, MapA>;
    )");
  REQUIRE(!parsed_file->HasErrors());

  // optional<td::SymbolTable::Value> some_map_val =
  //     parsed_file->symbols2_.Get(td::Identifier::TypeIdentifier("SomeMap"));
  // REQUIRE(some_map_val);
  // REQUIRE(holds_alternative<shared_ptr<td::Map>>(*some_map_val));
  // auto s = get<shared_ptr<td::Map>>(*some_map_val);

  // REQUIRE(holds_alternative<td::SymbolRef>(s->value_type));
  // REQUIRE_THAT(get<td::SymbolRef>(s->value_type).id, Equals("MapA"));
}

#endif