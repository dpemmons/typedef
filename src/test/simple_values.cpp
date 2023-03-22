#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <sstream>
#include <string>

#include "typedef_parser.h"
#include "value_definition.h"

using Catch::Matchers::Equals;

namespace {
const std::vector<td::ParserErrorInfo> empty_errors;
}  // namespace

struct EqualsValueDefinitionMatcher : Catch::Matchers::MatcherGenericBase {
  EqualsValueDefinitionMatcher(td::ValueDefinition const& vd) : vd_{vd} {}

  bool match(td::ValueDefinition const& other) const {
    return (vd_.GetType() == other.GetType() &&
            vd_.GetQualifiedIdentifier().IsSimple() &&
            other.GetQualifiedIdentifier().IsSimple() &&
            vd_.GetScalarValue() == other.GetScalarValue());
  }

  std::string describe() const override { return "Equals."; }

 private:
  td::ValueDefinition const& vd_;
};

auto EqualsValueDefinition(const td::ValueDefinition& vd)
    -> EqualsValueDefinitionMatcher {
  return EqualsValueDefinitionMatcher{vd};
}

TEST_CASE("Declare a true boolean.", "[simple_values][bool]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
val : bool = true;
    )");
  REQUIRE(!parsed_file->HasErrors());
  std::vector<td::ValueDefinition> value_definitions =
      parsed_file->GetValueDefinitions();
  REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));

  td::ValueDefinition expected(td::QualifiedIdentifier("val"),
                               td::ScalarValue::CreateBOOL(true));
  REQUIRE_THAT(value_definitions[0], EqualsValueDefinition(expected));
}

TEST_CASE("Declare a false boolean.", "[simple_values][bool]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
val : bool = false;
    )");
  REQUIRE(!parsed_file->HasErrors());
  std::vector<td::ValueDefinition> value_definitions =
      parsed_file->GetValueDefinitions();
  REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));

  td::ValueDefinition expected(td::QualifiedIdentifier("val"),
                               td::ScalarValue::CreateBOOL(false));
  REQUIRE_THAT(value_definitions[0], EqualsValueDefinition(expected));
}

TEST_CASE("Declare a char value.", "[simple_values][char]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
val : char = 'c';
    )");

  REQUIRE_THAT(parsed_file->GetErrors(), Equals(empty_errors));

  std::vector<td::ValueDefinition> value_definitions =
      parsed_file->GetValueDefinitions();
  REQUIRE(value_definitions.size() == 1);

  td::ValueDefinition expected(td::QualifiedIdentifier("val"),
                               td::ScalarValue::CreateCHAR('c'));
  REQUIRE_THAT(value_definitions[0], EqualsValueDefinition(expected));
}