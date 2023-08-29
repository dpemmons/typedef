#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <memory>
#include <vector>

#include "libtypedef/parser/parser_error_info.h"
#include "libtypedef/parser/typedef_parser.h"

using Catch::Matchers::Equals;
using Catch::Matchers::SizeIs;

namespace {
const std::vector<td::ParserErrorInfo> empty_errors;
}  // namespace

TEST_CASE("Module declaration throws an UNIMPLEMENTED error.", "[module]") {
  auto parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module someModule;
    )");
  REQUIRE(!parsed_file->HasErrors());
  REQUIRE(parsed_file->mod);
  REQUIRE(parsed_file->mod->module_name);
  REQUIRE(parsed_file->mod->module_name->ToString() == "::someModule");
}

TEST_CASE("Duplicate structs should error", "[module]") {
  std::unique_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
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
  REQUIRE(parsed_file->errors.size() == 1);
  REQUIRE(parsed_file->errors[0].error_type ==
          td::ParserErrorInfo::DUPLICATE_SYMBOL);
}