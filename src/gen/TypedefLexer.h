
// Generated from ./Typedef.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TypedefLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    BOOL = 8, BYTE = 9, CHAR = 10, FLOAT16 = 11, FLOAT32 = 12, FLOAT64 = 13, 
    INT8 = 14, INT16 = 15, INT32 = 16, INT64 = 17, UINT8 = 18, UINT16 = 19, 
    UINT32 = 20, UINT64 = 21, DEFAULT = 22, ENUM = 23, EXPORTS = 24, EXTENDS = 25, 
    IMPLEMENTS = 26, INTERFACE = 27, MESSAGE = 28, MODULE = 29, PACKAGE = 30, 
    DECIMAL_LITERAL = 31, QUALIFIED_DECIMAL_LITERAL = 32, UNQUALIFIED_DECIMAL_LITERAL = 33, 
    HEX_LITERAL = 34, OCT_LITERAL = 35, BINARY_LITERAL = 36, FLOAT_LITERAL = 37, 
    HEX_FLOAT_LITERAL = 38, BOOL_LITERAL = 39, CHAR_LITERAL = 40, STRING_LITERAL = 41, 
    TEXT_BLOCK = 42, LPAREN = 43, RPAREN = 44, LBRACE = 45, RBRACE = 46, 
    LBRACK = 47, RBRACK = 48, SEMI = 49, COLON = 50, COMMA = 51, DOT = 52, 
    EQ = 53, AT = 54, WS = 55, COMMENT = 56, LINE_COMMENT = 57, IDENTIFIER = 58
  };

  TypedefLexer(antlr4::CharStream *input);
  ~TypedefLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

