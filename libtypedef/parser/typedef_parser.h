#ifndef PARSER_TYPEDEF_PARSER_H__
#define PARSER_TYPEDEF_PARSER_H__

#include <memory>
#include <string>
#include <vector>

#include "libtypedef/parser/grammar/TypedefLexer.h"
#include "libtypedef/parser/grammar/TypedefParser.h"
#include "parser_common.h"
#include "parser_error_info.h"

namespace td {

class Parser {
 public:
  explicit Parser(std::istream& input);

  // returns error count
  size_t Parse();
  const std::vector<ParserErrorInfo>& Errors() { return errors_; }

 private:
  antlr4::ANTLRInputStream input_stream_;
  TypedefLexer lexer_;
  antlr4::CommonTokenStream tokens_;
  TypedefParser parser_;

  std::vector<ParserErrorInfo> errors_;

  LexerErrorListener lexer_error_listener_;
  ParserErrorListener parser_error_listener_;
};

}  // namespace td

#endif  // PARSER_TYPEDEF_PARSER_H__
