#include "typedef_parser.h"

#include "antlr4/antlr4-runtime.h"
#include "grammar/TypedefLexer.h"
#include "grammar/TypedefParser.h"
#include "grammar/TypedefParserBaseListener.h"
#define FMT_HEADER_ONLY
#include "fmt/core.h"
#include "identifier.h"
#include "language_version.h"
#include "parsed_file.h"
#include "parser_error_info.h"
#include "symbol.h"
#include "use_declaration.h"
#include "values.h"

namespace td {

namespace {

ParserErrorInfo ErrorFromContext(antlr4::ParserRuleContext *ctx,
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

class ParserErrorListener : public antlr4::BaseErrorListener {
 public:
  ParserErrorListener(std::vector<ParserErrorInfo> *errors_list)
      : errors_list_(errors_list) {}

  virtual void syntaxError(antlr4::Recognizer *recognizer,
                           antlr4::Token *offendingSymbol, size_t line,
                           size_t charPositionInLine, const std::string &,
                           std::exception_ptr ep) override {
    errors_list_->emplace_back(
        PEIBuilder()
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
                                std::vector<ParserErrorInfo> &errors_list) {
  static_assert(std::is_base_of<antlr4::ParserRuleContext, CTX>::value,
                "CTX not derived from ParserRuleContext");
  if (!ctx || !ctx->identifier()) {
    errors_list.emplace_back(
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

template <class TYPE>
std::unique_ptr<Type> MaybeGetTypeFromLiteralExpression(
    TypedefParser::LiteralExpressionContext *ctx,
    std::vector<ParserErrorInfo> &errors_list) {
  if (ctx->CHAR_LITERAL()) {
    return TYPE::FromLiteral(ctx->CHAR_LITERAL()->toString());
  } else if (ctx->STRING_LITERAL()) {
    errors_list.emplace_back(ErrorFromContext(
        ctx, ParserErrorInfo::UNIMPLEMENTED, "STRING_LITERAL"));
    return nullptr;
  } else if (ctx->RAW_STRING_LITERAL()) {
    errors_list.emplace_back(ErrorFromContext(
        ctx, ParserErrorInfo::UNIMPLEMENTED, "RAW_STRING_LITERAL"));
    return nullptr;
  } else if (ctx->BYTE_LITERAL()) {
    errors_list.emplace_back(
        ErrorFromContext(ctx, ParserErrorInfo::UNIMPLEMENTED, "BYTE_LITERAL"));
    return nullptr;
  } else if (ctx->BYTE_STRING_LITERAL()) {
    errors_list.emplace_back(ErrorFromContext(
        ctx, ParserErrorInfo::UNIMPLEMENTED, "BYTE_STRING_LITERAL"));
    return nullptr;
  } else if (ctx->RAW_BYTE_STRING_LITERAL()) {
    errors_list.emplace_back(ErrorFromContext(
        ctx, ParserErrorInfo::UNIMPLEMENTED, "RAW_BYTE_STRING_LITERAL"));
    return nullptr;
  } else if (ctx->INTEGER_LITERAL()) {
    return TYPE::FromLiteral(ctx->INTEGER_LITERAL()->toString());
  } else if (ctx->FLOAT_LITERAL()) {
    return TYPE::FromLiteral(ctx->FLOAT_LITERAL()->toString());
  } else if (ctx->KW_TRUE()) {
    return TYPE::FromLiteral(ctx->KW_TRUE()->toString());
  } else if (ctx->KW_FALSE()) {
    return TYPE::FromLiteral(ctx->KW_FALSE()->toString());
  }
  return nullptr;
}

// TODO: use std::set<>.contains() when upgrading to c++20.
template <typename T>
bool SetContains(std::set<T> set, T &x) {
  return set.find(x) != set.end();
}

}  // namespace

void ProcessLanguageVersion(
    TypedefParser::CompilationUnitContext *compilation_unit,
    ParsedFileBuilder &builder, std::vector<ParserErrorInfo> &errors_list) {
  std::string versionIdentifier = GetIdentifierString(
      compilation_unit->typedefVersionDeclaration(), errors_list);
  if (versionIdentifier.empty()) {
    // Missing identifer error already generated.
    builder.SetLanguageVersion(LanguageVersion::UNKNOWN);
    return;
  }

  if (!IsValidLanguageVersion(versionIdentifier)) {
    errors_list.emplace_back(
        ErrorFromContext(compilation_unit->typedefVersionDeclaration(),
                         ParserErrorInfo::INVALID_LANGUAGE_VERSION));
    builder.SetLanguageVersion(LanguageVersion::UNKNOWN);
    return;
  }

  builder.SetLanguageVersion(LangaugeVersionFromString(versionIdentifier));
}

void ProcessModuleDeclaration(
    TypedefParser::CompilationUnitContext *compilation_unit,
    ParsedFileBuilder &builder, std::vector<ParserErrorInfo> &errors_list) {
  if (compilation_unit->moduleDeclaration()) {
    // TODO(dpemmons) module declarations.
    errors_list.emplace_back(
        ErrorFromContext(compilation_unit->typedefVersionDeclaration(),
                         ParserErrorInfo::UNIMPLEMENTED));
    // builder.SetModule(/*something*/);
  }
}

void ProcessUseDeclarations(
    TypedefParser::CompilationUnitContext *compilation_unit,
    ParsedFileBuilder &builder, std::vector<ParserErrorInfo> &errors_list) {
  std::vector<UseDeclaration> use_decls;

  if (!compilation_unit->useDeclaration().empty()) {
    errors_list.emplace_back(
        ErrorFromContext(compilation_unit->typedefVersionDeclaration(),
                         ParserErrorInfo::UNIMPLEMENTED));
    // builder.AddUseDeclaration(/*something*/);
  }
}

void ProcessValueDefinitions(
    TypedefParser::CompilationUnitContext *compilation_unit,
    ParsedFileBuilder &builder, std::vector<ParserErrorInfo> &errors_list) {
  for (auto item : compilation_unit->item()) {
    if (TypedefParser::ValueDefinitionContext *vd = item->valueDefinition()) {
      // Identifier qi(GetIdentifierString(vd, errors_list));

      // Missing type.
      if (!vd->type_() || !vd->type_()->identifier()) {
        builder.AddError(
            ErrorFromContext(compilation_unit->typedefVersionDeclaration(),
                             ParserErrorInfo::MISSING_TYPE_IDENTIFIER));
        continue;
      }
      // Missing value.
      if (!vd->value() || !vd->value()->literalExpression()) {
        builder.AddError(
            ErrorFromContext(compilation_unit->typedefVersionDeclaration(),
                             ParserErrorInfo::MISSING_VALUE_EXPRESSION));
        continue;
      }
      auto symbol_name = GetIdentifierString(vd, errors_list);
      if (symbol_name.empty()) {
        continue;
      }
      auto name = std::make_unique<Identifier>(symbol_name);

      std::string typeStr = GetIdentifierString(vd->type_(), errors_list);

      // Bool type
      if (Bool::TypeName().compare(typeStr) == 0) {
        auto val = MaybeGetTypeFromLiteralExpression<Bool>(
            vd->value()->literalExpression(), errors_list);
        if (val) {
          builder.AddSymbol(
              std::make_unique<Symbol>(std::move(name), std::move(val)));
        } else {
          builder.AddError(
              ErrorFromContext(vd->value()->literalExpression(),
                               ParserErrorInfo::INVALID_BOOL_LITERAL));
        }
      } else if (Char::TypeName().compare(typeStr) == 0) {
        auto val = MaybeGetTypeFromLiteralExpression<Char>(
            vd->value()->literalExpression(), errors_list);
        if (val) {
          builder.AddSymbol(
              std::make_unique<Symbol>(std::move(name), std::move(val)));
        } else {
          builder.AddError(
              ErrorFromContext(vd->value()->literalExpression(),
                               ParserErrorInfo::INVALID_CHAR_LITERAL));
        }
      } else if (F32::TypeName().compare(typeStr) == 0) {
        auto val = MaybeGetTypeFromLiteralExpression<F32>(
            vd->value()->literalExpression(), errors_list);
        if (val) {
          builder.AddSymbol(
              std::make_unique<Symbol>(std::move(name), std::move(val)));
        } else {
          builder.AddError(
              ErrorFromContext(vd->value()->literalExpression(),
                               ParserErrorInfo::INVALID_FLOAT_LITERAL));
        }
      } else if (F64::TypeName().compare(typeStr) == 0) {
        auto val = MaybeGetTypeFromLiteralExpression<F64>(
            vd->value()->literalExpression(), errors_list);
        if (val) {
          builder.AddSymbol(
              std::make_unique<Symbol>(std::move(name), std::move(val)));
        } else {
          builder.AddError(
              ErrorFromContext(vd->value()->literalExpression(),
                               ParserErrorInfo::INVALID_FLOAT_LITERAL));
        }
      } else if (I8::TypeName().compare(typeStr) == 0) {
        auto val = MaybeGetTypeFromLiteralExpression<I8>(
            vd->value()->literalExpression(), errors_list);
        if (val) {
          builder.AddSymbol(
              std::make_unique<Symbol>(std::move(name), std::move(val)));
        } else {
          builder.AddError(
              ErrorFromContext(vd->value()->literalExpression(),
                               ParserErrorInfo::INVALID_INTEGER_LITERAL));
        }
      } else if (I16::TypeName().compare(typeStr) == 0) {
        auto val = MaybeGetTypeFromLiteralExpression<I16>(
            vd->value()->literalExpression(), errors_list);
        if (val) {
          builder.AddSymbol(
              std::make_unique<Symbol>(std::move(name), std::move(val)));
        } else {
          builder.AddError(
              ErrorFromContext(vd->value()->literalExpression(),
                               ParserErrorInfo::INVALID_INTEGER_LITERAL));
        }
      } else if (I32::TypeName().compare(typeStr) == 0) {
        auto val = MaybeGetTypeFromLiteralExpression<I32>(
            vd->value()->literalExpression(), errors_list);
        if (val) {
          builder.AddSymbol(
              std::make_unique<Symbol>(std::move(name), std::move(val)));
        } else {
          builder.AddError(
              ErrorFromContext(vd->value()->literalExpression(),
                               ParserErrorInfo::INVALID_INTEGER_LITERAL));
        }
      } else if (I64::TypeName().compare(typeStr) == 0) {
        auto val = MaybeGetTypeFromLiteralExpression<I64>(
            vd->value()->literalExpression(), errors_list);
        if (val) {
          builder.AddSymbol(
              std::make_unique<Symbol>(std::move(name), std::move(val)));
        } else {
          builder.AddError(
              ErrorFromContext(vd->value()->literalExpression(),
                               ParserErrorInfo::INVALID_INTEGER_LITERAL));
        }
      } else if (U8::TypeName().compare(typeStr) == 0) {
        auto val = MaybeGetTypeFromLiteralExpression<U8>(
            vd->value()->literalExpression(), errors_list);
        if (val) {
          builder.AddSymbol(
              std::make_unique<Symbol>(std::move(name), std::move(val)));
        } else {
          builder.AddError(
              ErrorFromContext(vd->value()->literalExpression(),
                               ParserErrorInfo::INVALID_INTEGER_LITERAL));
        }
      } else if (U16::TypeName().compare(typeStr) == 0) {
        auto val = MaybeGetTypeFromLiteralExpression<U16>(
            vd->value()->literalExpression(), errors_list);
        if (val) {
          builder.AddSymbol(
              std::make_unique<Symbol>(std::move(name), std::move(val)));
        } else {
          builder.AddError(
              ErrorFromContext(vd->value()->literalExpression(),
                               ParserErrorInfo::INVALID_INTEGER_LITERAL));
        }
      } else if (U32::TypeName().compare(typeStr) == 0) {
        auto val = MaybeGetTypeFromLiteralExpression<U32>(
            vd->value()->literalExpression(), errors_list);
        if (val) {
          builder.AddSymbol(
              std::make_unique<Symbol>(std::move(name), std::move(val)));
        } else {
          builder.AddError(
              ErrorFromContext(vd->value()->literalExpression(),
                               ParserErrorInfo::INVALID_INTEGER_LITERAL));
        }
      } else if (U64::TypeName().compare(typeStr) == 0) {
        auto val = MaybeGetTypeFromLiteralExpression<U64>(
            vd->value()->literalExpression(), errors_list);
        if (val) {
          builder.AddSymbol(
              std::make_unique<Symbol>(std::move(name), std::move(val)));
        } else {
          builder.AddError(
              ErrorFromContext(vd->value()->literalExpression(),
                               ParserErrorInfo::INVALID_INTEGER_LITERAL));
        }
      } else {
        builder.AddError(
            ErrorFromContext(vd->type_(), ParserErrorInfo::UNKNOWN_TYPE));
      }

      // TODO: type inference.

      //   errors_list->emplace_back(
      //       ErrorFromContext(compilation_unit->typedefVersionDeclaration(),
      //                        ParserErrorInfo::TYPE_MISMATCH, s));
      //   continue;
      // }

    }  // if valueDefinition
  }
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
  ProcessLanguageVersion(compilation_unit, builder, errors);
  ProcessModuleDeclaration(compilation_unit, builder, errors);
  ProcessUseDeclarations(compilation_unit, builder, errors);
  ProcessValueDefinitions(compilation_unit, builder, errors);

  builder.AddErrors(errors);

  return std::make_shared<ParsedFile>(builder.build());
}

}  // namespace td