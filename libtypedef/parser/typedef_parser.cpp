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
#include "libtypedef/parser/parsed_file.h"
#include "libtypedef/parser/parser_common.h"
#include "libtypedef/parser/parser_error_info.h"
#include "libtypedef/parser/second_pass.h"
#include "libtypedef/parser/table.h"
#include "libtypedef/parser/tmpl_str_parser.h"

namespace td {

using namespace std;

shared_ptr<ParsedFile> ParseTypedef(const string &s) {
  istringstream ss(s);
  return ParseTypedef(ss);
}

shared_ptr<ParsedFile> ParseTypedef(istream &input) {
  antlr4::ANTLRInputStream inputStream(input);
  TypedefLexer lexer(&inputStream);
  antlr4::CommonTokenStream tokens(&lexer);
  TypedefParser parser(&tokens);
  vector<ParserErrorInfo> errors;
  LexerErrorListener lexerErrorListener(&errors);
  ParserErrorListener parserErrorListener(&errors);

  lexer.removeErrorListeners();
  lexer.addErrorListener(&lexerErrorListener);

  parser.removeParseListeners();
  parser.removeErrorListeners();
  parser.addErrorListener(&parserErrorListener);

  TypedefParser::CompilationUnitContext *compilation_unit = nullptr;

  // TODO revisit this and how it's used below to make a null compilation
  // unit?
  bool fast = false;
  parser.setBuildParseTree(!fast);

  // First parse with the bail error strategy to get quick feedback for
  // correct queries.
  parser.setErrorHandler(make_shared<antlr4::BailErrorStrategy>());
  parser.getInterpreter<antlr4::atn::ParserATNSimulator>()->setPredictionMode(
      antlr4::atn::PredictionMode::SLL);

  try {
    compilation_unit = parser.compilationUnit();
  } catch (antlr4::ParseCancellationException &) {
    // Even in fast mode we have to do a second run if we got no error yet
    // (BailErrorStrategy does not do full processing).
    if (fast && !errors.empty()) {
      compilation_unit = nullptr;
    } else {
      // If parsing was canceled we either really have a syntax error or we
      // need to do a second step, now with the default strategy and LL
      // parsing.
      tokens.reset();
      parser.reset();
      errors.clear();
      parser.setErrorHandler(make_shared<antlr4::DefaultErrorStrategy>());
      parser.getInterpreter<antlr4::atn::ParserATNSimulator>()
          ->setPredictionMode(antlr4::atn::PredictionMode::LL);
      compilation_unit = parser.compilationUnit();
    }
  }

  auto parsed_file = make_shared<ParsedFile>();

  if (!compilation_unit) {
    parsed_file->errors = errors;
    return std::move(parsed_file);
  }

  FirstPassListener first_pass(errors);
  antlr4::tree::ParseTreeWalker::DEFAULT.walk(&first_pass, compilation_unit);

  if (!errors.empty()) {
    parsed_file->errors = errors;
    return std::move(parsed_file);
  }

  SecondPassListener second_pass(errors);
  antlr4::tree::ParseTreeWalker::DEFAULT.walk(&second_pass, compilation_unit);
  if (!errors.empty()) {
    parsed_file->errors = errors;
  }
  parsed_file->mod = compilation_unit->mod;
  return std::move(parsed_file);
}

}  // namespace td