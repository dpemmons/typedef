#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>

#include "types/type.h"

namespace Catch {
template <>
struct StringMaker<std::unique_ptr<td::types::I8>> {
  static std::string convert(std::unique_ptr<td::types::I8> const& v) {
    return v->ToString();
  }
};

template <>
struct StringMaker<std::unique_ptr<td::types::I16>> {
  static std::string convert(std::unique_ptr<td::types::I16> const& v) {
    return v->ToString();
  }
};

template <>
struct StringMaker<std::unique_ptr<td::types::I32>> {
  static std::string convert(std::unique_ptr<td::types::I32> const& v) {
    return v->ToString();
  }
};

template <>
struct StringMaker<std::unique_ptr<td::types::I64>> {
  static std::string convert(std::unique_ptr<td::types::I64> const& v) {
    return v->ToString();
  }
};

template <>
struct StringMaker<std::unique_ptr<td::types::U8>> {
  static std::string convert(std::unique_ptr<td::types::U8> const& v) {
    return v->ToString();
  }
};

template <>
struct StringMaker<std::unique_ptr<td::types::U16>> {
  static std::string convert(std::unique_ptr<td::types::U16> const& v) {
    return v->ToString();
  }
};

template <>
struct StringMaker<std::unique_ptr<td::types::U32>> {
  static std::string convert(std::unique_ptr<td::types::U32> const& v) {
    return v->ToString();
  }
};

template <>
struct StringMaker<std::unique_ptr<td::types::U64>> {
  static std::string convert(std::unique_ptr<td::types::U64> const& v) {
    return v->ToString();
  }
};

}  // namespace Catch

namespace td {
namespace types {

TEST_CASE("I8 resolves \"42i8\"", "[types][i8]") {
  auto actual = I8::FromLiteral("42i8");
  REQUIRE(actual != nullptr);
  REQUIRE(actual->IsI8());
  REQUIRE(actual->HasValue());
  REQUIRE(actual->Value().has_value());
  REQUIRE(actual->Value() == 42);
}


}  // namespace types
}  // namespace td
