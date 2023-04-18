#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <memory>
#include <vector>

#include "typedef_parser.h"
#include "parsed_file.h"
#include "parser_error_info.h"

using Catch::Matchers::Equals;
using Catch::Matchers::SizeIs;

namespace {
const std::vector<td::ParserErrorInfo> empty_errors;
}  // namespace

TEST_CASE("Module declaration throws an UNIMPLEMENTED error.",
          "[module_declaration]") {
  auto parsed_file = td::Parse(R"(
typedef=alpha;
module someModule;
    )");
  REQUIRE(parsed_file->HasErrors());
  REQUIRE(parsed_file->GetErrors().size() == 1);
  REQUIRE(parsed_file->GetErrors()[0].error_type ==
          td::ParserErrorInfo::UNIMPLEMENTED);
}
