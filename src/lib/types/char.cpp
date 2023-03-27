#include "char.h"

#include <ios>

namespace td {
namespace types {

std::unique_ptr<Char> FromString(std::string_view char_literal) {
  if (char_literal.size() < 2 || char_literal.front() != '\'' ||
      char_literal.back() != '\'') {
    return nullptr;
  }

  std::string_view inner = char_literal.substr(1, char_literal.size() - 2);

  if (inner.size() == 1) {
    return std::make_unique<Char>(static_cast<char32_t>(inner[0]));
  }

  if (inner.size() == 2 && inner[0] == '\\') {
    switch (inner[1]) {
      case 'n':
        return std::make_unique<Char>(U'\n');
      case 'r':
        return std::make_unique<Char>(U'\r');
      case 't':
        return std::make_unique<Char>(U'\t');
      case '\\':
        return std::make_unique<Char>(U'\\');
      case '0':
        return std::make_unique<Char>(U'\0');
      case '\'':
        return std::make_unique<Char>(U'\'');
      case '\"':
        return std::make_unique<Char>(U'\"');
    }
  }

  if (inner.size() == 4 && inner[0] == '\\' && inner[1] == 'x') {
    std::istringstream ss(inner.substr(2));
    int value;
    ss >> std::hex >> value;
    return static_cast<char32_t>(value);
  }

  if (inner.size() >= 3 && inner.size() <= 10 && inner[0] == '\\' &&
      inner[1] == 'u' && inner[2] == '{' && inner.back() == '}') {
    std::istringstream ss(inner.substr(3, inner.size() - 4));
    int value;
    ss >> std::hex >> value;
    return static_cast<char32_t>(value);
  }

  return std::nullopt;
}

}  // namespace types
}  // namespace td
