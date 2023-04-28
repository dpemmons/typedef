
#include "symbol_table.h"


// Generated from ./src/lib/grammar/TypedefParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TypedefParser : public antlr4::Parser {
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

  enum {
    RuleCompilationUnit = 0, RuleItem = 1, RuleMaybeValuedSymbolDeclaration = 2, 
    RuleVariantDeclaration = 3, RuleStructDeclaration = 4, RuleMaybeValuedSymbol = 5, 
    RuleUnvaluedSymbol = 6, RuleMaybeValuedType = 7, RuleValuedType = 8, 
    RuleUnvaluedType = 9, RuleVectorType = 10, RuleMapType = 11, RulePrimitiveType = 12, 
    RuleValuedPrimitiveType = 13, RuleValuedBoolFragment = 14, RuleValuedCharFragment = 15, 
    RuleValuedStringFragment = 16, RuleValuedF32Fragment = 17, RuleValuedF64Fragment = 18, 
    RuleValuedU8Fragment = 19, RuleValuedU16Fragment = 20, RuleValuedU32Fragment = 21, 
    RuleValuedU64Fragment = 22, RuleValuedI8Fragment = 23, RuleValuedI16Fragment = 24, 
    RuleValuedI32Fragment = 25, RuleValuedI64Fragment = 26, RuleTypedefVersionDeclaration = 27, 
    RuleModuleDeclaration = 28, RuleUseDeclaration = 29, RuleUseTree = 30, 
    RuleSimplePath = 31, RuleBoolLiteral = 32, RuleCharLiteral = 33, RuleF32Literal = 34, 
    RuleF64Literal = 35, RuleU8Literal = 36, RuleU16Literal = 37, RuleU32Literal = 38, 
    RuleU64Literal = 39, RuleI8Literal = 40, RuleI16Literal = 41, RuleI32Literal = 42, 
    RuleI64Literal = 43, RuleStringLiteral = 44, RuleIdentifier = 45, RuleKeyword = 46
  };

  TypedefParser(antlr4::TokenStream *input);
  ~TypedefParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  	td::SymbolTable global_symbol_table;


  class CompilationUnitContext;
  class ItemContext;
  class MaybeValuedSymbolDeclarationContext;
  class VariantDeclarationContext;
  class StructDeclarationContext;
  class MaybeValuedSymbolContext;
  class UnvaluedSymbolContext;
  class MaybeValuedTypeContext;
  class ValuedTypeContext;
  class UnvaluedTypeContext;
  class VectorTypeContext;
  class MapTypeContext;
  class PrimitiveTypeContext;
  class ValuedPrimitiveTypeContext;
  class ValuedBoolFragmentContext;
  class ValuedCharFragmentContext;
  class ValuedStringFragmentContext;
  class ValuedF32FragmentContext;
  class ValuedF64FragmentContext;
  class ValuedU8FragmentContext;
  class ValuedU16FragmentContext;
  class ValuedU32FragmentContext;
  class ValuedU64FragmentContext;
  class ValuedI8FragmentContext;
  class ValuedI16FragmentContext;
  class ValuedI32FragmentContext;
  class ValuedI64FragmentContext;
  class TypedefVersionDeclarationContext;
  class ModuleDeclarationContext;
  class UseDeclarationContext;
  class UseTreeContext;
  class SimplePathContext;
  class BoolLiteralContext;
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
    TypedefParser::MaybeValuedSymbolDeclarationContext *maybeValuedSymbolDeclarationContext = nullptr;;
    TypedefParser::StructDeclarationContext *structDeclarationContext = nullptr;;
    TypedefParser::VariantDeclarationContext *variantDeclarationContext = nullptr;;
    ItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MaybeValuedSymbolDeclarationContext *maybeValuedSymbolDeclaration();
    StructDeclarationContext *structDeclaration();
    VariantDeclarationContext *variantDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ItemContext* item();

  class  MaybeValuedSymbolDeclarationContext : public antlr4::ParserRuleContext {
  public:
    MaybeValuedSymbolDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MaybeValuedSymbolContext *maybeValuedSymbol();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MaybeValuedSymbolDeclarationContext* maybeValuedSymbolDeclaration();

  class  VariantDeclarationContext : public antlr4::ParserRuleContext {
  public:
    std::optional<td::SymbolTable::Symbol> maybe_symbol;
    std::shared_ptr<td::Variant> v;
    TypedefParser::IdentifierContext *identifierContext = nullptr;;
    TypedefParser::UnvaluedSymbolContext *unvaluedSymbolContext = nullptr;;
    VariantDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *KW_VARIANT();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<UnvaluedSymbolContext *> unvaluedSymbol();
    UnvaluedSymbolContext* unvaluedSymbol(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariantDeclarationContext* variantDeclaration();

  class  StructDeclarationContext : public antlr4::ParserRuleContext {
  public:
    std::optional<td::SymbolTable::Symbol> maybe_symbol;
    std::shared_ptr<td::Struct> s;
    TypedefParser::IdentifierContext *identifierContext = nullptr;;
    TypedefParser::MaybeValuedSymbolContext *maybeValuedSymbolContext = nullptr;;
    StructDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *KW_STRUCT();
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<MaybeValuedSymbolContext *> maybeValuedSymbol();
    MaybeValuedSymbolContext* maybeValuedSymbol(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructDeclarationContext* structDeclaration();

  class  MaybeValuedSymbolContext : public antlr4::ParserRuleContext {
  public:
    std::optional<td::SymbolTable::Symbol> maybe_symbol;
    TypedefParser::IdentifierContext *identifierContext = nullptr;;
    TypedefParser::MaybeValuedTypeContext *maybeValuedTypeContext = nullptr;;
    MaybeValuedSymbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    MaybeValuedTypeContext *maybeValuedType();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MaybeValuedSymbolContext* maybeValuedSymbol();

  class  UnvaluedSymbolContext : public antlr4::ParserRuleContext {
  public:
    std::optional<td::SymbolTable::Symbol> maybe_symbol;
    TypedefParser::IdentifierContext *identifierContext = nullptr;;
    TypedefParser::UnvaluedTypeContext *unvaluedTypeContext = nullptr;;
    UnvaluedSymbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    UnvaluedTypeContext *unvaluedType();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnvaluedSymbolContext* unvaluedSymbol();

  class  MaybeValuedTypeContext : public antlr4::ParserRuleContext {
  public:
    MaybeValuedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValuedTypeContext *valuedType();
    UnvaluedTypeContext *unvaluedType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MaybeValuedTypeContext* maybeValuedType();

  class  ValuedTypeContext : public antlr4::ParserRuleContext {
  public:
    ValuedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValuedPrimitiveTypeContext *valuedPrimitiveType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValuedTypeContext* valuedType();

  class  UnvaluedTypeContext : public antlr4::ParserRuleContext {
  public:
    UnvaluedTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    PrimitiveTypeContext *primitiveType();
    VectorTypeContext *vectorType();
    MapTypeContext *mapType();
    IdentifierContext *identifier();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnvaluedTypeContext* unvaluedType();

  class  VectorTypeContext : public antlr4::ParserRuleContext {
  public:
    VectorTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_VECTOR();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    PrimitiveTypeContext *primitiveType();
    IdentifierContext *identifier();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VectorTypeContext* vectorType();

  class  MapTypeContext : public antlr4::ParserRuleContext {
  public:
    MapTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_MAP();
    antlr4::tree::TerminalNode *LT();
    std::vector<PrimitiveTypeContext *> primitiveType();
    PrimitiveTypeContext* primitiveType(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *GT();
    IdentifierContext *identifier();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MapTypeContext* mapType();

  class  PrimitiveTypeContext : public antlr4::ParserRuleContext {
  public:
    PrimitiveTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_BOOL();
    antlr4::tree::TerminalNode *KW_CHAR();
    antlr4::tree::TerminalNode *KW_STRING();
    antlr4::tree::TerminalNode *KW_F32();
    antlr4::tree::TerminalNode *KW_F64();
    antlr4::tree::TerminalNode *KW_U8();
    antlr4::tree::TerminalNode *KW_U16();
    antlr4::tree::TerminalNode *KW_U32();
    antlr4::tree::TerminalNode *KW_U64();
    antlr4::tree::TerminalNode *KW_I8();
    antlr4::tree::TerminalNode *KW_I16();
    antlr4::tree::TerminalNode *KW_I32();
    antlr4::tree::TerminalNode *KW_I64();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimitiveTypeContext* primitiveType();

  class  ValuedPrimitiveTypeContext : public antlr4::ParserRuleContext {
  public:
    std::optional<td::SymbolTable::Value> maybe_val;
    TypedefParser::ValuedBoolFragmentContext *valuedBoolFragmentContext = nullptr;;
    TypedefParser::ValuedCharFragmentContext *valuedCharFragmentContext = nullptr;;
    TypedefParser::ValuedStringFragmentContext *valuedStringFragmentContext = nullptr;;
    TypedefParser::ValuedF32FragmentContext *valuedF32FragmentContext = nullptr;;
    TypedefParser::ValuedF64FragmentContext *valuedF64FragmentContext = nullptr;;
    TypedefParser::ValuedU8FragmentContext *valuedU8FragmentContext = nullptr;;
    TypedefParser::ValuedU16FragmentContext *valuedU16FragmentContext = nullptr;;
    TypedefParser::ValuedU32FragmentContext *valuedU32FragmentContext = nullptr;;
    TypedefParser::ValuedU64FragmentContext *valuedU64FragmentContext = nullptr;;
    TypedefParser::ValuedI8FragmentContext *valuedI8FragmentContext = nullptr;;
    TypedefParser::ValuedI16FragmentContext *valuedI16FragmentContext = nullptr;;
    TypedefParser::ValuedI32FragmentContext *valuedI32FragmentContext = nullptr;;
    TypedefParser::ValuedI64FragmentContext *valuedI64FragmentContext = nullptr;;
    ValuedPrimitiveTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValuedBoolFragmentContext *valuedBoolFragment();
    ValuedCharFragmentContext *valuedCharFragment();
    ValuedStringFragmentContext *valuedStringFragment();
    ValuedF32FragmentContext *valuedF32Fragment();
    ValuedF64FragmentContext *valuedF64Fragment();
    ValuedU8FragmentContext *valuedU8Fragment();
    ValuedU16FragmentContext *valuedU16Fragment();
    ValuedU32FragmentContext *valuedU32Fragment();
    ValuedU64FragmentContext *valuedU64Fragment();
    ValuedI8FragmentContext *valuedI8Fragment();
    ValuedI16FragmentContext *valuedI16Fragment();
    ValuedI32FragmentContext *valuedI32Fragment();
    ValuedI64FragmentContext *valuedI64Fragment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValuedPrimitiveTypeContext* valuedPrimitiveType();

  class  ValuedBoolFragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::BoolLiteralContext *literal = nullptr;;
    ValuedBoolFragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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

  ValuedBoolFragmentContext* valuedBoolFragment();

  class  ValuedCharFragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::CharLiteralContext *literal = nullptr;;
    ValuedCharFragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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

  ValuedCharFragmentContext* valuedCharFragment();

  class  ValuedStringFragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::StringLiteralContext *literal = nullptr;;
    ValuedStringFragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ();
    StringLiteralContext *stringLiteral();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *KW_STRING();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValuedStringFragmentContext* valuedStringFragment();

  class  ValuedF32FragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::F32LiteralContext *literal = nullptr;;
    ValuedF32FragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> KW_F32();
    antlr4::tree::TerminalNode* KW_F32(size_t i);
    antlr4::tree::TerminalNode *EQ();
    F32LiteralContext *f32Literal();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValuedF32FragmentContext* valuedF32Fragment();

  class  ValuedF64FragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::F64LiteralContext *literal = nullptr;;
    ValuedF64FragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> KW_F64();
    antlr4::tree::TerminalNode* KW_F64(size_t i);
    antlr4::tree::TerminalNode *EQ();
    F64LiteralContext *f64Literal();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValuedF64FragmentContext* valuedF64Fragment();

  class  ValuedU8FragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::U8LiteralContext *literal = nullptr;;
    ValuedU8FragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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

  ValuedU8FragmentContext* valuedU8Fragment();

  class  ValuedU16FragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::U16LiteralContext *literal = nullptr;;
    ValuedU16FragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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

  ValuedU16FragmentContext* valuedU16Fragment();

  class  ValuedU32FragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::U32LiteralContext *literal = nullptr;;
    ValuedU32FragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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

  ValuedU32FragmentContext* valuedU32Fragment();

  class  ValuedU64FragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::U64LiteralContext *literal = nullptr;;
    ValuedU64FragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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

  ValuedU64FragmentContext* valuedU64Fragment();

  class  ValuedI8FragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::I8LiteralContext *literal = nullptr;;
    ValuedI8FragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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

  ValuedI8FragmentContext* valuedI8Fragment();

  class  ValuedI16FragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::I16LiteralContext *literal = nullptr;;
    ValuedI16FragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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

  ValuedI16FragmentContext* valuedI16Fragment();

  class  ValuedI32FragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::I32LiteralContext *literal = nullptr;;
    ValuedI32FragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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

  ValuedI32FragmentContext* valuedI32Fragment();

  class  ValuedI64FragmentContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::I64LiteralContext *literal = nullptr;;
    ValuedI64FragmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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

  ValuedI64FragmentContext* valuedI64Fragment();

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
    antlr4::tree::TerminalNode *HEX_PREFIX();
    antlr4::tree::TerminalNode *OCT_PREFIX();
    antlr4::tree::TerminalNode *BIN_PREFIX();
    antlr4::tree::TerminalNode *DEC_DIGITS();
    antlr4::tree::TerminalNode *DEC_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *HEX_DIGITS();
    antlr4::tree::TerminalNode *HEX_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *OCT_DIGITS();
    antlr4::tree::TerminalNode *OCT_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *BIN_DIGITS();
    antlr4::tree::TerminalNode *BIN_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *MINUS();

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
    antlr4::tree::TerminalNode *HEX_PREFIX();
    antlr4::tree::TerminalNode *OCT_PREFIX();
    antlr4::tree::TerminalNode *BIN_PREFIX();
    antlr4::tree::TerminalNode *DEC_DIGITS();
    antlr4::tree::TerminalNode *DEC_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *HEX_DIGITS();
    antlr4::tree::TerminalNode *HEX_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *OCT_DIGITS();
    antlr4::tree::TerminalNode *OCT_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *BIN_DIGITS();
    antlr4::tree::TerminalNode *BIN_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *MINUS();

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
    antlr4::tree::TerminalNode *HEX_PREFIX();
    antlr4::tree::TerminalNode *OCT_PREFIX();
    antlr4::tree::TerminalNode *BIN_PREFIX();
    antlr4::tree::TerminalNode *DEC_DIGITS();
    antlr4::tree::TerminalNode *DEC_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *HEX_DIGITS();
    antlr4::tree::TerminalNode *HEX_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *OCT_DIGITS();
    antlr4::tree::TerminalNode *OCT_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *BIN_DIGITS();
    antlr4::tree::TerminalNode *BIN_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *MINUS();

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
    antlr4::tree::TerminalNode *HEX_PREFIX();
    antlr4::tree::TerminalNode *OCT_PREFIX();
    antlr4::tree::TerminalNode *BIN_PREFIX();
    antlr4::tree::TerminalNode *DEC_DIGITS();
    antlr4::tree::TerminalNode *DEC_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *HEX_DIGITS();
    antlr4::tree::TerminalNode *HEX_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *OCT_DIGITS();
    antlr4::tree::TerminalNode *OCT_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *BIN_DIGITS();
    antlr4::tree::TerminalNode *BIN_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *MINUS();

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
    antlr4::tree::TerminalNode *HEX_PREFIX();
    antlr4::tree::TerminalNode *OCT_PREFIX();
    antlr4::tree::TerminalNode *BIN_PREFIX();
    antlr4::tree::TerminalNode *DEC_DIGITS();
    antlr4::tree::TerminalNode *DEC_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *HEX_DIGITS();
    antlr4::tree::TerminalNode *HEX_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *OCT_DIGITS();
    antlr4::tree::TerminalNode *OCT_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *BIN_DIGITS();
    antlr4::tree::TerminalNode *BIN_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *MINUS();

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
    antlr4::tree::TerminalNode *HEX_PREFIX();
    antlr4::tree::TerminalNode *OCT_PREFIX();
    antlr4::tree::TerminalNode *BIN_PREFIX();
    antlr4::tree::TerminalNode *DEC_DIGITS();
    antlr4::tree::TerminalNode *DEC_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *HEX_DIGITS();
    antlr4::tree::TerminalNode *HEX_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *OCT_DIGITS();
    antlr4::tree::TerminalNode *OCT_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *BIN_DIGITS();
    antlr4::tree::TerminalNode *BIN_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *MINUS();

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
    antlr4::tree::TerminalNode *HEX_PREFIX();
    antlr4::tree::TerminalNode *OCT_PREFIX();
    antlr4::tree::TerminalNode *BIN_PREFIX();
    antlr4::tree::TerminalNode *DEC_DIGITS();
    antlr4::tree::TerminalNode *DEC_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *HEX_DIGITS();
    antlr4::tree::TerminalNode *HEX_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *OCT_DIGITS();
    antlr4::tree::TerminalNode *OCT_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *BIN_DIGITS();
    antlr4::tree::TerminalNode *BIN_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *MINUS();

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
    antlr4::tree::TerminalNode *HEX_PREFIX();
    antlr4::tree::TerminalNode *OCT_PREFIX();
    antlr4::tree::TerminalNode *BIN_PREFIX();
    antlr4::tree::TerminalNode *DEC_DIGITS();
    antlr4::tree::TerminalNode *DEC_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *HEX_DIGITS();
    antlr4::tree::TerminalNode *HEX_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *OCT_DIGITS();
    antlr4::tree::TerminalNode *OCT_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *BIN_DIGITS();
    antlr4::tree::TerminalNode *BIN_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  I64LiteralContext* i64Literal();

  class  StringLiteralContext : public antlr4::ParserRuleContext {
  public:
    std::optional<std::string> maybe_val;
    antlr4::Token *string_literalToken = nullptr;;
    antlr4::Token *raw_string_literalToken = nullptr;;
    StringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *RAW_STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringLiteralContext* stringLiteral();

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
    antlr4::tree::TerminalNode *KW_VARIANT();
    antlr4::tree::TerminalNode *KW_VECTOR();
    antlr4::tree::TerminalNode *KW_MAP();
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

