#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>
#include <utility>
#include <vector>

#include "type.h"

namespace td {

TEST_CASE("Str class tests") {
  SECTION("FromStringLiteral - normal characters") {
    auto str = Str::FromStringLiteral("Hello, World!");
    REQUIRE(str->Value().has_value());
    REQUIRE(str->Value().value() == "Hello, World!");
  }

  SECTION("FromStringLiteral - ASCII escape sequences") {
    auto str = Str::FromStringLiteral("Hello,\\nWorld!");
    REQUIRE(str->Value().has_value());
    REQUIRE(str->Value().value() == "Hello,\nWorld!");

    auto str1 = Str::FromStringLiteral("\\n");
    REQUIRE(str1->Value().has_value());
    REQUIRE(str1->Value().value() == "\n");

    auto str2 = Str::FromStringLiteral("\\r");
    REQUIRE(str2->Value().has_value());
    REQUIRE(str2->Value().value() == "\r");

    auto str3 = Str::FromStringLiteral("\\t");
    REQUIRE(str3->Value().has_value());
    REQUIRE(str3->Value().value() == "\t");

    auto str4 = Str::FromStringLiteral("\\\\");
    REQUIRE(str4->Value().has_value());
    REQUIRE(str4->Value().value() == "\\");

    auto str5 = Str::FromStringLiteral("\\0");
    REQUIRE(str5->Value().has_value());
    REQUIRE(str5->Value().value() == std::string("\0", 1));
  }

  SECTION("FromStringLiteral - Unicode escape sequences of different lengths") {
    auto str1 = Str::FromStringLiteral("\\u{A}");
    REQUIRE(str1->Value().has_value());
    REQUIRE(str1->Value().value() == u8"\u000A");

    auto str2 = Str::FromStringLiteral("\\u{1F}");
    REQUIRE(str2->Value().has_value());
    REQUIRE(str2->Value().value() == u8"\u001F");

    auto str3 = Str::FromStringLiteral("\\u{260}");
    REQUIRE(str3->Value().has_value());
    REQUIRE(str3->Value().value() == u8"\u0260");

    auto str4 = Str::FromStringLiteral("\\u{2603}");
    REQUIRE(str4->Value().has_value());
    REQUIRE(str4->Value().value() == u8"\u2603");

    auto str5 = Str::FromStringLiteral("\\u{1F600}");
    REQUIRE(str5->Value().has_value());
    REQUIRE(str5->Value().value() == u8"\U0001F600");

    auto str6 = Str::FromStringLiteral("\\u{10FFFF}");
    REQUIRE(str6->Value().has_value());
    REQUIRE(str6->Value().value() == u8"\U0010FFFF");
  }

  SECTION("FromStringLiteral - invalid Unicode escape sequence") {
    auto str = Str::FromStringLiteral("\\u{1234567}");
    REQUIRE(str == nullptr);
  }

  SECTION("FromStringLiteral - mixed sequences") {
    auto str = Str::FromStringLiteral("Hello,\\n\\u{01F600}!");
    REQUIRE(str->Value().has_value());
    REQUIRE(str->Value().value() == "Hello,\n\U0001F600!");
  }

  SECTION("Equality and inequality operators") {
    auto str1 = Str::FromStringLiteral("Hello, World!");
    auto str2 = Str::FromStringLiteral("Hello,\\nWorld!");
    auto str3 = Str::FromStringLiteral("Hello,\\nWorld!");

    REQUIRE(*str1 != *str2);
    REQUIRE(*str2 == *str3);
  }

  SECTION("TypeName") { REQUIRE(Str::TypeName() == "str"); }

  SECTION("IsString") {
    auto str = Str::FromStringLiteral("Hello, World!");
    REQUIRE(str->IsString());
  }
}

}  // namespace td
