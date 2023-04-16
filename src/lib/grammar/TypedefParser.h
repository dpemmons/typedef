
#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include "parser_helpers.h"
#include "symbol_table.h"


// Generated from ./src/lib/grammar/TypedefParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TypedefParser : public antlr4::Parser {
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

  enum {
    RuleCompilationUnit = 0, RuleItem = 1, RuleValueDefinition = 2, RulePrimitiveFragment = 3, 
    RuleBoolFragment = 4, RuleCharFragment = 5, RuleStringFragment = 6, 
    RuleF32Fragment = 7, RuleF64Fragment = 8, RuleU8Fragment = 9, RuleU16Fragment = 10, 
    RuleU32Fragment = 11, RuleU64Fragment = 12, RuleI8Fragment = 13, RuleI16Fragment = 14, 
    RuleI32Fragment = 15, RuleI64Fragment = 16, RuleType_ = 17, RuleParameterizedType = 18, 
    RuleTypedefVersionDeclaration = 19, RuleModuleDeclaration = 20, RuleUseDeclaration = 21, 
    RuleUseTree = 22, RuleSimplePath = 23, RuleBoolLiteral = 24, RuleByteLiteral = 25, 
    RuleCharLiteral = 26, RuleF32Literal = 27, RuleF64Literal = 28, RuleU8Literal = 29, 
    RuleU16Literal = 30, RuleU32Literal = 31, RuleU64Literal = 32, RuleI8Literal = 33, 
    RuleI16Literal = 34, RuleI32Literal = 35, RuleI64Literal = 36, RuleStringLiteral = 37, 
    RuleByteStringLiteral = 38, RuleIdentifier = 39, RuleKeyword = 40
  };

  TypedefParser(antlr4::TokenStream *input);
  ~TypedefParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  	td::SymbolTable symbol_table;


  class CompilationUnitContext;
  class ItemContext;
  class ValueDefinitionContext;
  class PrimitiveFragmentContext;
  class BoolFragmentContext;
  class CharFragmentContext;
  class StringFragmentContext;
  class F32FragmentContext;
  class F64FragmentContext;
  class U8FragmentContext;
  class U16FragmentContext;
  class U32FragmentContext;
  class U64FragmentContext;
  class I8FragmentContext;
  class I16FragmentContext;
  class I32FragmentContext;
  class I64FragmentContext;
  class Type_Context;
  class ParameterizedTypeContext;
  class TypedefVersionDeclarationContext;
  class ModuleDeclarationContext;
  class UseDeclarationContext;
  class UseTreeContext;
  class SimplePathContext;
  class BoolLiteralContext;
  class ByteLiteralContext;
  class CharLiteralContext;
  class F32LiteralContext;
  class F64LiteralContext;
  class U8LiteralContext;
  class U16LiteralContext;
  class U32LiteralContext;
  class U64LiteralContext;
  class I8LiteralContext;
  class I16LiteralContext;
  class I32LiteralContext;
  class I64LiteralContext;
  class StringLiteralContext;
  class ByteStringLiteralContext;
  class IdentifierContext;
  class KeywordContext; 

  class  CompilationUnitContext : public antlr4::ParserRuleContext {
  public:
    CompilationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypedefVersionDeclarationContext *typedefVersionDeclaration();
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    ModuleDeclarationContext *moduleDeclaration();
    std::vector<UseDeclarationContext *> useDeclaration();
    UseDeclarationContext* useDeclaration(size_t i);
    std::vector<ItemContext *> item();
    ItemContext* item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompilationUnitContext* compilationUnit();

  class  ItemContext : public antlr4::ParserRuleContext {
  public:
    ItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueDefinitionContext *valueDefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ItemContext* item();

  class  ValueDefinitionContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::IdentifierContext *identifierContext = nullptr;;
    TypedefParser::PrimitiveFragmentContext *primitiveFragmentContext = nullptr;;
    ValueDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    PrimitiveFragmentContext *primitiveFragment();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueDefinitionContext* valueDefinition();

  class  PrimitiveFragmentContext : public antlr4::ParserRuleContext {
  public:
    std::optional<td::SymbolTable::Value> maybe_val;
    TypedefParser::BoolFragmentContext *boolFragmentContext = nullptr;;
    TypedefParser::CharFragmentContext *charFragmentContext = nullptr;;
    TypedefParser::StringFragmentContext *stringFragmentContext = nullptr;;
    TypedefParser::F32FragmentContext *f32FragmentContext = nullptr;;
    TypedefParser::F64FragmentContext *f64FragmentContext = nullptr;;
    TypedefParser::U8FragmentContext *u8FragmentContext = nullptr;;
    TypedefParser::U16FragmentContext *u16FragmentContext = nullptr;;
    TypedefParser::U32FragmentContext *u32FragmentContext = nullptr;;
    TypedefParser::U64FragmentContext *u64FragmentContext = nullptr;;
    TypedefParser::I8FragmentContext *i8FragmentContext = nullptr;;
    TypedefParser::I16FragmentContext *i16FragmentContext = nullptr;;
    TypedefParser::I32FragmentContext *i32FragmentContext = nullptr;;
    TypedefParser::I64FragmentContext *i64FragmentContext = nullptr;;
    PrimitiveFragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BoolFragmentContext *boolFragment();
    CharFragmentContext *charFragment();
    StringFragmentContext *stringFragment();
    F32FragmentContext *f32Fragment();
    F64FragmentContext *f64Fragment();
    U8FragmentContext *u8Fragment();
    U16FragmentContext *u16Fragment();
    U32FragmentContext *u32Fragment();
    U64FragmentContext *u64Fragment();
    I8FragmentContext *i8Fragment();
    I16FragmentContext *i16Fragment();
    I32FragmentContext *i32Fragment();
    I64FragmentContext *i64Fragment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimitiveFragmentContext* primitiveFragment();

  class  BoolFragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::BoolLiteralContext *literal = nullptr;;
    BoolFragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ();
    BoolLiteralContext *boolLiteral();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *KW_BOOL();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BoolFragmentContext* boolFragment();

  class  CharFragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::CharLiteralContext *literal = nullptr;;
    CharFragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ();
    CharLiteralContext *charLiteral();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *KW_CHAR();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharFragmentContext* charFragment();

  class  StringFragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::StringLiteralContext *literal = nullptr;;
    StringFragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_STRING();
    antlr4::tree::TerminalNode *EQ();
    StringLiteralContext *stringLiteral();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringFragmentContext* stringFragment();

  class  F32FragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::F32LiteralContext *literal = nullptr;;
    F32FragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_F32();
    antlr4::tree::TerminalNode *EQ();
    F32LiteralContext *f32Literal();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  F32FragmentContext* f32Fragment();

  class  F64FragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::F64LiteralContext *literal = nullptr;;
    F64FragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_F64();
    antlr4::tree::TerminalNode *EQ();
    F64LiteralContext *f64Literal();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  F64FragmentContext* f64Fragment();

  class  U8FragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::U8LiteralContext *literal = nullptr;;
    U8FragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> KW_U8();
    antlr4::tree::TerminalNode* KW_U8(size_t i);
    antlr4::tree::TerminalNode *EQ();
    U8LiteralContext *u8Literal();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  U8FragmentContext* u8Fragment();

  class  U16FragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::U16LiteralContext *literal = nullptr;;
    U16FragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> KW_U16();
    antlr4::tree::TerminalNode* KW_U16(size_t i);
    antlr4::tree::TerminalNode *EQ();
    U16LiteralContext *u16Literal();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  U16FragmentContext* u16Fragment();

  class  U32FragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::U32LiteralContext *literal = nullptr;;
    U32FragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> KW_U32();
    antlr4::tree::TerminalNode* KW_U32(size_t i);
    antlr4::tree::TerminalNode *EQ();
    U32LiteralContext *u32Literal();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  U32FragmentContext* u32Fragment();

  class  U64FragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::U64LiteralContext *literal = nullptr;;
    U64FragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> KW_U64();
    antlr4::tree::TerminalNode* KW_U64(size_t i);
    antlr4::tree::TerminalNode *EQ();
    U64LiteralContext *u64Literal();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  U64FragmentContext* u64Fragment();

  class  I8FragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::I8LiteralContext *literal = nullptr;;
    I8FragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> KW_I8();
    antlr4::tree::TerminalNode* KW_I8(size_t i);
    antlr4::tree::TerminalNode *EQ();
    I8LiteralContext *i8Literal();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  I8FragmentContext* i8Fragment();

  class  I16FragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::I16LiteralContext *literal = nullptr;;
    I16FragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> KW_I16();
    antlr4::tree::TerminalNode* KW_I16(size_t i);
    antlr4::tree::TerminalNode *EQ();
    I16LiteralContext *i16Literal();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  I16FragmentContext* i16Fragment();

  class  I32FragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::I32LiteralContext *literal = nullptr;;
    I32FragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> KW_I32();
    antlr4::tree::TerminalNode* KW_I32(size_t i);
    antlr4::tree::TerminalNode *EQ();
    I32LiteralContext *i32Literal();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  I32FragmentContext* i32Fragment();

  class  I64FragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::I64LiteralContext *literal = nullptr;;
    I64FragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> KW_I64();
    antlr4::tree::TerminalNode* KW_I64(size_t i);
    antlr4::tree::TerminalNode *EQ();
    I64LiteralContext *i64Literal();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  I64FragmentContext* i64Fragment();

  class  Type_Context : public antlr4::ParserRuleContext {
  public:
    Type_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    ParameterizedTypeContext *parameterizedType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_Context* type_();

  class  ParameterizedTypeContext : public antlr4::ParserRuleContext {
  public:
    ParameterizedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    std::vector<U64LiteralContext *> u64Literal();
    U64LiteralContext* u64Literal(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterizedTypeContext* parameterizedType();

  class  TypedefVersionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TypedefVersionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TYPEDEF();
    antlr4::tree::TerminalNode *EQ();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypedefVersionDeclarationContext* typedefVersionDeclaration();

  class  ModuleDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ModuleDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_MODULE();
    SimplePathContext *simplePath();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleDeclarationContext* moduleDeclaration();

  class  UseDeclarationContext : public antlr4::ParserRuleContext {
  public:
    UseDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_USE();
    UseTreeContext *useTree();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UseDeclarationContext* useDeclaration();

  class  UseTreeContext : public antlr4::ParserRuleContext {
  public:
    UseTreeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    antlr4::tree::TerminalNode *PATHSEP();
    std::vector<UseTreeContext *> useTree();
    UseTreeContext* useTree(size_t i);
    SimplePathContext *simplePath();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *KW_AS();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UseTreeContext* useTree();

  class  SimplePathContext : public antlr4::ParserRuleContext {
  public:
    SimplePathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PATHSEP();
    antlr4::tree::TerminalNode* PATHSEP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimplePathContext* simplePath();

  class  BoolLiteralContext : public antlr4::ParserRuleContext {
  public:
    std::optional<bool> maybe_val;
    BoolLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TRUE();
    antlr4::tree::TerminalNode *KW_FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BoolLiteralContext* boolLiteral();

  class  ByteLiteralContext : public antlr4::ParserRuleContext {
  public:
    std::optional<uint8_t> maybe_val;
    ByteLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BYTE_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ByteLiteralContext* byteLiteral();

  class  CharLiteralContext : public antlr4::ParserRuleContext {
  public:
    std::optional<char32_t> maybe_val;
    CharLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHAR_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharLiteralContext* charLiteral();

  class  F32LiteralContext : public antlr4::ParserRuleContext {
  public:
    std::optional<float> maybe_val;
    F32LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  F32LiteralContext* f32Literal();

  class  F64LiteralContext : public antlr4::ParserRuleContext {
  public:
    std::optional<double> maybe_val;
    F64LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  F64LiteralContext* f64Literal();

  class  U8LiteralContext : public antlr4::ParserRuleContext {
  public:
    std::optional<uint8_t> maybe_val;
    U8LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEC_DIGITS();
    antlr4::tree::TerminalNode *DEC_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *HEX_PREFIX();
    antlr4::tree::TerminalNode *OCT_PREFIX();
    antlr4::tree::TerminalNode *BIN_PREFIX();
    antlr4::tree::TerminalNode *HEX_DIGITS();
    antlr4::tree::TerminalNode *HEX_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *OCT_DIGITS();
    antlr4::tree::TerminalNode *OCT_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *BIN_DIGITS();
    antlr4::tree::TerminalNode *BIN_DIGITS_UNDERSCORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  U8LiteralContext* u8Literal();

  class  U16LiteralContext : public antlr4::ParserRuleContext {
  public:
    std::optional<uint16_t> maybe_val;
    U16LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEC_DIGITS();
    antlr4::tree::TerminalNode *DEC_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *HEX_PREFIX();
    antlr4::tree::TerminalNode *OCT_PREFIX();
    antlr4::tree::TerminalNode *BIN_PREFIX();
    antlr4::tree::TerminalNode *HEX_DIGITS();
    antlr4::tree::TerminalNode *HEX_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *OCT_DIGITS();
    antlr4::tree::TerminalNode *OCT_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *BIN_DIGITS();
    antlr4::tree::TerminalNode *BIN_DIGITS_UNDERSCORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  U16LiteralContext* u16Literal();

  class  U32LiteralContext : public antlr4::ParserRuleContext {
  public:
    std::optional<uint32_t> maybe_val;
    U32LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEC_DIGITS();
    antlr4::tree::TerminalNode *DEC_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *HEX_PREFIX();
    antlr4::tree::TerminalNode *OCT_PREFIX();
    antlr4::tree::TerminalNode *BIN_PREFIX();
    antlr4::tree::TerminalNode *HEX_DIGITS();
    antlr4::tree::TerminalNode *HEX_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *OCT_DIGITS();
    antlr4::tree::TerminalNode *OCT_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *BIN_DIGITS();
    antlr4::tree::TerminalNode *BIN_DIGITS_UNDERSCORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  U32LiteralContext* u32Literal();

  class  U64LiteralContext : public antlr4::ParserRuleContext {
  public:
    std::optional<uint64_t> maybe_val;
    U64LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEC_DIGITS();
    antlr4::tree::TerminalNode *DEC_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *HEX_PREFIX();
    antlr4::tree::TerminalNode *OCT_PREFIX();
    antlr4::tree::TerminalNode *BIN_PREFIX();
    antlr4::tree::TerminalNode *HEX_DIGITS();
    antlr4::tree::TerminalNode *HEX_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *OCT_DIGITS();
    antlr4::tree::TerminalNode *OCT_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *BIN_DIGITS();
    antlr4::tree::TerminalNode *BIN_DIGITS_UNDERSCORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  U64LiteralContext* u64Literal();

  class  I8LiteralContext : public antlr4::ParserRuleContext {
  public:
    std::optional<int8_t> maybe_val;
    I8LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEC_DIGITS();
    antlr4::tree::TerminalNode *DEC_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *HEX_PREFIX();
    antlr4::tree::TerminalNode *OCT_PREFIX();
    antlr4::tree::TerminalNode *BIN_PREFIX();
    antlr4::tree::TerminalNode *HEX_DIGITS();
    antlr4::tree::TerminalNode *HEX_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *OCT_DIGITS();
    antlr4::tree::TerminalNode *OCT_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *BIN_DIGITS();
    antlr4::tree::TerminalNode *BIN_DIGITS_UNDERSCORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  I8LiteralContext* i8Literal();

  class  I16LiteralContext : public antlr4::ParserRuleContext {
  public:
    std::optional<int16_t> maybe_val;
    I16LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEC_DIGITS();
    antlr4::tree::TerminalNode *DEC_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *HEX_PREFIX();
    antlr4::tree::TerminalNode *OCT_PREFIX();
    antlr4::tree::TerminalNode *BIN_PREFIX();
    antlr4::tree::TerminalNode *HEX_DIGITS();
    antlr4::tree::TerminalNode *HEX_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *OCT_DIGITS();
    antlr4::tree::TerminalNode *OCT_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *BIN_DIGITS();
    antlr4::tree::TerminalNode *BIN_DIGITS_UNDERSCORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  I16LiteralContext* i16Literal();

  class  I32LiteralContext : public antlr4::ParserRuleContext {
  public:
    std::optional<int32_t> maybe_val;
    I32LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEC_DIGITS();
    antlr4::tree::TerminalNode *DEC_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *HEX_PREFIX();
    antlr4::tree::TerminalNode *OCT_PREFIX();
    antlr4::tree::TerminalNode *BIN_PREFIX();
    antlr4::tree::TerminalNode *HEX_DIGITS();
    antlr4::tree::TerminalNode *HEX_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *OCT_DIGITS();
    antlr4::tree::TerminalNode *OCT_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *BIN_DIGITS();
    antlr4::tree::TerminalNode *BIN_DIGITS_UNDERSCORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  I32LiteralContext* i32Literal();

  class  I64LiteralContext : public antlr4::ParserRuleContext {
  public:
    std::optional<int64_t> maybe_val;
    I64LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEC_DIGITS();
    antlr4::tree::TerminalNode *DEC_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *HEX_PREFIX();
    antlr4::tree::TerminalNode *OCT_PREFIX();
    antlr4::tree::TerminalNode *BIN_PREFIX();
    antlr4::tree::TerminalNode *HEX_DIGITS();
    antlr4::tree::TerminalNode *HEX_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *OCT_DIGITS();
    antlr4::tree::TerminalNode *OCT_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *BIN_DIGITS();
    antlr4::tree::TerminalNode *BIN_DIGITS_UNDERSCORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  I64LiteralContext* i64Literal();

  class  StringLiteralContext : public antlr4::ParserRuleContext {
  public:
    std::optional<std::string> maybe_val;
    StringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *RAW_STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringLiteralContext* stringLiteral();

  class  ByteStringLiteralContext : public antlr4::ParserRuleContext {
  public:
    std::optional<std::string> maybe_val;
    ByteStringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BYTE_STRING_LITERAL();
    antlr4::tree::TerminalNode *RAW_BYTE_STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ByteStringLiteralContext* byteStringLiteral();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    std::string id;
    antlr4::Token *nki = nullptr;;
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NON_KEYWORD_IDENTIFIER();
    antlr4::tree::TerminalNode *RAW_ESCAPE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  KeywordContext : public antlr4::ParserRuleContext {
  public:
    KeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_AS();
    antlr4::tree::TerminalNode *KW_ENUM();
    antlr4::tree::TerminalNode *KW_FALSE();
    antlr4::tree::TerminalNode *KW_FN();
    antlr4::tree::TerminalNode *KW_IMPL();
    antlr4::tree::TerminalNode *KW_MODULE();
    antlr4::tree::TerminalNode *KW_STRUCT();
    antlr4::tree::TerminalNode *KW_TRUE();
    antlr4::tree::TerminalNode *KW_TYPE();
    antlr4::tree::TerminalNode *KW_TYPEDEF();
    antlr4::tree::TerminalNode *KW_USE();
    antlr4::tree::TerminalNode *KW_AND();
    antlr4::tree::TerminalNode *KW_IN();
    antlr4::tree::TerminalNode *KW_LET();
    antlr4::tree::TerminalNode *KW_NOT();
    antlr4::tree::TerminalNode *KW_OR();
    antlr4::tree::TerminalNode *KW_SIZEOF();
    antlr4::tree::TerminalNode *KW_THIS();
    antlr4::tree::TerminalNode *KW_TRAIT();
    antlr4::tree::TerminalNode *KW_WHERE();
    antlr4::tree::TerminalNode *KW_XOR();
    antlr4::tree::TerminalNode *KW_BREAK();
    antlr4::tree::TerminalNode *KW_CONTINUE();
    antlr4::tree::TerminalNode *KW_DEFAULT();
    antlr4::tree::TerminalNode *KW_DO();
    antlr4::tree::TerminalNode *KW_ELSE();
    antlr4::tree::TerminalNode *KW_FOR();
    antlr4::tree::TerminalNode *KW_GOTO();
    antlr4::tree::TerminalNode *KW_IF();
    antlr4::tree::TerminalNode *KW_LOOP();
    antlr4::tree::TerminalNode *KW_MATCH();
    antlr4::tree::TerminalNode *KW_MOVE();
    antlr4::tree::TerminalNode *KW_RETURN();
    antlr4::tree::TerminalNode *KW_TRY();
    antlr4::tree::TerminalNode *KW_WHILE();
    antlr4::tree::TerminalNode *KW_YIELD();
    antlr4::tree::TerminalNode *KW_ABSTRACT();
    antlr4::tree::TerminalNode *KW_AUTO();
    antlr4::tree::TerminalNode *KW_CONST();
    antlr4::tree::TerminalNode *KW_DOUBLE();
    antlr4::tree::TerminalNode *KW_EXTERN();
    antlr4::tree::TerminalNode *KW_FINAL();
    antlr4::tree::TerminalNode *KW_FLOAT();
    antlr4::tree::TerminalNode *KW_INT();
    antlr4::tree::TerminalNode *KW_LONG();
    antlr4::tree::TerminalNode *KW_MACRO();
    antlr4::tree::TerminalNode *KW_MUT();
    antlr4::tree::TerminalNode *KW_OVERRIDE();
    antlr4::tree::TerminalNode *KW_PRIVATE();
    antlr4::tree::TerminalNode *KW_PUB();
    antlr4::tree::TerminalNode *KW_REF();
    antlr4::tree::TerminalNode *KW_SELFTYPE();
    antlr4::tree::TerminalNode *KW_SELFVALUE();
    antlr4::tree::TerminalNode *KW_SIGNED();
    antlr4::tree::TerminalNode *KW_STATIC();
    antlr4::tree::TerminalNode *KW_SUPER();
    antlr4::tree::TerminalNode *KW_SWITCH();
    antlr4::tree::TerminalNode *KW_TYPEOF();
    antlr4::tree::TerminalNode *KW_UNION();
    antlr4::tree::TerminalNode *KW_UNSAFE();
    antlr4::tree::TerminalNode *KW_UNSIGNED();
    antlr4::tree::TerminalNode *KW_UNSIZED();
    antlr4::tree::TerminalNode *KW_VIRTUAL();
    antlr4::tree::TerminalNode *KW_VOID();
    antlr4::tree::TerminalNode *KW_VOLATILE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeywordContext* keyword();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

