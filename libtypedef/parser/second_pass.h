#ifndef PARSER_SECOND_PASS_H__
#define PARSER_SECOND_PASS_H__

#include <antlr4/antlr4-runtime.h>

#include <memory>
#include <ostream>
#include <string>
#include <vector>

#include "libtypedef/parser/base_listener.h"
#include "libtypedef/parser/first_pass.h"
#include "libtypedef/parser/grammar/TypedefLexer.h"
#include "libtypedef/parser/grammar/TypedefParser.h"
#include "libtypedef/parser/grammar/TypedefParserBaseListener.h"
#include "libtypedef/parser/parser_error_info.h"

namespace td {

class SecondPassListener : public BaseListener {
 public:
  SecondPassListener(std::vector<ParserErrorInfo>& errors_list)
      : BaseListener(errors_list) {}
  void enterTmplFunctionCall(
      TypedefParser::TmplFunctionCallContext* ctx) override;

 private:
  bool CheckMatch(TypedefParser::PrimitiveTypeIdentifierContext* expected,
                  TypedefParser::PrimitiveTypeIdentifierContext* actual);
  bool CheckMatch(TypedefParser::TypeAnnotationContext* expected,
                  TypedefParser::TypeAnnotationContext* actual_a,
                  TypedefParser::TypeDefinitionContext* actual_b);

  void PrintTypeAnnotation(std::ostream& os,
                           TypedefParser::TypeAnnotationContext* ctx);

  void PrintTypeDefinition(std::ostream& os,
                           TypedefParser::TypeDefinitionContext* ctx);
};

}  // namespace td

#endif  // PARSER_SECOND_PASS_H__
