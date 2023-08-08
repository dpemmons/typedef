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

struct SomeStruct {
  inlineMap: map<i32, f64>;
};

struct SomeOtherStruct {
  ref_to_some_struct: SomeStruct;
};
    )");
  REQUIRE(!parsed_file->HasErrors());

  optional<td::SymbolTable::Value> some_struct_val =
      parsed_file->symbols2_.Get(td::Identifier::TypeIdentifier("SomeStruct"));
  REQUIRE(some_struct_val);
  REQUIRE(holds_alternative<shared_ptr<td::Struct>>(*some_struct_val));

  optional<td::SymbolTable::Value> some_other_struct_val =
      parsed_file->symbols2_.Get(
          td::Identifier::TypeIdentifier("SomeOtherStruct"));
  REQUIRE(some_other_struct_val);
  REQUIRE(holds_alternative<shared_ptr<td::Struct>>(*some_other_struct_val));
  auto s = get<shared_ptr<td::Struct>>(*some_other_struct_val);

  optional<td::SymbolTable::Value> symref_val =
      s->table.Get(td::Identifier::ValueIdentifier("ref_to_some_struct"));
  REQUIRE(symref_val);
  REQUIRE(holds_alternative<td::SymbolRef>(*symref_val));
  td::SymbolRef symref = get<td::SymbolRef>(*symref_val);
  REQUIRE_THAT(symref.id, Equals("SomeStruct"));
}

TEST_CASE("Struct with a symbol reference to an inline value field should fail",
          "[symref]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

struct SomeOtherStruct {
  ref_to_inline: inlineStruct;
  inlineStruct: struct {
    valA: i32;
  };
};
    )");
  REQUIRE(parsed_file->HasErrors());
  REQUIRE(parsed_file->GetErrors().size() == 1);
  REQUIRE(parsed_file->GetErrors()[0].error_type ==
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

  optional<td::SymbolTable::Value> some_struct_val =
      parsed_file->symbols2_.Get(
          td::Identifier::TypeIdentifier("SomeStruct"));
  REQUIRE(some_struct_val);
  REQUIRE(holds_alternative<shared_ptr<td::Struct>>(*some_struct_val));
  auto s = get<shared_ptr<td::Struct>>(*some_struct_val);

  optional<td::SymbolTable::Value> symref_val =
      s->table.Get(td::Identifier::ValueIdentifier("ref_to_nested"));
  REQUIRE(symref_val);
  REQUIRE(holds_alternative<td::SymbolRef>(*symref_val));
  td::SymbolRef symref = get<td::SymbolRef>(*symref_val);
  REQUIRE_THAT(symref.id, Equals("NestedStruct"));
}

// This isn't the ideal location for this test, but right now
// there's isn't a better spot for it.
TEST_CASE("Duplicate structs", "[symref]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

struct SomeStruct {
  inlineMap: map<i32, f64>;
};

struct SomeStruct {
  inlineMap: map<i32, f64>;
};
    )");
  REQUIRE(parsed_file->HasErrors());
  REQUIRE(parsed_file->GetErrors().size() == 1);
  // TODO this should be something like DUPLICATE_SYMBOL
  REQUIRE(parsed_file->GetErrors()[0].error_type ==
          td::ParserErrorInfo::PARSE_ERROR);
}
