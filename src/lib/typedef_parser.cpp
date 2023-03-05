#include "typedef_parser.h"

#include "typedef_parser_context.h"

std::shared_ptr<td::TypedefParserInterface> td::Parse(const std::string& s) {
  auto parser = std::make_shared<td::TypedefParserContext>();
  parser->Parse(s);
  return parser;
}

std::shared_ptr<td::TypedefParserInterface> td::Parse(std::istream& input) {
  auto parser = std::make_shared<td::TypedefParserContext>();
  parser->Parse(input);
  return parser;
}
