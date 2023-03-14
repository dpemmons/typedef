#pragma once

#include <stack>

#include "antlr4-runtime.h"

class TypedefLexerBase : public antlr4::Lexer {
 public:
  TypedefLexerBase(antlr4::CharStream *input);

  // Overrides default behavior to keeps track of the previous token.
  virtual std::unique_ptr<antlr4::Token> nextToken() override;

  bool SOF();
  bool floatDotPossible();
  bool floatLiteralPossible();
  
 private:
    size_t previousTokenType_;  // lt2
    size_t currentTokenType_; // lt1
};