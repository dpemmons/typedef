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
  // std::cout << "Here are the tokens:" << std::endl;
  // for (auto token : tokens.getTokens()) {
  //   std::cout << token->toString() << std::endl;
  // }

  TypedefParser parser(&tokens);
  parser.removeErrorListener(&ConsoleErrorListener::INSTANCE);


  return result;
}
