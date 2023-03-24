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
#include "use_declaration.h"
#include "value_definition.h"
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
                                std::vector<ParserErrorInfo> *errors_list) {
  static_assert(std::is_base_of<antlr4::ParserRuleContext, CTX>::value,
                "CTX not derived from ParserRuleContext");
  if (!ctx || !ctx->identifier()) {
    errors_list->emplace_back(
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

std::optional<char32_t> processCharLiteral(const std::string &char_literal) {
  if (char_literal.size() < 2 || char_literal.front() != '\'' ||
      char_literal.back() != '\'') {
    return std::nullopt;
  }

  std::string inner = char_literal.substr(1, char_literal.size() - 2);

  if (inner.size() == 1) {
    return static_cast<char32_t>(inner[0]);
  }

  if (inner.size() == 2 && inner[0] == '\\') {
    switch (inner[1]) {
      case 'n':
        return U'\n';
      case 'r':
        return U'\r';
      case 't':
        return U'\t';
      case '\\':
        return U'\\';
      case '0':
        return U'\0';
      case '\'':
        return U'\'';
      case '\"':
        return U'\"';
    }
  }

  if (inner.size() == 4 && inner[0] == '\\' && inner[1] == 'x') {
    std::istringstream ss(inner.substr(2));
    int value;
    ss >> std::hex >> value;
    return static_cast<char32_t>(value);
  }

  if (inner.size() >= 3 && inner.size() <= 10 && inner[0] == '\\' &&
      inner[1] == 'u' && inner[2] == '{' && inner.back() == '}') {
    std::istringstream ss(inner.substr(3, inner.size() - 4));
    int value;
    ss >> std::hex >> value;
    return static_cast<char32_t>(value);
  }

  return std::nullopt;
}

std::optional<ScalarValue> GetScalarValueFromLiteralExpression(
    TypedefParser::LiteralExpressionContext *ctx,
    std::vector<ParserErrorInfo> *errors_list) {
  if (ctx->CHAR_LITERAL()) {
    std::optional<char32_t> maybeChar =
        processCharLiteral(ctx->CHAR_LITERAL()->toString());
    if (maybeChar.has_value()) {
      return ScalarValue::CreateCHAR(maybeChar.value());
    } else {
      errors_list->emplace_back(
          ErrorFromContext(ctx, ParserErrorInfo::MISSING_TYPE_IDENTIFIER));
      return std::nullopt;
    }
  } else if (ctx->STRING_LITERAL()) {
  } else if (ctx->RAW_STRING_LITERAL()) {
  } else if (ctx->BYTE_LITERAL()) {
  } else if (ctx->BYTE_STRING_LITERAL()) {
  } else if (ctx->RAW_BYTE_STRING_LITERAL()) {
  } else if (ctx->INTEGER_LITERAL()) {
  } else if (ctx->FLOAT_LITERAL()) {
  } else if (ctx->KW_TRUE()) {
    return ScalarValue::CreateBOOL(true);
  } else if (ctx->KW_FALSE()) {
    return ScalarValue::CreateBOOL(false);
  }
  return std::nullopt;
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
    errors_list->emplace_back(
        ErrorFromContext(compilation_unit->typedefVersionDeclaration(),
                         ParserErrorInfo::INVALID_LANGUAGE_VERSION));
    return LanguageVersion::UNKNOWN;
  }
  return LangaugeVersionFromString(versionIdentifier);
}

td::QualifiedIdentifier GetModuleDeclaration(
    TypedefParser::CompilationUnitContext *compilation_unit,
    std::vector<ParserErrorInfo> *errors_list) {
  if (compilation_unit->moduleDeclaration()) {
    errors_list->emplace_back(
        ErrorFromContext(compilation_unit->typedefVersionDeclaration(),
                         ParserErrorInfo::UNIMPLEMENTED));
  }
  return QualifiedIdentifier();
}

std::vector<UseDeclaration> GetUseDeclarations(
    TypedefParser::CompilationUnitContext *compilation_unit,
    std::vector<ParserErrorInfo> *errors_list) {
  std::vector<UseDeclaration> use_decls;

  if (!compilation_unit->useDeclaration().empty()) {
    errors_list->emplace_back(
        ErrorFromContext(compilation_unit->typedefVersionDeclaration(),
                         ParserErrorInfo::UNIMPLEMENTED));
  }
  return use_decls;
}

std::vector<ValueDefinition> GetValueDefinitions(
    TypedefParser::CompilationUnitContext *compilation_unit,
    std::vector<ParserErrorInfo> *errors_list) {
  std::vector<ValueDefinition> value_definitions;

  for (auto item : compilation_unit->item()) {
    if (TypedefParser::ValueDefinitionsContext *vd = item->valueDefinitions()) {
      QualifiedIdentifier qi(GetIdentifierString(vd, errors_list));

      // Missing type.
      if (!vd->type_() || !vd->type_()->identifier()) {
        errors_list->emplace_back(
            ErrorFromContext(compilation_unit->typedefVersionDeclaration(),
                             ParserErrorInfo::MISSING_TYPE_IDENTIFIER));
        continue;
      }
      // Missing value.
      if (!vd->value() || !vd->value()->literalExpression()) {
        errors_list->emplace_back(
            ErrorFromContext(compilation_unit->typedefVersionDeclaration(),
                             ParserErrorInfo::MISSING_VALUE_EXPRESSION));
        continue;
      }

      Type type =
          Type::CreateFromString(GetIdentifierString(vd->type_(), errors_list));

      // Unknown type.
      if (type.IsUnknown()) {
        errors_list->emplace_back(
            ErrorFromContext(compilation_unit->typedefVersionDeclaration(),
                             ParserErrorInfo::UNKNOWN_TYPE));
        continue;
      }

      std::optional<ScalarValue> maybe_scalar_value =
          GetScalarValueFromLiteralExpression(vd->value()->literalExpression(),
                                              errors_list);

      if (!maybe_scalar_value.has_value()) {
        continue;
      }

      // Mismatched type.
      if (maybe_scalar_value.value().GetType() != type) {
        std::string s = fmt::format(
            "specified type: \"{}\" is not the same as the value's type \"{}\"",
            type.ToString(), maybe_scalar_value.value().GetType().ToString());

        errors_list->emplace_back(
            ErrorFromContext(compilation_unit->typedefVersionDeclaration(),
                             ParserErrorInfo::TYPE_MISMATCH, s));
        continue;
      }

      value_definitions.emplace_back(
          ValueDefinition(qi, maybe_scalar_value.value()));
    }
  }

  return value_definitions;
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
  builder.SetUseDeclarations(GetUseDeclarations(compilation_unit, &errors));

  builder.SetValueDefinitions(GetValueDefinitions(compilation_unit, &errors));

  builder.SetErrors(errors);

  return std::make_shared<ParsedFile>(builder.build());
}

}  // namespace td