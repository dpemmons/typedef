#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>

#define FMT_HEADER_ONLY
#include "fmt/core.h"
#include "fmt/ostream.h"
#include "type.h"

using namespace std;

namespace Catch {
template <>
struct StringMaker<unique_ptr<td::I8>> {
  static string convert(unique_ptr<td::I8> const& v) {
    if (v == nullptr) {
      return "nullptr";
    } else {
      return v->ToString();
    }
  }
};

template <>
struct StringMaker<optional<int8_t>> {
  static string convert(optional<int8_t> const& v) {
    return fmt::format("{}", v.value());
  }
};

template <>
struct StringMaker<unique_ptr<td::I16>> {
  static string convert(unique_ptr<td::I16> const& v) {
    if (v == nullptr) {
      return "nullptr";
    } else {
      return v->ToString();
    }
  }
};

template <>
struct StringMaker<unique_ptr<td::I32>> {
  static string convert(unique_ptr<td::I32> const& v) {
    if (v == nullptr) {
      return "nullptr";
    } else {
      return v->ToString();
    }
  }
};

template <>
struct StringMaker<unique_ptr<td::I64>> {
  static string convert(unique_ptr<td::I64> const& v) {
    if (v == nullptr) {
      return "nullptr";
    } else {
      return v->ToString();
    }
  }
};

template <>
struct StringMaker<unique_ptr<td::U8>> {
  static string convert(unique_ptr<td::U8> const& v) {
    if (v == nullptr) {
      return "nullptr";
    } else {
      return v->ToString();
    }
  }
};

template <>
struct StringMaker<unique_ptr<td::U16>> {
  static string convert(unique_ptr<td::U16> const& v) {
    if (v == nullptr) {
      return "nullptr";
    } else {
      return v->ToString();
    }
  }
};

template <>
struct StringMaker<unique_ptr<td::U32>> {
  static string convert(unique_ptr<td::U32> const& v) {
    if (v == nullptr) {
      return "nullptr";
    } else {
      return v->ToString();
    }
  }
};

template <>
struct StringMaker<unique_ptr<td::U64>> {
  static string convert(unique_ptr<td::U64> const& v) {
    if (v == nullptr) {
      return "nullptr";
    } else {
      return v->ToString();
    }
  }
};

}  // namespace Catch

namespace td {

template <typename T>
void TestEquality() {
  auto one = T::FromLiteral("1");
  auto one_again = T::FromLiteral("1");
  auto two = T::FromLiteral("2");

  REQUIRE(*one == *one_again);
  REQUIRE(*one != *two);
}

// Handy for debugging a specific case...
// TEST_CASE("42", "[temporary][debug]") {
//   auto actual = I8::FromLiteral("42i16");
//   REQUIRE(actual != nullptr);
//   REQUIRE(actual->IsI8());
//   REQUIRE(actual->HasValue());
//   REQUIRE(actual->Value().has_value());
//   REQUIRE((int)actual->Value().value() == 42);
// }

TEST_CASE("i8 literal conversions", "[types][i8]") {
  vector<pair<string, optional<int8_t>>> i8_test_cases = {
      // no suffix
      {"42", 42},        // decimal
      {"0x2A", 42},      // hex
      {"0o52", 42},      // oct
      {"0b101010", 42},  // binary

      {"", nullopt},    // decimal
      {"0x", nullopt},  // hex
      {"0o", nullopt},  // oct
      {"0b", nullopt},  // binary

      // wrong suffix (should fail)
      // this is passing because from_chars ignores non-numbers at the end.
      // should be able to fix using result.ptr ?
      {"42i16", nullopt},  // decimal

      // suffix
      {"42i8", 42},        // decimal
      {"0x2Ai8", 42},      // hex
      {"0o52i8", 42},      // oct
      {"0b101010i8", 42},  // binary

      // suffix with leading underscore
      {"_42i8", 42},        // decimal
      {"0x_2Ai8", 42},      // hex
      {"0o_52i8", 42},      // oct
      {"0b_101010i8", 42},  // binary

      // suffix with trailing underscore
      {"42_i8", 42},        // decimal
      {"0x2A_i8", 42},      // hex
      {"0o52_i8", 42},      // oct
      {"0b101010_i8", 42},  // binary

      // suffix with middle underscore
      {"4_2i8", 42},        // decimal
      {"0x2_Ai8", 42},      // hex
      {"0o5_2i8", 42},      // oct
      {"0b1010_10i8", 42},  // binary

      // suffix with leading, trailing and middle underscore
      {"_4_2_i8", 42},        // decimal
      {"0x_2_A_i8", 42},      // hex
      {"0o_5_2_i8", 42},      // oct
      {"0b_1010_10_i8", 42},  // binary

      // emtpy
      {"i8", nullopt},    // decimal
      {"0xi8", nullopt},  // hex
      {"0oi8", nullopt},  // oct
      {"0bi8", nullopt},  // binary
      // emtpy with underscore
      {"_i8", nullopt},    // decimal
      {"0x_i8", nullopt},  // hex
      {"0o_i8", nullopt},  // oct
      {"0b_i8", nullopt},  // binary
      // invalid character
      {"Zi8", nullopt},    // decimal
      {"0xZi8", nullopt},  // hex
      {"0oZi8", nullopt},  // oct
      {"0bZi8", nullopt},  // binary
      // invalid decimal
      {"42.1i8", nullopt},    // decimal
      {"0x42.1i8", nullopt},  // hex
      {"0o42.1i8", nullopt},  // oct
      {"0b42.1i8", nullopt},  // binary

      // max
      {"127i8", 127},        // decimal
      {"0x7Fi8", 127},       // hex
      {"0o177i8", 127},      // oct
      {"0b1111111i8", 127},  // binary

      // min
      {"-128i8", -128},     // decimal
      {"0x-80i8", -128},    // hex
      {"0x80i8", nullopt},  // two's complement hex

      // leading zeros are OK
      {"0000000000127i8", 127},        // decimal
      {"0x00000000007Fi8", 127},       // hex
      {"0o0000000000177i8", 127},      // oct
      {"0b00000000001111111i8", 127},  // binary

      // leading spaces are bad
      {"  127i8", nullopt},  // decimal

  };
  for (auto p : i8_test_cases) {
    if (p.second.has_value()) {
      DYNAMIC_SECTION(p.first << " -> " << (int)p.second.value()) {
        auto actual = I8::FromLiteral(p.first);
        REQUIRE(actual != nullptr);
        REQUIRE(actual->IsI8());
        REQUIRE(actual->HasValue());
        REQUIRE(actual->Value().has_value());
        REQUIRE((int)actual->Value().value() == (int)p.second.value());
      }
    } else {
      DYNAMIC_SECTION(p.first << " does not parse") {
        auto actual = I8::FromLiteral(p.first);
        REQUIRE(actual == nullptr);
      }
    }
  }
}

TEST_CASE("Equality", "[types][i8]") {
  TestEquality<I8>();
}

TEST_CASE("i16 literal conversions", "[types][i16]") {
  vector<pair<string, optional<int16_t>>> i16_test_cases = {
      // no suffix
      {"42", 42},        // decimal
      {"0x2A", 42},      // hex
      {"0o52", 42},      // oct
      {"0b101010", 42},  // binary

      {"", nullopt},    // decimal
      {"0x", nullopt},  // hex
      {"0o", nullopt},  // oct
      {"0b", nullopt},  // binary

      // suffix
      {"42i16", 42},        // decimal
      {"0x2Ai16", 42},      // hex
      {"0o52i16", 42},      // oct
      {"0b101010i16", 42},  // binary

      // suffix with leading underscore
      {"_42i16", 42},        // decimal
      {"0x_2Ai16", 42},      // hex
      {"0o_52i16", 42},      // oct
      {"0b_101010i16", 42},  // binary

      // suffix with trailing underscore
      {"42_i16", 42},        // decimal
      {"0x2A_i16", 42},      // hex
      {"0o52_i16", 42},      // oct
      {"0b101010_i16", 42},  // binary

      // suffix with middle underscore
      {"4_2i16", 42},        // decimal
      {"0x2_Ai16", 42},      // hex
      {"0o5_2i16", 42},      // oct
      {"0b1010_10i16", 42},  // binary

      // suffix with leading, trailing and middle underscore
      {"_4_2_i16", 42},        // decimal
      {"0x_2_A_i16", 42},      // hex
      {"0o_5_2_i16", 42},      // oct
      {"0b_1010_10_i16", 42},  // binary

      // emtpy
      {"i16", nullopt},    // decimal
      {"0xi16", nullopt},  // hex
      {"0oi16", nullopt},  // oct
      {"0bi16", nullopt},  // binary
      // emtpy with underscore
      {"_i16", nullopt},    // decimal
      {"0x_i16", nullopt},  // hex
      {"0o_i16", nullopt},  // oct
      {"0b_i16", nullopt},  // binary
      // invalid character
      {"Zi16", nullopt},    // decimal
      {"0xZi16", nullopt},  // hex
      {"0oZi16", nullopt},  // oct
      {"0bZi16", nullopt},  // binary
      // invalid decimal
      {"42.1i16", nullopt},    // decimal
      {"0x42.1i16", nullopt},  // hex
      {"0o42.1i16", nullopt},  // oct
      {"0b42.1i16", nullopt},  // binary

      // max
      {"32767i16", 32767},              // decimal
      {"0x7FFFi16", 32767},             // hex
      {"0o77777i16", 32767},            // oct
      {"0b111111111111111i16", 32767},  // binary

      // min
      {"-32768i16", -32768},   // decimal
      {"0x-8000i16", -32768},  // hex
      {"0x8000i16", nullopt},  // two's complement hex

      // leading zeros are OK
      {"000000000032767i16", 32767},              // decimal
      {"0x00000000007FFFi16", 32767},             // hex
      {"0o000000000077777i16", 32767},            // oct
      {"0b0000000000111111111111111i16", 32767},  // binary

      // leading spaces are bad
      {"  32767i16", nullopt},  // decimal

  };
  for (auto p : i16_test_cases) {
    if (p.second.has_value()) {
      DYNAMIC_SECTION(p.first << " -> " << p.second.value()) {
        auto actual = I16::FromLiteral(p.first);
        REQUIRE(actual != nullptr);
        REQUIRE(actual->IsI16());
        REQUIRE(actual->HasValue());
        REQUIRE(actual->Value().has_value());
        REQUIRE(actual->Value().value() == p.second.value());
      }
    } else {
      DYNAMIC_SECTION(p.first << " does not parse") {
        auto actual = I16::FromLiteral(p.first);
        REQUIRE(actual == nullptr);
      }
    }
  }
}

TEST_CASE("Equality", "[types][i16]") {
  TestEquality<I16>();
}

TEST_CASE("i32 literal conversions", "[types][i32]") {
  vector<pair<string, optional<int32_t>>> i32_test_cases = {
      // no suffix
      {"42", 42},        // decimal
      {"0x2A", 42},      // hex
      {"0o52", 42},      // oct
      {"0b101010", 42},  // binary

      {"", nullopt},    // decimal
      {"0x", nullopt},  // hex
      {"0o", nullopt},  // oct
      {"0b", nullopt},  // binary

      // suffix
      {"42i32", 42},        // decimal
      {"0x2Ai32", 42},      // hex
      {"0o52i32", 42},      // oct
      {"0b101010i32", 42},  // binary

      // suffix with leading underscore
      {"_42i32", 42},        // decimal
      {"0x_2Ai32", 42},      // hex
      {"0o_52i32", 42},      // oct
      {"0b_101010i32", 42},  // binary

      // suffix with trailing underscore
      {"42_i32", 42},        // decimal
      {"0x2A_i32", 42},      // hex
      {"0o52_i32", 42},      // oct
      {"0b101010_i32", 42},  // binary

      // suffix with middle underscore
      {"4_2i32", 42},        // decimal
      {"0x2_Ai32", 42},      // hex
      {"0o5_2i32", 42},      // oct
      {"0b1010_10i32", 42},  // binary

      // suffix with leading, trailing and middle underscore
      {"_4_2_i32", 42},        // decimal
      {"0x_2_A_i32", 42},      // hex
      {"0o_5_2_i32", 42},      // oct
      {"0b_1010_10_i32", 42},  // binary

      // emtpy
      {"i32", nullopt},    // decimal
      {"0xi32", nullopt},  // hex
      {"0oi32", nullopt},  // oct
      {"0bi32", nullopt},  // binary
      // emtpy with underscore
      {"_i32", nullopt},    // decimal
      {"0x_i32", nullopt},  // hex
      {"0o_i32", nullopt},  // oct
      {"0b_i32", nullopt},  // binary
      // invalid character
      {"Zi32", nullopt},    // decimal
      {"0xZi32", nullopt},  // hex
      {"0oZi32", nullopt},  // oct
      {"0bZi32", nullopt},  // binary
      // invalid decimal
      {"42.1i32", nullopt},    // decimal
      {"0x42.1i32", nullopt},  // hex
      {"0o42.1i32", nullopt},  // oct
      {"0b42.1i32", nullopt},  // binary

      // max
      {"2147483647i32", 2147483647},                         // decimal
      {"0x7FFFFFFFi32", 2147483647},                         // hex
      {"0o17777777777i32", 2147483647},                      // oct
      {"0b1111111111111111111111111111111i32", 2147483647},  // binary

      // min
      {"-2147483648i32", -2147483648},  // decimal
      {"0x-80000000i32", -2147483648},  // hex
      {"0x80000000i32", nullopt},       // two's complement hex

      // leading zeros are OK
      {"00000000002147483647i32", 2147483647},                     // decimal
      {"0x00000007FFFFFFFi32", 2147483647},                        // hex
      {"0o000000017777777777i32", 2147483647},                     // oct
      {"0b0000001111111111111111111111111111111i32", 2147483647},  // binary

      // leading spaces are bad
      {"  2147483647i32", nullopt},  // decimal

  };
  for (auto p : i32_test_cases) {
    if (p.second.has_value()) {
      DYNAMIC_SECTION(p.first << " -> " << p.second.value()) {
        auto actual = I32::FromLiteral(p.first);
        REQUIRE(actual != nullptr);
        REQUIRE(actual->IsI32());
        REQUIRE(actual->HasValue());
        REQUIRE(actual->Value().has_value());
        REQUIRE(actual->Value().value() == p.second.value());
      }
    } else {
      DYNAMIC_SECTION(p.first << " does not parse") {
        auto actual = I32::FromLiteral(p.first);
        REQUIRE(actual == nullptr);
      }
    }
  }
}

TEST_CASE("Equality", "[types][i32]") {
  TestEquality<I32>();
}

TEST_CASE("i64 literal conversions", "[types][i64]") {
  vector<pair<string, optional<int64_t>>> i64_test_cases = {
      // no suffix
      {"42", 42},        // decimal
      {"0x2A", 42},      // hex
      {"0o52", 42},      // oct
      {"0b101010", 42},  // binary

      {"", nullopt},    // decimal
      {"0x", nullopt},  // hex
      {"0o", nullopt},  // oct
      {"0b", nullopt},  // binary

      // suffix
      {"42i64", 42},        // decimal
      {"0x2Ai64", 42},      // hex
      {"0o52i64", 42},      // oct
      {"0b101010i64", 42},  // binary

      // suffix with leading underscore
      {"_42i64", 42},        // decimal
      {"0x_2Ai64", 42},      // hex
      {"0o_52i64", 42},      // oct
      {"0b_101010i64", 42},  // binary

      // suffix with trailing underscore
      {"42_i64", 42},        // decimal
      {"0x2A_i64", 42},      // hex
      {"0o52_i64", 42},      // oct
      {"0b101010_i64", 42},  // binary

      // suffix with middle underscore
      {"4_2i64", 42},        // decimal
      {"0x2_Ai64", 42},      // hex
      {"0o5_2i64", 42},      // oct
      {"0b1010_10i64", 42},  // binary

      // suffix with leading, trailing and middle underscore
      {"_4_2_i64", 42},        // decimal
      {"0x_2_A_i64", 42},      // hex
      {"0o_5_2_i64", 42},      // oct
      {"0b_1010_10_i64", 42},  // binary

      // emtpy
      {"i64", nullopt},    // decimal
      {"0xi64", nullopt},  // hex
      {"0oi64", nullopt},  // oct
      {"0bi64", nullopt},  // binary
      // emtpy with underscore
      {"_i64", nullopt},    // decimal
      {"0x_i64", nullopt},  // hex
      {"0o_i64", nullopt},  // oct
      {"0b_i64", nullopt},  // binary
      // invalid character
      {"Zi64", nullopt},    // decimal
      {"0xZi64", nullopt},  // hex
      {"0oZi64", nullopt},  // oct
      {"0bZi64", nullopt},  // binary
      // invalid decimal
      {"42.1i64", nullopt},    // decimal
      {"0x42.1i64", nullopt},  // hex
      {"0o42.1i64", nullopt},  // oct
      {"0b42.1i64", nullopt},  // binary

      // max
      {"9223372036854775807i64", 9223372036854775807},      // decimal
      {"0x7FFFFFFFFFFFFFFFi64", 9223372036854775807},       // hex
      {"0o777777777777777777777i64", 9223372036854775807},  // oct
      {"0b111111111111111111111111111111111111111111111111111111111111111i64",
       9223372036854775807},  // binary

      // min
      {"-9223372036854775808", -9223372036854775808},    // decimal
      {"0x-8000000000000000i64", -9223372036854775808},  // hex
      {"0x8000000000000000i64", nullopt},                // two's complement hex

      // leading zeros are OK
      {"00000009223372036854775807i64", 9223372036854775807},      // decimal
      {"0x00000007FFFFFFFFFFFFFFFi64", 9223372036854775807},       // hex
      {"0o0000000777777777777777777777i64", 9223372036854775807},  // oct
      {"0b000000011111111111111111111111111111111111111111111111111111111111111"
       "1i64",
       9223372036854775807},  // binary

      // leading spaces are bad
      {"  2147483647i64", nullopt},  // decimal

  };
  for (auto p : i64_test_cases) {
    if (p.second.has_value()) {
      DYNAMIC_SECTION(p.first << " -> " << p.second.value()) {
        auto actual = I64::FromLiteral(p.first);
        REQUIRE(actual != nullptr);
        REQUIRE(actual->IsI64());
        REQUIRE(actual->HasValue());
        REQUIRE(actual->Value().has_value());
        REQUIRE(actual->Value().value() == p.second.value());
      }
    } else {
      DYNAMIC_SECTION(p.first << " does not parse") {
        auto actual = I64::FromLiteral(p.first);
        REQUIRE(actual == nullptr);
      }
    }
  }
}

TEST_CASE("Equality", "[types][i64]") {
  TestEquality<I64>();
}

TEST_CASE("u8 literal conversions", "[types][u8]") {
  vector<pair<string, optional<uint8_t>>> u8_test_cases = {
      // no suffix
      {"42", 42},        // decimal
      {"0x2A", 42},      // hex
      {"0o52", 42},      // oct
      {"0b101010", 42},  // binary

      {"", nullopt},    // decimal
      {"0x", nullopt},  // hex
      {"0o", nullopt},  // oct
      {"0b", nullopt},  // binary

      // suffix
      {"42u8", 42},        // decimal
      {"0x2Au8", 42},      // hex
      {"0o52u8", 42},      // oct
      {"0b101010u8", 42},  // binary

      // suffix with leading underscore
      {"_42u8", 42},        // decimal
      {"0x_2Au8", 42},      // hex
      {"0o_52u8", 42},      // oct
      {"0b_101010u8", 42},  // binary

      // suffix with trailing underscore
      {"42_u8", 42},        // decimal
      {"0x2A_u8", 42},      // hex
      {"0o52_u8", 42},      // oct
      {"0b101010_u8", 42},  // binary

      // suffix with middle underscore
      {"4_2u8", 42},        // decimal
      {"0x2_Au8", 42},      // hex
      {"0o5_2u8", 42},      // oct
      {"0b1010_10u8", 42},  // binary

      // suffix with leading, trailing and middle underscore
      {"_4_2_u8", 42},        // decimal
      {"0x_2_A_u8", 42},      // hex
      {"0o_5_2_u8", 42},      // oct
      {"0b_1010_10_u8", 42},  // binary

      // emtpy
      {"u8", nullopt},    // decimal
      {"0xu8", nullopt},  // hex
      {"0ou8", nullopt},  // oct
      {"0bu8", nullopt},  // binary
      // emtpy with underscore
      {"_u8", nullopt},    // decimal
      {"0x_u8", nullopt},  // hex
      {"0o_u8", nullopt},  // oct
      {"0b_u8", nullopt},  // binary
      // invalid character
      {"Zu8", nullopt},    // decimal
      {"0xZu8", nullopt},  // hex
      {"0oZu8", nullopt},  // oct
      {"0bZu8", nullopt},  // binary
      // invalid decimal
      {"42.1u8", nullopt},    // decimal
      {"0x42.1u8", nullopt},  // hex
      {"0o42.1u8", nullopt},  // oct
      {"0b42.1u8", nullopt},  // binary

      // max
      {"255u8", 255},         // decimal
      {"0xFFu8", 255},        // hex
      {"0o377u8", 255},       // oct
      {"0b11111111u8", 255},  // binary

      // min
      {"0u8", 0},    // decimal
      {"0x0u8", 0},  // hex
      {"0o0u8", 0},  // oct
      {"0b0u8", 0},  // binary

      // // leading zeros are OK
      {"00000000255u8", 255},         // decimal
      {"0x00000000FFu8", 255},        // hex
      {"0o00000000377u8", 255},       // oct
      {"0b0000000011111111u8", 255},  // binary

      // // leading spaces are bad
      {"  127u8", nullopt},  // decimal

  };
  for (auto p : u8_test_cases) {
    if (p.second.has_value()) {
      DYNAMIC_SECTION(p.first << " -> " << (int)p.second.value()) {
        auto actual = U8::FromLiteral(p.first);
        REQUIRE(actual != nullptr);
        REQUIRE(actual->IsU8());
        REQUIRE(actual->HasValue());
        REQUIRE(actual->Value().has_value());
        REQUIRE((int)actual->Value().value() == (int)p.second.value());
      }
    } else {
      DYNAMIC_SECTION(p.first << " does not parse") {
        auto actual = U8::FromLiteral(p.first);
        REQUIRE(actual == nullptr);
      }
    }
  }
}

TEST_CASE("Equality", "[types][u8]") {
  TestEquality<U8>();
}

TEST_CASE("u16 literal conversions", "[types][u16]") {
  vector<pair<string, optional<uint16_t>>> u16_test_cases = {
      // no suffix
      {"42", 42},        // decimal
      {"0x2A", 42},      // hex
      {"0o52", 42},      // oct
      {"0b101010", 42},  // binary

      {"", nullopt},    // decimal
      {"0x", nullopt},  // hex
      {"0o", nullopt},  // oct
      {"0b", nullopt},  // binary

      // suffix
      {"42u16", 42},        // decimal
      {"0x2Au16", 42},      // hex
      {"0o52u16", 42},      // oct
      {"0b101010u16", 42},  // binary

      // suffix with leading underscore
      {"_42u16", 42},        // decimal
      {"0x_2Au16", 42},      // hex
      {"0o_52u16", 42},      // oct
      {"0b_101010u16", 42},  // binary

      // suffix with trailing underscore
      {"42_u16", 42},        // decimal
      {"0x2A_u16", 42},      // hex
      {"0o52_u16", 42},      // oct
      {"0b101010_u16", 42},  // binary

      // suffix with middle underscore
      {"4_2u16", 42},        // decimal
      {"0x2_Au16", 42},      // hex
      {"0o5_2u16", 42},      // oct
      {"0b1010_10u16", 42},  // binary

      // suffix with leading, trailing and middle underscore
      {"_4_2_u16", 42},        // decimal
      {"0x_2_A_u16", 42},      // hex
      {"0o_5_2_u16", 42},      // oct
      {"0b_1010_10_u16", 42},  // binary

      // emtpy
      {"u16", nullopt},    // decimal
      {"0xu16", nullopt},  // hex
      {"0ou16", nullopt},  // oct
      {"0bu16", nullopt},  // binary
      // emtpy with underscore
      {"_u16", nullopt},    // decimal
      {"0x_u16", nullopt},  // hex
      {"0o_u16", nullopt},  // oct
      {"0b_u16", nullopt},  // binary
      // invalid character
      {"Zu16", nullopt},    // decimal
      {"0xZu16", nullopt},  // hex
      {"0oZu16", nullopt},  // oct
      {"0bZu16", nullopt},  // binary
      // invalid decimal
      {"42.1u16", nullopt},    // decimal
      {"0x42.1u16", nullopt},  // hex
      {"0o42.1u16", nullopt},  // oct
      {"0b42.1u16", nullopt},  // binary

      // max
      {"32767u16", 32767},              // decimal
      {"0x7FFFu16", 32767},             // hex
      {"0o77777u16", 32767},            // oct
      {"0b111111111111111u16", 32767},  // binary

      // min
      {"0u16", 0},    // decimal
      {"0x0u16", 0},  // hex
      {"0o0u16", 0},  // oct
      {"0b0u16", 0},  // binary

      // leading zeros are OK
      {"000000000032767u16", 32767},              // decimal
      {"0x00000000007FFFu16", 32767},             // hex
      {"0o000000000077777u16", 32767},            // oct
      {"0b0000000000111111111111111u16", 32767},  // binary

      // // leading spaces are bad
      {"  32767u16", nullopt},  // decimal

  };
  for (auto p : u16_test_cases) {
    if (p.second.has_value()) {
      DYNAMIC_SECTION(p.first << " -> " << p.second.value()) {
        auto actual = U16::FromLiteral(p.first);
        REQUIRE(actual != nullptr);
        REQUIRE(actual->IsU16());
        REQUIRE(actual->HasValue());
        REQUIRE(actual->Value().has_value());
        REQUIRE(actual->Value().value() == p.second.value());
      }
    } else {
      DYNAMIC_SECTION(p.first << " does not parse") {
        auto actual = U16::FromLiteral(p.first);
        REQUIRE(actual == nullptr);
      }
    }
  }
}

TEST_CASE("Equality", "[types][u16]") {
  TestEquality<U16>();
}

TEST_CASE("u32 literal conversions", "[types][u32]") {
  vector<pair<string, optional<uint32_t>>> u32_test_cases = {
      // no suffix
      {"42", 42},        // decimal
      {"0x2A", 42},      // hex
      {"0o52", 42},      // oct
      {"0b101010", 42},  // binary

      {"", nullopt},    // decimal
      {"0x", nullopt},  // hex
      {"0o", nullopt},  // oct
      {"0b", nullopt},  // binary

      // suffix
      {"42u32", 42},        // decimal
      {"0x2Au32", 42},      // hex
      {"0o52u32", 42},      // oct
      {"0b101010u32", 42},  // binary

      // suffix with leading underscore
      {"_42u32", 42},        // decimal
      {"0x_2Au32", 42},      // hex
      {"0o_52u32", 42},      // oct
      {"0b_101010u32", 42},  // binary

      // suffix with trailing underscore
      {"42_u32", 42},        // decimal
      {"0x2A_u32", 42},      // hex
      {"0o52_u32", 42},      // oct
      {"0b101010_u32", 42},  // binary

      // suffix with middle underscore
      {"4_2u32", 42},        // decimal
      {"0x2_Au32", 42},      // hex
      {"0o5_2u32", 42},      // oct
      {"0b1010_10u32", 42},  // binary

      // suffix with leading, trailing and middle underscore
      {"_4_2_u32", 42},        // decimal
      {"0x_2_A_u32", 42},      // hex
      {"0o_5_2_u32", 42},      // oct
      {"0b_1010_10_u32", 42},  // binary

      // emtpy
      {"u32", nullopt},    // decimal
      {"0xu32", nullopt},  // hex
      {"0ou32", nullopt},  // oct
      {"0bu32", nullopt},  // binary
      // emtpy with underscore
      {"_u32", nullopt},    // decimal
      {"0x_u32", nullopt},  // hex
      {"0o_u32", nullopt},  // oct
      {"0b_u32", nullopt},  // binary
      // invalid character
      {"Zu32", nullopt},    // decimal
      {"0xZu32", nullopt},  // hex
      {"0oZu32", nullopt},  // oct
      {"0bZu32", nullopt},  // binary
      // invalid decimal
      {"42.1u32", nullopt},    // decimal
      {"0x42.1u32", nullopt},  // hex
      {"0o42.1u32", nullopt},  // oct
      {"0b42.1u32", nullopt},  // binary

      // max
      {"2147483647u32", 2147483647},                         // decimal
      {"0x7FFFFFFFu32", 2147483647},                         // hex
      {"0o17777777777u32", 2147483647},                      // oct
      {"0b1111111111111111111111111111111u32", 2147483647},  // binary

      // min
      {"0u32", 0},    // decimal
      {"0x0u32", 0},  // hex
      {"0o0u32", 0},  // oct
      {"0b0u32", 0},  // binary

      // leading zeros are OK
      {"00000000002147483647u32", 2147483647},                     // decimal
      {"0x00000007FFFFFFFu32", 2147483647},                        // hex
      {"0o000000017777777777u32", 2147483647},                     // oct
      {"0b0000001111111111111111111111111111111u32", 2147483647},  // binary

      // leading spaces are bad
      {"  2147483647u32", nullopt},  // decimal

  };
  for (auto p : u32_test_cases) {
    if (p.second.has_value()) {
      DYNAMIC_SECTION(p.first << " -> " << p.second.value()) {
        auto actual = U32::FromLiteral(p.first);
        REQUIRE(actual != nullptr);
        REQUIRE(actual->IsU32());
        REQUIRE(actual->HasValue());
        REQUIRE(actual->Value().has_value());
        REQUIRE(actual->Value().value() == p.second.value());
      }
    } else {
      DYNAMIC_SECTION(p.first << " does not parse") {
        auto actual = U32::FromLiteral(p.first);
        REQUIRE(actual == nullptr);
      }
    }
  }
}

TEST_CASE("Equality", "[types][u32]") {
  TestEquality<U32>();
}

TEST_CASE("u64 literal conversions", "[types][u64]") {
  vector<pair<string, optional<uint64_t>>> u64_test_cases = {
      // no suffix
      {"42", 42},        // decimal
      {"0x2A", 42},      // hex
      {"0o52", 42},      // oct
      {"0b101010", 42},  // binary

      {"", nullopt},    // decimal
      {"0x", nullopt},  // hex
      {"0o", nullopt},  // oct
      {"0b", nullopt},  // binary

      // suffix
      {"42u64", 42},        // decimal
      {"0x2Au64", 42},      // hex
      {"0o52u64", 42},      // oct
      {"0b101010u64", 42},  // binary

      // suffix with leading underscore
      {"_42u64", 42},        // decimal
      {"0x_2Au64", 42},      // hex
      {"0o_52u64", 42},      // oct
      {"0b_101010u64", 42},  // binary

      // suffix with trailing underscore
      {"42_u64", 42},        // decimal
      {"0x2A_u64", 42},      // hex
      {"0o52_u64", 42},      // oct
      {"0b101010_u64", 42},  // binary

      // suffix with middle underscore
      {"4_2u64", 42},        // decimal
      {"0x2_Au64", 42},      // hex
      {"0o5_2u64", 42},      // oct
      {"0b1010_10u64", 42},  // binary

      // suffix with leading, trailing and middle underscore
      {"_4_2_u64", 42},        // decimal
      {"0x_2_A_u64", 42},      // hex
      {"0o_5_2_u64", 42},      // oct
      {"0b_1010_10_u64", 42},  // binary

      // emtpy
      {"u64", nullopt},    // decimal
      {"0xu64", nullopt},  // hex
      {"0ou64", nullopt},  // oct
      {"0bu64", nullopt},  // binary
      // emtpy with underscore
      {"_u64", nullopt},    // decimal
      {"0x_u64", nullopt},  // hex
      {"0o_u64", nullopt},  // oct
      {"0b_u64", nullopt},  // binary
      // invalid character
      {"Zu64", nullopt},    // decimal
      {"0xZu64", nullopt},  // hex
      {"0oZu64", nullopt},  // oct
      {"0bZu64", nullopt},  // binary
      // invalid decimal
      {"42.1u64", nullopt},    // decimal
      {"0x42.1u64", nullopt},  // hex
      {"0o42.1u64", nullopt},  // oct
      {"0b42.1u64", nullopt},  // binary

      // max
      {"18446744073709551615u64", 18446744073709551615},      // decimal
      {"0xFFFFFFFFFFFFFFFFu64", 18446744073709551615},        // hex
      {"0o1777777777777777777777u64", 18446744073709551615},  // oct
      {"0b1111111111111111111111111111111111111111111111111111111111111111u64",
       18446744073709551615},  // binary

      // min
      {"0u64", 0},    // decimal
      {"0x0u64", 0},  // hex
      {"0o0u64", 0},  // oct
      {"0b0u64", 0},  // binary

      // leading zeros are OK
      {"0000000018446744073709551615u64", 18446744073709551615},      // decimal
      {"0x00000000FFFFFFFFFFFFFFFFu64", 18446744073709551615},        // hex
      {"0o000000001777777777777777777777u64", 18446744073709551615},  // oct
      {"0b000000001111111111111111111111111111111111111111111111111111111111111"
       "111u64",
       18446744073709551615},  // binary

      // leading spaces are bad
      {"  2147483647u64", nullopt},  // decimal

  };
  for (auto p : u64_test_cases) {
    if (p.second.has_value()) {
      DYNAMIC_SECTION(p.first << " -> " << p.second.value()) {
        auto actual = U64::FromLiteral(p.first);
        REQUIRE(actual != nullptr);
        REQUIRE(actual->IsU64());
        REQUIRE(actual->HasValue());
        REQUIRE(actual->Value().has_value());
        REQUIRE(actual->Value().value() == p.second.value());
      }
    } else {
      DYNAMIC_SECTION(p.first << " does not parse") {
        auto actual = U64::FromLiteral(p.first);
        REQUIRE(actual == nullptr);
      }
    }
  }
}

TEST_CASE("Equality", "[types][u64]") {
  TestEquality<U64>();
}

}  // namespace td
