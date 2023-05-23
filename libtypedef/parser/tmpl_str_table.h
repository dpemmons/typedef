#ifndef PARSER_TMPL_STR_TABLE_H__
#define PARSER_TMPL_STR_TABLE_H__

#include <optional>
#include <string>
#include <vector>

namespace td {

class TmplStrTable {
 public:
  TmplStrTable() {}
  ~TmplStrTable() {}

  struct Replacement;
  struct IfBlock;
  struct ForBlock;
  struct Item {
    std::optional<std::string> text;
    std::optional<Replacement> replacement;
    std::optional<IfBlock> if_block;
    std::optional<ForBlock> for_block;
  };
  struct Replacement {};
  struct IfBlock {};
  struct ForBlock {};

 protected:
  std::vector<Item> items_;
};

};  // namespace td

#endif  // PARSER_TMPL_STR_TABLE_H__
