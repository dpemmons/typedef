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
void typePrint(std::ostream& os, const T& t) {
  if (!t.HasValue()) {
    return fmt::print(os, "{}: undefined", t.TypeName());
  }
  return fmt::print(os, "{}: {}", t.TypeName(), t.Value().value());
}

}  // namespace

namespace td {
namespace types {

std::string Type::ToString() const {
  std::ostringstream o;
  print(o);
  return o.str();
}

// ----------------------------------------------------------------------------
// Bool
// ----------------------------------------------------------------------------
std::string_view Bool::TypeName() const { return "bool"; }

std::unique_ptr<Bool> Bool::FromLiteral(std::string_view literal) {
  if (literal.compare("true") == 0) {
    return std::make_unique<Bool>(true);
  } else if (literal.compare("false") == 0) {
    return std::make_unique<Bool>(false);
  }
  return nullptr;
}

void Bool::print(std::ostream& os) const { typePrint<Bool>(os, *this); }

// ----------------------------------------------------------------------------
// Char
// ----------------------------------------------------------------------------
std::string_view Char::TypeName() const { return "char"; }

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

  return nullptr;
}

void Char::print(std::ostream& os) const {
  if (!HasValue()) {
    return fmt::print(os, "{}: undefined", TypeName());
  }
  std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;
  return fmt::print(os, "{}: {}", TypeName(), converter.to_bytes(val_.value()));
}

// ----------------------------------------------------------------------------
// F32
// ----------------------------------------------------------------------------
bool F32::LiteralHasSuffix(std::string_view literal) {
  return endsWith(literal, F32::typename_);
}

std::unique_ptr<F32> F32::FromLiteral(std::string_view literal) {
  // chop off the suffix
  if (LiteralHasSuffix(literal)) {
    literal.remove_suffix(typename_.size());
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
    literal = temp;
    float value = 0;
    auto result = std::from_chars(literal.begin(), literal.end(), value);

    if (result.ec == std::errc()) {
      return std::make_unique<F32>(value);
    } else {
      return nullptr;
    }
  } else {
    float value = 0;
    auto result = std::from_chars(literal.begin(), literal.end(), value);

    if (result.ec == std::errc()) {
      return std::make_unique<F32>(value);
    } else {
      return nullptr;
    }
  }
  abort();
}

void F32::print(std::ostream& os) const { typePrint<F32>(os, *this); }

// ----------------------------------------------------------------------------
// F64
// ----------------------------------------------------------------------------
bool F64::LiteralHasSuffix(std::string_view literal) {
  return endsWith(literal, F64::typename_);
}

std::unique_ptr<F64> F64::FromLiteral(std::string_view literal) {
  if (LiteralHasSuffix(literal)) {
  }
}

void F64::print(std::ostream& os) const { typePrint<F64>(os, *this); }

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
  if (INT_TYPE::LiteralHasSuffix(literal)) {
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

void I8::print(std::ostream& os) const { typePrint<I8>(os, *this); }

// ----------------------------------------------------------------------------
// I16
// ----------------------------------------------------------------------------
bool I16::LiteralHasSuffix(std::string_view literal) {
  return endsWith(literal, I16::typename_);
}

std::unique_ptr<I16> I16::FromLiteral(std::string_view literal) {
  return IntFromLiteral<I16, int16_t>(literal, I16::typename_);
}

void I16::print(std::ostream& os) const { typePrint<I16>(os, *this); }

// ----------------------------------------------------------------------------
// I32
// ----------------------------------------------------------------------------
bool I32::LiteralHasSuffix(std::string_view literal) {
  return endsWith(literal, I32::typename_);
}

std::unique_ptr<I32> I32::FromLiteral(std::string_view literal) {
  return IntFromLiteral<I32, int32_t>(literal, I32::typename_);
}

void I32::print(std::ostream& os) const { typePrint<I32>(os, *this); }

// ----------------------------------------------------------------------------
// I64
// ----------------------------------------------------------------------------
bool I64::LiteralHasSuffix(std::string_view literal) {
  return endsWith(literal, I64::typename_);
}

std::unique_ptr<I64> I64::FromLiteral(std::string_view literal) {
  return IntFromLiteral<I64, int64_t>(literal, I64::typename_);
}

void I64::print(std::ostream& os) const { typePrint<I64>(os, *this); }

// ----------------------------------------------------------------------------
// U8
// ----------------------------------------------------------------------------
bool U8::LiteralHasSuffix(std::string_view literal) {
  return endsWith(literal, U8::typename_);
}

std::unique_ptr<U8> U8::FromLiteral(std::string_view literal) {
  return IntFromLiteral<U8, uint8_t>(literal, U8::typename_);
}

void U8::print(std::ostream& os) const { typePrint<U8>(os, *this); }

// ----------------------------------------------------------------------------
// U16
// ----------------------------------------------------------------------------
bool U16::LiteralHasSuffix(std::string_view literal) {
  return endsWith(literal, U16::typename_);
}

std::unique_ptr<U16> U16::FromLiteral(std::string_view literal) {
  return IntFromLiteral<U16, uint16_t>(literal, U16::typename_);
}

void U16::print(std::ostream& os) const { typePrint<U16>(os, *this); }

// ----------------------------------------------------------------------------
// U32
// ----------------------------------------------------------------------------
bool U32::LiteralHasSuffix(std::string_view literal) {
  return endsWith(literal, U32::typename_);
}

std::unique_ptr<U32> U32::FromLiteral(std::string_view literal) {
  return IntFromLiteral<U32, uint32_t>(literal, U32::typename_);
}

void U32::print(std::ostream& os) const { typePrint<U32>(os, *this); }

// ----------------------------------------------------------------------------
// U64
// ----------------------------------------------------------------------------
bool U64::LiteralHasSuffix(std::string_view literal) {
  return endsWith(literal, U64::typename_);
}

std::unique_ptr<U64> U64::FromLiteral(std::string_view literal) {
  return IntFromLiteral<U64, uint64_t>(literal, U64::typename_);
}

void U64::print(std::ostream& os) const { typePrint<U64>(os, *this); }

// Type Type::CreateBOOL() { return Type(Type_::BOOL); }
// Type Type::CreateCHAR() { return Type(Type_::CHAR); }
// Type Type::CreateF32() { return Type(Type_::F32); }
// Type Type::CreateF64() { return Type(Type_::F64); }
// Type Type::CreateI8() { return Type(Type_::I8); }
// Type Type::CreateI16() { return Type(Type_::I16); }
// Type Type::CreateI32() { return Type(Type_::I32); }
// Type Type::CreateI64() { return Type(Type_::I64); }
// Type Type::CreateI128() { return Type(Type_::I128); }
// Type Type::CreateU8() { return Type(Type_::U8); }
// Type Type::CreateU16() { return Type(Type_::U16); }
// Type Type::CreateU32() { return Type(Type_::U32); }
// Type Type::CreateU64() { return Type(Type_::U64); }
// Type Type::CreateU128() { return Type(Type_::U128); }

// Type Type::CreateFromString(const std::string& str) {
//   if (str.compare("bool") == 0) {
//     return CreateBOOL();
//   } else if (str.compare("char") == 0) {
//     return CreateCHAR();
//   } else if (str.compare("f32") == 0) {
//     return CreateF32();
//   } else if (str.compare("f64") == 0) {
//     return CreateF64();
//   } else if (str.compare("i8") == 0) {
//     return CreateI8();
//   } else if (str.compare("i16") == 0) {
//     return CreateI16();
//   } else if (str.compare("i32") == 0) {
//     return CreateI32();
//   } else if (str.compare("i64") == 0) {
//     return CreateI64();
//   } else if (str.compare("i128") == 0) {
//     return CreateI128();
//   } else if (str.compare("u8") == 0) {
//     return CreateU8();
//   } else if (str.compare("u16") == 0) {
//     return CreateU16();
//   } else if (str.compare("u32") == 0) {
//     return CreateU32();
//   } else if (str.compare("u64") == 0) {
//     return CreateU64();
//   } else if (str.compare("u128") == 0) {
//     return CreateU128();
//   } else {
//     return CreateUnknown();
//   }
// };

// bool Type::IsUnknown() const { return type_ == Type_::UNKNOWN; }

// bool Type::IsBool() const { return type_ == Type_::BOOL; }
// bool Type::IsInteger() const {
//   return type_ > Type_::INTEGERS_START && type_ < Type_::INTEGERS_END;
// }
// bool Type::IsScalar() const {
//   return type_ > Type_::SCALARS_START && type_ < Type_::SCALARS_END;
// }

// bool Type::IsBOOL() const { return type_ == Type_::BOOL; }
// bool Type::IsCHAR() const { return type_ == Type_::CHAR; }
// bool Type::IsF32() const { return type_ == Type_::F32; }
// bool Type::IsF64() const { return type_ == Type_::F64; }
// bool Type::IsI8() const { return type_ == Type_::I8; }
// bool Type::IsI16() const { return type_ == Type_::I16; }
// bool Type::IsI32() const { return type_ == Type_::I32; }
// bool Type::IsI64() const { return type_ == Type_::I64; }
// bool Type::IsI128() const { return type_ == Type_::I128; }
// bool Type::IsU8() const { return type_ == Type_::U8; }
// bool Type::IsU16() const { return type_ == Type_::U16; }
// bool Type::IsU32() const { return type_ == Type_::U32; }
// bool Type::IsU64() const { return type_ == Type_::U64; }
// bool Type::IsU128() const { return type_ == Type_::U128; }

// std::string Type::ToString() const {
//   switch (type_) {
//     case Type_::UNKNOWN:
//       return "unknown";
//     case Type_::BOOL:
//       return "bool";
//     case Type_::CHAR:
//       return "char";
//     case Type_::F32:
//       return "f32";
//     case Type_::F64:
//       return "f64";
//     case Type_::I8:
//       return "i8";
//     case Type_::I16:
//       return "i16";
//     case Type_::I32:
//       return "i32";
//     case Type_::I64:
//       return "i64";
//     case Type_::I128:
//       return "i128";
//     case Type_::U8:
//       return "u8";
//     case Type_::U16:
//       return "u16";
//     case Type_::U32:
//       return "u32";
//     case Type_::U64:
//       return "u64";
//     case Type_::U128:
//       return "u128";
//     default:
//       abort();
//   }
// };

// bool operator==(const Type& c1, const Type& c2) { return c1.type_ ==
// c2.type_; } bool operator!=(const Type& c1, const Type& c2) { return c1.type_
// != c2.type_; }

}  // namespace types
}  // namespace td