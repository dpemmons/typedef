#include "integer_parser.h"

#include <limits>
#include <optional>
#include <regex>
#include <string_view>

std::optional<td::ScalarValue> td::internal::parseIntegerLiteral(
    const std::string input) {
  static const std::regex integer_literal_regex(
      R"(^((\d+)|0x[0-9a-fA-F]+|0o[0-7]+|0b[01]+)(_[iu](8|16|32|64|128))?$)");

  std::smatch match;
  if (std::regex_match(input.begin(), input.end(), match,
                       integer_literal_regex)) {
    std::string number = match[1];
    const std::string& suffix = match[3];

    int base = 10;
    if (number[0] == '0') {
      if (number[1] == 'x') {
        base = 16;
        number.erase(0, 2);
      } else if (number[1] == 'o') {
        base = 8;
        number.erase(0, 2);
      } else if (number[1] == 'b') {
        base = 2;
        number.erase(0, 2);
      }
    }

    bool is_unsigned = (suffix.size() >= 2) && (suffix[1] == 'u');
    long long value_signed;
    unsigned long long value_unsigned;

    if (base == 2) {
      value_unsigned = 0;
      for (char c : number) {
        value_unsigned = (value_unsigned * 2) + (c - '0');
      }
      value_signed = static_cast<long long>(value_unsigned);
    } else {
      if (is_unsigned) {
        value_unsigned = std::stoull(number, nullptr, base);
        value_signed = static_cast<long long>(value_unsigned);
      } else {
        value_signed = std::stoll(number, nullptr, base);
        value_unsigned = static_cast<unsigned long long>(value_signed);
      }
    }
    if (!suffix.empty()) {
      int type_size = std::stoi(suffix.substr(2));

      switch (type_size) {
        case 8:
          return is_unsigned ? td::ScalarValue::CreateU8(
                                   static_cast<uint8_t>(value_unsigned))
                             : td::ScalarValue::CreateI8(
                                   static_cast<int8_t>(value_signed));
        case 16:
          return is_unsigned ? td::ScalarValue::CreateU16(
                                   static_cast<uint16_t>(value_unsigned))
                             : td::ScalarValue::CreateI16(
                                   static_cast<int16_t>(value_signed));
        case 32:
          return is_unsigned ? td::ScalarValue::CreateU32(
                                   static_cast<uint32_t>(value_unsigned))
                             : td::ScalarValue::CreateI32(
                                   static_cast<int32_t>(value_signed));
        case 64:
          return is_unsigned ? td::ScalarValue::CreateU64(
                                   static_cast<uint64_t>(value_unsigned))
                             : td::ScalarValue::CreateI64(
                                   static_cast<int64_t>(value_signed));
        case 128:
          return is_unsigned ? td::ScalarValue::CreateU128(
                                   static_cast<__uint128_t>(value_unsigned))
                             : td::ScalarValue::CreateI128(
                                   static_cast<__int128_t>(value_signed));
      }
    } else {
      if (value_signed >= INT8_MIN && value_signed <= INT8_MAX) {
        return td::ScalarValue::CreateI8(static_cast<int8_t>(value_signed));
      } else if (value_signed >= INT16_MIN && value_signed <= INT16_MAX) {
        return td::ScalarValue::CreateI16(static_cast<int16_t>(value_signed));
      } else if (value_signed >= INT32_MIN && value_signed <= INT32_MAX) {
        return td::ScalarValue::CreateI32(static_cast<int32_t>(value_signed));
      } else if (value_signed >= INT64_MIN && value_signed <= INT64_MAX) {
        return td::ScalarValue::CreateI64(static_cast<int64_t>(value_signed));
      } else {
        return td::ScalarValue::CreateI128(
            static_cast<__int128_t>(value_signed));
      }
    }
  }
  return std::nullopt;
}
