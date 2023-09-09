#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <memory>
#include <vector>

#include "libtypedef/parser/parser_error_info.h"
#include "libtypedef/parser/typedef_parser.h"

using namespace td;

// TEST_CASE("Template function params.", "[template]") {
//   Parser parser(R"(
// typedef=alpha;
// module test;

// struct SomeVals {
//   val_a: i32;
// };

// template DoIt(foo: i32, bar: SomeVals) t"Hello World!";

//   )");

//   REQUIRE(!parser.Parse());

//   auto tmpl = parsed_file->mod->GetTemplate("DoIt");
//   REQUIRE(tmpl);
//   REQUIRE(tmpl->params.size() == 2);
//   REQUIRE(*tmpl->params[0]->param_name == "foo");
//   REQUIRE(tmpl->params[0]->parameter_type);
//   REQUIRE(tmpl->params[0]->parameter_type->IsI32());

//   REQUIRE(*tmpl->params[1]->param_name == "bar");
//   REQUIRE(tmpl->params[1]->parameter_type);
//   REQUIRE(tmpl->params[1]->parameter_type->IsSymref());
//   REQUIRE(*tmpl->params[1]->parameter_type->symrmef_identifier == "SomeVals");
//   REQUIRE(tmpl->params[1]->parameter_type->SymrefIsResolved());
//   auto sr = tmpl->params[1]->parameter_type->symref_target;
//   REQUIRE(sr);

//   REQUIRE(sr->IsStruct());
//   REQUIRE(sr->GetStruct()->GetField("val_a"));

//   REQUIRE(*tmpl->tmpl_string == "Hello World!");
// }