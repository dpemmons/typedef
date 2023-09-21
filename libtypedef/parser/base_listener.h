#ifndef PARSER_BASE_LISTENER_H__
#define PARSER_BASE_LISTENER_H__

#include <antlr4/antlr4-runtime.h>

#include "libtypedef/parser/grammar/TypedefLexer.h"
#include "libtypedef/parser/grammar/TypedefParser.h"
#include "libtypedef/parser/grammar/TypedefParserBaseListener.h"
#include "libtypedef/parser/parser_error_info.h"

namespace td {

class BaseListener : public TypedefParserBaseListener {
 public:
  BaseListener(std::vector<ParserErrorInfo> &errors_list)
      : errors_list_(errors_list) {}

 protected:
  void AddError(antlr4::ParserRuleContext *ctx, ParserErrorInfo::Type type,
                std::string msg = "");
  void AddError(TypedefParser::IdentifierContext *identifier,
                ParserErrorInfo::Type type);
  void AddError(antlr4::Token *token, ParserErrorInfo::Type type,
                std::string msg = "");
  std::vector<ParserErrorInfo> &errors_list_;
};

}  // namespace td

#endif  // PARSER_BASE_LISTENER_H__
