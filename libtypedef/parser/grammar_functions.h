#ifndef TYPEDEF_LIBTYPEDEF_PARSER_GRAMMAR_FUNCTIONS_H_
#define TYPEDEF_LIBTYPEDEF_PARSER_GRAMMAR_FUNCTIONS_H_

#include <antlr4/antlr4-runtime.h>

#include <string>

#include "libtypedef/parser/grammar/TypedefParser.h"

namespace td {

std::string ToString(TypedefParser::SymbolPathContext* ctx,
                     const std::string& delimiter = "");

std::string ToString(TypedefParser::ModuleDeclarationContext* ctx,
                     const std::string& delimiter = "");

}  // namespace td

#endif  // TYPEDEF_LIBTYPEDEF_PARSER_GRAMMAR_FUNCTIONS_H_