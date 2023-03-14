
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
    KW_AUTO = 38, KW_CHAR = 39, KW_CONST = 40, KW_DOUBLE = 41, KW_EXTERN = 42, 
    KW_FINAL = 43, KW_FLOAT = 44, KW_INT = 45, KW_LONG = 46, KW_MACRO = 47, 
    KW_MUT = 48, KW_OVERRIDE = 49, KW_PRIVATE = 50, KW_PUB = 51, KW_REF = 52, 
    KW_SELFTYPE = 53, KW_SELFVALUE = 54, KW_SIGNED = 55, KW_STATIC = 56, 
    KW_SUPER = 57, KW_SWITCH = 58, KW_TYPEOF = 59, KW_UNION = 60, KW_UNSAFE = 61, 
    KW_UNSIGNED = 62, KW_UNSIZED = 63, KW_VIRTUAL = 64, KW_VOID = 65, KW_VOLATILE = 66, 
    NON_KEYWORD_IDENTIFIER = 67, RAW_IDENTIFIER = 68, LINE_COMMENT = 69, 
    BLOCK_COMMENT = 70, INNER_LINE_DOC = 71, INNER_BLOCK_DOC = 72, OUTER_LINE_DOC = 73, 
    OUTER_BLOCK_DOC = 74, BLOCK_COMMENT_OR_DOC = 75, SHEBANG = 76, WHITESPACE = 77, 
    NEWLINE = 78, CHAR_LITERAL = 79, STRING_LITERAL = 80, RAW_STRING_LITERAL = 81, 
    BYTE_LITERAL = 82, BYTE_STRING_LITERAL = 83, RAW_BYTE_STRING_LITERAL = 84, 
    INTEGER_LITERAL = 85, DEC_LITERAL = 86, HEX_LITERAL = 87, OCT_LITERAL = 88, 
    BIN_LITERAL = 89, FLOAT_LITERAL = 90, LIFETIME_OR_LABEL = 91, PLUS = 92, 
    MINUS = 93, STAR = 94, SLASH = 95, PERCENT = 96, CARET = 97, NOT = 98, 
    AND = 99, OR = 100, ANDAND = 101, OROR = 102, PLUSEQ = 103, MINUSEQ = 104, 
    STAREQ = 105, SLASHEQ = 106, PERCENTEQ = 107, CARETEQ = 108, ANDEQ = 109, 
    OREQ = 110, SHLEQ = 111, SHREQ = 112, EQ = 113, EQEQ = 114, NE = 115, 
    GT = 116, LT = 117, GE = 118, LE = 119, AT = 120, UNDERSCORE = 121, 
    DOT = 122, DOTDOT = 123, DOTDOTDOT = 124, COMMA = 125, SEMI = 126, COLON = 127, 
    PATHSEP = 128, RARROW = 129, FATARROW = 130, POUND = 131, DOLLAR = 132, 
    QUESTION = 133, LBRACE = 134, RBRACE = 135, LBRACK = 136, RBRACK = 137, 
    LPAREN = 138, RPAREN = 139
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

