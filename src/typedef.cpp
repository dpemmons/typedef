#include <iostream>
#include <string>

#include "gen/TypedefBaseListener.h"
#include "gen/TypedefLexer.h"
#include "gen/TypedefParser.h"
#include "antlr4-runtime.h"
#include "CLI/CLI.hpp"

using namespace antlr4;

int main(int argc, const char** argv) {
  CLI::App app{"digc"};

  std::string filename = "input.dig";
  app.add_option("-f,--file", filename, "The root build ninja file")
      ->required();

  CLI11_PARSE(app, argc, argv);

  std::ifstream baseFile(filename);
  if (baseFile.is_open()) {
    std::cout << "Processing file: " << filename << "\n";
  } else {
    std::cout << "Unable to open file:" << filename << "\n";
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