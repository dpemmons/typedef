
// Generated from ./Typedef.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TypedefLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    BOOL = 8, BYTE = 9, FLOAT32 = 10, FLOAT64 = 11, INT8 = 12, INT16 = 13, 
    INT32 = 14, INT64 = 15, UINT8 = 16, UINT16 = 17, UINT32 = 18, UINT64 = 19, 
    FLOAT16 = 20, BFLAOT16 = 21, DEFAULT = 22, ENUM = 23, EXPORTS = 24, 
    EXTENDS = 25, IMPLEMENTS = 26, INTERFACE = 27, MESSAGE = 28, MODULE = 29, 
    PACKAGE = 30, SEMVER = 31, DECIMAL_LITERAL = 32, QUALIFIED_DECIMAL_LITERAL = 33, 
    UNQUALIFIED_DECIMAL_LITERAL = 34, HEX_LITERAL = 35, OCT_LITERAL = 36, 
    BINARY_LITERAL = 37, FLOAT_LITERAL = 38, HEX_FLOAT_LITERAL = 39, BOOL_LITERAL = 40, 
    CHAR_LITERAL = 41, STRING_LITERAL = 42, TEXT_BLOCK = 43, LPAREN = 44, 
    RPAREN = 45, LBRACE = 46, RBRACE = 47, LBRACK = 48, RBRACK = 49, SEMI = 50, 
    COLON = 51, COMMA = 52, DOT = 53, EQ = 54, AT = 55, WS = 56, COMMENT = 57, 
    LINE_COMMENT = 58, IDENTIFIER = 59
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

