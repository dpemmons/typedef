#ifndef PARSER_SYMBOL_PATH_H__
#define PARSER_SYMBOL_PATH_H__

#include <memory>
#include <string>
#include <vector>

namespace td {

class SymbolPath : public std::vector<std::shared_ptr<std::string>> {
 public:
  SymbolPath(bool is_root) : is_root_(is_root) {}

  // Does the path begin with '::' ?
  void SetIsRoot(bool is_root) { is_root_ = is_root; }
  bool IsRoot() const { return is_root_; }

 private:
  bool is_root_;
};

}  // namespace td

#endif  // PARSER_SYMBOL_PATH_H__
