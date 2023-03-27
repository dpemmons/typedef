#include "type.h"

#include <ios>
#include <sstream>

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

}  // namespace

namespace td {
namespace types {

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