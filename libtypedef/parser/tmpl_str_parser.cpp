#include "libtypedef/parser/tmpl_str_parser.h"

#include <antlr4/antlr4-runtime.h>

#include <sstream>

#include "libtypedef/parser/grammar/TmplStrLexer.h"
#include "libtypedef/parser/grammar/TmplStrParser.h"
#include "libtypedef/parser/parser_common.h"

namespace td {

std::unique_ptr<TmplStrTemplate> ParseTmplStr(const std::string& s) {
  std::istringstream ss(s);
  return std::move(ParseTmplStr(ss));
}

std::unique_ptr<TmplStrTemplate> ParseTmplStr(std::istream& input) {
  antlr4::ANTLRInputStream inputStream(input);
  TmplStrLexer lexer(&inputStream);
  antlr4::CommonTokenStream tokens(&lexer);
  TmplStrParser parser(&tokens);

  auto parsedTmpl = std::make_unique<TmplStrTemplate>();

  LexerErrorListener lexerErrorListener(&parsedTmpl->errors);
  ParserErrorListener parserErrorListener(&parsedTmpl->errors);

  lexer.removeErrorListeners();
  lexer.addErrorListener(&lexerErrorListener);

  parser.removeParseListeners();
  parser.removeErrorListeners();
  parser.addErrorListener(&parserErrorListener);

  TmplStrParser::TmplContext* tmpl_ctx = nullptr;

  // TODO revisit this and how it's used below to make a null compilation
  // unit?
  bool fast = false;
  parser.setBuildParseTree(!fast);

  // First parse with the bail error strategy to get quick feedback for
  // correct queries.
  parser.setErrorHandler(std::make_shared<antlr4::BailErrorStrategy>());
  parser.getInterpreter<antlr4::atn::ParserATNSimulator>()->setPredictionMode(
      antlr4::atn::PredictionMode::SLL);

  try {
    tmpl_ctx = parser.tmpl();
  } catch (antlr4::ParseCancellationException&) {
    // Even in fast mode we have to do a second run if we got no error yet
    // (BailErrorStrategy does not do full processing).
    if (fast && !parsedTmpl->errors.empty()) {
      tmpl_ctx = nullptr;
    } else {
      // If parsing was canceled we either really have a syntax error or we
      // need to do a second step, now with the default strategy and LL
      // parsing.
      tokens.reset();
      parser.reset();
      parsedTmpl->errors.clear();
      parser.setErrorHandler(std::make_shared<antlr4::DefaultErrorStrategy>());
      parser.getInterpreter<antlr4::atn::ParserATNSimulator>()
          ->setPredictionMode(antlr4::atn::PredictionMode::LL);
      tmpl_ctx = parser.tmpl();
    }
  }

  return std::move(parsedTmpl);
}

}  // namespace td
