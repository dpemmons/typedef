
    #include "TypedefLexerBase.h"


// Generated from ./src/lib/grammar/TypedefLexer.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TypedefLexer : public TypedefLexerBase {
public:
  enum {
    KW_ARRAY = 1, KW_AS = 2, KW_ENUM = 3, KW_FALSE = 4, KW_FN = 5, KW_IMPL = 6, 
    KW_MESSAGE = 7, KW_MODULE = 8, KW_STRUCT = 9, KW_TRUE = 10, KW_TYPE = 11, 
    KW_TYPEDEF = 12, KW_USE = 13, KW_VARIANT = 14, KW_VECTOR = 15, KW_MAP = 16, 
    KW_AND = 17, KW_IN = 18, KW_LET = 19, KW_NOT = 20, KW_OR = 21, KW_SIZEOF = 22, 
    KW_THIS = 23, KW_TRAIT = 24, KW_WHERE = 25, KW_XOR = 26, KW_BREAK = 27, 
    KW_CONTINUE = 28, KW_DEFAULT = 29, KW_DO = 30, KW_ELSE = 31, KW_FOR = 32, 
    KW_GOTO = 33, KW_IF = 34, KW_LOOP = 35, KW_MATCH = 36, KW_MOVE = 37, 
    KW_RETURN = 38, KW_TRY = 39, KW_WHILE = 40, KW_YIELD = 41, KW_ABSTRACT = 42, 
    KW_AUTO = 43, KW_CONST = 44, KW_DOUBLE = 45, KW_EXTERN = 46, KW_FINAL = 47, 
    KW_FLOAT = 48, KW_INT = 49, KW_LONG = 50, KW_MACRO = 51, KW_MUT = 52, 
    KW_OVERRIDE = 53, KW_PRIVATE = 54, KW_PUB = 55, KW_REF = 56, KW_SELFTYPE = 57, 
    KW_SELFVALUE = 58, KW_SIGNED = 59, KW_STATIC = 60, KW_SUPER = 61, KW_SWITCH = 62, 
    KW_TYPEOF = 63, KW_UNION = 64, KW_UNSAFE = 65, KW_UNSIGNED = 66, KW_UNSIZED = 67, 
    KW_VIRTUAL = 68, KW_VOID = 69, KW_VOLATILE = 70, KW_BOOL = 71, KW_CHAR = 72, 
    KW_STRING = 73, KW_F32 = 74, KW_F64 = 75, KW_U8 = 76, KW_U16 = 77, KW_U32 = 78, 
    KW_U64 = 79, KW_I8 = 80, KW_I16 = 81, KW_I32 = 82, KW_I64 = 83, NON_KEYWORD_IDENTIFIER = 84, 
    LINE_COMMENT = 85, BLOCK_COMMENT = 86, INNER_LINE_DOC = 87, INNER_BLOCK_DOC = 88, 
    OUTER_LINE_DOC = 89, OUTER_BLOCK_DOC = 90, BLOCK_COMMENT_OR_DOC = 91, 
    SHEBANG = 92, WS = 93, CHAR_LITERAL = 94, STRING_LITERAL = 95, RAW_STRING_LITERAL = 96, 
    DEC_DIGITS = 97, DEC_DIGITS_UNDERSCORE = 98, HEX_DIGITS = 99, HEX_DIGITS_UNDERSCORE = 100, 
    OCT_DIGITS = 101, OCT_DIGITS_UNDERSCORE = 102, BIN_DIGITS = 103, BIN_DIGITS_UNDERSCORE = 104, 
    FLOAT_LITERAL = 105, OCT_DIGIT = 106, DEC_DIGIT = 107, HEX_DIGIT = 108, 
    HEX_PREFIX = 109, OCT_PREFIX = 110, BIN_PREFIX = 111, RAW_ESCAPE = 112, 
    PLUS = 113, MINUS = 114, STAR = 115, SLASH = 116, PERCENT = 117, CARET = 118, 
    NOT = 119, AND = 120, OR = 121, ANDAND = 122, OROR = 123, PLUSEQ = 124, 
    MINUSEQ = 125, STAREQ = 126, SLASHEQ = 127, PERCENTEQ = 128, CARETEQ = 129, 
    ANDEQ = 130, OREQ = 131, SHLEQ = 132, SHREQ = 133, EQ = 134, EQEQ = 135, 
    NE = 136, GT = 137, LT = 138, GE = 139, LE = 140, AT = 141, UNDERSCORE = 142, 
    DOT = 143, DOTDOT = 144, DOTDOTDOT = 145, COMMA = 146, SEMI = 147, COLON = 148, 
    PATHSEP = 149, RARROW = 150, FATARROW = 151, POUND = 152, DOLLAR = 153, 
    QUESTION = 154, LBRACE = 155, RBRACE = 156, LBRACK = 157, RBRACK = 158, 
    LPAREN = 159, RPAREN = 160
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

