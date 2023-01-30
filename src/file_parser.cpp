#include "file_parser.h"

#include "antlr4-runtime.h"
#include "gen/TypedefBaseListener.h"
#include "gen/TypedefLexer.h"
#include "gen/TypedefParser.h"

using namespace antlr4;

class TypedefListenerImpl : public TypedefBaseListener {
 public:
  void enterTypedefVersionDeclaration(
      TypedefParser::TypedefVersionDeclarationContext *ctx) override {
    printf("hi: %s\n", ctx->STRING_LITERAL()->getText().c_str());
  }
  void exitTypedefVersionDeclaration(
      TypedefParser::TypedefVersionDeclarationContext *ctx) override {}
};

std::variant<ParsedFile, bool> ParseFile(std::istream &input) {
  ANTLRInputStream inputStream(input);
  TypedefLexer lexer(&inputStream);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  std::cout << "Here are the tokens:" << std::endl;
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  TypedefParser parser(&tokens);

  tree::ParseTree *tree = parser.compilationUnit();
  TypedefListenerImpl listener;
  tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

  //   std::cout << "Here's the parse tree:" << std::endl;
  //   std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

  return ParsedFile();
}
