
// Generated from ./TypedefLexer.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TypedefLexer : public antlr4::Lexer {
public:
  enum {
    BOOL = 1, BYTE = 2, FLOAT32 = 3, FLOAT64 = 4, INT8 = 5, INT16 = 6, INT32 = 7, 
    INT64 = 8, UINT8 = 9, UINT16 = 10, UINT32 = 11, UINT64 = 12, FLOAT16 = 13, 
    BFLAOT16 = 14, DEFAULT = 15, ENUM = 16, EXPORTS = 17, EXTENDS = 18, 
    IMPORT = 19, IMPLEMENTS = 20, INTERFACE = 21, MESSAGE = 22, MODULE = 23, 
    PACKAGE = 24, TRUE = 25, FALSE = 26, TYPEDEF = 27, AS = 28, SEMVER = 29, 
    DECIMAL_LITERAL = 30, QUALIFIED_DECIMAL_LITERAL = 31, UNQUALIFIED_DECIMAL_LITERAL = 32, 
    HEX_LITERAL = 33, OCT_LITERAL = 34, BINARY_LITERAL = 35, FLOAT_LITERAL = 36, 
    HEX_FLOAT_LITERAL = 37, BOOL_LITERAL = 38, CHAR_LITERAL = 39, STRING_LITERAL = 40, 
    TEXT_BLOCK = 41, LPAREN = 42, RPAREN = 43, LBRACE = 44, RBRACE = 45, 
    LBRACK = 46, RBRACK = 47, SEMI = 48, COLON = 49, COMMA = 50, DOT = 51, 
    EQ = 52, AT = 53, PS = 54, WS = 55, COMMENT = 56, LINE_COMMENT = 57, 
    IDENTIFIER = 58
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

