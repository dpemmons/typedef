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

// template <typename T>
// void AssertType(std::shared_ptr<td::ParsedFile> parsed_file, string name) {
//   optional<td::SymbolTable::Value> some_map_val =
//       parsed_file->symbols2_.Get(td::Identifier::TypeIdentifier(name));
//   REQUIRE(some_map_val);
//   REQUIRE(holds_alternative<shared_ptr<td::Map>>(*some_map_val));
//   auto s = get<shared_ptr<td::Map>>(*some_map_val);
//   REQUIRE(holds_alternative<optional<T>>(s->key_type));
//   REQUIRE(holds_alternative<optional<string>>(s->value_type));
// }

TEST_CASE("Map with various scalar key types", "[symref]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

map SomeBoolMap<bool, str>;
map SomeCharMap<char, str>;
map SomeF32Map<f32, str>;
map SomeF64Map<f64, str>;
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
  REQUIRE(!parsed_file->HasErrors());

  // AssertType<bool>(parsed_file, "SomeBoolMap");
  // AssertType<char32_t>(parsed_file, "SomeCharMap");
  // AssertType<float>(parsed_file, "SomeF32Map");
  // AssertType<double>(parsed_file, "SomeF64Map");
  // AssertType<uint8_t>(parsed_file, "SomeU8Map");
  // AssertType<uint16_t>(parsed_file, "SomeU16Map");
  // AssertType<uint32_t>(parsed_file, "SomeU32Map");
  // AssertType<uint64_t>(parsed_file, "SomeU64Map");
  // AssertType<int8_t>(parsed_file, "SomeI8Map");
  // AssertType<int16_t>(parsed_file, "SomeI16Map");
  // AssertType<int32_t>(parsed_file, "SomeI32Map");
  // AssertType<int64_t>(parsed_file, "SomeI64Map");
  // AssertType<string>(parsed_file, "SomeStrMap");
}

TEST_CASE("Map with a struct key type should error", "[symref]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

struct StructA {
  an_int: i32;
};

map SomeBoolMap<StructA, str>;
    )");
  REQUIRE(parsed_file->HasErrors());
  // TODO this should throw an appropriate semantic error (not a syntax error)
}

TEST_CASE("Map with a variant key type should error", "[symref]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

variant VariantA {
  an_int: i32;
};

map SomeBoolMap<VariantA, str>;
    )");
  REQUIRE(parsed_file->HasErrors());
  // TODO this should throw an appropriate semantic error (not a syntax error)
}

TEST_CASE("Map with a vector key type should error", "[symref]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

vector VecA<i32>;

map SomeBoolMap<VecA, str>;
    )");
  REQUIRE(parsed_file->HasErrors());
  // TODO this should throw an appropriate semantic error (not a syntax error)
}

TEST_CASE("Map with a map key type should error", "[symref]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

map MapA<i32, str>;

map SomeBoolMap<MapA, str>;
    )");
  REQUIRE(parsed_file->HasErrors());
  // TODO this should throw an appropriate semantic error (not a syntax error)
}