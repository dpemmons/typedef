#include "libtypedef/parser/typedef_parser.h"

#include <antlr4/antlr4-runtime.h>

#include <algorithm>
#include <cstddef>
#include <exception>
#include <vector>

#define FMT_HEADER_ONLY
#include <fmt/core.h>

#include "libtypedef/parser/grammar/TypedefLexer.h"
#include "libtypedef/parser/grammar/TypedefParser.h"
#include "libtypedef/parser/grammar/TypedefParserBaseListener.h"
#include "libtypedef/parser/parsed_file.h"
#include "libtypedef/parser/parser_common.h"
#include "libtypedef/parser/parser_error_info.h"
#include "libtypedef/parser/symbol_table.h"

namespace {

using namespace td;

class SymRefListener : public TypedefParserBaseListener {
 public:
  SymRefListener(std::vector<ParserErrorInfo> &errors_list)
      : errors_list_(errors_list) {}

  // Walk up the tree looking for nodes that may contain the referenced symbol.
  bool FindSymbol(TypedefParser::SymbolReferenceContext *unresolved_symbol_ctx,
                  antlr4::tree::ParseTree *search_ctx) {
    const string &identifier = unresolved_symbol_ctx->maybe_symref->id;

    TypedefParser::StructDeclarationContext *maybeStruct =
        dynamic_cast<TypedefParser::StructDeclarationContext *>(search_ctx);
    TypedefParser::VariantDeclarationContext *maybeVariant =
        dynamic_cast<TypedefParser::VariantDeclarationContext *>(search_ctx);
    TypedefParser::CompilationUnitContext *maybeCompilationUnit =
        dynamic_cast<TypedefParser::CompilationUnitContext *>(search_ctx);

    if (maybeStruct && maybeStruct->s->table.IsIdentifierUsed(identifier) > 0) {
      return true;
    } else if (maybeVariant &&
               maybeVariant->v->table.IsIdentifierUsed(identifier) > 0) {
      return true;
    } else if (maybeCompilationUnit &&
               maybeCompilationUnit->symbol_table.IsIdentifierUsed(identifier) >
                   0) {
      return true;
    } else if (search_ctx->parent != nullptr) {
      return FindSymbol(unresolved_symbol_ctx, search_ctx->parent);
    } else {
      // top of the tree.
      errors_list_.emplace_back(
          ErrorFromContext(unresolved_symbol_ctx, ParserErrorInfo::PARSE_ERROR,
                           "Unresolved symbol reference."));

      return false;
    }
  }

  virtual void exitSymbolReference(
      TypedefParser::SymbolReferenceContext *ctx) override {
    // walk up the tree to see if the symbol exists.
    if (ctx->parent) {
      FindSymbol(ctx, ctx->parent);
    }
  }

 private:
  std::vector<ParserErrorInfo> &errors_list_;
};

}  // namespace

namespace td {

std::shared_ptr<ParsedFile> ParseTypedef(const std::string &s) {
  std::istringstream ss(s);
  return ParseTypedef(ss);
}

std::shared_ptr<ParsedFile> ParseTypedef(std::istream &input) {
  antlr4::ANTLRInputStream inputStream(input);
  TypedefLexer lexer(&inputStream);
  antlr4::CommonTokenStream tokens(&lexer);
  TypedefParser parser(&tokens);
  std::vector<ParserErrorInfo> errors;
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
  parser.setErrorHandler(std::make_shared<antlr4::BailErrorStrategy>());
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
      parser.setErrorHandler(std::make_shared<antlr4::DefaultErrorStrategy>());
      parser.getInterpreter<antlr4::atn::ParserATNSimulator>()
          ->setPredictionMode(antlr4::atn::PredictionMode::LL);
      compilation_unit = parser.compilationUnit();
    }
  }

  if (compilation_unit != nullptr) {
    SymRefListener symRefListener(errors);
    antlr4::tree::ParseTreeWalker::DEFAULT.walk(&symRefListener,
                                                compilation_unit);
  }

  ParsedFileBuilder builder;
  if (errors.empty() && compilation_unit != nullptr) {
    builder.SetLanguageVersion(compilation_unit->version);
    builder.SetModule(compilation_unit->module);
    builder.AddSymbols2(compilation_unit->symbol_table);
  }
  builder.AddErrors(errors);

  return std::make_shared<ParsedFile>(builder.build());
}

}  // namespace td