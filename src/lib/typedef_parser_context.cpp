#include "typedef_parser_context.h"

#include <set>
#include <vector>

#include "antlr4/antlr4-runtime.h"
#include "grammar/TypedefLexer.h"
#include "grammar/TypedefParser.h"
#include "grammar/TypedefParserBaseListener.h"
#include "typedef_parser_interface.h"

namespace {

// Pull an idientifier string from something that has one.
template <class CTX>
std::string GetIdentifierString(CTX *ctx) {
  static_assert(std::is_base_of<antlr4::ParserRuleContext, CTX>::value,
                "CTX not derived from ParserRuleContext");
  if (!ctx || !ctx->identifier()) {
    return "";
  }
  if (ctx->identifier()->RAW_IDENTIFIER()) {
    return ctx->identifier()->RAW_IDENTIFIER()->toString();
  } else if (ctx->identifier()->NON_KEYWORD_IDENTIFIER()) {
    return ctx->identifier()->NON_KEYWORD_IDENTIFIER()->toString();
  }
  return "";
}

// TODO: use std::set<>.contains() when upgrading to c++20.
template <typename T>
bool SetContains(std::set<T> set, T &x) {
  return set.find(x) != set.end();
}

class ErrorBuilder {
 public:
  td::ParserErrorInfo build() { return info_; }
  ErrorBuilder &SetType(td::ParserErrorInfo::Type type) {
    info_.error_type = type;
  }
  ErrorBuilder &SetMessage(const std::string &msg) { info_.message = msg; }
  ErrorBuilder &SetTokenType(size_t token_type) {
    info_.token_type = token_type;
  }
  ErrorBuilder &SetCharOffset(size_t char_offset) {
    info_.char_offset = char_offset;
  }
  ErrorBuilder &SetLine(size_t line) { info_.line = line; }
  ErrorBuilder &SetLineOffset(size_t line_offset) {
    info_.line_offset = line_offset;
  }
  ErrorBuilder &SetLength(size_t length) { info_.length = length; }

 private:
  td::ParserErrorInfo info_;
};

}  // namespace

//   template <typename T>
//   bool nodeToInteger(antlr4::tree::TerminalNode* node, T& numVal) {
//     static_assert(std::is_integral<T>::value, "Integral required.");
//     const std::string& text = node->getText();
//     auto [ptr,
//           ec]{std::from_chars(text.data(), text.data() + text.size(),
//           numVal)};
//     if (ec != std::errc()) {
//       errors_.push_back(makeError(ec, node));
//       return false;
//     }
//     return true;
//   }

td::TypedefParserContext::TypedefParserContext()
    : lexer_(&input_),
      tokens_(&lexer_),
      parser_(&tokens_),
      lexerErrorListener_(this),
      parserErrorListener_(this) {
  lexer_.removeErrorListeners();
  lexer_.addErrorListener(&lexerErrorListener_);

  parser_.removeParseListeners();
  parser_.removeErrorListeners();
  parser_.addErrorListener(&parserErrorListener_);
}

td::TypedefParserContext::~TypedefParserContext() {}

void td::TypedefParserContext::Parse(const std::string &text) {
  std::istringstream ss(text);
  return Parse(ss);
}

void td::TypedefParserContext::Parse(std::istream &text) {
  input_.load(text);
  errors_.clear();
  lexer_.reset();
  lexer_.setInputStream(&input_);
  tokens_.setTokenSource(&lexer_);

  parser_.reset();
  bool fast = false;
  parser_.setBuildParseTree(!fast);

  // First parse with the bail error strategy to get quick feedback for correct
  // queries.
  parser_.setErrorHandler(std::make_shared<antlr4::BailErrorStrategy>());
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
      // If parsing was canceled we either really have a syntax error or we need
      // to do a second step, now with the default strategy and LL parsing.
      tokens_.reset();
      parser_.reset();
      errors_.clear();
      parser_.setErrorHandler(std::make_shared<antlr4::DefaultErrorStrategy>());
      parser_.getInterpreter<antlr4::atn::ParserATNSimulator>()
          ->setPredictionMode(antlr4::atn::PredictionMode::LL);
      compilation_unit_ = parser_.compilationUnit();
    }
  }
}

std::string td::TypedefParserContext::GetLanguageVersion() {
  if (compilation_unit_ == nullptr) {
    errors_.push_back(ErrorBuilder().build());
    return "";
  }
  std::string versionIdentifier =
      GetIdentifierString(compilation_unit_->typedefVersionDeclaration());
  if (kVersions.IsValid(versionIdentifier)) {
    return kVersions.
  }
  if (SetContains(kValidTypedefVersions, versionIdentifier)) {
    return versionIdentifier;
  } else {
    return "";
  }
}

td::QualifiedIdentifier td::TypedefParserContext::GetModule() {
  return QualifiedIdentifier();
}

std::vector<td::Import> td::TypedefParserContext::GetImports() {
  std::vector<td::Import> imports;
  if (compilation_unit_ == nullptr) {
    return imports;
  }
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
  return imports;
}

void td::TypedefParserContext::LexerErrorListener::syntaxError(
    antlr4::Recognizer *recognizer, antlr4::Token *offendingSymbol, size_t line,
    size_t charPositionInLine, const std::string &, std::exception_ptr ep) {
  std::string message;
  try {
    std::rethrow_exception(ep);
  } catch (antlr4::LexerNoViableAltException &) {
    antlr4::Lexer *lexer = dynamic_cast<antlr4::Lexer *>(recognizer);
    antlr4::CharStream *input = lexer->getInputStream();

    ParserErrorInfo errorInfo;
    errorInfo.error_type = ParserErrorInfo::LEXER_ERROR;
    errorInfo.message = "Lexer error";
    errorInfo.token_type = 0;
    errorInfo.char_offset = lexer->tokenStartCharIndex;
    errorInfo.line = line;
    errorInfo.line_offset = charPositionInLine;
    errorInfo.length = input->index() - lexer->tokenStartCharIndex;
    owner_->errors_.push_back(errorInfo);
  }
}

void td::TypedefParserContext::ParserErrorListener::syntaxError(
    antlr4::Recognizer *recognizer, antlr4::Token *offendingSymbol, size_t line,
    size_t charPositionInLine, const std::string &, std::exception_ptr ep) {
  ParserErrorInfo errorInfo;
  errorInfo.error_type = ParserErrorInfo::PARSE_ERROR;
  errorInfo.message = "Parse error";
  errorInfo.token_type = offendingSymbol->getType();
  errorInfo.char_offset = offendingSymbol->getStartIndex();
  errorInfo.line = line;
  errorInfo.line_offset = charPositionInLine;
  errorInfo.length =
      offendingSymbol->getStopIndex() - offendingSymbol->getStartIndex() + 1;
  owner_->errors_.push_back(errorInfo);
}