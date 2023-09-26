#include "libtypedef/parser/parser_error_info.h"

#include <antlr4/antlr4-runtime.h>

#include <algorithm>
#include <cassert>
#include <cstdlib>

#define FMT_HEADER_ONLY
#include <fmt/core.h>
#include <fmt/ostream.h>

#include "libtypedef/parser/grammar/TypedefLexer.h"
#include "libtypedef/parser/grammar/TypedefParser.h"

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
    case FIELD_NOT_FOUND:
      return "FIELD_NOT_FOUND";
    case BINDING_VARIABLE_MISMATCH:
      return "BINDING_VARIABLE_MISMATCH";
    case INVALID_ARGUMENT:
      return "INVALID_ARGUMENT";
    default:
      throw fmt::format("Unhandled error ID in ErrorTypeToString(): {}",
                        (int)error_type);
  }
}

}  // namespace td
