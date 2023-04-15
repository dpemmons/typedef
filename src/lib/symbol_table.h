#pragma once

#include <map>
#include <memory>
#include <string>
#include <variant>

#include "type.h"

namespace td {

class SymbolTable {
 public:
  SymbolTable() {}

  typedef std::variant<bool, char32_t, float, double, int8_t, int16_t, int32_t,
                       int64_t, uint8_t, uint16_t, uint32_t, uint64_t>
      Value;

 protected:
  struct TypeValue {
    std::shared_ptr<td::Type> type;
    std::shared_ptr<Value> value;
  };

  std::map<std::string, TypeValue> table_;
};

}  // namespace td
