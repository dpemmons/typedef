#include "libtypedef/parser/typedef_parser.h"

#include <antlr4/antlr4-runtime.h>

#include <algorithm>
#include <cstddef>
#include <exception>
#include <memory>
#include <vector>

#define FMT_HEADER_ONLY
#include <fmt/core.h>

#include "libtypedef/parser/first_pass.h"
#include "libtypedef/parser/grammar/TypedefLexer.h"
#include "libtypedef/parser/grammar/TypedefParser.h"
#include "libtypedef/parser/grammar/TypedefParserBaseListener.h"
#include "libtypedef/parser/parser_error_info.h"
#include "libtypedef/parser/second_pass.h"
#include "typedef_parser.h"

namespace td {

using namespace std;

Parser::Parser(std::string input)
    : input_string_(input),
      input_stream_(input_string_),
      lexer_(&input_stream_),
      tokens_(&lexer_),
      parser_(&tokens_),
      errors_(),
      lexer_error_listener_(errors_),
      parser_error_listener_(errors_) {
  AttachListeners();
}

Parser::Parser(istream &input)
    : input_stream_(input),
      lexer_(&input_stream_),
      tokens_(&lexer_),
      parser_(&tokens_),
      errors_(),
      lexer_error_listener_(errors_),
      parser_error_listener_(errors_) {
  AttachListeners();
}
void Parser::AttachListeners() {
  lexer_.removeErrorListeners();
  lexer_.addErrorListener(&lexer_error_listener_);

  parser_.removeParseListeners();
  parser_.removeErrorListeners();
  parser_.addErrorListener(&parser_error_listener_);
}

size_t Parser::Parse() {
  // "Fast" mode is currently not used, but leaving it here as it may
  // be useful for latency sensitive stuff like language servers.
  bool fast = false;
  parser_.setBuildParseTree(!fast);

  // First parse with the bail error strategy to get quick feedback for
  // correct queries.
  parser_.setErrorHandler(make_shared<antlr4::BailErrorStrategy>());
  parser_.getInterpreter<antlr4::atn::ParserATNSimulator>()->setPredictionMode(
      antlr4::atn::PredictionMode::SLL);

  try {
    compilation_unit_ = parser_.compilationUnit();
  } catch (antlr4::ParseCancellationException &) {
    // Even in fast mode we have to do a second run if we got no error yet
    // (BailErrorStrategy does not do full processing).
    if (fast && !errors_.empty()) {
      compilation_unit_ = nullptr;
    } else {
      // If parsing was canceled we either really have a syntax error or we
      // need to do a second step, now with the default strategy and LL
      // parsing.
      tokens_.reset();
      parser_.reset();
      errors_.clear();
      parser_.setErrorHandler(make_shared<antlr4::DefaultErrorStrategy>());
      parser_.getInterpreter<antlr4::atn::ParserATNSimulator>()
          ->setPredictionMode(antlr4::atn::PredictionMode::LL);
      try {
        compilation_unit_ = parser_.compilationUnit();
      } catch (td::ParserErrorInfo &pei) {
        errors_.emplace_back((pei));
      } catch (...) {
        errors_.emplace_back(PEIBuilder()
                                 .SetType(ParserErrorInfo::UNKNOWN)
                                 .SetMessage("Unhandled exception")
                                 .build());
      }
    }
  } catch (td::ParserErrorInfo &pei) {
    errors_.emplace_back((pei));
  } catch (...) {
    errors_.emplace_back(PEIBuilder()
                             .SetType(ParserErrorInfo::UNKNOWN)
                             .SetMessage("Unhandled exception")
                             .build());
  }

  if (!compilation_unit_ || errors_.size()) {
    // can we fail to have a compilation unit without errors?
    return errors_.size();
  }

  FirstPassListener first_pass(errors_);
  antlr4::tree::ParseTreeWalker::DEFAULT.walk(&first_pass, compilation_unit_);

  if (errors_.size()) {
    return errors_.size();
  }

  SecondPassListener second_pass(errors_);
  antlr4::tree::ParseTreeWalker::DEFAULT.walk(&second_pass, compilation_unit_);
  return errors_.size();
}

ParserErrorInfo Parser::GetError(size_t ii) {
  if (errors_.size() > ii) {
    return errors_[ii];
  } else {
    throw std::runtime_error("Invalid error index.");
  }
}

void Parser::LexerErrorListener::syntaxError(
    antlr4::Recognizer *recognizer, antlr4::Token *offendingSymbol, size_t line,
    size_t charPositionInLine, const std::string &, std::exception_ptr ep) {
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

void Parser::ParserErrorListener::syntaxError(
    antlr4::Recognizer *recognizer, antlr4::Token *offendingSymbol, size_t line,
    size_t charPositionInLine, const std::string &msg, std::exception_ptr ep) {
  errors_list_.emplace_back(PEIBuilder()
                                .SetType(ParserErrorInfo::PARSE_ERROR)
                                .SetMessage(msg)
                                .SetTokenType(offendingSymbol->getType())
                                .SetCharOffset(offendingSymbol->getStartIndex())
                                .SetLine(line)
                                .SetLineOffset(charPositionInLine)
                                .SetLength(offendingSymbol->getStopIndex() -
                                           offendingSymbol->getStartIndex() + 1)
                                .build());
}

}  // namespace td
