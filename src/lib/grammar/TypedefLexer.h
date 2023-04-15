
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
    SHEBANG = 91, WHITESPACE = 92, NEWLINE = 93, CHAR_LITERAL = 94, STRING_LITERAL = 95, 
    RAW_STRING_LITERAL = 96, BYTE_LITERAL = 97, BYTE_STRING_LITERAL = 98, 
    RAW_BYTE_STRING_LITERAL = 99, INTEGER_LITERAL = 100, DEC_LITERAL = 101, 
    HEX_LITERAL = 102, OCT_LITERAL = 103, BIN_LITERAL = 104, FLOAT_LITERAL = 105, 
    LIFETIME_OR_LABEL = 106, RAW_ESCAPE = 107, PLUS = 108, MINUS = 109, 
    STAR = 110, SLASH = 111, PERCENT = 112, CARET = 113, NOT = 114, AND = 115, 
    OR = 116, ANDAND = 117, OROR = 118, PLUSEQ = 119, MINUSEQ = 120, STAREQ = 121, 
    SLASHEQ = 122, PERCENTEQ = 123, CARETEQ = 124, ANDEQ = 125, OREQ = 126, 
    SHLEQ = 127, SHREQ = 128, EQ = 129, EQEQ = 130, NE = 131, GT = 132, 
    LT = 133, GE = 134, LE = 135, AT = 136, UNDERSCORE = 137, DOT = 138, 
    DOTDOT = 139, DOTDOTDOT = 140, COMMA = 141, SEMI = 142, COLON = 143, 
    PATHSEP = 144, RARROW = 145, FATARROW = 146, POUND = 147, DOLLAR = 148, 
    QUESTION = 149, LBRACE = 150, RBRACE = 151, LBRACK = 152, RBRACK = 153, 
    LPAREN = 154, RPAREN = 155
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

