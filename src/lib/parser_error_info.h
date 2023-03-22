#pragma once

#include <iostream>
#include <string>

#define FMT_HEADER_ONLY
#include "fmt/core.h"
#include "fmt/ostream.h"

namespace td {

struct ParserErrorInfo {
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
  };
  Type error_type;

  std::string message;
  size_t token_type;

  size_t char_offset;  // from the beginning of the file.

  size_t line;
  size_t line_offset;  // from the beginning of the line.

  size_t length;

  friend bool operator==(const ParserErrorInfo &c1, const ParserErrorInfo &c2) {
    return c1.error_type == c2.error_type &&
           c1.message.compare(c2.message) == 0 &&
           c1.token_type == c2.token_type && c1.char_offset == c2.char_offset &&
           c1.line == c2.line && c1.line_offset == c2.line_offset &&
           c1.length == c2.length;
  }
  friend bool operator!=(const ParserErrorInfo &c1, const ParserErrorInfo &c2) {
    return c1.error_type != c2.error_type ||
           c1.message.compare(c2.message) != 0 ||
           c1.token_type != c2.token_type || c1.char_offset != c2.char_offset ||
           c1.line != c2.line || c1.line_offset != c2.line_offset ||
           c1.length != c2.length;
  }

  friend std::ostream &operator<<(std::ostream &os,
                                  const ParserErrorInfo &value) {
    fmt::print(os, "[Error: {}, Message: \"{}\",", value.ErrorTypeToString(),
               value.message);
    if (value.error_type == LEXER_ERROR) {
      fmt::print(os, " token type: {},", value.token_type);
    }
    fmt::print(os, " file offset: {}, line: {}, line offset: {}, length: {}]",
               value.char_offset, value.line, value.line_offset, value.length);
    return os;
  }

  const char *ErrorTypeToString() const {
    switch (error_type) {
      case UNKNOWN:
        return "UNKNOWN";
      case OTHER:
        return "OTHER";
      case UNIMPLEMENTED:
        return "UNIMPLEMENTED";
      case LEXER_ERROR:
        return "LEXER_ERROR";
      case PARSE_ERROR:
        return "PARSE_ERROR";
      case MISSING_STATEMENT:
        return "MISSING_STATEMENT";
      case MISSING_IDENTIFIER:
        return "MISSING_IDENTIFIER";
      case INVALID_LANGUAGE_VERSION:
        return "INVALID_LANGUAGE_VERSION";
      case MISSING_TYPE_IDENTIFIER:
        return "MISSING_TYPE_IDENTIFIER";
      case MISSING_VALUE_EXPRESSION:
        return "MISSING_VALUE_EXPRESSION";
      case UNKNOWN_TYPE:
        return "UNKNOWN_TYPE";
      case TYPE_MISMATCH:
        return "TYPE_MISMATCH";
      default:
        abort();
    }
  }
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
