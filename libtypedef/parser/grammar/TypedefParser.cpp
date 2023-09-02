
#include "libtypedef/parser/grammar_classes.h"


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
    setState(50);
    typedefVersionDeclaration();
    setState(51);
    moduleDeclaration();
    setState(55);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::KW_USE) {
      setState(52);
      useDeclaration();
      setState(57);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(63);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::KW_STRUCT

    || _la == TypedefParser::KW_VARIANT) {
      setState(58);
      typeDefinition();
      setState(59);
      match(TypedefParser::SEMI);
      setState(65);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(66);
    match(TypedefParser::EOF);
   _ctx->stop = _input->LT(-1);
    _localctx->compilation_unit.Init(_localctx);
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
    setState(68);
    match(TypedefParser::KW_TYPEDEF);
    setState(69);
    match(TypedefParser::EQ);
    setState(70);
    identifier();
    setState(71);
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
    setState(73);
    match(TypedefParser::KW_MODULE);
    setState(74);
    symbolPath();
    setState(75);
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

TypedefParser::IdentifierContext* TypedefParser::TypeDefinitionContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
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
    setState(77);
    _la = _input->LA(1);
    if (!(_la == TypedefParser::KW_STRUCT

    || _la == TypedefParser::KW_VARIANT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(79);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::NON_KEYWORD_IDENTIFIER

    || _la == TypedefParser::RAW_ESCAPE) {
      setState(78);
      identifier();
    }
    setState(81);
    match(TypedefParser::LBRACE);
    setState(82);
    fieldBlock();
    setState(83);
    match(TypedefParser::RBRACE);
   _ctx->stop = _input->LT(-1);
    dynamic_cast<TypeDefinitionContext *>(_localctx)->type_definition =  TypeDefinition::Build(_localctx);
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
    setState(91);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::KW_STRUCT

    || _la == TypedefParser::KW_VARIANT || _la == TypedefParser::NON_KEYWORD_IDENTIFIER

    || _la == TypedefParser::RAW_ESCAPE) {
      setState(89);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypedefParser::KW_STRUCT:
        case TypedefParser::KW_VARIANT: {
          setState(85);
          typeDefinition();
          break;
        }

        case TypedefParser::NON_KEYWORD_IDENTIFIER:
        case TypedefParser::RAW_ESCAPE: {
          setState(86);
          fieldDefinition();
          setState(87);
          match(TypedefParser::SEMI);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(93);
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

TypedefParser::IdentifierContext* TypedefParser::FieldDefinitionContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::FieldDefinitionContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

tree::TerminalNode* TypedefParser::FieldDefinitionContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::PrimitiveLiteralContext* TypedefParser::FieldDefinitionContext::primitiveLiteral() {
  return getRuleContext<TypedefParser::PrimitiveLiteralContext>(0);
}

TypedefParser::TypeAnnotationContext* TypedefParser::FieldDefinitionContext::typeAnnotation() {
  return getRuleContext<TypedefParser::TypeAnnotationContext>(0);
}

TypedefParser::TypeDefinitionContext* TypedefParser::FieldDefinitionContext::typeDefinition() {
  return getRuleContext<TypedefParser::TypeDefinitionContext>(0);
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
    setState(94);
    dynamic_cast<FieldDefinitionContext *>(_localctx)->field_identifier = identifier();
    setState(100);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::COLON) {
      setState(95);
      match(TypedefParser::COLON);
      setState(98);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypedefParser::NON_KEYWORD_IDENTIFIER:
        case TypedefParser::RAW_ESCAPE: {
          setState(96);
          typeAnnotation();
          break;
        }

        case TypedefParser::KW_STRUCT:
        case TypedefParser::KW_VARIANT: {
          setState(97);
          typeDefinition();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
    }
    setState(104);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::EQ) {
      setState(102);
      match(TypedefParser::EQ);
      setState(103);
      primitiveLiteral();
    }
   _ctx->stop = _input->LT(-1);
    dynamic_cast<FieldDefinitionContext *>(_localctx)->field_definition =  FieldDefinition::Build(_localctx);
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

TypedefParser::IdentifierContext* TypedefParser::TypeAnnotationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::TypeAnnotationContext::LT() {
  return getToken(TypedefParser::LT, 0);
}

std::vector<TypedefParser::TypeArgumentContext *> TypedefParser::TypeAnnotationContext::typeArgument() {
  return getRuleContexts<TypedefParser::TypeArgumentContext>();
}

TypedefParser::TypeArgumentContext* TypedefParser::TypeAnnotationContext::typeArgument(size_t i) {
  return getRuleContext<TypedefParser::TypeArgumentContext>(i);
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
    setState(106);
    identifier();
    setState(118);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::LT) {
      setState(107);
      match(TypedefParser::LT);
      setState(108);
      typeArgument();
      setState(113);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::COMMA) {
        setState(109);
        match(TypedefParser::COMMA);
        setState(110);
        typeArgument();
        setState(115);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(116);
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

//----------------- TypeArgumentContext ------------------------------------------------------------------

TypedefParser::TypeArgumentContext::TypeArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::TypeIdentifierContext* TypedefParser::TypeArgumentContext::typeIdentifier() {
  return getRuleContext<TypedefParser::TypeIdentifierContext>(0);
}


size_t TypedefParser::TypeArgumentContext::getRuleIndex() const {
  return TypedefParser::RuleTypeArgument;
}

void TypedefParser::TypeArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeArgument(this);
}

void TypedefParser::TypeArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeArgument(this);
}


antlrcpp::Any TypedefParser::TypeArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTypeArgument(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TypeArgumentContext* TypedefParser::typeArgument() {
  TypeArgumentContext *_localctx = _tracker.createInstance<TypeArgumentContext>(_ctx, getState());
  enterRule(_localctx, 14, TypedefParser::RuleTypeArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    typeIdentifier();
   
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

TypedefParser::IdentifierContext* TypedefParser::TypeIdentifierContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
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
  enterRule(_localctx, 16, TypedefParser::RuleTypeIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(126);
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
        setState(122);
        primitiveTypeIdentifier();
        break;
      }

      case TypedefParser::KW_VECTOR: {
        enterOuterAlt(_localctx, 2);
        setState(123);
        match(TypedefParser::KW_VECTOR);
        break;
      }

      case TypedefParser::KW_MAP: {
        enterOuterAlt(_localctx, 3);
        setState(124);
        match(TypedefParser::KW_MAP);
        break;
      }

      case TypedefParser::NON_KEYWORD_IDENTIFIER:
      case TypedefParser::RAW_ESCAPE: {
        enterOuterAlt(_localctx, 4);
        setState(125);
        dynamic_cast<TypeIdentifierContext *>(_localctx)->symrefIdentifier = identifier();
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

//----------------- TemplateDefinitionContext ------------------------------------------------------------------

TypedefParser::TemplateDefinitionContext::TemplateDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::TemplateDefinitionContext::KW_TEMPLATE() {
  return getToken(TypedefParser::KW_TEMPLATE, 0);
}

TypedefParser::IdentifierContext* TypedefParser::TemplateDefinitionContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
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

std::vector<TypedefParser::FunctionParameterContext *> TypedefParser::TemplateDefinitionContext::functionParameter() {
  return getRuleContexts<TypedefParser::FunctionParameterContext>();
}

TypedefParser::FunctionParameterContext* TypedefParser::TemplateDefinitionContext::functionParameter(size_t i) {
  return getRuleContext<TypedefParser::FunctionParameterContext>(i);
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
  enterRule(_localctx, 18, TypedefParser::RuleTemplateDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    match(TypedefParser::KW_TEMPLATE);
    setState(129);
    identifier();
    setState(130);
    match(TypedefParser::LPAREN);

    setState(131);
    functionParameter();
    setState(136);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::COMMA) {
      setState(132);
      match(TypedefParser::COMMA);
      setState(133);
      functionParameter();
      setState(138);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(139);
    match(TypedefParser::RPAREN);
    setState(142);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::FATARROW) {
      setState(140);
      match(TypedefParser::FATARROW);
      setState(141);
      match(TypedefParser::KW_STRING);
    }
    setState(144);
    templateBlock();
   _ctx->stop = _input->LT(-1);
    _localctx->template_definition.Init(_localctx);
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
  enterRule(_localctx, 20, TypedefParser::RuleTemplateBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    _la = _input->LA(1);
    if (!(_la == TypedefParser::TEMPLATE_LITERAL

    || _la == TypedefParser::RAW_TEMPLATE_LITERAL)) {
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

TypedefParser::TypeParameterContext* TypedefParser::FunctionParameterContext::typeParameter() {
  return getRuleContext<TypedefParser::TypeParameterContext>(0);
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
  enterRule(_localctx, 22, TypedefParser::RuleFunctionParameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    identifier();
    setState(149);
    match(TypedefParser::COLON);
    setState(150);
    typeParameter();
   
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
  enterRule(_localctx, 24, TypedefParser::RuleTypeParameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(154);
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
        setState(152);
        primitiveTypeIdentifier();
        break;
      }

      case TypedefParser::NON_KEYWORD_IDENTIFIER:
      case TypedefParser::RAW_ESCAPE: {
        enterOuterAlt(_localctx, 2);
        setState(153);
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
  enterRule(_localctx, 26, TypedefParser::RuleUseDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    match(TypedefParser::KW_USE);
    setState(157);
    symbolPath();
    setState(158);
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
  enterRule(_localctx, 28, TypedefParser::RuleSymbolPath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::PATHSEP) {
      setState(160);
      dynamic_cast<SymbolPathContext *>(_localctx)->leading_pathsep = match(TypedefParser::PATHSEP);
    }
    setState(163);
    identifier();
    setState(168);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::PATHSEP) {
      setState(164);
      match(TypedefParser::PATHSEP);
      setState(165);
      identifier();
      setState(170);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   _ctx->stop = _input->LT(-1);
    _localctx->symbol_path.Init(_localctx)
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
  enterRule(_localctx, 30, TypedefParser::RulePrimitiveLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(176);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::KW_FALSE:
      case TypedefParser::KW_TRUE: {
        enterOuterAlt(_localctx, 1);
        setState(171);
        boolLiteral();
        break;
      }

      case TypedefParser::CHAR_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(172);
        charLiteral();
        break;
      }

      case TypedefParser::STRING_LITERAL:
      case TypedefParser::RAW_STRING_LITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(173);
        stringLiteral();
        break;
      }

      case TypedefParser::FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(174);
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
        setState(175);
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
  enterRule(_localctx, 32, TypedefParser::RuleBoolLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
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
    _localctx->bool_literal.Init(_localctx);
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
  enterRule(_localctx, 34, TypedefParser::RuleCharLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    match(TypedefParser::CHAR_LITERAL);
   _ctx->stop = _input->LT(-1);
    _localctx->char_literal.Init(_localctx);
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
  enterRule(_localctx, 36, TypedefParser::RuleStringLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
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
    _localctx->string_literal.Init(_localctx);
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
  enterRule(_localctx, 38, TypedefParser::RuleFloatLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    match(TypedefParser::FLOAT_LITERAL);
    setState(186);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::KW_F32

    || _la == TypedefParser::KW_F64) {
      setState(185);
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
   _ctx->stop = _input->LT(-1);
    _localctx->float_literal.Init(_localctx);
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
  enterRule(_localctx, 40, TypedefParser::RuleIntegerLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    intDigits();
    setState(190);
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
      setState(189);
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
   _ctx->stop = _input->LT(-1);
    _localctx->integer_literal.Init(_localctx);
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
  enterRule(_localctx, 42, TypedefParser::RuleIntDigits);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(202);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        enterOuterAlt(_localctx, 1);
        setState(193);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(192);
          match(TypedefParser::MINUS);
        }
        setState(195);
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
        setState(196);
        match(TypedefParser::HEX_PREFIX);
        setState(197);
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
        setState(198);
        match(TypedefParser::OCT_PREFIX);
        setState(199);
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
        setState(200);
        match(TypedefParser::BIN_PREFIX);
        setState(201);
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
  enterRule(_localctx, 44, TypedefParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(207);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::NON_KEYWORD_IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(204);
        dynamic_cast<IdentifierContext *>(_localctx)->nki = match(TypedefParser::NON_KEYWORD_IDENTIFIER);
        break;
      }

      case TypedefParser::RAW_ESCAPE: {
        enterOuterAlt(_localctx, 2);
        setState(205);
        match(TypedefParser::RAW_ESCAPE);
        setState(206);
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
  enterRule(_localctx, 46, TypedefParser::RulePrimitiveTypeIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(209);
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
  enterRule(_localctx, 48, TypedefParser::RuleKeyword);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
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
  "fieldBlock", "fieldDefinition", "typeAnnotation", "typeArgument", "typeIdentifier", 
  "templateDefinition", "templateBlock", "functionParameter", "typeParameter", 
  "useDeclaration", "symbolPath", "primitiveLiteral", "boolLiteral", "charLiteral", 
  "stringLiteral", "floatLiteral", "integerLiteral", "intDigits", "identifier", 
  "primitiveTypeIdentifier", "keyword"
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
  "SHEBANG", "CHAR_LITERAL", "STRING_LITERAL", "TEMPLATE_LITERAL", "RAW_TEMPLATE_LITERAL", 
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
    0x3, 0xa5, 0xd8, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x7, 0x2, 0x38, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x3b, 0xb, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x40, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
    0x43, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x5, 0x5, 0x52, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x5c, 0xa, 0x6, 0xc, 
    0x6, 0xe, 0x6, 0x5f, 0xb, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x5, 0x7, 0x65, 0xa, 0x7, 0x5, 0x7, 0x67, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x5, 0x7, 0x6b, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x7, 0x8, 0x72, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x75, 0xb, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x5, 0x8, 0x79, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x81, 0xa, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x89, 0xa, 0xb, 
    0xc, 0xb, 0xe, 0xb, 0x8c, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 
    0xb, 0x91, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x9d, 0xa, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x5, 0x10, 0xa4, 
    0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xa9, 0xa, 0x10, 
    0xc, 0x10, 0xe, 0x10, 0xac, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xb3, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x5, 
    0x15, 0xbd, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0xc1, 0xa, 0x16, 
    0x3, 0x17, 0x5, 0x17, 0xc4, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0xcd, 0xa, 0x17, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0xd2, 0xa, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x2, 0x2, 0x1b, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x2, 0xe, 
    0x4, 0x2, 0xb, 0xb, 0x10, 0x10, 0x3, 0x2, 0x62, 0x63, 0x4, 0x2, 0x6, 
    0x6, 0xc, 0xc, 0x4, 0x2, 0x61, 0x61, 0x64, 0x64, 0x3, 0x2, 0x4d, 0x4e, 
    0x3, 0x2, 0x4f, 0x56, 0x3, 0x2, 0x65, 0x66, 0x3, 0x2, 0x67, 0x68, 0x3, 
    0x2, 0x69, 0x6a, 0x3, 0x2, 0x6b, 0x6c, 0x3, 0x2, 0x4a, 0x56, 0x5, 0x2, 
    0x4, 0x8, 0xa, 0x12, 0x14, 0x49, 0x2, 0xdb, 0x2, 0x34, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x46, 0x3, 0x2, 0x2, 0x2, 0x6, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x4f, 0x3, 0x2, 0x2, 0x2, 0xa, 0x5d, 0x3, 0x2, 0x2, 0x2, 0xc, 0x60, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x10, 0x7a, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x80, 0x3, 0x2, 0x2, 0x2, 0x14, 0x82, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x94, 0x3, 0x2, 0x2, 0x2, 0x18, 0x96, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x9e, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x20, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0xb4, 0x3, 0x2, 0x2, 0x2, 0x24, 0xb6, 0x3, 0x2, 0x2, 0x2, 0x26, 0xb8, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0xba, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xbe, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0xcc, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xd1, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x32, 0xd5, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x35, 0x5, 0x4, 0x3, 0x2, 0x35, 0x39, 0x5, 0x6, 0x4, 0x2, 
    0x36, 0x38, 0x5, 0x1c, 0xf, 0x2, 0x37, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 
    0x3b, 0x3, 0x2, 0x2, 0x2, 0x39, 0x37, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x41, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x39, 0x3, 
    0x2, 0x2, 0x2, 0x3c, 0x3d, 0x5, 0x8, 0x5, 0x2, 0x3d, 0x3e, 0x7, 0x97, 
    0x2, 0x2, 0x3e, 0x40, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3c, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x43, 0x3, 0x2, 0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 
    0x41, 0x42, 0x3, 0x2, 0x2, 0x2, 0x42, 0x44, 0x3, 0x2, 0x2, 0x2, 0x43, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x7, 0x2, 0x2, 0x3, 0x45, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x7, 0xe, 0x2, 0x2, 0x47, 0x48, 0x7, 
    0x8a, 0x2, 0x2, 0x48, 0x49, 0x5, 0x2e, 0x18, 0x2, 0x49, 0x4a, 0x7, 0x97, 
    0x2, 0x2, 0x4a, 0x5, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0xa, 0x2, 
    0x2, 0x4c, 0x4d, 0x5, 0x1e, 0x10, 0x2, 0x4d, 0x4e, 0x7, 0x97, 0x2, 0x2, 
    0x4e, 0x7, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x51, 0x9, 0x2, 0x2, 0x2, 0x50, 
    0x52, 0x5, 0x2e, 0x18, 0x2, 0x51, 0x50, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 
    0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 
    0x9f, 0x2, 0x2, 0x54, 0x55, 0x5, 0xa, 0x6, 0x2, 0x55, 0x56, 0x7, 0xa0, 
    0x2, 0x2, 0x56, 0x9, 0x3, 0x2, 0x2, 0x2, 0x57, 0x5c, 0x5, 0x8, 0x5, 
    0x2, 0x58, 0x59, 0x5, 0xc, 0x7, 0x2, 0x59, 0x5a, 0x7, 0x97, 0x2, 0x2, 
    0x5a, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5b, 
    0x58, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5b, 
    0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x60, 0x66, 0x5, 0x2e, 
    0x18, 0x2, 0x61, 0x64, 0x7, 0x98, 0x2, 0x2, 0x62, 0x65, 0x5, 0xe, 0x8, 
    0x2, 0x63, 0x65, 0x5, 0x8, 0x5, 0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 
    0x64, 0x63, 0x3, 0x2, 0x2, 0x2, 0x65, 0x67, 0x3, 0x2, 0x2, 0x2, 0x66, 
    0x61, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x3, 0x2, 0x2, 0x2, 0x67, 0x6a, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x7, 0x8a, 0x2, 0x2, 0x69, 0x6b, 0x5, 
    0x20, 0x11, 0x2, 0x6a, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x6b, 0xd, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x78, 0x5, 0x2e, 0x18, 
    0x2, 0x6d, 0x6e, 0x7, 0x8e, 0x2, 0x2, 0x6e, 0x73, 0x5, 0x10, 0x9, 0x2, 
    0x6f, 0x70, 0x7, 0x96, 0x2, 0x2, 0x70, 0x72, 0x5, 0x10, 0x9, 0x2, 0x71, 
    0x6f, 0x3, 0x2, 0x2, 0x2, 0x72, 0x75, 0x3, 0x2, 0x2, 0x2, 0x73, 0x71, 
    0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 0x76, 0x3, 
    0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x7, 0x8d, 
    0x2, 0x2, 0x77, 0x79, 0x3, 0x2, 0x2, 0x2, 0x78, 0x6d, 0x3, 0x2, 0x2, 
    0x2, 0x78, 0x79, 0x3, 0x2, 0x2, 0x2, 0x79, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x7a, 0x7b, 0x5, 0x12, 0xa, 0x2, 0x7b, 0x11, 0x3, 0x2, 0x2, 0x2, 0x7c, 
    0x81, 0x5, 0x30, 0x19, 0x2, 0x7d, 0x81, 0x7, 0x11, 0x2, 0x2, 0x7e, 0x81, 
    0x7, 0x12, 0x2, 0x2, 0x7f, 0x81, 0x5, 0x2e, 0x18, 0x2, 0x80, 0x7c, 0x3, 
    0x2, 0x2, 0x2, 0x80, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7e, 0x3, 0x2, 
    0x2, 0x2, 0x80, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x81, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x82, 0x83, 0x7, 0x13, 0x2, 0x2, 0x83, 0x84, 0x5, 0x2e, 0x18, 0x2, 
    0x84, 0x85, 0x7, 0xa3, 0x2, 0x2, 0x85, 0x8a, 0x5, 0x18, 0xd, 0x2, 0x86, 
    0x87, 0x7, 0x96, 0x2, 0x2, 0x87, 0x89, 0x5, 0x18, 0xd, 0x2, 0x88, 0x86, 
    0x3, 0x2, 0x2, 0x2, 0x89, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x88, 0x3, 
    0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8d, 0x3, 0x2, 
    0x2, 0x2, 0x8c, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x90, 0x7, 0xa4, 0x2, 
    0x2, 0x8e, 0x8f, 0x7, 0x9b, 0x2, 0x2, 0x8f, 0x91, 0x7, 0x4c, 0x2, 0x2, 
    0x90, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x3, 0x2, 0x2, 0x2, 0x91, 
    0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x5, 0x16, 0xc, 0x2, 0x93, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x9, 0x3, 0x2, 0x2, 0x95, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x96, 0x97, 0x5, 0x2e, 0x18, 0x2, 0x97, 0x98, 0x7, 0x98, 
    0x2, 0x2, 0x98, 0x99, 0x5, 0x1a, 0xe, 0x2, 0x99, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x9a, 0x9d, 0x5, 0x30, 0x19, 0x2, 0x9b, 0x9d, 0x5, 0x2e, 0x18, 
    0x2, 0x9c, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9b, 0x3, 0x2, 0x2, 0x2, 
    0x9d, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0xf, 0x2, 0x2, 0x9f, 
    0xa0, 0x5, 0x1e, 0x10, 0x2, 0xa0, 0xa1, 0x7, 0x97, 0x2, 0x2, 0xa1, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0xa2, 0xa4, 0x7, 0x99, 0x2, 0x2, 0xa3, 0xa2, 0x3, 
    0x2, 0x2, 0x2, 0xa3, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x3, 0x2, 
    0x2, 0x2, 0xa5, 0xaa, 0x5, 0x2e, 0x18, 0x2, 0xa6, 0xa7, 0x7, 0x99, 0x2, 
    0x2, 0xa7, 0xa9, 0x5, 0x2e, 0x18, 0x2, 0xa8, 0xa6, 0x3, 0x2, 0x2, 0x2, 
    0xa9, 0xac, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 
    0xab, 0x3, 0x2, 0x2, 0x2, 0xab, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaa, 
    0x3, 0x2, 0x2, 0x2, 0xad, 0xb3, 0x5, 0x22, 0x12, 0x2, 0xae, 0xb3, 0x5, 
    0x24, 0x13, 0x2, 0xaf, 0xb3, 0x5, 0x26, 0x14, 0x2, 0xb0, 0xb3, 0x5, 
    0x28, 0x15, 0x2, 0xb1, 0xb3, 0x5, 0x2a, 0x16, 0x2, 0xb2, 0xad, 0x3, 
    0x2, 0x2, 0x2, 0xb2, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xaf, 0x3, 0x2, 
    0x2, 0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb1, 0x3, 0x2, 0x2, 
    0x2, 0xb3, 0x21, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x9, 0x4, 0x2, 0x2, 
    0xb5, 0x23, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x7, 0x60, 0x2, 0x2, 0xb7, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x9, 0x5, 0x2, 0x2, 0xb9, 0x27, 
    0x3, 0x2, 0x2, 0x2, 0xba, 0xbc, 0x7, 0x6d, 0x2, 0x2, 0xbb, 0xbd, 0x9, 
    0x6, 0x2, 0x2, 0xbc, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x3, 0x2, 
    0x2, 0x2, 0xbd, 0x29, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xc0, 0x5, 0x2c, 0x17, 
    0x2, 0xbf, 0xc1, 0x9, 0x7, 0x2, 0x2, 0xc0, 0xbf, 0x3, 0x2, 0x2, 0x2, 
    0xc0, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc1, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xc2, 
    0xc4, 0x7, 0x76, 0x2, 0x2, 0xc3, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 
    0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xcd, 0x9, 
    0x8, 0x2, 0x2, 0xc6, 0xc7, 0x7, 0x71, 0x2, 0x2, 0xc7, 0xcd, 0x9, 0x9, 
    0x2, 0x2, 0xc8, 0xc9, 0x7, 0x72, 0x2, 0x2, 0xc9, 0xcd, 0x9, 0xa, 0x2, 
    0x2, 0xca, 0xcb, 0x7, 0x73, 0x2, 0x2, 0xcb, 0xcd, 0x9, 0xb, 0x2, 0x2, 
    0xcc, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xcc, 
    0xc8, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcd, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0xce, 0xd2, 0x7, 0x57, 0x2, 0x2, 0xcf, 0xd0, 0x7, 
    0x74, 0x2, 0x2, 0xd0, 0xd2, 0x7, 0x57, 0x2, 0x2, 0xd1, 0xce, 0x3, 0x2, 
    0x2, 0x2, 0xd1, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0xd3, 0xd4, 0x9, 0xc, 0x2, 0x2, 0xd4, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0xd5, 0xd6, 0x9, 0xd, 0x2, 0x2, 0xd6, 0x33, 0x3, 0x2, 0x2, 0x2, 0x18, 
    0x39, 0x41, 0x51, 0x5b, 0x5d, 0x64, 0x66, 0x6a, 0x73, 0x78, 0x80, 0x8a, 
    0x90, 0x9c, 0xa3, 0xaa, 0xb2, 0xbc, 0xc0, 0xc3, 0xcc, 0xd1, 
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
