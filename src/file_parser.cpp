#include "file_parser.h"

#include "antlr4-runtime.h"
#include "gen/TypedefBaseListener.h"
#include "gen/TypedefLexer.h"
#include "gen/TypedefParser.h"

using namespace antlr4;

bool ParseFile(std::istream& input) {
  ANTLRInputStream inputStream(input);
  TypedefLexer lexer(&inputStream);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  std::cout << "Here are the tokens:" << std::endl;
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  // EvalListener listener;
  // antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

  TypedefParser parser(&tokens);
  tree::ParseTree* tree = parser.compilationUnit();

  std::cout << "Here's the parse tree:" << std::endl;
  std::cout << tree->toStringTree(&parser) << std::endl << std::endl;
}
