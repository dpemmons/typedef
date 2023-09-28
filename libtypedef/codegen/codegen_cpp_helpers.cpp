#include "libtypedef/codegen/codegen_cpp_helpers.h"

#include <cctype>
#include <codecvt>
#include <cwctype>
#include <iomanip>
#include <locale>
#include <sstream>
#include <string>

namespace td {

std::string escape_utf8_to_cpp_identifier(const std::string& utf8_str) {
  // Convert the input UTF-8 string to a UTF-32 string for easier character
  // handling.
  std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;
  std::u32string utf32_str = converter.from_bytes(utf8_str);
  std::stringstream escaped;
  bool first_char = true;

  // Helper function to determine if a character is a single-byte character.
  auto is_single_byte_char = [](char32_t c) { return c <= 0x7F; };

  // Lambda function to append a Unicode code point in the format _XXXX.
  auto append_code_point = [&escaped](char32_t c32) {
    escaped << "_" << std::hex << std::setw(4) << std::setfill('0')
            << static_cast<uint32_t>(c32);
  };

  // Iterate through the UTF-32 string.
  for (char32_t c32 : utf32_str) {
    // If the current character is alphanumeric or an underscore,
    // and it's not a digit at the beginning of the identifier.
    if (std::iswalnum(c32) || c32 == U'_') {
      if (!(first_char && std::iswdigit(c32))) {
        // If it's a single-byte character, add it to the escaped string as is.
        if (is_single_byte_char(c32)) {
          escaped << static_cast<char>(c32);
        } else {
          // Otherwise, use the lambda function to append the code point.
          append_code_point(c32);
        }
        first_char = false;
        continue;
      }
    }

    // If the current character is not valid for an identifier or is a digit at
    // the beginning, use the lambda function to append the code point.
    append_code_point(c32);
    first_char = false;
  }

  // If the input string is empty, return a single underscore as the escaped
  // identifier.
  if (escaped.str().empty()) {
    escaped << "_";
  }

  return escaped.str();
}

}  // namespace td
