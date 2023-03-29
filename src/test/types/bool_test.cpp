#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>

#include "types/type.h"

namespace Catch {
template <>
struct StringMaker<std::unique_ptr<td::types::Bool>> {
  static std::string convert(std::unique_ptr<td::types::Bool> const& v) {
    return v->ToString();
  }
};
}  // namespace Catch

namespace td {
namespace types {

TEST_CASE("Bool resolves \"true\"", "[types][bool]") {
  auto actual = Bool::FromLiteral("true");
  REQUIRE(actual != nullptr);
  REQUIRE(actual->IsBool());
  REQUIRE(actual->HasValue());
  REQUIRE(actual->Value().has_value());
  REQUIRE(actual->Value() == true);
}

TEST_CASE("Bool resolves \"false\"", "[types][bool]") {
  auto actual = Bool::FromLiteral("false");
  REQUIRE(actual != nullptr);
  REQUIRE(actual->IsBool());
  REQUIRE(actual->HasValue());
  REQUIRE(actual->Value().has_value());
  REQUIRE(actual->Value() == false);
}

TEST_CASE("Bool fails \"'false'\"", "[types][bool]") {
  auto actual = Bool::FromLiteral("'false'");
  REQUIRE(actual == nullptr);
}

TEST_CASE("Bool fails \"asdf\"", "[types][bool]") {
  auto actual = Bool::FromLiteral("asdf");
  REQUIRE(actual == nullptr);
}

}  // namespace types
}  // namespace td
