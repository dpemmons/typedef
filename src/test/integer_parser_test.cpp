// #include "integer_parser.h"

// #include <catch2/catch_template_test_macros.hpp>
// #include <catch2/catch_test_macros.hpp>
// #include <catch2/generators/catch_generators.hpp>
// #include <catch2/matchers/catch_matchers_all.hpp>
// #include <climits>
// #include <cstdint>
// #include <string>
// #include <utility>

// #include "scalar_value.h"

// using namespace td::internal;
// using namespace td;

// TEST_CASE("parseIntegerLiteral Decimal literals without suffix",
//           "[parseIntegerLiteral][unsuffixed][decimals]") {
//   // Positive numbers.
//   SECTION("42") {
//     auto result = parseIntegerLiteral("42");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(42, false));
//   }

//   SECTION("32767") {
//     auto result = parseIntegerLiteral("32767");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(32767, false));
//   }

//   SECTION("2147483647") {
//     auto result = parseIntegerLiteral("2147483647");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(2147483647, false));
//   }

//   SECTION("9223372036854775807") {
//     auto result = parseIntegerLiteral("9223372036854775807");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateI64(9223372036854775807, false));
//   }

// #if HAS_128
//   SECTION("170141183460469231731687303715884105727") {
//     auto result =
//         parseIntegerLiteral("170141183460469231731687303715884105727");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateU128(170141183460469231731687303715884105727,
//                                     false));
//   }
// #endif  // HAS_128

//   SECTION("255") {
//     auto result = parseIntegerLiteral("255");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(255, false));
//   }

//   SECTION("65535") {
//     auto result = parseIntegerLiteral("65535");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(65535, false));
//   }

//   SECTION("4294967295") {
//     auto result = parseIntegerLiteral("4294967295");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateU32(4294967295, false));
//   }

//   SECTION("18446744073709551615") {
//     auto result = parseIntegerLiteral("18446744073709551615");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateU64(18446744073709551615, false));
//   }

// #if HAS_128
//   SECTION("340282366920938463463374607431768211455") {
//     auto result =
//         parseIntegerLiteral("340282366920938463463374607431768211455");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateU128(340282366920938463463374607431768211455,
//                                     false));
//   }
// #endif  // HAS_128

//   // Negative numbers
//   SECTION("-42") {
//     auto result = parseIntegerLiteral("-42");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(-42, false));
//   }

//   SECTION("-32768") {
//     auto result = parseIntegerLiteral("-32768");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(-32768, false));
//   }

//   SECTION("-2147483648") {
//     auto result = parseIntegerLiteral("-2147483648");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(-2147483648, false));
//   }

//   SECTION("-9223372036854775808") {
//     auto result = parseIntegerLiteral("-9223372036854775808");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateI64(-9223372036854775808, false));
//   }

// #if HAS_128
//   SECTION("-170141183460469231731687303715884105728") {
//     auto result =
//         parseIntegerLiteral("-170141183460469231731687303715884105728");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateI128(-170141183460469231731687303715884105728,
//                                     false));
//   }
// #endif  // HAS_128
// }

// #if 1
// TEST_CASE("parseIntegerLiteral Binary literals without suffix",
//           "[parseIntegerLiteral][unsuffixed][binary]") {
//   // Positive numbers
//   SECTION("0b1010") {
//     auto result = parseIntegerLiteral("0b1010");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(10, false));
//   }

//   SECTION("0b11111111") {
//     auto result = parseIntegerLiteral("0b11111111");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(255, false));
//   }

//   SECTION("0b1111111111111111") {
//     auto result = parseIntegerLiteral("0b1111111111111111");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(65535, false));
//   }

//   SECTION("0b11111111111111111111111111111111") {
//     auto result = parseIntegerLiteral("0b11111111111111111111111111111111");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateU32(4294967295, false));
//   }

//   SECTION(
//       "0b1111111111111111111111111111111111111111111111111111111111111111") {
//     auto result = parseIntegerLiteral(
//         "0b1111111111111111111111111111111111111111111111111111111111111111");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateU64(18446744073709551615, false));
//   }

// #if HAS_128
//   SECTION(
//       "0b1111111111111111111111111111111111111111111111111111111111111111111111"
//       "111111111111111111111111111111111111111111111111") {
//     auto result = parseIntegerLiteral(
//         "0b111111111111111111111111111111111111111111111111111111111111111111"
//         "1111111111111111111111111111111111111111111111111111");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateU128(340282366920938463463374607431768211455,
//                                     false));
//   }
// #endif

// #if NEGATIVE_WITHOUT_SUFFIX
//   // Negative numbers (two's complement representation)
//   SECTION("0b1111111111111010") {
//     auto result = parseIntegerLiteral("0b1111111111111010");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(-6, false));
//   }

//   SECTION("0b11111111111111111111111110000000") {
//     auto result = parseIntegerLiteral("0b11111111111111111111111110000000");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(-128, false));
//   }

//   SECTION(
//       "0b1111111111111111111111111111111111111111111111111111111111111110") {
//     auto result = parseIntegerLiteral(
//         "0b1111111111111111111111111111111111111111111111111111111111111110");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI64(-2, false));
//   }

//   SECTION(
//       "0b1111111111111111111111111111111111111111111111111000000000000000") {
//     auto result = parseIntegerLiteral(
//         "0b1111111111111111111111111111111111111111111111111000000000000000");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI16(-32768, false));
//   }

//   SECTION(
//       "0b1111111111111111111111111000000000000000000000000000000000000000") {
//     auto result = parseIntegerLiteral(
//         "0b1111111111111111111111111000000000000000000000000000000000000000");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(-2147483648, false));
//   }

//   SECTION(
//       "0b1000000000000000000000000000000000000000000000000000000000000000") {
//     auto result = parseIntegerLiteral(
//         "0b1000000000000000000000000000000000000000000000000000000000000000");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateI64(-9223372036854775808, false));
//   }

// #if HAS_128
//   SECTION(
//       "0b1000000000000000000000000000000000000000000000000000000000000000000000"
//       "0000000000000000000000000000000000000000000000000000000") {
//     auto result = parseIntegerLiteral(
//         "0b100000000000000000000000000000000000000000000000000000000000000000"
//         "00000000000000000000000000000000000000000000000000000000000");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateI128(-170141183460469231731687303715884105728,
//                                     false));
//   }
// #endif
// #endif  // NEGATIVE_WITHOUT_SUFFIX
// }
// #endif

// #if 1
// TEST_CASE("parseIntegerLiteral Octal literals without suffix",
//           "[parseIntegerLiteral][unsuffixed][octal]") {
//   // Positive numbers
//   SECTION("0o12") {
//     auto result = parseIntegerLiteral("0o12");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(10, false));
//   }

//   SECTION("0o377") {
//     auto result = parseIntegerLiteral("0o377");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(255, false));
//   }

//   SECTION("0o177777") {
//     auto result = parseIntegerLiteral("0o177777");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(65535, false));
//   }

//   SECTION("0o37777777777") {
//     auto result = parseIntegerLiteral("0o37777777777");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateU32(4294967295, false));
//   }

//   SECTION("0o1777777777777777777777") {
//     auto result = parseIntegerLiteral("0o1777777777777777777777");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateU64(18446744073709551615, false));
//   }

// #if HAS_128
//   SECTION("0o377777777777777777777777777777777777") {
//     auto result = parseIntegerLiteral("0o377777777777777777777777777777777777");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateU128(340282366920938463463374607431768211455,
//                                     false));
//   }
// #endif

// #if NEGATIVE_WITHOUT_SUFFIX
//   // Negative numbers (two's complement representation)
//   SECTION("0o377777776") {
//     auto result = parseIntegerLiteral("0o377777776");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI8(-10, false));
//   }

//   SECTION("0o37777760000") {
//     auto result = parseIntegerLiteral("0o37777760000");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI16(-32768, false));
//   }

//   SECTION("0o37777777776") {
//     auto result = parseIntegerLiteral("0o37777777776");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(-10, false));
//   }

//   SECTION("0o20000000000") {
//     auto result = parseIntegerLiteral("0o20000000000");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(-2147483648, false));
//   }

//   SECTION("0o1777777777777777777760") {
//     auto result = parseIntegerLiteral("0o1777777777777777777760");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateI64(-9223372036854775808, false));
//   }

// #if HAS_128
//   SECTION("XXXX0o2000000000000000000000000000000000000XXXX") {
//     auto result =
//         parseIntegerLiteral("0o2000000000000000000000000000000000000");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateI128(-170141183460469231731687303715884105728,
//                                     false));
//   }
// #endif
// #endif  // NEGATIVE_WITHOUT_SUFFIX
// }
// #endif

// #if 1
// TEST_CASE("parseIntegerLiteral Hexadecimal literals without suffix",
//           "[parseIntegerLiteral][unsuffixed][hex]") {
//   // Positive numbers
//   SECTION("0xA") {
//     auto result = parseIntegerLiteral("0xA");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(10, false));
//   }

//   SECTION("0xFF") {
//     auto result = parseIntegerLiteral("0xFF");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(255, false));
//   }

//   SECTION("0xFFFF") {
//     auto result = parseIntegerLiteral("0xFFFF");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(65535, false));
//   }

//   SECTION("0xFFFFFFFF") {
//     auto result = parseIntegerLiteral("0xFFFFFFFF");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateU32(4294967295, false));
//   }

//   SECTION("0xFFFFFFFFFFFFFFFF") {
//     auto result = parseIntegerLiteral("0xFFFFFFFFFFFFFFFF");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateU64(18446744073709551615, false));
//   }

// #if HAS_128
//   SECTION("0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF") {
//     auto result = parseIntegerLiteral("0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateU128(340282366920938463463374607431768211455,
//                                     false));
//   }
// #endif

// #if NEGATIVE_WITHOUT_SUFFIX
//   // Negative numbers (two's complement representation)
//   SECTION("0xF6") {
//     auto result = parseIntegerLiteral("0xF6");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(-10, false));
//   }

//   SECTION("0x8000") {
//     auto result = parseIntegerLiteral("0x8000");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(-32768, false));
//   }

//   SECTION("0xFFFFFFFA") {
//     auto result = parseIntegerLiteral("0xFFFFFFFA");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(-6, false));
//   }

//   SECTION("0x80000000") {
//     auto result = parseIntegerLiteral("0x80000000");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(-2147483648, false));
//   }

//   SECTION("0x8000000000000000") {
//     auto result = parseIntegerLiteral("0x8000000000000000");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateI64(-9223372036854775808, false));
//   }

// #if HAS_128
//   SECTION("0x80000000000000000000000000000000") {
//     auto result = parseIntegerLiteral("0x80000000000000000000000000000000");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateI128(-170141183460469231731687303715884105728,
//                                     false));
//   }
// #endif
// #endif  // NEGATIVE_WITHOUT_SUFFIX
// }
// #endif

// #if 1
// TEST_CASE("parseIntegerLiteral Decimal literals with suffix",
//           "[parseIntegerLiteral][suffix][decimals]") {
//   // Positive numbers
//   SECTION("42u8") {
//     auto result = parseIntegerLiteral("42u8");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateU8(42));
//   }

//   SECTION("42i8") {
//     auto result = parseIntegerLiteral("42i8");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI8(42));
//   }

//   SECTION("32767i16") {
//     auto result = parseIntegerLiteral("32767i16");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI16(32767));
//   }

//   SECTION("2147483647i32") {
//     auto result = parseIntegerLiteral("2147483647i32");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(2147483647));
//   }

//   SECTION("9223372036854775807i64") {
//     auto result = parseIntegerLiteral("9223372036854775807i64");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI64(9223372036854775807));
//   }

// #if HAS_128
//   SECTION("170141183460469231731687303715884105727i128") {
//     auto result =
//         parseIntegerLiteral("170141183460469231731687303715884105727i128");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateI128(170141183460469231731687303715884105727));
//   }
// #endif

//   // Negative numbers
//   SECTION("-42i8") {
//     auto result = parseIntegerLiteral("-42i8");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI8(-42));
//   }

//   SECTION("-32768i16") {
//     auto result = parseIntegerLiteral("-32768i16");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI16(-32768));
//   }

//   SECTION("-2147483648i32") {
//     auto result = parseIntegerLiteral("-2147483648i32");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(-2147483648));
//   }

//   SECTION("-9223372036854775808i64") {
//     auto result = parseIntegerLiteral("-9223372036854775808i64");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI64(-9223372036854775808));
//   }

// #if HAS_128
//   SECTION("-170141183460469231731687303715884105728i128") {
//     auto result =
//         parseIntegerLiteral("-170141183460469231731687303715884105728i128");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateI128(-170141183460469231731687303715884105728));
//   }
// #endif
// }
// #endif

// #if 1
// TEST_CASE("parseIntegerLiteral too big Decimal literals with suffix",
//           "[parseIntegerLiteral][suffix][decimals][toobig]") {
//   SECTION("256u8") {
//     auto result = parseIntegerLiteral("256u8");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("128i8") {
//     auto result = parseIntegerLiteral("128i8");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("32768i16") {
//     auto result = parseIntegerLiteral("32768i16");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("65536u16") {
//     auto result = parseIntegerLiteral("65536u16");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("2147483648i32") {
//     auto result = parseIntegerLiteral("2147483648i32");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("4294967296u32") {
//     auto result = parseIntegerLiteral("4294967296u32");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("9223372036854775808i64") {
//     auto result = parseIntegerLiteral("9223372036854775808i64");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("18446744073709551616u64") {
//     auto result = parseIntegerLiteral("18446744073709551616u64");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("170141183460469231731687303715884105729i128") {
//     auto result =
//         parseIntegerLiteral("170141183460469231731687303715884105729i128");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("340282366920938463463374607431768211456u128") {
//     auto result =
//         parseIntegerLiteral("340282366920938463463374607431768211456u128");
//     REQUIRE(!result.has_value());
//   }
// }
// #endif

// #if 1
// TEST_CASE("parseIntegerLiteral Binary literals with suffix",
//           "[parseIntegerLiteral][suffix][binary]") {
//   // Positive numbers
//   SECTION("0b101010u8") {
//     auto result = parseIntegerLiteral("0b101010u8");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateU8(42));
//   }

//   SECTION("0b101010i8") {
//     auto result = parseIntegerLiteral("0b101010i8");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI8(42));
//   }

//   SECTION("0b1000000000000000u16") {
//     auto result = parseIntegerLiteral("0b1000000000000000u16");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateU16(32768));
//   }

//   SECTION("0b1111111111111111u16") {
//     auto result = parseIntegerLiteral("0b1111111111111111u16");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateU16(65535));
//   }

//   SECTION("0b1111111111111111111111111111111i32") {
//     auto result = parseIntegerLiteral("0b1111111111111111111111111111111i32");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(2147483647));
//   }

//   SECTION("0b11111111111111111111111111111111u32") {
//     auto result = parseIntegerLiteral("0b11111111111111111111111111111111u32");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateU32(4294967295));
//   }

//   SECTION(
//       "0b111111111111111111111111111111111111111111111111111111111111111i64") {
//     auto result = parseIntegerLiteral(
//         "0b111111111111111111111111111111111111111111111111111111111111111i64");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI64(9223372036854775807));
//   }

//   SECTION(
//       "0b1111111111111111111111111111111111111111111111111111111111111111u64") {
//     auto result = parseIntegerLiteral(
//         "0b1111111111111111111111111111111111111111111111111111111111111111u6"
//         "4");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateU64(18446744073709551615));
//   }

// #if HAS_128
//   // Negative numbers
//   SECTION(
//       "0b111111111111111111111111111111111111111111111111111111111111110110i12"
//       "8") {
//     auto result = parseIntegerLiteral(
//         "0b111111111111111111111111111111111111111111111111111111111111110110"
//         "i128");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateI128(-170141183460469231731687303715884105728));
//   }

//   SECTION(
//       "0b111111111111111111111111111111111111111111111111111111111111110101i12"
//       "8") {
//     auto result = parseIntegerLiteral(
//         "0b111111111111111111111111111111111111111111111111111111111111110101"
//         "i128");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateI128(-170141183460469231731687303715884105727));
//   }
// #endif  // HAS_128
// }
// #endif

// #if 1
// TEST_CASE("parseIntegerLiteral too big Binary literals with suffix",
//           "[parseIntegerLiteral][suffix][binary][toobig]") {
//   SECTION("0b100000000u8") {
//     auto result = parseIntegerLiteral("0b100000000u8");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("0b10000000i8") {
//     auto result = parseIntegerLiteral("0b10000000i8");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("0b10000000000000000i16") {
//     auto result = parseIntegerLiteral("0b10000000000000000i16");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("0b100000000000000000u16") {
//     auto result = parseIntegerLiteral("0b100000000000000000u16");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("0b100000000000000000000000000000000i32") {
//     auto result = parseIntegerLiteral("0b100000000000000000000000000000000i32");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("0b1000000000000000000000000000000000u32") {
//     auto result =
//         parseIntegerLiteral("0b1000000000000000000000000000000000u32");
//     REQUIRE(!result.has_value());
//   }

//   SECTION(
//       "0b10000000000000000000000000000000000000000000000000000000000000000i6"
//       "4") {
//     auto result = parseIntegerLiteral(
//         "0b10000000000000000000000000000000000000000000000000000000000000000i"
//         "64");
//     REQUIRE(!result.has_value());
//   }

//   SECTION(
//       "0b100000000000000000000000000000000000000000000000000000000000000000u6"
//       "4") {
//     auto result = parseIntegerLiteral(
//         "0b100000000000000000000000000000000000000000000000000000000000000000"
//         "u64");
//     REQUIRE(!result.has_value());
//   }

//   SECTION(
//       "0b1000000000000000000000000000000000000000000000000000000000000000000000"
//       "0000000000000000000000000000000i128") {
//     auto result = parseIntegerLiteral(
//         "0b100000000000000000000000000000000000000000000000000000000000000000"
//         "00000000000000000000000000000000000i128");
//     REQUIRE(!result.has_value());
//   }

//   SECTION(
//       "0b1000000000000000000000000000000000000000000000000000000000000000000000"
//       "00000000000000000000000000000000u128") {
//     auto result = parseIntegerLiteral(
//         "0b100000000000000000000000000000000000000000000000000000000000000000"
//         "000000000000000000000000000000000000u128");
//     REQUIRE(!result.has_value());
//   }
// }
// #endif

// #if 1
// TEST_CASE("parseIntegerLiteral Octal literals with suffix",
//           "[parseIntegerLiteral][suffix][octal]") {
//   // Positive numbers
//   SECTION("0o52u8") {
//     auto result = parseIntegerLiteral("0o52u8");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateU8(42));
//   }

//   SECTION("0o52i8") {
//     auto result = parseIntegerLiteral("0o52i8");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI8(42));
//   }

//   SECTION("0o100000i16") {
//     auto result = parseIntegerLiteral("0o100000i16");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI16(32768));
//   }

//   SECTION("0o177777u16") {
//     auto result = parseIntegerLiteral("0o177777u16");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateU16(65535));
//   }

//   SECTION("0o17777777777i32") {
//     auto result = parseIntegerLiteral("0o17777777777i32");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(2147483647));
//   }

//   SECTION("0o37777777777u32") {
//     auto result = parseIntegerLiteral("0o37777777777u32");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateU32(4294967295));
//   }

//   SECTION("0o777777777777777777777i64") {
//     auto result = parseIntegerLiteral("0o777777777777777777777i64");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI64(9223372036854775807));
//   }

//   SECTION("0o1777777777777777777777u64") {
//     auto result = parseIntegerLiteral("0o1777777777777777777777u64");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateU64(18446744073709551615));
//   }

//   // Negative numbers
//   SECTION("0o1777777777777777777777777777777777777770i128") {
//     auto result =
//         parseIntegerLiteral("0o1777777777777777777777777777777777777770i128");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateI128(-170141183460469231731687303715884105728));
//   }

//   SECTION("0o1777777777777777777777777777777777777767i128") {
//     auto result =
//         parseIntegerLiteral("0o1777777777777777777777777777777777777767i128");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateI128(-170141183460469231731687303715884105727));
//   }
// }
// #endif

// #if 0
// TEST_CASE("parseIntegerLiteral too big Octal literals with suffix",
//           "[parseIntegerLiteral][suffix][octal][toobig]") {
//   SECTION("0o400u8") {
//     auto result = parseIntegerLiteral("0o400u8");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("0o400i8") {
//     auto result = parseIntegerLiteral("0o400i8");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("0o200000i16") {
//     auto result = parseIntegerLiteral("0o200000i16");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("0o400000u16") {
//     auto result = parseIntegerLiteral("0o400000u16");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("0o40000000000i32") {
//     auto result = parseIntegerLiteral("0o40000000000i32");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("0o100000000000u32") {
//     auto result = parseIntegerLiteral("0o100000000000u32");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("0o4000000000000000000000i64") {
//     auto result = parseIntegerLiteral("0o4000000000000000000000i64");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("0o10000000000000000000000u64") {
//     auto result = parseIntegerLiteral("0o10000000000000000000000u64");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("0o20000000000000000000000000000000000000000i128") {
//     auto result =
//         parseIntegerLiteral("0o20000000000000000000000000000000000000000i128");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("0o40000000000000000000000000000000000000000u128") {
//     auto result =
//         parseIntegerLiteral("0o40000000000000000000000000000000000000000u128");
//     REQUIRE(!result.has_value());
//   }
// }
// #endif

// #if 0
// TEST_CASE("parseIntegerLiteral Hexidecimal literals with suffix",
//           "[parseIntegerLiteral][suffix][hex]") {
//   // Positive numbers
//   SECTION("0x2Au8") {
//     auto result = parseIntegerLiteral("0x2Au8");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateU8(42));
//   }

//   SECTION("0x2Ai8") {
//     auto result = parseIntegerLiteral("0x2Ai8");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI8(42));
//   }

//   SECTION("0x8000i16") {
//     auto result = parseIntegerLiteral("0x8000i16");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI16(32768));
//   }

//   SECTION("0x10000u16") {
//     auto result = parseIntegerLiteral("0x10000u16");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateU16(65536));
//   }

//   SECTION("0x80000000i32") {
//     auto result = parseIntegerLiteral("0x80000000i32");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI32(2147483648));
//   }

//   SECTION("0x100000000u32") {
//     auto result = parseIntegerLiteral("0x100000000u32");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateU32(4294967296));
//   }

//   SECTION("0x8000000000000000i64") {
//     auto result = parseIntegerLiteral("0x8000000000000000i64");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateI64(9223372036854775808));
//   }

//   SECTION("0x10000000000000000u64") {
//     auto result = parseIntegerLiteral("0x10000000000000000u64");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() == ScalarValue::CreateU64(18446744073709551616));
//   }

//   // Negative numbers
//   SECTION(
//       "0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF8000000000000000i128") {
//     auto result = parseIntegerLiteral(
//         "0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF8000000000000000i128");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateI128(-170141183460469231731687303715884105728));
//   }

//   SECTION(
//       "0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF8000000000000001i128") {
//     auto result = parseIntegerLiteral(
//         "0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF8000000000000001i128");
//     REQUIRE(result.has_value());
//     REQUIRE(result.value() ==
//             ScalarValue::CreateI128(-170141183460469231731687303715884105727));
//   }
// }
// #endif

// #if 0
// TEST_CASE("parseIntegerLiteral too big Hexidecimal literals with suffix",
//           "[parseIntegerLiteral][suffix][hex][toobig]") {
//   SECTION("0x100u8") {
//     auto result = parseIntegerLiteral("0x100u8");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("0x100i8") {
//     auto result = parseIntegerLiteral("0x100i8");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("0x10000i16") {
//     auto result = parseIntegerLiteral("0x10000i16");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("0x20000u16") {
//     auto result = parseIntegerLiteral("0x20000u16");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("0x100000000i32") {
//     auto result = parseIntegerLiteral("0x100000000i32");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("0x200000000u32") {
//     auto result = parseIntegerLiteral("0x200000000u32");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("0x10000000000000000i64") {
//     auto result = parseIntegerLiteral("0x10000000000000000i64");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("0x20000000000000000u64") {
//     auto result = parseIntegerLiteral("0x20000000000000000u64");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("0x100000000000000000000000000000000i128") {
//     auto result =
//         parseIntegerLiteral("0x100000000000000000000000000000000i128");
//     REQUIRE(!result.has_value());
//   }

//   SECTION("0x200000000000000000000000000000000u128") {
//     auto result =
//         parseIntegerLiteral("0x200000000000000000000000000000000u128");
//     REQUIRE(!result.has_value());
//   }
// }
// #endif

// auto u8min = ScalarValue::CreateU8(0);
// auto u8max = ScalarValue::CreateU8(UCHAR_MAX); // 255

// auto i8min = ScalarValue::CreateI8(CHAR_MIN); // −128	
// auto i8max = ScalarValue::CreateI8(CHAR_MAX); // 127

// auto u16min = ScalarValue::CreateU16(0);
// auto u16max = ScalarValue::CreateU16(USHRT_MAX); // +65,535

// auto i16min = ScalarValue::CreateI16(SHRT_MIN); // −32,768	
// auto i16max = ScalarValue::CreateI16(SHRT_MAX); // +32,767


// auto u32min = ScalarValue::CreateU32(0);
// auto u32max = ScalarValue::CreateU32(UINT_MAX); // +4,294,967,295

// auto i32min = ScalarValue::CreateI32(INT_MIN); // −2,147,483,648
// auto i32max = ScalarValue::CreateI32(INT_MAX); // +2,147,483,647

// auto u64min = ScalarValue::CreateU64(0);
// auto u64max = ScalarValue::CreateU64(18446744073709551615);

// auto i64min = ScalarValue::CreateI64(-9223372036854775808);
// auto i64max = ScalarValue::CreateI64(9223372036854775807);

// // TODO: tests for underscores
