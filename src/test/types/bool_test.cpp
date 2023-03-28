#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>

#include "types/type.h"

namespace td {
namespace types {

TEST_CASE("Bool resolves \"true\"") {
  auto actual = Bool::FromLiteral("true");
  REQUIRE(actual != nullptr);
  REQUIRE(actual->HasValue());
  REQUIRE(actual->Value().has_value());
  REQUIRE(actual->Value() == true);
}

TEST_CASE("Bool resolves \"false\"") {
  auto actual = Bool::FromLiteral("false");
  REQUIRE(actual != nullptr);
  REQUIRE(actual->HasValue());
  REQUIRE(actual->Value().has_value());
  REQUIRE(actual->Value() == false);
}

TEST_CASE("Bool fails \"'false'\"") {
  auto actual = Bool::FromLiteral("'false'");
  REQUIRE(actual != nullptr);
  REQUIRE(actual->HasValue());
  REQUIRE(actual->Value().has_value());
  REQUIRE(actual->Value() == false);
}

TEST_CASE("Bool fails \"asdf\"") {
  auto actual = Bool::FromLiteral("asdf");
  REQUIRE(actual == nullptr);
}

}  // namespace types
}  // namespace td
