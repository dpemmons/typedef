#ifndef PARSER_MACROS_H__
#define PARSER_MACROS_H__

#define FMT_HEADER_ONLY
#include <fmt/core.h>

#define throw_logic_error(str) \
  throw std::logic_error(      \
      fmt::format("\"{}\" in {}:{}", str, __FILE__, __LINE__));

#endif  // PARSER_MACROS_H__
