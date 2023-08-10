#include "listener.h"

#include <charconv>
#include <memory>

#include "libtypedef/parser/symbol_path.h"

using namespace std;

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

shared_ptr<string> GetStringValue(antlr4::Token* token) {
  string text = token->getText();
  string_view literal(text);
  if (literal.size() < 2) {
    throw MakeError(td::ParserErrorInfo::INVALID_STRING_LITERAL,
                    "Invalid string literal", token);
  }
  if (literal.front() == '"' && literal.back() == '"') {
    literal.remove_prefix(1);
    literal.remove_suffix(1);
  } else {
    throw MakeError(td::ParserErrorInfo::INVALID_STRING_LITERAL,
                    "Invalid string literal", token);
  }
  ostringstream result;
  wstring_convert<codecvt_utf8<char32_t>, char32_t> converter;
  for (size_t i = 0; i < literal.size(); ++i) {
    if (literal[i] == '\\') {
      ++i;
      switch (literal[i]) {
        case 'n':
          result << '\n';
          break;
        case 'r':
          result << '\r';
          break;
        case 't':
          result << '\t';
          break;
        case '\\':
          result << '\\';
          break;
        case '0':
          result << '\0';
          break;
        case '"':
          result << '"';
          break;
        case '\'':
          result << '\'';
          break;
        case 'x': {
          if (i + 2 >= literal.size()) {
            throw MakeError(td::ParserErrorInfo::INVALID_STRING_LITERAL,
                            "Invalid string literal", token);
          }
          int hexValue = 0;
          from_chars(literal.data() + i + 1, literal.data() + i + 3, hexValue,
                     16);
          result << static_cast<char>(hexValue);
          i += 2;
          break;
        }
        case 'u': {
          size_t start = i + 2;
          if (start >= literal.size()) {
            throw MakeError(td::ParserErrorInfo::INVALID_STRING_LITERAL,
                            "Invalid string literal", token);
          }
          size_t end = literal.find('}', start);
          if (end == string_view::npos || end >= literal.size() ||
              end - start > 6) {
            throw MakeError(td::ParserErrorInfo::INVALID_STRING_LITERAL,
                            "Invalid string literal", token);
          }
          uint32_t unicodeValue = 0;
          auto [ptr, ec] = from_chars(literal.data() + start,
                                      literal.data() + end, unicodeValue, 16);
          if (ec != errc()) {
            throw MakeError(td::ParserErrorInfo::INVALID_STRING_LITERAL,
                            "Invalid string literal", token);
          }
          result << converter.to_bytes(static_cast<char32_t>(unicodeValue));
          i = end;
          break;
        }
      }
    } else {
      result << literal[i];
    }
  }
  return make_shared<string>(result.str());
}

// From example, from RAW_STRING_LITERAL tokens.
shared_ptr<string> GetRawString(antlr4::Token* token) {
  string text = token->getText();
  string_view literal(text);
  if (literal.empty() || literal.front() != 'r') {
    throw MakeError(td::ParserErrorInfo::INVALID_RAW_STRING_LITERAL,
                    "Invalid raw string literal", token);
  }

  // Resize the string_view to skip the initial 'r'
  literal.remove_prefix(1);

  // Remove matching '#'s from the prefix and suffix
  while (!literal.empty() && literal.front() == '#' && literal.back() == '#') {
    literal.remove_prefix(1);
    literal.remove_suffix(1);
  }

  // Check for matching '"'s and resize the string_view accordingly
  if (literal.empty() || literal.front() != '"' || literal.back() != '"') {
    throw MakeError(td::ParserErrorInfo::INVALID_RAW_STRING_LITERAL,
                    "Invalid raw string literal", token);
  }

  // remove leading and trailing quotes
  literal.remove_prefix(1);
  literal.remove_suffix(1);

  // Create a new string instance with the remaining raw string content
  return make_shared<string>(literal);
}

char32_t GetCharValue(TypedefParser::CharLiteralContext* ctx) {
  std::string literal = ctx->CHAR_LITERAL()->getText();
  if (literal.size() < 2 || literal.front() != '\'' || literal.back() != '\'') {
    throw MakeError(td::ParserErrorInfo::INVALID_CHAR_LITERAL,
                    "Invalid char literal", ctx->CHAR_LITERAL()->getSymbol());
  }

  std::string_view inner(literal.data() + 1, literal.size() - 2);

  if (inner.size() == 2 && inner[0] == '\\') {
    switch (inner[1]) {
      case 'n':
        return U'\n';
      case 'r':
        return U'\r';
      case 't':
        return U'\t';
      case '\\':
        return U'\\';
      case '0':
        return U'\0';
      case '\'':
        return U'\'';
      case '\"':
        return U'\"';
    }
  }

  if (inner.size() == 4 && inner[0] == '\\' && inner[1] == 'x') {
    // TODO this is very inefficient, do something better.
    std::istringstream ss(std::string(inner.substr(2)));
    int value;
    ss >> std::hex >> value;
    return static_cast<char32_t>(value);
  }

  if (inner.size() >= 3 && inner.size() <= 10 && inner[0] == '\\' &&
      inner[1] == 'u' && inner[2] == '{' && inner.back() == '}') {
    // TODO this is very inefficient, do something better.
    std::istringstream ss(std::string(inner.substr(3, inner.size() - 4)));
    int value;
    ss >> std::hex >> value;
    return static_cast<char32_t>(value);
  }

  if (inner.size() > 0) {
    std::string inner_str(inner);
    std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;
    std::u32string str32 = converter.from_bytes(inner_str);
    if (str32.size() == 1) {
      return str32[0];
    }
  }

  throw MakeError(td::ParserErrorInfo::INVALID_CHAR_LITERAL,
                  "Invalid char literal", ctx->CHAR_LITERAL()->getSymbol());
}

void Listener::exitSimplePath(TypedefParser::SimplePathContext* ctx) {
  ctx->path = make_shared<td::SymbolPath>(ctx->leading_pathsep != nullptr);
  for (const TypedefParser::IdentifierContext* i : ctx->identifier()) {
    ctx->path->emplace_back(i->id);
  }
}

void Listener::exitBoolLiteral(TypedefParser::BoolLiteralContext* ctx) {
  if (ctx->start->getType() == TypedefParser::KW_FALSE) {
    ctx->maybe_val = false;
  } else if (ctx->start->getType() == TypedefParser::KW_TRUE) {
    ctx->maybe_val = true;
  } else {
    throw "Invalid state.";
  }
}

template <typename T, class CTX>
T GetIntValue(CTX* ctx) {
  std::string digits;
  std::string underscored_digits;
  int base;
  bool remove_underscores = false;
  T value;

  if (ctx->DEC_DIGITS()) {
    if (ctx->MINUS()) {
      digits = ctx->MINUS()->getText() + ctx->DEC_DIGITS()->getText();
    } else {
      digits = ctx->DEC_DIGITS()->getText();
    }
    base = 10;
  } else if (ctx->HEX_DIGITS()) {
    digits = ctx->HEX_DIGITS()->getText();
    base = 16;
  } else if (ctx->OCT_DIGITS()) {
    digits = ctx->OCT_DIGITS()->getText();
    base = 8;
  } else if (ctx->BIN_DIGITS()) {
    digits = ctx->BIN_DIGITS()->getText();
    base = 2;
  } else if (ctx->DEC_DIGITS_UNDERSCORE()) {
    if (ctx->MINUS()) {
      underscored_digits =
          ctx->MINUS()->getText() + ctx->DEC_DIGITS_UNDERSCORE()->getText();
    } else {
      underscored_digits = ctx->DEC_DIGITS_UNDERSCORE()->getText();
    }
    base = 10;
    remove_underscores = true;
  } else if (ctx->HEX_DIGITS_UNDERSCORE()) {
    underscored_digits = ctx->HEX_DIGITS_UNDERSCORE()->getText();
    base = 16;
    remove_underscores = true;
  } else if (ctx->OCT_DIGITS_UNDERSCORE()) {
    underscored_digits = ctx->OCT_DIGITS_UNDERSCORE()->getText();
    base = 8;
    remove_underscores = true;
  } else if (ctx->BIN_DIGITS_UNDERSCORE()) {
    underscored_digits = ctx->BIN_DIGITS_UNDERSCORE()->getText();
    base = 2;
    remove_underscores = true;
  } else {
    // Grammar shouldn't let us get here...
    assert(false);  // unreachable
  }

  if (remove_underscores) {
    digits.reserve(underscored_digits.size());
    for (auto c : underscored_digits) {
      if (c != '_') {
        digits += c;
      }
    }
  }
  std::string_view digits_view(digits);

  auto result =
      std::from_chars(digits_view.begin(), digits_view.end(), value, base);
  bool ended_early = result.ptr != digits_view.end();
  if (result.ec == std::errc() && !ended_early) {
    return value;
  } else {
    throw MakeError(td::ParserErrorInfo::INVALID_INTEGER_LITERAL,
                    "Invalid string integer", ctx->getStart());
  }
}

template <typename T, class CTX>
T GetFloatValue(CTX* ctx) {
  std::string digits = ctx->FLOAT_LITERAL()->getText();
  std::string underscored_digits;
  T value;

  std::string_view digits_view;

  if (digits.find("_") != std::string_view::npos) {
    underscored_digits.reserve(digits.size());
    for (auto c : digits) {
      if (c != '_') {
        underscored_digits += c;
      }
    }
    digits_view = underscored_digits;
  } else {
    digits_view = digits;
  }

  auto result = std::from_chars(digits_view.begin(), digits_view.end(), value);
  bool ended_early = result.ptr != digits_view.end();

  if (result.ec == std::errc() && !ended_early) {
    return value;
  } else {
    throw MakeError(td::ParserErrorInfo::INVALID_FLOAT_LITERAL,
                    "Invalid floating point literal", ctx->getStart());
  }
}

void Listener::exitCharLiteral(TypedefParser::CharLiteralContext* ctx) {
  try {
    ctx->maybe_val = GetCharValue(ctx);
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}

void Listener::exitF32Literal(TypedefParser::F32LiteralContext* ctx) {
  try {
    ctx->maybe_val = GetFloatValue<float>(ctx);
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}

void Listener::exitF64Literal(TypedefParser::F64LiteralContext* ctx) {
  try {
    ctx->maybe_val = GetFloatValue<double>(ctx);
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}

void Listener::exitU8Literal(TypedefParser::U8LiteralContext* ctx) {
  try {
    ctx->maybe_val = GetIntValue<uint8_t>(ctx);
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}

void Listener::exitU16Literal(TypedefParser::U16LiteralContext* ctx) {
  try {
    ctx->maybe_val = GetIntValue<uint16_t>(ctx);
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}

void Listener::exitU32Literal(TypedefParser::U32LiteralContext* ctx) {
  try {
    ctx->maybe_val = GetIntValue<uint32_t>(ctx);
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}

void Listener::exitU64Literal(TypedefParser::U64LiteralContext* ctx) {
  try {
    ctx->maybe_val = GetIntValue<uint64_t>(ctx);
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}

void Listener::exitI8Literal(TypedefParser::I8LiteralContext* ctx) {
  try {
    ctx->maybe_val = GetIntValue<int8_t>(ctx);
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}

void Listener::exitI16Literal(TypedefParser::I16LiteralContext* ctx) {
  try {
    ctx->maybe_val = GetIntValue<int16_t>(ctx);
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}

void Listener::exitI32Literal(TypedefParser::I32LiteralContext* ctx) {
  try {
    ctx->maybe_val = GetIntValue<int32_t>(ctx);
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}

void Listener::exitI64Literal(TypedefParser::I64LiteralContext* ctx) {
  try {
    ctx->maybe_val = GetIntValue<int64_t>(ctx);
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}

void Listener::exitStringLiteral(TypedefParser::StringLiteralContext* ctx) {
  try {
    if (ctx->STRING_LITERAL()) {
      ctx->str = GetStringValue(ctx->STRING_LITERAL()->getSymbol());
    } else if (ctx->RAW_STRING_LITERAL()) {
      ctx->str = GetRawString(ctx->RAW_STRING_LITERAL()->getSymbol());
    }
  } catch (td::ParserErrorInfo& pei) {
    errors_list_.push_back(pei);
  }
}

void Listener::exitIdentifier(TypedefParser::IdentifierContext* ctx) {
  if (ctx->nki) {
    ctx->id = make_shared<string>(std::move(ctx->nki->getText()));
  }
}
