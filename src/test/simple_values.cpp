#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <sstream>
#include <string>
#include <utility>
#include <vector>

#define FMT_HEADER_ONLY
#include "antlr4/antlr4-runtime.h"
#include "fmt/core.h"
#include "fmt/ostream.h"
#include "grammar/TypedefLexer.h"
#include "grammar/TypedefParser.h"
#include "typedef_parser.h"
#include "value_definition.h"

using Catch::Matchers::Equals;

namespace {
const std::vector<td::ParserErrorInfo> empty_errors;

struct EqualsValueDefinitionMatcher : Catch::Matchers::MatcherGenericBase {
  EqualsValueDefinitionMatcher(td::ValueDefinition const& vd) : vd_{vd} {}

  bool match(td::ValueDefinition const& other) const {
    return (vd_.GetType() == other.GetType() &&
            vd_.GetQualifiedIdentifier().IsSimple() &&
            other.GetQualifiedIdentifier().IsSimple() &&
            vd_.GetScalarValue() == other.GetScalarValue());
  }

  std::string describe() const override {
    std::stringstream ss;
    fmt::print(ss, "Equals: ");
    ss << vd_;
    return ss.str();
  }

 private:
  td::ValueDefinition const& vd_;
};

auto EqualsValueDefinition(const td::ValueDefinition& vd)
    -> EqualsValueDefinitionMatcher {
  return EqualsValueDefinitionMatcher{vd};
}

}  // namespace

// ----------------------------------------------------------------------------
// Booleans
// ----------------------------------------------------------------------------

TEST_CASE("Declare a true boolean.", "[simple_values][bool]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
val : bool = true;
    )");
  REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));

  std::vector<td::ValueDefinition> actual_value_definitions =
      parsed_file->GetValueDefinitions();
  td::ValueDefinition expected(td::QualifiedIdentifier("val"),
                               td::ScalarValue::CreateBOOL(true));
  REQUIRE_THAT(actual_value_definitions[0], EqualsValueDefinition(expected));
}

TEST_CASE("Declare a false boolean.", "[simple_values][bool]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
val : bool = false;
    )");
  REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));

  std::vector<td::ValueDefinition> actual_value_definitions =
      parsed_file->GetValueDefinitions();
  td::ValueDefinition expected(td::QualifiedIdentifier("val"),
                               td::ScalarValue::CreateBOOL(false));
  REQUIRE_THAT(actual_value_definitions[0], EqualsValueDefinition(expected));
}


// ----------------------------------------------------------------------------
// i8
// ----------------------------------------------------------------------------

// TEST_CASE("Declare a simple i8.", "[simple_values][i8]") {
//   auto parsed_file = td::Parse(R"(
// typedef=alpha;
// val : i8 = 3;
//     )");
//   std::vector<td::ValueDefinition> value_definitions =
//       parsed_file->GetValueDefinitions();
//   REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));

//   td::ValueDefinition expected(td::QualifiedIdentifier("val"),
//                                td::ScalarValue::CreateI8(3));
//   REQUIRE_THAT(value_definitions[0], EqualsValueDefinition(expected));
// }