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
#include "libtypedef/parser/parser_common.h"
#include "libtypedef/parser/parser_error_info.h"
#include "libtypedef/parser/second_pass.h"
#include "libtypedef/parser/tmpl_str_parser.h"
#include "typedef_parser.h"

namespace td {

using namespace std;

Parser::Parser(istream &input)
    : input_stream_(input),
      lexer_(&input_stream_),
      tokens_(&lexer_),
      parser_(&tokens_),
      errors_(),
      lexer_error_listener_(errors_),
      parser_error_listener_(errors_) {}

size_t Parser::Parse() {
  TypedefParser::CompilationUnitContext *compilation_unit = nullptr;

  // TODO revisit this and how it's used below to make a null compilation
  // unit?
  bool fast = false;
  parser_.setBuildParseTree(!fast);

  // First parse with the bail error strategy to get quick feedback for
  // correct queries.
  parser_.setErrorHandler(make_shared<antlr4::BailErrorStrategy>());
  parser_.getInterpreter<antlr4::atn::ParserATNSimulator>()->setPredictionMode(
      antlr4::atn::PredictionMode::SLL);

  try {
    compilation_unit = parser_.compilationUnit();
  } catch (antlr4::ParseCancellationException &) {
    // Even in fast mode we have to do a second run if we got no error yet
    // (BailErrorStrategy does not do full processing).
    if (fast && !errors_.empty()) {
      compilation_unit = nullptr;
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
      compilation_unit = parser_.compilationUnit();
    }
  }

  if (!compilation_unit) {
    // can we fail to have a compilation unit without errors?
    return errors_.size();
  }

  FirstPassListener first_pass(errors_);
  antlr4::tree::ParseTreeWalker::DEFAULT.walk(&first_pass, compilation_unit);

  if (errors_.size()) {
    return errors_.size();
  }

  SecondPassListener second_pass(errors_);
  antlr4::tree::ParseTreeWalker::DEFAULT.walk(&second_pass, compilation_unit);
  return errors_.size();
}

}  // namespace td
