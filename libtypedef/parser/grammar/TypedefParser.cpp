
#include "libtypedef/parser/symbol_path.h"
#include "libtypedef/parser/table.h"


// Generated from ./libtypedef/parser/grammar/TypedefParser.g4 by ANTLR 4.7.2


#include "TypedefParserListener.h"
#include "TypedefParserVisitor.h"

#include "TypedefParser.h"


using namespace antlrcpp;
using namespace antlr4;

TypedefParser::TypedefParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

TypedefParser::~TypedefParser() {
  delete _interpreter;
}

std::string TypedefParser::getGrammarFileName() const {
  return "TypedefParser.g4";
}

const std::vector<std::string>& TypedefParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& TypedefParser::getVocabulary() const {
  return _vocabulary;
}


#include <cstdint>
#include <memory>
#include <optional>
#include <string>


//----------------- CompilationUnitContext ------------------------------------------------------------------

TypedefParser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::TypedefVersionDeclarationContext* TypedefParser::CompilationUnitContext::typedefVersionDeclaration() {
  return getRuleContext<TypedefParser::TypedefVersionDeclarationContext>(0);
}

tree::TerminalNode* TypedefParser::CompilationUnitContext::EOF() {
  return getToken(TypedefParser::EOF, 0);
}

TypedefParser::ModuleDeclarationContext* TypedefParser::CompilationUnitContext::moduleDeclaration() {
  return getRuleContext<TypedefParser::ModuleDeclarationContext>(0);
}

std::vector<TypedefParser::UseDeclarationContext *> TypedefParser::CompilationUnitContext::useDeclaration() {
  return getRuleContexts<TypedefParser::UseDeclarationContext>();
}

TypedefParser::UseDeclarationContext* TypedefParser::CompilationUnitContext::useDeclaration(size_t i) {
  return getRuleContext<TypedefParser::UseDeclarationContext>(i);
}

std::vector<TypedefParser::TemplateDefinitionContext *> TypedefParser::CompilationUnitContext::templateDefinition() {
  return getRuleContexts<TypedefParser::TemplateDefinitionContext>();
}

TypedefParser::TemplateDefinitionContext* TypedefParser::CompilationUnitContext::templateDefinition(size_t i) {
  return getRuleContext<TypedefParser::TemplateDefinitionContext>(i);
}

std::vector<TypedefParser::TypeDeclarationContext *> TypedefParser::CompilationUnitContext::typeDeclaration() {
  return getRuleContexts<TypedefParser::TypeDeclarationContext>();
}

TypedefParser::TypeDeclarationContext* TypedefParser::CompilationUnitContext::typeDeclaration(size_t i) {
  return getRuleContext<TypedefParser::TypeDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::CompilationUnitContext::SEMI() {
  return getTokens(TypedefParser::SEMI);
}

tree::TerminalNode* TypedefParser::CompilationUnitContext::SEMI(size_t i) {
  return getToken(TypedefParser::SEMI, i);
}


size_t TypedefParser::CompilationUnitContext::getRuleIndex() const {
  return TypedefParser::RuleCompilationUnit;
}

void TypedefParser::CompilationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilationUnit(this);
}

void TypedefParser::CompilationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilationUnit(this);
}


antlrcpp::Any TypedefParser::CompilationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitCompilationUnit(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::CompilationUnitContext* TypedefParser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, TypedefParser::RuleCompilationUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    typedefVersionDeclaration();
    setState(86);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::KW_MODULE) {
      setState(85);
      moduleDeclaration();
    }
    setState(91);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::KW_USE) {
      setState(88);
      useDeclaration();
      setState(93);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(100);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypedefParser::KW_STRUCT)
      | (1ULL << TypedefParser::KW_VARIANT)
      | (1ULL << TypedefParser::KW_VECTOR)
      | (1ULL << TypedefParser::KW_MAP)
      | (1ULL << TypedefParser::KW_TEMPLATE))) != 0)) {
      setState(98);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypedefParser::KW_STRUCT:
        case TypedefParser::KW_VARIANT:
        case TypedefParser::KW_VECTOR:
        case TypedefParser::KW_MAP: {
          setState(94);
          typeDeclaration();
          setState(95);
          match(TypedefParser::SEMI);
          break;
        }

        case TypedefParser::KW_TEMPLATE: {
          setState(97);
          templateDefinition();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(102);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(103);
    match(TypedefParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDeclarationContext ------------------------------------------------------------------

TypedefParser::StructDeclarationContext::StructDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::StructDeclarationContext::KW_STRUCT() {
  return getToken(TypedefParser::KW_STRUCT, 0);
}

TypedefParser::IdentifierContext* TypedefParser::StructDeclarationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::StructDeclarationContext::LBRACE() {
  return getToken(TypedefParser::LBRACE, 0);
}

tree::TerminalNode* TypedefParser::StructDeclarationContext::RBRACE() {
  return getToken(TypedefParser::RBRACE, 0);
}

std::vector<TypedefParser::StructMemberContext *> TypedefParser::StructDeclarationContext::structMember() {
  return getRuleContexts<TypedefParser::StructMemberContext>();
}

TypedefParser::StructMemberContext* TypedefParser::StructDeclarationContext::structMember(size_t i) {
  return getRuleContext<TypedefParser::StructMemberContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::StructDeclarationContext::SEMI() {
  return getTokens(TypedefParser::SEMI);
}

tree::TerminalNode* TypedefParser::StructDeclarationContext::SEMI(size_t i) {
  return getToken(TypedefParser::SEMI, i);
}


size_t TypedefParser::StructDeclarationContext::getRuleIndex() const {
  return TypedefParser::RuleStructDeclaration;
}

void TypedefParser::StructDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDeclaration(this);
}

void TypedefParser::StructDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDeclaration(this);
}


antlrcpp::Any TypedefParser::StructDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitStructDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::StructDeclarationContext* TypedefParser::structDeclaration() {
  StructDeclarationContext *_localctx = _tracker.createInstance<StructDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, TypedefParser::RuleStructDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    match(TypedefParser::KW_STRUCT);
    setState(106);
    identifier();
    setState(107);
    match(TypedefParser::LBRACE);
    setState(113);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypedefParser::KW_STRUCT)
      | (1ULL << TypedefParser::KW_VARIANT)
      | (1ULL << TypedefParser::KW_VECTOR)
      | (1ULL << TypedefParser::KW_MAP))) != 0) || _la == TypedefParser::NON_KEYWORD_IDENTIFIER

    || _la == TypedefParser::RAW_ESCAPE) {
      setState(108);
      structMember();
      setState(109);
      match(TypedefParser::SEMI);
      setState(115);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(116);
    match(TypedefParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariantDeclarationContext ------------------------------------------------------------------

TypedefParser::VariantDeclarationContext::VariantDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::VariantDeclarationContext::KW_VARIANT() {
  return getToken(TypedefParser::KW_VARIANT, 0);
}

TypedefParser::IdentifierContext* TypedefParser::VariantDeclarationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::VariantDeclarationContext::LBRACE() {
  return getToken(TypedefParser::LBRACE, 0);
}

tree::TerminalNode* TypedefParser::VariantDeclarationContext::RBRACE() {
  return getToken(TypedefParser::RBRACE, 0);
}

std::vector<TypedefParser::StructMemberContext *> TypedefParser::VariantDeclarationContext::structMember() {
  return getRuleContexts<TypedefParser::StructMemberContext>();
}

TypedefParser::StructMemberContext* TypedefParser::VariantDeclarationContext::structMember(size_t i) {
  return getRuleContext<TypedefParser::StructMemberContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::VariantDeclarationContext::SEMI() {
  return getTokens(TypedefParser::SEMI);
}

tree::TerminalNode* TypedefParser::VariantDeclarationContext::SEMI(size_t i) {
  return getToken(TypedefParser::SEMI, i);
}


size_t TypedefParser::VariantDeclarationContext::getRuleIndex() const {
  return TypedefParser::RuleVariantDeclaration;
}

void TypedefParser::VariantDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariantDeclaration(this);
}

void TypedefParser::VariantDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariantDeclaration(this);
}


antlrcpp::Any TypedefParser::VariantDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitVariantDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::VariantDeclarationContext* TypedefParser::variantDeclaration() {
  VariantDeclarationContext *_localctx = _tracker.createInstance<VariantDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, TypedefParser::RuleVariantDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    match(TypedefParser::KW_VARIANT);
    setState(119);
    identifier();
    setState(120);
    match(TypedefParser::LBRACE);
    setState(126);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypedefParser::KW_STRUCT)
      | (1ULL << TypedefParser::KW_VARIANT)
      | (1ULL << TypedefParser::KW_VECTOR)
      | (1ULL << TypedefParser::KW_MAP))) != 0) || _la == TypedefParser::NON_KEYWORD_IDENTIFIER

    || _la == TypedefParser::RAW_ESCAPE) {
      setState(121);
      structMember();
      setState(122);
      match(TypedefParser::SEMI);
      setState(128);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(129);
    match(TypedefParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VectorDeclarationContext ------------------------------------------------------------------

TypedefParser::VectorDeclarationContext::VectorDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::VectorDeclarationContext::KW_VECTOR() {
  return getToken(TypedefParser::KW_VECTOR, 0);
}

tree::TerminalNode* TypedefParser::VectorDeclarationContext::LT() {
  return getToken(TypedefParser::LT, 0);
}

TypedefParser::TypeParameterContext* TypedefParser::VectorDeclarationContext::typeParameter() {
  return getRuleContext<TypedefParser::TypeParameterContext>(0);
}

tree::TerminalNode* TypedefParser::VectorDeclarationContext::GT() {
  return getToken(TypedefParser::GT, 0);
}

TypedefParser::IdentifierContext* TypedefParser::VectorDeclarationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}


size_t TypedefParser::VectorDeclarationContext::getRuleIndex() const {
  return TypedefParser::RuleVectorDeclaration;
}

void TypedefParser::VectorDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVectorDeclaration(this);
}

void TypedefParser::VectorDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVectorDeclaration(this);
}


antlrcpp::Any TypedefParser::VectorDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitVectorDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::VectorDeclarationContext* TypedefParser::vectorDeclaration() {
  VectorDeclarationContext *_localctx = _tracker.createInstance<VectorDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, TypedefParser::RuleVectorDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(TypedefParser::KW_VECTOR);
    setState(132);
    dynamic_cast<VectorDeclarationContext *>(_localctx)->symbolName = identifier();
    setState(133);
    match(TypedefParser::LT);
    setState(134);
    typeParameter();
    setState(135);
    match(TypedefParser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MapDeclarationContext ------------------------------------------------------------------

TypedefParser::MapDeclarationContext::MapDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::MapDeclarationContext::KW_MAP() {
  return getToken(TypedefParser::KW_MAP, 0);
}

tree::TerminalNode* TypedefParser::MapDeclarationContext::LT() {
  return getToken(TypedefParser::LT, 0);
}

tree::TerminalNode* TypedefParser::MapDeclarationContext::COMMA() {
  return getToken(TypedefParser::COMMA, 0);
}

tree::TerminalNode* TypedefParser::MapDeclarationContext::GT() {
  return getToken(TypedefParser::GT, 0);
}

TypedefParser::IdentifierContext* TypedefParser::MapDeclarationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

std::vector<TypedefParser::TypeParameterContext *> TypedefParser::MapDeclarationContext::typeParameter() {
  return getRuleContexts<TypedefParser::TypeParameterContext>();
}

TypedefParser::TypeParameterContext* TypedefParser::MapDeclarationContext::typeParameter(size_t i) {
  return getRuleContext<TypedefParser::TypeParameterContext>(i);
}


size_t TypedefParser::MapDeclarationContext::getRuleIndex() const {
  return TypedefParser::RuleMapDeclaration;
}

void TypedefParser::MapDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMapDeclaration(this);
}

void TypedefParser::MapDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMapDeclaration(this);
}


antlrcpp::Any TypedefParser::MapDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitMapDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::MapDeclarationContext* TypedefParser::mapDeclaration() {
  MapDeclarationContext *_localctx = _tracker.createInstance<MapDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, TypedefParser::RuleMapDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    match(TypedefParser::KW_MAP);
    setState(138);
    dynamic_cast<MapDeclarationContext *>(_localctx)->symbolName = identifier();
    setState(139);
    match(TypedefParser::LT);
    setState(140);
    dynamic_cast<MapDeclarationContext *>(_localctx)->key = typeParameter();
    setState(141);
    match(TypedefParser::COMMA);
    setState(142);
    dynamic_cast<MapDeclarationContext *>(_localctx)->val = typeParameter();
    setState(143);
    match(TypedefParser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateDefinitionContext ------------------------------------------------------------------

TypedefParser::TemplateDefinitionContext::TemplateDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::TemplateDefinitionContext::KW_TEMPLATE() {
  return getToken(TypedefParser::KW_TEMPLATE, 0);
}

tree::TerminalNode* TypedefParser::TemplateDefinitionContext::LPAREN() {
  return getToken(TypedefParser::LPAREN, 0);
}

tree::TerminalNode* TypedefParser::TemplateDefinitionContext::RPAREN() {
  return getToken(TypedefParser::RPAREN, 0);
}

TypedefParser::TemplateBlockContext* TypedefParser::TemplateDefinitionContext::templateBlock() {
  return getRuleContext<TypedefParser::TemplateBlockContext>(0);
}

std::vector<TypedefParser::IdentifierContext *> TypedefParser::TemplateDefinitionContext::identifier() {
  return getRuleContexts<TypedefParser::IdentifierContext>();
}

TypedefParser::IdentifierContext* TypedefParser::TemplateDefinitionContext::identifier(size_t i) {
  return getRuleContext<TypedefParser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::TemplateDefinitionContext::COLON() {
  return getTokens(TypedefParser::COLON);
}

tree::TerminalNode* TypedefParser::TemplateDefinitionContext::COLON(size_t i) {
  return getToken(TypedefParser::COLON, i);
}

std::vector<TypedefParser::TypeParameterContext *> TypedefParser::TemplateDefinitionContext::typeParameter() {
  return getRuleContexts<TypedefParser::TypeParameterContext>();
}

TypedefParser::TypeParameterContext* TypedefParser::TemplateDefinitionContext::typeParameter(size_t i) {
  return getRuleContext<TypedefParser::TypeParameterContext>(i);
}

tree::TerminalNode* TypedefParser::TemplateDefinitionContext::FATARROW() {
  return getToken(TypedefParser::FATARROW, 0);
}

tree::TerminalNode* TypedefParser::TemplateDefinitionContext::KW_STRING() {
  return getToken(TypedefParser::KW_STRING, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::TemplateDefinitionContext::COMMA() {
  return getTokens(TypedefParser::COMMA);
}

tree::TerminalNode* TypedefParser::TemplateDefinitionContext::COMMA(size_t i) {
  return getToken(TypedefParser::COMMA, i);
}


size_t TypedefParser::TemplateDefinitionContext::getRuleIndex() const {
  return TypedefParser::RuleTemplateDefinition;
}

void TypedefParser::TemplateDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateDefinition(this);
}

void TypedefParser::TemplateDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateDefinition(this);
}


antlrcpp::Any TypedefParser::TemplateDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTemplateDefinition(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TemplateDefinitionContext* TypedefParser::templateDefinition() {
  TemplateDefinitionContext *_localctx = _tracker.createInstance<TemplateDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 10, TypedefParser::RuleTemplateDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    match(TypedefParser::KW_TEMPLATE);
    setState(146);
    dynamic_cast<TemplateDefinitionContext *>(_localctx)->symbolName = identifier();
    setState(147);
    match(TypedefParser::LPAREN);

    setState(148);
    identifier();
    setState(149);
    match(TypedefParser::COLON);
    setState(150);
    typeParameter();
    setState(158);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::COMMA) {
      setState(151);
      match(TypedefParser::COMMA);
      setState(152);
      identifier();
      setState(153);
      match(TypedefParser::COLON);
      setState(154);
      typeParameter();
      setState(160);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(161);
    match(TypedefParser::RPAREN);
    setState(164);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::FATARROW) {
      setState(162);
      match(TypedefParser::FATARROW);
      setState(163);
      match(TypedefParser::KW_STRING);
    }
    setState(166);
    templateBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemplateBlockContext ------------------------------------------------------------------

TypedefParser::TemplateBlockContext::TemplateBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::TemplateBlockContext::TEMPLATE_LITERAL() {
  return getToken(TypedefParser::TEMPLATE_LITERAL, 0);
}

tree::TerminalNode* TypedefParser::TemplateBlockContext::RAW_TEMPLATE_LITERAL() {
  return getToken(TypedefParser::RAW_TEMPLATE_LITERAL, 0);
}


size_t TypedefParser::TemplateBlockContext::getRuleIndex() const {
  return TypedefParser::RuleTemplateBlock;
}

void TypedefParser::TemplateBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateBlock(this);
}

void TypedefParser::TemplateBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateBlock(this);
}


antlrcpp::Any TypedefParser::TemplateBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTemplateBlock(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TemplateBlockContext* TypedefParser::templateBlock() {
  TemplateBlockContext *_localctx = _tracker.createInstance<TemplateBlockContext>(_ctx, getState());
  enterRule(_localctx, 12, TypedefParser::RuleTemplateBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(168);
    _la = _input->LA(1);
    if (!(_la == TypedefParser::RAW_TEMPLATE_LITERAL

    || _la == TypedefParser::TEMPLATE_LITERAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeParameterContext ------------------------------------------------------------------

TypedefParser::TypeParameterContext::TypeParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::PrimitiveTypeIdentifierContext* TypedefParser::TypeParameterContext::primitiveTypeIdentifier() {
  return getRuleContext<TypedefParser::PrimitiveTypeIdentifierContext>(0);
}

TypedefParser::IdentifierContext* TypedefParser::TypeParameterContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}


size_t TypedefParser::TypeParameterContext::getRuleIndex() const {
  return TypedefParser::RuleTypeParameter;
}

void TypedefParser::TypeParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeParameter(this);
}

void TypedefParser::TypeParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeParameter(this);
}


antlrcpp::Any TypedefParser::TypeParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTypeParameter(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TypeParameterContext* TypedefParser::typeParameter() {
  TypeParameterContext *_localctx = _tracker.createInstance<TypeParameterContext>(_ctx, getState());
  enterRule(_localctx, 14, TypedefParser::RuleTypeParameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(172);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::KW_BOOL:
      case TypedefParser::KW_CHAR:
      case TypedefParser::KW_STRING:
      case TypedefParser::KW_F32:
      case TypedefParser::KW_F64:
      case TypedefParser::KW_U8:
      case TypedefParser::KW_U16:
      case TypedefParser::KW_U32:
      case TypedefParser::KW_U64:
      case TypedefParser::KW_I8:
      case TypedefParser::KW_I16:
      case TypedefParser::KW_I32:
      case TypedefParser::KW_I64: {
        enterOuterAlt(_localctx, 1);
        setState(170);
        primitiveTypeIdentifier();
        break;
      }

      case TypedefParser::NON_KEYWORD_IDENTIFIER:
      case TypedefParser::RAW_ESCAPE: {
        enterOuterAlt(_localctx, 2);
        setState(171);
        identifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructMemberContext ------------------------------------------------------------------

TypedefParser::StructMemberContext::StructMemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::TypeDeclarationContext* TypedefParser::StructMemberContext::typeDeclaration() {
  return getRuleContext<TypedefParser::TypeDeclarationContext>(0);
}

TypedefParser::FieldDeclarationContext* TypedefParser::StructMemberContext::fieldDeclaration() {
  return getRuleContext<TypedefParser::FieldDeclarationContext>(0);
}


size_t TypedefParser::StructMemberContext::getRuleIndex() const {
  return TypedefParser::RuleStructMember;
}

void TypedefParser::StructMemberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructMember(this);
}

void TypedefParser::StructMemberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructMember(this);
}


antlrcpp::Any TypedefParser::StructMemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitStructMember(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::StructMemberContext* TypedefParser::structMember() {
  StructMemberContext *_localctx = _tracker.createInstance<StructMemberContext>(_ctx, getState());
  enterRule(_localctx, 16, TypedefParser::RuleStructMember);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(176);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::KW_STRUCT:
      case TypedefParser::KW_VARIANT:
      case TypedefParser::KW_VECTOR:
      case TypedefParser::KW_MAP: {
        enterOuterAlt(_localctx, 1);
        setState(174);
        typeDeclaration();
        break;
      }

      case TypedefParser::NON_KEYWORD_IDENTIFIER:
      case TypedefParser::RAW_ESCAPE: {
        enterOuterAlt(_localctx, 2);
        setState(175);
        fieldDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDeclarationContext ------------------------------------------------------------------

TypedefParser::TypeDeclarationContext::TypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::StructDeclarationContext* TypedefParser::TypeDeclarationContext::structDeclaration() {
  return getRuleContext<TypedefParser::StructDeclarationContext>(0);
}

TypedefParser::VariantDeclarationContext* TypedefParser::TypeDeclarationContext::variantDeclaration() {
  return getRuleContext<TypedefParser::VariantDeclarationContext>(0);
}

TypedefParser::VectorDeclarationContext* TypedefParser::TypeDeclarationContext::vectorDeclaration() {
  return getRuleContext<TypedefParser::VectorDeclarationContext>(0);
}

TypedefParser::MapDeclarationContext* TypedefParser::TypeDeclarationContext::mapDeclaration() {
  return getRuleContext<TypedefParser::MapDeclarationContext>(0);
}


size_t TypedefParser::TypeDeclarationContext::getRuleIndex() const {
  return TypedefParser::RuleTypeDeclaration;
}

void TypedefParser::TypeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDeclaration(this);
}

void TypedefParser::TypeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDeclaration(this);
}


antlrcpp::Any TypedefParser::TypeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTypeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TypeDeclarationContext* TypedefParser::typeDeclaration() {
  TypeDeclarationContext *_localctx = _tracker.createInstance<TypeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 18, TypedefParser::RuleTypeDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::KW_STRUCT: {
        setState(178);
        structDeclaration();
        break;
      }

      case TypedefParser::KW_VARIANT: {
        setState(179);
        variantDeclaration();
        break;
      }

      case TypedefParser::KW_VECTOR: {
        setState(180);
        vectorDeclaration();
        break;
      }

      case TypedefParser::KW_MAP: {
        setState(181);
        mapDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldDeclarationContext ------------------------------------------------------------------

TypedefParser::FieldDeclarationContext::FieldDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::PrimitiveMemberDeclarationContext* TypedefParser::FieldDeclarationContext::primitiveMemberDeclaration() {
  return getRuleContext<TypedefParser::PrimitiveMemberDeclarationContext>(0);
}

TypedefParser::SymrefMemberDeclarationContext* TypedefParser::FieldDeclarationContext::symrefMemberDeclaration() {
  return getRuleContext<TypedefParser::SymrefMemberDeclarationContext>(0);
}

TypedefParser::InlineStructDeclarationContext* TypedefParser::FieldDeclarationContext::inlineStructDeclaration() {
  return getRuleContext<TypedefParser::InlineStructDeclarationContext>(0);
}

TypedefParser::InlineVariantDeclarationContext* TypedefParser::FieldDeclarationContext::inlineVariantDeclaration() {
  return getRuleContext<TypedefParser::InlineVariantDeclarationContext>(0);
}

TypedefParser::InlineVectorDeclarationContext* TypedefParser::FieldDeclarationContext::inlineVectorDeclaration() {
  return getRuleContext<TypedefParser::InlineVectorDeclarationContext>(0);
}

TypedefParser::InlineMapDeclarationContext* TypedefParser::FieldDeclarationContext::inlineMapDeclaration() {
  return getRuleContext<TypedefParser::InlineMapDeclarationContext>(0);
}


size_t TypedefParser::FieldDeclarationContext::getRuleIndex() const {
  return TypedefParser::RuleFieldDeclaration;
}

void TypedefParser::FieldDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldDeclaration(this);
}

void TypedefParser::FieldDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldDeclaration(this);
}


antlrcpp::Any TypedefParser::FieldDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitFieldDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::FieldDeclarationContext* TypedefParser::fieldDeclaration() {
  FieldDeclarationContext *_localctx = _tracker.createInstance<FieldDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 20, TypedefParser::RuleFieldDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(190);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(184);
      primitiveMemberDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(185);
      symrefMemberDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(186);
      inlineStructDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(187);
      inlineVariantDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(188);
      inlineVectorDeclaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(189);
      inlineMapDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimitiveMemberDeclarationContext ------------------------------------------------------------------

TypedefParser::PrimitiveMemberDeclarationContext::PrimitiveMemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::ImpliedTypePrimitiveMemberDeclarationContext* TypedefParser::PrimitiveMemberDeclarationContext::impliedTypePrimitiveMemberDeclaration() {
  return getRuleContext<TypedefParser::ImpliedTypePrimitiveMemberDeclarationContext>(0);
}

TypedefParser::IdentifierContext* TypedefParser::PrimitiveMemberDeclarationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::PrimitiveMemberDeclarationContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

TypedefParser::PrimitiveTypeIdentifierContext* TypedefParser::PrimitiveMemberDeclarationContext::primitiveTypeIdentifier() {
  return getRuleContext<TypedefParser::PrimitiveTypeIdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::PrimitiveMemberDeclarationContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::FloatLiteralContext* TypedefParser::PrimitiveMemberDeclarationContext::floatLiteral() {
  return getRuleContext<TypedefParser::FloatLiteralContext>(0);
}

TypedefParser::IntLiteralContext* TypedefParser::PrimitiveMemberDeclarationContext::intLiteral() {
  return getRuleContext<TypedefParser::IntLiteralContext>(0);
}

TypedefParser::ExplicitPrimitiveLiteralContext* TypedefParser::PrimitiveMemberDeclarationContext::explicitPrimitiveLiteral() {
  return getRuleContext<TypedefParser::ExplicitPrimitiveLiteralContext>(0);
}


size_t TypedefParser::PrimitiveMemberDeclarationContext::getRuleIndex() const {
  return TypedefParser::RulePrimitiveMemberDeclaration;
}

void TypedefParser::PrimitiveMemberDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimitiveMemberDeclaration(this);
}

void TypedefParser::PrimitiveMemberDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimitiveMemberDeclaration(this);
}


antlrcpp::Any TypedefParser::PrimitiveMemberDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitPrimitiveMemberDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::PrimitiveMemberDeclarationContext* TypedefParser::primitiveMemberDeclaration() {
  PrimitiveMemberDeclarationContext *_localctx = _tracker.createInstance<PrimitiveMemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 22, TypedefParser::RulePrimitiveMemberDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(208);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(192);
      impliedTypePrimitiveMemberDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(193);
      identifier();
      setState(194);
      match(TypedefParser::COLON);
      setState(206);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
      case 1: {
        setState(195);
        primitiveTypeIdentifier();
        setState(196);
        match(TypedefParser::EQ);
        setState(199);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case TypedefParser::FLOAT_LITERAL: {
            setState(197);
            floatLiteral();
            break;
          }

          case TypedefParser::DEC_DIGITS:
          case TypedefParser::DEC_DIGITS_UNDERSCORE:
          case TypedefParser::HEX_PREFIX:
          case TypedefParser::OCT_PREFIX:
          case TypedefParser::BIN_PREFIX:
          case TypedefParser::MINUS: {
            setState(198);
            intLiteral();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      case 2: {
        setState(201);
        primitiveTypeIdentifier();
        setState(204);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::EQ) {
          setState(202);
          match(TypedefParser::EQ);
          setState(203);
          explicitPrimitiveLiteral();
        }
        break;
      }

      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SymrefMemberDeclarationContext ------------------------------------------------------------------

TypedefParser::SymrefMemberDeclarationContext::SymrefMemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::SymrefMemberDeclarationContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

std::vector<TypedefParser::IdentifierContext *> TypedefParser::SymrefMemberDeclarationContext::identifier() {
  return getRuleContexts<TypedefParser::IdentifierContext>();
}

TypedefParser::IdentifierContext* TypedefParser::SymrefMemberDeclarationContext::identifier(size_t i) {
  return getRuleContext<TypedefParser::IdentifierContext>(i);
}


size_t TypedefParser::SymrefMemberDeclarationContext::getRuleIndex() const {
  return TypedefParser::RuleSymrefMemberDeclaration;
}

void TypedefParser::SymrefMemberDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSymrefMemberDeclaration(this);
}

void TypedefParser::SymrefMemberDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSymrefMemberDeclaration(this);
}


antlrcpp::Any TypedefParser::SymrefMemberDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitSymrefMemberDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::SymrefMemberDeclarationContext* TypedefParser::symrefMemberDeclaration() {
  SymrefMemberDeclarationContext *_localctx = _tracker.createInstance<SymrefMemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 24, TypedefParser::RuleSymrefMemberDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(210);
    dynamic_cast<SymrefMemberDeclarationContext *>(_localctx)->fieldIdentifier = identifier();
    setState(211);
    match(TypedefParser::COLON);
    setState(212);
    dynamic_cast<SymrefMemberDeclarationContext *>(_localctx)->symrefIdentifier = identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImpliedTypePrimitiveMemberDeclarationContext ------------------------------------------------------------------

TypedefParser::ImpliedTypePrimitiveMemberDeclarationContext::ImpliedTypePrimitiveMemberDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::ImpliedTypePrimitiveMemberDeclarationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::ImpliedTypePrimitiveMemberDeclarationContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::FloatLiteralContext* TypedefParser::ImpliedTypePrimitiveMemberDeclarationContext::floatLiteral() {
  return getRuleContext<TypedefParser::FloatLiteralContext>(0);
}

TypedefParser::IntLiteralContext* TypedefParser::ImpliedTypePrimitiveMemberDeclarationContext::intLiteral() {
  return getRuleContext<TypedefParser::IntLiteralContext>(0);
}

TypedefParser::ExplicitPrimitiveLiteralContext* TypedefParser::ImpliedTypePrimitiveMemberDeclarationContext::explicitPrimitiveLiteral() {
  return getRuleContext<TypedefParser::ExplicitPrimitiveLiteralContext>(0);
}


size_t TypedefParser::ImpliedTypePrimitiveMemberDeclarationContext::getRuleIndex() const {
  return TypedefParser::RuleImpliedTypePrimitiveMemberDeclaration;
}

void TypedefParser::ImpliedTypePrimitiveMemberDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImpliedTypePrimitiveMemberDeclaration(this);
}

void TypedefParser::ImpliedTypePrimitiveMemberDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImpliedTypePrimitiveMemberDeclaration(this);
}


antlrcpp::Any TypedefParser::ImpliedTypePrimitiveMemberDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitImpliedTypePrimitiveMemberDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::ImpliedTypePrimitiveMemberDeclarationContext* TypedefParser::impliedTypePrimitiveMemberDeclaration() {
  ImpliedTypePrimitiveMemberDeclarationContext *_localctx = _tracker.createInstance<ImpliedTypePrimitiveMemberDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 26, TypedefParser::RuleImpliedTypePrimitiveMemberDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    identifier();
    setState(215);
    match(TypedefParser::EQ);
    setState(219);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(216);
      floatLiteral();
      break;
    }

    case 2: {
      setState(217);
      intLiteral();
      break;
    }

    case 3: {
      setState(218);
      explicitPrimitiveLiteral();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InlineStructDeclarationContext ------------------------------------------------------------------

TypedefParser::InlineStructDeclarationContext::InlineStructDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::InlineStructDeclarationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::InlineStructDeclarationContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

tree::TerminalNode* TypedefParser::InlineStructDeclarationContext::KW_STRUCT() {
  return getToken(TypedefParser::KW_STRUCT, 0);
}

tree::TerminalNode* TypedefParser::InlineStructDeclarationContext::LBRACE() {
  return getToken(TypedefParser::LBRACE, 0);
}

tree::TerminalNode* TypedefParser::InlineStructDeclarationContext::RBRACE() {
  return getToken(TypedefParser::RBRACE, 0);
}

std::vector<TypedefParser::StructMemberContext *> TypedefParser::InlineStructDeclarationContext::structMember() {
  return getRuleContexts<TypedefParser::StructMemberContext>();
}

TypedefParser::StructMemberContext* TypedefParser::InlineStructDeclarationContext::structMember(size_t i) {
  return getRuleContext<TypedefParser::StructMemberContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::InlineStructDeclarationContext::SEMI() {
  return getTokens(TypedefParser::SEMI);
}

tree::TerminalNode* TypedefParser::InlineStructDeclarationContext::SEMI(size_t i) {
  return getToken(TypedefParser::SEMI, i);
}


size_t TypedefParser::InlineStructDeclarationContext::getRuleIndex() const {
  return TypedefParser::RuleInlineStructDeclaration;
}

void TypedefParser::InlineStructDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineStructDeclaration(this);
}

void TypedefParser::InlineStructDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineStructDeclaration(this);
}


antlrcpp::Any TypedefParser::InlineStructDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitInlineStructDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::InlineStructDeclarationContext* TypedefParser::inlineStructDeclaration() {
  InlineStructDeclarationContext *_localctx = _tracker.createInstance<InlineStructDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 28, TypedefParser::RuleInlineStructDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(221);
    identifier();
    setState(222);
    match(TypedefParser::COLON);
    setState(223);
    match(TypedefParser::KW_STRUCT);
    setState(224);
    match(TypedefParser::LBRACE);
    setState(230);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypedefParser::KW_STRUCT)
      | (1ULL << TypedefParser::KW_VARIANT)
      | (1ULL << TypedefParser::KW_VECTOR)
      | (1ULL << TypedefParser::KW_MAP))) != 0) || _la == TypedefParser::NON_KEYWORD_IDENTIFIER

    || _la == TypedefParser::RAW_ESCAPE) {
      setState(225);
      structMember();
      setState(226);
      match(TypedefParser::SEMI);
      setState(232);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(233);
    match(TypedefParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InlineVariantDeclarationContext ------------------------------------------------------------------

TypedefParser::InlineVariantDeclarationContext::InlineVariantDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::InlineVariantDeclarationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::InlineVariantDeclarationContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

tree::TerminalNode* TypedefParser::InlineVariantDeclarationContext::KW_VARIANT() {
  return getToken(TypedefParser::KW_VARIANT, 0);
}

tree::TerminalNode* TypedefParser::InlineVariantDeclarationContext::LBRACE() {
  return getToken(TypedefParser::LBRACE, 0);
}

tree::TerminalNode* TypedefParser::InlineVariantDeclarationContext::RBRACE() {
  return getToken(TypedefParser::RBRACE, 0);
}

std::vector<TypedefParser::StructMemberContext *> TypedefParser::InlineVariantDeclarationContext::structMember() {
  return getRuleContexts<TypedefParser::StructMemberContext>();
}

TypedefParser::StructMemberContext* TypedefParser::InlineVariantDeclarationContext::structMember(size_t i) {
  return getRuleContext<TypedefParser::StructMemberContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::InlineVariantDeclarationContext::SEMI() {
  return getTokens(TypedefParser::SEMI);
}

tree::TerminalNode* TypedefParser::InlineVariantDeclarationContext::SEMI(size_t i) {
  return getToken(TypedefParser::SEMI, i);
}


size_t TypedefParser::InlineVariantDeclarationContext::getRuleIndex() const {
  return TypedefParser::RuleInlineVariantDeclaration;
}

void TypedefParser::InlineVariantDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineVariantDeclaration(this);
}

void TypedefParser::InlineVariantDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineVariantDeclaration(this);
}


antlrcpp::Any TypedefParser::InlineVariantDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitInlineVariantDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::InlineVariantDeclarationContext* TypedefParser::inlineVariantDeclaration() {
  InlineVariantDeclarationContext *_localctx = _tracker.createInstance<InlineVariantDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 30, TypedefParser::RuleInlineVariantDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    identifier();
    setState(236);
    match(TypedefParser::COLON);
    setState(237);
    match(TypedefParser::KW_VARIANT);
    setState(238);
    match(TypedefParser::LBRACE);
    setState(244);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypedefParser::KW_STRUCT)
      | (1ULL << TypedefParser::KW_VARIANT)
      | (1ULL << TypedefParser::KW_VECTOR)
      | (1ULL << TypedefParser::KW_MAP))) != 0) || _la == TypedefParser::NON_KEYWORD_IDENTIFIER

    || _la == TypedefParser::RAW_ESCAPE) {
      setState(239);
      structMember();
      setState(240);
      match(TypedefParser::SEMI);
      setState(246);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(247);
    match(TypedefParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InlineVectorDeclarationContext ------------------------------------------------------------------

TypedefParser::InlineVectorDeclarationContext::InlineVectorDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::InlineVectorDeclarationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::InlineVectorDeclarationContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

tree::TerminalNode* TypedefParser::InlineVectorDeclarationContext::KW_VECTOR() {
  return getToken(TypedefParser::KW_VECTOR, 0);
}

tree::TerminalNode* TypedefParser::InlineVectorDeclarationContext::LT() {
  return getToken(TypedefParser::LT, 0);
}

TypedefParser::TypeParameterContext* TypedefParser::InlineVectorDeclarationContext::typeParameter() {
  return getRuleContext<TypedefParser::TypeParameterContext>(0);
}

tree::TerminalNode* TypedefParser::InlineVectorDeclarationContext::GT() {
  return getToken(TypedefParser::GT, 0);
}


size_t TypedefParser::InlineVectorDeclarationContext::getRuleIndex() const {
  return TypedefParser::RuleInlineVectorDeclaration;
}

void TypedefParser::InlineVectorDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineVectorDeclaration(this);
}

void TypedefParser::InlineVectorDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineVectorDeclaration(this);
}


antlrcpp::Any TypedefParser::InlineVectorDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitInlineVectorDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::InlineVectorDeclarationContext* TypedefParser::inlineVectorDeclaration() {
  InlineVectorDeclarationContext *_localctx = _tracker.createInstance<InlineVectorDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 32, TypedefParser::RuleInlineVectorDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(249);
    identifier();
    setState(250);
    match(TypedefParser::COLON);
    setState(251);
    match(TypedefParser::KW_VECTOR);
    setState(252);
    match(TypedefParser::LT);
    setState(253);
    typeParameter();
    setState(254);
    match(TypedefParser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InlineMapDeclarationContext ------------------------------------------------------------------

TypedefParser::InlineMapDeclarationContext::InlineMapDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::InlineMapDeclarationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::InlineMapDeclarationContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

tree::TerminalNode* TypedefParser::InlineMapDeclarationContext::KW_MAP() {
  return getToken(TypedefParser::KW_MAP, 0);
}

tree::TerminalNode* TypedefParser::InlineMapDeclarationContext::LT() {
  return getToken(TypedefParser::LT, 0);
}

tree::TerminalNode* TypedefParser::InlineMapDeclarationContext::COMMA() {
  return getToken(TypedefParser::COMMA, 0);
}

tree::TerminalNode* TypedefParser::InlineMapDeclarationContext::GT() {
  return getToken(TypedefParser::GT, 0);
}

std::vector<TypedefParser::TypeParameterContext *> TypedefParser::InlineMapDeclarationContext::typeParameter() {
  return getRuleContexts<TypedefParser::TypeParameterContext>();
}

TypedefParser::TypeParameterContext* TypedefParser::InlineMapDeclarationContext::typeParameter(size_t i) {
  return getRuleContext<TypedefParser::TypeParameterContext>(i);
}


size_t TypedefParser::InlineMapDeclarationContext::getRuleIndex() const {
  return TypedefParser::RuleInlineMapDeclaration;
}

void TypedefParser::InlineMapDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineMapDeclaration(this);
}

void TypedefParser::InlineMapDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineMapDeclaration(this);
}


antlrcpp::Any TypedefParser::InlineMapDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitInlineMapDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::InlineMapDeclarationContext* TypedefParser::inlineMapDeclaration() {
  InlineMapDeclarationContext *_localctx = _tracker.createInstance<InlineMapDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 34, TypedefParser::RuleInlineMapDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(256);
    identifier();
    setState(257);
    match(TypedefParser::COLON);
    setState(258);
    match(TypedefParser::KW_MAP);
    setState(259);
    match(TypedefParser::LT);
    setState(260);
    dynamic_cast<InlineMapDeclarationContext *>(_localctx)->key = typeParameter();
    setState(261);
    match(TypedefParser::COMMA);
    setState(262);
    dynamic_cast<InlineMapDeclarationContext *>(_localctx)->val = typeParameter();
    setState(263);
    match(TypedefParser::GT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypedefVersionDeclarationContext ------------------------------------------------------------------

TypedefParser::TypedefVersionDeclarationContext::TypedefVersionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::TypedefVersionDeclarationContext::KW_TYPEDEF() {
  return getToken(TypedefParser::KW_TYPEDEF, 0);
}

tree::TerminalNode* TypedefParser::TypedefVersionDeclarationContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::IdentifierContext* TypedefParser::TypedefVersionDeclarationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::TypedefVersionDeclarationContext::SEMI() {
  return getToken(TypedefParser::SEMI, 0);
}


size_t TypedefParser::TypedefVersionDeclarationContext::getRuleIndex() const {
  return TypedefParser::RuleTypedefVersionDeclaration;
}

void TypedefParser::TypedefVersionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypedefVersionDeclaration(this);
}

void TypedefParser::TypedefVersionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypedefVersionDeclaration(this);
}


antlrcpp::Any TypedefParser::TypedefVersionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTypedefVersionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TypedefVersionDeclarationContext* TypedefParser::typedefVersionDeclaration() {
  TypedefVersionDeclarationContext *_localctx = _tracker.createInstance<TypedefVersionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 36, TypedefParser::RuleTypedefVersionDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(265);
    match(TypedefParser::KW_TYPEDEF);
    setState(266);
    match(TypedefParser::EQ);
    setState(267);
    identifier();
    setState(268);
    match(TypedefParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleDeclarationContext ------------------------------------------------------------------

TypedefParser::ModuleDeclarationContext::ModuleDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::ModuleDeclarationContext::KW_MODULE() {
  return getToken(TypedefParser::KW_MODULE, 0);
}

TypedefParser::SimplePathContext* TypedefParser::ModuleDeclarationContext::simplePath() {
  return getRuleContext<TypedefParser::SimplePathContext>(0);
}

tree::TerminalNode* TypedefParser::ModuleDeclarationContext::SEMI() {
  return getToken(TypedefParser::SEMI, 0);
}


size_t TypedefParser::ModuleDeclarationContext::getRuleIndex() const {
  return TypedefParser::RuleModuleDeclaration;
}

void TypedefParser::ModuleDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleDeclaration(this);
}

void TypedefParser::ModuleDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleDeclaration(this);
}


antlrcpp::Any TypedefParser::ModuleDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitModuleDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::ModuleDeclarationContext* TypedefParser::moduleDeclaration() {
  ModuleDeclarationContext *_localctx = _tracker.createInstance<ModuleDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 38, TypedefParser::RuleModuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(270);
    match(TypedefParser::KW_MODULE);
    setState(271);
    simplePath();
    setState(272);
    match(TypedefParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UseDeclarationContext ------------------------------------------------------------------

TypedefParser::UseDeclarationContext::UseDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::UseDeclarationContext::KW_USE() {
  return getToken(TypedefParser::KW_USE, 0);
}

TypedefParser::UseTreeContext* TypedefParser::UseDeclarationContext::useTree() {
  return getRuleContext<TypedefParser::UseTreeContext>(0);
}

tree::TerminalNode* TypedefParser::UseDeclarationContext::SEMI() {
  return getToken(TypedefParser::SEMI, 0);
}


size_t TypedefParser::UseDeclarationContext::getRuleIndex() const {
  return TypedefParser::RuleUseDeclaration;
}

void TypedefParser::UseDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUseDeclaration(this);
}

void TypedefParser::UseDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUseDeclaration(this);
}


antlrcpp::Any TypedefParser::UseDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitUseDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::UseDeclarationContext* TypedefParser::useDeclaration() {
  UseDeclarationContext *_localctx = _tracker.createInstance<UseDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 40, TypedefParser::RuleUseDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(274);
    match(TypedefParser::KW_USE);
    setState(275);
    useTree();
    setState(276);
    match(TypedefParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UseTreeContext ------------------------------------------------------------------

TypedefParser::UseTreeContext::UseTreeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::UseTreeContext::STAR() {
  return getToken(TypedefParser::STAR, 0);
}

tree::TerminalNode* TypedefParser::UseTreeContext::LBRACE() {
  return getToken(TypedefParser::LBRACE, 0);
}

tree::TerminalNode* TypedefParser::UseTreeContext::RBRACE() {
  return getToken(TypedefParser::RBRACE, 0);
}

tree::TerminalNode* TypedefParser::UseTreeContext::PATHSEP() {
  return getToken(TypedefParser::PATHSEP, 0);
}

std::vector<TypedefParser::UseTreeContext *> TypedefParser::UseTreeContext::useTree() {
  return getRuleContexts<TypedefParser::UseTreeContext>();
}

TypedefParser::UseTreeContext* TypedefParser::UseTreeContext::useTree(size_t i) {
  return getRuleContext<TypedefParser::UseTreeContext>(i);
}

TypedefParser::SimplePathContext* TypedefParser::UseTreeContext::simplePath() {
  return getRuleContext<TypedefParser::SimplePathContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::UseTreeContext::COMMA() {
  return getTokens(TypedefParser::COMMA);
}

tree::TerminalNode* TypedefParser::UseTreeContext::COMMA(size_t i) {
  return getToken(TypedefParser::COMMA, i);
}

tree::TerminalNode* TypedefParser::UseTreeContext::KW_AS() {
  return getToken(TypedefParser::KW_AS, 0);
}

TypedefParser::IdentifierContext* TypedefParser::UseTreeContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}


size_t TypedefParser::UseTreeContext::getRuleIndex() const {
  return TypedefParser::RuleUseTree;
}

void TypedefParser::UseTreeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUseTree(this);
}

void TypedefParser::UseTreeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUseTree(this);
}


antlrcpp::Any TypedefParser::UseTreeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitUseTree(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::UseTreeContext* TypedefParser::useTree() {
  UseTreeContext *_localctx = _tracker.createInstance<UseTreeContext>(_ctx, getState());
  enterRule(_localctx, 42, TypedefParser::RuleUseTree);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(307);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(282);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypedefParser::NON_KEYWORD_IDENTIFIER

      || _la == TypedefParser::RAW_ESCAPE || _la == TypedefParser::PATHSEP) {
        setState(279);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          setState(278);
          simplePath();
          break;
        }

        }
        setState(281);
        match(TypedefParser::PATHSEP);
      }
      setState(300);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypedefParser::STAR: {
          setState(284);
          match(TypedefParser::STAR);
          break;
        }

        case TypedefParser::LBRACE: {
          setState(285);
          match(TypedefParser::LBRACE);
          setState(297);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (((((_la - 85) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 85)) & ((1ULL << (TypedefParser::NON_KEYWORD_IDENTIFIER - 85))
            | (1ULL << (TypedefParser::RAW_ESCAPE - 85))
            | (1ULL << (TypedefParser::STAR - 85)))) != 0) || _la == TypedefParser::PATHSEP

          || _la == TypedefParser::LBRACE) {
            setState(286);
            useTree();
            setState(291);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
              if (alt == 1) {
                setState(287);
                match(TypedefParser::COMMA);
                setState(288);
                useTree(); 
              }
              setState(293);
              _errHandler->sync(this);
              alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
            }
            setState(295);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == TypedefParser::COMMA) {
              setState(294);
              match(TypedefParser::COMMA);
            }
          }
          setState(299);
          match(TypedefParser::RBRACE);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(302);
      simplePath();
      setState(305);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypedefParser::KW_AS) {
        setState(303);
        match(TypedefParser::KW_AS);
        setState(304);
        identifier();
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimplePathContext ------------------------------------------------------------------

TypedefParser::SimplePathContext::SimplePathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypedefParser::IdentifierContext *> TypedefParser::SimplePathContext::identifier() {
  return getRuleContexts<TypedefParser::IdentifierContext>();
}

TypedefParser::IdentifierContext* TypedefParser::SimplePathContext::identifier(size_t i) {
  return getRuleContext<TypedefParser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::SimplePathContext::PATHSEP() {
  return getTokens(TypedefParser::PATHSEP);
}

tree::TerminalNode* TypedefParser::SimplePathContext::PATHSEP(size_t i) {
  return getToken(TypedefParser::PATHSEP, i);
}


size_t TypedefParser::SimplePathContext::getRuleIndex() const {
  return TypedefParser::RuleSimplePath;
}

void TypedefParser::SimplePathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimplePath(this);
}

void TypedefParser::SimplePathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimplePath(this);
}


antlrcpp::Any TypedefParser::SimplePathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitSimplePath(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::SimplePathContext* TypedefParser::simplePath() {
  SimplePathContext *_localctx = _tracker.createInstance<SimplePathContext>(_ctx, getState());
  enterRule(_localctx, 44, TypedefParser::RuleSimplePath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(310);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::PATHSEP) {
      setState(309);
      dynamic_cast<SimplePathContext *>(_localctx)->leading_pathsep = match(TypedefParser::PATHSEP);
    }
    setState(312);
    identifier();
    setState(317);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(313);
        match(TypedefParser::PATHSEP);
        setState(314);
        identifier(); 
      }
      setState(319);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplicitPrimitiveLiteralContext ------------------------------------------------------------------

TypedefParser::ExplicitPrimitiveLiteralContext::ExplicitPrimitiveLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::BoolLiteralContext* TypedefParser::ExplicitPrimitiveLiteralContext::boolLiteral() {
  return getRuleContext<TypedefParser::BoolLiteralContext>(0);
}

TypedefParser::CharLiteralContext* TypedefParser::ExplicitPrimitiveLiteralContext::charLiteral() {
  return getRuleContext<TypedefParser::CharLiteralContext>(0);
}

TypedefParser::StringLiteralContext* TypedefParser::ExplicitPrimitiveLiteralContext::stringLiteral() {
  return getRuleContext<TypedefParser::StringLiteralContext>(0);
}

TypedefParser::F32LiteralContext* TypedefParser::ExplicitPrimitiveLiteralContext::f32Literal() {
  return getRuleContext<TypedefParser::F32LiteralContext>(0);
}

TypedefParser::F64LiteralContext* TypedefParser::ExplicitPrimitiveLiteralContext::f64Literal() {
  return getRuleContext<TypedefParser::F64LiteralContext>(0);
}

TypedefParser::U8LiteralContext* TypedefParser::ExplicitPrimitiveLiteralContext::u8Literal() {
  return getRuleContext<TypedefParser::U8LiteralContext>(0);
}

TypedefParser::U16LiteralContext* TypedefParser::ExplicitPrimitiveLiteralContext::u16Literal() {
  return getRuleContext<TypedefParser::U16LiteralContext>(0);
}

TypedefParser::U32LiteralContext* TypedefParser::ExplicitPrimitiveLiteralContext::u32Literal() {
  return getRuleContext<TypedefParser::U32LiteralContext>(0);
}

TypedefParser::U64LiteralContext* TypedefParser::ExplicitPrimitiveLiteralContext::u64Literal() {
  return getRuleContext<TypedefParser::U64LiteralContext>(0);
}

TypedefParser::I8LiteralContext* TypedefParser::ExplicitPrimitiveLiteralContext::i8Literal() {
  return getRuleContext<TypedefParser::I8LiteralContext>(0);
}

TypedefParser::I16LiteralContext* TypedefParser::ExplicitPrimitiveLiteralContext::i16Literal() {
  return getRuleContext<TypedefParser::I16LiteralContext>(0);
}

TypedefParser::I32LiteralContext* TypedefParser::ExplicitPrimitiveLiteralContext::i32Literal() {
  return getRuleContext<TypedefParser::I32LiteralContext>(0);
}

TypedefParser::I64LiteralContext* TypedefParser::ExplicitPrimitiveLiteralContext::i64Literal() {
  return getRuleContext<TypedefParser::I64LiteralContext>(0);
}


size_t TypedefParser::ExplicitPrimitiveLiteralContext::getRuleIndex() const {
  return TypedefParser::RuleExplicitPrimitiveLiteral;
}

void TypedefParser::ExplicitPrimitiveLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplicitPrimitiveLiteral(this);
}

void TypedefParser::ExplicitPrimitiveLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplicitPrimitiveLiteral(this);
}


antlrcpp::Any TypedefParser::ExplicitPrimitiveLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitExplicitPrimitiveLiteral(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::ExplicitPrimitiveLiteralContext* TypedefParser::explicitPrimitiveLiteral() {
  ExplicitPrimitiveLiteralContext *_localctx = _tracker.createInstance<ExplicitPrimitiveLiteralContext>(_ctx, getState());
  enterRule(_localctx, 46, TypedefParser::RuleExplicitPrimitiveLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(333);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(320);
      boolLiteral();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(321);
      charLiteral();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(322);
      stringLiteral();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(323);
      f32Literal();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(324);
      f64Literal();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(325);
      u8Literal();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(326);
      u16Literal();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(327);
      u32Literal();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(328);
      u64Literal();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(329);
      i8Literal();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(330);
      i16Literal();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(331);
      i32Literal();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(332);
      i64Literal();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BoolLiteralContext ------------------------------------------------------------------

TypedefParser::BoolLiteralContext::BoolLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::BoolLiteralContext::KW_TRUE() {
  return getToken(TypedefParser::KW_TRUE, 0);
}

tree::TerminalNode* TypedefParser::BoolLiteralContext::KW_FALSE() {
  return getToken(TypedefParser::KW_FALSE, 0);
}


size_t TypedefParser::BoolLiteralContext::getRuleIndex() const {
  return TypedefParser::RuleBoolLiteral;
}

void TypedefParser::BoolLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolLiteral(this);
}

void TypedefParser::BoolLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolLiteral(this);
}


antlrcpp::Any TypedefParser::BoolLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitBoolLiteral(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::BoolLiteralContext* TypedefParser::boolLiteral() {
  BoolLiteralContext *_localctx = _tracker.createInstance<BoolLiteralContext>(_ctx, getState());
  enterRule(_localctx, 48, TypedefParser::RuleBoolLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(335);
    _la = _input->LA(1);
    if (!(_la == TypedefParser::KW_FALSE

    || _la == TypedefParser::KW_TRUE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharLiteralContext ------------------------------------------------------------------

TypedefParser::CharLiteralContext::CharLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::CharLiteralContext::CHAR_LITERAL() {
  return getToken(TypedefParser::CHAR_LITERAL, 0);
}


size_t TypedefParser::CharLiteralContext::getRuleIndex() const {
  return TypedefParser::RuleCharLiteral;
}

void TypedefParser::CharLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharLiteral(this);
}

void TypedefParser::CharLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharLiteral(this);
}


antlrcpp::Any TypedefParser::CharLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitCharLiteral(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::CharLiteralContext* TypedefParser::charLiteral() {
  CharLiteralContext *_localctx = _tracker.createInstance<CharLiteralContext>(_ctx, getState());
  enterRule(_localctx, 50, TypedefParser::RuleCharLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(337);
    match(TypedefParser::CHAR_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringLiteralContext ------------------------------------------------------------------

TypedefParser::StringLiteralContext::StringLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::StringLiteralContext::STRING_LITERAL() {
  return getToken(TypedefParser::STRING_LITERAL, 0);
}

tree::TerminalNode* TypedefParser::StringLiteralContext::RAW_STRING_LITERAL() {
  return getToken(TypedefParser::RAW_STRING_LITERAL, 0);
}


size_t TypedefParser::StringLiteralContext::getRuleIndex() const {
  return TypedefParser::RuleStringLiteral;
}

void TypedefParser::StringLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringLiteral(this);
}

void TypedefParser::StringLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringLiteral(this);
}


antlrcpp::Any TypedefParser::StringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitStringLiteral(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::StringLiteralContext* TypedefParser::stringLiteral() {
  StringLiteralContext *_localctx = _tracker.createInstance<StringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 52, TypedefParser::RuleStringLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(339);
    _la = _input->LA(1);
    if (!(_la == TypedefParser::STRING_LITERAL

    || _la == TypedefParser::RAW_STRING_LITERAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- F32LiteralContext ------------------------------------------------------------------

TypedefParser::F32LiteralContext::F32LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::FloatLiteralContext* TypedefParser::F32LiteralContext::floatLiteral() {
  return getRuleContext<TypedefParser::FloatLiteralContext>(0);
}

tree::TerminalNode* TypedefParser::F32LiteralContext::KW_F32() {
  return getToken(TypedefParser::KW_F32, 0);
}


size_t TypedefParser::F32LiteralContext::getRuleIndex() const {
  return TypedefParser::RuleF32Literal;
}

void TypedefParser::F32LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterF32Literal(this);
}

void TypedefParser::F32LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitF32Literal(this);
}


antlrcpp::Any TypedefParser::F32LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitF32Literal(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::F32LiteralContext* TypedefParser::f32Literal() {
  F32LiteralContext *_localctx = _tracker.createInstance<F32LiteralContext>(_ctx, getState());
  enterRule(_localctx, 54, TypedefParser::RuleF32Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(341);
    floatLiteral();
    setState(342);
    match(TypedefParser::KW_F32);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- F64LiteralContext ------------------------------------------------------------------

TypedefParser::F64LiteralContext::F64LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::FloatLiteralContext* TypedefParser::F64LiteralContext::floatLiteral() {
  return getRuleContext<TypedefParser::FloatLiteralContext>(0);
}

tree::TerminalNode* TypedefParser::F64LiteralContext::KW_F64() {
  return getToken(TypedefParser::KW_F64, 0);
}


size_t TypedefParser::F64LiteralContext::getRuleIndex() const {
  return TypedefParser::RuleF64Literal;
}

void TypedefParser::F64LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterF64Literal(this);
}

void TypedefParser::F64LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitF64Literal(this);
}


antlrcpp::Any TypedefParser::F64LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitF64Literal(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::F64LiteralContext* TypedefParser::f64Literal() {
  F64LiteralContext *_localctx = _tracker.createInstance<F64LiteralContext>(_ctx, getState());
  enterRule(_localctx, 56, TypedefParser::RuleF64Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(344);
    floatLiteral();
    setState(345);
    match(TypedefParser::KW_F64);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- U8LiteralContext ------------------------------------------------------------------

TypedefParser::U8LiteralContext::U8LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IntLiteralContext* TypedefParser::U8LiteralContext::intLiteral() {
  return getRuleContext<TypedefParser::IntLiteralContext>(0);
}

tree::TerminalNode* TypedefParser::U8LiteralContext::KW_U8() {
  return getToken(TypedefParser::KW_U8, 0);
}


size_t TypedefParser::U8LiteralContext::getRuleIndex() const {
  return TypedefParser::RuleU8Literal;
}

void TypedefParser::U8LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterU8Literal(this);
}

void TypedefParser::U8LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitU8Literal(this);
}


antlrcpp::Any TypedefParser::U8LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitU8Literal(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::U8LiteralContext* TypedefParser::u8Literal() {
  U8LiteralContext *_localctx = _tracker.createInstance<U8LiteralContext>(_ctx, getState());
  enterRule(_localctx, 58, TypedefParser::RuleU8Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(347);
    intLiteral();
    setState(348);
    match(TypedefParser::KW_U8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- U16LiteralContext ------------------------------------------------------------------

TypedefParser::U16LiteralContext::U16LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IntLiteralContext* TypedefParser::U16LiteralContext::intLiteral() {
  return getRuleContext<TypedefParser::IntLiteralContext>(0);
}

tree::TerminalNode* TypedefParser::U16LiteralContext::KW_U16() {
  return getToken(TypedefParser::KW_U16, 0);
}


size_t TypedefParser::U16LiteralContext::getRuleIndex() const {
  return TypedefParser::RuleU16Literal;
}

void TypedefParser::U16LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterU16Literal(this);
}

void TypedefParser::U16LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitU16Literal(this);
}


antlrcpp::Any TypedefParser::U16LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitU16Literal(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::U16LiteralContext* TypedefParser::u16Literal() {
  U16LiteralContext *_localctx = _tracker.createInstance<U16LiteralContext>(_ctx, getState());
  enterRule(_localctx, 60, TypedefParser::RuleU16Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(350);
    intLiteral();
    setState(351);
    match(TypedefParser::KW_U16);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- U32LiteralContext ------------------------------------------------------------------

TypedefParser::U32LiteralContext::U32LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IntLiteralContext* TypedefParser::U32LiteralContext::intLiteral() {
  return getRuleContext<TypedefParser::IntLiteralContext>(0);
}

tree::TerminalNode* TypedefParser::U32LiteralContext::KW_U32() {
  return getToken(TypedefParser::KW_U32, 0);
}


size_t TypedefParser::U32LiteralContext::getRuleIndex() const {
  return TypedefParser::RuleU32Literal;
}

void TypedefParser::U32LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterU32Literal(this);
}

void TypedefParser::U32LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitU32Literal(this);
}


antlrcpp::Any TypedefParser::U32LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitU32Literal(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::U32LiteralContext* TypedefParser::u32Literal() {
  U32LiteralContext *_localctx = _tracker.createInstance<U32LiteralContext>(_ctx, getState());
  enterRule(_localctx, 62, TypedefParser::RuleU32Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(353);
    intLiteral();
    setState(354);
    match(TypedefParser::KW_U32);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- U64LiteralContext ------------------------------------------------------------------

TypedefParser::U64LiteralContext::U64LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IntLiteralContext* TypedefParser::U64LiteralContext::intLiteral() {
  return getRuleContext<TypedefParser::IntLiteralContext>(0);
}

tree::TerminalNode* TypedefParser::U64LiteralContext::KW_U64() {
  return getToken(TypedefParser::KW_U64, 0);
}


size_t TypedefParser::U64LiteralContext::getRuleIndex() const {
  return TypedefParser::RuleU64Literal;
}

void TypedefParser::U64LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterU64Literal(this);
}

void TypedefParser::U64LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitU64Literal(this);
}


antlrcpp::Any TypedefParser::U64LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitU64Literal(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::U64LiteralContext* TypedefParser::u64Literal() {
  U64LiteralContext *_localctx = _tracker.createInstance<U64LiteralContext>(_ctx, getState());
  enterRule(_localctx, 64, TypedefParser::RuleU64Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(356);
    intLiteral();
    setState(357);
    match(TypedefParser::KW_U64);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- I8LiteralContext ------------------------------------------------------------------

TypedefParser::I8LiteralContext::I8LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IntLiteralContext* TypedefParser::I8LiteralContext::intLiteral() {
  return getRuleContext<TypedefParser::IntLiteralContext>(0);
}

tree::TerminalNode* TypedefParser::I8LiteralContext::KW_I8() {
  return getToken(TypedefParser::KW_I8, 0);
}


size_t TypedefParser::I8LiteralContext::getRuleIndex() const {
  return TypedefParser::RuleI8Literal;
}

void TypedefParser::I8LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterI8Literal(this);
}

void TypedefParser::I8LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitI8Literal(this);
}


antlrcpp::Any TypedefParser::I8LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitI8Literal(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::I8LiteralContext* TypedefParser::i8Literal() {
  I8LiteralContext *_localctx = _tracker.createInstance<I8LiteralContext>(_ctx, getState());
  enterRule(_localctx, 66, TypedefParser::RuleI8Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(359);
    intLiteral();
    setState(360);
    match(TypedefParser::KW_I8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- I16LiteralContext ------------------------------------------------------------------

TypedefParser::I16LiteralContext::I16LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IntLiteralContext* TypedefParser::I16LiteralContext::intLiteral() {
  return getRuleContext<TypedefParser::IntLiteralContext>(0);
}

tree::TerminalNode* TypedefParser::I16LiteralContext::KW_I16() {
  return getToken(TypedefParser::KW_I16, 0);
}


size_t TypedefParser::I16LiteralContext::getRuleIndex() const {
  return TypedefParser::RuleI16Literal;
}

void TypedefParser::I16LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterI16Literal(this);
}

void TypedefParser::I16LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitI16Literal(this);
}


antlrcpp::Any TypedefParser::I16LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitI16Literal(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::I16LiteralContext* TypedefParser::i16Literal() {
  I16LiteralContext *_localctx = _tracker.createInstance<I16LiteralContext>(_ctx, getState());
  enterRule(_localctx, 68, TypedefParser::RuleI16Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(362);
    intLiteral();
    setState(363);
    match(TypedefParser::KW_I16);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- I32LiteralContext ------------------------------------------------------------------

TypedefParser::I32LiteralContext::I32LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IntLiteralContext* TypedefParser::I32LiteralContext::intLiteral() {
  return getRuleContext<TypedefParser::IntLiteralContext>(0);
}

tree::TerminalNode* TypedefParser::I32LiteralContext::KW_I32() {
  return getToken(TypedefParser::KW_I32, 0);
}


size_t TypedefParser::I32LiteralContext::getRuleIndex() const {
  return TypedefParser::RuleI32Literal;
}

void TypedefParser::I32LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterI32Literal(this);
}

void TypedefParser::I32LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitI32Literal(this);
}


antlrcpp::Any TypedefParser::I32LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitI32Literal(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::I32LiteralContext* TypedefParser::i32Literal() {
  I32LiteralContext *_localctx = _tracker.createInstance<I32LiteralContext>(_ctx, getState());
  enterRule(_localctx, 70, TypedefParser::RuleI32Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(365);
    intLiteral();
    setState(366);
    match(TypedefParser::KW_I32);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- I64LiteralContext ------------------------------------------------------------------

TypedefParser::I64LiteralContext::I64LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IntLiteralContext* TypedefParser::I64LiteralContext::intLiteral() {
  return getRuleContext<TypedefParser::IntLiteralContext>(0);
}

tree::TerminalNode* TypedefParser::I64LiteralContext::KW_I64() {
  return getToken(TypedefParser::KW_I64, 0);
}


size_t TypedefParser::I64LiteralContext::getRuleIndex() const {
  return TypedefParser::RuleI64Literal;
}

void TypedefParser::I64LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterI64Literal(this);
}

void TypedefParser::I64LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitI64Literal(this);
}


antlrcpp::Any TypedefParser::I64LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitI64Literal(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::I64LiteralContext* TypedefParser::i64Literal() {
  I64LiteralContext *_localctx = _tracker.createInstance<I64LiteralContext>(_ctx, getState());
  enterRule(_localctx, 72, TypedefParser::RuleI64Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(368);
    intLiteral();
    setState(369);
    match(TypedefParser::KW_I64);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatLiteralContext ------------------------------------------------------------------

TypedefParser::FloatLiteralContext::FloatLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::FloatLiteralContext::FLOAT_LITERAL() {
  return getToken(TypedefParser::FLOAT_LITERAL, 0);
}


size_t TypedefParser::FloatLiteralContext::getRuleIndex() const {
  return TypedefParser::RuleFloatLiteral;
}

void TypedefParser::FloatLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatLiteral(this);
}

void TypedefParser::FloatLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatLiteral(this);
}


antlrcpp::Any TypedefParser::FloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::FloatLiteralContext* TypedefParser::floatLiteral() {
  FloatLiteralContext *_localctx = _tracker.createInstance<FloatLiteralContext>(_ctx, getState());
  enterRule(_localctx, 74, TypedefParser::RuleFloatLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(371);
    match(TypedefParser::FLOAT_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntLiteralContext ------------------------------------------------------------------

TypedefParser::IntLiteralContext::IntLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::IntLiteralContext::DEC_DIGITS() {
  return getToken(TypedefParser::DEC_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::IntLiteralContext::DEC_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::DEC_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::IntLiteralContext::MINUS() {
  return getToken(TypedefParser::MINUS, 0);
}

tree::TerminalNode* TypedefParser::IntLiteralContext::HEX_PREFIX() {
  return getToken(TypedefParser::HEX_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::IntLiteralContext::HEX_DIGITS() {
  return getToken(TypedefParser::HEX_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::IntLiteralContext::HEX_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::HEX_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::IntLiteralContext::OCT_PREFIX() {
  return getToken(TypedefParser::OCT_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::IntLiteralContext::OCT_DIGITS() {
  return getToken(TypedefParser::OCT_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::IntLiteralContext::OCT_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::OCT_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::IntLiteralContext::BIN_PREFIX() {
  return getToken(TypedefParser::BIN_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::IntLiteralContext::BIN_DIGITS() {
  return getToken(TypedefParser::BIN_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::IntLiteralContext::BIN_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::BIN_DIGITS_UNDERSCORE, 0);
}


size_t TypedefParser::IntLiteralContext::getRuleIndex() const {
  return TypedefParser::RuleIntLiteral;
}

void TypedefParser::IntLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntLiteral(this);
}

void TypedefParser::IntLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntLiteral(this);
}


antlrcpp::Any TypedefParser::IntLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitIntLiteral(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::IntLiteralContext* TypedefParser::intLiteral() {
  IntLiteralContext *_localctx = _tracker.createInstance<IntLiteralContext>(_ctx, getState());
  enterRule(_localctx, 76, TypedefParser::RuleIntLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(383);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        enterOuterAlt(_localctx, 1);
        setState(374);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(373);
          match(TypedefParser::MINUS);
        }
        setState(376);
        _la = _input->LA(1);
        if (!(_la == TypedefParser::DEC_DIGITS

        || _la == TypedefParser::DEC_DIGITS_UNDERSCORE)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case TypedefParser::HEX_PREFIX: {
        enterOuterAlt(_localctx, 2);
        setState(377);
        match(TypedefParser::HEX_PREFIX);
        setState(378);
        _la = _input->LA(1);
        if (!(_la == TypedefParser::HEX_DIGITS

        || _la == TypedefParser::HEX_DIGITS_UNDERSCORE)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case TypedefParser::OCT_PREFIX: {
        enterOuterAlt(_localctx, 3);
        setState(379);
        match(TypedefParser::OCT_PREFIX);
        setState(380);
        _la = _input->LA(1);
        if (!(_la == TypedefParser::OCT_DIGITS

        || _la == TypedefParser::OCT_DIGITS_UNDERSCORE)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case TypedefParser::BIN_PREFIX: {
        enterOuterAlt(_localctx, 4);
        setState(381);
        match(TypedefParser::BIN_PREFIX);
        setState(382);
        _la = _input->LA(1);
        if (!(_la == TypedefParser::BIN_DIGITS

        || _la == TypedefParser::BIN_DIGITS_UNDERSCORE)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

TypedefParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::IdentifierContext::NON_KEYWORD_IDENTIFIER() {
  return getToken(TypedefParser::NON_KEYWORD_IDENTIFIER, 0);
}

tree::TerminalNode* TypedefParser::IdentifierContext::RAW_ESCAPE() {
  return getToken(TypedefParser::RAW_ESCAPE, 0);
}


size_t TypedefParser::IdentifierContext::getRuleIndex() const {
  return TypedefParser::RuleIdentifier;
}

void TypedefParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void TypedefParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}


antlrcpp::Any TypedefParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::IdentifierContext* TypedefParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 78, TypedefParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(388);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::NON_KEYWORD_IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(385);
        dynamic_cast<IdentifierContext *>(_localctx)->nki = match(TypedefParser::NON_KEYWORD_IDENTIFIER);
        break;
      }

      case TypedefParser::RAW_ESCAPE: {
        enterOuterAlt(_localctx, 2);
        setState(386);
        match(TypedefParser::RAW_ESCAPE);
        setState(387);
        dynamic_cast<IdentifierContext *>(_localctx)->nki = match(TypedefParser::NON_KEYWORD_IDENTIFIER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimitiveTypeIdentifierContext ------------------------------------------------------------------

TypedefParser::PrimitiveTypeIdentifierContext::PrimitiveTypeIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::PrimitiveTypeIdentifierContext::KW_BOOL() {
  return getToken(TypedefParser::KW_BOOL, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeIdentifierContext::KW_CHAR() {
  return getToken(TypedefParser::KW_CHAR, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeIdentifierContext::KW_STRING() {
  return getToken(TypedefParser::KW_STRING, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeIdentifierContext::KW_F32() {
  return getToken(TypedefParser::KW_F32, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeIdentifierContext::KW_F64() {
  return getToken(TypedefParser::KW_F64, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeIdentifierContext::KW_U8() {
  return getToken(TypedefParser::KW_U8, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeIdentifierContext::KW_U16() {
  return getToken(TypedefParser::KW_U16, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeIdentifierContext::KW_U32() {
  return getToken(TypedefParser::KW_U32, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeIdentifierContext::KW_U64() {
  return getToken(TypedefParser::KW_U64, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeIdentifierContext::KW_I8() {
  return getToken(TypedefParser::KW_I8, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeIdentifierContext::KW_I16() {
  return getToken(TypedefParser::KW_I16, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeIdentifierContext::KW_I32() {
  return getToken(TypedefParser::KW_I32, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeIdentifierContext::KW_I64() {
  return getToken(TypedefParser::KW_I64, 0);
}


size_t TypedefParser::PrimitiveTypeIdentifierContext::getRuleIndex() const {
  return TypedefParser::RulePrimitiveTypeIdentifier;
}

void TypedefParser::PrimitiveTypeIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimitiveTypeIdentifier(this);
}

void TypedefParser::PrimitiveTypeIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimitiveTypeIdentifier(this);
}


antlrcpp::Any TypedefParser::PrimitiveTypeIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitPrimitiveTypeIdentifier(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::PrimitiveTypeIdentifierContext* TypedefParser::primitiveTypeIdentifier() {
  PrimitiveTypeIdentifierContext *_localctx = _tracker.createInstance<PrimitiveTypeIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 80, TypedefParser::RulePrimitiveTypeIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(390);
    _la = _input->LA(1);
    if (!(((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (TypedefParser::KW_BOOL - 72))
      | (1ULL << (TypedefParser::KW_CHAR - 72))
      | (1ULL << (TypedefParser::KW_STRING - 72))
      | (1ULL << (TypedefParser::KW_F32 - 72))
      | (1ULL << (TypedefParser::KW_F64 - 72))
      | (1ULL << (TypedefParser::KW_U8 - 72))
      | (1ULL << (TypedefParser::KW_U16 - 72))
      | (1ULL << (TypedefParser::KW_U32 - 72))
      | (1ULL << (TypedefParser::KW_U64 - 72))
      | (1ULL << (TypedefParser::KW_I8 - 72))
      | (1ULL << (TypedefParser::KW_I16 - 72))
      | (1ULL << (TypedefParser::KW_I32 - 72))
      | (1ULL << (TypedefParser::KW_I64 - 72)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeywordContext ------------------------------------------------------------------

TypedefParser::KeywordContext::KeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_AS() {
  return getToken(TypedefParser::KW_AS, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_ENUM() {
  return getToken(TypedefParser::KW_ENUM, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_FALSE() {
  return getToken(TypedefParser::KW_FALSE, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_FN() {
  return getToken(TypedefParser::KW_FN, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_IMPL() {
  return getToken(TypedefParser::KW_IMPL, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_MODULE() {
  return getToken(TypedefParser::KW_MODULE, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_STRUCT() {
  return getToken(TypedefParser::KW_STRUCT, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_TRUE() {
  return getToken(TypedefParser::KW_TRUE, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_TYPE() {
  return getToken(TypedefParser::KW_TYPE, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_TYPEDEF() {
  return getToken(TypedefParser::KW_TYPEDEF, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_USE() {
  return getToken(TypedefParser::KW_USE, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_VARIANT() {
  return getToken(TypedefParser::KW_VARIANT, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_VECTOR() {
  return getToken(TypedefParser::KW_VECTOR, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_MAP() {
  return getToken(TypedefParser::KW_MAP, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_AND() {
  return getToken(TypedefParser::KW_AND, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_IN() {
  return getToken(TypedefParser::KW_IN, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_LET() {
  return getToken(TypedefParser::KW_LET, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_NOT() {
  return getToken(TypedefParser::KW_NOT, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_OR() {
  return getToken(TypedefParser::KW_OR, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_SIZEOF() {
  return getToken(TypedefParser::KW_SIZEOF, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_THIS() {
  return getToken(TypedefParser::KW_THIS, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_TRAIT() {
  return getToken(TypedefParser::KW_TRAIT, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_WHERE() {
  return getToken(TypedefParser::KW_WHERE, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_XOR() {
  return getToken(TypedefParser::KW_XOR, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_BREAK() {
  return getToken(TypedefParser::KW_BREAK, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_CONTINUE() {
  return getToken(TypedefParser::KW_CONTINUE, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_DEFAULT() {
  return getToken(TypedefParser::KW_DEFAULT, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_DO() {
  return getToken(TypedefParser::KW_DO, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_ELSE() {
  return getToken(TypedefParser::KW_ELSE, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_FOR() {
  return getToken(TypedefParser::KW_FOR, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_GOTO() {
  return getToken(TypedefParser::KW_GOTO, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_IF() {
  return getToken(TypedefParser::KW_IF, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_LOOP() {
  return getToken(TypedefParser::KW_LOOP, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_MATCH() {
  return getToken(TypedefParser::KW_MATCH, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_MOVE() {
  return getToken(TypedefParser::KW_MOVE, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_RETURN() {
  return getToken(TypedefParser::KW_RETURN, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_TRY() {
  return getToken(TypedefParser::KW_TRY, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_WHILE() {
  return getToken(TypedefParser::KW_WHILE, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_YIELD() {
  return getToken(TypedefParser::KW_YIELD, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_ABSTRACT() {
  return getToken(TypedefParser::KW_ABSTRACT, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_AUTO() {
  return getToken(TypedefParser::KW_AUTO, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_CONST() {
  return getToken(TypedefParser::KW_CONST, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_DOUBLE() {
  return getToken(TypedefParser::KW_DOUBLE, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_EXTERN() {
  return getToken(TypedefParser::KW_EXTERN, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_FINAL() {
  return getToken(TypedefParser::KW_FINAL, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_FLOAT() {
  return getToken(TypedefParser::KW_FLOAT, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_INT() {
  return getToken(TypedefParser::KW_INT, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_LONG() {
  return getToken(TypedefParser::KW_LONG, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_MACRO() {
  return getToken(TypedefParser::KW_MACRO, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_MUT() {
  return getToken(TypedefParser::KW_MUT, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_OVERRIDE() {
  return getToken(TypedefParser::KW_OVERRIDE, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_PRIVATE() {
  return getToken(TypedefParser::KW_PRIVATE, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_PUB() {
  return getToken(TypedefParser::KW_PUB, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_REF() {
  return getToken(TypedefParser::KW_REF, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_SELFTYPE() {
  return getToken(TypedefParser::KW_SELFTYPE, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_SELFVALUE() {
  return getToken(TypedefParser::KW_SELFVALUE, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_SIGNED() {
  return getToken(TypedefParser::KW_SIGNED, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_STATIC() {
  return getToken(TypedefParser::KW_STATIC, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_SUPER() {
  return getToken(TypedefParser::KW_SUPER, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_SWITCH() {
  return getToken(TypedefParser::KW_SWITCH, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_TYPEOF() {
  return getToken(TypedefParser::KW_TYPEOF, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_UNION() {
  return getToken(TypedefParser::KW_UNION, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_UNSAFE() {
  return getToken(TypedefParser::KW_UNSAFE, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_UNSIGNED() {
  return getToken(TypedefParser::KW_UNSIGNED, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_UNSIZED() {
  return getToken(TypedefParser::KW_UNSIZED, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_VIRTUAL() {
  return getToken(TypedefParser::KW_VIRTUAL, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_VOID() {
  return getToken(TypedefParser::KW_VOID, 0);
}

tree::TerminalNode* TypedefParser::KeywordContext::KW_VOLATILE() {
  return getToken(TypedefParser::KW_VOLATILE, 0);
}


size_t TypedefParser::KeywordContext::getRuleIndex() const {
  return TypedefParser::RuleKeyword;
}

void TypedefParser::KeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeyword(this);
}

void TypedefParser::KeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeyword(this);
}


antlrcpp::Any TypedefParser::KeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitKeyword(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::KeywordContext* TypedefParser::keyword() {
  KeywordContext *_localctx = _tracker.createInstance<KeywordContext>(_ctx, getState());
  enterRule(_localctx, 82, TypedefParser::RuleKeyword);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(392);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypedefParser::KW_AS)
      | (1ULL << TypedefParser::KW_ENUM)
      | (1ULL << TypedefParser::KW_FALSE)
      | (1ULL << TypedefParser::KW_FN)
      | (1ULL << TypedefParser::KW_IMPL)
      | (1ULL << TypedefParser::KW_MODULE)
      | (1ULL << TypedefParser::KW_STRUCT)
      | (1ULL << TypedefParser::KW_TRUE)
      | (1ULL << TypedefParser::KW_TYPE)
      | (1ULL << TypedefParser::KW_TYPEDEF)
      | (1ULL << TypedefParser::KW_USE)
      | (1ULL << TypedefParser::KW_VARIANT)
      | (1ULL << TypedefParser::KW_VECTOR)
      | (1ULL << TypedefParser::KW_MAP)
      | (1ULL << TypedefParser::KW_AND)
      | (1ULL << TypedefParser::KW_IN)
      | (1ULL << TypedefParser::KW_LET)
      | (1ULL << TypedefParser::KW_NOT)
      | (1ULL << TypedefParser::KW_OR)
      | (1ULL << TypedefParser::KW_SIZEOF)
      | (1ULL << TypedefParser::KW_THIS)
      | (1ULL << TypedefParser::KW_TRAIT)
      | (1ULL << TypedefParser::KW_WHERE)
      | (1ULL << TypedefParser::KW_XOR)
      | (1ULL << TypedefParser::KW_BREAK)
      | (1ULL << TypedefParser::KW_CONTINUE)
      | (1ULL << TypedefParser::KW_DEFAULT)
      | (1ULL << TypedefParser::KW_DO)
      | (1ULL << TypedefParser::KW_ELSE)
      | (1ULL << TypedefParser::KW_FOR)
      | (1ULL << TypedefParser::KW_GOTO)
      | (1ULL << TypedefParser::KW_IF)
      | (1ULL << TypedefParser::KW_LOOP)
      | (1ULL << TypedefParser::KW_MATCH)
      | (1ULL << TypedefParser::KW_MOVE)
      | (1ULL << TypedefParser::KW_RETURN)
      | (1ULL << TypedefParser::KW_TRY)
      | (1ULL << TypedefParser::KW_WHILE)
      | (1ULL << TypedefParser::KW_YIELD)
      | (1ULL << TypedefParser::KW_ABSTRACT)
      | (1ULL << TypedefParser::KW_AUTO)
      | (1ULL << TypedefParser::KW_CONST)
      | (1ULL << TypedefParser::KW_DOUBLE)
      | (1ULL << TypedefParser::KW_EXTERN)
      | (1ULL << TypedefParser::KW_FINAL)
      | (1ULL << TypedefParser::KW_FLOAT)
      | (1ULL << TypedefParser::KW_INT)
      | (1ULL << TypedefParser::KW_LONG)
      | (1ULL << TypedefParser::KW_MACRO)
      | (1ULL << TypedefParser::KW_MUT)
      | (1ULL << TypedefParser::KW_OVERRIDE)
      | (1ULL << TypedefParser::KW_PRIVATE)
      | (1ULL << TypedefParser::KW_PUB)
      | (1ULL << TypedefParser::KW_REF)
      | (1ULL << TypedefParser::KW_SELFTYPE)
      | (1ULL << TypedefParser::KW_SELFVALUE)
      | (1ULL << TypedefParser::KW_SIGNED)
      | (1ULL << TypedefParser::KW_STATIC)
      | (1ULL << TypedefParser::KW_SUPER)
      | (1ULL << TypedefParser::KW_SWITCH))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (TypedefParser::KW_TYPEOF - 64))
      | (1ULL << (TypedefParser::KW_UNION - 64))
      | (1ULL << (TypedefParser::KW_UNSAFE - 64))
      | (1ULL << (TypedefParser::KW_UNSIGNED - 64))
      | (1ULL << (TypedefParser::KW_UNSIZED - 64))
      | (1ULL << (TypedefParser::KW_VIRTUAL - 64))
      | (1ULL << (TypedefParser::KW_VOID - 64))
      | (1ULL << (TypedefParser::KW_VOLATILE - 64)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> TypedefParser::_decisionToDFA;
atn::PredictionContextCache TypedefParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN TypedefParser::_atn;
std::vector<uint16_t> TypedefParser::_serializedATN;

std::vector<std::string> TypedefParser::_ruleNames = {
  "compilationUnit", "structDeclaration", "variantDeclaration", "vectorDeclaration", 
  "mapDeclaration", "templateDefinition", "templateBlock", "typeParameter", 
  "structMember", "typeDeclaration", "fieldDeclaration", "primitiveMemberDeclaration", 
  "symrefMemberDeclaration", "impliedTypePrimitiveMemberDeclaration", "inlineStructDeclaration", 
  "inlineVariantDeclaration", "inlineVectorDeclaration", "inlineMapDeclaration", 
  "typedefVersionDeclaration", "moduleDeclaration", "useDeclaration", "useTree", 
  "simplePath", "explicitPrimitiveLiteral", "boolLiteral", "charLiteral", 
  "stringLiteral", "f32Literal", "f64Literal", "u8Literal", "u16Literal", 
  "u32Literal", "u64Literal", "i8Literal", "i16Literal", "i32Literal", "i64Literal", 
  "floatLiteral", "intLiteral", "identifier", "primitiveTypeIdentifier", 
  "keyword"
};

std::vector<std::string> TypedefParser::_literalNames = {
  "", "'array'", "'as'", "'enum'", "'false'", "'fn'", "'impl'", "'message'", 
  "'module'", "'struct'", "'true'", "'type'", "'typedef'", "'use'", "'variant'", 
  "'vector'", "'map'", "'template'", "'and'", "'in'", "'let'", "'not'", 
  "'or'", "'sizeof'", "'this'", "'trait'", "'where'", "'xor'", "'break'", 
  "'continue'", "'default'", "'do'", "'else'", "'for'", "'goto'", "'if'", 
  "'loop'", "'match'", "'move'", "'return'", "'try'", "'while'", "'yield'", 
  "'abstract'", "'auto'", "'const'", "'double'", "'extern'", "'final'", 
  "'float'", "'int'", "'long'", "'macro'", "'mut'", "'override'", "'private'", 
  "'pub'", "'ref'", "'Self'", "'self'", "'signed'", "'static'", "'super'", 
  "'switch'", "'typeof'", "'union'", "'unsafe'", "'unsigned'", "'unsized'", 
  "'virtual'", "'void'", "'volatile'", "'bool'", "'char'", "'str'", "'f32'", 
  "'f64'", "'u8'", "'u16'", "'u32'", "'u64'", "'i8'", "'i16'", "'i32'", 
  "'i64'", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "'0x'", "'0o'", "'0b'", "'r#'", 
  "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "'!'", "'&'", "'|'", "'&&'", 
  "'||'", "'+='", "'-='", "'*='", "'/='", "'%='", "'^='", "'&='", "'|='", 
  "'<<='", "'>>='", "'='", "'=='", "'!='", "'>'", "'<'", "'>='", "'<='", 
  "'@'", "'_'", "'.'", "'..'", "'...'", "','", "';'", "':'", "'::'", "'->'", 
  "'=>'", "'#'", "'$'", "'?'", "'{'", "'}'", "'['", "']'", "'('", "')'"
};

std::vector<std::string> TypedefParser::_symbolicNames = {
  "", "KW_ARRAY", "KW_AS", "KW_ENUM", "KW_FALSE", "KW_FN", "KW_IMPL", "KW_MESSAGE", 
  "KW_MODULE", "KW_STRUCT", "KW_TRUE", "KW_TYPE", "KW_TYPEDEF", "KW_USE", 
  "KW_VARIANT", "KW_VECTOR", "KW_MAP", "KW_TEMPLATE", "KW_AND", "KW_IN", 
  "KW_LET", "KW_NOT", "KW_OR", "KW_SIZEOF", "KW_THIS", "KW_TRAIT", "KW_WHERE", 
  "KW_XOR", "KW_BREAK", "KW_CONTINUE", "KW_DEFAULT", "KW_DO", "KW_ELSE", 
  "KW_FOR", "KW_GOTO", "KW_IF", "KW_LOOP", "KW_MATCH", "KW_MOVE", "KW_RETURN", 
  "KW_TRY", "KW_WHILE", "KW_YIELD", "KW_ABSTRACT", "KW_AUTO", "KW_CONST", 
  "KW_DOUBLE", "KW_EXTERN", "KW_FINAL", "KW_FLOAT", "KW_INT", "KW_LONG", 
  "KW_MACRO", "KW_MUT", "KW_OVERRIDE", "KW_PRIVATE", "KW_PUB", "KW_REF", 
  "KW_SELFTYPE", "KW_SELFVALUE", "KW_SIGNED", "KW_STATIC", "KW_SUPER", "KW_SWITCH", 
  "KW_TYPEOF", "KW_UNION", "KW_UNSAFE", "KW_UNSIGNED", "KW_UNSIZED", "KW_VIRTUAL", 
  "KW_VOID", "KW_VOLATILE", "KW_BOOL", "KW_CHAR", "KW_STRING", "KW_F32", 
  "KW_F64", "KW_U8", "KW_U16", "KW_U32", "KW_U64", "KW_I8", "KW_I16", "KW_I32", 
  "KW_I64", "NON_KEYWORD_IDENTIFIER", "LINE_COMMENT", "BLOCK_COMMENT", "INNER_LINE_DOC", 
  "INNER_BLOCK_DOC", "OUTER_LINE_DOC", "OUTER_BLOCK_DOC", "BLOCK_COMMENT_OR_DOC", 
  "SHEBANG", "CHAR_LITERAL", "STRING_LITERAL", "RAW_TEMPLATE_LITERAL", "TEMPLATE_LITERAL", 
  "RAW_STRING_LITERAL", "DEC_DIGITS", "DEC_DIGITS_UNDERSCORE", "HEX_DIGITS", 
  "HEX_DIGITS_UNDERSCORE", "OCT_DIGITS", "OCT_DIGITS_UNDERSCORE", "BIN_DIGITS", 
  "BIN_DIGITS_UNDERSCORE", "FLOAT_LITERAL", "OCT_DIGIT", "DEC_DIGIT", "HEX_DIGIT", 
  "HEX_PREFIX", "OCT_PREFIX", "BIN_PREFIX", "RAW_ESCAPE", "PLUS", "MINUS", 
  "STAR", "SLASH", "PERCENT", "CARET", "NOT", "AND", "OR", "ANDAND", "OROR", 
  "PLUSEQ", "MINUSEQ", "STAREQ", "SLASHEQ", "PERCENTEQ", "CARETEQ", "ANDEQ", 
  "OREQ", "SHLEQ", "SHREQ", "EQ", "EQEQ", "NE", "GT", "LT", "GE", "LE", 
  "AT", "UNDERSCORE", "DOT", "DOTDOT", "DOTDOTDOT", "COMMA", "SEMI", "COLON", 
  "PATHSEP", "RARROW", "FATARROW", "POUND", "DOLLAR", "QUESTION", "LBRACE", 
  "RBRACE", "LBRACK", "RBRACK", "LPAREN", "RPAREN", "WS"
};

dfa::Vocabulary TypedefParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> TypedefParser::_tokenNames;

TypedefParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0xa5, 0x18d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x3, 
    0x2, 0x3, 0x2, 0x5, 0x2, 0x59, 0xa, 0x2, 0x3, 0x2, 0x7, 0x2, 0x5c, 0xa, 
    0x2, 0xc, 0x2, 0xe, 0x2, 0x5f, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x7, 0x2, 0x65, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x68, 0xb, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x7, 0x3, 0x72, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x75, 0xb, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x7, 0x4, 0x7f, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x82, 0xb, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 
    0x9f, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0xa2, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x5, 0x7, 0xa7, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xaf, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 
    0x5, 0xa, 0xb3, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 
    0xb, 0xb9, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x5, 0xc, 0xc1, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xca, 0xa, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xcf, 0xa, 0xd, 0x5, 0xd, 0xd1, 0xa, 0xd, 
    0x5, 0xd, 0xd3, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xde, 0xa, 0xf, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x7, 0x10, 0xe7, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xea, 0xb, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0xf5, 0xa, 0x11, 0xc, 0x11, 0xe, 
    0x11, 0xf8, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x17, 0x5, 0x17, 0x11a, 0xa, 0x17, 0x3, 0x17, 0x5, 0x17, 
    0x11d, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x7, 0x17, 0x124, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x127, 0xb, 0x17, 
    0x3, 0x17, 0x5, 0x17, 0x12a, 0xa, 0x17, 0x5, 0x17, 0x12c, 0xa, 0x17, 
    0x3, 0x17, 0x5, 0x17, 0x12f, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x5, 0x17, 0x134, 0xa, 0x17, 0x5, 0x17, 0x136, 0xa, 0x17, 0x3, 0x18, 
    0x5, 0x18, 0x139, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 
    0x13e, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x141, 0xb, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 
    0x150, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 
    0x27, 0x3, 0x28, 0x5, 0x28, 0x179, 0xa, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x182, 
    0xa, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x187, 0xa, 0x29, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x2, 0x2, 0x2c, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 
    0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 
    0x4c, 0x4e, 0x50, 0x52, 0x54, 0x2, 0xb, 0x3, 0x2, 0x62, 0x63, 0x4, 0x2, 
    0x6, 0x6, 0xc, 0xc, 0x4, 0x2, 0x61, 0x61, 0x64, 0x64, 0x3, 0x2, 0x65, 
    0x66, 0x3, 0x2, 0x67, 0x68, 0x3, 0x2, 0x69, 0x6a, 0x3, 0x2, 0x6b, 0x6c, 
    0x3, 0x2, 0x4a, 0x56, 0x5, 0x2, 0x4, 0x8, 0xa, 0x12, 0x14, 0x49, 0x2, 
    0x197, 0x2, 0x56, 0x3, 0x2, 0x2, 0x2, 0x4, 0x6b, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x78, 0x3, 0x2, 0x2, 0x2, 0x8, 0x85, 0x3, 0x2, 0x2, 0x2, 0xa, 0x8b, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x93, 0x3, 0x2, 0x2, 0x2, 0xe, 0xaa, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0xae, 0x3, 0x2, 0x2, 0x2, 0x12, 0xb2, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0xb8, 0x3, 0x2, 0x2, 0x2, 0x16, 0xc0, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0xd2, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xd4, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0xd8, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x20, 0xed, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x24, 0x102, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x28, 0x110, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0x114, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x135, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0x138, 0x3, 0x2, 0x2, 0x2, 0x30, 0x14f, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0x151, 0x3, 0x2, 0x2, 0x2, 0x34, 0x153, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0x155, 0x3, 0x2, 0x2, 0x2, 0x38, 0x157, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x15a, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x160, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x163, 0x3, 0x2, 0x2, 0x2, 0x42, 0x166, 0x3, 0x2, 
    0x2, 0x2, 0x44, 0x169, 0x3, 0x2, 0x2, 0x2, 0x46, 0x16c, 0x3, 0x2, 0x2, 
    0x2, 0x48, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x172, 0x3, 0x2, 0x2, 0x2, 
    0x4c, 0x175, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x181, 0x3, 0x2, 0x2, 0x2, 0x50, 
    0x186, 0x3, 0x2, 0x2, 0x2, 0x52, 0x188, 0x3, 0x2, 0x2, 0x2, 0x54, 0x18a, 
    0x3, 0x2, 0x2, 0x2, 0x56, 0x58, 0x5, 0x26, 0x14, 0x2, 0x57, 0x59, 0x5, 
    0x28, 0x15, 0x2, 0x58, 0x57, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x59, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5c, 0x5, 0x2a, 0x16, 
    0x2, 0x5b, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5f, 0x3, 0x2, 0x2, 0x2, 
    0x5d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 
    0x66, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 
    0x5, 0x14, 0xb, 0x2, 0x61, 0x62, 0x7, 0x97, 0x2, 0x2, 0x62, 0x65, 0x3, 
    0x2, 0x2, 0x2, 0x63, 0x65, 0x5, 0xc, 0x7, 0x2, 0x64, 0x60, 0x3, 0x2, 
    0x2, 0x2, 0x64, 0x63, 0x3, 0x2, 0x2, 0x2, 0x65, 0x68, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x3, 0x2, 0x2, 0x2, 
    0x67, 0x69, 0x3, 0x2, 0x2, 0x2, 0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 0x69, 
    0x6a, 0x7, 0x2, 0x2, 0x3, 0x6a, 0x3, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 
    0x7, 0xb, 0x2, 0x2, 0x6c, 0x6d, 0x5, 0x50, 0x29, 0x2, 0x6d, 0x73, 0x7, 
    0x9f, 0x2, 0x2, 0x6e, 0x6f, 0x5, 0x12, 0xa, 0x2, 0x6f, 0x70, 0x7, 0x97, 
    0x2, 0x2, 0x70, 0x72, 0x3, 0x2, 0x2, 0x2, 0x71, 0x6e, 0x3, 0x2, 0x2, 
    0x2, 0x72, 0x75, 0x3, 0x2, 0x2, 0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 
    0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 0x76, 0x3, 0x2, 0x2, 0x2, 0x75, 
    0x73, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x7, 0xa0, 0x2, 0x2, 0x77, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x7, 0x10, 0x2, 0x2, 0x79, 0x7a, 0x5, 
    0x50, 0x29, 0x2, 0x7a, 0x80, 0x7, 0x9f, 0x2, 0x2, 0x7b, 0x7c, 0x5, 0x12, 
    0xa, 0x2, 0x7c, 0x7d, 0x7, 0x97, 0x2, 0x2, 0x7d, 0x7f, 0x3, 0x2, 0x2, 
    0x2, 0x7e, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x82, 0x3, 0x2, 0x2, 0x2, 
    0x80, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x3, 0x2, 0x2, 0x2, 0x81, 
    0x83, 0x3, 0x2, 0x2, 0x2, 0x82, 0x80, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 
    0x7, 0xa0, 0x2, 0x2, 0x84, 0x7, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x7, 
    0x11, 0x2, 0x2, 0x86, 0x87, 0x5, 0x50, 0x29, 0x2, 0x87, 0x88, 0x7, 0x8e, 
    0x2, 0x2, 0x88, 0x89, 0x5, 0x10, 0x9, 0x2, 0x89, 0x8a, 0x7, 0x8d, 0x2, 
    0x2, 0x8a, 0x9, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x7, 0x12, 0x2, 0x2, 
    0x8c, 0x8d, 0x5, 0x50, 0x29, 0x2, 0x8d, 0x8e, 0x7, 0x8e, 0x2, 0x2, 0x8e, 
    0x8f, 0x5, 0x10, 0x9, 0x2, 0x8f, 0x90, 0x7, 0x96, 0x2, 0x2, 0x90, 0x91, 
    0x5, 0x10, 0x9, 0x2, 0x91, 0x92, 0x7, 0x8d, 0x2, 0x2, 0x92, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x93, 0x94, 0x7, 0x13, 0x2, 0x2, 0x94, 0x95, 0x5, 0x50, 
    0x29, 0x2, 0x95, 0x96, 0x7, 0xa3, 0x2, 0x2, 0x96, 0x97, 0x5, 0x50, 0x29, 
    0x2, 0x97, 0x98, 0x7, 0x98, 0x2, 0x2, 0x98, 0xa0, 0x5, 0x10, 0x9, 0x2, 
    0x99, 0x9a, 0x7, 0x96, 0x2, 0x2, 0x9a, 0x9b, 0x5, 0x50, 0x29, 0x2, 0x9b, 
    0x9c, 0x7, 0x98, 0x2, 0x2, 0x9c, 0x9d, 0x5, 0x10, 0x9, 0x2, 0x9d, 0x9f, 
    0x3, 0x2, 0x2, 0x2, 0x9e, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa2, 0x3, 
    0x2, 0x2, 0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x3, 0x2, 
    0x2, 0x2, 0xa1, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa0, 0x3, 0x2, 0x2, 
    0x2, 0xa3, 0xa6, 0x7, 0xa4, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0x9b, 0x2, 0x2, 
    0xa5, 0xa7, 0x7, 0x4c, 0x2, 0x2, 0xa6, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa6, 
    0xa7, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 
    0x5, 0xe, 0x8, 0x2, 0xa9, 0xd, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x9, 
    0x2, 0x2, 0x2, 0xab, 0xf, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaf, 0x5, 0x52, 
    0x2a, 0x2, 0xad, 0xaf, 0x5, 0x50, 0x29, 0x2, 0xae, 0xac, 0x3, 0x2, 0x2, 
    0x2, 0xae, 0xad, 0x3, 0x2, 0x2, 0x2, 0xaf, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0xb0, 0xb3, 0x5, 0x14, 0xb, 0x2, 0xb1, 0xb3, 0x5, 0x16, 0xc, 0x2, 0xb2, 
    0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb3, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0xb4, 0xb9, 0x5, 0x4, 0x3, 0x2, 0xb5, 0xb9, 0x5, 
    0x6, 0x4, 0x2, 0xb6, 0xb9, 0x5, 0x8, 0x5, 0x2, 0xb7, 0xb9, 0x5, 0xa, 
    0x6, 0x2, 0xb8, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb5, 0x3, 0x2, 0x2, 
    0x2, 0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb7, 0x3, 0x2, 0x2, 0x2, 
    0xb9, 0x15, 0x3, 0x2, 0x2, 0x2, 0xba, 0xc1, 0x5, 0x18, 0xd, 0x2, 0xbb, 
    0xc1, 0x5, 0x1a, 0xe, 0x2, 0xbc, 0xc1, 0x5, 0x1e, 0x10, 0x2, 0xbd, 0xc1, 
    0x5, 0x20, 0x11, 0x2, 0xbe, 0xc1, 0x5, 0x22, 0x12, 0x2, 0xbf, 0xc1, 
    0x5, 0x24, 0x13, 0x2, 0xc0, 0xba, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbb, 0x3, 
    0x2, 0x2, 0x2, 0xc0, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbd, 0x3, 0x2, 
    0x2, 0x2, 0xc0, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbf, 0x3, 0x2, 0x2, 
    0x2, 0xc1, 0x17, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xd3, 0x5, 0x1c, 0xf, 0x2, 
    0xc3, 0xc4, 0x5, 0x50, 0x29, 0x2, 0xc4, 0xd0, 0x7, 0x98, 0x2, 0x2, 0xc5, 
    0xc6, 0x5, 0x52, 0x2a, 0x2, 0xc6, 0xc9, 0x7, 0x8a, 0x2, 0x2, 0xc7, 0xca, 
    0x5, 0x4c, 0x27, 0x2, 0xc8, 0xca, 0x5, 0x4e, 0x28, 0x2, 0xc9, 0xc7, 
    0x3, 0x2, 0x2, 0x2, 0xc9, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xca, 0xd1, 0x3, 
    0x2, 0x2, 0x2, 0xcb, 0xce, 0x5, 0x52, 0x2a, 0x2, 0xcc, 0xcd, 0x7, 0x8a, 
    0x2, 0x2, 0xcd, 0xcf, 0x5, 0x30, 0x19, 0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 
    0x2, 0xce, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd1, 0x3, 0x2, 0x2, 0x2, 
    0xd0, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xd1, 
    0xd3, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xc3, 
    0x3, 0x2, 0x2, 0x2, 0xd3, 0x19, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x5, 
    0x50, 0x29, 0x2, 0xd5, 0xd6, 0x7, 0x98, 0x2, 0x2, 0xd6, 0xd7, 0x5, 0x50, 
    0x29, 0x2, 0xd7, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x5, 0x50, 0x29, 
    0x2, 0xd9, 0xdd, 0x7, 0x8a, 0x2, 0x2, 0xda, 0xde, 0x5, 0x4c, 0x27, 0x2, 
    0xdb, 0xde, 0x5, 0x4e, 0x28, 0x2, 0xdc, 0xde, 0x5, 0x30, 0x19, 0x2, 
    0xdd, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdd, 
    0xdc, 0x3, 0x2, 0x2, 0x2, 0xde, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 
    0x5, 0x50, 0x29, 0x2, 0xe0, 0xe1, 0x7, 0x98, 0x2, 0x2, 0xe1, 0xe2, 0x7, 
    0xb, 0x2, 0x2, 0xe2, 0xe8, 0x7, 0x9f, 0x2, 0x2, 0xe3, 0xe4, 0x5, 0x12, 
    0xa, 0x2, 0xe4, 0xe5, 0x7, 0x97, 0x2, 0x2, 0xe5, 0xe7, 0x3, 0x2, 0x2, 
    0x2, 0xe6, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xea, 0x3, 0x2, 0x2, 0x2, 
    0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe9, 
    0xeb, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 
    0x7, 0xa0, 0x2, 0x2, 0xec, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 0x5, 
    0x50, 0x29, 0x2, 0xee, 0xef, 0x7, 0x98, 0x2, 0x2, 0xef, 0xf0, 0x7, 0x10, 
    0x2, 0x2, 0xf0, 0xf6, 0x7, 0x9f, 0x2, 0x2, 0xf1, 0xf2, 0x5, 0x12, 0xa, 
    0x2, 0xf2, 0xf3, 0x7, 0x97, 0x2, 0x2, 0xf3, 0xf5, 0x3, 0x2, 0x2, 0x2, 
    0xf4, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf6, 
    0xf4, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf9, 
    0x3, 0x2, 0x2, 0x2, 0xf8, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 0x7, 
    0xa0, 0x2, 0x2, 0xfa, 0x21, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 0x5, 0x50, 
    0x29, 0x2, 0xfc, 0xfd, 0x7, 0x98, 0x2, 0x2, 0xfd, 0xfe, 0x7, 0x11, 0x2, 
    0x2, 0xfe, 0xff, 0x7, 0x8e, 0x2, 0x2, 0xff, 0x100, 0x5, 0x10, 0x9, 0x2, 
    0x100, 0x101, 0x7, 0x8d, 0x2, 0x2, 0x101, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x102, 0x103, 0x5, 0x50, 0x29, 0x2, 0x103, 0x104, 0x7, 0x98, 0x2, 0x2, 
    0x104, 0x105, 0x7, 0x12, 0x2, 0x2, 0x105, 0x106, 0x7, 0x8e, 0x2, 0x2, 
    0x106, 0x107, 0x5, 0x10, 0x9, 0x2, 0x107, 0x108, 0x7, 0x96, 0x2, 0x2, 
    0x108, 0x109, 0x5, 0x10, 0x9, 0x2, 0x109, 0x10a, 0x7, 0x8d, 0x2, 0x2, 
    0x10a, 0x25, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 0x7, 0xe, 0x2, 0x2, 0x10c, 
    0x10d, 0x7, 0x8a, 0x2, 0x2, 0x10d, 0x10e, 0x5, 0x50, 0x29, 0x2, 0x10e, 
    0x10f, 0x7, 0x97, 0x2, 0x2, 0x10f, 0x27, 0x3, 0x2, 0x2, 0x2, 0x110, 
    0x111, 0x7, 0xa, 0x2, 0x2, 0x111, 0x112, 0x5, 0x2e, 0x18, 0x2, 0x112, 
    0x113, 0x7, 0x97, 0x2, 0x2, 0x113, 0x29, 0x3, 0x2, 0x2, 0x2, 0x114, 
    0x115, 0x7, 0xf, 0x2, 0x2, 0x115, 0x116, 0x5, 0x2c, 0x17, 0x2, 0x116, 
    0x117, 0x7, 0x97, 0x2, 0x2, 0x117, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x118, 
    0x11a, 0x5, 0x2e, 0x18, 0x2, 0x119, 0x118, 0x3, 0x2, 0x2, 0x2, 0x119, 
    0x11a, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11b, 
    0x11d, 0x7, 0x99, 0x2, 0x2, 0x11c, 0x119, 0x3, 0x2, 0x2, 0x2, 0x11c, 
    0x11d, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x11e, 
    0x12f, 0x7, 0x77, 0x2, 0x2, 0x11f, 0x12b, 0x7, 0x9f, 0x2, 0x2, 0x120, 
    0x125, 0x5, 0x2c, 0x17, 0x2, 0x121, 0x122, 0x7, 0x96, 0x2, 0x2, 0x122, 
    0x124, 0x5, 0x2c, 0x17, 0x2, 0x123, 0x121, 0x3, 0x2, 0x2, 0x2, 0x124, 
    0x127, 0x3, 0x2, 0x2, 0x2, 0x125, 0x123, 0x3, 0x2, 0x2, 0x2, 0x125, 
    0x126, 0x3, 0x2, 0x2, 0x2, 0x126, 0x129, 0x3, 0x2, 0x2, 0x2, 0x127, 
    0x125, 0x3, 0x2, 0x2, 0x2, 0x128, 0x12a, 0x7, 0x96, 0x2, 0x2, 0x129, 
    0x128, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12a, 
    0x12c, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x120, 0x3, 0x2, 0x2, 0x2, 0x12b, 
    0x12c, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12d, 
    0x12f, 0x7, 0xa0, 0x2, 0x2, 0x12e, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x12e, 
    0x11f, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x136, 0x3, 0x2, 0x2, 0x2, 0x130, 
    0x133, 0x5, 0x2e, 0x18, 0x2, 0x131, 0x132, 0x7, 0x4, 0x2, 0x2, 0x132, 
    0x134, 0x5, 0x50, 0x29, 0x2, 0x133, 0x131, 0x3, 0x2, 0x2, 0x2, 0x133, 
    0x134, 0x3, 0x2, 0x2, 0x2, 0x134, 0x136, 0x3, 0x2, 0x2, 0x2, 0x135, 
    0x11c, 0x3, 0x2, 0x2, 0x2, 0x135, 0x130, 0x3, 0x2, 0x2, 0x2, 0x136, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0x137, 0x139, 0x7, 0x99, 0x2, 0x2, 0x138, 
    0x137, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 0x3, 0x2, 0x2, 0x2, 0x139, 
    0x13a, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13f, 0x5, 0x50, 0x29, 0x2, 0x13b, 
    0x13c, 0x7, 0x99, 0x2, 0x2, 0x13c, 0x13e, 0x5, 0x50, 0x29, 0x2, 0x13d, 
    0x13b, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x141, 0x3, 0x2, 0x2, 0x2, 0x13f, 
    0x13d, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 0x3, 0x2, 0x2, 0x2, 0x140, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0x141, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x142, 0x150, 
    0x5, 0x32, 0x1a, 0x2, 0x143, 0x150, 0x5, 0x34, 0x1b, 0x2, 0x144, 0x150, 
    0x5, 0x36, 0x1c, 0x2, 0x145, 0x150, 0x5, 0x38, 0x1d, 0x2, 0x146, 0x150, 
    0x5, 0x3a, 0x1e, 0x2, 0x147, 0x150, 0x5, 0x3c, 0x1f, 0x2, 0x148, 0x150, 
    0x5, 0x3e, 0x20, 0x2, 0x149, 0x150, 0x5, 0x40, 0x21, 0x2, 0x14a, 0x150, 
    0x5, 0x42, 0x22, 0x2, 0x14b, 0x150, 0x5, 0x44, 0x23, 0x2, 0x14c, 0x150, 
    0x5, 0x46, 0x24, 0x2, 0x14d, 0x150, 0x5, 0x48, 0x25, 0x2, 0x14e, 0x150, 
    0x5, 0x4a, 0x26, 0x2, 0x14f, 0x142, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x143, 
    0x3, 0x2, 0x2, 0x2, 0x14f, 0x144, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x145, 
    0x3, 0x2, 0x2, 0x2, 0x14f, 0x146, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x147, 
    0x3, 0x2, 0x2, 0x2, 0x14f, 0x148, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x149, 
    0x3, 0x2, 0x2, 0x2, 0x14f, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x14b, 
    0x3, 0x2, 0x2, 0x2, 0x14f, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x14d, 
    0x3, 0x2, 0x2, 0x2, 0x14f, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x150, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0x151, 0x152, 0x9, 0x3, 0x2, 0x2, 0x152, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0x153, 0x154, 0x7, 0x60, 0x2, 0x2, 0x154, 0x35, 0x3, 0x2, 
    0x2, 0x2, 0x155, 0x156, 0x9, 0x4, 0x2, 0x2, 0x156, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0x157, 0x158, 0x5, 0x4c, 0x27, 0x2, 0x158, 0x159, 0x7, 0x4d, 0x2, 
    0x2, 0x159, 0x39, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x15b, 0x5, 0x4c, 0x27, 
    0x2, 0x15b, 0x15c, 0x7, 0x4e, 0x2, 0x2, 0x15c, 0x3b, 0x3, 0x2, 0x2, 
    0x2, 0x15d, 0x15e, 0x5, 0x4e, 0x28, 0x2, 0x15e, 0x15f, 0x7, 0x4f, 0x2, 
    0x2, 0x15f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 0x5, 0x4e, 0x28, 
    0x2, 0x161, 0x162, 0x7, 0x50, 0x2, 0x2, 0x162, 0x3f, 0x3, 0x2, 0x2, 
    0x2, 0x163, 0x164, 0x5, 0x4e, 0x28, 0x2, 0x164, 0x165, 0x7, 0x51, 0x2, 
    0x2, 0x165, 0x41, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x5, 0x4e, 0x28, 
    0x2, 0x167, 0x168, 0x7, 0x52, 0x2, 0x2, 0x168, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x169, 0x16a, 0x5, 0x4e, 0x28, 0x2, 0x16a, 0x16b, 0x7, 0x53, 0x2, 
    0x2, 0x16b, 0x45, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16d, 0x5, 0x4e, 0x28, 
    0x2, 0x16d, 0x16e, 0x7, 0x54, 0x2, 0x2, 0x16e, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x16f, 0x170, 0x5, 0x4e, 0x28, 0x2, 0x170, 0x171, 0x7, 0x55, 0x2, 
    0x2, 0x171, 0x49, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 0x5, 0x4e, 0x28, 
    0x2, 0x173, 0x174, 0x7, 0x56, 0x2, 0x2, 0x174, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x175, 0x176, 0x7, 0x6d, 0x2, 0x2, 0x176, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x177, 0x179, 0x7, 0x76, 0x2, 0x2, 0x178, 0x177, 0x3, 0x2, 0x2, 
    0x2, 0x178, 0x179, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 0x3, 0x2, 0x2, 
    0x2, 0x17a, 0x182, 0x9, 0x5, 0x2, 0x2, 0x17b, 0x17c, 0x7, 0x71, 0x2, 
    0x2, 0x17c, 0x182, 0x9, 0x6, 0x2, 0x2, 0x17d, 0x17e, 0x7, 0x72, 0x2, 
    0x2, 0x17e, 0x182, 0x9, 0x7, 0x2, 0x2, 0x17f, 0x180, 0x7, 0x73, 0x2, 
    0x2, 0x180, 0x182, 0x9, 0x8, 0x2, 0x2, 0x181, 0x178, 0x3, 0x2, 0x2, 
    0x2, 0x181, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x181, 0x17d, 0x3, 0x2, 0x2, 
    0x2, 0x181, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x182, 0x4f, 0x3, 0x2, 0x2, 0x2, 
    0x183, 0x187, 0x7, 0x57, 0x2, 0x2, 0x184, 0x185, 0x7, 0x74, 0x2, 0x2, 
    0x185, 0x187, 0x7, 0x57, 0x2, 0x2, 0x186, 0x183, 0x3, 0x2, 0x2, 0x2, 
    0x186, 0x184, 0x3, 0x2, 0x2, 0x2, 0x187, 0x51, 0x3, 0x2, 0x2, 0x2, 0x188, 
    0x189, 0x9, 0x9, 0x2, 0x2, 0x189, 0x53, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18b, 
    0x9, 0xa, 0x2, 0x2, 0x18b, 0x55, 0x3, 0x2, 0x2, 0x2, 0x23, 0x58, 0x5d, 
    0x64, 0x66, 0x73, 0x80, 0xa0, 0xa6, 0xae, 0xb2, 0xb8, 0xc0, 0xc9, 0xce, 
    0xd0, 0xd2, 0xdd, 0xe8, 0xf6, 0x119, 0x11c, 0x125, 0x129, 0x12b, 0x12e, 
    0x133, 0x135, 0x138, 0x13f, 0x14f, 0x178, 0x181, 0x186, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

TypedefParser::Initializer TypedefParser::_init;
