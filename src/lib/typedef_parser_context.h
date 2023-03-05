#pragma once

#include <string>
#include <vector>

#include "antlr4-runtime.h"
#include "gen/TypedefLexer.h"
#include "gen/TypedefParser.h"
#include "gen/TypedefParserBaseListener.h"
#include "typedef_parser_interface.h"

namespace td {

class TypedefParserContext : public TypedefParserInterface {
 public:
  TypedefParserContext();
  virtual ~TypedefParserContext();

  virtual void Parse(std::string s);
  virtual void Parse(const std::string &s);
  virtual void Parse(std::istream &input);

  virtual const std::vector<ParserErrorInfo> &GetErrors() const;

  virtual std::string GetLanguageVersion() const;
  virtual std::vector<std::string> GetImports() const;

 private:
  class LexerErrorListener : public antlr4::BaseErrorListener {
   public:
    LexerErrorListener(TypedefParserContext *owner) : owner_(owner) {}

    virtual void syntaxError(antlr4::Recognizer *recognizer,
                             antlr4::Token *offendingSymbol, size_t line,
                             size_t charPositionInLine, const std::string &msg,
                             std::exception_ptr e) override;

   private:
    TypedefParserContext *owner_;
  };

  class ParserErrorListener : public antlr4::BaseErrorListener {
   public:
    ParserErrorListener(TypedefParserContext *owner) : owner_(owner) {}

    virtual void syntaxError(antlr4::Recognizer *recognizer,
                             antlr4::Token *offendingSymbol, size_t line,
                             size_t charPositionInLine, const std::string &msg,
                             std::exception_ptr e) override;

   private:
    TypedefParserContext *owner_;
  };

  antlr4::ANTLRInputStream input_;
  TypedefLexer lexer_;
  antlr4::CommonTokenStream tokens_;
  TypedefParser parser_;
  LexerErrorListener lexerErrorListener_;
  ParserErrorListener parserErrorListener_;

  std::vector<ParserErrorInfo> errors_;
};

}  // namespace td