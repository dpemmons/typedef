#ifndef PARSER_TMPL_STR_TABLE_H__
#define PARSER_TMPL_STR_TABLE_H__

#include <memory>
#include <string>
#include <vector>

namespace td {

class TmplStrTable {
 public:
  TmplStrTable() {}
  ~TmplStrTable() {}

  struct Insertion;
  using InsertionPtr = std::shared_ptr<Insertion>;
  struct FunctionCall;
  using FunctionCallPtr = std::shared_ptr<FunctionCall>;
  struct IfBlock;
  using IfBlockPtr = std::shared_ptr<IfBlock>;
  struct ForBlock;
  using ForBlockPtr = std::shared_ptr<ForBlock>;
  struct Item;
  using ItemPtr = std::shared_ptr<Item>;

  using StrPtr = std::shared_ptr<std::string>;

  struct Item {
    StrPtr text;
    InsertionPtr insertion;
    FunctionCallPtr function_call;
    IfBlockPtr if_block;
    ForBlockPtr for_block;
  };

  struct Insertion {
    StrPtr identifier;
  };

  struct FunctionCall {
    StrPtr identifier;
    std::vector<StrPtr> args;
  };

  struct ElseIfBlock {
    StrPtr conditional_identifier;
    std::vector<ItemPtr> body_items;
  };
  using ElseIfBlockPtr = std::shared_ptr<ElseIfBlock>;

  struct IfBlock {
    // Pseudo-code:
    //  if (conditional_identifier) {
    //    body_items;
    //  }
    StrPtr conditional_identifier;
    std::vector<ItemPtr> body_items;

    //  else if (else_ifs[0]) {
    //    else_ifs[0].body_items;
    //  }
    std::vector<ElseIfBlockPtr> else_ifs;

    //  else {
    //    else_body_items;
    //  }
    std::vector<ItemPtr> else_body_items;
  };

  struct ForBlock {
    // Pseudo-code:
    // for (loop_variable : iterable_identifier) {
    //   body_items;
    // }

    // identifier for the current element of the iterable in each iteration of
    // the loop
    StrPtr loop_variable;
    StrPtr loop_variable2;

    // the thing being iterated over
    StrPtr iterable_identifier;

    std::vector<ItemPtr> body_items;
  };

  std::vector<ItemPtr> items;
};

using TmplStrTablePtr = std::shared_ptr<TmplStrTable>;

};  // namespace td

#endif  // PARSER_TMPL_STR_TABLE_H__
