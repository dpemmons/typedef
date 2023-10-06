
#include "libtypedef/parser/gramamr_types.h"


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
    STRING_LITERAL = 95, RAW_STRING_LITERAL = 96, DEC_LITERAL = 97, HEX_LITERAL = 98, 
    OCT_LITERAL = 99, BIN_LITERAL = 100, DEC_DIGITS = 101, DEC_DIGITS_UNDERSCORE = 102, 
    HEX_DIGITS = 103, HEX_DIGITS_UNDERSCORE = 104, OCT_DIGITS = 105, OCT_DIGITS_UNDERSCORE = 106, 
    BIN_DIGITS = 107, BIN_DIGITS_UNDERSCORE = 108, FLOAT_LITERAL = 109, 
    HEX_PREFIX = 110, OCT_PREFIX = 111, BIN_PREFIX = 112, START_TEMPLATE = 113, 
    RAW_ESCAPE = 114, PLUS = 115, MINUS = 116, AST = 117, SLASH = 118, PERCENT = 119, 
    HAT = 120, EXCL = 121, AMP = 122, VERT = 123, AMPAMP = 124, VERTVERT = 125, 
    PLUSEQ = 126, MINUSEQ = 127, STAREQ = 128, SOLEQ = 129, PERCENTEQ = 130, 
    HATEQ = 131, AMPEQ = 132, LTLTEQ = 133, GTGTEQ = 134, EQ = 135, EQEQ = 136, 
    EXCLEQ = 137, GT = 138, LT = 139, GE = 140, LE = 141, AT = 142, LOWBAR = 143, 
    DOT = 144, DOTDOT = 145, DOTDOTDOT = 146, COMMA = 147, SEMI = 148, COLON = 149, 
    COLONCOLON = 150, MINUSGT = 151, EQGT = 152, NUM = 153, DOLLAR = 154, 
    QUEST = 155, LBRACE = 156, RBRACE = 157, LBRACK = 158, RBRACK = 159, 
    LPAREN = 160, RPAREN = 161, WS = 162, END_TEMPLATE = 163, TMPL_EXPR_OPEN = 164, 
    TMPL_TEXT = 165, TMPL_EXPR_CLOSE = 166, TMPL_SLASH = 167, TMPL_COMMA = 168, 
    TMPL_DOT = 169, TMPL_LPAREN = 170, TMPL_RPAREN = 171, TMPL_PATHSEP = 172, 
    TMPL_NOT = 173, TMPL_KW_FOR = 174, TMPL_KW_CLOSE_FOR = 175, TMPL_KW_SWITCH = 176, 
    TMPL_KW_CLOSE_SWITCH = 177, TMPL_KW_CASE = 178, TMPL_KW_CLOSE_CASE = 179, 
    TMPL_KW_DEFAULT = 180, TMPL_KW_CLOSE_DEFAULT = 181, TMPL_KW_IN = 182, 
    TMPL_KW_IF = 183, TMPL_KW_CLOSEIF = 184, TMPL_KW_ELSE = 185, TMPL_KW_ELIF = 186, 
    TMPL_NON_KEYWORD_IDENTIFIER = 187, TMPL_WS = 188
  };

  enum {
    RuleCompilationUnit = 0, RuleTypedefVersionDeclaration = 1, RuleModuleDeclaration = 2, 
    RuleTypeDefinition = 3, RuleFieldBlock = 4, RuleFieldDefinition = 5, 
    RuleTypeAnnotation = 6, RuleTypeIdentifier = 7, RuleUserType = 8, RuleTmplDefinition = 9, 
    RuleTmplBlock = 10, RuleTmplItem = 11, RuleTmplText = 12, RuleTmplExpression = 13, 
    RuleTmplFunctionCall = 14, RuleTmplIfBlock = 15, RuleTmplIfSubBlock = 16, 
    RuleTmplElIfSubBlock = 17, RuleTmplElseSubBlock = 18, RuleTmplForBlock = 19, 
    RuleTmplSwitchBlock = 20, RuleTmplCaseBlock = 21, RuleTmplDefaultBlock = 22, 
    RuleTmplBindingVariables = 23, RuleTmplValueReferencePath = 24, RuleTmplValueReference = 25, 
    RuleTmplBindingVariable = 26, RuleTmplIdentifier = 27, RuleFunctionParameter = 28, 
    RuleUseDeclaration = 29, RuleSymbolPath = 30, RulePrimitiveLiteral = 31, 
    RuleBoolLiteral = 32, RuleCharLiteral = 33, RuleStringLiteral = 34, 
    RuleFloatLiteral = 35, RuleIntegerLiteral = 36, RuleIntDigits = 37, 
    RuleIdentifier = 38, RulePrimitiveTypeIdentifier = 39, RuleKeyword = 40
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
  class TypeIdentifierContext;
  class UserTypeContext;
  class TmplDefinitionContext;
  class TmplBlockContext;
  class TmplItemContext;
  class TmplTextContext;
  class TmplExpressionContext;
  class TmplFunctionCallContext;
  class TmplIfBlockContext;
  class TmplIfSubBlockContext;
  class TmplElIfSubBlockContext;
  class TmplElseSubBlockContext;
  class TmplForBlockContext;
  class TmplSwitchBlockContext;
  class TmplCaseBlockContext;
  class TmplDefaultBlockContext;
  class TmplBindingVariablesContext;
  class TmplValueReferencePathContext;
  class TmplValueReferenceContext;
  class TmplBindingVariableContext;
  class TmplIdentifierContext;
  class FunctionParameterContext;
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
    CompilationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypedefVersionDeclarationContext *typedefVersionDeclaration();
    ModuleDeclarationContext *moduleDeclaration();
    antlr4::tree::TerminalNode *EOF();
    std::vector<UseDeclarationContext *> useDeclaration();
    UseDeclarationContext* useDeclaration(size_t i);
    std::vector<TypeDefinitionContext *> typeDefinition();
    TypeDefinitionContext* typeDefinition(size_t i);
    std::vector<TmplDefinitionContext *> tmplDefinition();
    TmplDefinitionContext* tmplDefinition(size_t i);

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
    TypedefParser::IdentifierContext *type_identifier = nullptr;;
    TypedefParser::IdentifierContext *type_parameter = nullptr;;
    TypeDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    FieldBlockContext *fieldBlock();
    antlr4::tree::TerminalNode *RBRACE();
    antlr4::tree::TerminalNode *KW_STRUCT();
    antlr4::tree::TerminalNode *KW_VARIANT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

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
    TypedefParser::IdentifierContext *field_identifier = nullptr;;
    antlr4::Token *is_required = nullptr;;
    FieldDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    IdentifierContext *identifier();
    TypeAnnotationContext *typeAnnotation();
    TypeDefinitionContext *typeDefinition();
    antlr4::tree::TerminalNode *EQ();
    PrimitiveLiteralContext *primitiveLiteral();
    antlr4::tree::TerminalNode *EXCL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldDefinitionContext* fieldDefinition();

  class  TypeAnnotationContext : public antlr4::ParserRuleContext {
  public:
    TypeAnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdentifierContext *typeIdentifier();
    antlr4::tree::TerminalNode *LT();
    std::vector<TypeAnnotationContext *> typeAnnotation();
    TypeAnnotationContext* typeAnnotation(size_t i);
    antlr4::tree::TerminalNode *GT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeAnnotationContext* typeAnnotation();

  class  TypeIdentifierContext : public antlr4::ParserRuleContext {
  public:
    TypeIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimitiveTypeIdentifierContext *primitiveTypeIdentifier();
    antlr4::tree::TerminalNode *KW_VECTOR();
    antlr4::tree::TerminalNode *KW_MAP();
    UserTypeContext *userType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeIdentifierContext* typeIdentifier();

  class  UserTypeContext : public antlr4::ParserRuleContext {
  public:
    TypeDefinitionContext* type_definition;
    UserTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UserTypeContext* userType();

  class  TmplDefinitionContext : public antlr4::ParserRuleContext {
  public:
    TmplDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KW_TEMPLATE();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    TmplBlockContext *tmplBlock();
    std::vector<FunctionParameterContext *> functionParameter();
    FunctionParameterContext* functionParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TmplDefinitionContext* tmplDefinition();

  class  TmplBlockContext : public antlr4::ParserRuleContext {
  public:
    TmplBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START_TEMPLATE();
    antlr4::tree::TerminalNode *END_TEMPLATE();
    std::vector<TmplItemContext *> tmplItem();
    TmplItemContext* tmplItem(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TmplBlockContext* tmplBlock();

  class  TmplItemContext : public antlr4::ParserRuleContext {
  public:
    TmplItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TmplTextContext *tmplText();
    antlr4::tree::TerminalNode *TMPL_EXPR_OPEN();
    TmplExpressionContext *tmplExpression();
    antlr4::tree::TerminalNode *TMPL_EXPR_CLOSE();
    TmplIfBlockContext *tmplIfBlock();
    TmplForBlockContext *tmplForBlock();
    TmplSwitchBlockContext *tmplSwitchBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TmplItemContext* tmplItem();

  class  TmplTextContext : public antlr4::ParserRuleContext {
  public:
    std::string text;
    TmplTextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TMPL_TEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TmplTextContext* tmplText();

  class  TmplExpressionContext : public antlr4::ParserRuleContext {
  public:
    TmplExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TMPL_LPAREN();
    TmplExpressionContext *tmplExpression();
    antlr4::tree::TerminalNode *TMPL_RPAREN();
    antlr4::tree::TerminalNode *TMPL_NOT();
    TmplValueReferencePathContext *tmplValueReferencePath();
    TmplFunctionCallContext *tmplFunctionCall();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TmplExpressionContext* tmplExpression();

  class  TmplFunctionCallContext : public antlr4::ParserRuleContext {
  public:
    TmplDefinitionContext* tmpl_def;
    bool built_in;
    TmplFunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TmplIdentifierContext *tmplIdentifier();
    antlr4::tree::TerminalNode *TMPL_LPAREN();
    antlr4::tree::TerminalNode *TMPL_RPAREN();
    std::vector<TmplValueReferencePathContext *> tmplValueReferencePath();
    TmplValueReferencePathContext* tmplValueReferencePath(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TMPL_COMMA();
    antlr4::tree::TerminalNode* TMPL_COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TmplFunctionCallContext* tmplFunctionCall();

  class  TmplIfBlockContext : public antlr4::ParserRuleContext {
  public:
    TmplIfBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TmplIfSubBlockContext *tmplIfSubBlock();
    antlr4::tree::TerminalNode *TMPL_EXPR_OPEN();
    antlr4::tree::TerminalNode *TMPL_KW_CLOSEIF();
    antlr4::tree::TerminalNode *TMPL_EXPR_CLOSE();
    std::vector<TmplElIfSubBlockContext *> tmplElIfSubBlock();
    TmplElIfSubBlockContext* tmplElIfSubBlock(size_t i);
    TmplElseSubBlockContext *tmplElseSubBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TmplIfBlockContext* tmplIfBlock();

  class  TmplIfSubBlockContext : public antlr4::ParserRuleContext {
  public:
    TmplIfSubBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TMPL_EXPR_OPEN();
    antlr4::tree::TerminalNode *TMPL_KW_IF();
    TmplExpressionContext *tmplExpression();
    antlr4::tree::TerminalNode *TMPL_EXPR_CLOSE();
    std::vector<TmplItemContext *> tmplItem();
    TmplItemContext* tmplItem(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TmplIfSubBlockContext* tmplIfSubBlock();

  class  TmplElIfSubBlockContext : public antlr4::ParserRuleContext {
  public:
    TmplElIfSubBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TMPL_EXPR_OPEN();
    antlr4::tree::TerminalNode *TMPL_KW_ELIF();
    TmplExpressionContext *tmplExpression();
    antlr4::tree::TerminalNode *TMPL_EXPR_CLOSE();
    std::vector<TmplItemContext *> tmplItem();
    TmplItemContext* tmplItem(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TmplElIfSubBlockContext* tmplElIfSubBlock();

  class  TmplElseSubBlockContext : public antlr4::ParserRuleContext {
  public:
    TmplElseSubBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TMPL_EXPR_OPEN();
    antlr4::tree::TerminalNode *TMPL_KW_ELSE();
    antlr4::tree::TerminalNode *TMPL_EXPR_CLOSE();
    std::vector<TmplItemContext *> tmplItem();
    TmplItemContext* tmplItem(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TmplElseSubBlockContext* tmplElseSubBlock();

  class  TmplForBlockContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::TmplValueReferencePathContext *collection = nullptr;;
    TmplForBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> TMPL_EXPR_OPEN();
    antlr4::tree::TerminalNode* TMPL_EXPR_OPEN(size_t i);
    antlr4::tree::TerminalNode *TMPL_KW_FOR();
    TmplBindingVariablesContext *tmplBindingVariables();
    antlr4::tree::TerminalNode *TMPL_KW_IN();
    std::vector<antlr4::tree::TerminalNode *> TMPL_EXPR_CLOSE();
    antlr4::tree::TerminalNode* TMPL_EXPR_CLOSE(size_t i);
    antlr4::tree::TerminalNode *TMPL_KW_CLOSE_FOR();
    TmplValueReferencePathContext *tmplValueReferencePath();
    std::vector<TmplItemContext *> tmplItem();
    TmplItemContext* tmplItem(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TmplForBlockContext* tmplForBlock();

  class  TmplSwitchBlockContext : public antlr4::ParserRuleContext {
  public:
    TmplSwitchBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> TMPL_EXPR_OPEN();
    antlr4::tree::TerminalNode* TMPL_EXPR_OPEN(size_t i);
    antlr4::tree::TerminalNode *TMPL_KW_SWITCH();
    TmplValueReferencePathContext *tmplValueReferencePath();
    std::vector<antlr4::tree::TerminalNode *> TMPL_EXPR_CLOSE();
    antlr4::tree::TerminalNode* TMPL_EXPR_CLOSE(size_t i);
    antlr4::tree::TerminalNode *TMPL_KW_CLOSE_SWITCH();
    std::vector<antlr4::tree::TerminalNode *> TMPL_TEXT();
    antlr4::tree::TerminalNode* TMPL_TEXT(size_t i);
    std::vector<TmplCaseBlockContext *> tmplCaseBlock();
    TmplCaseBlockContext* tmplCaseBlock(size_t i);
    TmplDefaultBlockContext *tmplDefaultBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TmplSwitchBlockContext* tmplSwitchBlock();

  class  TmplCaseBlockContext : public antlr4::ParserRuleContext {
  public:
    TmplCaseBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> TMPL_EXPR_OPEN();
    antlr4::tree::TerminalNode* TMPL_EXPR_OPEN(size_t i);
    antlr4::tree::TerminalNode *TMPL_KW_CASE();
    TmplValueReferencePathContext *tmplValueReferencePath();
    std::vector<antlr4::tree::TerminalNode *> TMPL_EXPR_CLOSE();
    antlr4::tree::TerminalNode* TMPL_EXPR_CLOSE(size_t i);
    antlr4::tree::TerminalNode *TMPL_KW_CLOSE_CASE();
    std::vector<TmplItemContext *> tmplItem();
    TmplItemContext* tmplItem(size_t i);
    antlr4::tree::TerminalNode *TMPL_TEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TmplCaseBlockContext* tmplCaseBlock();

  class  TmplDefaultBlockContext : public antlr4::ParserRuleContext {
  public:
    TmplDefaultBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> TMPL_EXPR_OPEN();
    antlr4::tree::TerminalNode* TMPL_EXPR_OPEN(size_t i);
    antlr4::tree::TerminalNode *TMPL_KW_DEFAULT();
    std::vector<antlr4::tree::TerminalNode *> TMPL_EXPR_CLOSE();
    antlr4::tree::TerminalNode* TMPL_EXPR_CLOSE(size_t i);
    antlr4::tree::TerminalNode *TMPL_KW_CLOSE_DEFAULT();
    std::vector<TmplItemContext *> tmplItem();
    TmplItemContext* tmplItem(size_t i);
    antlr4::tree::TerminalNode *TMPL_TEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TmplDefaultBlockContext* tmplDefaultBlock();

  class  TmplBindingVariablesContext : public antlr4::ParserRuleContext {
  public:
    TmplBindingVariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TmplBindingVariableContext *> tmplBindingVariable();
    TmplBindingVariableContext* tmplBindingVariable(size_t i);
    antlr4::tree::TerminalNode *TMPL_COMMA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TmplBindingVariablesContext* tmplBindingVariables();

  class  TmplValueReferencePathContext : public antlr4::ParserRuleContext {
  public:
    bool first_pass_visited;
    TypeAnnotationContext* leaf_annotation;
    TypeDefinitionContext* leaf_definition;
    TmplValueReferencePathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TmplValueReferenceContext *> tmplValueReference();
    TmplValueReferenceContext* tmplValueReference(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TMPL_DOT();
    antlr4::tree::TerminalNode* TMPL_DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TmplValueReferencePathContext* tmplValueReferencePath();

  class  TmplValueReferenceContext : public antlr4::ParserRuleContext {
  public:
    TmplValueReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TmplIdentifierContext *tmplIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TmplValueReferenceContext* tmplValueReference();

  class  TmplBindingVariableContext : public antlr4::ParserRuleContext {
  public:
    TypeAnnotationContext* type;
    TmplBindingVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TmplIdentifierContext *tmplIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TmplBindingVariableContext* tmplBindingVariable();

  class  TmplIdentifierContext : public antlr4::ParserRuleContext {
  public:
    std::string id;
    antlr4::Token *nki = nullptr;;
    TmplIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TMPL_NON_KEYWORD_IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TmplIdentifierContext* tmplIdentifier();

  class  FunctionParameterContext : public antlr4::ParserRuleContext {
  public:
    TypedefParser::TypeAnnotationContext *parameter_type = nullptr;;
    FunctionParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *COLON();
    TypeAnnotationContext *typeAnnotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionParameterContext* functionParameter();

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
    antlr4::Token *leading_pathsep = nullptr;;
    SymbolPathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLONCOLON();
    antlr4::tree::TerminalNode* COLONCOLON(size_t i);

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
    bool bool_literal;
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
    char32_t char_literal;
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
    std::string string_literal;
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
    antlr4::tree::TerminalNode *DEC_LITERAL();
    antlr4::tree::TerminalNode *HEX_LITERAL();
    antlr4::tree::TerminalNode *OCT_LITERAL();
    antlr4::tree::TerminalNode *BIN_LITERAL();

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

