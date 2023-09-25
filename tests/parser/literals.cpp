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

TEST_CASE("Struct with true and false literal bools", "[literals]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  bool_true: bool = true;
  bool_false: bool = false;
};
  )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeStruct");

  REQUIRE(FindField(ctx, "bool_true"));
  REQUIRE(IsBool(FindField(ctx, "bool_true")));
  REQUIRE(GetBool(FindField(ctx, "bool_true")) == true);

  REQUIRE(FindField(ctx, "bool_false"));
  REQUIRE(IsBool(FindField(ctx, "bool_false")));
  REQUIRE(GetBool(FindField(ctx, "bool_false")) == false);
}

TEST_CASE("Struct invalid bool literal", "[literals]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  bool_asdf: bool = asdf;
};
  )");
  REQUIRE(parser.Parse() == 1);
}

TEST_CASE("Struct with various valid literal chars", "[literals]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  // normal character
  char_0: char = 'a';           // U'a'
  // quote escapes
  char_1: char = '\'';          // U'\''
  char_2: char = '\"';          // U'\"'
  // ascii escapes
  char_3: char = '\n';          // U'\n'
  char_4: char = '\r';          // U'\r'
  char_5: char = '\t';          // U'\t'
  char_6: char = '\\';          // U'\\'
  char_7: char = '\0';          // U'\0'
  char_8: char = '\x41';        // U'\x41'
  char_9: char = '\x0A';        // U'\x0A'
  // Valid unicode escapes
  char_10: char = '\u{1F600}';  // 0x0001F600  (smiley face)
  char_11: char = '\u{01F600}'; // 0x0001F600  (smiley face)
  char_12: char = '\u{A9}';     // 0x000000A9  (copyright)
  char_13: char = '🔥';         // U'🔥'       (fire!)
};
  )");

  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeStruct");

  REQUIRE(GetChar(FindField(ctx, "char_0")) == U'a');
  REQUIRE(GetChar(FindField(ctx, "char_1")) == U'\'');
  REQUIRE(GetChar(FindField(ctx, "char_2")) == U'\"');
  REQUIRE(GetChar(FindField(ctx, "char_3")) == U'\n');
  REQUIRE(GetChar(FindField(ctx, "char_4")) == U'\r');
  REQUIRE(GetChar(FindField(ctx, "char_5")) == U'\t');
  REQUIRE(GetChar(FindField(ctx, "char_6")) == U'\\');
  REQUIRE(GetChar(FindField(ctx, "char_7")) == U'\0');
  REQUIRE(GetChar(FindField(ctx, "char_8")) == U'\x41');
  REQUIRE(GetChar(FindField(ctx, "char_9")) == U'\x0A');
  REQUIRE(GetChar(FindField(ctx, "char_10")) == 0x0001F600);
  REQUIRE(GetChar(FindField(ctx, "char_11")) == 0x0001F600);
  REQUIRE(GetChar(FindField(ctx, "char_12")) == 0x000000A9);
  REQUIRE(GetChar(FindField(ctx, "char_13")) == U'🔥');
}

TEST_CASE("Struct with various invalid empty char literal", "[literals]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  invalid_char0: char = '';           // empty
}
  )");

  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type == ParserErrorInfo::PARSE_ERROR);
}

TEST_CASE("Struct with various invalid invalid char literal escape",
          "[literals]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  invalid_char1: char = '\x';         // invalid escape
}
  )");

  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type == ParserErrorInfo::PARSE_ERROR);
}

TEST_CASE("Struct with various invalid invalid char literal escape2",
          "[literals]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  invalid_char2: char ='\xG0';
}
  )");

  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type == ParserErrorInfo::PARSE_ERROR);
}

TEST_CASE("Struct with various invalid invalid char literal escape3",
          "[literals]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  invalid_char3: char ='\x1';
}
  )");

  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type == ParserErrorInfo::PARSE_ERROR);
}

TEST_CASE("Struct with various invalid invalid char literal escape4",
          "[literals]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  invalid_char4: char ='\u';
}
  )");

  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type == ParserErrorInfo::PARSE_ERROR);
}

TEST_CASE("Struct with various invalid invalid char literal escape5",
          "[literals]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  invalid_char5: char ='\u{1F60';     // incomplete unicode
}
  )");

  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type == ParserErrorInfo::PARSE_ERROR);
}

TEST_CASE("Struct with various invalid invalid char literal escape6",
          "[literals]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  invalid_char6: char ='\u{01F6000}'; // Too long unicode sequence
}
  )");
  // Generates an extraneous parser error, but it's fine.
  REQUIRE(parser.Parse() == 2);
  REQUIRE(parser.GetError(0).error_type == ParserErrorInfo::PARSE_ERROR);
  REQUIRE(parser.GetError(1).error_type == ParserErrorInfo::PARSE_ERROR);
}

TEST_CASE("Struct with various invalid invalid char literal escape7",
          "[literals]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  invalid_char7: char ='\z';          // invalid escape
}
  )");

  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type == ParserErrorInfo::PARSE_ERROR);
}

TEST_CASE("Struct with various valid f32 literals", "[literals]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  valid_f32_no_suffix: f32          = 3.14;
  valid_f32_suffix: f32             = 3.14f32;
  valid_f32_negative_no_suffix: f32 = -3.14;
  valid_f32_negative_suffix: f32    = -3.14f32;
  valid_f32_exponent: f32           = 3.14e2f32;
  valid_f32_pos_exponent: f32       = 3.14e+2f32;
  valid_f32_neg_exponent: f32       = 3.14e-2f32;
}
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeStruct");
  REQUIRE(ctx);
  REQUIRE(GetF32(FindField(ctx, "valid_f32_no_suffix")) == 3.14f);
  REQUIRE(GetF32(FindField(ctx, "valid_f32_suffix")) == 3.14f);
  REQUIRE(GetF32(FindField(ctx, "valid_f32_negative_no_suffix")) == -3.14f);
  REQUIRE(GetF32(FindField(ctx, "valid_f32_negative_suffix")) == -3.14f);
  REQUIRE(GetF32(FindField(ctx, "valid_f32_exponent")) == 3.14e2f);
  REQUIRE(GetF32(FindField(ctx, "valid_f32_pos_exponent")) == 3.14e2f);
  REQUIRE(GetF32(FindField(ctx, "valid_f32_neg_exponent")) == 3.14e-2f);
}

TEST_CASE("Struct with various valid f64 literals", "[literals]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  valid_f64_no_suffix: f64          = 3.14;
  valid_f64_suffix: f64             = 3.14f64;
  valid_f64_negative_no_suffix: f64 = -3.14;
  valid_f64_negative_suffix: f64    = -3.14f64;
  valid_f64_exponent: f64           = 3.14e2f64;
  valid_f64_pos_exponent: f64       = 3.14e+2f64;
  valid_f64_neg_exponent: f64       = 3.14e-2f64;
  valid_f64_exponent2: f64          = 1.0000000000000003e39f64;
  valid_f64_pos_exponent2: f64      = 1.0000000000000003e+39f64;
  valid_f64_neg_exponent2: f64      = 1.0000000000000003e-39f64;
}
    )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeStruct");
  REQUIRE(ctx);
  REQUIRE(GetF64(FindField(ctx, "valid_f64_no_suffix")) == 3.14);
  REQUIRE(GetF64(FindField(ctx, "valid_f64_suffix")) == 3.14);
  REQUIRE(GetF64(FindField(ctx, "valid_f64_negative_no_suffix")) == -3.14);
  REQUIRE(GetF64(FindField(ctx, "valid_f64_negative_suffix")) == -3.14);
  REQUIRE(GetF64(FindField(ctx, "valid_f64_exponent")) == 3.14e2);
  REQUIRE(GetF64(FindField(ctx, "valid_f64_pos_exponent")) == 3.14e2);
  REQUIRE(GetF64(FindField(ctx, "valid_f64_neg_exponent")) == 3.14e-2);

  REQUIRE(GetF64(FindField(ctx, "valid_f64_exponent2")) ==
          1.0000000000000003e39);
  REQUIRE(GetF64(FindField(ctx, "valid_f64_pos_exponent2")) ==
          1.0000000000000003e39);
  REQUIRE(GetF64(FindField(ctx, "valid_f64_neg_exponent2")) ==
          1.0000000000000003e-39);
}