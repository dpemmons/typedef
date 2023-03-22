
    #include "TypedefLexerBase.h"


// Generated from ./src/lib/grammar/TypedefLexer.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TypedefLexer : public TypedefLexerBase {
public:
  enum {
    KW_AS = 1, KW_ENUM = 2, KW_FALSE = 3, KW_FN = 4, KW_IMPL = 5, KW_MODULE = 6, 
    KW_STRUCT = 7, KW_TRUE = 8, KW_TYPE = 9, KW_TYPEDEF = 10, KW_USE = 11, 
    KW_AND = 12, KW_IN = 13, KW_LET = 14, KW_NOT = 15, KW_OR = 16, KW_SIZEOF = 17, 
    KW_THIS = 18, KW_TRAIT = 19, KW_WHERE = 20, KW_XOR = 21, KW_BREAK = 22, 
    KW_CONTINUE = 23, KW_DEFAULT = 24, KW_DO = 25, KW_ELSE = 26, KW_FOR = 27, 
    KW_GOTO = 28, KW_IF = 29, KW_LOOP = 30, KW_MATCH = 31, KW_MOVE = 32, 
    KW_RETURN = 33, KW_TRY = 34, KW_WHILE = 35, KW_YIELD = 36, KW_ABSTRACT = 37, 
    KW_AUTO = 38, KW_CONST = 39, KW_DOUBLE = 40, KW_EXTERN = 41, KW_FINAL = 42, 
    KW_FLOAT = 43, KW_INT = 44, KW_LONG = 45, KW_MACRO = 46, KW_MUT = 47, 
    KW_OVERRIDE = 48, KW_PRIVATE = 49, KW_PUB = 50, KW_REF = 51, KW_SELFTYPE = 52, 
    KW_SELFVALUE = 53, KW_SIGNED = 54, KW_STATIC = 55, KW_SUPER = 56, KW_SWITCH = 57, 
    KW_TYPEOF = 58, KW_UNION = 59, KW_UNSAFE = 60, KW_UNSIGNED = 61, KW_UNSIZED = 62, 
    KW_VIRTUAL = 63, KW_VOID = 64, KW_VOLATILE = 65, NON_KEYWORD_IDENTIFIER = 66, 
    RAW_IDENTIFIER = 67, LINE_COMMENT = 68, BLOCK_COMMENT = 69, INNER_LINE_DOC = 70, 
    INNER_BLOCK_DOC = 71, OUTER_LINE_DOC = 72, OUTER_BLOCK_DOC = 73, BLOCK_COMMENT_OR_DOC = 74, 
    SHEBANG = 75, WHITESPACE = 76, NEWLINE = 77, CHAR_LITERAL = 78, STRING_LITERAL = 79, 
    RAW_STRING_LITERAL = 80, BYTE_LITERAL = 81, BYTE_STRING_LITERAL = 82, 
    RAW_BYTE_STRING_LITERAL = 83, INTEGER_LITERAL = 84, DEC_LITERAL = 85, 
    HEX_LITERAL = 86, OCT_LITERAL = 87, BIN_LITERAL = 88, FLOAT_LITERAL = 89, 
    LIFETIME_OR_LABEL = 90, PLUS = 91, MINUS = 92, STAR = 93, SLASH = 94, 
    PERCENT = 95, CARET = 96, NOT = 97, AND = 98, OR = 99, ANDAND = 100, 
    OROR = 101, PLUSEQ = 102, MINUSEQ = 103, STAREQ = 104, SLASHEQ = 105, 
    PERCENTEQ = 106, CARETEQ = 107, ANDEQ = 108, OREQ = 109, SHLEQ = 110, 
    SHREQ = 111, EQ = 112, EQEQ = 113, NE = 114, GT = 115, LT = 116, GE = 117, 
    LE = 118, AT = 119, UNDERSCORE = 120, DOT = 121, DOTDOT = 122, DOTDOTDOT = 123, 
    COMMA = 124, SEMI = 125, COLON = 126, PATHSEP = 127, RARROW = 128, FATARROW = 129, 
    POUND = 130, DOLLAR = 131, QUESTION = 132, LBRACE = 133, RBRACE = 134, 
    LBRACK = 135, RBRACK = 136, LPAREN = 137, RPAREN = 138
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

  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

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
  bool SHEBANGSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FLOAT_LITERALSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

