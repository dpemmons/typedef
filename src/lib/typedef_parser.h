#ifndef SRC_LIB_TYPEDEF_PARSER_H_
#define SRC_LIB_TYPEDEF_PARSER_H_

#include <memory>

#include "typedef_parser_interface.h"

namespace td {

std::shared_ptr<TypedefParserInterface> Parse(const std::string& s);
std::shared_ptr<TypedefParserInterface> Parse(std::istream& input);

}  // namespace td

#endif  // SRC_LIB_TYPEDEF_PARSER_H_
