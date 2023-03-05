#include "typedef_parser_context.h"

#include <vector>

#include "antlr4-runtime.h"
#include "gen/TypedefLexer.h"
#include "gen/TypedefParser.h"
#include "gen/TypedefParserBaseListener.h"
#include "typedef_parser_interface.h"


class TypedefListenerImpl : public TypedefParserBaseListener {
 public:
  TypedefListenerImpl(ParseResult& result)
      : result_(result), itree_(result.tree), errors_(result.errors) {}

  void enterTypedefVersionDeclaration(
      TypedefParser::TypedefVersionDeclarationContext* ctx) override {
    itree_.version = ctx->IDENTIFIER()->toString();
  }
  void exitTypedefVersionDeclaration(
      TypedefParser::TypedefVersionDeclarationContext* ctx) override {}

 private:
  ParseResult& result_;
  IntermediateTree& itree_;
  std::vector<ParseError>& errors_;

  ParseError makeError(std::errc err, antlr4::tree::TerminalNode* node) {
    ParseError error;
    error.err = err;
    error.line = node->getSymbol()->getLine();
    error.pos_in_line = node->getSymbol()->getCharPositionInLine();
    return error;
  }

  // returns true on success
  template <typename T>
  bool nodeToInteger(antlr4::tree::TerminalNode* node, T& numVal) {
    static_assert(std::is_integral<T>::value, "Integral required.");
    const std::string& text = node->getText();
    auto [ptr,
          ec]{std::from_chars(text.data(), text.data() + text.size(), numVal)};
    if (ec != std::errc()) {
      errors_.push_back(makeError(ec, node));
      return false;
    }
    return true;
  }
};

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

void td::TypedefParserContext::Parse(std::string s) {
  std::istringstream ss(s);
  return Parse(ss);
}

void td::TypedefParserContext::Parse(const std::string &s) {
  std::istringstream ss(s);
  return Parse(ss);
}

void td::TypedefParserContext::Parse(std::istream &input) {
  antlr4::tree::ParseTree *tree = parser_.compilationUnit();

  // TypedefListenerImpl listener(result);
  // tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
}