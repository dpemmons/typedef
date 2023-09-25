#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <memory>
#include <sstream>
#include <string>
#include <variant>

#include "helpers.h"
#include "libtypedef/parser/grammar_functions.h"
#include "libtypedef/parser/typedef_parser.h"

using namespace std;
using namespace td;
using Catch::Matchers::Equals;
using Catch::Matchers::SizeIs;
TEST_CASE("Struct with a symbol reference to another struct", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeUninvolvedStruct {
  asdf: str;
};

struct SomeStruct {
  inlineMap: map<i32, f64>;
};

struct SomeOtherUninvolvedStruct {
  qwer: i32;
};

struct SomeOtherStruct {
  ref_to_some_struct: SomeStruct;
};
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());

  auto* some_struct =
      FindType(parser.GetCompilationUnitContext(), "SomeStruct");

  auto* some_other_struct =
      FindType(parser.GetCompilationUnitContext(), "SomeOtherStruct");
  auto* ref_to_some_struct = FindField(some_other_struct, "ref_to_some_struct");
  REQUIRE(ReferencesUserType(ref_to_some_struct));
  REQUIRE(some_struct == GetReferencedUserType(ref_to_some_struct));
}

TEST_CASE("Struct with a symbol reference to an non-existant type should fail",
          "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeOtherStruct {
  asdf: DoesNotExist;
};
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type ==
          ParserErrorInfo::UNRESOLVED_SYMBOL_REFERENCE);
}

TEST_CASE("Struct with a symbol reference to an inline value field should fail",
          "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  ref_to_inline: inlineStruct;
  inlineStruct: struct {
    valA: i32;
  };
};
    )");
  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type == ParserErrorInfo::NOT_A_TYPE);
}

TEST_CASE("Struct with a symbol reference to an nested struct", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  ref_to_nested: NestedStruct;
  struct NestedStruct {
    valA: i32;
  };
};
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());

  auto* some_struct =
      FindType(parser.GetCompilationUnitContext(), "SomeStruct");

  auto* ref_to_nested = FindField(some_struct, "ref_to_nested");
  REQUIRE(ref_to_nested);

  auto* nested_struct = FindType(some_struct, "NestedStruct");
  REQUIRE(nested_struct);

  REQUIRE(ReferencesUserType(ref_to_nested));
  REQUIRE(nested_struct == GetReferencedUserType(ref_to_nested));
}

TEST_CASE("Inline struct with a symbol reference to an nested struct",
          "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  struct NestedStruct {
    valA: i32;
  };
  inline_struct: struct {
    foo: NestedStruct;
  };
};
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  auto* some_struct =
      FindType(parser.GetCompilationUnitContext(), "SomeStruct");

  auto* nested_struct = FindType(some_struct, "NestedStruct");
  REQUIRE(nested_struct);

  auto* inline_struct = FindField(some_struct, "inline_struct");
  REQUIRE(inline_struct);
  REQUIRE(DefinesAndUsesInlineUserType(inline_struct));
  auto* anonymous_inline_struct = GetInlineUserType(inline_struct);
  REQUIRE(anonymous_inline_struct);

  auto* foo = FindField(anonymous_inline_struct, "foo");
  REQUIRE(foo);

  REQUIRE(ReferencesUserType(foo));
  REQUIRE(nested_struct == GetReferencedUserType(foo));
}

TEST_CASE("Struct with a symbol reference to a variant type", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant VariantA {
  a: bool;
  b: i8;
};

struct SomeStruct {
  var_a: VariantA;
};
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  auto* variant_a = FindType(parser.GetCompilationUnitContext(), "VariantA");
  auto* some_struct =
      FindType(parser.GetCompilationUnitContext(), "SomeStruct");

  auto* var_a = FindField(some_struct, "var_a");
  REQUIRE(var_a);
  REQUIRE(ReferencesUserType(var_a));
  REQUIRE(variant_a == GetReferencedUserType(var_a));
}

TEST_CASE("Variant with a symbol reference to a struct type", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  an_int: i32;
};

variant SomeVariant {
  a_str: str;
  foo: SomeStruct;
};

    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());

  auto* some_variant =
      FindType(parser.GetCompilationUnitContext(), "SomeVariant");
  auto* some_struct =
      FindType(parser.GetCompilationUnitContext(), "SomeStruct");

  auto* foo = FindField(some_variant, "foo");
  REQUIRE(foo);
  REQUIRE(ReferencesUserType(foo));
  REQUIRE(some_struct == GetReferencedUserType(foo));
}

TEST_CASE("Variant with a symbol reference to another variant type",
          "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeOtherVariant {
  an_int: i32;
  another_int: i64;
};

variant SomeVariant {
  a_str: str;
  foo: SomeOtherVariant;
};
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());

  auto* some_other_variant =
      FindType(parser.GetCompilationUnitContext(), "SomeOtherVariant");
  auto* some_variant =
      FindType(parser.GetCompilationUnitContext(), "SomeVariant");

  auto* foo = FindField(some_variant, "foo");
  REQUIRE(foo);
  REQUIRE(ReferencesUserType(foo));
  REQUIRE(some_other_variant == GetReferencedUserType(foo));
}

TEST_CASE("Vector with a symbol reference to a struct type", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeOtherStruct {
  an_int: i32;
};

struct SomeStruct {
  foo: vector<SomeOtherStruct>;
}

    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());

  auto* some_other_struct =
      FindType(parser.GetCompilationUnitContext(), "SomeOtherStruct");
  auto* some_struct =
      FindType(parser.GetCompilationUnitContext(), "SomeStruct");

  auto* foo = FindField(some_struct, "foo");
  REQUIRE(foo);
  auto* vec = GetTypeAnnotation(foo);
  REQUIRE(vec);
  REQUIRE(HasTypeArguments(vec) == 1);

  auto* type_arg_0 = GetTypeArgument(vec, 0);
  REQUIRE(type_arg_0);
  REQUIRE(ReferencesUserType(type_arg_0));
  REQUIRE(some_other_struct == GetReferencedUserType(type_arg_0));
}

TEST_CASE("Vector with a symbol reference to a variant type", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeOtherVariant {
  an_int: i32;
  another_int: i64;
};

struct SomeStruct {
  foo: vector<SomeOtherVariant>;
}
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());

  auto* some_other_variant =
      FindType(parser.GetCompilationUnitContext(), "SomeOtherVariant");
  auto* some_struct =
      FindType(parser.GetCompilationUnitContext(), "SomeStruct");

  auto* foo = FindField(some_struct, "foo");
  REQUIRE(foo);
  auto* vec = GetTypeAnnotation(foo);
  REQUIRE(vec);
  REQUIRE(HasTypeArguments(vec) == 1);

  auto* type_arg_0 = GetTypeArgument(vec, 0);
  REQUIRE(type_arg_0);
  REQUIRE(ReferencesUserType(type_arg_0));
  REQUIRE(some_other_variant == GetReferencedUserType(type_arg_0));
}

TEST_CASE("Map with a symbol reference to a struct type", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  an_int: i32;
};

struct SomeOtherStruct {
  foo: map<i32, SomeStruct>;
}
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());

  auto* some_struct =
      FindType(parser.GetCompilationUnitContext(), "SomeStruct");
  auto* some_other_struct =
      FindType(parser.GetCompilationUnitContext(), "SomeOtherStruct");

  auto* foo = FindField(some_other_struct, "foo");
  REQUIRE(foo);
  auto* map = GetTypeAnnotation(foo);
  REQUIRE(map);
  REQUIRE(HasTypeArguments(map) == 2);

  auto* type_arg_1 = GetTypeArgument(map, 1);
  REQUIRE(type_arg_1);
  REQUIRE(ReferencesUserType(type_arg_1));
  REQUIRE(some_struct == GetReferencedUserType(type_arg_1));
}

TEST_CASE("Map with a symbol reference to a variant type", "[symref]") {
  Parser parser(R"(
typedef=alpha;
module test;

variant SomeVariant {
  an_int: i32;
  another_int: i64;
};

struct SomeStruct {
  foo: map<i32, SomeVariant>;
}
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());

  auto* some_variant =
      FindType(parser.GetCompilationUnitContext(), "SomeVariant");
  auto* some_struct =
      FindType(parser.GetCompilationUnitContext(), "SomeStruct");

  auto* foo = FindField(some_struct, "foo");
  REQUIRE(foo);
  auto* map = GetTypeAnnotation(foo);
  REQUIRE(map);
  REQUIRE(HasTypeArguments(map) == 2);

  auto* type_arg_1 = GetTypeArgument(map, 1);
  REQUIRE(type_arg_1);
  REQUIRE(ReferencesUserType(type_arg_1));
  REQUIRE(some_variant == GetReferencedUserType(type_arg_1));
}
