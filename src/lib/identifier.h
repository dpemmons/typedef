#pragma once

#include <algorithm>
#include <string>
#include <vector>

namespace td {

class Identifier {
 public:
  Identifier() {}
  Identifier(const char *str) { id_.emplace_back(std::string(str)); }
  Identifier(std::string str) { id_.emplace_back(str); }
  bool IsSimple() const { return id_.size() == 1; }
  std::string GetSimple() const { return id_.back(); }

  friend std::ostream &operator<<(std::ostream &os, const Identifier &value);

  bool operator==(Identifier const &other) const;
  bool operator!=(Identifier const &other) const;

 private:
  std::vector<std::string> id_;
};

}  // namespace td