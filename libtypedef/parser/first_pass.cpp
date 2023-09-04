#include "first_pass.h"

#include <charconv>
#include <memory>
#include <stdexcept>

#define FMT_HEADER_ONLY
#include <fmt/core.h>

using namespace std;

#define throw_logic_error(str) \
  throw std::logic_error(      \
      fmt::format("\"{}\" in {}:{}", str, __FILE__, __LINE__));

#define bail_if_errors()     \
  if (errors_list_.size()) { \
    return;                  \
  }

td::ParserErrorInfo MakeError(td::ParserErrorInfo::Type type, const string& msg,
                              antlr4::Token* token) {
  return td::PEIBuilder()
      .SetType(type)
      .SetMessage(msg)
      .SetCharOffset(token->getStartIndex())
      .SetLine(token->getLine())
      .SetLineOffset(token->getCharPositionInLine())
      .SetLength(token->getText().length())
      .build();
}
