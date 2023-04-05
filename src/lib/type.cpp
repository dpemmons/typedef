#include "type.h"

#include <algorithm>
#include <charconv>
#include <codecvt>
#include <ios>
#include <locale>
#include <sstream>

#define FMT_HEADER_ONLY
#include "fmt/core.h"
#include "fmt/ostream.h"

namespace {

bool startsWith(const std::string& str, const std::string& prefix) {
  return str.size() >= prefix.size() &&
         0 == str.compare(0, prefix.size(), prefix);
}

bool startsWith(std::string_view str, std::string_view prefix) {
  return str.size() >= prefix.size() &&
         0 == str.compare(0, prefix.size(), prefix);
}

bool endsWith(const std::string& str, const std::string& suffix) {
  return str.size() >= suffix.size() &&
         0 == str.compare(str.size() - suffix.size(), suffix.size(), suffix);
}

bool endsWith(std::string_view str, std::string_view suffix) {
  return str.size() >= suffix.size() &&
         0 == str.compare(str.size() - suffix.size(), suffix.size(), suffix);
}

template <typename T>
void typePrint(std::ostream& os, const T& t, std::string_view type_name) {
  if (!t.HasValue()) {
    return fmt::print(os, "{} = undefined", type_name);
  }
  return fmt::print(os, "{} = {}", type_name, t.Value().value());
}

}  // namespace

namespace td {

std::string Type::ToString() const {
  std::ostringstream o;
  print(o);
  return o.str();
}

// ----------------------------------------------------------------------------
// Bool
// ----------------------------------------------------------------------------
std::unique_ptr<Bool> Bool::FromLiteral(std::string_view literal) {
  if (literal.compare("true") == 0) {
    return std::make_unique<Bool>(true);
  } else if (literal.compare("false") == 0) {
    return std::make_unique<Bool>(false);
  }
  return nullptr;
}

void Bool::print(std::ostream& os) const {
  typePrint<Bool>(os, *this, typename_);
}

// ----------------------------------------------------------------------------
// Char
// ----------------------------------------------------------------------------
std::unique_ptr<Char> Char::FromLiteral(std::string_view literal) {
  if (literal.size() < 2 || literal.front() != '\'' || literal.back() != '\'') {
    return nullptr;
  }

  std::string_view inner = literal.substr(1, literal.size() - 2);

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
    // TODO this is very inefficient, do something better.
    std::istringstream ss(std::string(inner.substr(2)));
    int value;
    ss >> std::hex >> value;
    return std::make_unique<Char>(static_cast<char32_t>(value));
  }

  if (inner.size() >= 3 && inner.size() <= 10 && inner[0] == '\\' &&
      inner[1] == 'u' && inner[2] == '{' && inner.back() == '}') {
    // TODO this is very inefficient, do something better.
    std::istringstream ss(std::string(inner.substr(3, inner.size() - 4)));
    int value;
    ss >> std::hex >> value;
    return std::make_unique<Char>(static_cast<char32_t>(value));
  }

  if (inner.size() > 0) {
    std::string inner_str(inner);
    std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;
    std::u32string str32 = converter.from_bytes(inner_str);
    if (str32.size() == 1) {
      return std::make_unique<Char>(str32[0]);
    }
  }

  return nullptr;
}

void Char::print(std::ostream& os) const {
  if (!HasValue()) {
    return fmt::print(os, "{} = undefined", typename_);
  }
  // Convert to UTF-8.
  std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;
  return fmt::print(os, "{} = {}", typename_, converter.to_bytes(val_.value()));
}

// ----------------------------------------------------------------------------
// Float
// ----------------------------------------------------------------------------
template <typename FLOAT_TYPE, typename CPP_TYPE>
static std::unique_ptr<FLOAT_TYPE> ConvertFloatChars(std::string_view literal) {
  CPP_TYPE value = 0;
  auto result = std::from_chars(literal.begin(), literal.end(), value);

  bool ended_early = result.ptr != literal.end();

  if (result.ec == std::errc() && !ended_early) {
    return std::make_unique<FLOAT_TYPE>(value);
  } else {
    return nullptr;
  }
}

template <typename FLOAT_TYPE, typename CPP_TYPE>
static std::unique_ptr<FLOAT_TYPE> FloatFromLiteral(std::string_view literal,
                                                    std::string_view suffix) {
  // chop off the suffix
  if (endsWith(literal, suffix)) {
    literal.remove_suffix(suffix.size());
  }

  // chop off leading and trailing underscores
  literal.remove_prefix(
      std::min(literal.find_first_not_of("_"), literal.size()));
  literal.remove_suffix(literal.size() - literal.find_last_not_of("_") - 1);

  // If there are any underscores left, we have to handle those by creating a
  // temporary string.
  if (literal.find("_") != std::string_view::npos) {
    std::string temp;
    temp.reserve(literal.size());
    for (auto c : literal) {
      if (c != '_') {
        temp += c;
      }
    }
    return ConvertFloatChars<FLOAT_TYPE, CPP_TYPE>(temp);
  } else {
    return ConvertFloatChars<FLOAT_TYPE, CPP_TYPE>(literal);
  }
}

// ----------------------------------------------------------------------------
// F32
// ----------------------------------------------------------------------------
bool F32::LiteralHasSuffix(std::string_view literal) {
  return endsWith(literal, F32::typename_);
}

std::unique_ptr<F32> F32::FromLiteral(std::string_view literal) {
  return FloatFromLiteral<F32, float>(literal, F32::typename_);
}

void F32::print(std::ostream& os) const {
  typePrint<F32>(os, *this, typename_);
}

// ----------------------------------------------------------------------------
// F64
// ----------------------------------------------------------------------------
bool F64::LiteralHasSuffix(std::string_view literal) {
  return endsWith(literal, F64::typename_);
}

std::unique_ptr<F64> F64::FromLiteral(std::string_view literal) {
  return FloatFromLiteral<F64, double>(literal, F64::typename_);
}

void F64::print(std::ostream& os) const {
  typePrint<F64>(os, *this, typename_);
}

// ----------------------------------------------------------------------------
// Integer helpers
// ----------------------------------------------------------------------------
enum IntBase { DECIMAL = 10, HEX = 16, OCT = 8, BIN = 2 };

template <typename INT_TYPE, typename CPP_TYPE>
static std::unique_ptr<INT_TYPE> ConvertIntChars(std::string_view literal,
                                                 int base) {
  CPP_TYPE value = 0;
  // TODO: Do it faster?
  // https://kholdstare.github.io/technical/2020/05/26/faster-integer-parsing.html
  auto result = std::from_chars(literal.begin(), literal.end(), value, base);

  bool ended_early = result.ptr != literal.end();

  if (result.ec == std::errc() && !ended_early) {
    return std::make_unique<INT_TYPE>(value);
  } else {
    return nullptr;
  }
}

template <typename INT_TYPE, typename CPP_TYPE>
static std::unique_ptr<INT_TYPE> IntFromLiteral(std::string_view literal,
                                                std::string_view suffix) {
  // chop off the suffix
  if (endsWith(literal, suffix)) {
    literal.remove_suffix(suffix.size());
  }

  // chop off (but remember) prefix
  IntBase base = IntBase::DECIMAL;
  if (startsWith(literal, "0x")) {
    // Hex literal.
    base = IntBase::HEX;
    literal.remove_prefix(2);
  } else if (startsWith(literal, "0o")) {
    // Oct literal.
    base = IntBase::OCT;
    literal.remove_prefix(2);
  } else if (startsWith(literal, "0b")) {
    // Bin literal.
    base = IntBase::BIN;
    literal.remove_prefix(2);
  }

  // chop off leading and trailing underscores
  literal.remove_prefix(
      std::min(literal.find_first_not_of("_"), literal.size()));
  literal.remove_suffix(literal.size() - literal.find_last_not_of("_") - 1);

  // If there are any underscores left, we have to handle those by creating a
  // temporary string.
  if (literal.find("_") != std::string_view::npos) {
    std::string temp;
    temp.reserve(literal.size());
    for (auto c : literal) {
      if (c != '_') {
        temp += c;
      }
    }
    return ConvertIntChars<INT_TYPE, CPP_TYPE>(temp, base);
  } else {
    return ConvertIntChars<INT_TYPE, CPP_TYPE>(literal, base);
  }
  abort();
}

// ----------------------------------------------------------------------------
// I8
// ----------------------------------------------------------------------------
bool I8::LiteralHasSuffix(std::string_view literal) {
  return endsWith(literal, I8::typename_);
}

std::unique_ptr<I8> I8::FromLiteral(std::string_view literal) {
  return IntFromLiteral<I8, int8_t>(literal, I8::typename_);
}

void I8::print(std::ostream& os) const { typePrint<I8>(os, *this, typename_); }

// ----------------------------------------------------------------------------
// I16
// ----------------------------------------------------------------------------
bool I16::LiteralHasSuffix(std::string_view literal) {
  return endsWith(literal, I16::typename_);
}

std::unique_ptr<I16> I16::FromLiteral(std::string_view literal) {
  return IntFromLiteral<I16, int16_t>(literal, I16::typename_);
}

void I16::print(std::ostream& os) const {
  typePrint<I16>(os, *this, typename_);
}

// ----------------------------------------------------------------------------
// I32
// ----------------------------------------------------------------------------
bool I32::LiteralHasSuffix(std::string_view literal) {
  return endsWith(literal, I32::typename_);
}

std::unique_ptr<I32> I32::FromLiteral(std::string_view literal) {
  return IntFromLiteral<I32, int32_t>(literal, I32::typename_);
}

void I32::print(std::ostream& os) const {
  typePrint<I32>(os, *this, typename_);
}

// ----------------------------------------------------------------------------
// I64
// ----------------------------------------------------------------------------
bool I64::LiteralHasSuffix(std::string_view literal) {
  return endsWith(literal, I64::typename_);
}

std::unique_ptr<I64> I64::FromLiteral(std::string_view literal) {
  return IntFromLiteral<I64, int64_t>(literal, I64::typename_);
}

void I64::print(std::ostream& os) const {
  typePrint<I64>(os, *this, typename_);
}

// ----------------------------------------------------------------------------
// U8
// ----------------------------------------------------------------------------
bool U8::LiteralHasSuffix(std::string_view literal) {
  return endsWith(literal, U8::typename_);
}

std::unique_ptr<U8> U8::FromLiteral(std::string_view literal) {
  return IntFromLiteral<U8, uint8_t>(literal, U8::typename_);
}

void U8::print(std::ostream& os) const { typePrint<U8>(os, *this, typename_); }

// ----------------------------------------------------------------------------
// U16
// ----------------------------------------------------------------------------
bool U16::LiteralHasSuffix(std::string_view literal) {
  return endsWith(literal, U16::typename_);
}

std::unique_ptr<U16> U16::FromLiteral(std::string_view literal) {
  return IntFromLiteral<U16, uint16_t>(literal, U16::typename_);
}

void U16::print(std::ostream& os) const {
  typePrint<U16>(os, *this, typename_);
}

// ----------------------------------------------------------------------------
// U32
// ----------------------------------------------------------------------------
bool U32::LiteralHasSuffix(std::string_view literal) {
  return endsWith(literal, U32::typename_);
}

std::unique_ptr<U32> U32::FromLiteral(std::string_view literal) {
  return IntFromLiteral<U32, uint32_t>(literal, U32::typename_);
}

void U32::print(std::ostream& os) const {
  typePrint<U32>(os, *this, typename_);
}

// ----------------------------------------------------------------------------
// U64
// ----------------------------------------------------------------------------
bool U64::LiteralHasSuffix(std::string_view literal) {
  return endsWith(literal, U64::typename_);
}

std::unique_ptr<U64> U64::FromLiteral(std::string_view literal) {
  return IntFromLiteral<U64, uint64_t>(literal, U64::typename_);
}

void U64::print(std::ostream& os) const {
  typePrint<U64>(os, *this, typename_);
}

}  // namespace td