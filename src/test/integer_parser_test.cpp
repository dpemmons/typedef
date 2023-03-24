#include "integer_parser.h"

#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>

#include "scalar_value.h"

using namespace td::internal;

TEST_CASE("Test td::internal::parseIntegerLiteral with various integer types",
          "[td::internal::parseIntegerLiteral]") {
  SECTION("Decimal literals without suffix.") {
    auto result1 = parseIntegerLiteral("42");
    REQUIRE(result1.has_value());
    REQUIRE(result1->GetType().IsI8());
    REQUIRE(result1->Int8Value() == 42);

    auto result2 = parseIntegerLiteral("32767");
    REQUIRE(result2.has_value());
    REQUIRE(result2->GetType().IsI16());
    REQUIRE(result2->Int16Value() == 32767);

    auto result3 = parseIntegerLiteral("2147483647");
    REQUIRE(result3.has_value());
    REQUIRE(result3->GetType().IsI32());
    REQUIRE(result3->Int32Value() == 2147483647);

    auto result4 = parseIntegerLiteral("9223372036854775807");
    REQUIRE(result4.has_value());
    REQUIRE(result4->GetType().IsI64());
    REQUIRE(result4->Int64Value() == 9223372036854775807);
  }

  SECTION("Binary literals") {
    REQUIRE(parseIntegerLiteral("0b10101010_i8")->Int8Value() ==
            static_cast<int8_t>(170));
    REQUIRE(parseIntegerLiteral("0b1111111111111111_i16")->Int16Value() ==
            static_cast<int16_t>(0xFFFF));
    REQUIRE(parseIntegerLiteral("0b10000000_u8")->Uint8Value() == 128);
  }

  SECTION("Octal literals") {
    REQUIRE(parseIntegerLiteral("0o123_i8")->Int8Value() == 83);
    REQUIRE(parseIntegerLiteral("0o12345_i16")->Int16Value() == 5349);
    REQUIRE(parseIntegerLiteral("0o12345_u16")->Uint16Value() == 5349);
  }

  SECTION("Hexadecimal literals") {
    REQUIRE(parseIntegerLiteral("0x7F_i8")->Int8Value() == 127);
    REQUIRE(parseIntegerLiteral("0x7FFF_i16")->Int16Value() == 32767);
    REQUIRE(parseIntegerLiteral("0x7FFFFFFF_i32")->Int32Value() == 2147483647);
    REQUIRE(parseIntegerLiteral("0x7FFFFFFFFFFFFFFF_i64")->Int64Value() ==
            9223372036854775807);
    REQUIRE(parseIntegerLiteral("0x80_u8")->Uint8Value() == 128);
    REQUIRE(parseIntegerLiteral("0x8000_u16")->Uint16Value() == 32768);
    REQUIRE(parseIntegerLiteral("0x80000000_u32")->Uint32Value() == 2147483648);
    REQUIRE(parseIntegerLiteral("0x8000000000000000_u64")->Uint64Value() ==
            9223372036854775808ull);
  }

  SECTION("Invalid literals") {
    REQUIRE(parseIntegerLiteral("0xGG") == std::nullopt);
    REQUIRE(parseIntegerLiteral("0o888") == std::nullopt);
    REQUIRE(parseIntegerLiteral("0b10102") == std::nullopt);
  }
}