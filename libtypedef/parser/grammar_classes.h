#ifndef PARSER_GRAMMAR_CLASSES_H__
#define PARSER_GRAMMAR_CLASSES_H__

#include <string>

namespace TypedefParser {
class FieldBlockContext;
}

namespace td {

class FieldBlock {
 public:
  FieldBlock() : ctx_(nullptr) {}
  void Set(TypedefParser::FieldBlockContext* ctx) { ctx_ = ctx; }

 private:
  TypedefParser::FieldBlockContext* ctx_;
};

}  // namespace td

#endif  // PARSER_GRAMMAR_CLASSES_H__
