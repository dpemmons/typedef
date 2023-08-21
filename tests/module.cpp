#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <memory>
#include <vector>

#include "libtypedef/parser/parsed_file.h"
#include "libtypedef/parser/parser_error_info.h"
#include "libtypedef/parser/typedef_parser.h"

using Catch::Matchers::Equals;
using Catch::Matchers::SizeIs;

namespace {
const std::vector<td::ParserErrorInfo> empty_errors;
}  // namespace

TEST_CASE("Module declaration throws an UNIMPLEMENTED error.",
          "[module_declaration]") {
  auto parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module someModule;
    )");
  REQUIRE(!parsed_file->HasErrors());
  REQUIRE(parsed_file->mod);
  REQUIRE(parsed_file->mod->module_name);
  REQUIRE(parsed_file->mod->module_name->ToString() == "::someModule");
}
