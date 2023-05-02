#ifndef LIB_CODEGEN_CODEGEN_CPP_HELPERS_H__
#define LIB_CODEGEN_CODEGEN_CPP_HELPERS_H__

#include <string>

#include "symbol_table.h"

namespace td {

std::string_view StructAlignmentMacro();

/**
 * @brief Escapes a UTF-8 string to a valid C++ identifier.
 *
 * This function takes a UTF-8 encoded string and returns a valid C++
 * identifier, following the rules for C++ symbol names. It replaces invalid
 * characters with their Unicode code points in the format _XXXX, where XXXX is
 * the hexadecimal representation of the code point. If the first character is a
 * digit, it is also replaced by its Unicode code point to ensure the resulting
 * string is a valid C++ identifier.
 *
 * The function does not ensure the uniqueness of the resulting identifiers.
 *
 * @param utf8_str The input UTF-8 encoded string.
 * @return A valid C++ identifier string.
 */
std::string escape_utf8_to_cpp_identifier(const std::string& utf8_str);

inline std::string escape_utf8_to_cpp_identifier(
    const td::SymbolRef& symbol_ref) {
  return escape_utf8_to_cpp_identifier(symbol_ref.id);
}

}  // namespace td

#endif  // LIB_CODEGEN_CODEGEN_CPP_HELPERS_H__
