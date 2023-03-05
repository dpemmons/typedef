#include "file_parser.h"

#include <charconv>

#include "antlr4-runtime.h"
#include "gen/TypedefLexer.h"
#include "gen/TypedefParser.h"
#include "gen/TypedefParserBaseListener.h"
#define FMT_HEADER_ONLY
#include "fmt/core.h"

using namespace antlr4;
using namespace td;

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

void td::PrintIR(const IntermediateTree& tree) {}

ParseResult td::Parse(std::string s) {
  std::istringstream ss(s);
  return Parse(ss);
}

ParseResult td::Parse(std::istream& input) {
  ParseResult result;

  ANTLRInputStream inputStream(input);
  TypedefLexer lexer(&inputStream);
  lexer.removeErrorListener(&ConsoleErrorListener::INSTANCE);

  CommonTokenStream tokens(&lexer);
  tokens.fill();
  // std::cout << "Here are the tokens:" << std::endl;
  // for (auto token : tokens.getTokens()) {
  //   std::cout << token->toString() << std::endl;
  // }

  TypedefParser parser(&tokens);
  parser.removeErrorListener(&ConsoleErrorListener::INSTANCE);

  tree::ParseTree* tree = parser.compilationUnit();

  TypedefListenerImpl listener(result);
  tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

  return result;
}
