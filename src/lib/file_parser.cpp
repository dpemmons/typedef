#include "file_parser.h"

#include <charconv>

#include "antlr4-runtime.h"
#include "gen/TypedefBaseListener.h"
#include "gen/TypedefLexer.h"
#include "gen/TypedefParser.h"
#define FMT_HEADER_ONLY
#include "fmt/core.h"

using namespace antlr4;

class TypedefListenerImpl : public TypedefBaseListener {
 public:
  TypedefListenerImpl() {}
  struct Error {
    std::errc err;
    size_t line;
    size_t pos_in_line;
  };

  bool HasErrors() const {
    return errors_.size();
  }
  const std::vector<Error>& GetErrors() const {
    return errors_;
  } 

  void enterTypedefVersionDeclaration(
      TypedefParser::TypedefVersionDeclarationContext* ctx) override {
    // auto* sv = ctx->semver();
    // auto semver_token = sv->getTokens(TypedefParser::SEMVER);
    // auto decimal_tokens = semver_token[0]->getSymbol()(TypedefParser::UNQUALIFIED_DECIMAL_LITERAL);
    // for (auto token : decimal_tokens) {
    //   fmt::print("Token: {}\n", token->toString());
    // }
    // int32_t major_val, minor_val, patch_val = 0;
    // if (nodeToInteger(sv->UNQUALIFIED_DECIMAL_LITERAL(0), major_val) &&
    //     nodeToInteger(sv->UNQUALIFIED_DECIMAL_LITERAL(1), minor_val) &&
    //     nodeToInteger(sv->UNQUALIFIED_DECIMAL_LITERAL(2), patch_val)) {
    //   itree_.version.Set(major_val, minor_val, patch_val);
    // }
  }
  void exitTypedefVersionDeclaration(
      TypedefParser::TypedefVersionDeclarationContext* ctx) override {}

 private:
  IntermediateTree itree_;
  std::vector<Error> errors_;

  Error makeError(std::errc err, antlr4::tree::TerminalNode* node) {
    Error error;
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

void PrintIR(const IntermediateTree& tree) {}

std::variant<IntermediateTree, bool> ParseFile(std::istream& input) {
  ANTLRInputStream inputStream(input);
  TypedefLexer lexer(&inputStream);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  std::cout << "Here are the tokens:" << std::endl;
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  TypedefParser parser(&tokens);

  tree::ParseTree* tree = parser.compilationUnit();
  TypedefListenerImpl listener;
  tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

  //   std::cout << "Here's the parse tree:" << std::endl;
  //   std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

  return IntermediateTree();
}
