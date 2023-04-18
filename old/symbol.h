#pragma once

#include <memory>
#include <ostream>

#include "identifier.h"
#include "type.h"

namespace td {

class Symbol {
 public:
  Symbol(std::unique_ptr<Identifier> identifier, std::unique_ptr<Type> type)
      : identifier_(std::move(identifier)), type_(std::move(type)) {}

  std::shared_ptr<Identifier> GetIdentifier() const { return identifier_; }
  std::shared_ptr<Type> GetType() const { return type_; }

  friend std::ostream &operator<<(std::ostream &os, const Symbol &value);

  bool IdentiferEquals(Symbol const &other) const;
  bool TypeEquals(Symbol const &other) const;

  bool operator==(Symbol const &other) const;
  bool operator!=(Symbol const &other) const;

 private:
  std::shared_ptr<Identifier> identifier_;
  std::shared_ptr<Type> type_;
};

}  // namespace td