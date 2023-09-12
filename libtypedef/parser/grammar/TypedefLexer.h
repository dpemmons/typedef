
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
    KW_TEMPLATE = 17, KW_AND = 18, KW_IN = 19, KW_LET = 20, KW_NOT = 21, 
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
    KW_I32 = 83, KW_I64 = 84, NON_KEYWORD_IDENTIFIER = 85, LINE_COMMENT = 86, 
    BLOCK_COMMENT = 87, INNER_LINE_DOC = 88, INNER_BLOCK_DOC = 89, OUTER_LINE_DOC = 90, 
    OUTER_BLOCK_DOC = 91, BLOCK_COMMENT_OR_DOC = 92, SHEBANG = 93, CHAR_LITERAL = 94, 
    STRING_LITERAL = 95, RAW_STRING_LITERAL = 96, DEC_DIGITS = 97, DEC_DIGITS_UNDERSCORE = 98, 
    HEX_DIGITS = 99, HEX_DIGITS_UNDERSCORE = 100, OCT_DIGITS = 101, OCT_DIGITS_UNDERSCORE = 102, 
    BIN_DIGITS = 103, BIN_DIGITS_UNDERSCORE = 104, FLOAT_LITERAL = 105, 
    OCT_DIGIT = 106, DEC_DIGIT = 107, HEX_DIGIT = 108, HEX_PREFIX = 109, 
    OCT_PREFIX = 110, BIN_PREFIX = 111, START_TEMPLATE = 112, RAW_ESCAPE = 113, 
    PLUS = 114, MINUS = 115, STAR = 116, SLASH = 117, PERCENT = 118, CARET = 119, 
    NOT = 120, AND = 121, OR = 122, ANDAND = 123, OROR = 124, PLUSEQ = 125, 
    MINUSEQ = 126, STAREQ = 127, SLASHEQ = 128, PERCENTEQ = 129, CARETEQ = 130, 
    ANDEQ = 131, OREQ = 132, SHLEQ = 133, SHREQ = 134, EQ = 135, EQEQ = 136, 
    NE = 137, GT = 138, LT = 139, GE = 140, LE = 141, AT = 142, UNDERSCORE = 143, 
    DOT = 144, DOTDOT = 145, DOTDOTDOT = 146, COMMA = 147, SEMI = 148, COLON = 149, 
    PATHSEP = 150, RARROW = 151, FATARROW = 152, POUND = 153, DOLLAR = 154, 
    QUESTION = 155, LBRACE = 156, RBRACE = 157, LBRACK = 158, RBRACK = 159, 
    LPAREN = 160, RPAREN = 161, WS = 162, END_TEMPLATE = 163, TEMPLATE_CONTENTS = 164
  };

  enum {
    TemplateIsland = 1
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

