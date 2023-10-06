
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
#include <variant>
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

tree::TerminalNode* TypedefParser::FieldDefinitionContext::EXCL() {
  return getToken(TypedefParser::EXCL, 0);
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
    setState(141);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::EXCL) {
      setState(140);
      dynamic_cast<FieldDefinitionContext *>(_localctx)->is_required = match(TypedefParser::EXCL);
    }
    setState(143);
    match(TypedefParser::COLON);
    setState(146);
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
        setState(144);
        typeAnnotation();
        break;
      }

      case TypedefParser::KW_STRUCT:
      case TypedefParser::KW_VARIANT: {
        setState(145);
        typeDefinition();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(150);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::EQ) {
      setState(148);
      match(TypedefParser::EQ);
      setState(149);
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
    setState(152);
    typeIdentifier();
    setState(164);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::LT) {
      setState(153);
      match(TypedefParser::LT);
      setState(154);
      typeAnnotation();
      setState(159);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::COMMA) {
        setState(155);
        match(TypedefParser::COMMA);
        setState(156);
        typeAnnotation();
        setState(161);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(162);
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
    setState(170);
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
        setState(166);
        primitiveTypeIdentifier();
        break;
      }

      case TypedefParser::KW_VECTOR: {
        enterOuterAlt(_localctx, 2);
        setState(167);
        match(TypedefParser::KW_VECTOR);
        break;
      }

      case TypedefParser::KW_MAP: {
        enterOuterAlt(_localctx, 3);
        setState(168);
        match(TypedefParser::KW_MAP);
        break;
      }

      case TypedefParser::NON_KEYWORD_IDENTIFIER:
      case TypedefParser::RAW_ESCAPE: {
        enterOuterAlt(_localctx, 4);
        setState(169);
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
    setState(172);
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
    setState(174);
    match(TypedefParser::KW_TEMPLATE);
    setState(175);
    identifier();
    setState(176);
    match(TypedefParser::LPAREN);

    setState(185);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::NON_KEYWORD_IDENTIFIER

    || _la == TypedefParser::RAW_ESCAPE) {
      setState(177);
      functionParameter();
      setState(182);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::COMMA) {
        setState(178);
        match(TypedefParser::COMMA);
        setState(179);
        functionParameter();
        setState(184);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(187);
    match(TypedefParser::RPAREN);
    setState(188);
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
    setState(190);
    match(TypedefParser::START_TEMPLATE);
    setState(194);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::TMPL_EXPR_OPEN

    || _la == TypedefParser::TMPL_TEXT) {
      setState(191);
      tmplItem();
      setState(196);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(197);
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

tree::TerminalNode* TypedefParser::TmplItemContext::TMPL_EXPR_OPEN() {
  return getToken(TypedefParser::TMPL_EXPR_OPEN, 0);
}

TypedefParser::TmplExpressionContext* TypedefParser::TmplItemContext::tmplExpression() {
  return getRuleContext<TypedefParser::TmplExpressionContext>(0);
}

tree::TerminalNode* TypedefParser::TmplItemContext::TMPL_EXPR_CLOSE() {
  return getToken(TypedefParser::TMPL_EXPR_CLOSE, 0);
}

TypedefParser::TmplIfBlockContext* TypedefParser::TmplItemContext::tmplIfBlock() {
  return getRuleContext<TypedefParser::TmplIfBlockContext>(0);
}

TypedefParser::TmplForBlockContext* TypedefParser::TmplItemContext::tmplForBlock() {
  return getRuleContext<TypedefParser::TmplForBlockContext>(0);
}

TypedefParser::TmplSwitchBlockContext* TypedefParser::TmplItemContext::tmplSwitchBlock() {
  return getRuleContext<TypedefParser::TmplSwitchBlockContext>(0);
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
    setState(207);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(199);
      tmplText();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(200);
      match(TypedefParser::TMPL_EXPR_OPEN);
      setState(201);
      tmplExpression();
      setState(202);
      match(TypedefParser::TMPL_EXPR_CLOSE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(204);
      tmplIfBlock();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(205);
      tmplForBlock();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(206);
      tmplSwitchBlock();
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
    setState(209);
    match(TypedefParser::TMPL_TEXT);
   _ctx->stop = _input->LT(-1);
    td::SetTmplText(_localctx->text, _localctx);
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

tree::TerminalNode* TypedefParser::TmplExpressionContext::TMPL_LPAREN() {
  return getToken(TypedefParser::TMPL_LPAREN, 0);
}

TypedefParser::TmplExpressionContext* TypedefParser::TmplExpressionContext::tmplExpression() {
  return getRuleContext<TypedefParser::TmplExpressionContext>(0);
}

tree::TerminalNode* TypedefParser::TmplExpressionContext::TMPL_RPAREN() {
  return getToken(TypedefParser::TMPL_RPAREN, 0);
}

tree::TerminalNode* TypedefParser::TmplExpressionContext::TMPL_NOT() {
  return getToken(TypedefParser::TMPL_NOT, 0);
}

TypedefParser::TmplValueReferencePathContext* TypedefParser::TmplExpressionContext::tmplValueReferencePath() {
  return getRuleContext<TypedefParser::TmplValueReferencePathContext>(0);
}

TypedefParser::TmplFunctionCallContext* TypedefParser::TmplExpressionContext::tmplFunctionCall() {
  return getRuleContext<TypedefParser::TmplFunctionCallContext>(0);
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
  enterRule(_localctx, 26, TypedefParser::RuleTmplExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(219);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(211);
      match(TypedefParser::TMPL_LPAREN);
      setState(212);
      tmplExpression();
      setState(213);
      match(TypedefParser::TMPL_RPAREN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(215);
      match(TypedefParser::TMPL_NOT);
      setState(216);
      tmplExpression();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(217);
      tmplValueReferencePath();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(218);
      tmplFunctionCall();
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

//----------------- TmplFunctionCallContext ------------------------------------------------------------------

TypedefParser::TmplFunctionCallContext::TmplFunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::TmplIdentifierContext* TypedefParser::TmplFunctionCallContext::tmplIdentifier() {
  return getRuleContext<TypedefParser::TmplIdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::TmplFunctionCallContext::TMPL_LPAREN() {
  return getToken(TypedefParser::TMPL_LPAREN, 0);
}

tree::TerminalNode* TypedefParser::TmplFunctionCallContext::TMPL_RPAREN() {
  return getToken(TypedefParser::TMPL_RPAREN, 0);
}

std::vector<TypedefParser::TmplValueReferencePathContext *> TypedefParser::TmplFunctionCallContext::tmplValueReferencePath() {
  return getRuleContexts<TypedefParser::TmplValueReferencePathContext>();
}

TypedefParser::TmplValueReferencePathContext* TypedefParser::TmplFunctionCallContext::tmplValueReferencePath(size_t i) {
  return getRuleContext<TypedefParser::TmplValueReferencePathContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::TmplFunctionCallContext::TMPL_COMMA() {
  return getTokens(TypedefParser::TMPL_COMMA);
}

tree::TerminalNode* TypedefParser::TmplFunctionCallContext::TMPL_COMMA(size_t i) {
  return getToken(TypedefParser::TMPL_COMMA, i);
}


size_t TypedefParser::TmplFunctionCallContext::getRuleIndex() const {
  return TypedefParser::RuleTmplFunctionCall;
}

void TypedefParser::TmplFunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplFunctionCall(this);
}

void TypedefParser::TmplFunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplFunctionCall(this);
}


antlrcpp::Any TypedefParser::TmplFunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplFunctionCallContext* TypedefParser::tmplFunctionCall() {
  TmplFunctionCallContext *_localctx = _tracker.createInstance<TmplFunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 28, TypedefParser::RuleTmplFunctionCall);
  dynamic_cast<TmplFunctionCallContext *>(_localctx)->tmpl_def =  nullptr; dynamic_cast<TmplFunctionCallContext *>(_localctx)->built_in =  false;
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(221);
    tmplIdentifier();
    setState(222);
    match(TypedefParser::TMPL_LPAREN);
    setState(224);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::TMPL_NON_KEYWORD_IDENTIFIER) {
      setState(223);
      tmplValueReferencePath();
    }
    setState(230);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::TMPL_COMMA) {
      setState(226);
      match(TypedefParser::TMPL_COMMA);
      setState(227);
      tmplValueReferencePath();
      setState(232);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(233);
    match(TypedefParser::TMPL_RPAREN);
   
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

TypedefParser::TmplIfSubBlockContext* TypedefParser::TmplIfBlockContext::tmplIfSubBlock() {
  return getRuleContext<TypedefParser::TmplIfSubBlockContext>(0);
}

tree::TerminalNode* TypedefParser::TmplIfBlockContext::TMPL_EXPR_OPEN() {
  return getToken(TypedefParser::TMPL_EXPR_OPEN, 0);
}

tree::TerminalNode* TypedefParser::TmplIfBlockContext::TMPL_KW_CLOSEIF() {
  return getToken(TypedefParser::TMPL_KW_CLOSEIF, 0);
}

tree::TerminalNode* TypedefParser::TmplIfBlockContext::TMPL_EXPR_CLOSE() {
  return getToken(TypedefParser::TMPL_EXPR_CLOSE, 0);
}

std::vector<TypedefParser::TmplElIfSubBlockContext *> TypedefParser::TmplIfBlockContext::tmplElIfSubBlock() {
  return getRuleContexts<TypedefParser::TmplElIfSubBlockContext>();
}

TypedefParser::TmplElIfSubBlockContext* TypedefParser::TmplIfBlockContext::tmplElIfSubBlock(size_t i) {
  return getRuleContext<TypedefParser::TmplElIfSubBlockContext>(i);
}

TypedefParser::TmplElseSubBlockContext* TypedefParser::TmplIfBlockContext::tmplElseSubBlock() {
  return getRuleContext<TypedefParser::TmplElseSubBlockContext>(0);
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
  enterRule(_localctx, 30, TypedefParser::RuleTmplIfBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(235);
    tmplIfSubBlock();
    setState(239);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(236);
        tmplElIfSubBlock(); 
      }
      setState(241);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
    setState(243);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(242);
      tmplElseSubBlock();
      break;
    }

    }

    setState(245);
    match(TypedefParser::TMPL_EXPR_OPEN);
    setState(246);
    match(TypedefParser::TMPL_KW_CLOSEIF);
    setState(247);
    match(TypedefParser::TMPL_EXPR_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplIfSubBlockContext ------------------------------------------------------------------

TypedefParser::TmplIfSubBlockContext::TmplIfSubBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::TmplIfSubBlockContext::TMPL_EXPR_OPEN() {
  return getToken(TypedefParser::TMPL_EXPR_OPEN, 0);
}

tree::TerminalNode* TypedefParser::TmplIfSubBlockContext::TMPL_KW_IF() {
  return getToken(TypedefParser::TMPL_KW_IF, 0);
}

TypedefParser::TmplExpressionContext* TypedefParser::TmplIfSubBlockContext::tmplExpression() {
  return getRuleContext<TypedefParser::TmplExpressionContext>(0);
}

tree::TerminalNode* TypedefParser::TmplIfSubBlockContext::TMPL_EXPR_CLOSE() {
  return getToken(TypedefParser::TMPL_EXPR_CLOSE, 0);
}

std::vector<TypedefParser::TmplItemContext *> TypedefParser::TmplIfSubBlockContext::tmplItem() {
  return getRuleContexts<TypedefParser::TmplItemContext>();
}

TypedefParser::TmplItemContext* TypedefParser::TmplIfSubBlockContext::tmplItem(size_t i) {
  return getRuleContext<TypedefParser::TmplItemContext>(i);
}


size_t TypedefParser::TmplIfSubBlockContext::getRuleIndex() const {
  return TypedefParser::RuleTmplIfSubBlock;
}

void TypedefParser::TmplIfSubBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplIfSubBlock(this);
}

void TypedefParser::TmplIfSubBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplIfSubBlock(this);
}


antlrcpp::Any TypedefParser::TmplIfSubBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplIfSubBlock(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplIfSubBlockContext* TypedefParser::tmplIfSubBlock() {
  TmplIfSubBlockContext *_localctx = _tracker.createInstance<TmplIfSubBlockContext>(_ctx, getState());
  enterRule(_localctx, 32, TypedefParser::RuleTmplIfSubBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(249);
    match(TypedefParser::TMPL_EXPR_OPEN);
    setState(250);
    match(TypedefParser::TMPL_KW_IF);
    setState(251);
    tmplExpression();
    setState(252);
    match(TypedefParser::TMPL_EXPR_CLOSE);
    setState(257);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(254);
        tmplItem(); 
      }
      setState(259);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplElIfSubBlockContext ------------------------------------------------------------------

TypedefParser::TmplElIfSubBlockContext::TmplElIfSubBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::TmplElIfSubBlockContext::TMPL_EXPR_OPEN() {
  return getToken(TypedefParser::TMPL_EXPR_OPEN, 0);
}

tree::TerminalNode* TypedefParser::TmplElIfSubBlockContext::TMPL_KW_ELIF() {
  return getToken(TypedefParser::TMPL_KW_ELIF, 0);
}

TypedefParser::TmplExpressionContext* TypedefParser::TmplElIfSubBlockContext::tmplExpression() {
  return getRuleContext<TypedefParser::TmplExpressionContext>(0);
}

tree::TerminalNode* TypedefParser::TmplElIfSubBlockContext::TMPL_EXPR_CLOSE() {
  return getToken(TypedefParser::TMPL_EXPR_CLOSE, 0);
}

std::vector<TypedefParser::TmplItemContext *> TypedefParser::TmplElIfSubBlockContext::tmplItem() {
  return getRuleContexts<TypedefParser::TmplItemContext>();
}

TypedefParser::TmplItemContext* TypedefParser::TmplElIfSubBlockContext::tmplItem(size_t i) {
  return getRuleContext<TypedefParser::TmplItemContext>(i);
}


size_t TypedefParser::TmplElIfSubBlockContext::getRuleIndex() const {
  return TypedefParser::RuleTmplElIfSubBlock;
}

void TypedefParser::TmplElIfSubBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplElIfSubBlock(this);
}

void TypedefParser::TmplElIfSubBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplElIfSubBlock(this);
}


antlrcpp::Any TypedefParser::TmplElIfSubBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplElIfSubBlock(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplElIfSubBlockContext* TypedefParser::tmplElIfSubBlock() {
  TmplElIfSubBlockContext *_localctx = _tracker.createInstance<TmplElIfSubBlockContext>(_ctx, getState());
  enterRule(_localctx, 34, TypedefParser::RuleTmplElIfSubBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(260);
    match(TypedefParser::TMPL_EXPR_OPEN);
    setState(261);
    match(TypedefParser::TMPL_KW_ELIF);
    setState(262);
    tmplExpression();
    setState(263);
    match(TypedefParser::TMPL_EXPR_CLOSE);
    setState(268);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(265);
        tmplItem(); 
      }
      setState(270);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplElseSubBlockContext ------------------------------------------------------------------

TypedefParser::TmplElseSubBlockContext::TmplElseSubBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::TmplElseSubBlockContext::TMPL_EXPR_OPEN() {
  return getToken(TypedefParser::TMPL_EXPR_OPEN, 0);
}

tree::TerminalNode* TypedefParser::TmplElseSubBlockContext::TMPL_KW_ELSE() {
  return getToken(TypedefParser::TMPL_KW_ELSE, 0);
}

tree::TerminalNode* TypedefParser::TmplElseSubBlockContext::TMPL_EXPR_CLOSE() {
  return getToken(TypedefParser::TMPL_EXPR_CLOSE, 0);
}

std::vector<TypedefParser::TmplItemContext *> TypedefParser::TmplElseSubBlockContext::tmplItem() {
  return getRuleContexts<TypedefParser::TmplItemContext>();
}

TypedefParser::TmplItemContext* TypedefParser::TmplElseSubBlockContext::tmplItem(size_t i) {
  return getRuleContext<TypedefParser::TmplItemContext>(i);
}


size_t TypedefParser::TmplElseSubBlockContext::getRuleIndex() const {
  return TypedefParser::RuleTmplElseSubBlock;
}

void TypedefParser::TmplElseSubBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplElseSubBlock(this);
}

void TypedefParser::TmplElseSubBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplElseSubBlock(this);
}


antlrcpp::Any TypedefParser::TmplElseSubBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplElseSubBlock(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplElseSubBlockContext* TypedefParser::tmplElseSubBlock() {
  TmplElseSubBlockContext *_localctx = _tracker.createInstance<TmplElseSubBlockContext>(_ctx, getState());
  enterRule(_localctx, 36, TypedefParser::RuleTmplElseSubBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(271);
    match(TypedefParser::TMPL_EXPR_OPEN);
    setState(272);
    match(TypedefParser::TMPL_KW_ELSE);
    setState(273);
    match(TypedefParser::TMPL_EXPR_CLOSE);
    setState(277);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(274);
        tmplItem(); 
      }
      setState(279);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplForBlockContext ------------------------------------------------------------------

TypedefParser::TmplForBlockContext::TmplForBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> TypedefParser::TmplForBlockContext::TMPL_EXPR_OPEN() {
  return getTokens(TypedefParser::TMPL_EXPR_OPEN);
}

tree::TerminalNode* TypedefParser::TmplForBlockContext::TMPL_EXPR_OPEN(size_t i) {
  return getToken(TypedefParser::TMPL_EXPR_OPEN, i);
}

tree::TerminalNode* TypedefParser::TmplForBlockContext::TMPL_KW_FOR() {
  return getToken(TypedefParser::TMPL_KW_FOR, 0);
}

TypedefParser::TmplBindingVariablesContext* TypedefParser::TmplForBlockContext::tmplBindingVariables() {
  return getRuleContext<TypedefParser::TmplBindingVariablesContext>(0);
}

tree::TerminalNode* TypedefParser::TmplForBlockContext::TMPL_KW_IN() {
  return getToken(TypedefParser::TMPL_KW_IN, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::TmplForBlockContext::TMPL_EXPR_CLOSE() {
  return getTokens(TypedefParser::TMPL_EXPR_CLOSE);
}

tree::TerminalNode* TypedefParser::TmplForBlockContext::TMPL_EXPR_CLOSE(size_t i) {
  return getToken(TypedefParser::TMPL_EXPR_CLOSE, i);
}

tree::TerminalNode* TypedefParser::TmplForBlockContext::TMPL_KW_CLOSE_FOR() {
  return getToken(TypedefParser::TMPL_KW_CLOSE_FOR, 0);
}

TypedefParser::TmplValueReferencePathContext* TypedefParser::TmplForBlockContext::tmplValueReferencePath() {
  return getRuleContext<TypedefParser::TmplValueReferencePathContext>(0);
}

std::vector<TypedefParser::TmplItemContext *> TypedefParser::TmplForBlockContext::tmplItem() {
  return getRuleContexts<TypedefParser::TmplItemContext>();
}

TypedefParser::TmplItemContext* TypedefParser::TmplForBlockContext::tmplItem(size_t i) {
  return getRuleContext<TypedefParser::TmplItemContext>(i);
}


size_t TypedefParser::TmplForBlockContext::getRuleIndex() const {
  return TypedefParser::RuleTmplForBlock;
}

void TypedefParser::TmplForBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplForBlock(this);
}

void TypedefParser::TmplForBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplForBlock(this);
}


antlrcpp::Any TypedefParser::TmplForBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplForBlock(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplForBlockContext* TypedefParser::tmplForBlock() {
  TmplForBlockContext *_localctx = _tracker.createInstance<TmplForBlockContext>(_ctx, getState());
  enterRule(_localctx, 38, TypedefParser::RuleTmplForBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(280);
    match(TypedefParser::TMPL_EXPR_OPEN);
    setState(281);
    match(TypedefParser::TMPL_KW_FOR);
    setState(282);
    tmplBindingVariables();
    setState(283);
    match(TypedefParser::TMPL_KW_IN);
    setState(284);
    dynamic_cast<TmplForBlockContext *>(_localctx)->collection = tmplValueReferencePath();
    setState(285);
    match(TypedefParser::TMPL_EXPR_CLOSE);
    setState(290);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(287);
        tmplItem(); 
      }
      setState(292);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    }

    setState(293);
    match(TypedefParser::TMPL_EXPR_OPEN);
    setState(294);
    match(TypedefParser::TMPL_KW_CLOSE_FOR);
    setState(295);
    match(TypedefParser::TMPL_EXPR_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplSwitchBlockContext ------------------------------------------------------------------

TypedefParser::TmplSwitchBlockContext::TmplSwitchBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> TypedefParser::TmplSwitchBlockContext::TMPL_EXPR_OPEN() {
  return getTokens(TypedefParser::TMPL_EXPR_OPEN);
}

tree::TerminalNode* TypedefParser::TmplSwitchBlockContext::TMPL_EXPR_OPEN(size_t i) {
  return getToken(TypedefParser::TMPL_EXPR_OPEN, i);
}

tree::TerminalNode* TypedefParser::TmplSwitchBlockContext::TMPL_KW_SWITCH() {
  return getToken(TypedefParser::TMPL_KW_SWITCH, 0);
}

TypedefParser::TmplValueReferencePathContext* TypedefParser::TmplSwitchBlockContext::tmplValueReferencePath() {
  return getRuleContext<TypedefParser::TmplValueReferencePathContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::TmplSwitchBlockContext::TMPL_EXPR_CLOSE() {
  return getTokens(TypedefParser::TMPL_EXPR_CLOSE);
}

tree::TerminalNode* TypedefParser::TmplSwitchBlockContext::TMPL_EXPR_CLOSE(size_t i) {
  return getToken(TypedefParser::TMPL_EXPR_CLOSE, i);
}

tree::TerminalNode* TypedefParser::TmplSwitchBlockContext::TMPL_KW_CLOSE_SWITCH() {
  return getToken(TypedefParser::TMPL_KW_CLOSE_SWITCH, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::TmplSwitchBlockContext::TMPL_TEXT() {
  return getTokens(TypedefParser::TMPL_TEXT);
}

tree::TerminalNode* TypedefParser::TmplSwitchBlockContext::TMPL_TEXT(size_t i) {
  return getToken(TypedefParser::TMPL_TEXT, i);
}

std::vector<TypedefParser::TmplCaseBlockContext *> TypedefParser::TmplSwitchBlockContext::tmplCaseBlock() {
  return getRuleContexts<TypedefParser::TmplCaseBlockContext>();
}

TypedefParser::TmplCaseBlockContext* TypedefParser::TmplSwitchBlockContext::tmplCaseBlock(size_t i) {
  return getRuleContext<TypedefParser::TmplCaseBlockContext>(i);
}

TypedefParser::TmplDefaultBlockContext* TypedefParser::TmplSwitchBlockContext::tmplDefaultBlock() {
  return getRuleContext<TypedefParser::TmplDefaultBlockContext>(0);
}


size_t TypedefParser::TmplSwitchBlockContext::getRuleIndex() const {
  return TypedefParser::RuleTmplSwitchBlock;
}

void TypedefParser::TmplSwitchBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplSwitchBlock(this);
}

void TypedefParser::TmplSwitchBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplSwitchBlock(this);
}


antlrcpp::Any TypedefParser::TmplSwitchBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplSwitchBlock(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplSwitchBlockContext* TypedefParser::tmplSwitchBlock() {
  TmplSwitchBlockContext *_localctx = _tracker.createInstance<TmplSwitchBlockContext>(_ctx, getState());
  enterRule(_localctx, 40, TypedefParser::RuleTmplSwitchBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(297);
    match(TypedefParser::TMPL_EXPR_OPEN);
    setState(298);
    match(TypedefParser::TMPL_KW_SWITCH);
    setState(299);
    tmplValueReferencePath();
    setState(300);
    match(TypedefParser::TMPL_EXPR_CLOSE);
    setState(303);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      setState(302);
      match(TypedefParser::TMPL_TEXT);
      break;
    }

    }
    setState(314);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(306);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
        case 1: {
          setState(305);
          match(TypedefParser::TMPL_TEXT);
          break;
        }

        }
        setState(308);
        tmplCaseBlock();
        setState(310);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
        case 1: {
          setState(309);
          match(TypedefParser::TMPL_TEXT);
          break;
        }

        } 
      }
      setState(316);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    }
    setState(324);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      setState(318);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
      case 1: {
        setState(317);
        match(TypedefParser::TMPL_TEXT);
        break;
      }

      }
      setState(320);
      tmplDefaultBlock();
      setState(322);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypedefParser::TMPL_TEXT) {
        setState(321);
        match(TypedefParser::TMPL_TEXT);
      }
      break;
    }

    }

    setState(326);
    match(TypedefParser::TMPL_EXPR_OPEN);
    setState(327);
    match(TypedefParser::TMPL_KW_CLOSE_SWITCH);
    setState(328);
    match(TypedefParser::TMPL_EXPR_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplCaseBlockContext ------------------------------------------------------------------

TypedefParser::TmplCaseBlockContext::TmplCaseBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> TypedefParser::TmplCaseBlockContext::TMPL_EXPR_OPEN() {
  return getTokens(TypedefParser::TMPL_EXPR_OPEN);
}

tree::TerminalNode* TypedefParser::TmplCaseBlockContext::TMPL_EXPR_OPEN(size_t i) {
  return getToken(TypedefParser::TMPL_EXPR_OPEN, i);
}

tree::TerminalNode* TypedefParser::TmplCaseBlockContext::TMPL_KW_CASE() {
  return getToken(TypedefParser::TMPL_KW_CASE, 0);
}

TypedefParser::TmplValueReferencePathContext* TypedefParser::TmplCaseBlockContext::tmplValueReferencePath() {
  return getRuleContext<TypedefParser::TmplValueReferencePathContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::TmplCaseBlockContext::TMPL_EXPR_CLOSE() {
  return getTokens(TypedefParser::TMPL_EXPR_CLOSE);
}

tree::TerminalNode* TypedefParser::TmplCaseBlockContext::TMPL_EXPR_CLOSE(size_t i) {
  return getToken(TypedefParser::TMPL_EXPR_CLOSE, i);
}

tree::TerminalNode* TypedefParser::TmplCaseBlockContext::TMPL_KW_CLOSE_CASE() {
  return getToken(TypedefParser::TMPL_KW_CLOSE_CASE, 0);
}

std::vector<TypedefParser::TmplItemContext *> TypedefParser::TmplCaseBlockContext::tmplItem() {
  return getRuleContexts<TypedefParser::TmplItemContext>();
}

TypedefParser::TmplItemContext* TypedefParser::TmplCaseBlockContext::tmplItem(size_t i) {
  return getRuleContext<TypedefParser::TmplItemContext>(i);
}

tree::TerminalNode* TypedefParser::TmplCaseBlockContext::TMPL_TEXT() {
  return getToken(TypedefParser::TMPL_TEXT, 0);
}


size_t TypedefParser::TmplCaseBlockContext::getRuleIndex() const {
  return TypedefParser::RuleTmplCaseBlock;
}

void TypedefParser::TmplCaseBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplCaseBlock(this);
}

void TypedefParser::TmplCaseBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplCaseBlock(this);
}


antlrcpp::Any TypedefParser::TmplCaseBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplCaseBlock(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplCaseBlockContext* TypedefParser::tmplCaseBlock() {
  TmplCaseBlockContext *_localctx = _tracker.createInstance<TmplCaseBlockContext>(_ctx, getState());
  enterRule(_localctx, 42, TypedefParser::RuleTmplCaseBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(331);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::TMPL_TEXT) {
      setState(330);
      match(TypedefParser::TMPL_TEXT);
    }
    setState(333);
    match(TypedefParser::TMPL_EXPR_OPEN);
    setState(334);
    match(TypedefParser::TMPL_KW_CASE);
    setState(335);
    tmplValueReferencePath();
    setState(336);
    match(TypedefParser::TMPL_EXPR_CLOSE);
    setState(341);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(338);
        tmplItem(); 
      }
      setState(343);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    }

    setState(344);
    match(TypedefParser::TMPL_EXPR_OPEN);
    setState(345);
    match(TypedefParser::TMPL_KW_CLOSE_CASE);
    setState(346);
    match(TypedefParser::TMPL_EXPR_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplDefaultBlockContext ------------------------------------------------------------------

TypedefParser::TmplDefaultBlockContext::TmplDefaultBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> TypedefParser::TmplDefaultBlockContext::TMPL_EXPR_OPEN() {
  return getTokens(TypedefParser::TMPL_EXPR_OPEN);
}

tree::TerminalNode* TypedefParser::TmplDefaultBlockContext::TMPL_EXPR_OPEN(size_t i) {
  return getToken(TypedefParser::TMPL_EXPR_OPEN, i);
}

tree::TerminalNode* TypedefParser::TmplDefaultBlockContext::TMPL_KW_DEFAULT() {
  return getToken(TypedefParser::TMPL_KW_DEFAULT, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::TmplDefaultBlockContext::TMPL_EXPR_CLOSE() {
  return getTokens(TypedefParser::TMPL_EXPR_CLOSE);
}

tree::TerminalNode* TypedefParser::TmplDefaultBlockContext::TMPL_EXPR_CLOSE(size_t i) {
  return getToken(TypedefParser::TMPL_EXPR_CLOSE, i);
}

tree::TerminalNode* TypedefParser::TmplDefaultBlockContext::TMPL_KW_CLOSE_DEFAULT() {
  return getToken(TypedefParser::TMPL_KW_CLOSE_DEFAULT, 0);
}

std::vector<TypedefParser::TmplItemContext *> TypedefParser::TmplDefaultBlockContext::tmplItem() {
  return getRuleContexts<TypedefParser::TmplItemContext>();
}

TypedefParser::TmplItemContext* TypedefParser::TmplDefaultBlockContext::tmplItem(size_t i) {
  return getRuleContext<TypedefParser::TmplItemContext>(i);
}

tree::TerminalNode* TypedefParser::TmplDefaultBlockContext::TMPL_TEXT() {
  return getToken(TypedefParser::TMPL_TEXT, 0);
}


size_t TypedefParser::TmplDefaultBlockContext::getRuleIndex() const {
  return TypedefParser::RuleTmplDefaultBlock;
}

void TypedefParser::TmplDefaultBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplDefaultBlock(this);
}

void TypedefParser::TmplDefaultBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplDefaultBlock(this);
}


antlrcpp::Any TypedefParser::TmplDefaultBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplDefaultBlock(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplDefaultBlockContext* TypedefParser::tmplDefaultBlock() {
  TmplDefaultBlockContext *_localctx = _tracker.createInstance<TmplDefaultBlockContext>(_ctx, getState());
  enterRule(_localctx, 44, TypedefParser::RuleTmplDefaultBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(349);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::TMPL_TEXT) {
      setState(348);
      match(TypedefParser::TMPL_TEXT);
    }
    setState(351);
    match(TypedefParser::TMPL_EXPR_OPEN);
    setState(352);
    match(TypedefParser::TMPL_KW_DEFAULT);
    setState(353);
    match(TypedefParser::TMPL_EXPR_CLOSE);
    setState(358);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(355);
        tmplItem(); 
      }
      setState(360);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    }

    setState(361);
    match(TypedefParser::TMPL_EXPR_OPEN);
    setState(362);
    match(TypedefParser::TMPL_KW_CLOSE_DEFAULT);
    setState(363);
    match(TypedefParser::TMPL_EXPR_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplBindingVariablesContext ------------------------------------------------------------------

TypedefParser::TmplBindingVariablesContext::TmplBindingVariablesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypedefParser::TmplBindingVariableContext *> TypedefParser::TmplBindingVariablesContext::tmplBindingVariable() {
  return getRuleContexts<TypedefParser::TmplBindingVariableContext>();
}

TypedefParser::TmplBindingVariableContext* TypedefParser::TmplBindingVariablesContext::tmplBindingVariable(size_t i) {
  return getRuleContext<TypedefParser::TmplBindingVariableContext>(i);
}

tree::TerminalNode* TypedefParser::TmplBindingVariablesContext::TMPL_COMMA() {
  return getToken(TypedefParser::TMPL_COMMA, 0);
}


size_t TypedefParser::TmplBindingVariablesContext::getRuleIndex() const {
  return TypedefParser::RuleTmplBindingVariables;
}

void TypedefParser::TmplBindingVariablesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplBindingVariables(this);
}

void TypedefParser::TmplBindingVariablesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplBindingVariables(this);
}


antlrcpp::Any TypedefParser::TmplBindingVariablesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplBindingVariables(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplBindingVariablesContext* TypedefParser::tmplBindingVariables() {
  TmplBindingVariablesContext *_localctx = _tracker.createInstance<TmplBindingVariablesContext>(_ctx, getState());
  enterRule(_localctx, 46, TypedefParser::RuleTmplBindingVariables);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(365);
    tmplBindingVariable();
    setState(368);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::TMPL_COMMA) {
      setState(366);
      match(TypedefParser::TMPL_COMMA);
      setState(367);
      tmplBindingVariable();
    }
   
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
  enterRule(_localctx, 48, TypedefParser::RuleTmplValueReferencePath);
  	dynamic_cast<TmplValueReferencePathContext *>(_localctx)->first_pass_visited =  false; //
  					dynamic_cast<TmplValueReferencePathContext *>(_localctx)->leaf_annotation =  nullptr; //
  					dynamic_cast<TmplValueReferencePathContext *>(_localctx)->leaf_definition =  nullptr;
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(370);
    tmplValueReference();
    setState(375);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::TMPL_DOT) {
      setState(371);
      match(TypedefParser::TMPL_DOT);
      setState(372);
      tmplValueReference();
      setState(377);
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
  enterRule(_localctx, 50, TypedefParser::RuleTmplValueReference);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(378);
    tmplIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TmplBindingVariableContext ------------------------------------------------------------------

TypedefParser::TmplBindingVariableContext::TmplBindingVariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::TmplIdentifierContext* TypedefParser::TmplBindingVariableContext::tmplIdentifier() {
  return getRuleContext<TypedefParser::TmplIdentifierContext>(0);
}


size_t TypedefParser::TmplBindingVariableContext::getRuleIndex() const {
  return TypedefParser::RuleTmplBindingVariable;
}

void TypedefParser::TmplBindingVariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmplBindingVariable(this);
}

void TypedefParser::TmplBindingVariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmplBindingVariable(this);
}


antlrcpp::Any TypedefParser::TmplBindingVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTmplBindingVariable(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TmplBindingVariableContext* TypedefParser::tmplBindingVariable() {
  TmplBindingVariableContext *_localctx = _tracker.createInstance<TmplBindingVariableContext>(_ctx, getState());
  enterRule(_localctx, 52, TypedefParser::RuleTmplBindingVariable);
  dynamic_cast<TmplBindingVariableContext *>(_localctx)->type =  nullptr;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(380);
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
    setState(382);
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
    setState(384);
    identifier();
    setState(385);
    match(TypedefParser::COLON);
    setState(386);
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
    setState(388);
    match(TypedefParser::KW_USE);
    setState(389);
    symbolPath();
    setState(390);
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

std::vector<tree::TerminalNode *> TypedefParser::SymbolPathContext::COLONCOLON() {
  return getTokens(TypedefParser::COLONCOLON);
}

tree::TerminalNode* TypedefParser::SymbolPathContext::COLONCOLON(size_t i) {
  return getToken(TypedefParser::COLONCOLON, i);
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
    setState(393);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::COLONCOLON) {
      setState(392);
      dynamic_cast<SymbolPathContext *>(_localctx)->leading_pathsep = match(TypedefParser::COLONCOLON);
    }
    setState(395);
    identifier();
    setState(400);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::COLONCOLON) {
      setState(396);
      match(TypedefParser::COLONCOLON);
      setState(397);
      identifier();
      setState(402);
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
    setState(408);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::KW_FALSE:
      case TypedefParser::KW_TRUE: {
        enterOuterAlt(_localctx, 1);
        setState(403);
        boolLiteral();
        break;
      }

      case TypedefParser::CHAR_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(404);
        charLiteral();
        break;
      }

      case TypedefParser::STRING_LITERAL:
      case TypedefParser::RAW_STRING_LITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(405);
        stringLiteral();
        break;
      }

      case TypedefParser::FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(406);
        floatLiteral();
        break;
      }

      case TypedefParser::DEC_LITERAL:
      case TypedefParser::HEX_LITERAL:
      case TypedefParser::OCT_LITERAL:
      case TypedefParser::BIN_LITERAL: {
        enterOuterAlt(_localctx, 5);
        setState(407);
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
    setState(410);
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
    setState(412);
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
    setState(414);
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
    setState(416);
    match(TypedefParser::FLOAT_LITERAL);
    setState(418);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::KW_F32

    || _la == TypedefParser::KW_F64) {
      setState(417);
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
    setState(420);
    intDigits();
    setState(422);
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
      setState(421);
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

tree::TerminalNode* TypedefParser::IntDigitsContext::DEC_LITERAL() {
  return getToken(TypedefParser::DEC_LITERAL, 0);
}

tree::TerminalNode* TypedefParser::IntDigitsContext::HEX_LITERAL() {
  return getToken(TypedefParser::HEX_LITERAL, 0);
}

tree::TerminalNode* TypedefParser::IntDigitsContext::OCT_LITERAL() {
  return getToken(TypedefParser::OCT_LITERAL, 0);
}

tree::TerminalNode* TypedefParser::IntDigitsContext::BIN_LITERAL() {
  return getToken(TypedefParser::BIN_LITERAL, 0);
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
    enterOuterAlt(_localctx, 1);
    setState(424);
    _la = _input->LA(1);
    if (!(((((_la - 97) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 97)) & ((1ULL << (TypedefParser::DEC_LITERAL - 97))
      | (1ULL << (TypedefParser::HEX_LITERAL - 97))
      | (1ULL << (TypedefParser::OCT_LITERAL - 97))
      | (1ULL << (TypedefParser::BIN_LITERAL - 97)))) != 0))) {
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
    setState(429);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::NON_KEYWORD_IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(426);
        dynamic_cast<IdentifierContext *>(_localctx)->nki = match(TypedefParser::NON_KEYWORD_IDENTIFIER);
        break;
      }

      case TypedefParser::RAW_ESCAPE: {
        enterOuterAlt(_localctx, 2);
        setState(427);
        match(TypedefParser::RAW_ESCAPE);
        setState(428);
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
    setState(431);
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
    setState(433);
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
  "tmplDefinition", "tmplBlock", "tmplItem", "tmplText", "tmplExpression", 
  "tmplFunctionCall", "tmplIfBlock", "tmplIfSubBlock", "tmplElIfSubBlock", 
  "tmplElseSubBlock", "tmplForBlock", "tmplSwitchBlock", "tmplCaseBlock", 
  "tmplDefaultBlock", "tmplBindingVariables", "tmplValueReferencePath", 
  "tmplValueReference", "tmplBindingVariable", "tmplIdentifier", "functionParameter", 
  "useDeclaration", "symbolPath", "primitiveLiteral", "boolLiteral", "charLiteral", 
  "stringLiteral", "floatLiteral", "integerLiteral", "intDigits", "identifier", 
  "primitiveTypeIdentifier", "keyword"
};

std::vector<std::string> TypedefParser::_literalNames = {
  "", "'array'", "'as'", "'enum'", "'false'", "'fn'", "'impl'", "'message'", 
  "'module'", "'struct'", "'true'", "'type'", "'typedef'", "'use'", "'variant'", 
  "'vector'", "'map'", "'template'", "'and'", "", "'let'", "'not'", "'or'", 
  "'sizeof'", "'this'", "'trait'", "'where'", "'xor'", "'break'", "'continue'", 
  "", "'do'", "", "", "'goto'", "", "'loop'", "'match'", "'move'", "'return'", 
  "'try'", "'while'", "'yield'", "'abstract'", "'auto'", "'const'", "'double'", 
  "'extern'", "'final'", "'float'", "'int'", "'long'", "'macro'", "'mut'", 
  "'override'", "'private'", "'pub'", "'ref'", "'Self'", "'self'", "'signed'", 
  "'static'", "'super'", "", "'typeof'", "'union'", "'unsafe'", "'unsigned'", 
  "'unsized'", "'virtual'", "'void'", "'volatile'", "'bool'", "'char'", 
  "'str'", "'f32'", "'f64'", "'u8'", "'u16'", "'u32'", "'u64'", "'i8'", 
  "'i16'", "'i32'", "'i64'", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "'0x'", "'0o'", 
  "'0b'", "'t\"'", "'r#'", "'+'", "'-'", "'*'", "", "'%'", "'^'", "", "'&'", 
  "'|'", "'&&'", "'||'", "'+='", "'-='", "'*='", "'/='", "'%='", "'^='", 
  "'|='", "'<<='", "'>>='", "'='", "'=='", "'!='", "", "", "'>='", "'<='", 
  "'@'", "'_'", "", "'..'", "'...'", "", "';'", "':'", "", "'->'", "'=>'", 
  "'#'", "'$'", "'?'", "'{'", "'}'", "'['", "']'", "", "", "", "'\"'", "", 
  "", "", "", "", "", "", "", "", "", "", "'/for'", "", "'/switch'", "'case'", 
  "'/case'", "", "'/default'", "", "", "'/if'", "", "'elif'"
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
  "SHEBANG", "CHAR_LITERAL", "STRING_LITERAL", "RAW_STRING_LITERAL", "DEC_LITERAL", 
  "HEX_LITERAL", "OCT_LITERAL", "BIN_LITERAL", "DEC_DIGITS", "DEC_DIGITS_UNDERSCORE", 
  "HEX_DIGITS", "HEX_DIGITS_UNDERSCORE", "OCT_DIGITS", "OCT_DIGITS_UNDERSCORE", 
  "BIN_DIGITS", "BIN_DIGITS_UNDERSCORE", "FLOAT_LITERAL", "HEX_PREFIX", 
  "OCT_PREFIX", "BIN_PREFIX", "START_TEMPLATE", "RAW_ESCAPE", "PLUS", "MINUS", 
  "AST", "SLASH", "PERCENT", "HAT", "EXCL", "AMP", "VERT", "AMPAMP", "VERTVERT", 
  "PLUSEQ", "MINUSEQ", "STAREQ", "SOLEQ", "PERCENTEQ", "HATEQ", "AMPEQ", 
  "LTLTEQ", "GTGTEQ", "EQ", "EQEQ", "EXCLEQ", "GT", "LT", "GE", "LE", "AT", 
  "LOWBAR", "DOT", "DOTDOT", "DOTDOTDOT", "COMMA", "SEMI", "COLON", "COLONCOLON", 
  "MINUSGT", "EQGT", "NUM", "DOLLAR", "QUEST", "LBRACE", "RBRACE", "LBRACK", 
  "RBRACK", "LPAREN", "RPAREN", "WS", "END_TEMPLATE", "TMPL_EXPR_OPEN", 
  "TMPL_TEXT", "TMPL_EXPR_CLOSE", "TMPL_SLASH", "TMPL_COMMA", "TMPL_DOT", 
  "TMPL_LPAREN", "TMPL_RPAREN", "TMPL_PATHSEP", "TMPL_NOT", "TMPL_KW_FOR", 
  "TMPL_KW_CLOSE_FOR", "TMPL_KW_SWITCH", "TMPL_KW_CLOSE_SWITCH", "TMPL_KW_CASE", 
  "TMPL_KW_CLOSE_CASE", "TMPL_KW_DEFAULT", "TMPL_KW_CLOSE_DEFAULT", "TMPL_KW_IN", 
  "TMPL_KW_IF", "TMPL_KW_CLOSEIF", "TMPL_KW_ELSE", "TMPL_KW_ELIF", "TMPL_NON_KEYWORD_IDENTIFIER", 
  "TMPL_WS"
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
    0x3, 0xbe, 0x1b6, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x6, 0xc, 0x6, 0xe, 0x6, 0x8c, 0xb, 0x6, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 
    0x90, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x95, 0xa, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x99, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0xa0, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 
    0xa3, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xa7, 0xa, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xad, 0xa, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 
    0xb, 0xb7, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0xba, 0xb, 0xb, 0x5, 0xb, 0xbc, 
    0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 
    0xc3, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0xc6, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x5, 0xd, 0xd2, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 
    0xf, 0xde, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xe3, 
    0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xe7, 0xa, 0x10, 0xc, 0x10, 
    0xe, 0x10, 0xea, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x7, 0x11, 0xf0, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xf3, 0xb, 0x11, 0x3, 
    0x11, 0x5, 0x11, 0xf6, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x7, 0x12, 0x102, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x105, 0xb, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 
    0x13, 0x10d, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x110, 0xb, 0x13, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x116, 0xa, 0x14, 
    0xc, 0x14, 0xe, 0x14, 0x119, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x123, 
    0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x126, 0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x5, 0x16, 0x132, 0xa, 0x16, 0x3, 0x16, 0x5, 0x16, 
    0x135, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x139, 0xa, 0x16, 
    0x7, 0x16, 0x13b, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x13e, 0xb, 0x16, 
    0x3, 0x16, 0x5, 0x16, 0x141, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 
    0x145, 0xa, 0x16, 0x5, 0x16, 0x147, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x5, 0x17, 0x14e, 0xa, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x156, 
    0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x159, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x5, 0x18, 0x160, 0xa, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x167, 0xa, 0x18, 
    0xc, 0x18, 0xe, 0x18, 0x16a, 0xb, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x173, 0xa, 0x19, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x178, 0xa, 0x1a, 0xc, 0x1a, 
    0xe, 0x1a, 0x17b, 0xb, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x5, 0x20, 0x18c, 
    0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x191, 0xa, 0x20, 
    0xc, 0x20, 0xe, 0x20, 0x194, 0xb, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x19b, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x5, 
    0x25, 0x1a5, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x1a9, 0xa, 
    0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 
    0x1b0, 0xa, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
    0x2, 0x2, 0x2b, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
    0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 
    0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 
    0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x2, 0xa, 0x4, 0x2, 0xb, 0xb, 
    0x10, 0x10, 0x4, 0x2, 0x6, 0x6, 0xc, 0xc, 0x3, 0x2, 0x61, 0x62, 0x3, 
    0x2, 0x4d, 0x4e, 0x3, 0x2, 0x4f, 0x56, 0x3, 0x2, 0x63, 0x66, 0x3, 0x2, 
    0x4a, 0x56, 0x5, 0x2, 0x4, 0x8, 0xa, 0x12, 0x14, 0x49, 0x2, 0x1c5, 0x2, 
    0x54, 0x3, 0x2, 0x2, 0x2, 0x4, 0x65, 0x3, 0x2, 0x2, 0x2, 0x6, 0x6a, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x6e, 0x3, 0x2, 0x2, 0x2, 0xa, 0x8a, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x8d, 0x3, 0x2, 0x2, 0x2, 0xe, 0x9a, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0xac, 0x3, 0x2, 0x2, 0x2, 0x12, 0xae, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0xb0, 0x3, 0x2, 0x2, 0x2, 0x16, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x18, 0xd1, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xdd, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x20, 0xed, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x24, 0x106, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x111, 0x3, 0x2, 0x2, 0x2, 0x28, 0x11a, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x15f, 0x3, 0x2, 0x2, 0x2, 0x30, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x32, 0x174, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x36, 0x17e, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x180, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x182, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x186, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x18b, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x42, 0x19c, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x46, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x1a2, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x1aa, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x50, 0x1b1, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x5, 0x4, 
    0x3, 0x2, 0x55, 0x59, 0x5, 0x6, 0x4, 0x2, 0x56, 0x58, 0x5, 0x3c, 0x1f, 
    0x2, 0x57, 0x56, 0x3, 0x2, 0x2, 0x2, 0x58, 0x5b, 0x3, 0x2, 0x2, 0x2, 
    0x59, 0x57, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5a, 
    0x60, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5f, 
    0x5, 0x8, 0x5, 0x2, 0x5d, 0x5f, 0x5, 0x14, 0xb, 0x2, 0x5e, 0x5c, 0x3, 
    0x2, 0x2, 0x2, 0x5e, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x62, 0x3, 0x2, 
    0x2, 0x2, 0x60, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 
    0x2, 0x61, 0x63, 0x3, 0x2, 0x2, 0x2, 0x62, 0x60, 0x3, 0x2, 0x2, 0x2, 
    0x63, 0x64, 0x7, 0x2, 0x2, 0x3, 0x64, 0x3, 0x3, 0x2, 0x2, 0x2, 0x65, 
    0x66, 0x7, 0xe, 0x2, 0x2, 0x66, 0x67, 0x7, 0x89, 0x2, 0x2, 0x67, 0x68, 
    0x5, 0x4e, 0x28, 0x2, 0x68, 0x69, 0x7, 0x96, 0x2, 0x2, 0x69, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0xa, 0x2, 0x2, 0x6b, 0x6c, 0x5, 0x3e, 
    0x20, 0x2, 0x6c, 0x6d, 0x7, 0x96, 0x2, 0x2, 0x6d, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x6e, 0x70, 0x9, 0x2, 0x2, 0x2, 0x6f, 0x71, 0x5, 0x4e, 0x28, 0x2, 
    0x70, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x3, 0x2, 0x2, 0x2, 0x71, 
    0x7c, 0x3, 0x2, 0x2, 0x2, 0x72, 0x76, 0x7, 0x8d, 0x2, 0x2, 0x73, 0x74, 
    0x5, 0x4e, 0x28, 0x2, 0x74, 0x75, 0x7, 0x95, 0x2, 0x2, 0x75, 0x77, 0x3, 
    0x2, 0x2, 0x2, 0x76, 0x73, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 0x2, 
    0x2, 0x2, 0x78, 0x76, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x3, 0x2, 0x2, 
    0x2, 0x79, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x8c, 0x2, 0x2, 
    0x7b, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x72, 0x3, 0x2, 0x2, 0x2, 0x7c, 
    0x7d, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 
    0x7, 0x9e, 0x2, 0x2, 0x7f, 0x80, 0x5, 0xa, 0x6, 0x2, 0x80, 0x82, 0x7, 
    0x9f, 0x2, 0x2, 0x81, 0x83, 0x7, 0x96, 0x2, 0x2, 0x82, 0x81, 0x3, 0x2, 
    0x2, 0x2, 0x82, 0x83, 0x3, 0x2, 0x2, 0x2, 0x83, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x84, 0x89, 0x5, 0x8, 0x5, 0x2, 0x85, 0x86, 0x5, 0xc, 0x7, 0x2, 
    0x86, 0x87, 0x7, 0x96, 0x2, 0x2, 0x87, 0x89, 0x3, 0x2, 0x2, 0x2, 0x88, 
    0x84, 0x3, 0x2, 0x2, 0x2, 0x88, 0x85, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8c, 
    0x3, 0x2, 0x2, 0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 
    0x2, 0x2, 0x2, 0x8b, 0xb, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8a, 0x3, 0x2, 
    0x2, 0x2, 0x8d, 0x8f, 0x5, 0x4e, 0x28, 0x2, 0x8e, 0x90, 0x7, 0x7b, 0x2, 
    0x2, 0x8f, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x3, 0x2, 0x2, 0x2, 
    0x90, 0x91, 0x3, 0x2, 0x2, 0x2, 0x91, 0x94, 0x7, 0x97, 0x2, 0x2, 0x92, 
    0x95, 0x5, 0xe, 0x8, 0x2, 0x93, 0x95, 0x5, 0x8, 0x5, 0x2, 0x94, 0x92, 
    0x3, 0x2, 0x2, 0x2, 0x94, 0x93, 0x3, 0x2, 0x2, 0x2, 0x95, 0x98, 0x3, 
    0x2, 0x2, 0x2, 0x96, 0x97, 0x7, 0x89, 0x2, 0x2, 0x97, 0x99, 0x5, 0x40, 
    0x21, 0x2, 0x98, 0x96, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 
    0x2, 0x99, 0xd, 0x3, 0x2, 0x2, 0x2, 0x9a, 0xa6, 0x5, 0x10, 0x9, 0x2, 
    0x9b, 0x9c, 0x7, 0x8d, 0x2, 0x2, 0x9c, 0xa1, 0x5, 0xe, 0x8, 0x2, 0x9d, 
    0x9e, 0x7, 0x95, 0x2, 0x2, 0x9e, 0xa0, 0x5, 0xe, 0x8, 0x2, 0x9f, 0x9d, 
    0x3, 0x2, 0x2, 0x2, 0xa0, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x9f, 0x3, 
    0x2, 0x2, 0x2, 0xa1, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa4, 0x3, 0x2, 
    0x2, 0x2, 0xa3, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0x8c, 0x2, 
    0x2, 0xa5, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x9b, 0x3, 0x2, 0x2, 0x2, 
    0xa6, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xf, 0x3, 0x2, 0x2, 0x2, 0xa8, 
    0xad, 0x5, 0x50, 0x29, 0x2, 0xa9, 0xad, 0x7, 0x11, 0x2, 0x2, 0xaa, 0xad, 
    0x7, 0x12, 0x2, 0x2, 0xab, 0xad, 0x5, 0x12, 0xa, 0x2, 0xac, 0xa8, 0x3, 
    0x2, 0x2, 0x2, 0xac, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaa, 0x3, 0x2, 
    0x2, 0x2, 0xac, 0xab, 0x3, 0x2, 0x2, 0x2, 0xad, 0x11, 0x3, 0x2, 0x2, 
    0x2, 0xae, 0xaf, 0x5, 0x4e, 0x28, 0x2, 0xaf, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0xb0, 0xb1, 0x7, 0x13, 0x2, 0x2, 0xb1, 0xb2, 0x5, 0x4e, 0x28, 0x2, 0xb2, 
    0xbb, 0x7, 0xa2, 0x2, 0x2, 0xb3, 0xb8, 0x5, 0x3a, 0x1e, 0x2, 0xb4, 0xb5, 
    0x7, 0x95, 0x2, 0x2, 0xb5, 0xb7, 0x5, 0x3a, 0x1e, 0x2, 0xb6, 0xb4, 0x3, 
    0x2, 0x2, 0x2, 0xb7, 0xba, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb6, 0x3, 0x2, 
    0x2, 0x2, 0xb8, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xbc, 0x3, 0x2, 0x2, 
    0x2, 0xba, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xb3, 0x3, 0x2, 0x2, 0x2, 
    0xbb, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbd, 
    0xbe, 0x7, 0xa3, 0x2, 0x2, 0xbe, 0xbf, 0x5, 0x16, 0xc, 0x2, 0xbf, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0xc0, 0xc4, 0x7, 0x73, 0x2, 0x2, 0xc1, 0xc3, 0x5, 
    0x18, 0xd, 0x2, 0xc2, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc6, 0x3, 0x2, 
    0x2, 0x2, 0xc4, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x3, 0x2, 0x2, 
    0x2, 0xc5, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc4, 0x3, 0x2, 0x2, 0x2, 
    0xc7, 0xc8, 0x7, 0xa5, 0x2, 0x2, 0xc8, 0x17, 0x3, 0x2, 0x2, 0x2, 0xc9, 
    0xd2, 0x5, 0x1a, 0xe, 0x2, 0xca, 0xcb, 0x7, 0xa6, 0x2, 0x2, 0xcb, 0xcc, 
    0x5, 0x1c, 0xf, 0x2, 0xcc, 0xcd, 0x7, 0xa8, 0x2, 0x2, 0xcd, 0xd2, 0x3, 
    0x2, 0x2, 0x2, 0xce, 0xd2, 0x5, 0x20, 0x11, 0x2, 0xcf, 0xd2, 0x5, 0x28, 
    0x15, 0x2, 0xd0, 0xd2, 0x5, 0x2a, 0x16, 0x2, 0xd1, 0xc9, 0x3, 0x2, 0x2, 
    0x2, 0xd1, 0xca, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xce, 0x3, 0x2, 0x2, 0x2, 
    0xd1, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd2, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x7, 0xa7, 0x2, 0x2, 0xd4, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x7, 0xac, 0x2, 0x2, 0xd6, 0xd7, 0x5, 
    0x1c, 0xf, 0x2, 0xd7, 0xd8, 0x7, 0xad, 0x2, 0x2, 0xd8, 0xde, 0x3, 0x2, 
    0x2, 0x2, 0xd9, 0xda, 0x7, 0xaf, 0x2, 0x2, 0xda, 0xde, 0x5, 0x1c, 0xf, 
    0x2, 0xdb, 0xde, 0x5, 0x32, 0x1a, 0x2, 0xdc, 0xde, 0x5, 0x1e, 0x10, 
    0x2, 0xdd, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xd9, 0x3, 0x2, 0x2, 0x2, 
    0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xde, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x5, 0x38, 0x1d, 0x2, 0xe0, 0xe2, 
    0x7, 0xac, 0x2, 0x2, 0xe1, 0xe3, 0x5, 0x32, 0x1a, 0x2, 0xe2, 0xe1, 0x3, 
    0x2, 0x2, 0x2, 0xe2, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe8, 0x3, 0x2, 
    0x2, 0x2, 0xe4, 0xe5, 0x7, 0xaa, 0x2, 0x2, 0xe5, 0xe7, 0x5, 0x32, 0x1a, 
    0x2, 0xe6, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xea, 0x3, 0x2, 0x2, 0x2, 
    0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe9, 
    0xeb, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 
    0x7, 0xad, 0x2, 0x2, 0xec, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xed, 0xf1, 0x5, 
    0x22, 0x12, 0x2, 0xee, 0xf0, 0x5, 0x24, 0x13, 0x2, 0xef, 0xee, 0x3, 
    0x2, 0x2, 0x2, 0xf0, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xef, 0x3, 0x2, 
    0x2, 0x2, 0xf1, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf5, 0x3, 0x2, 0x2, 
    0x2, 0xf3, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf6, 0x5, 0x26, 0x14, 0x2, 
    0xf5, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf6, 
    0xf7, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x7, 0xa6, 0x2, 0x2, 0xf8, 0xf9, 
    0x7, 0xba, 0x2, 0x2, 0xf9, 0xfa, 0x7, 0xa8, 0x2, 0x2, 0xfa, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0xfb, 0xfc, 0x7, 0xa6, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0xb9, 
    0x2, 0x2, 0xfd, 0xfe, 0x5, 0x1c, 0xf, 0x2, 0xfe, 0xff, 0x7, 0xa8, 0x2, 
    0x2, 0xff, 0x103, 0x3, 0x2, 0x2, 0x2, 0x100, 0x102, 0x5, 0x18, 0xd, 
    0x2, 0x101, 0x100, 0x3, 0x2, 0x2, 0x2, 0x102, 0x105, 0x3, 0x2, 0x2, 
    0x2, 0x103, 0x101, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x3, 0x2, 0x2, 
    0x2, 0x104, 0x23, 0x3, 0x2, 0x2, 0x2, 0x105, 0x103, 0x3, 0x2, 0x2, 0x2, 
    0x106, 0x107, 0x7, 0xa6, 0x2, 0x2, 0x107, 0x108, 0x7, 0xbc, 0x2, 0x2, 
    0x108, 0x109, 0x5, 0x1c, 0xf, 0x2, 0x109, 0x10a, 0x7, 0xa8, 0x2, 0x2, 
    0x10a, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10d, 0x5, 0x18, 0xd, 0x2, 
    0x10c, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x110, 0x3, 0x2, 0x2, 0x2, 
    0x10e, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x3, 0x2, 0x2, 0x2, 
    0x10f, 0x25, 0x3, 0x2, 0x2, 0x2, 0x110, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x111, 
    0x112, 0x7, 0xa6, 0x2, 0x2, 0x112, 0x113, 0x7, 0xbb, 0x2, 0x2, 0x113, 
    0x117, 0x7, 0xa8, 0x2, 0x2, 0x114, 0x116, 0x5, 0x18, 0xd, 0x2, 0x115, 
    0x114, 0x3, 0x2, 0x2, 0x2, 0x116, 0x119, 0x3, 0x2, 0x2, 0x2, 0x117, 
    0x115, 0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 0x3, 0x2, 0x2, 0x2, 0x118, 
    0x27, 0x3, 0x2, 0x2, 0x2, 0x119, 0x117, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 
    0x7, 0xa6, 0x2, 0x2, 0x11b, 0x11c, 0x7, 0xb0, 0x2, 0x2, 0x11c, 0x11d, 
    0x5, 0x30, 0x19, 0x2, 0x11d, 0x11e, 0x7, 0xb8, 0x2, 0x2, 0x11e, 0x11f, 
    0x5, 0x32, 0x1a, 0x2, 0x11f, 0x120, 0x7, 0xa8, 0x2, 0x2, 0x120, 0x124, 
    0x3, 0x2, 0x2, 0x2, 0x121, 0x123, 0x5, 0x18, 0xd, 0x2, 0x122, 0x121, 
    0x3, 0x2, 0x2, 0x2, 0x123, 0x126, 0x3, 0x2, 0x2, 0x2, 0x124, 0x122, 
    0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x3, 0x2, 0x2, 0x2, 0x125, 0x127, 
    0x3, 0x2, 0x2, 0x2, 0x126, 0x124, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 
    0x7, 0xa6, 0x2, 0x2, 0x128, 0x129, 0x7, 0xb1, 0x2, 0x2, 0x129, 0x12a, 
    0x7, 0xa8, 0x2, 0x2, 0x12a, 0x29, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 
    0x7, 0xa6, 0x2, 0x2, 0x12c, 0x12d, 0x7, 0xb2, 0x2, 0x2, 0x12d, 0x12e, 
    0x5, 0x32, 0x1a, 0x2, 0x12e, 0x12f, 0x7, 0xa8, 0x2, 0x2, 0x12f, 0x131, 
    0x3, 0x2, 0x2, 0x2, 0x130, 0x132, 0x7, 0xa7, 0x2, 0x2, 0x131, 0x130, 
    0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 0x3, 0x2, 0x2, 0x2, 0x132, 0x13c, 
    0x3, 0x2, 0x2, 0x2, 0x133, 0x135, 0x7, 0xa7, 0x2, 0x2, 0x134, 0x133, 
    0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 0x3, 0x2, 0x2, 0x2, 0x135, 0x136, 
    0x3, 0x2, 0x2, 0x2, 0x136, 0x138, 0x5, 0x2c, 0x17, 0x2, 0x137, 0x139, 
    0x7, 0xa7, 0x2, 0x2, 0x138, 0x137, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 
    0x3, 0x2, 0x2, 0x2, 0x139, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x134, 
    0x3, 0x2, 0x2, 0x2, 0x13b, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13a, 
    0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x146, 
    0x3, 0x2, 0x2, 0x2, 0x13e, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x141, 
    0x7, 0xa7, 0x2, 0x2, 0x140, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 
    0x3, 0x2, 0x2, 0x2, 0x141, 0x142, 0x3, 0x2, 0x2, 0x2, 0x142, 0x144, 
    0x5, 0x2e, 0x18, 0x2, 0x143, 0x145, 0x7, 0xa7, 0x2, 0x2, 0x144, 0x143, 
    0x3, 0x2, 0x2, 0x2, 0x144, 0x145, 0x3, 0x2, 0x2, 0x2, 0x145, 0x147, 
    0x3, 0x2, 0x2, 0x2, 0x146, 0x140, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 
    0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 
    0x7, 0xa6, 0x2, 0x2, 0x149, 0x14a, 0x7, 0xb3, 0x2, 0x2, 0x14a, 0x14b, 
    0x7, 0xa8, 0x2, 0x2, 0x14b, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14e, 
    0x7, 0xa7, 0x2, 0x2, 0x14d, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14e, 
    0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 
    0x7, 0xa6, 0x2, 0x2, 0x150, 0x151, 0x7, 0xb4, 0x2, 0x2, 0x151, 0x152, 
    0x5, 0x32, 0x1a, 0x2, 0x152, 0x153, 0x7, 0xa8, 0x2, 0x2, 0x153, 0x157, 
    0x3, 0x2, 0x2, 0x2, 0x154, 0x156, 0x5, 0x18, 0xd, 0x2, 0x155, 0x154, 
    0x3, 0x2, 0x2, 0x2, 0x156, 0x159, 0x3, 0x2, 0x2, 0x2, 0x157, 0x155, 
    0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 0x3, 0x2, 0x2, 0x2, 0x158, 0x15a, 
    0x3, 0x2, 0x2, 0x2, 0x159, 0x157, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x15b, 
    0x7, 0xa6, 0x2, 0x2, 0x15b, 0x15c, 0x7, 0xb5, 0x2, 0x2, 0x15c, 0x15d, 
    0x7, 0xa8, 0x2, 0x2, 0x15d, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x160, 
    0x7, 0xa7, 0x2, 0x2, 0x15f, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x160, 
    0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 0x3, 0x2, 0x2, 0x2, 0x161, 0x162, 
    0x7, 0xa6, 0x2, 0x2, 0x162, 0x163, 0x7, 0xb6, 0x2, 0x2, 0x163, 0x164, 
    0x7, 0xa8, 0x2, 0x2, 0x164, 0x168, 0x3, 0x2, 0x2, 0x2, 0x165, 0x167, 
    0x5, 0x18, 0xd, 0x2, 0x166, 0x165, 0x3, 0x2, 0x2, 0x2, 0x167, 0x16a, 
    0x3, 0x2, 0x2, 0x2, 0x168, 0x166, 0x3, 0x2, 0x2, 0x2, 0x168, 0x169, 
    0x3, 0x2, 0x2, 0x2, 0x169, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x168, 
    0x3, 0x2, 0x2, 0x2, 0x16b, 0x16c, 0x7, 0xa6, 0x2, 0x2, 0x16c, 0x16d, 
    0x7, 0xb7, 0x2, 0x2, 0x16d, 0x16e, 0x7, 0xa8, 0x2, 0x2, 0x16e, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0x16f, 0x172, 0x5, 0x36, 0x1c, 0x2, 0x170, 0x171, 
    0x7, 0xaa, 0x2, 0x2, 0x171, 0x173, 0x5, 0x36, 0x1c, 0x2, 0x172, 0x170, 
    0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 0x3, 0x2, 0x2, 0x2, 0x173, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0x174, 0x179, 0x5, 0x34, 0x1b, 0x2, 0x175, 0x176, 0x7, 
    0xab, 0x2, 0x2, 0x176, 0x178, 0x5, 0x34, 0x1b, 0x2, 0x177, 0x175, 0x3, 
    0x2, 0x2, 0x2, 0x178, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x179, 0x177, 0x3, 
    0x2, 0x2, 0x2, 0x179, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0x17b, 0x179, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17d, 0x5, 0x38, 
    0x1d, 0x2, 0x17d, 0x35, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17f, 0x5, 0x38, 
    0x1d, 0x2, 0x17f, 0x37, 0x3, 0x2, 0x2, 0x2, 0x180, 0x181, 0x7, 0xbd, 
    0x2, 0x2, 0x181, 0x39, 0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 0x5, 0x4e, 
    0x28, 0x2, 0x183, 0x184, 0x7, 0x97, 0x2, 0x2, 0x184, 0x185, 0x5, 0xe, 
    0x8, 0x2, 0x185, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 0x7, 0xf, 0x2, 
    0x2, 0x187, 0x188, 0x5, 0x3e, 0x20, 0x2, 0x188, 0x189, 0x7, 0x96, 0x2, 
    0x2, 0x189, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18c, 0x7, 0x98, 0x2, 
    0x2, 0x18b, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18c, 0x3, 0x2, 0x2, 
    0x2, 0x18c, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x192, 0x5, 0x4e, 0x28, 
    0x2, 0x18e, 0x18f, 0x7, 0x98, 0x2, 0x2, 0x18f, 0x191, 0x5, 0x4e, 0x28, 
    0x2, 0x190, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x191, 0x194, 0x3, 0x2, 0x2, 
    0x2, 0x192, 0x190, 0x3, 0x2, 0x2, 0x2, 0x192, 0x193, 0x3, 0x2, 0x2, 
    0x2, 0x193, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x194, 0x192, 0x3, 0x2, 0x2, 0x2, 
    0x195, 0x19b, 0x5, 0x42, 0x22, 0x2, 0x196, 0x19b, 0x5, 0x44, 0x23, 0x2, 
    0x197, 0x19b, 0x5, 0x46, 0x24, 0x2, 0x198, 0x19b, 0x5, 0x48, 0x25, 0x2, 
    0x199, 0x19b, 0x5, 0x4a, 0x26, 0x2, 0x19a, 0x195, 0x3, 0x2, 0x2, 0x2, 
    0x19a, 0x196, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x197, 0x3, 0x2, 0x2, 0x2, 
    0x19a, 0x198, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x199, 0x3, 0x2, 0x2, 0x2, 
    0x19b, 0x41, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19d, 0x9, 0x3, 0x2, 0x2, 0x19d, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19f, 0x7, 0x60, 0x2, 0x2, 0x19f, 
    0x45, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 0x9, 0x4, 0x2, 0x2, 0x1a1, 0x47, 
    0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a4, 0x7, 0x6f, 0x2, 0x2, 0x1a3, 0x1a5, 
    0x9, 0x5, 0x2, 0x2, 0x1a4, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a5, 
    0x3, 0x2, 0x2, 0x2, 0x1a5, 0x49, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a8, 0x5, 
    0x4c, 0x27, 0x2, 0x1a7, 0x1a9, 0x9, 0x6, 0x2, 0x2, 0x1a8, 0x1a7, 0x3, 
    0x2, 0x2, 0x2, 0x1a8, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x1aa, 0x1ab, 0x9, 0x7, 0x2, 0x2, 0x1ab, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x1ac, 0x1b0, 0x7, 0x57, 0x2, 0x2, 0x1ad, 0x1ae, 0x7, 0x74, 0x2, 
    0x2, 0x1ae, 0x1b0, 0x7, 0x57, 0x2, 0x2, 0x1af, 0x1ac, 0x3, 0x2, 0x2, 
    0x2, 0x1af, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x4f, 0x3, 0x2, 0x2, 0x2, 
    0x1b1, 0x1b2, 0x9, 0x8, 0x2, 0x2, 0x1b2, 0x51, 0x3, 0x2, 0x2, 0x2, 0x1b3, 
    0x1b4, 0x9, 0x9, 0x2, 0x2, 0x1b4, 0x53, 0x3, 0x2, 0x2, 0x2, 0x31, 0x59, 
    0x5e, 0x60, 0x70, 0x78, 0x7c, 0x82, 0x88, 0x8a, 0x8f, 0x94, 0x98, 0xa1, 
    0xa6, 0xac, 0xb8, 0xbb, 0xc4, 0xd1, 0xdd, 0xe2, 0xe8, 0xf1, 0xf5, 0x103, 
    0x10e, 0x117, 0x124, 0x131, 0x134, 0x138, 0x13c, 0x140, 0x144, 0x146, 
    0x14d, 0x157, 0x15f, 0x168, 0x172, 0x179, 0x18b, 0x192, 0x19a, 0x1a4, 
    0x1a8, 0x1af, 
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
