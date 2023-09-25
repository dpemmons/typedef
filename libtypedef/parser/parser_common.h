#ifndef PARSER_PARSER_COMMON_H__
#define PARSER_PARSER_COMMON_H__

#include <antlr4/antlr4-runtime.h>

#include <string>

#include "libtypedef/parser/parser_error_info.h"

namespace td {

class LexerErrorListener : public antlr4::BaseErrorListener {
 public:
  LexerErrorListener(std::vector<ParserErrorInfo> &errors_list)
      : errors_list_(errors_list) {}

  virtual void syntaxError(antlr4::Recognizer *recognizer,
                           antlr4::Token *offendingSymbol, size_t line,
                           size_t charPositionInLine, const std::string &,
                           std::exception_ptr ep) override {
    std::string message;
    try {
      std::rethrow_exception(ep);
    } catch (antlr4::LexerNoViableAltException &) {
      antlr4::Lexer *lexer = dynamic_cast<antlr4::Lexer *>(recognizer);

      size_t len =
          lexer->getInputStream()->index() > lexer->tokenStartCharIndex
              ? (lexer->getInputStream()->index() - lexer->tokenStartCharIndex)
              : 1;

      errors_list_.emplace_back(PEIBuilder()
                                    .SetType(ParserErrorInfo::LEXER_ERROR)
                                    .SetMessage("Lexer error")
                                    .SetTokenType(0)
                                    .SetCharOffset(lexer->tokenStartCharIndex)
                                    .SetLine(line)
                                    .SetLineOffset(charPositionInLine)
                                    .SetLength(len)
                                    .build());
    }
  }

 private:
  std::vector<ParserErrorInfo> &errors_list_;
};

// Can also derive from DiagnosticErrorListener
class ParserErrorListener : public antlr4::BaseErrorListener {
 public:
  ParserErrorListener(std::vector<ParserErrorInfo> &errors_list)
      : errors_list_(errors_list) {}

  virtual void syntaxError(antlr4::Recognizer *recognizer,
                           antlr4::Token *offendingSymbol, size_t line,
                           size_t charPositionInLine, const std::string &msg,
                           std::exception_ptr ep) override {
    errors_list_.emplace_back(
        PEIBuilder()
            .SetType(ParserErrorInfo::PARSE_ERROR)
            .SetMessage(msg)
            .SetTokenType(offendingSymbol->getType())
            .SetCharOffset(offendingSymbol->getStartIndex())
            .SetLine(line)
            .SetLineOffset(charPositionInLine)
            .SetLength(offendingSymbol->getStopIndex() -
                       offendingSymbol->getStartIndex() + 1)
            .build());
  };

 private:
  std::vector<ParserErrorInfo> &errors_list_;
};

}  // namespace td

#endif  // PARSER_PARSER_COMMON_H__
