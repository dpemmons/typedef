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

TEST_CASE("Struct with primitive unvalued fields", "[struct]") {
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

  auto type = parsed_file->mod->Get("SomeStruct");
  REQUIRE(type);
  REQUIRE(type->declaration_type == td::table::Type::TYPE_STRUCT);

  // REQUIRE(s->table.Get(td::Identifier::ValueIdentifier("example_bool")));
  // REQUIRE(s->table.Get(td::Identifier::ValueIdentifier("example_char")));
  // REQUIRE(s->table.Get(td::Identifier::ValueIdentifier("example_str")));
  // REQUIRE(s->table.Get(td::Identifier::ValueIdentifier("example_f32")));
  // REQUIRE(s->table.Get(td::Identifier::ValueIdentifier("example_f64")));
  // REQUIRE(s->table.Get(td::Identifier::ValueIdentifier("example_u8")));
  // REQUIRE(s->table.Get(td::Identifier::ValueIdentifier("example_u16")));
  // REQUIRE(s->table.Get(td::Identifier::ValueIdentifier("example_u32")));
  // REQUIRE(s->table.Get(td::Identifier::ValueIdentifier("example_u64")));
  // REQUIRE(s->table.Get(td::Identifier::ValueIdentifier("example_i8")));
  // REQUIRE(s->table.Get(td::Identifier::ValueIdentifier("example_i16")));
  // REQUIRE(s->table.Get(td::Identifier::ValueIdentifier("example_i32")));
  // REQUIRE(s->table.Get(td::Identifier::ValueIdentifier("example_i64")));
}

TEST_CASE("Struct with primitive valued fields", "[struct]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

struct SomeStruct {
  example_bool: bool = true;
  example_char: char = '🔥';
  example_str: str = "hello world";
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

  auto type = parsed_file->mod->Get("SomeStruct");
  REQUIRE(type);
  REQUIRE(type->declaration_type == td::table::Type::TYPE_STRUCT);

  // auto b = s->table.Get(td::Identifier::ValueIdentifier("example_bool"));
  // REQUIRE(b);
  // REQUIRE(holds_alternative<optional<bool>>(*b));
  // REQUIRE(get<optional<bool>>(*b).value());  // == true

  // auto c = s->table.Get(td::Identifier::ValueIdentifier("example_char"));
  // REQUIRE(c);
  // REQUIRE(holds_alternative<optional<char32_t>>(*c));
  // REQUIRE(get<optional<char32_t>>(*c).value() == U'🔥');

  // auto str = s->table.Get(td::Identifier::ValueIdentifier("example_str"));
  // REQUIRE(str);
  // REQUIRE(holds_alternative<optional<string>>(*str));
  // REQUIRE_THAT(get<optional<string>>(*str).value(), Equals("hello world"));

  // auto f32 = s->table.Get(td::Identifier::ValueIdentifier("example_f32"));
  // REQUIRE(f32);
  // REQUIRE(holds_alternative<optional<float>>(*f32));
  // REQUIRE(get<optional<float>>(*f32).value() == 3.14f);

  // auto f64 = s->table.Get(td::Identifier::ValueIdentifier("example_f64"));
  // REQUIRE(f64);
  // REQUIRE(holds_alternative<optional<double>>(*f64));
  // REQUIRE(get<optional<double>>(*f64).value() == 5.16);

  // auto u8 = s->table.Get(td::Identifier::ValueIdentifier("example_u8"));
  // REQUIRE(u8);
  // REQUIRE(holds_alternative<optional<uint8_t>>(*u8));
  // REQUIRE(get<optional<uint8_t>>(*u8).value() == 8);
  // auto u16 = s->table.Get(td::Identifier::ValueIdentifier("example_u16"));
  // REQUIRE(u16);
  // REQUIRE(holds_alternative<optional<uint16_t>>(*u16));
  // REQUIRE(get<optional<uint16_t>>(*u16).value() == 16);
  // auto u32 = s->table.Get(td::Identifier::ValueIdentifier("example_u32"));
  // REQUIRE(u32);
  // REQUIRE(holds_alternative<optional<uint32_t>>(*u32));
  // REQUIRE(get<optional<uint32_t>>(*u32).value() == 32);
  // auto u64 = s->table.Get(td::Identifier::ValueIdentifier("example_u64"));
  // REQUIRE(u64);
  // REQUIRE(holds_alternative<optional<uint64_t>>(*u64));
  // REQUIRE(get<optional<uint64_t>>(*u64).value() == 64);

  // auto i8 = s->table.Get(td::Identifier::ValueIdentifier("example_i8"));
  // REQUIRE(i8);
  // REQUIRE(holds_alternative<optional<int8_t>>(*i8));
  // REQUIRE(get<optional<int8_t>>(*i8).value() == -8);
  // auto i16 = s->table.Get(td::Identifier::ValueIdentifier("example_i16"));
  // REQUIRE(i16);
  // REQUIRE(holds_alternative<optional<int16_t>>(*i16));
  // REQUIRE(get<optional<int16_t>>(*i16).value() == -16);
  // auto i32 = s->table.Get(td::Identifier::ValueIdentifier("example_i32"));
  // REQUIRE(i32);
  // REQUIRE(holds_alternative<optional<int32_t>>(*i32));
  // REQUIRE(get<optional<int32_t>>(*i32).value() == -32);
  // auto i64 = s->table.Get(td::Identifier::ValueIdentifier("example_i64"));
  // REQUIRE(i64);
  // REQUIRE(holds_alternative<optional<int64_t>>(*i64));
  // REQUIRE(get<optional<int64_t>>(*i64).value() == -64);
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

  auto type = parsed_file->mod->Get("SomeStruct");
  REQUIRE(type);
  REQUIRE(type->declaration_type == td::table::Type::TYPE_STRUCT);

  // optional<td::SymbolTable::Value> value =
  //     parsed_file->symbols2_.Get(td::Identifier::TypeIdentifier("SomeStruct"));
  // REQUIRE(value);
  // REQUIRE(holds_alternative<shared_ptr<td::Struct>>(*value));
  // auto s = get<shared_ptr<td::Struct>>(*value);

  // optional<td::SymbolTable::Value> struct_val =
  //     s->table.Get(td::Identifier::ValueIdentifier("an_inline_struct"));
  // REQUIRE(struct_val);
  // REQUIRE(holds_alternative<shared_ptr<td::Struct>>(*struct_val));
  // shared_ptr<td::Struct> the_sturct = get<shared_ptr<td::Struct>>(*struct_val);
  // REQUIRE(the_sturct);
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

  auto type = parsed_file->mod->Get("SomeStruct");
  REQUIRE(type);
  REQUIRE(type->declaration_type == td::table::Type::TYPE_STRUCT);

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

  auto type = parsed_file->mod->Get("SomeStruct");
  REQUIRE(type);
  REQUIRE(type->declaration_type == td::table::Type::TYPE_STRUCT);

  // optional<td::SymbolTable::Value> value =
  //     parsed_file->symbols2_.Get(td::Identifier::TypeIdentifier("SomeStruct"));
  // REQUIRE(value);
  // REQUIRE(holds_alternative<shared_ptr<td::Struct>>(*value));
  // auto s = get<shared_ptr<td::Struct>>(*value);

  // optional<td::SymbolTable::Value> vector_val =
  //     s->table.Get(td::Identifier::ValueIdentifier("inlineVector"));
  // REQUIRE(vector_val);
  // REQUIRE(holds_alternative<shared_ptr<td::Vector>>(*vector_val));
  // shared_ptr<td::Vector> the_vector = get<shared_ptr<td::Vector>>(*vector_val);
  // REQUIRE(the_vector);
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

  auto type = parsed_file->mod->Get("SomeStruct");
  REQUIRE(type);
  REQUIRE(type->declaration_type == td::table::Type::TYPE_STRUCT);

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
