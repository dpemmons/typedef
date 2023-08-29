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
#include "libtypedef/parser/table.h"
#include "libtypedef/parser/tmpl_str_parser.h"

namespace td {

using namespace std;

ParsedFile::ParsedFile() = default;
ParsedFile::~ParsedFile() = default;

struct ParserResources {
  ParserResources(istream &input) {
    inputStream = std::make_unique<antlr4::ANTLRInputStream>(input);
    lexer = std::make_unique<TypedefLexer>(inputStream.get());
    tokens = std::make_unique<antlr4::CommonTokenStream>(lexer.get());
    parser = std::make_unique<TypedefParser>(tokens.get());
    lexerErrorListener = std::make_unique<LexerErrorListener>(&errors);
    parserErrorListener = std::make_unique<ParserErrorListener>(&errors);

    lexer->removeErrorListeners();
    lexer->addErrorListener(lexerErrorListener.get());

    parser->removeParseListeners();
    parser->removeErrorListeners();
    parser->addErrorListener(parserErrorListener.get());
  }
  ~ParserResources() = default;

  unique_ptr<antlr4::ANTLRInputStream> inputStream;
  unique_ptr<TypedefLexer> lexer;
  unique_ptr<antlr4::CommonTokenStream> tokens;
  unique_ptr<TypedefParser> parser;
  vector<ParserErrorInfo> errors;
  unique_ptr<LexerErrorListener> lexerErrorListener;
  unique_ptr<ParserErrorListener> parserErrorListener;
};

unique_ptr<ParsedFile> ParseTypedef(istream &input) {
  auto parsed_file = std::make_unique<ParsedFile>();
  parsed_file->res = std::make_unique<ParserResources>(input);
  ParserResources *res = parsed_file->res.get();

  TypedefParser::CompilationUnitContext *compilation_unit = nullptr;

  // TODO revisit this and how it's used below to make a null compilation
  // unit?
  bool fast = false;
  res->parser->setBuildParseTree(!fast);

  // First parse with the bail error strategy to get quick feedback for
  // correct queries.
  res->parser->setErrorHandler(make_shared<antlr4::BailErrorStrategy>());
  res->parser->getInterpreter<antlr4::atn::ParserATNSimulator>()
      ->setPredictionMode(antlr4::atn::PredictionMode::SLL);

  try {
    compilation_unit = res->parser->compilationUnit();
  } catch (antlr4::ParseCancellationException &) {
    // Even in fast mode we have to do a second run if we got no error yet
    // (BailErrorStrategy does not do full processing).
    if (fast && !res->errors.empty()) {
      compilation_unit = nullptr;
    } else {
      // If parsing was canceled we either really have a syntax error or we
      // need to do a second step, now with the default strategy and LL
      // parsing.
      res->tokens->reset();
      res->parser->reset();
      res->errors.clear();
      res->parser->setErrorHandler(make_shared<antlr4::DefaultErrorStrategy>());
      res->parser->getInterpreter<antlr4::atn::ParserATNSimulator>()
          ->setPredictionMode(antlr4::atn::PredictionMode::LL);
      compilation_unit = res->parser->compilationUnit();
    }
  }

  if (!compilation_unit) {
    parsed_file->errors = res->errors;
    return std::move(parsed_file);
  }

  FirstPassListener first_pass(res->errors);
  antlr4::tree::ParseTreeWalker::DEFAULT.walk(&first_pass, compilation_unit);

  if (!res->errors.empty()) {
    parsed_file->errors = res->errors;
    return std::move(parsed_file);
  }

  SecondPassListener second_pass(res->errors);
  antlr4::tree::ParseTreeWalker::DEFAULT.walk(&second_pass, compilation_unit);
  if (!res->errors.empty()) {
    parsed_file->errors = res->errors;
  }
  parsed_file->mod = compilation_unit->mod;
  return std::move(parsed_file);
}

unique_ptr<ParsedFile> ParseTypedef(const string &s) {
  istringstream ss(s);
  return ParseTypedef(ss);
}

}  // namespace td