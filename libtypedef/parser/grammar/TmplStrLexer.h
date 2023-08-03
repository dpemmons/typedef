
// Generated from ./libtypedef/parser/grammar/TmplStrLexer.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TmplStrLexer : public antlr4::Lexer {
public:
  enum {
    OPEN = 1, TEXT = 2, CLOSE = 3, SLASH = 4, COMMA = 5, LPAREN = 6, RPAREN = 7, 
    PATHSEP = 8, KW_FOR = 9, KW_IN = 10, KW_IF = 11, KW_ELSE = 12, NON_KEYWORD_IDENTIFIER = 13, 
    RAW_ESCAPE = 14, WS = 15
  };

  enum {
    ISLAND = 1
  };

  TmplStrLexer(antlr4::CharStream *input);
  ~TmplStrLexer();

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

