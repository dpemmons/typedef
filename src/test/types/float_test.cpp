#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>

#define FMT_HEADER_ONLY
#include "fmt/core.h"
#include "fmt/ostream.h"
#include "types/type.h"

using namespace std;

namespace Catch {
template <>
struct StringMaker<unique_ptr<td::types::F32>> {
  static string convert(unique_ptr<td::types::F32> const& v) {
    if (v == nullptr) {
      return "nullptr";
    } else {
      return v->ToString();
    }
  }
};

template <>
struct StringMaker<unique_ptr<td::types::F64>> {
  static string convert(unique_ptr<td::types::F64> const& v) {
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
namespace types {

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

}  // namespace types
}  // namespace td
