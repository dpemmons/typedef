#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>

#define FMT_HEADER_ONLY
#include "fmt/core.h"
#include "fmt/ostream.h"
#include "type.h"

using namespace std;

namespace Catch {
template <>
struct StringMaker<unique_ptr<td::F32>> {
  static string convert(unique_ptr<td::F32> const& v) {
    if (v == nullptr) {
      return "nullptr";
    } else {
      return v->ToString();
    }
  }
};

template <>
struct StringMaker<unique_ptr<td::F64>> {
  static string convert(unique_ptr<td::F64> const& v) {
    if (v == nullptr) {
      return "nullptr";
    } else {
      return v->ToString();
    }
  }
};

template <>
struct StringMaker<optional<float>> {
  static string convert(optional<float> const& v) {
    return fmt::format("{}", v.value());
  }
};

template <>
struct StringMaker<optional<double>> {
  static string convert(optional<double> const& v) {
    return fmt::format("{}", v.value());
  }
};
}  // namespace Catch

namespace td {

TEST_CASE("f32 literal conversions", "[types][f32]") {
  vector<pair<string, optional<float>>> f32_test_cases = {
      // no suffix
      {"3.14", 3.14},

      // suffix
      {"3.14f32", 3.14},

      // negative
      {"-3.14f32", -3.14},

      // exponent
      {"3.14e2f32", 3.14e2},

      // positive exponent
      {"3.14e+2f32", 3.14e2},

      // negative exponent
      {"3.14e-2f32", 3.14e-2},
  };
  for (auto p : f32_test_cases) {
    if (p.second.has_value()) {
      DYNAMIC_SECTION(p.first << " -> " << p.second.value()) {
        auto actual = F32::FromLiteral(p.first);
        REQUIRE(actual != nullptr);
        REQUIRE(actual->IsF32());
        REQUIRE(actual->HasValue());
        REQUIRE(actual->Value().has_value());
        REQUIRE(actual->Value().value() == p.second.value());
      }
    } else {
      DYNAMIC_SECTION(p.first << " does not parse") {
        auto actual = F32::FromLiteral(p.first);
        REQUIRE(actual == nullptr);
      }
    }
  }
}

TEST_CASE("f64 literal conversions", "[types][f64]") {
  vector<pair<string, optional<double>>> f64_test_cases = {
      // no suffix
      {"3.14", 3.14},

      // suffix
      {"3.14f64", 3.14},

      // negative
      {"-3.14f64", -3.14},

      // exponent
      {"1.0000000000000003e39f64", 1.0000000000000003e39},
      // positive exponent
      {"1.0000000000000003e39f64", 1.0000000000000003e39},
      // negative exponent
      {"1.0000000000000003e-39f64", 1.0000000000000003e-39},

      // exponents without suffix
      {"1.0000000000000003e39", 1.0000000000000003e39},
      {"1.0000000000000003e+39", 1.0000000000000003e39},
      {"1.0000000000000003e-39", 1.0000000000000003e-39},
  };
  for (auto p : f64_test_cases) {
    if (p.second.has_value()) {
      DYNAMIC_SECTION(p.first << " -> " << p.second.value()) {
        auto actual = F64::FromLiteral(p.first);
        REQUIRE(actual != nullptr);
        REQUIRE(actual->IsF64());
        REQUIRE(actual->HasValue());
        REQUIRE(actual->Value().has_value());
        REQUIRE(actual->Value().value() == p.second.value());
      }
    } else {
      DYNAMIC_SECTION(p.first << " does not parse") {
        auto actual = F64::FromLiteral(p.first);
        REQUIRE(actual == nullptr);
      }
    }
  }
}

TEST_CASE("Equality", "[types][f32]") {
  auto f32_1 = F32::FromLiteral("1");
  auto f32_1b = F32::FromLiteral("1");
  auto f32_2 = F32::FromLiteral("2");

  REQUIRE(*f32_1 == *f32_1b);
  REQUIRE(*f32_1 != *f32_2);
}

TEST_CASE("Equality", "[types][f64]") {
  auto f64_1 = F64::FromLiteral("1");
  auto f64_1b = F64::FromLiteral("1");
  auto f64_2 = F64::FromLiteral("2");

  REQUIRE(*f64_1 == *f64_1b);
  REQUIRE(*f64_1 != *f64_2);
}

TEST_CASE("Equality", "[types][float]") {
  // TODO: test floats for equality beteen types?
  // do we need to? (probably eventually...)
}

}  // namespace td
