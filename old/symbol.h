#pragma once

#include <memory>
#include <ostream>

#include "identifier.h"
#include "type.h"

namespace td {

class Symbol {
 public:
  Symbol(std::unique_ptr<OutIdentifier> identifier, std::unique_ptr<Type> type)
      : identifier_(std::move(identifier)), type_(std::move(type)) {}

  std::shared_ptr<OutIdentifier> GetIdentifier() const { return identifier_; }
  std::shared_ptr<Type> GetType() const { return type_; }

  friend std::ostream &operator<<(std::ostream &os, const Symbol &value);

  bool IdentiferEquals(Symbol const &other) const;
  bool TypeEquals(Symbol const &other) const;

  bool operator==(Symbol const &other) const;
  bool operator!=(Symbol const &other) const;

 private:
  std::shared_ptr<OutIdentifier> identifier_;
  std::shared_ptr<Type> type_;
};

}  // namespace td