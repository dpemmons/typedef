#ifndef SRC_LIB_TYPEDEF_PARSER_CONTEXT_H_
#define SRC_LIB_TYPEDEF_PARSER_CONTEXT_H_

#include <string>
#include <vector>

#include "antlr4/antlr4-runtime.h"
#include "grammar/TypedefLexer.h"
#include "grammar/TypedefParser.h"
#include "grammar/TypedefParserBaseListener.h"
#include "typedef_parser_interface.h"

namespace td {

class TypedefParserContext : public TypedefParserInterface {
 public:
  TypedefParserContext();
  virtual ~TypedefParserContext();

  virtual void Parse(const std::string &text);
  virtual void Parse(std::istream &text);

  virtual const std::vector<ParserErrorInfo> &GetErrors() const {
    return errors_;
  }

  virtual LanguageVersion GetLanguageVersion();
  virtual QualifiedIdentifier GetModule();
  virtual std::vector<td::Import> GetImports();

 private:

  antlr4::ANTLRInputStream input_;
  TypedefLexer lexer_;
  antlr4::CommonTokenStream tokens_;
  TypedefParser parser_;
  LexerErrorListener lexerErrorListener_;
  ParserErrorListener parserErrorListener_;

  TypedefParser::CompilationUnitContext *compilation_unit_ = nullptr;

  std::vector<ParserErrorInfo> errors_;
};

}  // namespace td

#endif  // SRC_LIB_TYPEDEF_PARSER_CONTEXT_H_