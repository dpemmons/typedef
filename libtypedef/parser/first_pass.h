#ifndef PARSER_FIRST_PASS_H__
#define PARSER_FIRST_PASS_H__

#include <antlr4/antlr4-runtime.h>

#include <memory>
#include <string>
#include <vector>

#include "libtypedef/parser/grammar/TypedefLexer.h"
#include "libtypedef/parser/grammar/TypedefParser.h"
#include "libtypedef/parser/grammar/TypedefParserBaseListener.h"
#include "libtypedef/parser/parser_error_info.h"

class FirstPassListener : public TypedefParserBaseListener {
 public:
  FirstPassListener(std::vector<td::ParserErrorInfo> &errors_list)
      : errors_list_(errors_list) {}

 private:
  std::vector<td::ParserErrorInfo> &errors_list_;
};

#endif  // PARSER_FIRST_PASS_H__
