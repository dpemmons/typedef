#ifndef PARSER_SYMBOL_PATH_H__
#define PARSER_SYMBOL_PATH_H__

#include <memory>
#include <sstream>
#include <string>
#include <vector>

#define FMT_HEADER_ONLY
#include <fmt/core.h>
#include <fmt/ostream.h>

namespace td {

class SymbolPath : public std::vector<std::shared_ptr<std::string>> {
 public:
  SymbolPath(bool is_root) : is_root_(is_root) {}

  // Does the path begin with '::' ?
  void SetIsRoot(bool is_root) { is_root_ = is_root; }
  bool IsRoot() const { return is_root_; }

  std::string ToString(const std::string& delineator = "::",
                       bool leading_delineator = true) {
    if (size() == 0) {
      return std::string();
    }

    std::stringstream ss;
    int i = 0;
    if (!leading_delineator) {
      fmt::print(ss, "{}", *at(i));
      i = 1;
    }
    for (; i < size(); i++) {
      fmt::print(ss, "{}{}", delineator, *at(i));
    }
    return ss.str();
  }

 private:
  bool is_root_;
};

}  // namespace td

#endif  // PARSER_SYMBOL_PATH_H__
