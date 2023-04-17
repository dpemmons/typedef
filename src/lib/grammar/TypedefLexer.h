
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
    DEC_DIGITS = 96, DEC_DIGITS_UNDERSCORE = 97, HEX_DIGITS = 98, HEX_DIGITS_UNDERSCORE = 99, 
    OCT_DIGITS = 100, OCT_DIGITS_UNDERSCORE = 101, BIN_DIGITS = 102, BIN_DIGITS_UNDERSCORE = 103, 
    FLOAT_LITERAL = 104, OCT_DIGIT = 105, DEC_DIGIT = 106, HEX_DIGIT = 107, 
    HEX_PREFIX = 108, OCT_PREFIX = 109, BIN_PREFIX = 110, RAW_ESCAPE = 111, 
    PLUS = 112, MINUS = 113, STAR = 114, SLASH = 115, PERCENT = 116, CARET = 117, 
    NOT = 118, AND = 119, OR = 120, ANDAND = 121, OROR = 122, PLUSEQ = 123, 
    MINUSEQ = 124, STAREQ = 125, SLASHEQ = 126, PERCENTEQ = 127, CARETEQ = 128, 
    ANDEQ = 129, OREQ = 130, SHLEQ = 131, SHREQ = 132, EQ = 133, EQEQ = 134, 
    NE = 135, GT = 136, LT = 137, GE = 138, LE = 139, AT = 140, UNDERSCORE = 141, 
    DOT = 142, DOTDOT = 143, DOTDOTDOT = 144, COMMA = 145, SEMI = 146, COLON = 147, 
    PATHSEP = 148, RARROW = 149, FATARROW = 150, POUND = 151, DOLLAR = 152, 
    QUESTION = 153, LBRACE = 154, RBRACE = 155, LBRACK = 156, RBRACK = 157, 
    LPAREN = 158, RPAREN = 159
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

