#include "libtypedef/parser/parser_error_info.h"

#include <antlr4/antlr4-runtime.h>

#include <algorithm>
#include <cassert>
#include <cstdlib>

#define FMT_HEADER_ONLY
#include <fmt/core.h>
#include <fmt/ostream.h>

#include "grammar/TypedefLexer.h"
#include "grammar/TypedefParser.h"

namespace {
const char *TokenToString(size_t token) {
  using namespace antlr4;
  switch (token) {
    case Token::EPSILON:
      return "EPSILON";
    case Token::EOF:
      return "EOF";
    case Token::INVALID_TYPE:
      return "INVALID_TYPE";
    case TypedefParser::KW_AS:
      return "KW_AS";
    case TypedefParser::KW_ENUM:
      return "KW_ENUM";
    case TypedefParser::KW_FALSE:
      return "KW_FALSE";
    case TypedefParser::KW_FN:
      return "KW_FN";
    case TypedefParser::KW_IMPL:
      return "KW_IMPL";
    case TypedefParser::KW_MODULE:
      return "KW_MODULE";
    case TypedefParser::KW_STRUCT:
      return "KW_STRUCT";
    case TypedefParser::KW_TRUE:
      return "KW_TRUE";
    case TypedefParser::KW_TYPE:
      return "KW_TYPE";
    case TypedefParser::KW_TYPEDEF:
      return "KW_TYPEDEF";
    case TypedefParser::KW_USE:
      return "KW_USE";

    case TypedefParser::KW_VARIANT:
      return "KW_VARIANT";
    case TypedefParser::KW_VECTOR:
      return "KW_VECTOR";
    case TypedefParser::KW_MAP:
      return "KW_MAP";

    case TypedefParser::KW_AND:
      return "KW_AND";
    case TypedefParser::KW_IN:
      return "KW_IN";
    case TypedefParser::KW_LET:
      return "KW_LET";
    case TypedefParser::KW_NOT:
      return "KW_NOT";
    case TypedefParser::KW_OR:
      return "KW_OR";
    case TypedefParser::KW_SIZEOF:
      return "KW_SIZEOF";
    case TypedefParser::KW_THIS:
      return "KW_THIS";
    case TypedefParser::KW_TRAIT:
      return "KW_TRAIT";
    case TypedefParser::KW_WHERE:
      return "KW_WHERE";
    case TypedefParser::KW_XOR:
      return "KW_XOR";
    case TypedefParser::KW_BREAK:
      return "KW_BREAK";
    case TypedefParser::KW_CONTINUE:
      return "KW_CONTINUE";
    case TypedefParser::KW_DEFAULT:
      return "KW_DEFAULT";
    case TypedefParser::KW_DO:
      return "KW_DO";
    case TypedefParser::KW_ELSE:
      return "KW_ELSE";
    case TypedefParser::KW_FOR:
      return "KW_FOR";
    case TypedefParser::KW_GOTO:
      return "KW_GOTO";
    case TypedefParser::KW_IF:
      return "KW_IF";
    case TypedefParser::KW_LOOP:
      return "KW_LOOP";
    case TypedefParser::KW_MATCH:
      return "KW_MATCH";
    case TypedefParser::KW_MOVE:
      return "KW_MOVE";
    case TypedefParser::KW_RETURN:
      return "KW_RETURN";
    case TypedefParser::KW_TRY:
      return "KW_TRY";
    case TypedefParser::KW_WHILE:
      return "KW_WHILE";
    case TypedefParser::KW_YIELD:
      return "KW_YIELD";
    case TypedefParser::KW_ABSTRACT:
      return "KW_ABSTRACT";
    case TypedefParser::KW_AUTO:
      return "KW_AUTO";
    case TypedefParser::KW_CONST:
      return "KW_CONST";
    case TypedefParser::KW_DOUBLE:
      return "KW_DOUBLE";
    case TypedefParser::KW_EXTERN:
      return "KW_EXTERN";
    case TypedefParser::KW_FINAL:
      return "KW_FINAL";
    case TypedefParser::KW_FLOAT:
      return "KW_FLOAT";
    case TypedefParser::KW_INT:
      return "KW_INT";
    case TypedefParser::KW_LONG:
      return "KW_LONG";
    case TypedefParser::KW_MACRO:
      return "KW_MACRO";
    case TypedefParser::KW_MUT:
      return "KW_MUT";
    case TypedefParser::KW_OVERRIDE:
      return "KW_OVERRIDE";
    case TypedefParser::KW_PRIVATE:
      return "KW_PRIVATE";
    case TypedefParser::KW_PUB:
      return "KW_PUB";
    case TypedefParser::KW_REF:
      return "KW_REF";
    case TypedefParser::KW_SELFTYPE:
      return "KW_SELFTYPE";
    case TypedefParser::KW_SELFVALUE:
      return "KW_SELFVALUE";
    case TypedefParser::KW_SIGNED:
      return "KW_SIGNED";
    case TypedefParser::KW_STATIC:
      return "KW_STATIC";
    case TypedefParser::KW_SUPER:
      return "KW_SUPER";
    case TypedefParser::KW_SWITCH:
      return "KW_SWITCH";
    case TypedefParser::KW_TYPEOF:
      return "KW_TYPEOF";
    case TypedefParser::KW_UNION:
      return "KW_UNION";
    case TypedefParser::KW_UNSAFE:
      return "KW_UNSAFE";
    case TypedefParser::KW_UNSIGNED:
      return "KW_UNSIGNED";
    case TypedefParser::KW_UNSIZED:
      return "KW_UNSIZED";
    case TypedefParser::KW_VIRTUAL:
      return "KW_VIRTUAL";
    case TypedefParser::KW_VOID:
      return "KW_VOID";
    case TypedefParser::KW_VOLATILE:
      return "KW_VOLATILE";
    case TypedefParser::NON_KEYWORD_IDENTIFIER:
      return "NON_KEYWORD_IDENTIFIER";
    // case TypedefParser::RAW_IDENTIFIER:
    //   return "RAW_IDENTIFIER";
    case TypedefParser::LINE_COMMENT:
      return "LINE_COMMENT";
    case TypedefParser::BLOCK_COMMENT:
      return "BLOCK_COMMENT";
    case TypedefParser::INNER_LINE_DOC:
      return "INNER_LINE_DOC";
    case TypedefParser::INNER_BLOCK_DOC:
      return "INNER_BLOCK_DOC";
    case TypedefParser::OUTER_LINE_DOC:
      return "OUTER_LINE_DOC";
    case TypedefParser::OUTER_BLOCK_DOC:
      return "OUTER_BLOCK_DOC";
    case TypedefParser::BLOCK_COMMENT_OR_DOC:
      return "BLOCK_COMMENT_OR_DOC";
    case TypedefParser::SHEBANG:
      return "SHEBANG";
    // case TypedefParser::WHITESPACE:
    //   return "WHITESPACE";
    // case TypedefParser::NEWLINE:
    //   return "NEWLINE";
    case TypedefParser::CHAR_LITERAL:
      return "CHAR_LITERAL";
    case TypedefParser::STRING_LITERAL:
      return "STRING_LITERAL";
    case TypedefParser::RAW_STRING_LITERAL:
      return "RAW_STRING_LITERAL";
    // case TypedefParser::BYTE_LITERAL:
    //   return "BYTE_LITERAL";
    // case TypedefParser::BYTE_STRING_LITERAL:
    //   return "BYTE_STRING_LITERAL";
    // case TypedefParser::RAW_BYTE_STRING_LITERAL:
    //   return "RAW_BYTE_STRING_LITERAL";
    // case TypedefParser::INTEGER_LITERAL:
    //   return "INTEGER_LITERAL";
    // case TypedefParser::DEC_LITERAL:
    //   return "DEC_LITERAL";
    // case TypedefParser::HEX_LITERAL:
    //   return "HEX_LITERAL";
    // case TypedefParser::OCT_LITERAL:
    //   return "OCT_LITERAL";
    // case TypedefParser::BIN_LITERAL:
    //   return "BIN_LITERAL";
    case TypedefParser::FLOAT_LITERAL:
      return "FLOAT_LITERAL";
    // case TypedefParser::LIFETIME_OR_LABEL:
    //   return "LIFETIME_OR_LABEL";
    case TypedefParser::PLUS:
      return "PLUS";
    case TypedefParser::MINUS:
      return "MINUS";
    case TypedefParser::STAR:
      return "STAR";
    case TypedefParser::SLASH:
      return "SLASH";
    case TypedefParser::PERCENT:
      return "PERCENT";
    case TypedefParser::CARET:
      return "CARET";
    case TypedefParser::NOT:
      return "NOT";
    case TypedefParser::AND:
      return "AND";
    case TypedefParser::OR:
      return "OR";
    case TypedefParser::ANDAND:
      return "ANDAND";
    case TypedefParser::OROR:
      return "OROR";
    case TypedefParser::PLUSEQ:
      return "PLUSEQ";
    case TypedefParser::MINUSEQ:
      return "MINUSEQ";
    case TypedefParser::STAREQ:
      return "STAREQ";
    case TypedefParser::SLASHEQ:
      return "SLASHEQ";
    case TypedefParser::PERCENTEQ:
      return "PERCENTEQ";
    case TypedefParser::CARETEQ:
      return "CARETEQ";
    case TypedefParser::ANDEQ:
      return "ANDEQ";
    case TypedefParser::OREQ:
      return "OREQ";
    case TypedefParser::SHLEQ:
      return "SHLEQ";
    case TypedefParser::SHREQ:
      return "SHREQ";
    case TypedefParser::EQ:
      return "EQ";
    case TypedefParser::EQEQ:
      return "EQEQ";
    case TypedefParser::NE:
      return "NE";
    case TypedefParser::GT:
      return "GT";
    case TypedefParser::LT:
      return "LT";
    case TypedefParser::GE:
      return "GE";
    case TypedefParser::LE:
      return "LE";
    case TypedefParser::AT:
      return "AT";
    case TypedefParser::UNDERSCORE:
      return "UNDERSCORE";
    case TypedefParser::DOT:
      return "DOT";
    case TypedefParser::DOTDOT:
      return "DOTDOT";
    case TypedefParser::DOTDOTDOT:
      return "DOTDOTDOT";
    case TypedefParser::COMMA:
      return "COMMA";
    case TypedefParser::SEMI:
      return "SEMI";
    case TypedefParser::COLON:
      return "COLON";
    case TypedefParser::PATHSEP:
      return "PATHSEP";
    case TypedefParser::RARROW:
      return "RARROW";
    case TypedefParser::FATARROW:
      return "FATARROW";
    case TypedefParser::POUND:
      return "POUND";
    case TypedefParser::DOLLAR:
      return "DOLLAR";
    case TypedefParser::QUESTION:
      return "QUESTION";
    case TypedefParser::LBRACE:
      return "LBRACE";
    case TypedefParser::RBRACE:
      return "RBRACE";
    case TypedefParser::LBRACK:
      return "LBRACK";
    case TypedefParser::RBRACK:
      return "RBRACK";
    case TypedefParser::LPAREN:
      return "LPAREN";
    case TypedefParser::RPAREN:
      return "RPAREN";
    default:
      throw fmt::format("Unhandled token ID in TokenToString({})", token);
  }
}
}  // namespace

namespace td {

const char *ParserErrorInfo::ErrorTypeToString() const {
  switch (error_type) {
    case UNKNOWN:
      return "UNKNOWN";
    case OTHER:
      return "OTHER";
    case UNIMPLEMENTED:
      return "UNIMPLEMENTED";
    case LEXER_ERROR:
      return "LEXER_ERROR";
    case PARSE_ERROR:
      return "PARSE_ERROR";
    case MISSING_STATEMENT:
      return "MISSING_STATEMENT";
    case MISSING_IDENTIFIER:
      return "MISSING_IDENTIFIER";
    case INVALID_LANGUAGE_VERSION:
      return "INVALID_LANGUAGE_VERSION";
    case MISSING_TYPE_IDENTIFIER:
      return "MISSING_TYPE_IDENTIFIER";
    case MISSING_VALUE_EXPRESSION:
      return "MISSING_VALUE_EXPRESSION";
    case UNKNOWN_TYPE:
      return "UNKNOWN_TYPE";
    case TYPE_MISMATCH:
      return "TYPE_MISMATCH";
    case INVALID_BOOL_LITERAL:
      return "INVALID_BOOL_LITERAL";
    case INVALID_CHAR_LITERAL:
      return "INVALID_CHAR_LITERAL";
    case INVALID_FLOAT_LITERAL:
      return "INVALID_FLOAT_LITERAL";
    case INVALID_INTEGER_LITERAL:
      return "INVALID_INTEGER_LITERAL";
    case INVALID_STRING_LITERAL:
      return "INVALID_STRING_LITERAL";
    case INVALID_RAW_STRING_LITERAL:
      return "INVALID_RAW_STRING_LITERAL";
    case TEMPLATE_STRING_PARSE_ERROR:
      return "TEMPLATE_STRING_PARSE_ERROR";
    case UNRESOLVED_SYMBOL_REFERENCE:
      return "UNRESOLVED_SYMBOL_REFERENCE";
    case DUPLICATE_SYMBOL:
      return "DUPLICATE_SYMBOL";
    case TYPE_CONSTRAINT_VIOLATION:
      return "TYPE_CONSTRAINT_VIOLATION";
    case INVALID_TEMPLATE_STRING_LITERAL:
      return "INVALID_TEMPLATE_STRING_LITERAL";
    case INVALID_RAW_TEMPLATE_STRING_LITERAL:
      return "INVALID_RAW_TEMPLATE_STRING_LITERAL";
    case INVALID_TYPE_ARGUMENTS:
      return "INVALID_TYPE_ARGUMENTS";
    case NOT_A_TYPE:
      return "NOT_A_TYPE";
    case INACCESSIBLE_SYMBOL:
      return "INACCESSIBLE_SYMBOL";
    case NOT_A_VALUE_TYPE:
      return "NOT_A_VALUE_TYPE";
    case NOT_A_TEMPLATE_FUNCTION:
      return "NOT_A_TEMPLATE_FUNCTION";
    default:
      throw fmt::format("Unhandled error ID in ErrorTypeToString(): {}",
                        (int)error_type);
  }
}

std::ostream &operator<<(std::ostream &os, const ParserErrorInfo &value) {
  fmt::print(os, "[Error: {}, Message: \"{}\",", value.ErrorTypeToString(),
             value.message);
  if (value.error_type != ParserErrorInfo::LEXER_ERROR) {
    fmt::print(os, " token type: {},", TokenToString(value.token_type));
  }
  fmt::print(os, " char offset: {}, line: {}, line offset: {}, length: {}]",
             value.char_offset, value.line, value.line_offset, value.length);
  return os;
}

}  // namespace td
