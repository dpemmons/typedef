#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <memory>
#include <sstream>
#include <string>
#include <variant>

#include "helpers.h"
#include "libtypedef/parser/ast_functions.h"
#include "libtypedef/parser/typedef_parser.h"

using namespace std;
using namespace td;
using Catch::Matchers::Equals;

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

TEST_CASE("Struct with various invalid char literal escape6", "[literals]") {
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

TEST_CASE("Struct with various valid string literals", "[literals]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  valid_str: str = "Hello world!";
  valid_raw_str: str = r#"Hello world!"#;

  valid_escaped_str: str = "Hello \nworld!";
  valid_escaped_raw_str: str = r#"Hello \nworld!"#;

  valid_unicode_str: str = "Hello \u{1F}!";
  valid_unicode_str2: str = "Hello \u{260}!";

  valid_unicode_mixed_sequences: str = "Hello, \n\u{01F600}!";
}
  )");

  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeStruct");
  REQUIRE(ctx);
  REQUIRE_THAT(*GetStr(FindField(ctx, "valid_str")), Equals("Hello world!"));
  REQUIRE_THAT(*GetStr(FindField(ctx, "valid_raw_str")),
               Equals("Hello world!"));
  REQUIRE_THAT(*GetStr(FindField(ctx, "valid_escaped_str")),
               Equals("Hello \nworld!"));
  REQUIRE_THAT(*GetStr(FindField(ctx, "valid_escaped_raw_str")),
               Equals("Hello \\nworld!"));

  REQUIRE_THAT(*GetStr(FindField(ctx, "valid_unicode_str")),
               Equals(u8"Hello \u001F!"));
  REQUIRE_THAT(*GetStr(FindField(ctx, "valid_unicode_str2")),
               Equals(u8"Hello \u0260!"));

  REQUIRE_THAT(*GetStr(FindField(ctx, "valid_unicode_mixed_sequences")),
               Equals("Hello, \n\U0001F600!"));
}

TEST_CASE("Struct with invalid unicode string literal", "[literals]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  bad_str: str = "\u{1234567}";
}
  )");

  REQUIRE(parser.Parse() == 1);
  REQUIRE(parser.GetError().error_type ==
          ParserErrorInfo::INVALID_STRING_LITERAL);
}

TEST_CASE("Struct with empty string literals", "[literals]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  ok_str: str = "";
  ok_str2: str = r#""#;
}
  )");
  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeStruct");
  REQUIRE(ctx);
  REQUIRE_THAT(*GetStr(FindField(ctx, "ok_str")), Equals(""));
  REQUIRE_THAT(*GetStr(FindField(ctx, "ok_str2")), Equals(""));
}

TEST_CASE("Struct with various valid int literals", "[literals]") {
  Parser parser(R"(
typedef=alpha;
module test;

struct SomeStruct {
  valid_i8_dec: i8 = 42 i8;
  valid_i8_neg: i8 = -42 i8;
  valid_i8_hex: i8 = 0x2A i8;
  valid_i8_oct: i8 = 0o52 i8;
  valid_i8_bin: i8 = 0b101010 i8;

  valid_i8_hex_leading_underscore: i8 = 0x_2A i8;
  valid_i8_oct_leading_underscore: i8 = 0o_52 i8;
  valid_i8_bin_leading_underscore: i8 = 0b_101010 i8;

  valid_i8_dec_trailing_underscore: i8 = 42_ i8;
  valid_i8_neg_trailing_underscore: i8 = -42_ i8;
  valid_i8_hex_trailing_underscore: i8 = 0x2A_ i8;
  valid_i8_oct_trailing_underscore: i8 = 0o52_ i8;
  valid_i8_bin_trailing_underscore: i8 = 0b101010_ i8;

  valid_i8_dec_middle_underscore: i8 = 4_2 i8;
  valid_i8_neg_middle_underscore: i8 = -4_2 i8;
  valid_i8_hex_middle_underscore: i8 = 0x2_A i8;
  valid_i8_oct_middle_underscore: i8 = 0o5_2 i8;
  valid_i8_bin_middle_underscore: i8 = 0b101_010 i8;

  valid_i8_dec_max: i8 = 127i8;
  valid_i8_hex_max: i8 = 0x7Fi8;
  valid_i8_oct_max: i8 = 0o177i8;
  valid_i8_bin_max: i8 = 0b1111111i8;
  valid_i8_dec_min: i8 = -128i8;

  valid_u8_dec_max: u8 = 255u8;
  valid_u8_hex_max: u8 = 0xFFu8;
  valid_u8_oct_max: u8 = 0o377u8;
  valid_u8_bin_max: u8 = 0b11111111u8;

  valid_i16_dec_max: i16 = 32767i16;
  valid_i16_hex_max: i16 = 0x7FFFi16;
  valid_i16_oct_max: i16 = 0o77777i16;
  valid_i16_bin_max: i16 = 0b111111111111111i16;
  valid_i16_dec_min: i16 = -32768i16;

  valid_u16_dec_max: u16 = 65535u16;
  valid_u16_hex_max: u16 = 0xFFFFu16;
  valid_u16_oct_max: u16 = 0o177777u16;
  valid_u16_bin_max: u16 = 0b1111111111111111u16;

  valid_i32_dec_max: i32 = 2147483647i32;
  valid_i32_hex_max: i32 = 0x7FFFFFFFi32;
  valid_i32_oct_max: i32 = 0o17777777777i32;
  valid_i32_bin_max: i32 = 0b1111111111111111111111111111111i32;
  valid_i32_dec_min: i32 = -2147483648i32;

  valid_u32_dec_max: u32 = 4294967295u32;
  valid_u32_hex_max: u32 = 0xFFFFFFFFu32;
  valid_u32_oct_max: u32 = 0o37777777777u32;
  valid_u32_bin_max: u32 = 0b11111111111111111111111111111111u32;

  valid_i64_dec_max: i64 = 9223372036854775807i64;
  valid_i64_hex_max: i64 = 0x7FFFFFFFFFFFFFFFi64;
  valid_i64_oct_max: i64 = 0o777777777777777777777i64;
  valid_i64_bin_max: i64 = 0b111111111111111111111111111111111111111111111111111111111111111i64;
  valid_i64_dec_min: i64 = -9223372036854775808;

  valid_u64_dec_max: u64 = 18446744073709551615u64;
  valid_u64_hex_max: u64 = 0xFFFFFFFFFFFFFFFFu64;
  valid_u64_oct_max: u64 = 0o1777777777777777777777u64;
  valid_u64_bin_max: u64 = 0b1111111111111111111111111111111111111111111111111111111111111111u64;
}
  )");

  REQUIRE_NO_PARSE_ERROR(parser.Parse());
  auto* ctx = FindType(parser.GetCompilationUnitContext(), "SomeStruct");
  REQUIRE(ctx);
  REQUIRE(GetI8(FindField(ctx, "valid_i8_dec")) == 42);
  REQUIRE(GetI8(FindField(ctx, "valid_i8_neg")) == -42);
  REQUIRE(GetI8(FindField(ctx, "valid_i8_hex")) == 42);
  REQUIRE(GetI8(FindField(ctx, "valid_i8_oct")) == 42);
  REQUIRE(GetI8(FindField(ctx, "valid_i8_bin")) == 42);

  REQUIRE(GetI8(FindField(ctx, "valid_i8_hex_leading_underscore")) == 42);
  REQUIRE(GetI8(FindField(ctx, "valid_i8_oct_leading_underscore")) == 42);
  REQUIRE(GetI8(FindField(ctx, "valid_i8_bin_leading_underscore")) == 42);

  REQUIRE(GetI8(FindField(ctx, "valid_i8_dec_trailing_underscore")) == 42);
  REQUIRE(GetI8(FindField(ctx, "valid_i8_neg_trailing_underscore")) == -42);
  REQUIRE(GetI8(FindField(ctx, "valid_i8_hex_trailing_underscore")) == 42);
  REQUIRE(GetI8(FindField(ctx, "valid_i8_oct_trailing_underscore")) == 42);
  REQUIRE(GetI8(FindField(ctx, "valid_i8_bin_trailing_underscore")) == 42);

  REQUIRE(GetI8(FindField(ctx, "valid_i8_dec_middle_underscore")) == 42);
  REQUIRE(GetI8(FindField(ctx, "valid_i8_neg_middle_underscore")) == -42);
  REQUIRE(GetI8(FindField(ctx, "valid_i8_hex_middle_underscore")) == 42);
  REQUIRE(GetI8(FindField(ctx, "valid_i8_oct_middle_underscore")) == 42);
  REQUIRE(GetI8(FindField(ctx, "valid_i8_bin_middle_underscore")) == 42);

  REQUIRE(GetI8(FindField(ctx, "valid_i8_dec_max")) ==
          std::numeric_limits<int8_t>::max());
  REQUIRE(GetI8(FindField(ctx, "valid_i8_hex_max")) ==
          std::numeric_limits<int8_t>::max());
  REQUIRE(GetI8(FindField(ctx, "valid_i8_oct_max")) ==
          std::numeric_limits<int8_t>::max());
  REQUIRE(GetI8(FindField(ctx, "valid_i8_bin_max")) ==
          std::numeric_limits<int8_t>::max());
  REQUIRE(GetI8(FindField(ctx, "valid_i8_dec_min")) ==
          std::numeric_limits<int8_t>::min());

  REQUIRE(GetU8(FindField(ctx, "valid_u8_dec_max")) ==
          std::numeric_limits<uint8_t>::max());
  REQUIRE(GetU8(FindField(ctx, "valid_u8_hex_max")) ==
          std::numeric_limits<uint8_t>::max());
  REQUIRE(GetU8(FindField(ctx, "valid_u8_oct_max")) ==
          std::numeric_limits<uint8_t>::max());
  REQUIRE(GetU8(FindField(ctx, "valid_u8_bin_max")) ==
          std::numeric_limits<uint8_t>::max());

  REQUIRE(GetI16(FindField(ctx, "valid_i16_dec_max")) ==
          std::numeric_limits<int16_t>::max());
  REQUIRE(GetI16(FindField(ctx, "valid_i16_hex_max")) ==
          std::numeric_limits<int16_t>::max());
  REQUIRE(GetI16(FindField(ctx, "valid_i16_oct_max")) ==
          std::numeric_limits<int16_t>::max());
  REQUIRE(GetI16(FindField(ctx, "valid_i16_bin_max")) ==
          std::numeric_limits<int16_t>::max());
  REQUIRE(GetI16(FindField(ctx, "valid_i16_dec_min")) ==
          std::numeric_limits<int16_t>::min());

  REQUIRE(GetU16(FindField(ctx, "valid_u16_dec_max")) ==
          std::numeric_limits<uint16_t>::max());
  REQUIRE(GetU16(FindField(ctx, "valid_u16_hex_max")) ==
          std::numeric_limits<uint16_t>::max());
  REQUIRE(GetU16(FindField(ctx, "valid_u16_oct_max")) ==
          std::numeric_limits<uint16_t>::max());
  REQUIRE(GetU16(FindField(ctx, "valid_u16_bin_max")) ==
          std::numeric_limits<uint16_t>::max());

  REQUIRE(GetI32(FindField(ctx, "valid_i32_dec_max")) ==
          std::numeric_limits<int32_t>::max());
  REQUIRE(GetI32(FindField(ctx, "valid_i32_hex_max")) ==
          std::numeric_limits<int32_t>::max());
  REQUIRE(GetI32(FindField(ctx, "valid_i32_oct_max")) ==
          std::numeric_limits<int32_t>::max());
  REQUIRE(GetI32(FindField(ctx, "valid_i32_bin_max")) ==
          std::numeric_limits<int32_t>::max());
  REQUIRE(GetI32(FindField(ctx, "valid_i32_dec_min")) ==
          std::numeric_limits<int32_t>::min());

  REQUIRE(GetU32(FindField(ctx, "valid_u32_dec_max")) ==
          std::numeric_limits<uint32_t>::max());
  REQUIRE(GetU32(FindField(ctx, "valid_u32_hex_max")) ==
          std::numeric_limits<uint32_t>::max());
  REQUIRE(GetU32(FindField(ctx, "valid_u32_oct_max")) ==
          std::numeric_limits<uint32_t>::max());
  REQUIRE(GetU32(FindField(ctx, "valid_u32_bin_max")) ==
          std::numeric_limits<uint32_t>::max());

  REQUIRE(GetI64(FindField(ctx, "valid_i64_dec_max")) ==
          std::numeric_limits<int64_t>::max());
  REQUIRE(GetI64(FindField(ctx, "valid_i64_hex_max")) ==
          std::numeric_limits<int64_t>::max());
  REQUIRE(GetI64(FindField(ctx, "valid_i64_oct_max")) ==
          std::numeric_limits<int64_t>::max());
  REQUIRE(GetI64(FindField(ctx, "valid_i64_bin_max")) ==
          std::numeric_limits<int64_t>::max());
  REQUIRE(GetI64(FindField(ctx, "valid_i64_dec_min")) ==
          std::numeric_limits<int64_t>::min());

  REQUIRE(GetU64(FindField(ctx, "valid_u64_dec_max")) ==
          std::numeric_limits<uint64_t>::max());
  REQUIRE(GetU64(FindField(ctx, "valid_u64_hex_max")) ==
          std::numeric_limits<uint64_t>::max());
  REQUIRE(GetU64(FindField(ctx, "valid_u64_oct_max")) ==
          std::numeric_limits<uint64_t>::max());
  REQUIRE(GetU64(FindField(ctx, "valid_u64_bin_max")) ==
          std::numeric_limits<uint64_t>::max());
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