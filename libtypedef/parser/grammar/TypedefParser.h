
#include "libtypedef/parser/grammar_classes.h"


// Generated from ./libtypedef/parser/grammar/TypedefParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TypedefParser : public antlr4::Parser {
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
    STRING_LITERAL = 95, TEMPLATE_LITERAL = 96, RAW_TEMPLATE_LITERAL = 97, 
    RAW_STRING_LITERAL = 98, DEC_DIGITS = 99, DEC_DIGITS_UNDERSCORE = 100, 
    HEX_DIGITS = 101, HEX_DIGITS_UNDERSCORE = 102, OCT_DIGITS = 103, OCT_DIGITS_UNDERSCORE = 104, 
    BIN_DIGITS = 105, BIN_DIGITS_UNDERSCORE = 106, FLOAT_LITERAL = 107, 
    OCT_DIGIT = 108, DEC_DIGIT = 109, HEX_DIGIT = 110, HEX_PREFIX = 111, 
    OCT_PREFIX = 112, BIN_PREFIX = 113, RAW_ESCAPE = 114, PLUS = 115, MINUS = 116, 
    STAR = 117, SLASH = 118, PERCENT = 119, CARET = 120, NOT = 121, AND = 122, 
    OR = 123, ANDAND = 124, OROR = 125, PLUSEQ = 126, MINUSEQ = 127, STAREQ = 128, 
    SLASHEQ = 129, PERCENTEQ = 130, CARETEQ = 131, ANDEQ = 132, OREQ = 133, 
    SHLEQ = 134, SHREQ = 135, EQ = 136, EQEQ = 137, NE = 138, GT = 139, 
    LT = 140, GE = 141, LE = 142, AT = 143, UNDERSCORE = 144, DOT = 145, 
    DOTDOT = 146, DOTDOTDOT = 147, COMMA = 148, SEMI = 149, COLON = 150, 
    PATHSEP = 151, RARROW = 152, FATARROW = 153, POUND = 154, DOLLAR = 155, 
    QUESTION = 156, LBRACE = 157, RBRACE = 158, LBRACK = 159, RBRACK = 160, 
    LPAREN = 161, RPAREN = 162, WS = 163
  };

  enum {
    RuleCompilationUnit = 0, RuleTypedefVersionDeclaration = 1, RuleModuleDeclaration = 2, 
    RuleTypeDefinition = 3, RuleFieldBlock = 4, RuleFieldDefinition = 5, 
    RuleTypeAnnotation = 6, RuleTypeArgument = 7, RuleTypeIdentifier = 8, 
    RuleTemplateDefinition = 9, RuleTemplateBlock = 10, RuleFunctionParameter = 11, 
    RuleTypeParameter = 12, RuleUseDeclaration = 13, RuleSymbolPath = 14, 
    RulePrimitiveLiteral = 15, RuleBoolLiteral = 16, RuleCharLiteral = 17, 
    RuleStringLiteral = 18, RuleFloatLiteral = 19, RuleIntegerLiteral = 20, 
    RuleIntDigits = 21, RuleIdentifier = 22, RulePrimitiveTypeIdentifier = 23, 
    RuleKeyword = 24
  };

  TypedefParser(antlr4::TokenStream *input);
  ~TypedefParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class CompilationUnitContext;
  class TypedefVersionDeclarationContext;
  class ModuleDeclarationContext;
  class TypeDefinitionContext;
  class FieldBlockContext;
  class FieldDefinitionContext;
  class TypeAnnotationContext;
  class TypeArgumentContext;
  class TypeIdentifierContext;
  class TemplateDefinitionContext;
  class TemplateBlockContext;
  class FunctionParameterContext;
  class TypeParameterContext;
  class UseDeclarationContext;
  class SymbolPathContext;
  class PrimitiveLiteralContext;
  class BoolLiteralContext;
  class CharLiteralContext;
  class StringLiteralContext;
  class FloatLiteralContext;
  class IntegerLiteralContext;
  class IntDigitsContext;
  class IdentifierContext;
  class PrimitiveTypeIdentifierContext;
  class KeywordContext; 

  class  CompilationUnitContext : public antlr4::ParserRuleContext {
  public:
    td::CompilationUnit compilation_unit;
    CompilationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypedefVersionDeclarationContext *typedefVersionDeclaration();
    ModuleDeclarationContext *moduleDeclaration();
    antlr4::tree::TerminalNode *EOF();
    std::vector<UseDeclarationContext *> useDeclaration();
    UseDeclarationContext* useDeclaration(size_t i);
    std::vector<TypeDefinitionContext *> typeDefinition();
    TypeDefinitionContext* typeDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompilationUnitContext* compilationUnit();

  class  TypedefVersionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TypedefVersionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TYPEDEF();
    antlr4::tree::TerminalNode *EQ();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SEMI();

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
    SymbolPathContext *symbolPath();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleDeclarationContext* moduleDeclaration();

  class  TypeDefinitionContext : public antlr4::ParserRuleContext {
  public:
    std::unique_ptr<td::TypeDefinition> type_definition;
    TypeDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    FieldBlockContext *fieldBlock();
    antlr4::tree::TerminalNode *RBRACE();
    antlr4::tree::TerminalNode *KW_STRUCT();
    antlr4::tree::TerminalNode *KW_VARIANT();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDefinitionContext* typeDefinition();

  class  FieldBlockContext : public antlr4::ParserRuleContext {
  public:
    FieldBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeDefinitionContext *> typeDefinition();
    TypeDefinitionContext* typeDefinition(size_t i);
    std::vector<FieldDefinitionContext *> fieldDefinition();
    FieldDefinitionContext* fieldDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldBlockContext* fieldBlock();

  class  FieldDefinitionContext : public antlr4::ParserRuleContext {
  public:
    std::unique_ptr<td::FieldDefinition> field_definition;
    TypedefParser::IdentifierContext *field_identifier = nullptr;;
    FieldDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *EQ();
    PrimitiveLiteralContext *primitiveLiteral();
    TypeAnnotationContext *typeAnnotation();
    TypeDefinitionContext *typeDefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldDefinitionContext* fieldDefinition();

  class  TypeAnnotationContext : public antlr4::ParserRuleContext {
  public:
    TypeAnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LT();
    std::vector<TypeArgumentContext *> typeArgument();
    TypeArgumentContext* typeArgument(size_t i);
    antlr4::tree::TerminalNode *GT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeAnnotationContext* typeAnnotation();

  class  TypeArgumentContext : public antlr4::ParserRuleContext {
  public:
    TypeArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdentifierContext *typeIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeArgumentContext* typeArgument();

  class  TypeIdentifierContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::IdentifierContext *symrefIdentifier = nullptr;;
    TypeIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimitiveTypeIdentifierContext *primitiveTypeIdentifier();
    antlr4::tree::TerminalNode *KW_VECTOR();
    antlr4::tree::TerminalNode *KW_MAP();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeIdentifierContext* typeIdentifier();

  class  TemplateDefinitionContext : public antlr4::ParserRuleContext {
  public:
    td::TemplateDefinition template_definition;
    TemplateDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TEMPLATE();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    TemplateBlockContext *templateBlock();
    std::vector<FunctionParameterContext *> functionParameter();
    FunctionParameterContext* functionParameter(size_t i);
    antlr4::tree::TerminalNode *FATARROW();
    antlr4::tree::TerminalNode *KW_STRING();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateDefinitionContext* templateDefinition();

  class  TemplateBlockContext : public antlr4::ParserRuleContext {
  public:
    std::string val;
    TemplateBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEMPLATE_LITERAL();
    antlr4::tree::TerminalNode *RAW_TEMPLATE_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateBlockContext* templateBlock();

  class  FunctionParameterContext : public antlr4::ParserRuleContext {
  public:
    std::unique_ptr<td::table::FunctionParameter> func_param;
    FunctionParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();
    TypeParameterContext *typeParameter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionParameterContext* functionParameter();

  class  TypeParameterContext : public antlr4::ParserRuleContext {
  public:
    std::shared_ptr<td::table::TypeParameter> type_param;
    TypeParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimitiveTypeIdentifierContext *primitiveTypeIdentifier();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeParameterContext* typeParameter();

  class  UseDeclarationContext : public antlr4::ParserRuleContext {
  public:
    UseDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_USE();
    SymbolPathContext *symbolPath();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UseDeclarationContext* useDeclaration();

  class  SymbolPathContext : public antlr4::ParserRuleContext {
  public:
    td::SymbolPath symbol_path;
    antlr4::Token *leading_pathsep = nullptr;;
    SymbolPathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PATHSEP();
    antlr4::tree::TerminalNode* PATHSEP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SymbolPathContext* symbolPath();

  class  PrimitiveLiteralContext : public antlr4::ParserRuleContext {
  public:
    PrimitiveLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BoolLiteralContext *boolLiteral();
    CharLiteralContext *charLiteral();
    StringLiteralContext *stringLiteral();
    FloatLiteralContext *floatLiteral();
    IntegerLiteralContext *integerLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimitiveLiteralContext* primitiveLiteral();

  class  BoolLiteralContext : public antlr4::ParserRuleContext {
  public:
    td::BoolLiteralContext bool_literal;
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
    td::CharLiteral char_literal;
    CharLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHAR_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharLiteralContext* charLiteral();

  class  StringLiteralContext : public antlr4::ParserRuleContext {
  public:
    td::StringLiteral string_literal;
    StringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *RAW_STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringLiteralContext* stringLiteral();

  class  FloatLiteralContext : public antlr4::ParserRuleContext {
  public:
    td::FloatLiteral float_literal;
    FloatLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT_LITERAL();
    antlr4::tree::TerminalNode *KW_F32();
    antlr4::tree::TerminalNode *KW_F64();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloatLiteralContext* floatLiteral();

  class  IntegerLiteralContext : public antlr4::ParserRuleContext {
  public:
    td::IntegerLiteral integer_literal;
    IntegerLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntDigitsContext *intDigits();
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

  IntegerLiteralContext* integerLiteral();

  class  IntDigitsContext : public antlr4::ParserRuleContext {
  public:
    IntDigitsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEC_DIGITS();
    antlr4::tree::TerminalNode *DEC_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *HEX_PREFIX();
    antlr4::tree::TerminalNode *HEX_DIGITS();
    antlr4::tree::TerminalNode *HEX_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *OCT_PREFIX();
    antlr4::tree::TerminalNode *OCT_DIGITS();
    antlr4::tree::TerminalNode *OCT_DIGITS_UNDERSCORE();
    antlr4::tree::TerminalNode *BIN_PREFIX();
    antlr4::tree::TerminalNode *BIN_DIGITS();
    antlr4::tree::TerminalNode *BIN_DIGITS_UNDERSCORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntDigitsContext* intDigits();

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

  class  PrimitiveTypeIdentifierContext : public antlr4::ParserRuleContext {
  public:
    PrimitiveTypeIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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

  PrimitiveTypeIdentifierContext* primitiveTypeIdentifier();

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

