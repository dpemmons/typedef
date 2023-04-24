#pragma once

#include <stdint.h>

#include <map>
#include <memory>
#include <optional>
#include <ostream>
#include <string>
#include <type_traits>
#include <utility>
#include <variant>

namespace td {

using namespace std;

struct Struct;

class SymbolTable {
 public:
  typedef variant<optional<bool>,      // bool
                  optional<char32_t>,  // char
                  optional<string>,    // str
                  optional<float>,     // f32
                  optional<double>,    // f64
                  optional<int8_t>,    // i8
                  optional<int16_t>,   // i16
                  optional<int32_t>,   // i32
                  optional<int64_t>,   // i64
                  optional<uint8_t>,   // u8
                  optional<uint16_t>,  // u16
                  optional<uint32_t>,  // u32
                  optional<uint64_t>,  // u64
                  shared_ptr<Struct>   // struct
                  >
      Value;
  typedef pair<string, Value> Symbol;

  SymbolTable() {}
  ~SymbolTable() {}

  bool TryInsert(string name, Value &value) {
    return table_.try_emplace(name, value).second;
  }
  bool TryInsert(Symbol &symbol) { return table_.insert(symbol).second; }
  // bool TryInsert(string &name, shared_ptr<Struct> value) {
  //   return table_.try_emplace(name, value).second;
  // }
  void Clear() { table_.clear(); }

  friend ostream &operator<<(ostream &os, const SymbolTable &value);
  bool HasSymbol(string& id) {
    return table_.count(id) > 0;
  }
  optional<Value> Get(string& id) {
    if (HasSymbol(id)) {
      return table_.find(id)->second;
    }
    return nullopt;
  } 

  map<string, Value> table_;
};

class Struct {
 public:
  bool TryInsert(SymbolTable::Symbol &symbol) { return table.TryInsert(symbol); }

  friend ostream &operator<<(ostream &os, const Struct &s);

  SymbolTable table;
};

}  // namespace td
