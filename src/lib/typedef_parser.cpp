#include "typedef_parser.h"

#include "antlr4/antlr4-runtime.h"
#include "grammar/TypedefLexer.h"
#include "grammar/TypedefParser.h"
#include "grammar/TypedefParserBaseListener.h"
#include "identifier.h"
#include "language_version.h"
#include "parsed_file.h"
#include "parser_error_info.h"
#include "use_declaration.h"

namespace td {

namespace {

ParserErrorInfo ErrorFromContext(antlr4::ParserRuleContext *ctx,
                                 ParserErrorInfo::Type type) {
  return PEIBuilder()
      .SetType(type)
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

      errors_list_->push_back(PEIBuilder()
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

class ParserErrorListener : public antlr4::BaseErrorListener {
 public:
  ParserErrorListener(std::vector<ParserErrorInfo> *errors_list)
      : errors_list_(errors_list) {}

  virtual void syntaxError(antlr4::Recognizer *recognizer,
                           antlr4::Token *offendingSymbol, size_t line,
                           size_t charPositionInLine, const std::string &,
                           std::exception_ptr ep) override {
    errors_list_->push_back(PEIBuilder()
                                .SetType(ParserErrorInfo::PARSE_ERROR)
                                .SetMessage("Parse error")
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

// Pull an idientifier string from something that has one.
template <class CTX>
std::string GetIdentifierString(CTX *ctx,
                                std::vector<ParserErrorInfo> *errors_list) {
  static_assert(std::is_base_of<antlr4::ParserRuleContext, CTX>::value,
                "CTX not derived from ParserRuleContext");
  if (!ctx || !ctx->identifier()) {
    errors_list->push_back(
        ErrorFromContext(ctx, ParserErrorInfo::MISSING_IDENTIFIER));
    return "";
  }
  if (ctx->identifier()->RAW_IDENTIFIER()) {
    return ctx->identifier()->RAW_IDENTIFIER()->toString();
  } else if (ctx->identifier()->NON_KEYWORD_IDENTIFIER()) {
    return ctx->identifier()->NON_KEYWORD_IDENTIFIER()->toString();
  } else {
    // Parse error.
    return "";
  }
}

// TODO: use std::set<>.contains() when upgrading to c++20.
template <typename T>
bool SetContains(std::set<T> set, T &x) {
  return set.find(x) != set.end();
}

}  // namespace

LanguageVersion GetLanguageVersion(
    TypedefParser::CompilationUnitContext *compilation_unit,
    std::vector<ParserErrorInfo> *errors_list) {
  std::string versionIdentifier = GetIdentifierString(
      compilation_unit->typedefVersionDeclaration(), errors_list);
  if (versionIdentifier.empty()) {
    // Missing identifer error already generated.
    return LanguageVersion::UNKNOWN;
  }
  if (!IsValidLanguageVersion(versionIdentifier)) {
    errors_list->push_back(
        ErrorFromContext(compilation_unit->typedefVersionDeclaration(),
                         ParserErrorInfo::INVALID_LANGUAGE_VERSION));
    return LanguageVersion::UNKNOWN;
  }
  return LangaugeVersionFromString(versionIdentifier);
}

td::QualifiedIdentifier GetModuleDeclaration(
    TypedefParser::CompilationUnitContext *compilation_unit,
    std::vector<ParserErrorInfo> *errors_list) {
  return QualifiedIdentifier();
}

std::vector<UseDeclaration> GetImports(
    TypedefParser::CompilationUnitContext *compilation_unit) {
  std::vector<UseDeclaration> use_decls;

  // auto useDeclaration = compilation_unit_->useDeclaration();
  // for (auto useDeclaration : importStatements) {
  //   td::Import import;
  //   if (auto single_import = importStatement->singleImportStatement()) {
  //     import.is_wildcard = false;
  //     if (single_import->qualifiedName()) {
  //       // TODO(dpemmons) this stuff...
  //       auto qualifiedName = single_import->qualifiedName();
  //     }
  //     if (single_import->identifier()) {
  //       import.alias = single_import->identifier()->toString();
  //     }
  //   } else if (auto wildcard_import =
  //                  importStatement->wildcardImportStatement()) {
  //     import.is_wildcard = true;
  //     if (wildcard_import->qualifiedName()) {
  //       import.qualified_identifier =
  //           wildcard_import->qualifiedName()->toString();
  //     }
  //   }
  //   imports.push_back(import);
  // }
  return use_decls;
}

std::shared_ptr<ParsedFile> Parse(const std::string &s) {
  std::istringstream ss(s);
  return Parse(ss);
}

std::shared_ptr<ParsedFile> Parse(std::istream &input) {
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

  bool fast = false;
  parser.setBuildParseTree(!fast);

  // First parse with the bail error strategy to get quick feedback for correct
  // queries.
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
      // If parsing was canceled we either really have a syntax error or we need
      // to do a second step, now with the default strategy and LL parsing.
      tokens.reset();
      parser.reset();
      errors.clear();
      parser.setErrorHandler(std::make_shared<antlr4::DefaultErrorStrategy>());
      parser.getInterpreter<antlr4::atn::ParserATNSimulator>()
          ->setPredictionMode(antlr4::atn::PredictionMode::LL);
      compilation_unit = parser.compilationUnit();
    }
  }

  ParsedFileBuilder builder;
  builder.SetLanguageVersion(GetLanguageVersion(compilation_unit, &errors));
  builder.SetModule(GetModuleDeclaration(compilation_unit, &errors));

  builder.SetErrors(errors);

  return std::make_shared<ParsedFile>(builder.build());
}

}  // namespace td