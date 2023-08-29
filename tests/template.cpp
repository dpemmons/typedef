#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <memory>
#include <vector>

#include "libtypedef/parser/parsed_file.h"
#include "libtypedef/parser/parser_error_info.h"
#include "libtypedef/parser/typedef_parser.h"

TEST_CASE("Simple template function.", "[template]") {
  std::shared_ptr<td::ParsedFile> parsed_file = td::ParseTypedef(R"(
typedef=alpha;
module test;

struct SomeVals {
  val_a: i32;
};

template DoIt(foo: i32, bar: SomeVals) t"Hello World!";

  )");

  REQUIRE(!parsed_file->HasErrors());
}