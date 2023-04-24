#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_all.hpp>

#include "codegen/codegen_cpp_helpers.h"

TEST_CASE("Escape UTF-8 strings to C++ identifiers",
          "[escape_utf8_to_cpp_identifier]") {
  // Test case for basic ASCII characters, ensuring that valid characters are
  // preserved and invalid characters are replaced with their Unicode code
  // points.
  SECTION("Basic ASCII characters") {
    REQUIRE(td::escape_utf8_to_cpp_identifier("valid_identifier") ==
            "valid_identifier");
    REQUIRE(td::escape_utf8_to_cpp_identifier("invalid-start-01") ==
            "invalid_002dstart_002d01");
  }

  // Test case for multi-byte UTF-8 characters, ensuring that they are replaced
  // with their Unicode code points.
  SECTION("Multi-byte UTF-8 characters") {
    REQUIRE(td::escape_utf8_to_cpp_identifier("русский_идентификатор") ==
            "_0440_0443_0441_0441_043a_0438_0439__0438_0434_0435_043d_0442_"
            "0438_0444_0438_043a_0430_0442_043e_0440");
  }

  // Test case for mixed ASCII and multi-byte UTF-8 characters, ensuring that
  // valid ASCII characters are preserved and all other characters are replaced
  // with their Unicode code points.
  SECTION("Mixed ASCII and multi-byte UTF-8 characters") {
    REQUIRE(td::escape_utf8_to_cpp_identifier("example_例子") ==
            "example__4f8b_5b50");
  }

  // Test case for special characters, ensuring that they are replaced with
  // their Unicode code points.
  SECTION("Special characters") {
    REQUIRE(td::escape_utf8_to_cpp_identifier("a+b-c*d/e") ==
            "a_002bb_002dc_002ad_002fe");
  }

  // Test case for empty string input, ensuring that the output is a single
  // underscore as a valid C++ identifier.
  SECTION("Empty string") {
    REQUIRE(td::escape_utf8_to_cpp_identifier("") == "_");
  }
}
