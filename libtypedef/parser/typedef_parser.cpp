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
#include "libtypedef/parser/tmpl_str_parser.h"

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

class TmplStrListener : public TypedefParserBaseListener {
 public:
  TmplStrListener(std::vector<ParserErrorInfo> &errors_list)
      : errors_list_(errors_list) {}

  virtual void exitValuedTemplateStringType(
      TypedefParser::ValuedTemplateStringTypeContext *ctx) override {
    if (!ctx->stringLiteral()->maybe_val) {
      errors_list_.emplace_back(
          ErrorFromContext(ctx, ParserErrorInfo::INVALID_STRING_LITERAL,
                           "Unexpected: missing string literal."));
      return;
    }
    auto parsedTmplStr = ParseTmplStr(*ctx->stringLiteral()->maybe_val);
    if (!parsedTmplStr->errors.empty()) {
      antlr4::Token *token = nullptr;
      int line_offset = 0;
      if (ctx->stringLiteral()->STRING_LITERAL()) {
        token = ctx->stringLiteral()->STRING_LITERAL()->getSymbol();
        line_offset = ctx->stringLiteral()->start_offset;
      } else if (ctx->stringLiteral()->RAW_STRING_LITERAL()) {
        token = ctx->stringLiteral()->RAW_STRING_LITERAL()->getSymbol();
        line_offset = ctx->stringLiteral()->start_offset;
      } else {
        token = ctx->getStart();
      }
      for (auto &err : parsedTmplStr->errors) {
        errors_list_.emplace_back(
            PEIBuilder()
                .SetType(ParserErrorInfo::TEMPLATE_STRING_PARSE_ERROR)
                .SetMessage(err.message)
                .SetTokenType(antlr4::Token::INVALID_TYPE)
                .SetCharOffset(token->getStartIndex() + err.char_offset)
                .SetLine(token->getLine() + err.line - 1)
                .SetLineOffset(token->getCharPositionInLine() +
                               err.line_offset + line_offset)
                .SetLength(err.length)
                .build());
      }
      return;
    }

    // stick the table onto the TmplStr value!
    if (holds_alternative<shared_ptr<TmplStr>>(*ctx->maybe_val)) {
      auto tmpl_str = get<shared_ptr<TmplStr>>(*ctx->maybe_val);
      tmpl_str->table = parsedTmplStr->table;
    } else {
      ErrorFromContext(ctx, ParserErrorInfo::OTHER,
                        "Internal error: Valued template string object does "
                        "not contain a value object.");
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

  if (compilation_unit == nullptr) {
    return std::make_shared<ParsedFile>(
        ParsedFileBuilder().AddErrors(errors).build());
  }

  // Resolve symbol references.
  SymRefListener symRefListener(errors);
  antlr4::tree::ParseTreeWalker::DEFAULT.walk(&symRefListener,
                                              compilation_unit);
  if (!errors.empty()) {
    return std::make_shared<ParsedFile>(
        ParsedFileBuilder().AddErrors(errors).build());
  }

  // Parse template strings and decorate ValuedTemplateStringTypeContext
  // value objects with tmpl_str_tables.
  TmplStrListener tmplStrListener(errors);
  antlr4::tree::ParseTreeWalker::DEFAULT.walk(&tmplStrListener,
                                              compilation_unit);

  if (!errors.empty()) {
    return std::make_shared<ParsedFile>(
        ParsedFileBuilder().AddErrors(errors).build());
  }

  return std::make_shared<ParsedFile>(
      ParsedFileBuilder()
          .SetLanguageVersion(compilation_unit->version)
          .SetModule(compilation_unit->module)
          .AddSymbols2(compilation_unit->symbol_table)
          .build());
}

}  // namespace td