#ifndef PARSER_LITERALS_H__
#define PARSER_LITERALS_H__

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
void MaybeSetTemplateLiteral(std::string& literal,
                             TypedefParser::TmplDefinitionContext* ctx);
void SetStringLiteral(std::string& literal,
                      TypedefParser::StringLiteralContext* ctx);
void SetTmplText(std::string& text, TypedefParser::TmplTextContext* ctx);
void SetFloatLiteral(FloatLiteral& literal,
                     TypedefParser::PrimitiveTypeIdentifierContext* type,
                     TypedefParser::FloatLiteralContext* ctx);
void SetIntegerLiteral(IntegerLiteral& literal,
                       TypedefParser::PrimitiveTypeIdentifierContext* type,
                       TypedefParser::IntegerLiteralContext* ctx);

}  // namespace td

#endif  // PARSER_LITERALS_H__
