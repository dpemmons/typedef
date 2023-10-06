#pragma once

#include <cstddef>
#include <iostream>
#include <string>

namespace td {

struct ParserErrorInfo {
 public:
  ParserErrorInfo()
      : error_type(UNKNOWN),
        message(),
        token_type(0),
        char_offset(0),
        line(0),
        line_offset(0),
        length(0) {}

  enum Type {
    UNKNOWN = 0,
    OTHER = 1,
    UNIMPLEMENTED = 2,
    LEXER_ERROR = 3,
    PARSE_ERROR = 4,
    MISSING_STATEMENT = 5,
    MISSING_IDENTIFIER = 6,
    INVALID_LANGUAGE_VERSION = 7,
    MISSING_TYPE_IDENTIFIER = 8,
    MISSING_VALUE_EXPRESSION = 9,
    UNKNOWN_TYPE = 10,
    TYPE_MISMATCH = 11,
    INVALID_BOOL_LITERAL = 12,
    INVALID_CHAR_LITERAL = 13,
    INVALID_FLOAT_LITERAL = 14,
    INVALID_INTEGER_LITERAL = 15,
    INVALID_STRING_LITERAL = 16,
    INVALID_RAW_STRING_LITERAL = 17,
    TEMPLATE_STRING_PARSE_ERROR = 18,
    UNRESOLVED_SYMBOL_REFERENCE = 19,
    DUPLICATE_SYMBOL = 20,
    TYPE_CONSTRAINT_VIOLATION = 21,
    INVALID_TEMPLATE_STRING_LITERAL = 22,
    INVALID_RAW_TEMPLATE_STRING_LITERAL = 23,
    INVALID_TYPE_ARGUMENTS = 24,
    NOT_A_TYPE = 25,
    INACCESSIBLE_SYMBOL = 26,
    NOT_A_VALUE_TYPE = 27,
    NOT_A_TEMPLATE_FUNCTION = 28,
    FIELD_NOT_FOUND = 29,
    BINDING_VARIABLE_MISMATCH = 30,
    INVALID_ARGUMENT = 31,
    INVALID_CASE_LABEL = 32,
    MISSING_CASE_LABEL = 33,
    INVALID_ANNOTATION = 34,
  };
  Type error_type;

  std::string message;
  size_t token_type;

  size_t char_offset;  // from the beginning of the file.

  size_t line;
  size_t line_offset;  // from the beginning of the line.

  size_t length;

  const char *ErrorTypeToString() const;
};

class PEIBuilder {
 public:
  ParserErrorInfo build() { return info_; }
  PEIBuilder &SetType(td::ParserErrorInfo::Type type) {
    info_.error_type = type;
    return *this;
  }
  PEIBuilder &SetMessage(const std::string &msg) {
    info_.message = msg;
    return *this;
  }
  PEIBuilder &SetTokenType(size_t token_type) {
    info_.token_type = token_type;
    return *this;
  }
  PEIBuilder &SetCharOffset(size_t char_offset) {
    info_.char_offset = char_offset;
    return *this;
  }
  PEIBuilder &SetLine(size_t line) {
    info_.line = line;
    return *this;
  }
  PEIBuilder &SetLineOffset(size_t line_offset) {
    info_.line_offset = line_offset;
    return *this;
  }
  PEIBuilder &SetLength(size_t length) {
    info_.length = length;
    return *this;
  }

 private:
  ParserErrorInfo info_;
};

}  // namespace td
