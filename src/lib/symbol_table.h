#pragma once

#include <map>
#include <memory>
#include <optional>
#include <ostream>
#include <string>
#include <variant>

namespace td {

using namespace std;

class SymbolTable {
 public:
  SymbolTable() {}

  struct Struct;
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
  typedef pair<string, Value> Field;

  struct Struct {
    map<string, Value> table;
    friend ostream& operator<<(ostream& os, const Struct& s);
  };

  bool TryInsert(string name, Value &value) {
    return table_.try_emplace(name, value).second;
  }
  bool TryInsert(Field &field) { return table_.insert(field).second; }
  bool TryInsert(string &name, shared_ptr<Struct> value) {
    return table_.try_emplace(name, value).second;
  }
  void Clear() { table_.clear(); }
  map<string, Value> table_;

  friend ostream &operator<<(ostream &os, const SymbolTable &value);
};

}  // namespace td
