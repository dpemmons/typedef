#pragma once

#include <map>
#include <memory>
#include <ostream>
#include <string>
#include <variant>

namespace td {

class SymbolTable {
 public:
  SymbolTable() {}

  typedef std::variant<bool, char32_t, std::string, float, double, int8_t,
                       int16_t, int32_t, int64_t, uint8_t, uint16_t, uint32_t,
                       uint64_t>
      Value;

  bool TryInsert(std::string name, Value &value) {
    return table_.try_emplace(name, value).second;
  }
  void Clear() {
    table_.clear();
  }
  std::map<std::string, Value> table_;

  friend std::ostream &operator<<(std::ostream &os, const SymbolTable &value);
};

}  // namespace td
