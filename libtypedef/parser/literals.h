#ifndef TYPEDEF_LIBTYPEDEF_PARSER_GRAMMAR_FUNCTIONS_H_
#define TYPEDEF_LIBTYPEDEF_PARSER_GRAMMAR_FUNCTIONS_H_

#include <string>

#include "libtypedef/parser/gramamr_types.h"
#include "libtypedef/parser/grammar/TypedefLexer.h"
#include "libtypedef/parser/grammar/TypedefParser.h"
#include "libtypedef/parser/grammar/TypedefParserBaseListener.h"

// This file contains functions that operate on the AST
// defined in TypedefParser.h

namespace td {

void SetBoolLiteral(bool& literal, TypedefParser::BoolLiteralContext* ctx);
void SetCharLiteral(char32_t& literal, TypedefParser::CharLiteralContext* ctx);
void SetStringLiteral(std::string& literal,
                      TypedefParser::StringLiteralContext* ctx);
void SetFloatLiteral(FloatLiteral& literal,
                     TypedefParser::PrimitiveTypeIdentifierContext* type,
                     TypedefParser::FloatLiteralContext* ctx);
void SetIntegerLiteral(IntegerLiteral& literal,
                       TypedefParser::PrimitiveTypeIdentifierContext* type,
                       TypedefParser::IntegerLiteralContext* ctx);

}  // namespace td

#endif  // TYPEDEF_LIBTYPEDEF_PARSER_GRAMMAR_FUNCTIONS_H_
