#include <iostream>
#include <string>

#include "gen/TypedefBaseListener.h"
#include "gen/TypedefLexer.h"
#include "gen/TypedefParser.h"
#include "antlr4-runtime.h"
#include "args.h"

using namespace antlr4;

int main(int argc, const char** argv) {
  // Parse args, or die trying.
  auto maybeArgs = Args::ParseArgs(argc, argv);
  if (maybeArgs.index() == 1) {
    return std::get<int>(maybeArgs);
  }
  Args args = std::get<Args>(maybeArgs);

  std::ifstream baseFile(args.getInpuFilename());
  if (baseFile.is_open()) {
    std::cout << "Processing file: " << args.getInpuFilename() << "\n";
  } else {
    std::cout << "Unable to open file:" << args.getInpuFilename() << "\n";
    return 0;
  }

  ANTLRInputStream input(baseFile);
  TypedefLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  std::cout << "Here are the tokens:" << std::endl;
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  TypedefParser parser(&tokens);
  tree::ParseTree* tree = parser.compilationUnit();

  // EvalListener listener;
  // antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

  std::cout << "Here's the parse tree:" << std::endl;
  std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

  baseFile.close();
  return 0;
}