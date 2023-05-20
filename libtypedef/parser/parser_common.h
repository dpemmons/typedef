#ifndef TYPEDEF_LIBTYPEDEF_PARSER_PARSER_COMMON_H_
#define TYPEDEF_LIBTYPEDEF_PARSER_PARSER_COMMON_H_

#include <antlr4/antlr4-runtime.h>

#include <string>

#include "libtypedef/parser/parser_error_info.h"

namespace td {

inline ParserErrorInfo ErrorFromContext(antlr4::ParserRuleContext *ctx,
                                        ParserErrorInfo::Type type,
                                        std::string message = "") {
  return PEIBuilder()
      .SetType(type)
      .SetMessage(message)
      .SetTokenType(ctx->getStart()->getType())
      .SetCharOffset(ctx->getStart()->getStartIndex())
      .SetLine(ctx->getStart()->getLine())
      .SetLineOffset(ctx->getStart()->getCharPositionInLine())
      .SetLength(ctx->getStop()->getStopIndex() -
                 ctx->getStart()->getStartIndex() + 1)
      .build();
}

class LexerErrorListener : public antlr4::BaseErrorListener {
 public:
  LexerErrorListener(std::vector<ParserErrorInfo> *errors_list)
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

      errors_list_->emplace_back(
          PEIBuilder()
              .SetType(ParserErrorInfo::LEXER_ERROR)
              .SetMessage("Lexer error")
              .SetTokenType(0)
              .SetCharOffset(lexer->tokenStartCharIndex)
              .SetLine(line)
              .SetLineOffset(charPositionInLine)
              .SetLength(lexer->getInputStream()->index() -
                         lexer->tokenStartCharIndex)
              .build());
    }
  }

 private:
  std::vector<ParserErrorInfo> *const errors_list_;
};

// Can also derive from DiagnosticErrorListener
class ParserErrorListener : public antlr4::BaseErrorListener {
 public:
  ParserErrorListener(std::vector<ParserErrorInfo> *errors_list)
      : errors_list_(errors_list) {}

  virtual void syntaxError(antlr4::Recognizer *recognizer,
                           antlr4::Token *offendingSymbol, size_t line,
                           size_t charPositionInLine, const std::string &msg,
                           std::exception_ptr ep) override {
    errors_list_->emplace_back(
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
  std::vector<ParserErrorInfo> *const errors_list_;
};

}  // namespace td

#endif  // TYPEDEF_LIBTYPEDEF_PARSER_PARSER_COMMON_H_
