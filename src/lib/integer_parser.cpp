#include "integer_parser.h"

#include <charconv>
#include <limits>
#include <optional>
#include <regex>
#include <string>
#include <string_view>

static bool startsWith(const std::string& str, const std::string& prefix) {
  return str.size() >= prefix.size() &&
         0 == str.compare(0, prefix.size(), prefix);
}

static bool endsWith(const std::string& str, const std::string& suffix) {
  return str.size() >= suffix.size() &&
         0 == str.compare(str.size() - suffix.size(), suffix.size(), suffix);
}

std::string_view make_string_view(std::string const& str,
                                  std::string::const_iterator first,
                                  std::string::const_iterator last) noexcept {
  return std::string_view(str.data() + (first - str.begin()), last - first);
}

std::optional<td::ScalarValue> td::internal::parseIntegerLiteral(
    const std::string input) {
  // Eliminate any '_' characters.
  std::string local;
  for (char c : input) {
    if (c != '_') {
      local += c;
    }
  }

  enum Base {
    DECIMAL = 10,
    HEX = 16,
    OCT = 8,
    BIN = 2
  } base = Base::DECIMAL;  // default.

  auto begin = local.begin();
  if (local.size() >= 2) {
    if (startsWith(local, "0x")) {
      // Hex literal.
      base = Base::HEX;
      begin += 2;
    } else if (startsWith(local, "0o")) {
      // Oct literal.
      base = Base::OCT;
      begin += 2;
    } else if (startsWith(local, "0b")) {
      // Bin literal.
      base = Base::BIN;
      begin += 2;
    }
  }

  enum class Suffix {
    UNKNOWN,
    U8,
    U16,
    U32,
    U64,
    U128,
    I8,
    I16,
    I32,
    I64,
    I128,
  } suffix = Suffix::UNKNOWN;

  auto end = local.end();
  if (endsWith(local, "u8")) {
    suffix = Suffix::U8;
    end -= 2;
  } else if (endsWith(local, "u16")) {
    suffix = Suffix::U16;
    end -= 3;
  } else if (endsWith(local, "u32")) {
    suffix = Suffix::U32;
    end -= 3;
  } else if (endsWith(local, "u64")) {
    suffix = Suffix::U64;
    end -= 3;
  } else if (endsWith(local, "u128")) {
    suffix = Suffix::U128;
    end -= 4;
  } else if (endsWith(local, "i8")) {
    suffix = Suffix::I8;
    end -= 2;
  } else if (endsWith(local, "i16")) {
    suffix = Suffix::I16;
    end -= 3;
  } else if (endsWith(local, "i32")) {
    suffix = Suffix::I32;
    end -= 3;
  } else if (endsWith(local, "i64")) {
    suffix = Suffix::I64;
    end -= 3;
  } else if (endsWith(local, "i128")) {
    suffix = Suffix::I128;
    end -= 4;
  }

  auto digits = make_string_view(local, begin, end);

  switch (suffix) {
    case Suffix::U8:
      return ScalarValue::MaybeCreateIntFromString<uint8_t>(digits,
                                                                   base);
    case Suffix::U16:
      return ScalarValue::MaybeCreateIntFromString<uint16_t>(digits,
                                                                    base);
    case Suffix::U32:
      return ScalarValue::MaybeCreateIntFromString<uint32_t>(digits,
                                                                    base);
    case Suffix::U64:
      return ScalarValue::MaybeCreateIntFromString<uint64_t>(digits,
                                                                    base);
    case Suffix::U128: {  // Unsupported.
      return std::nullopt;
      break;
    }
    case Suffix::I8:
      return ScalarValue::MaybeCreateIntFromString<int8_t>(digits, base);
    case Suffix::I16:
      return ScalarValue::MaybeCreateIntFromString<int16_t>(digits,
                                                                   base);
    case Suffix::I32:
      return ScalarValue::MaybeCreateIntFromString<int32_t>(digits,
                                                                   base);
    case Suffix::I64:
      return ScalarValue::MaybeCreateIntFromString<int64_t>(digits,
                                                                   base);
    case Suffix::I128: {  // Unsupported.
      return std::nullopt;
      break;
    }

    case Suffix::UNKNOWN:
      return ScalarValue::MaybeCreateIntFromUnknownString(digits, base);

    default:
      abort();
  }

  return std::nullopt;
}

// template <typename T>
// T stringTo128(const std::string& number, int base) {
//   T value = 0;
//   for (const char& c : number) {
//     value *= base;
//     if (base == 16 && c >= 'a' && c <= 'f') {
//       value += (c - 'a' + 10);
//     } else if (base == 16 && c >= 'A' && c <= 'F') {
//       value += (c - 'A' + 10);
//     } else {
//       value += (c - '0');
//     }
//   }
//   return value;
// }

// // Handles unsuffixed integer literals
// std::optional<td::ScalarValue> parseUnsuffixedIntegerLiteral(
//     long long value_signed) {
//   if (value_signed >= INT8_MIN && value_signed <= INT8_MAX) {
//     return td::ScalarValue::CreateI8(static_cast<int8_t>(value_signed),
//     false);
//   } else if (value_signed >= INT16_MIN && value_signed <= INT16_MAX) {
//     return td::ScalarValue::CreateI16(static_cast<int16_t>(value_signed),
//                                       false);
//   } else if (value_signed >= INT32_MIN && value_signed <= INT32_MAX) {
//     return td::ScalarValue::CreateI32(static_cast<int32_t>(value_signed),
//                                       false);
//   } else if (value_signed >= INT64_MIN && value_signed <= INT64_MAX) {
//     return td::ScalarValue::CreateI64(static_cast<int64_t>(value_signed),
//                                       false);
//   } else {
//     return
//     td::ScalarValue::CreateI128(static_cast<__int128_t>(value_signed),
//                                        false);
//   }
// }

// std::optional<td::ScalarValue> td::internal::parseIntegerLiteral(
//     const std::string input) {
//   static const std::regex integer_literal_regex(
//       R"(^((\d+)|0x[0-9a-fA-F]+|0o[0-7]+|0b[01]+)(_[iu](8|16|32|64|128))?$)");

//   std::smatch match;
//   if (std::regex_match(input.begin(), input.end(), match,
//                        integer_literal_regex)) {
//     std::string number = match[1];
//     const std::string& suffix = match[3];

//     int base = 10;
//     if (number[0] == '0') {
//       if (number[1] == 'x') {
//         base = 16;
//         number.erase(0, 2);
//       } else if (number[1] == 'o') {
//         base = 8;
//         number.erase(0, 2);
//       } else if (number[1] == 'b') {
//         base = 2;
//         number.erase(0, 2);
//       }
//     }

//     bool is_signed = (suffix.size() >= 2) && (suffix[1] == 'i');
//     long long value_signed;
//     unsigned long long value_unsigned;

//     if (base == 2) {
//       value_unsigned = 0;
//       for (char c : number) {
//         value_unsigned = (value_unsigned * 2) + (c - '0');
//       }
//       value_signed = static_cast<long long>(value_unsigned);
//     } else {
//       if (is_signed) {
//         value_signed = std::stoll(number, nullptr, base);
//         value_unsigned = static_cast<unsigned long long>(value_signed);
//       } else {
//         value_unsigned = std::stoull(number, nullptr, base);
//         value_signed = static_cast<long long>(value_unsigned);
//       }
//     }
//     if (suffix.empty()) {
//       return parseUnsuffixedIntegerLiteral(value_signed);
//     } else {
//       int type_size = std::stoi(suffix.substr(2));

//       switch (type_size) {
//         case 8:
//           return is_signed ? td::ScalarValue::CreateI8(
//                                  static_cast<uint8_t>(value_unsigned))
//                            : td::ScalarValue::CreateU8(
//                                  static_cast<int8_t>(value_signed));
//         case 16:
//           return is_signed ? td::ScalarValue::CreateI16(
//                                  static_cast<uint16_t>(value_unsigned))
//                            : td::ScalarValue::CreateU16(
//                                  static_cast<int16_t>(value_signed));
//         case 32:
//           return is_signed ? td::ScalarValue::CreateI32(
//                                  static_cast<uint32_t>(value_unsigned))
//                            : td::ScalarValue::CreateU32(
//                                  static_cast<int32_t>(value_signed));
//         case 64:
//           return is_signed ? td::ScalarValue::CreateI64(
//                                  static_cast<uint64_t>(value_unsigned))
//                            : td::ScalarValue::CreateU64(
//                                  static_cast<int64_t>(value_signed));
//         case 128:
//           return is_signed ? td::ScalarValue::CreateI128(
//                                  static_cast<__uint128_t>(value_unsigned))
//                            : td::ScalarValue::CreateU128(
//                                  static_cast<__int128_t>(value_signed));
//       }
//     }
//   }
//   return std::nullopt;
// }
