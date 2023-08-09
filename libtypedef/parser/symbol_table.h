#pragma once

#include <cassert>
#include <cstdint>
#include <filesystem>
#include <map>
#include <memory>
#include <optional>
#include <ostream>
#include <string>
#include <type_traits>
#include <utility>
#include <variant>

#include "tmpl_str_table.h"

namespace td {

using namespace std;

class Struct;
class Variant;
class Vector;
class Map;
class TmplStr;

struct SymbolRef {
  SymbolRef(const string &str) : id(str) {}
  string id;
};

class Identifier {
 public:
  static Identifier TypeIdentifier(string const &id) {
    return Identifier(id, Type::TYPE);
  }
  static Identifier AnonymousTypeIdentifier() { return Identifier(Type::TYPE); }
  static Identifier ValueIdentifier(string const &id) {
    return Identifier(id, Type::VALUE);
  }

  string const &id() const { return id_; }
  bool IsType() const { return type_ == Type::TYPE; }
  bool IsValue() const { return type_ == Type::VALUE; }
  bool IsAnonymous() const { return id_.size() == 0; }

  Identifier AsTypeIdentifier() const { return Identifier(id_, Type::TYPE); }
  Identifier AsValueIdentifier() const { return Identifier(id_, Type::VALUE); }

  bool operator<(const Identifier &o) const {
    if (type_ != o.type_) {
      return static_cast<int>(type_) < static_cast<int>(o.type_);
    }
    return id_ < o.id_;
  }

  friend ostream &operator<<(ostream &os, const Identifier &value);

 private:
  enum class Type {
    UNKNOWN = 0,
    TYPE = 1,
    VALUE = 2,
  } type_;
  string id_;

  Identifier(string const &id, Type type) : type_(type), id_(id) {}
  // Anonymous symbol
  Identifier(Type type) : type_(type), id_() {}
  Identifier() = delete;
};

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
                  // TODO these can probably be unique_ptr?
                  shared_ptr<Struct>,   // struct
                  shared_ptr<Variant>,  // variant
                  shared_ptr<Vector>,   // vector
                  shared_ptr<Map>,      // map
                  shared_ptr<TmplStr>,  // str_template
                  SymbolRef             // reference to some other symbol.
                  >
      Value;
  using Symbol = pair<Identifier, Value>;

  SymbolTable() {}
  ~SymbolTable() {}

  bool TryInsert(Identifier const &identifier, Value const &value) {
    if (IsIdentifierUsed(identifier)) {
      return false;
    }
    Symbol s(identifier, value);
    return table_.insert(s).second;
  }
  bool TryInsert(Symbol const &symbol) {
    if (IsIdentifierUsed(symbol.first)) {
      return false;
    }
    return table_.insert(symbol).second;
  }

  // Match both Type and Value identifiers.
  bool IsIdentifierUsed(Identifier const &identifier) {
    return table_.count(identifier.AsTypeIdentifier()) ||
           table_.count(identifier.AsValueIdentifier());
  }

  bool HasTypeIdentifier(string const &identifier) {
    return table_.count(Identifier::TypeIdentifier(identifier));
  }

  optional<Value> Get(Identifier const &identifier) {
    if (table_.count(identifier)) {
      return table_.find(identifier)->second;
    }
    return nullopt;
  }

  void Clear() { table_.clear(); }

  friend ostream &operator<<(ostream &os, const SymbolTable &value);

  void PopulatePaths(const std::filesystem::path &current_path);

  // TODO populate this everywhere so SymRefs can know the fully
  // qualified name of the thing they point at.
  std::filesystem::path path_;
  using Table = map<Identifier, Value>;
  Table table_;
};

class Struct {
 public:
  bool TryInsert(SymbolTable::Symbol &symbol) {
    return table.TryInsert(symbol);
  }

  friend ostream &operator<<(ostream &os, const Struct &s);

  SymbolTable table;
};

class Variant {
 public:
  bool TryInsert(SymbolTable::Symbol &symbol) {
    return table.TryInsert(symbol);
  }

  friend ostream &operator<<(ostream &os, const Variant &s);

  SymbolTable table;
};

class Vector {
 public:
  Vector(SymbolTable::Value type) : type(type){};
  friend ostream &operator<<(ostream &os, const Vector &s);

  SymbolTable::Value type;
};

class Map {
 public:
  Map(SymbolTable::Value key_type, SymbolTable::Value value_type)
      : key_type(key_type), value_type(value_type){};
  friend ostream &operator<<(ostream &os, const Map &s);

  SymbolTable::Value key_type;
  SymbolTable::Value value_type;
};

class TmplStr {
 public:
  TmplStr() {}
  friend ostream &operator<<(ostream &os, const TmplStr &s);

  vector<SymbolTable::Symbol> args;
  SymbolTable::Value str;
  shared_ptr<TmplStrTable> table;
};

}  // namespace td
