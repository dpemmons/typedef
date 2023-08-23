
    #include "TypedefLexerBase.h"


// Generated from ./libtypedef/parser/grammar/TypedefLexer.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TypedefLexer : public TypedefLexerBase {
public:
  enum {
    KW_ARRAY = 1, KW_AS = 2, KW_ENUM = 3, KW_FALSE = 4, KW_FN = 5, KW_IMPL = 6, 
    KW_MESSAGE = 7, KW_MODULE = 8, KW_STRUCT = 9, KW_TRUE = 10, KW_TYPE = 11, 
    KW_TYPEDEF = 12, KW_USE = 13, KW_VARIANT = 14, KW_VECTOR = 15, KW_MAP = 16, 
    KW_TEMPLATESTRING = 17, KW_AND = 18, KW_IN = 19, KW_LET = 20, KW_NOT = 21, 
    KW_OR = 22, KW_SIZEOF = 23, KW_THIS = 24, KW_TRAIT = 25, KW_WHERE = 26, 
    KW_XOR = 27, KW_BREAK = 28, KW_CONTINUE = 29, KW_DEFAULT = 30, KW_DO = 31, 
    KW_ELSE = 32, KW_FOR = 33, KW_GOTO = 34, KW_IF = 35, KW_LOOP = 36, KW_MATCH = 37, 
    KW_MOVE = 38, KW_RETURN = 39, KW_TRY = 40, KW_WHILE = 41, KW_YIELD = 42, 
    KW_ABSTRACT = 43, KW_AUTO = 44, KW_CONST = 45, KW_DOUBLE = 46, KW_EXTERN = 47, 
    KW_FINAL = 48, KW_FLOAT = 49, KW_INT = 50, KW_LONG = 51, KW_MACRO = 52, 
    KW_MUT = 53, KW_OVERRIDE = 54, KW_PRIVATE = 55, KW_PUB = 56, KW_REF = 57, 
    KW_SELFTYPE = 58, KW_SELFVALUE = 59, KW_SIGNED = 60, KW_STATIC = 61, 
    KW_SUPER = 62, KW_SWITCH = 63, KW_TYPEOF = 64, KW_UNION = 65, KW_UNSAFE = 66, 
    KW_UNSIGNED = 67, KW_UNSIZED = 68, KW_VIRTUAL = 69, KW_VOID = 70, KW_VOLATILE = 71, 
    KW_BOOL = 72, KW_CHAR = 73, KW_STRING = 74, KW_F32 = 75, KW_F64 = 76, 
    KW_U8 = 77, KW_U16 = 78, KW_U32 = 79, KW_U64 = 80, KW_I8 = 81, KW_I16 = 82, 
    KW_I32 = 83, KW_I64 = 84, KW_READ = 85, KW_READ2 = 86, KW_WRITE = 87, 
    KW_WRITE2 = 88, NON_KEYWORD_IDENTIFIER = 89, LINE_COMMENT = 90, BLOCK_COMMENT = 91, 
    INNER_LINE_DOC = 92, INNER_BLOCK_DOC = 93, OUTER_LINE_DOC = 94, OUTER_BLOCK_DOC = 95, 
    BLOCK_COMMENT_OR_DOC = 96, SHEBANG = 97, CHAR_LITERAL = 98, STRING_LITERAL = 99, 
    RAW_STRING_LITERAL = 100, DEC_DIGITS = 101, DEC_DIGITS_UNDERSCORE = 102, 
    HEX_DIGITS = 103, HEX_DIGITS_UNDERSCORE = 104, OCT_DIGITS = 105, OCT_DIGITS_UNDERSCORE = 106, 
    BIN_DIGITS = 107, BIN_DIGITS_UNDERSCORE = 108, FLOAT_LITERAL = 109, 
    OCT_DIGIT = 110, DEC_DIGIT = 111, HEX_DIGIT = 112, HEX_PREFIX = 113, 
    OCT_PREFIX = 114, BIN_PREFIX = 115, RAW_ESCAPE = 116, PLUS = 117, MINUS = 118, 
    STAR = 119, SLASH = 120, PERCENT = 121, CARET = 122, NOT = 123, AND = 124, 
    OR = 125, ANDAND = 126, OROR = 127, PLUSEQ = 128, MINUSEQ = 129, STAREQ = 130, 
    SLASHEQ = 131, PERCENTEQ = 132, CARETEQ = 133, ANDEQ = 134, OREQ = 135, 
    SHLEQ = 136, SHREQ = 137, EQ = 138, EQEQ = 139, NE = 140, GT = 141, 
    LT = 142, GE = 143, LE = 144, AT = 145, UNDERSCORE = 146, DOT = 147, 
    DOTDOT = 148, DOTDOTDOT = 149, COMMA = 150, SEMI = 151, COLON = 152, 
    PATHSEP = 153, RARROW = 154, FATARROW = 155, POUND = 156, DOLLAR = 157, 
    QUESTION = 158, LBRACE = 159, RBRACE = 160, LBRACK = 161, RBRACK = 162, 
    LPAREN = 163, RPAREN = 164, WS = 165
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

