#pragma once

#include <string>
#include <vector>

namespace td {

class QualifiedIdentifier {
 public:
  QualifiedIdentifier() {}
  QualifiedIdentifier(const char* str) { id_.emplace_back(std::string(str)); }
  QualifiedIdentifier(std::string str) { id_.emplace_back(str); }
  bool IsSimple() const {
    return id_.size() == 1;
  }
  std::string GetSimple() const {
    return id_.back();
  }
 private:
  std::vector<std::string> id_;
};

}  // namespace td