
#include "libtypedef/parser/gramamr_types.h"


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
#include "libtypedef/parser/literals.h"


//----------------- CompilationUnitContext ------------------------------------------------------------------

TypedefParser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::TypedefVersionDeclarationContext* TypedefParser::CompilationUnitContext::typedefVersionDeclaration() {
  return getRuleContext<TypedefParser::TypedefVersionDeclarationContext>(0);
}

TypedefParser::ModuleDeclarationContext* TypedefParser::CompilationUnitContext::moduleDeclaration() {
  return getRuleContext<TypedefParser::ModuleDeclarationContext>(0);
}

tree::TerminalNode* TypedefParser::CompilationUnitContext::EOF() {
  return getToken(TypedefParser::EOF, 0);
}

std::vector<TypedefParser::UseDeclarationContext *> TypedefParser::CompilationUnitContext::useDeclaration() {
  return getRuleContexts<TypedefParser::UseDeclarationContext>();
}

TypedefParser::UseDeclarationContext* TypedefParser::CompilationUnitContext::useDeclaration(size_t i) {
  return getRuleContext<TypedefParser::UseDeclarationContext>(i);
}

std::vector<TypedefParser::TypeDefinitionContext *> TypedefParser::CompilationUnitContext::typeDefinition() {
  return getRuleContexts<TypedefParser::TypeDefinitionContext>();
}

TypedefParser::TypeDefinitionContext* TypedefParser::CompilationUnitContext::typeDefinition(size_t i) {
  return getRuleContext<TypedefParser::TypeDefinitionContext>(i);
}

std::vector<TypedefParser::TmplDefinitionContext *> TypedefParser::CompilationUnitContext::tmplDefinition() {
  return getRuleContexts<TypedefParser::TmplDefinitionContext>();
}

TypedefParser::TmplDefinitionContext* TypedefParser::CompilationUnitContext::tmplDefinition(size_t i) {
  return getRuleContext<TypedefParser::TmplDefinitionContext>(i);
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
    setState(82);
    typedefVersionDeclaration();
    setState(83);
    moduleDeclaration();
    setState(87);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::KW_USE) {
      setState(84);
      useDeclaration();
      setState(89);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(94);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypedefParser::KW_STRUCT)
      | (1ULL << TypedefParser::KW_VARIANT)
      | (1ULL << TypedefParser::KW_TEMPLATE))) != 0)) {
      setState(92);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypedefParser::KW_STRUCT:
        case TypedefParser::KW_VARIANT: {
          setState(90);
          typeDefinition();
          break;
        }

        case TypedefParser::KW_TEMPLATE: {
          setState(91);
          tmplDefinition();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(96);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(97);
    match(TypedefParser::EOF);
   
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
  enterRule(_localctx, 2, TypedefParser::RuleTypedefVersionDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(TypedefParser::KW_TYPEDEF);
    setState(100);
    match(TypedefParser::EQ);
    setState(101);
    identifier();
    setState(102);
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

TypedefParser::SymbolPathContext* TypedefParser::ModuleDeclarationContext::symbolPath() {
  return getRuleContext<TypedefParser::SymbolPathContext>(0);
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
  enterRule(_localctx, 4, TypedefParser::RuleModuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    match(TypedefParser::KW_MODULE);
    setState(105);
    symbolPath();
    setState(106);
    match(TypedefParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDefinitionContext ------------------------------------------------------------------

TypedefParser::TypeDefinitionContext::TypeDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::TypeDefinitionContext::LBRACE() {
  return getToken(TypedefParser::LBRACE, 0);
}

TypedefParser::FieldBlockContext* TypedefParser::TypeDefinitionContext::fieldBlock() {
  return getRuleContext<TypedefParser::FieldBlockContext>(0);
}

tree::TerminalNode* TypedefParser::TypeDefinitionContext::RBRACE() {
  return getToken(TypedefParser::RBRACE, 0);
}

tree::TerminalNode* TypedefParser::TypeDefinitionContext::KW_STRUCT() {
  return getToken(TypedefParser::KW_STRUCT, 0);
}

tree::TerminalNode* TypedefParser::TypeDefinitionContext::KW_VARIANT() {
  return getToken(TypedefParser::KW_VARIANT, 0);
}

tree::TerminalNode* TypedefParser::TypeDefinitionContext::LT() {
  return getToken(TypedefParser::LT, 0);
}

tree::TerminalNode* TypedefParser::TypeDefinitionContext::GT() {
  return getToken(TypedefParser::GT, 0);
}

tree::TerminalNode* TypedefParser::TypeDefinitionContext::SEMI() {
  return getToken(TypedefParser::SEMI, 0);
}

std::vector<TypedefParser::IdentifierContext *> TypedefParser::TypeDefinitionContext::identifier() {
  return getRuleContexts<TypedefParser::IdentifierContext>();
}

TypedefParser::IdentifierContext* TypedefParser::TypeDefinitionContext::identifier(size_t i) {
  return getRuleContext<TypedefParser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::TypeDefinitionContext::COMMA() {
  return getTokens(TypedefParser::COMMA);
}

tree::TerminalNode* TypedefParser::TypeDefinitionContext::COMMA(size_t i) {
  return getToken(TypedefParser::COMMA, i);
}


size_t TypedefParser::TypeDefinitionContext::getRuleIndex() const {
  return TypedefParser::RuleTypeDefinition;
}

void TypedefParser::TypeDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDefinition(this);
}

void TypedefParser::TypeDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDefinition(this);
}


antlrcpp::Any TypedefParser::TypeDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTypeDefinition(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TypeDefinitionContext* TypedefParser::typeDefinition() {
  TypeDefinitionContext *_localctx = _tracker.createInstance<TypeDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 6, TypedefParser::RuleTypeDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(108);
    _la = _input->LA(1);
    if (!(_la == TypedefParser::KW_STRUCT

    || _la == TypedefParser::KW_VARIANT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(110);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::NON_KEYWORD_IDENTIFIER

    || _la == TypedefParser::RAW_ESCAPE) {
      setState(109);
      dynamic_cast<TypeDefinitionContext *>(_localctx)->type_identifier = identifier();
    }
    setState(122);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::LT) {
      setState(112);
      match(TypedefParser::LT);
      setState(116); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(113);
        dynamic_cast<TypeDefinitionContext *>(_localctx)->type_parameter = identifier();
        setState(114);
        match(TypedefParser::COMMA);
        setState(118); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == TypedefParser::NON_KEYWORD_IDENTIFIER

      || _la == TypedefParser::RAW_ESCAPE);
      setState(120);
      match(TypedefParser::GT);
    }
    setState(124);
    match(TypedefParser::LBRACE);
    setState(125);
    fieldBlock();
    setState(126);
    match(TypedefParser::RBRACE);
    setState(128);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(127);
      match(TypedefParser::SEMI);
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

//----------------- FieldBlockContext ------------------------------------------------------------------

TypedefParser::FieldBlockContext::FieldBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypedefParser::TypeDefinitionContext *> TypedefParser::FieldBlockContext::typeDefinition() {
  return getRuleContexts<TypedefParser::TypeDefinitionContext>();
}

TypedefParser::TypeDefinitionContext* TypedefParser::FieldBlockContext::typeDefinition(size_t i) {
  return getRuleContext<TypedefParser::TypeDefinitionContext>(i);
}

std::vector<TypedefParser::FieldDefinitionContext *> TypedefParser::FieldBlockContext::fieldDefinition() {
  return getRuleContexts<TypedefParser::FieldDefinitionContext>();
}

TypedefParser::FieldDefinitionContext* TypedefParser::FieldBlockContext::fieldDefinition(size_t i) {
  return getRuleContext<TypedefParser::FieldDefinitionContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::FieldBlockContext::SEMI() {
  return getTokens(TypedefParser::SEMI);
}

tree::TerminalNode* TypedefParser::FieldBlockContext::SEMI(size_t i) {
  return getToken(TypedefParser::SEMI, i);
}


size_t TypedefParser::FieldBlockContext::getRuleIndex() const {
  return TypedefParser::RuleFieldBlock;
}

void TypedefParser::FieldBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldBlock(this);
}

void TypedefParser::FieldBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldBlock(this);
}


antlrcpp::Any TypedefParser::FieldBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitFieldBlock(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::FieldBlockContext* TypedefParser::fieldBlock() {
  FieldBlockContext *_localctx = _tracker.createInstance<FieldBlockContext>(_ctx, getState());
  enterRule(_localctx, 8, TypedefParser::RuleFieldBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(136);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::KW_STRUCT

    || _la == TypedefParser::KW_VARIANT || _la == TypedefParser::NON_KEYWORD_IDENTIFIER

    || _la == TypedefParser::RAW_ESCAPE) {
      setState(134);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypedefParser::KW_STRUCT:
        case TypedefParser::KW_VARIANT: {
          setState(130);
          typeDefinition();
          break;
        }

        case TypedefParser::NON_KEYWORD_IDENTIFIER:
        case TypedefParser::RAW_ESCAPE: {
          setState(131);
          fieldDefinition();
          setState(132);
          match(TypedefParser::SEMI);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(138);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldDefinitionContext ------------------------------------------------------------------

TypedefParser::FieldDefinitionContext::FieldDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::FieldDefinitionContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

TypedefParser::IdentifierContext* TypedefParser::FieldDefinitionContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

TypedefParser::TypeAnnotationContext* TypedefParser::FieldDefinitionContext::typeAnnotation() {
  return getRuleContext<TypedefParser::TypeAnnotationContext>(0);
}

TypedefParser::TypeDefinitionContext* TypedefParser::FieldDefinitionContext::typeDefinition() {
  return getRuleContext<TypedefParser::TypeDefinitionContext>(0);
}

tree::TerminalNode* TypedefParser::FieldDefinitionContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::PrimitiveLiteralContext* TypedefParser::FieldDefinitionContext::primitiveLiteral() {
  return getRuleContext<TypedefParser::PrimitiveLiteralContext>(0);
}


size_t TypedefParser::FieldDefinitionContext::getRuleIndex() const {
  return TypedefParser::RuleFieldDefinition;
}

void TypedefParser::FieldDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldDefinition(this);
}

void TypedefParser::FieldDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldDefinition(this);
}


antlrcpp::Any TypedefParser::FieldDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitFieldDefinition(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::FieldDefinitionContext* TypedefParser::fieldDefinition() {
  FieldDefinitionContext *_localctx = _tracker.createInstance<FieldDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 10, TypedefParser::RuleFieldDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    dynamic_cast<FieldDefinitionContext *>(_localctx)->field_identifier = identifier();
    setState(140);
    match(TypedefParser::COLON);
    setState(143);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::KW_VECTOR:
      case TypedefParser::KW_MAP:
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
      case TypedefParser::KW_I64:
      case TypedefParser::NON_KEYWORD_IDENTIFIER:
      case TypedefParser::RAW_ESCAPE: {
        setState(141);
        typeAnnotation();
        break;
      }

      case TypedefParser::KW_STRUCT:
      case TypedefParser::KW_VARIANT: {
        setState(142);
        typeDefinition();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(147);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::EQ) {
      setState(145);
      match(TypedefParser::EQ);
      setState(146);
      primitiveLiteral();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeAnnotationContext ------------------------------------------------------------------

TypedefParser::TypeAnnotationContext::TypeAnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::TypeIdentifierContext* TypedefParser::TypeAnnotationContext::typeIdentifier() {
  return getRuleContext<TypedefParser::TypeIdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::TypeAnnotationContext::LT() {
  return getToken(TypedefParser::LT, 0);
}

std::vector<TypedefParser::TypeAnnotationContext *> TypedefParser::TypeAnnotationContext::typeAnnotation() {
  return getRuleContexts<TypedefParser::TypeAnnotationContext>();
}

TypedefParser::TypeAnnotationContext* TypedefParser::TypeAnnotationContext::typeAnnotation(size_t i) {
  return getRuleContext<TypedefParser::TypeAnnotationContext>(i);
}

tree::TerminalNode* TypedefParser::TypeAnnotationContext::GT() {
  return getToken(TypedefParser::GT, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::TypeAnnotationContext::COMMA() {
  return getTokens(TypedefParser::COMMA);
}

tree::TerminalNode* TypedefParser::TypeAnnotationContext::COMMA(size_t i) {
  return getToken(TypedefParser::COMMA, i);
}


size_t TypedefParser::TypeAnnotationContext::getRuleIndex() const {
  return TypedefParser::RuleTypeAnnotation;
}

void TypedefParser::TypeAnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeAnnotation(this);
}

void TypedefParser::TypeAnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeAnnotation(this);
}


antlrcpp::Any TypedefParser::TypeAnnotationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTypeAnnotation(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TypeAnnotationContext* TypedefParser::typeAnnotation() {
  TypeAnnotationContext *_localctx = _tracker.createInstance<TypeAnnotationContext>(_ctx, getState());
  enterRule(_localctx, 12, TypedefParser::RuleTypeAnnotation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    typeIdentifier();
    setState(161);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::LT) {
      setState(150);
      match(TypedefParser::LT);
      setState(151);
      typeAnnotation();
      setState(156);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::COMMA) {
        setState(152);
        match(TypedefParser::COMMA);
        setState(153);
        typeAnnotation();
        setState(158);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(159);
      match(TypedefParser::GT);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeIdentifierContext ------------------------------------------------------------------

TypedefParser::TypeIdentifierContext::TypeIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::PrimitiveTypeIdentifierContext* TypedefParser::TypeIdentifierContext::primitiveTypeIdentifier() {
  return getRuleContext<TypedefParser::PrimitiveTypeIdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::TypeIdentifierContext::KW_VECTOR() {
  return getToken(TypedefParser::KW_VECTOR, 0);
}

tree::TerminalNode* TypedefParser::TypeIdentifierContext::KW_MAP() {
  return getToken(TypedefParser::KW_MAP, 0);
}

TypedefParser::UserTypeContext* TypedefParser::TypeIdentifierContext::userType() {
  return getRuleContext<TypedefParser::UserTypeContext>(0);
}


size_t TypedefParser::TypeIdentifierContext::getRuleIndex() const {
  return TypedefParser::RuleTypeIdentifier;
}

void TypedefParser::TypeIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeIdentifier(this);
}

void TypedefParser::TypeIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeIdentifier(this);
}


antlrcpp::Any TypedefParser::TypeIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTypeIdentifier(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TypeIdentifierContext* TypedefParser::typeIdentifier() {
  TypeIdentifierContext *_localctx = _tracker.createInstance<TypeIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 14, TypedefParser::RuleTypeIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(167);
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
        setState(163);
        primitiveTypeIdentifier();
        break;
      }

      case TypedefParser::KW_VECTOR: {
        enterOuterAlt(_localctx, 2);
        setState(164);
        match(TypedefParser::KW_VECTOR);
        break;
      }

      case TypedefParser::KW_MAP: {
        enterOuterAlt(_localctx, 3);
        setState(165);
        match(TypedefParser::KW_MAP);
        break;
      }

      case TypedefParser::NON_KEYWORD_IDENTIFIER:
      case TypedefParser::RAW_ESCAPE: {
        enterOuterAlt(_localctx, 4);
        setState(166);
        userType();
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

//----------------- UserTypeContext ------------------------------------------------------------------

TypedefParser::UserTypeContext::UserTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::UserTypeContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}


size_t TypedefParser::UserTypeContext::getRuleIndex() const {
  return TypedefParser::RuleUserType;
}

void TypedefParser::UserTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUserType(this);
}

void TypedefParser::UserTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUserType(this);
}


antlrcpp::Any TypedefParser::UserTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitUserType(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::UserTypeContext* TypedefParser::userType() {
  UserTypeContext *_localctx = _tracker.createInstance<UserTypeContext>(_ctx, getState());
  enterRule(_localctx, 16, TypedefParser::RuleUserType);
  dynamic_cast<UserTypeContext *>(_localctx)->type_definition =  nullptr;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplDefinitionContext ------------------------------------------------------------------

TypedefParser::TmplDefinitionContext::TmplDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::TmplDefinitionContext::KW_TEMPLATE() {
  return getToken(TypedefParser::KW_TEMPLATE, 0);
}

TypedefParser::IdentifierContext* TypedefParser::TmplDefinitionContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::TmplDefinitionContext::LPAREN() {
  return getToken(TypedefParser::LPAREN, 0);
}

tree::TerminalNode* TypedefParser::TmplDefinitionContext::RPAREN() {
  return getToken(TypedefParser::RPAREN, 0);
}

TypedefParser::TmplBlockContext* TypedefParser::TmplDefinitionContext::tmplBlock() {
  return getRuleContext<TypedefParser::TmplBlockContext>(0);
}

std::vector<TypedefParser::FunctionParameterContext *> TypedefParser::TmplDefinitionContext::functionParameter() {
  return getRuleContexts<TypedefParser::FunctionParameterContext>();
}

TypedefParser::FunctionParameterContext* TypedefParser::TmplDefinitionContext::functionParameter(size_t i) {
  return getRuleContext<TypedefParser::FunctionParameterContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::TmplDefinitionContext::COMMA() {
  return getTokens(TypedefParser::COMMA);
}

tree::TerminalNode* TypedefParser::TmplDefinitionContext::COMMA(size_t i) {
  return getToken(TypedefParser::COMMA, i);
}


size_t TypedefParser::TmplDefinitionContext::getRuleIndex() const {
  return TypedefParser::RuleTmplDefinition;
}

void TypedefParser::TmplDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplDefinition(this);
}

void TypedefParser::TmplDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplDefinition(this);
}


antlrcpp::Any TypedefParser::TmplDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplDefinition(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplDefinitionContext* TypedefParser::tmplDefinition() {
  TmplDefinitionContext *_localctx = _tracker.createInstance<TmplDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 18, TypedefParser::RuleTmplDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    match(TypedefParser::KW_TEMPLATE);
    setState(172);
    identifier();
    setState(173);
    match(TypedefParser::LPAREN);

    setState(174);
    functionParameter();
    setState(179);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::COMMA) {
      setState(175);
      match(TypedefParser::COMMA);
      setState(176);
      functionParameter();
      setState(181);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(182);
    match(TypedefParser::RPAREN);
    setState(183);
    tmplBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplBlockContext ------------------------------------------------------------------

TypedefParser::TmplBlockContext::TmplBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::TmplBlockContext::START_TEMPLATE() {
  return getToken(TypedefParser::START_TEMPLATE, 0);
}

tree::TerminalNode* TypedefParser::TmplBlockContext::END_TEMPLATE() {
  return getToken(TypedefParser::END_TEMPLATE, 0);
}

std::vector<TypedefParser::TmplItemContext *> TypedefParser::TmplBlockContext::tmplItem() {
  return getRuleContexts<TypedefParser::TmplItemContext>();
}

TypedefParser::TmplItemContext* TypedefParser::TmplBlockContext::tmplItem(size_t i) {
  return getRuleContext<TypedefParser::TmplItemContext>(i);
}


size_t TypedefParser::TmplBlockContext::getRuleIndex() const {
  return TypedefParser::RuleTmplBlock;
}

void TypedefParser::TmplBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplBlock(this);
}

void TypedefParser::TmplBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplBlock(this);
}


antlrcpp::Any TypedefParser::TmplBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplBlock(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplBlockContext* TypedefParser::tmplBlock() {
  TmplBlockContext *_localctx = _tracker.createInstance<TmplBlockContext>(_ctx, getState());
  enterRule(_localctx, 20, TypedefParser::RuleTmplBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(TypedefParser::START_TEMPLATE);
    setState(189);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::TMPL_EXPR_OPEN

    || _la == TypedefParser::TMPL_TEXT) {
      setState(186);
      tmplItem();
      setState(191);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(192);
    match(TypedefParser::END_TEMPLATE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplItemContext ------------------------------------------------------------------

TypedefParser::TmplItemContext::TmplItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::TmplTextContext* TypedefParser::TmplItemContext::tmplText() {
  return getRuleContext<TypedefParser::TmplTextContext>(0);
}

TypedefParser::TmplInsertionContext* TypedefParser::TmplItemContext::tmplInsertion() {
  return getRuleContext<TypedefParser::TmplInsertionContext>(0);
}

TypedefParser::TmplCallContext* TypedefParser::TmplItemContext::tmplCall() {
  return getRuleContext<TypedefParser::TmplCallContext>(0);
}

TypedefParser::TmplIfContext* TypedefParser::TmplItemContext::tmplIf() {
  return getRuleContext<TypedefParser::TmplIfContext>(0);
}

TypedefParser::TmplForContext* TypedefParser::TmplItemContext::tmplFor() {
  return getRuleContext<TypedefParser::TmplForContext>(0);
}


size_t TypedefParser::TmplItemContext::getRuleIndex() const {
  return TypedefParser::RuleTmplItem;
}

void TypedefParser::TmplItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplItem(this);
}

void TypedefParser::TmplItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplItem(this);
}


antlrcpp::Any TypedefParser::TmplItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplItem(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplItemContext* TypedefParser::tmplItem() {
  TmplItemContext *_localctx = _tracker.createInstance<TmplItemContext>(_ctx, getState());
  enterRule(_localctx, 22, TypedefParser::RuleTmplItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(199);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(194);
      tmplText();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(195);
      tmplInsertion();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(196);
      tmplCall();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(197);
      tmplIf();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(198);
      tmplFor();
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

//----------------- TmplTextContext ------------------------------------------------------------------

TypedefParser::TmplTextContext::TmplTextContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::TmplTextContext::TMPL_TEXT() {
  return getToken(TypedefParser::TMPL_TEXT, 0);
}


size_t TypedefParser::TmplTextContext::getRuleIndex() const {
  return TypedefParser::RuleTmplText;
}

void TypedefParser::TmplTextContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplText(this);
}

void TypedefParser::TmplTextContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplText(this);
}


antlrcpp::Any TypedefParser::TmplTextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplText(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplTextContext* TypedefParser::tmplText() {
  TmplTextContext *_localctx = _tracker.createInstance<TmplTextContext>(_ctx, getState());
  enterRule(_localctx, 24, TypedefParser::RuleTmplText);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(201);
    dynamic_cast<TmplTextContext *>(_localctx)->txt = match(TypedefParser::TMPL_TEXT);
   _ctx->stop = _input->LT(-1);
    dynamic_cast<TmplTextContext *>(_localctx)->text =  _localctx->txt->getText();
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplInsertionContext ------------------------------------------------------------------

TypedefParser::TmplInsertionContext::TmplInsertionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::TmplInsertionContext::TMPL_EXPR_OPEN() {
  return getToken(TypedefParser::TMPL_EXPR_OPEN, 0);
}

TypedefParser::TmplValueReferencePathContext* TypedefParser::TmplInsertionContext::tmplValueReferencePath() {
  return getRuleContext<TypedefParser::TmplValueReferencePathContext>(0);
}

tree::TerminalNode* TypedefParser::TmplInsertionContext::TMPL_EXPR_CLOSE() {
  return getToken(TypedefParser::TMPL_EXPR_CLOSE, 0);
}


size_t TypedefParser::TmplInsertionContext::getRuleIndex() const {
  return TypedefParser::RuleTmplInsertion;
}

void TypedefParser::TmplInsertionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplInsertion(this);
}

void TypedefParser::TmplInsertionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplInsertion(this);
}


antlrcpp::Any TypedefParser::TmplInsertionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplInsertion(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplInsertionContext* TypedefParser::tmplInsertion() {
  TmplInsertionContext *_localctx = _tracker.createInstance<TmplInsertionContext>(_ctx, getState());
  enterRule(_localctx, 26, TypedefParser::RuleTmplInsertion);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(203);
    match(TypedefParser::TMPL_EXPR_OPEN);
    setState(204);
    tmplValueReferencePath();
    setState(205);
    match(TypedefParser::TMPL_EXPR_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplCallContext ------------------------------------------------------------------

TypedefParser::TmplCallContext::TmplCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::TmplCallContext::TMPL_EXPR_OPEN() {
  return getToken(TypedefParser::TMPL_EXPR_OPEN, 0);
}

TypedefParser::TmplIdentifierContext* TypedefParser::TmplCallContext::tmplIdentifier() {
  return getRuleContext<TypedefParser::TmplIdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::TmplCallContext::TMPL_LPAREN() {
  return getToken(TypedefParser::TMPL_LPAREN, 0);
}

tree::TerminalNode* TypedefParser::TmplCallContext::TMPL_RPAREN() {
  return getToken(TypedefParser::TMPL_RPAREN, 0);
}

tree::TerminalNode* TypedefParser::TmplCallContext::TMPL_EXPR_CLOSE() {
  return getToken(TypedefParser::TMPL_EXPR_CLOSE, 0);
}

std::vector<TypedefParser::TmplValueReferencePathContext *> TypedefParser::TmplCallContext::tmplValueReferencePath() {
  return getRuleContexts<TypedefParser::TmplValueReferencePathContext>();
}

TypedefParser::TmplValueReferencePathContext* TypedefParser::TmplCallContext::tmplValueReferencePath(size_t i) {
  return getRuleContext<TypedefParser::TmplValueReferencePathContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::TmplCallContext::TMPL_COMMA() {
  return getTokens(TypedefParser::TMPL_COMMA);
}

tree::TerminalNode* TypedefParser::TmplCallContext::TMPL_COMMA(size_t i) {
  return getToken(TypedefParser::TMPL_COMMA, i);
}


size_t TypedefParser::TmplCallContext::getRuleIndex() const {
  return TypedefParser::RuleTmplCall;
}

void TypedefParser::TmplCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplCall(this);
}

void TypedefParser::TmplCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplCall(this);
}


antlrcpp::Any TypedefParser::TmplCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplCall(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplCallContext* TypedefParser::tmplCall() {
  TmplCallContext *_localctx = _tracker.createInstance<TmplCallContext>(_ctx, getState());
  enterRule(_localctx, 28, TypedefParser::RuleTmplCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207);
    match(TypedefParser::TMPL_EXPR_OPEN);
    setState(208);
    tmplIdentifier();
    setState(209);
    match(TypedefParser::TMPL_LPAREN);
    setState(211);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(210);
      tmplValueReferencePath();
      break;
    }

    }
    setState(218);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::TMPL_NON_KEYWORD_IDENTIFIER) {
      setState(213);
      tmplValueReferencePath();
      setState(214);
      match(TypedefParser::TMPL_COMMA);
      setState(220);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(221);
    match(TypedefParser::TMPL_RPAREN);
    setState(222);
    match(TypedefParser::TMPL_EXPR_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplIfContext ------------------------------------------------------------------

TypedefParser::TmplIfContext::TmplIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::TmplIfBlockContext* TypedefParser::TmplIfContext::tmplIfBlock() {
  return getRuleContext<TypedefParser::TmplIfBlockContext>(0);
}

tree::TerminalNode* TypedefParser::TmplIfContext::TMPL_EXPR_OPEN() {
  return getToken(TypedefParser::TMPL_EXPR_OPEN, 0);
}

tree::TerminalNode* TypedefParser::TmplIfContext::TMPL_KW_CLOSEIF() {
  return getToken(TypedefParser::TMPL_KW_CLOSEIF, 0);
}

tree::TerminalNode* TypedefParser::TmplIfContext::TMPL_EXPR_CLOSE() {
  return getToken(TypedefParser::TMPL_EXPR_CLOSE, 0);
}

std::vector<TypedefParser::TmplElifBlockContext *> TypedefParser::TmplIfContext::tmplElifBlock() {
  return getRuleContexts<TypedefParser::TmplElifBlockContext>();
}

TypedefParser::TmplElifBlockContext* TypedefParser::TmplIfContext::tmplElifBlock(size_t i) {
  return getRuleContext<TypedefParser::TmplElifBlockContext>(i);
}

TypedefParser::TmplElseBlockContext* TypedefParser::TmplIfContext::tmplElseBlock() {
  return getRuleContext<TypedefParser::TmplElseBlockContext>(0);
}


size_t TypedefParser::TmplIfContext::getRuleIndex() const {
  return TypedefParser::RuleTmplIf;
}

void TypedefParser::TmplIfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplIf(this);
}

void TypedefParser::TmplIfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplIf(this);
}


antlrcpp::Any TypedefParser::TmplIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplIf(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplIfContext* TypedefParser::tmplIf() {
  TmplIfContext *_localctx = _tracker.createInstance<TmplIfContext>(_ctx, getState());
  enterRule(_localctx, 30, TypedefParser::RuleTmplIf);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(224);
    tmplIfBlock();
    setState(228);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(225);
        tmplElifBlock(); 
      }
      setState(230);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
    setState(232);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      setState(231);
      tmplElseBlock();
      break;
    }

    }

    setState(234);
    match(TypedefParser::TMPL_EXPR_OPEN);
    setState(235);
    match(TypedefParser::TMPL_KW_CLOSEIF);
    setState(236);
    match(TypedefParser::TMPL_EXPR_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplIfStmtContext ------------------------------------------------------------------

TypedefParser::TmplIfStmtContext::TmplIfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::TmplIfStmtContext::TMPL_EXPR_OPEN() {
  return getToken(TypedefParser::TMPL_EXPR_OPEN, 0);
}

tree::TerminalNode* TypedefParser::TmplIfStmtContext::TMPL_KW_IF() {
  return getToken(TypedefParser::TMPL_KW_IF, 0);
}

TypedefParser::TmplExpressionContext* TypedefParser::TmplIfStmtContext::tmplExpression() {
  return getRuleContext<TypedefParser::TmplExpressionContext>(0);
}

tree::TerminalNode* TypedefParser::TmplIfStmtContext::TMPL_EXPR_CLOSE() {
  return getToken(TypedefParser::TMPL_EXPR_CLOSE, 0);
}


size_t TypedefParser::TmplIfStmtContext::getRuleIndex() const {
  return TypedefParser::RuleTmplIfStmt;
}

void TypedefParser::TmplIfStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplIfStmt(this);
}

void TypedefParser::TmplIfStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplIfStmt(this);
}


antlrcpp::Any TypedefParser::TmplIfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplIfStmt(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplIfStmtContext* TypedefParser::tmplIfStmt() {
  TmplIfStmtContext *_localctx = _tracker.createInstance<TmplIfStmtContext>(_ctx, getState());
  enterRule(_localctx, 32, TypedefParser::RuleTmplIfStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    match(TypedefParser::TMPL_EXPR_OPEN);
    setState(239);
    match(TypedefParser::TMPL_KW_IF);
    setState(240);
    tmplExpression();
    setState(241);
    match(TypedefParser::TMPL_EXPR_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplIfBlockContext ------------------------------------------------------------------

TypedefParser::TmplIfBlockContext::TmplIfBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::TmplIfStmtContext* TypedefParser::TmplIfBlockContext::tmplIfStmt() {
  return getRuleContext<TypedefParser::TmplIfStmtContext>(0);
}

std::vector<TypedefParser::TmplItemContext *> TypedefParser::TmplIfBlockContext::tmplItem() {
  return getRuleContexts<TypedefParser::TmplItemContext>();
}

TypedefParser::TmplItemContext* TypedefParser::TmplIfBlockContext::tmplItem(size_t i) {
  return getRuleContext<TypedefParser::TmplItemContext>(i);
}


size_t TypedefParser::TmplIfBlockContext::getRuleIndex() const {
  return TypedefParser::RuleTmplIfBlock;
}

void TypedefParser::TmplIfBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplIfBlock(this);
}

void TypedefParser::TmplIfBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplIfBlock(this);
}


antlrcpp::Any TypedefParser::TmplIfBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplIfBlock(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplIfBlockContext* TypedefParser::tmplIfBlock() {
  TmplIfBlockContext *_localctx = _tracker.createInstance<TmplIfBlockContext>(_ctx, getState());
  enterRule(_localctx, 34, TypedefParser::RuleTmplIfBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(243);
    tmplIfStmt();
    setState(247);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(244);
        tmplItem(); 
      }
      setState(249);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplElIfStmtContext ------------------------------------------------------------------

TypedefParser::TmplElIfStmtContext::TmplElIfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::TmplElIfStmtContext::TMPL_EXPR_OPEN() {
  return getToken(TypedefParser::TMPL_EXPR_OPEN, 0);
}

tree::TerminalNode* TypedefParser::TmplElIfStmtContext::TMPL_KW_ELIF() {
  return getToken(TypedefParser::TMPL_KW_ELIF, 0);
}

TypedefParser::TmplExpressionContext* TypedefParser::TmplElIfStmtContext::tmplExpression() {
  return getRuleContext<TypedefParser::TmplExpressionContext>(0);
}

tree::TerminalNode* TypedefParser::TmplElIfStmtContext::TMPL_EXPR_CLOSE() {
  return getToken(TypedefParser::TMPL_EXPR_CLOSE, 0);
}


size_t TypedefParser::TmplElIfStmtContext::getRuleIndex() const {
  return TypedefParser::RuleTmplElIfStmt;
}

void TypedefParser::TmplElIfStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplElIfStmt(this);
}

void TypedefParser::TmplElIfStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplElIfStmt(this);
}


antlrcpp::Any TypedefParser::TmplElIfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplElIfStmt(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplElIfStmtContext* TypedefParser::tmplElIfStmt() {
  TmplElIfStmtContext *_localctx = _tracker.createInstance<TmplElIfStmtContext>(_ctx, getState());
  enterRule(_localctx, 36, TypedefParser::RuleTmplElIfStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(250);
    match(TypedefParser::TMPL_EXPR_OPEN);
    setState(251);
    match(TypedefParser::TMPL_KW_ELIF);
    setState(252);
    tmplExpression();
    setState(253);
    match(TypedefParser::TMPL_EXPR_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplElifBlockContext ------------------------------------------------------------------

TypedefParser::TmplElifBlockContext::TmplElifBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::TmplElIfStmtContext* TypedefParser::TmplElifBlockContext::tmplElIfStmt() {
  return getRuleContext<TypedefParser::TmplElIfStmtContext>(0);
}

std::vector<TypedefParser::TmplItemContext *> TypedefParser::TmplElifBlockContext::tmplItem() {
  return getRuleContexts<TypedefParser::TmplItemContext>();
}

TypedefParser::TmplItemContext* TypedefParser::TmplElifBlockContext::tmplItem(size_t i) {
  return getRuleContext<TypedefParser::TmplItemContext>(i);
}


size_t TypedefParser::TmplElifBlockContext::getRuleIndex() const {
  return TypedefParser::RuleTmplElifBlock;
}

void TypedefParser::TmplElifBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplElifBlock(this);
}

void TypedefParser::TmplElifBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplElifBlock(this);
}


antlrcpp::Any TypedefParser::TmplElifBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplElifBlock(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplElifBlockContext* TypedefParser::tmplElifBlock() {
  TmplElifBlockContext *_localctx = _tracker.createInstance<TmplElifBlockContext>(_ctx, getState());
  enterRule(_localctx, 38, TypedefParser::RuleTmplElifBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(255);
    tmplElIfStmt();
    setState(259);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(256);
        tmplItem(); 
      }
      setState(261);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplElseStmtContext ------------------------------------------------------------------

TypedefParser::TmplElseStmtContext::TmplElseStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::TmplElseStmtContext::TMPL_EXPR_OPEN() {
  return getToken(TypedefParser::TMPL_EXPR_OPEN, 0);
}

tree::TerminalNode* TypedefParser::TmplElseStmtContext::TMPL_KW_ELSE() {
  return getToken(TypedefParser::TMPL_KW_ELSE, 0);
}

tree::TerminalNode* TypedefParser::TmplElseStmtContext::TMPL_EXPR_CLOSE() {
  return getToken(TypedefParser::TMPL_EXPR_CLOSE, 0);
}


size_t TypedefParser::TmplElseStmtContext::getRuleIndex() const {
  return TypedefParser::RuleTmplElseStmt;
}

void TypedefParser::TmplElseStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplElseStmt(this);
}

void TypedefParser::TmplElseStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplElseStmt(this);
}


antlrcpp::Any TypedefParser::TmplElseStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplElseStmt(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplElseStmtContext* TypedefParser::tmplElseStmt() {
  TmplElseStmtContext *_localctx = _tracker.createInstance<TmplElseStmtContext>(_ctx, getState());
  enterRule(_localctx, 40, TypedefParser::RuleTmplElseStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(262);
    match(TypedefParser::TMPL_EXPR_OPEN);
    setState(263);
    match(TypedefParser::TMPL_KW_ELSE);
    setState(264);
    match(TypedefParser::TMPL_EXPR_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplElseBlockContext ------------------------------------------------------------------

TypedefParser::TmplElseBlockContext::TmplElseBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::TmplElseStmtContext* TypedefParser::TmplElseBlockContext::tmplElseStmt() {
  return getRuleContext<TypedefParser::TmplElseStmtContext>(0);
}

std::vector<TypedefParser::TmplItemContext *> TypedefParser::TmplElseBlockContext::tmplItem() {
  return getRuleContexts<TypedefParser::TmplItemContext>();
}

TypedefParser::TmplItemContext* TypedefParser::TmplElseBlockContext::tmplItem(size_t i) {
  return getRuleContext<TypedefParser::TmplItemContext>(i);
}


size_t TypedefParser::TmplElseBlockContext::getRuleIndex() const {
  return TypedefParser::RuleTmplElseBlock;
}

void TypedefParser::TmplElseBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplElseBlock(this);
}

void TypedefParser::TmplElseBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplElseBlock(this);
}


antlrcpp::Any TypedefParser::TmplElseBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplElseBlock(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplElseBlockContext* TypedefParser::tmplElseBlock() {
  TmplElseBlockContext *_localctx = _tracker.createInstance<TmplElseBlockContext>(_ctx, getState());
  enterRule(_localctx, 42, TypedefParser::RuleTmplElseBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(266);
    tmplElseStmt();
    setState(270);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(267);
        tmplItem(); 
      }
      setState(272);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplForContext ------------------------------------------------------------------

TypedefParser::TmplForContext::TmplForContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::TmplForStmtContext* TypedefParser::TmplForContext::tmplForStmt() {
  return getRuleContext<TypedefParser::TmplForStmtContext>(0);
}

tree::TerminalNode* TypedefParser::TmplForContext::TMPL_EXPR_OPEN() {
  return getToken(TypedefParser::TMPL_EXPR_OPEN, 0);
}

tree::TerminalNode* TypedefParser::TmplForContext::TMPL_KW_CLOSE_FOR() {
  return getToken(TypedefParser::TMPL_KW_CLOSE_FOR, 0);
}

tree::TerminalNode* TypedefParser::TmplForContext::TMPL_EXPR_CLOSE() {
  return getToken(TypedefParser::TMPL_EXPR_CLOSE, 0);
}

std::vector<TypedefParser::TmplItemContext *> TypedefParser::TmplForContext::tmplItem() {
  return getRuleContexts<TypedefParser::TmplItemContext>();
}

TypedefParser::TmplItemContext* TypedefParser::TmplForContext::tmplItem(size_t i) {
  return getRuleContext<TypedefParser::TmplItemContext>(i);
}


size_t TypedefParser::TmplForContext::getRuleIndex() const {
  return TypedefParser::RuleTmplFor;
}

void TypedefParser::TmplForContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplFor(this);
}

void TypedefParser::TmplForContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplFor(this);
}


antlrcpp::Any TypedefParser::TmplForContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplFor(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplForContext* TypedefParser::tmplFor() {
  TmplForContext *_localctx = _tracker.createInstance<TmplForContext>(_ctx, getState());
  enterRule(_localctx, 44, TypedefParser::RuleTmplFor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(273);
    tmplForStmt();
    setState(277);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(274);
        tmplItem(); 
      }
      setState(279);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }

    setState(280);
    match(TypedefParser::TMPL_EXPR_OPEN);
    setState(281);
    match(TypedefParser::TMPL_KW_CLOSE_FOR);
    setState(282);
    match(TypedefParser::TMPL_EXPR_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplForStmtContext ------------------------------------------------------------------

TypedefParser::TmplForStmtContext::TmplForStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::TmplForStmtContext::TMPL_EXPR_OPEN() {
  return getToken(TypedefParser::TMPL_EXPR_OPEN, 0);
}

tree::TerminalNode* TypedefParser::TmplForStmtContext::TMPL_KW_FOR() {
  return getToken(TypedefParser::TMPL_KW_FOR, 0);
}

std::vector<TypedefParser::TmplIdentifierContext *> TypedefParser::TmplForStmtContext::tmplIdentifier() {
  return getRuleContexts<TypedefParser::TmplIdentifierContext>();
}

TypedefParser::TmplIdentifierContext* TypedefParser::TmplForStmtContext::tmplIdentifier(size_t i) {
  return getRuleContext<TypedefParser::TmplIdentifierContext>(i);
}

tree::TerminalNode* TypedefParser::TmplForStmtContext::TMPL_KW_IN() {
  return getToken(TypedefParser::TMPL_KW_IN, 0);
}

tree::TerminalNode* TypedefParser::TmplForStmtContext::TMPL_EXPR_CLOSE() {
  return getToken(TypedefParser::TMPL_EXPR_CLOSE, 0);
}

TypedefParser::TmplValueReferencePathContext* TypedefParser::TmplForStmtContext::tmplValueReferencePath() {
  return getRuleContext<TypedefParser::TmplValueReferencePathContext>(0);
}

tree::TerminalNode* TypedefParser::TmplForStmtContext::TMPL_COMMA() {
  return getToken(TypedefParser::TMPL_COMMA, 0);
}


size_t TypedefParser::TmplForStmtContext::getRuleIndex() const {
  return TypedefParser::RuleTmplForStmt;
}

void TypedefParser::TmplForStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplForStmt(this);
}

void TypedefParser::TmplForStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplForStmt(this);
}


antlrcpp::Any TypedefParser::TmplForStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplForStmt(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplForStmtContext* TypedefParser::tmplForStmt() {
  TmplForStmtContext *_localctx = _tracker.createInstance<TmplForStmtContext>(_ctx, getState());
  enterRule(_localctx, 46, TypedefParser::RuleTmplForStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    match(TypedefParser::TMPL_EXPR_OPEN);
    setState(285);
    match(TypedefParser::TMPL_KW_FOR);
    setState(286);
    tmplIdentifier();
    setState(289);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::TMPL_COMMA) {
      setState(287);
      match(TypedefParser::TMPL_COMMA);
      setState(288);
      tmplIdentifier();
    }
    setState(291);
    match(TypedefParser::TMPL_KW_IN);
    setState(292);
    dynamic_cast<TmplForStmtContext *>(_localctx)->collection = tmplValueReferencePath();
    setState(293);
    match(TypedefParser::TMPL_EXPR_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplExpressionContext ------------------------------------------------------------------

TypedefParser::TmplExpressionContext::TmplExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::TmplValueReferencePathContext* TypedefParser::TmplExpressionContext::tmplValueReferencePath() {
  return getRuleContext<TypedefParser::TmplValueReferencePathContext>(0);
}


size_t TypedefParser::TmplExpressionContext::getRuleIndex() const {
  return TypedefParser::RuleTmplExpression;
}

void TypedefParser::TmplExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplExpression(this);
}

void TypedefParser::TmplExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplExpression(this);
}


antlrcpp::Any TypedefParser::TmplExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplExpression(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplExpressionContext* TypedefParser::tmplExpression() {
  TmplExpressionContext *_localctx = _tracker.createInstance<TmplExpressionContext>(_ctx, getState());
  enterRule(_localctx, 48, TypedefParser::RuleTmplExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(295);
    tmplValueReferencePath();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplValueReferencePathContext ------------------------------------------------------------------

TypedefParser::TmplValueReferencePathContext::TmplValueReferencePathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypedefParser::TmplValueReferenceContext *> TypedefParser::TmplValueReferencePathContext::tmplValueReference() {
  return getRuleContexts<TypedefParser::TmplValueReferenceContext>();
}

TypedefParser::TmplValueReferenceContext* TypedefParser::TmplValueReferencePathContext::tmplValueReference(size_t i) {
  return getRuleContext<TypedefParser::TmplValueReferenceContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::TmplValueReferencePathContext::TMPL_DOT() {
  return getTokens(TypedefParser::TMPL_DOT);
}

tree::TerminalNode* TypedefParser::TmplValueReferencePathContext::TMPL_DOT(size_t i) {
  return getToken(TypedefParser::TMPL_DOT, i);
}


size_t TypedefParser::TmplValueReferencePathContext::getRuleIndex() const {
  return TypedefParser::RuleTmplValueReferencePath;
}

void TypedefParser::TmplValueReferencePathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplValueReferencePath(this);
}

void TypedefParser::TmplValueReferencePathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplValueReferencePath(this);
}


antlrcpp::Any TypedefParser::TmplValueReferencePathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplValueReferencePath(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplValueReferencePathContext* TypedefParser::tmplValueReferencePath() {
  TmplValueReferencePathContext *_localctx = _tracker.createInstance<TmplValueReferencePathContext>(_ctx, getState());
  enterRule(_localctx, 50, TypedefParser::RuleTmplValueReferencePath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    tmplValueReference();
    setState(302);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::TMPL_DOT) {
      setState(298);
      match(TypedefParser::TMPL_DOT);
      setState(299);
      tmplValueReference();
      setState(304);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplValueReferenceContext ------------------------------------------------------------------

TypedefParser::TmplValueReferenceContext::TmplValueReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::TmplIdentifierContext* TypedefParser::TmplValueReferenceContext::tmplIdentifier() {
  return getRuleContext<TypedefParser::TmplIdentifierContext>(0);
}


size_t TypedefParser::TmplValueReferenceContext::getRuleIndex() const {
  return TypedefParser::RuleTmplValueReference;
}

void TypedefParser::TmplValueReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplValueReference(this);
}

void TypedefParser::TmplValueReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplValueReference(this);
}


antlrcpp::Any TypedefParser::TmplValueReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplValueReference(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplValueReferenceContext* TypedefParser::tmplValueReference() {
  TmplValueReferenceContext *_localctx = _tracker.createInstance<TmplValueReferenceContext>(_ctx, getState());
  enterRule(_localctx, 52, TypedefParser::RuleTmplValueReference);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    tmplIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplIdentifierContext ------------------------------------------------------------------

TypedefParser::TmplIdentifierContext::TmplIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::TmplIdentifierContext::TMPL_NON_KEYWORD_IDENTIFIER() {
  return getToken(TypedefParser::TMPL_NON_KEYWORD_IDENTIFIER, 0);
}


size_t TypedefParser::TmplIdentifierContext::getRuleIndex() const {
  return TypedefParser::RuleTmplIdentifier;
}

void TypedefParser::TmplIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplIdentifier(this);
}

void TypedefParser::TmplIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplIdentifier(this);
}


antlrcpp::Any TypedefParser::TmplIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplIdentifier(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplIdentifierContext* TypedefParser::tmplIdentifier() {
  TmplIdentifierContext *_localctx = _tracker.createInstance<TmplIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 54, TypedefParser::RuleTmplIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(307);
    dynamic_cast<TmplIdentifierContext *>(_localctx)->nki = match(TypedefParser::TMPL_NON_KEYWORD_IDENTIFIER);
   _ctx->stop = _input->LT(-1);
    dynamic_cast<TmplIdentifierContext *>(_localctx)->id =  _localctx->nki->getText();
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionParameterContext ------------------------------------------------------------------

TypedefParser::FunctionParameterContext::FunctionParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::FunctionParameterContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::FunctionParameterContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

TypedefParser::TypeAnnotationContext* TypedefParser::FunctionParameterContext::typeAnnotation() {
  return getRuleContext<TypedefParser::TypeAnnotationContext>(0);
}


size_t TypedefParser::FunctionParameterContext::getRuleIndex() const {
  return TypedefParser::RuleFunctionParameter;
}

void TypedefParser::FunctionParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionParameter(this);
}

void TypedefParser::FunctionParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionParameter(this);
}


antlrcpp::Any TypedefParser::FunctionParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitFunctionParameter(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::FunctionParameterContext* TypedefParser::functionParameter() {
  FunctionParameterContext *_localctx = _tracker.createInstance<FunctionParameterContext>(_ctx, getState());
  enterRule(_localctx, 56, TypedefParser::RuleFunctionParameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(309);
    identifier();
    setState(310);
    match(TypedefParser::COLON);
    setState(311);
    dynamic_cast<FunctionParameterContext *>(_localctx)->parameter_type = typeAnnotation();
   
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

TypedefParser::SymbolPathContext* TypedefParser::UseDeclarationContext::symbolPath() {
  return getRuleContext<TypedefParser::SymbolPathContext>(0);
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
  enterRule(_localctx, 58, TypedefParser::RuleUseDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(313);
    match(TypedefParser::KW_USE);
    setState(314);
    symbolPath();
    setState(315);
    match(TypedefParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SymbolPathContext ------------------------------------------------------------------

TypedefParser::SymbolPathContext::SymbolPathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypedefParser::IdentifierContext *> TypedefParser::SymbolPathContext::identifier() {
  return getRuleContexts<TypedefParser::IdentifierContext>();
}

TypedefParser::IdentifierContext* TypedefParser::SymbolPathContext::identifier(size_t i) {
  return getRuleContext<TypedefParser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::SymbolPathContext::PATHSEP() {
  return getTokens(TypedefParser::PATHSEP);
}

tree::TerminalNode* TypedefParser::SymbolPathContext::PATHSEP(size_t i) {
  return getToken(TypedefParser::PATHSEP, i);
}


size_t TypedefParser::SymbolPathContext::getRuleIndex() const {
  return TypedefParser::RuleSymbolPath;
}

void TypedefParser::SymbolPathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSymbolPath(this);
}

void TypedefParser::SymbolPathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSymbolPath(this);
}


antlrcpp::Any TypedefParser::SymbolPathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitSymbolPath(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::SymbolPathContext* TypedefParser::symbolPath() {
  SymbolPathContext *_localctx = _tracker.createInstance<SymbolPathContext>(_ctx, getState());
  enterRule(_localctx, 60, TypedefParser::RuleSymbolPath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(318);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::PATHSEP) {
      setState(317);
      dynamic_cast<SymbolPathContext *>(_localctx)->leading_pathsep = match(TypedefParser::PATHSEP);
    }
    setState(320);
    identifier();
    setState(325);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::PATHSEP) {
      setState(321);
      match(TypedefParser::PATHSEP);
      setState(322);
      identifier();
      setState(327);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimitiveLiteralContext ------------------------------------------------------------------

TypedefParser::PrimitiveLiteralContext::PrimitiveLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::BoolLiteralContext* TypedefParser::PrimitiveLiteralContext::boolLiteral() {
  return getRuleContext<TypedefParser::BoolLiteralContext>(0);
}

TypedefParser::CharLiteralContext* TypedefParser::PrimitiveLiteralContext::charLiteral() {
  return getRuleContext<TypedefParser::CharLiteralContext>(0);
}

TypedefParser::StringLiteralContext* TypedefParser::PrimitiveLiteralContext::stringLiteral() {
  return getRuleContext<TypedefParser::StringLiteralContext>(0);
}

TypedefParser::FloatLiteralContext* TypedefParser::PrimitiveLiteralContext::floatLiteral() {
  return getRuleContext<TypedefParser::FloatLiteralContext>(0);
}

TypedefParser::IntegerLiteralContext* TypedefParser::PrimitiveLiteralContext::integerLiteral() {
  return getRuleContext<TypedefParser::IntegerLiteralContext>(0);
}


size_t TypedefParser::PrimitiveLiteralContext::getRuleIndex() const {
  return TypedefParser::RulePrimitiveLiteral;
}

void TypedefParser::PrimitiveLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimitiveLiteral(this);
}

void TypedefParser::PrimitiveLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimitiveLiteral(this);
}


antlrcpp::Any TypedefParser::PrimitiveLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitPrimitiveLiteral(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::PrimitiveLiteralContext* TypedefParser::primitiveLiteral() {
  PrimitiveLiteralContext *_localctx = _tracker.createInstance<PrimitiveLiteralContext>(_ctx, getState());
  enterRule(_localctx, 62, TypedefParser::RulePrimitiveLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(333);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::KW_FALSE:
      case TypedefParser::KW_TRUE: {
        enterOuterAlt(_localctx, 1);
        setState(328);
        boolLiteral();
        break;
      }

      case TypedefParser::CHAR_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(329);
        charLiteral();
        break;
      }

      case TypedefParser::STRING_LITERAL:
      case TypedefParser::RAW_STRING_LITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(330);
        stringLiteral();
        break;
      }

      case TypedefParser::FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(331);
        floatLiteral();
        break;
      }

      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::HEX_PREFIX:
      case TypedefParser::OCT_PREFIX:
      case TypedefParser::BIN_PREFIX:
      case TypedefParser::MINUS: {
        enterOuterAlt(_localctx, 5);
        setState(332);
        integerLiteral();
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
  enterRule(_localctx, 64, TypedefParser::RuleBoolLiteral);
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
   _ctx->stop = _input->LT(-1);
    td::SetBoolLiteral(_localctx->bool_literal, _localctx);
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
  enterRule(_localctx, 66, TypedefParser::RuleCharLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(337);
    match(TypedefParser::CHAR_LITERAL);
   _ctx->stop = _input->LT(-1);
    td::SetCharLiteral(_localctx->char_literal, _localctx);
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
  enterRule(_localctx, 68, TypedefParser::RuleStringLiteral);
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
   _ctx->stop = _input->LT(-1);
    td::SetStringLiteral(_localctx->string_literal, _localctx);
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

tree::TerminalNode* TypedefParser::FloatLiteralContext::KW_F32() {
  return getToken(TypedefParser::KW_F32, 0);
}

tree::TerminalNode* TypedefParser::FloatLiteralContext::KW_F64() {
  return getToken(TypedefParser::KW_F64, 0);
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
  enterRule(_localctx, 70, TypedefParser::RuleFloatLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(341);
    match(TypedefParser::FLOAT_LITERAL);
    setState(343);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::KW_F32

    || _la == TypedefParser::KW_F64) {
      setState(342);
      _la = _input->LA(1);
      if (!(_la == TypedefParser::KW_F32

      || _la == TypedefParser::KW_F64)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
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

//----------------- IntegerLiteralContext ------------------------------------------------------------------

TypedefParser::IntegerLiteralContext::IntegerLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IntDigitsContext* TypedefParser::IntegerLiteralContext::intDigits() {
  return getRuleContext<TypedefParser::IntDigitsContext>(0);
}

tree::TerminalNode* TypedefParser::IntegerLiteralContext::KW_U8() {
  return getToken(TypedefParser::KW_U8, 0);
}

tree::TerminalNode* TypedefParser::IntegerLiteralContext::KW_U16() {
  return getToken(TypedefParser::KW_U16, 0);
}

tree::TerminalNode* TypedefParser::IntegerLiteralContext::KW_U32() {
  return getToken(TypedefParser::KW_U32, 0);
}

tree::TerminalNode* TypedefParser::IntegerLiteralContext::KW_U64() {
  return getToken(TypedefParser::KW_U64, 0);
}

tree::TerminalNode* TypedefParser::IntegerLiteralContext::KW_I8() {
  return getToken(TypedefParser::KW_I8, 0);
}

tree::TerminalNode* TypedefParser::IntegerLiteralContext::KW_I16() {
  return getToken(TypedefParser::KW_I16, 0);
}

tree::TerminalNode* TypedefParser::IntegerLiteralContext::KW_I32() {
  return getToken(TypedefParser::KW_I32, 0);
}

tree::TerminalNode* TypedefParser::IntegerLiteralContext::KW_I64() {
  return getToken(TypedefParser::KW_I64, 0);
}


size_t TypedefParser::IntegerLiteralContext::getRuleIndex() const {
  return TypedefParser::RuleIntegerLiteral;
}

void TypedefParser::IntegerLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegerLiteral(this);
}

void TypedefParser::IntegerLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegerLiteral(this);
}


antlrcpp::Any TypedefParser::IntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::IntegerLiteralContext* TypedefParser::integerLiteral() {
  IntegerLiteralContext *_localctx = _tracker.createInstance<IntegerLiteralContext>(_ctx, getState());
  enterRule(_localctx, 72, TypedefParser::RuleIntegerLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(345);
    intDigits();
    setState(347);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 77) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 77)) & ((1ULL << (TypedefParser::KW_U8 - 77))
      | (1ULL << (TypedefParser::KW_U16 - 77))
      | (1ULL << (TypedefParser::KW_U32 - 77))
      | (1ULL << (TypedefParser::KW_U64 - 77))
      | (1ULL << (TypedefParser::KW_I8 - 77))
      | (1ULL << (TypedefParser::KW_I16 - 77))
      | (1ULL << (TypedefParser::KW_I32 - 77))
      | (1ULL << (TypedefParser::KW_I64 - 77)))) != 0)) {
      setState(346);
      _la = _input->LA(1);
      if (!(((((_la - 77) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 77)) & ((1ULL << (TypedefParser::KW_U8 - 77))
        | (1ULL << (TypedefParser::KW_U16 - 77))
        | (1ULL << (TypedefParser::KW_U32 - 77))
        | (1ULL << (TypedefParser::KW_U64 - 77))
        | (1ULL << (TypedefParser::KW_I8 - 77))
        | (1ULL << (TypedefParser::KW_I16 - 77))
        | (1ULL << (TypedefParser::KW_I32 - 77))
        | (1ULL << (TypedefParser::KW_I64 - 77)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
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

//----------------- IntDigitsContext ------------------------------------------------------------------

TypedefParser::IntDigitsContext::IntDigitsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::IntDigitsContext::DEC_DIGITS() {
  return getToken(TypedefParser::DEC_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::IntDigitsContext::DEC_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::DEC_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::IntDigitsContext::MINUS() {
  return getToken(TypedefParser::MINUS, 0);
}

tree::TerminalNode* TypedefParser::IntDigitsContext::HEX_PREFIX() {
  return getToken(TypedefParser::HEX_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::IntDigitsContext::HEX_DIGITS() {
  return getToken(TypedefParser::HEX_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::IntDigitsContext::HEX_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::HEX_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::IntDigitsContext::OCT_PREFIX() {
  return getToken(TypedefParser::OCT_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::IntDigitsContext::OCT_DIGITS() {
  return getToken(TypedefParser::OCT_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::IntDigitsContext::OCT_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::OCT_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::IntDigitsContext::BIN_PREFIX() {
  return getToken(TypedefParser::BIN_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::IntDigitsContext::BIN_DIGITS() {
  return getToken(TypedefParser::BIN_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::IntDigitsContext::BIN_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::BIN_DIGITS_UNDERSCORE, 0);
}


size_t TypedefParser::IntDigitsContext::getRuleIndex() const {
  return TypedefParser::RuleIntDigits;
}

void TypedefParser::IntDigitsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntDigits(this);
}

void TypedefParser::IntDigitsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntDigits(this);
}


antlrcpp::Any TypedefParser::IntDigitsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitIntDigits(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::IntDigitsContext* TypedefParser::intDigits() {
  IntDigitsContext *_localctx = _tracker.createInstance<IntDigitsContext>(_ctx, getState());
  enterRule(_localctx, 74, TypedefParser::RuleIntDigits);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(359);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        enterOuterAlt(_localctx, 1);
        setState(350);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(349);
          match(TypedefParser::MINUS);
        }
        setState(352);
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
        setState(353);
        match(TypedefParser::HEX_PREFIX);
        setState(354);
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
        setState(355);
        match(TypedefParser::OCT_PREFIX);
        setState(356);
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
        setState(357);
        match(TypedefParser::BIN_PREFIX);
        setState(358);
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
  enterRule(_localctx, 76, TypedefParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(364);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::NON_KEYWORD_IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(361);
        dynamic_cast<IdentifierContext *>(_localctx)->nki = match(TypedefParser::NON_KEYWORD_IDENTIFIER);
        break;
      }

      case TypedefParser::RAW_ESCAPE: {
        enterOuterAlt(_localctx, 2);
        setState(362);
        match(TypedefParser::RAW_ESCAPE);
        setState(363);
        dynamic_cast<IdentifierContext *>(_localctx)->nki = match(TypedefParser::NON_KEYWORD_IDENTIFIER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   _ctx->stop = _input->LT(-1);
    dynamic_cast<IdentifierContext *>(_localctx)->id =  _localctx->nki->getText();
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
  enterRule(_localctx, 78, TypedefParser::RulePrimitiveTypeIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(366);
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
  enterRule(_localctx, 80, TypedefParser::RuleKeyword);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(368);
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
  "compilationUnit", "typedefVersionDeclaration", "moduleDeclaration", "typeDefinition", 
  "fieldBlock", "fieldDefinition", "typeAnnotation", "typeIdentifier", "userType", 
  "tmplDefinition", "tmplBlock", "tmplItem", "tmplText", "tmplInsertion", 
  "tmplCall", "tmplIf", "tmplIfStmt", "tmplIfBlock", "tmplElIfStmt", "tmplElifBlock", 
  "tmplElseStmt", "tmplElseBlock", "tmplFor", "tmplForStmt", "tmplExpression", 
  "tmplValueReferencePath", "tmplValueReference", "tmplIdentifier", "functionParameter", 
  "useDeclaration", "symbolPath", "primitiveLiteral", "boolLiteral", "charLiteral", 
  "stringLiteral", "floatLiteral", "integerLiteral", "intDigits", "identifier", 
  "primitiveTypeIdentifier", "keyword"
};

std::vector<std::string> TypedefParser::_literalNames = {
  "", "'array'", "'as'", "'enum'", "'false'", "'fn'", "'impl'", "'message'", 
  "'module'", "'struct'", "'true'", "'type'", "'typedef'", "'use'", "'variant'", 
  "'vector'", "'map'", "'template'", "'and'", "", "'let'", "'not'", "'or'", 
  "'sizeof'", "'this'", "'trait'", "'where'", "'xor'", "'break'", "'continue'", 
  "'default'", "'do'", "", "", "'goto'", "", "'loop'", "'match'", "'move'", 
  "'return'", "'try'", "'while'", "'yield'", "'abstract'", "'auto'", "'const'", 
  "'double'", "'extern'", "'final'", "'float'", "'int'", "'long'", "'macro'", 
  "'mut'", "'override'", "'private'", "'pub'", "'ref'", "'Self'", "'self'", 
  "'signed'", "'static'", "'super'", "'switch'", "'typeof'", "'union'", 
  "'unsafe'", "'unsigned'", "'unsized'", "'virtual'", "'void'", "'volatile'", 
  "'bool'", "'char'", "'str'", "'f32'", "'f64'", "'u8'", "'u16'", "'u32'", 
  "'u64'", "'i8'", "'i16'", "'i32'", "'i64'", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "'0x'", 
  "'0o'", "'0b'", "'t#\"'", "'r#'", "'+'", "'-'", "'*'", "", "'%'", "'^'", 
  "'!'", "'&'", "'|'", "'&&'", "'||'", "'+='", "'-='", "'*='", "'/='", "'%='", 
  "'^='", "'&='", "'|='", "'<<='", "'>>='", "'='", "'=='", "'!='", "", "", 
  "'>='", "'<='", "'@'", "'_'", "", "'..'", "'...'", "", "';'", "':'", "", 
  "'->'", "'=>'", "'#'", "'$'", "'?'", "'{'", "'}'", "'['", "']'", "", "", 
  "", "'\"#'", "", "", "", "", "", "", "", "", "", "", "'/for'", "", "", 
  "'/if'", "", "'elif'"
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
  "SHEBANG", "CHAR_LITERAL", "STRING_LITERAL", "RAW_STRING_LITERAL", "DEC_DIGITS", 
  "DEC_DIGITS_UNDERSCORE", "HEX_DIGITS", "HEX_DIGITS_UNDERSCORE", "OCT_DIGITS", 
  "OCT_DIGITS_UNDERSCORE", "BIN_DIGITS", "BIN_DIGITS_UNDERSCORE", "FLOAT_LITERAL", 
  "OCT_DIGIT", "DEC_DIGIT", "HEX_DIGIT", "HEX_PREFIX", "OCT_PREFIX", "BIN_PREFIX", 
  "START_TEMPLATE", "RAW_ESCAPE", "PLUS", "MINUS", "STAR", "SLASH", "PERCENT", 
  "CARET", "NOT", "AND", "OR", "ANDAND", "OROR", "PLUSEQ", "MINUSEQ", "STAREQ", 
  "SLASHEQ", "PERCENTEQ", "CARETEQ", "ANDEQ", "OREQ", "SHLEQ", "SHREQ", 
  "EQ", "EQEQ", "NE", "GT", "LT", "GE", "LE", "AT", "UNDERSCORE", "DOT", 
  "DOTDOT", "DOTDOTDOT", "COMMA", "SEMI", "COLON", "PATHSEP", "RARROW", 
  "FATARROW", "POUND", "DOLLAR", "QUESTION", "LBRACE", "RBRACE", "LBRACK", 
  "RBRACK", "LPAREN", "RPAREN", "WS", "END_TEMPLATE", "TMPL_EXPR_OPEN", 
  "TMPL_TEXT", "TMPL_EXPR_CLOSE", "TMPL_SLASH", "TMPL_COMMA", "TMPL_DOT", 
  "TMPL_LPAREN", "TMPL_RPAREN", "TMPL_PATHSEP", "TMPL_KW_FOR", "TMPL_KW_CLOSE_FOR", 
  "TMPL_KW_IN", "TMPL_KW_IF", "TMPL_KW_CLOSEIF", "TMPL_KW_ELSE", "TMPL_KW_ELIF", 
  "TMPL_NON_KEYWORD_IDENTIFIER", "TMPL_WS"
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
    0x3, 0xb7, 0x175, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x7, 0x2, 0x58, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x5b, 0xb, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x7, 0x2, 0x5f, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x62, 0xb, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x5, 
    0x5, 0x71, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x6, 0x5, 
    0x77, 0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x78, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 
    0x7d, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x83, 
    0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x89, 0xa, 
    0x6, 0xc, 0x6, 0xe, 0x6, 0x8c, 0xb, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x5, 0x7, 0x92, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x96, 
    0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 
    0x9d, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0xa0, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0xa4, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 
    0x9, 0xaa, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0xb4, 0xa, 0xb, 0xc, 0xb, 0xe, 
    0xb, 0xb7, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x7, 0xc, 0xbe, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0xc1, 0xb, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 
    0xca, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xd6, 0xa, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xdb, 0xa, 0x10, 0xc, 
    0x10, 0xe, 0x10, 0xde, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x11, 0x3, 0x11, 0x7, 0x11, 0xe5, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xe8, 
    0xb, 0x11, 0x3, 0x11, 0x5, 0x11, 0xeb, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0xf8, 0xa, 0x13, 0xc, 0x13, 0xe, 
    0x13, 0xfb, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x104, 0xa, 0x15, 0xc, 0x15, 
    0xe, 0x15, 0x107, 0xb, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x10f, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 
    0x112, 0xb, 0x17, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x116, 0xa, 0x18, 
    0xc, 0x18, 0xe, 0x18, 0x119, 0xb, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 
    0x19, 0x124, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x12f, 
    0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x132, 0xb, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x5, 0x20, 0x141, 
    0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x146, 0xa, 0x20, 
    0xc, 0x20, 0xe, 0x20, 0x149, 0xb, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x150, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x5, 
    0x25, 0x15a, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x15e, 0xa, 
    0x26, 0x3, 0x27, 0x5, 0x27, 0x161, 0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x16a, 
    0xa, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x16f, 0xa, 0x28, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x2, 0x2, 0x2b, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 
    0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 
    0x4c, 0x4e, 0x50, 0x52, 0x2, 0xd, 0x4, 0x2, 0xb, 0xb, 0x10, 0x10, 0x4, 
    0x2, 0x6, 0x6, 0xc, 0xc, 0x3, 0x2, 0x61, 0x62, 0x3, 0x2, 0x4d, 0x4e, 
    0x3, 0x2, 0x4f, 0x56, 0x3, 0x2, 0x63, 0x64, 0x3, 0x2, 0x65, 0x66, 0x3, 
    0x2, 0x67, 0x68, 0x3, 0x2, 0x69, 0x6a, 0x3, 0x2, 0x4a, 0x56, 0x5, 0x2, 
    0x4, 0x8, 0xa, 0x12, 0x14, 0x49, 0x2, 0x178, 0x2, 0x54, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x65, 0x3, 0x2, 0x2, 0x2, 0x6, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x6e, 0x3, 0x2, 0x2, 0x2, 0xa, 0x8a, 0x3, 0x2, 0x2, 0x2, 0xc, 0x8d, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x97, 0x3, 0x2, 0x2, 0x2, 0x10, 0xa9, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0xab, 0x3, 0x2, 0x2, 0x2, 0x14, 0xad, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x18, 0xc9, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xcd, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x20, 0xe2, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0xf0, 0x3, 0x2, 0x2, 0x2, 0x24, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x26, 0xfc, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x101, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x108, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x113, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x32, 0x129, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x36, 0x133, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x135, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x137, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x13b, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x140, 0x3, 0x2, 0x2, 0x2, 0x40, 0x14f, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x151, 0x3, 0x2, 0x2, 0x2, 0x44, 0x153, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x155, 0x3, 0x2, 0x2, 0x2, 0x48, 0x157, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x169, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x50, 0x170, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x172, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x5, 0x4, 0x3, 0x2, 0x55, 
    0x59, 0x5, 0x6, 0x4, 0x2, 0x56, 0x58, 0x5, 0x3c, 0x1f, 0x2, 0x57, 0x56, 
    0x3, 0x2, 0x2, 0x2, 0x58, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x59, 0x57, 0x3, 
    0x2, 0x2, 0x2, 0x59, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x60, 0x3, 0x2, 
    0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5f, 0x5, 0x8, 0x5, 
    0x2, 0x5d, 0x5f, 0x5, 0x14, 0xb, 0x2, 0x5e, 0x5c, 0x3, 0x2, 0x2, 0x2, 
    0x5e, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x62, 0x3, 0x2, 0x2, 0x2, 0x60, 
    0x5e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 0x63, 
    0x3, 0x2, 0x2, 0x2, 0x62, 0x60, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x7, 
    0x2, 0x2, 0x3, 0x64, 0x3, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x7, 0xe, 
    0x2, 0x2, 0x66, 0x67, 0x7, 0x89, 0x2, 0x2, 0x67, 0x68, 0x5, 0x4e, 0x28, 
    0x2, 0x68, 0x69, 0x7, 0x96, 0x2, 0x2, 0x69, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x6a, 0x6b, 0x7, 0xa, 0x2, 0x2, 0x6b, 0x6c, 0x5, 0x3e, 0x20, 0x2, 0x6c, 
    0x6d, 0x7, 0x96, 0x2, 0x2, 0x6d, 0x7, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x70, 
    0x9, 0x2, 0x2, 0x2, 0x6f, 0x71, 0x5, 0x4e, 0x28, 0x2, 0x70, 0x6f, 0x3, 
    0x2, 0x2, 0x2, 0x70, 0x71, 0x3, 0x2, 0x2, 0x2, 0x71, 0x7c, 0x3, 0x2, 
    0x2, 0x2, 0x72, 0x76, 0x7, 0x8d, 0x2, 0x2, 0x73, 0x74, 0x5, 0x4e, 0x28, 
    0x2, 0x74, 0x75, 0x7, 0x95, 0x2, 0x2, 0x75, 0x77, 0x3, 0x2, 0x2, 0x2, 
    0x76, 0x73, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 0x2, 0x2, 0x2, 0x78, 
    0x76, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 
    0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x8c, 0x2, 0x2, 0x7b, 0x7d, 0x3, 
    0x2, 0x2, 0x2, 0x7c, 0x72, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x3, 0x2, 
    0x2, 0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x7, 0x9e, 0x2, 
    0x2, 0x7f, 0x80, 0x5, 0xa, 0x6, 0x2, 0x80, 0x82, 0x7, 0x9f, 0x2, 0x2, 
    0x81, 0x83, 0x7, 0x96, 0x2, 0x2, 0x82, 0x81, 0x3, 0x2, 0x2, 0x2, 0x82, 
    0x83, 0x3, 0x2, 0x2, 0x2, 0x83, 0x9, 0x3, 0x2, 0x2, 0x2, 0x84, 0x89, 
    0x5, 0x8, 0x5, 0x2, 0x85, 0x86, 0x5, 0xc, 0x7, 0x2, 0x86, 0x87, 0x7, 
    0x96, 0x2, 0x2, 0x87, 0x89, 0x3, 0x2, 0x2, 0x2, 0x88, 0x84, 0x3, 0x2, 
    0x2, 0x2, 0x88, 0x85, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8c, 0x3, 0x2, 0x2, 
    0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 
    0x8b, 0xb, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8d, 
    0x8e, 0x5, 0x4e, 0x28, 0x2, 0x8e, 0x91, 0x7, 0x97, 0x2, 0x2, 0x8f, 0x92, 
    0x5, 0xe, 0x8, 0x2, 0x90, 0x92, 0x5, 0x8, 0x5, 0x2, 0x91, 0x8f, 0x3, 
    0x2, 0x2, 0x2, 0x91, 0x90, 0x3, 0x2, 0x2, 0x2, 0x92, 0x95, 0x3, 0x2, 
    0x2, 0x2, 0x93, 0x94, 0x7, 0x89, 0x2, 0x2, 0x94, 0x96, 0x5, 0x40, 0x21, 
    0x2, 0x95, 0x93, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 
    0x96, 0xd, 0x3, 0x2, 0x2, 0x2, 0x97, 0xa3, 0x5, 0x10, 0x9, 0x2, 0x98, 
    0x99, 0x7, 0x8d, 0x2, 0x2, 0x99, 0x9e, 0x5, 0xe, 0x8, 0x2, 0x9a, 0x9b, 
    0x7, 0x95, 0x2, 0x2, 0x9b, 0x9d, 0x5, 0xe, 0x8, 0x2, 0x9c, 0x9a, 0x3, 
    0x2, 0x2, 0x2, 0x9d, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9c, 0x3, 0x2, 
    0x2, 0x2, 0x9e, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa1, 0x3, 0x2, 0x2, 
    0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x7, 0x8c, 0x2, 0x2, 
    0xa2, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa3, 0x98, 0x3, 0x2, 0x2, 0x2, 0xa3, 
    0xa4, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xf, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xaa, 
    0x5, 0x50, 0x29, 0x2, 0xa6, 0xaa, 0x7, 0x11, 0x2, 0x2, 0xa7, 0xaa, 0x7, 
    0x12, 0x2, 0x2, 0xa8, 0xaa, 0x5, 0x12, 0xa, 0x2, 0xa9, 0xa5, 0x3, 0x2, 
    0x2, 0x2, 0xa9, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa7, 0x3, 0x2, 0x2, 
    0x2, 0xa9, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0xab, 0xac, 0x5, 0x4e, 0x28, 0x2, 0xac, 0x13, 0x3, 0x2, 0x2, 0x2, 0xad, 
    0xae, 0x7, 0x13, 0x2, 0x2, 0xae, 0xaf, 0x5, 0x4e, 0x28, 0x2, 0xaf, 0xb0, 
    0x7, 0xa2, 0x2, 0x2, 0xb0, 0xb5, 0x5, 0x3a, 0x1e, 0x2, 0xb1, 0xb2, 0x7, 
    0x95, 0x2, 0x2, 0xb2, 0xb4, 0x5, 0x3a, 0x1e, 0x2, 0xb3, 0xb1, 0x3, 0x2, 
    0x2, 0x2, 0xb4, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 
    0x2, 0xb5, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb8, 0x3, 0x2, 0x2, 0x2, 
    0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x7, 0xa3, 0x2, 0x2, 0xb9, 
    0xba, 0x5, 0x16, 0xc, 0x2, 0xba, 0x15, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbf, 
    0x7, 0x72, 0x2, 0x2, 0xbc, 0xbe, 0x5, 0x18, 0xd, 0x2, 0xbd, 0xbc, 0x3, 
    0x2, 0x2, 0x2, 0xbe, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xbd, 0x3, 0x2, 
    0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc2, 0x3, 0x2, 0x2, 
    0x2, 0xc1, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x7, 0xa5, 0x2, 0x2, 
    0xc3, 0x17, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xca, 0x5, 0x1a, 0xe, 0x2, 0xc5, 
    0xca, 0x5, 0x1c, 0xf, 0x2, 0xc6, 0xca, 0x5, 0x1e, 0x10, 0x2, 0xc7, 0xca, 
    0x5, 0x20, 0x11, 0x2, 0xc8, 0xca, 0x5, 0x2e, 0x18, 0x2, 0xc9, 0xc4, 
    0x3, 0x2, 0x2, 0x2, 0xc9, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xc6, 0x3, 
    0x2, 0x2, 0x2, 0xc9, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xc8, 0x3, 0x2, 
    0x2, 0x2, 0xca, 0x19, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x7, 0xa7, 0x2, 
    0x2, 0xcc, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x7, 0xa6, 0x2, 0x2, 
    0xce, 0xcf, 0x5, 0x34, 0x1b, 0x2, 0xcf, 0xd0, 0x7, 0xa8, 0x2, 0x2, 0xd0, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x7, 0xa6, 0x2, 0x2, 0xd2, 0xd3, 
    0x5, 0x38, 0x1d, 0x2, 0xd3, 0xd5, 0x7, 0xac, 0x2, 0x2, 0xd4, 0xd6, 0x5, 
    0x34, 0x1b, 0x2, 0xd5, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x3, 0x2, 
    0x2, 0x2, 0xd6, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x5, 0x34, 0x1b, 
    0x2, 0xd8, 0xd9, 0x7, 0xaa, 0x2, 0x2, 0xd9, 0xdb, 0x3, 0x2, 0x2, 0x2, 
    0xda, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xde, 0x3, 0x2, 0x2, 0x2, 0xdc, 
    0xda, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdf, 
    0x3, 0x2, 0x2, 0x2, 0xde, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x7, 
    0xad, 0x2, 0x2, 0xe0, 0xe1, 0x7, 0xa8, 0x2, 0x2, 0xe1, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0xe2, 0xe6, 0x5, 0x24, 0x13, 0x2, 0xe3, 0xe5, 0x5, 0x28, 0x15, 
    0x2, 0xe4, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe8, 0x3, 0x2, 0x2, 0x2, 
    0xe6, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe7, 
    0xea, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xeb, 
    0x5, 0x2c, 0x17, 0x2, 0xea, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x3, 
    0x2, 0x2, 0x2, 0xeb, 0xec, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x7, 0xa6, 
    0x2, 0x2, 0xed, 0xee, 0x7, 0xb3, 0x2, 0x2, 0xee, 0xef, 0x7, 0xa8, 0x2, 
    0x2, 0xef, 0x21, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x7, 0xa6, 0x2, 0x2, 
    0xf1, 0xf2, 0x7, 0xb2, 0x2, 0x2, 0xf2, 0xf3, 0x5, 0x32, 0x1a, 0x2, 0xf3, 
    0xf4, 0x7, 0xa8, 0x2, 0x2, 0xf4, 0x23, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf9, 
    0x5, 0x22, 0x12, 0x2, 0xf6, 0xf8, 0x5, 0x18, 0xd, 0x2, 0xf7, 0xf6, 0x3, 
    0x2, 0x2, 0x2, 0xf8, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xf7, 0x3, 0x2, 
    0x2, 0x2, 0xf9, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfa, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0xfb, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0xa6, 0x2, 0x2, 
    0xfd, 0xfe, 0x7, 0xb5, 0x2, 0x2, 0xfe, 0xff, 0x5, 0x32, 0x1a, 0x2, 0xff, 
    0x100, 0x7, 0xa8, 0x2, 0x2, 0x100, 0x27, 0x3, 0x2, 0x2, 0x2, 0x101, 
    0x105, 0x5, 0x26, 0x14, 0x2, 0x102, 0x104, 0x5, 0x18, 0xd, 0x2, 0x103, 
    0x102, 0x3, 0x2, 0x2, 0x2, 0x104, 0x107, 0x3, 0x2, 0x2, 0x2, 0x105, 
    0x103, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 0x2, 0x2, 0x2, 0x106, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0x107, 0x105, 0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 
    0x7, 0xa6, 0x2, 0x2, 0x109, 0x10a, 0x7, 0xb4, 0x2, 0x2, 0x10a, 0x10b, 
    0x7, 0xa8, 0x2, 0x2, 0x10b, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x110, 
    0x5, 0x2a, 0x16, 0x2, 0x10d, 0x10f, 0x5, 0x18, 0xd, 0x2, 0x10e, 0x10d, 
    0x3, 0x2, 0x2, 0x2, 0x10f, 0x112, 0x3, 0x2, 0x2, 0x2, 0x110, 0x10e, 
    0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x3, 0x2, 0x2, 0x2, 0x111, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0x112, 0x110, 0x3, 0x2, 0x2, 0x2, 0x113, 0x117, 0x5, 
    0x30, 0x19, 0x2, 0x114, 0x116, 0x5, 0x18, 0xd, 0x2, 0x115, 0x114, 0x3, 
    0x2, 0x2, 0x2, 0x116, 0x119, 0x3, 0x2, 0x2, 0x2, 0x117, 0x115, 0x3, 
    0x2, 0x2, 0x2, 0x117, 0x118, 0x3, 0x2, 0x2, 0x2, 0x118, 0x11a, 0x3, 
    0x2, 0x2, 0x2, 0x119, 0x117, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 0x7, 
    0xa6, 0x2, 0x2, 0x11b, 0x11c, 0x7, 0xb0, 0x2, 0x2, 0x11c, 0x11d, 0x7, 
    0xa8, 0x2, 0x2, 0x11d, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0x7, 
    0xa6, 0x2, 0x2, 0x11f, 0x120, 0x7, 0xaf, 0x2, 0x2, 0x120, 0x123, 0x5, 
    0x38, 0x1d, 0x2, 0x121, 0x122, 0x7, 0xaa, 0x2, 0x2, 0x122, 0x124, 0x5, 
    0x38, 0x1d, 0x2, 0x123, 0x121, 0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0x3, 
    0x2, 0x2, 0x2, 0x124, 0x125, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x7, 
    0xb1, 0x2, 0x2, 0x126, 0x127, 0x5, 0x34, 0x1b, 0x2, 0x127, 0x128, 0x7, 
    0xa8, 0x2, 0x2, 0x128, 0x31, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x5, 
    0x34, 0x1b, 0x2, 0x12a, 0x33, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x130, 0x5, 
    0x36, 0x1c, 0x2, 0x12c, 0x12d, 0x7, 0xab, 0x2, 0x2, 0x12d, 0x12f, 0x5, 
    0x36, 0x1c, 0x2, 0x12e, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x132, 0x3, 
    0x2, 0x2, 0x2, 0x130, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x3, 
    0x2, 0x2, 0x2, 0x131, 0x35, 0x3, 0x2, 0x2, 0x2, 0x132, 0x130, 0x3, 0x2, 
    0x2, 0x2, 0x133, 0x134, 0x5, 0x38, 0x1d, 0x2, 0x134, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x135, 0x136, 0x7, 0xb6, 0x2, 0x2, 0x136, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x137, 0x138, 0x5, 0x4e, 0x28, 0x2, 0x138, 0x139, 0x7, 0x97, 
    0x2, 0x2, 0x139, 0x13a, 0x5, 0xe, 0x8, 0x2, 0x13a, 0x3b, 0x3, 0x2, 0x2, 
    0x2, 0x13b, 0x13c, 0x7, 0xf, 0x2, 0x2, 0x13c, 0x13d, 0x5, 0x3e, 0x20, 
    0x2, 0x13d, 0x13e, 0x7, 0x96, 0x2, 0x2, 0x13e, 0x3d, 0x3, 0x2, 0x2, 
    0x2, 0x13f, 0x141, 0x7, 0x98, 0x2, 0x2, 0x140, 0x13f, 0x3, 0x2, 0x2, 
    0x2, 0x140, 0x141, 0x3, 0x2, 0x2, 0x2, 0x141, 0x142, 0x3, 0x2, 0x2, 
    0x2, 0x142, 0x147, 0x5, 0x4e, 0x28, 0x2, 0x143, 0x144, 0x7, 0x98, 0x2, 
    0x2, 0x144, 0x146, 0x5, 0x4e, 0x28, 0x2, 0x145, 0x143, 0x3, 0x2, 0x2, 
    0x2, 0x146, 0x149, 0x3, 0x2, 0x2, 0x2, 0x147, 0x145, 0x3, 0x2, 0x2, 
    0x2, 0x147, 0x148, 0x3, 0x2, 0x2, 0x2, 0x148, 0x3f, 0x3, 0x2, 0x2, 0x2, 
    0x149, 0x147, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x150, 0x5, 0x42, 0x22, 0x2, 
    0x14b, 0x150, 0x5, 0x44, 0x23, 0x2, 0x14c, 0x150, 0x5, 0x46, 0x24, 0x2, 
    0x14d, 0x150, 0x5, 0x48, 0x25, 0x2, 0x14e, 0x150, 0x5, 0x4a, 0x26, 0x2, 
    0x14f, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x14b, 0x3, 0x2, 0x2, 0x2, 
    0x14f, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x14d, 0x3, 0x2, 0x2, 0x2, 
    0x14f, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x150, 0x41, 0x3, 0x2, 0x2, 0x2, 0x151, 
    0x152, 0x9, 0x3, 0x2, 0x2, 0x152, 0x43, 0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 
    0x7, 0x60, 0x2, 0x2, 0x154, 0x45, 0x3, 0x2, 0x2, 0x2, 0x155, 0x156, 
    0x9, 0x4, 0x2, 0x2, 0x156, 0x47, 0x3, 0x2, 0x2, 0x2, 0x157, 0x159, 0x7, 
    0x6b, 0x2, 0x2, 0x158, 0x15a, 0x9, 0x5, 0x2, 0x2, 0x159, 0x158, 0x3, 
    0x2, 0x2, 0x2, 0x159, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x15b, 0x15d, 0x5, 0x4c, 0x27, 0x2, 0x15c, 0x15e, 0x9, 0x6, 
    0x2, 0x2, 0x15d, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 0x3, 0x2, 
    0x2, 0x2, 0x15e, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x161, 0x7, 0x75, 
    0x2, 0x2, 0x160, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 0x3, 0x2, 
    0x2, 0x2, 0x161, 0x162, 0x3, 0x2, 0x2, 0x2, 0x162, 0x16a, 0x9, 0x7, 
    0x2, 0x2, 0x163, 0x164, 0x7, 0x6f, 0x2, 0x2, 0x164, 0x16a, 0x9, 0x8, 
    0x2, 0x2, 0x165, 0x166, 0x7, 0x70, 0x2, 0x2, 0x166, 0x16a, 0x9, 0x9, 
    0x2, 0x2, 0x167, 0x168, 0x7, 0x71, 0x2, 0x2, 0x168, 0x16a, 0x9, 0xa, 
    0x2, 0x2, 0x169, 0x160, 0x3, 0x2, 0x2, 0x2, 0x169, 0x163, 0x3, 0x2, 
    0x2, 0x2, 0x169, 0x165, 0x3, 0x2, 0x2, 0x2, 0x169, 0x167, 0x3, 0x2, 
    0x2, 0x2, 0x16a, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16f, 0x7, 0x57, 
    0x2, 0x2, 0x16c, 0x16d, 0x7, 0x73, 0x2, 0x2, 0x16d, 0x16f, 0x7, 0x57, 
    0x2, 0x2, 0x16e, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16c, 0x3, 0x2, 
    0x2, 0x2, 0x16f, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x9, 0xb, 0x2, 
    0x2, 0x171, 0x51, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 0x9, 0xc, 0x2, 0x2, 
    0x173, 0x53, 0x3, 0x2, 0x2, 0x2, 0x25, 0x59, 0x5e, 0x60, 0x70, 0x78, 
    0x7c, 0x82, 0x88, 0x8a, 0x91, 0x95, 0x9e, 0xa3, 0xa9, 0xb5, 0xbf, 0xc9, 
    0xd5, 0xdc, 0xe6, 0xea, 0xf9, 0x105, 0x110, 0x117, 0x123, 0x130, 0x140, 
    0x147, 0x14f, 0x159, 0x15d, 0x160, 0x169, 0x16e, 
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
