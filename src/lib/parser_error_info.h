#pragma once

#include <string>

namespace td {

struct ParserErrorInfo {
  enum Type {
    UNKNOWN = 0,
    LEXER_ERROR = 1,
    PARSE_ERROR = 2,
  };
  Type error_type;

  std::string message;
  size_t token_type;

  size_t char_offset;  // from the beginning of the file.

  size_t line;
  size_t line_offset;  // from the beginning of the line.

  size_t length;
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
