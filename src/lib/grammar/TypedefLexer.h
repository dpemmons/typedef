
    #include "TypedefLexerBase.h"


// Generated from ./src/lib/grammar/TypedefLexer.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TypedefLexer : public TypedefLexerBase {
public:
  enum {
    KW_ARRAY = 1, KW_AS = 2, KW_ENUM = 3, KW_FALSE = 4, KW_FN = 5, KW_IMPL = 6, 
    KW_MESSAGE = 7, KW_MODULE = 8, KW_STRUCT = 9, KW_TRUE = 10, KW_TYPE = 11, 
    KW_TYPEDEF = 12, KW_USE = 13, KW_VARIANT = 14, KW_VECTOR = 15, KW_AND = 16, 
    KW_IN = 17, KW_LET = 18, KW_NOT = 19, KW_OR = 20, KW_SIZEOF = 21, KW_THIS = 22, 
    KW_TRAIT = 23, KW_WHERE = 24, KW_XOR = 25, KW_BREAK = 26, KW_CONTINUE = 27, 
    KW_DEFAULT = 28, KW_DO = 29, KW_ELSE = 30, KW_FOR = 31, KW_GOTO = 32, 
    KW_IF = 33, KW_LOOP = 34, KW_MATCH = 35, KW_MOVE = 36, KW_RETURN = 37, 
    KW_TRY = 38, KW_WHILE = 39, KW_YIELD = 40, KW_ABSTRACT = 41, KW_AUTO = 42, 
    KW_CONST = 43, KW_DOUBLE = 44, KW_EXTERN = 45, KW_FINAL = 46, KW_FLOAT = 47, 
    KW_INT = 48, KW_LONG = 49, KW_MACRO = 50, KW_MUT = 51, KW_OVERRIDE = 52, 
    KW_PRIVATE = 53, KW_PUB = 54, KW_REF = 55, KW_SELFTYPE = 56, KW_SELFVALUE = 57, 
    KW_SIGNED = 58, KW_STATIC = 59, KW_SUPER = 60, KW_SWITCH = 61, KW_TYPEOF = 62, 
    KW_UNION = 63, KW_UNSAFE = 64, KW_UNSIGNED = 65, KW_UNSIZED = 66, KW_VIRTUAL = 67, 
    KW_VOID = 68, KW_VOLATILE = 69, KW_BOOL = 70, KW_CHAR = 71, KW_STRING = 72, 
    KW_F32 = 73, KW_F64 = 74, KW_U8 = 75, KW_U16 = 76, KW_U32 = 77, KW_U64 = 78, 
    KW_I8 = 79, KW_I16 = 80, KW_I32 = 81, KW_I64 = 82, NON_KEYWORD_IDENTIFIER = 83, 
    LINE_COMMENT = 84, BLOCK_COMMENT = 85, INNER_LINE_DOC = 86, INNER_BLOCK_DOC = 87, 
    OUTER_LINE_DOC = 88, OUTER_BLOCK_DOC = 89, BLOCK_COMMENT_OR_DOC = 90, 
    SHEBANG = 91, WS = 92, CHAR_LITERAL = 93, STRING_LITERAL = 94, RAW_STRING_LITERAL = 95, 
    BYTE_LITERAL = 96, BYTE_STRING_LITERAL = 97, RAW_BYTE_STRING_LITERAL = 98, 
    DEC_DIGITS = 99, DEC_DIGITS_UNDERSCORE = 100, HEX_DIGITS = 101, HEX_DIGITS_UNDERSCORE = 102, 
    OCT_DIGITS = 103, OCT_DIGITS_UNDERSCORE = 104, BIN_DIGITS = 105, BIN_DIGITS_UNDERSCORE = 106, 
    FLOAT_LITERAL = 107, OCT_DIGIT = 108, DEC_DIGIT = 109, HEX_DIGIT = 110, 
    HEX_PREFIX = 111, OCT_PREFIX = 112, BIN_PREFIX = 113, LIFETIME_OR_LABEL = 114, 
    RAW_ESCAPE = 115, PLUS = 116, MINUS = 117, STAR = 118, SLASH = 119, 
    PERCENT = 120, CARET = 121, NOT = 122, AND = 123, OR = 124, ANDAND = 125, 
    OROR = 126, PLUSEQ = 127, MINUSEQ = 128, STAREQ = 129, SLASHEQ = 130, 
    PERCENTEQ = 131, CARETEQ = 132, ANDEQ = 133, OREQ = 134, SHLEQ = 135, 
    SHREQ = 136, EQ = 137, EQEQ = 138, NE = 139, GT = 140, LT = 141, GE = 142, 
    LE = 143, AT = 144, UNDERSCORE = 145, DOT = 146, DOTDOT = 147, DOTDOTDOT = 148, 
    COMMA = 149, SEMI = 150, COLON = 151, PATHSEP = 152, RARROW = 153, FATARROW = 154, 
    POUND = 155, DOLLAR = 156, QUESTION = 157, LBRACE = 158, RBRACE = 159, 
    LBRACK = 160, RBRACK = 161, LPAREN = 162, RPAREN = 163
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

