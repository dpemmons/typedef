#include "symbol.h"

#define FMT_HEADER_ONLY
#include "fmt/core.h"
#include "fmt/ostream.h"

namespace td {

std::ostream &operator<<(std::ostream &os, const Symbol &symbol) {
  auto id = symbol.GetIdentifier();
  std::string identifier = id != nullptr ? id->GetSimple() : "anonymous";
  fmt::print(os, "{} : {}", identifier, symbol.type_->ToString());
  return os;
}

bool Symbol::IdentiferEquals(Symbol const &other) const {
  return identifier_ != nullptr && other.identifier_ != nullptr &&
         *identifier_ == *other.identifier_;
}

template <class T>
bool Equal(const std::shared_ptr<Type> &type_a,
           const std::shared_ptr<Type> &type_b) {
  auto a = std::dynamic_pointer_cast<T>(type_a);
  auto b = std::dynamic_pointer_cast<T>(type_b);
  return (a != nullptr && b != nullptr && *a == *b);
}

bool Symbol::TypeEquals(Symbol const &other) const {
  if (type_ == nullptr || other.type_ == nullptr) {
    return false;
  }
  if (!type_->HasSameType(*other.type_)) {
    return false;
  }
  if (Equal<Bool>(type_, other.type_) || Equal<Char>(type_, other.type_) ||
      Equal<F32>(type_, other.type_) || Equal<F64>(type_, other.type_) ||
      Equal<I8>(type_, other.type_) || Equal<I16>(type_, other.type_) ||
      Equal<I32>(type_, other.type_) || Equal<I64>(type_, other.type_) ||
      Equal<U8>(type_, other.type_) || Equal<U16>(type_, other.type_) ||
      Equal<U32>(type_, other.type_) || Equal<U64>(type_, other.type_)) {
    return true;
  }
  return false;
}

bool Symbol::operator==(Symbol const &other) const {
  return IdentiferEquals(other) && TypeEquals(other);
}

bool Symbol::operator!=(Symbol const &other) const {
  return !IdentiferEquals(other) || !TypeEquals(other);
}

}  // namespace td