#pragma once

#include <algorithm>
#include <string>
#include <vector>
#include <iosfwd>

namespace td {

class OutIdentifier {
 public:
  OutIdentifier() {}
  OutIdentifier(const char *str) { id_.emplace_back(std::string(str)); }
  OutIdentifier(std::string str) { id_.emplace_back(str); }
  bool IsSimple() const { return id_.size() == 1; }
  std::string GetSimple() const { return id_.back(); }

  friend std::ostream &operator<<(std::ostream &os, const OutIdentifier &value);

  bool operator==(OutIdentifier const &other) const;
  bool operator!=(OutIdentifier const &other) const;

 private:
  std::vector<std::string> id_;
};

}  // namespace td