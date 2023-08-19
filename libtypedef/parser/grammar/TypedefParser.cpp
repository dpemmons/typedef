
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

std::vector<tree::TerminalNode *> TypedefParser::CompilationUnitContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::CompilationUnitContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
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

std::vector<TypedefParser::TypeDeclarationContext *> TypedefParser::CompilationUnitContext::typeDeclaration() {
  return getRuleContexts<TypedefParser::TypeDeclarationContext>();
}

TypedefParser::TypeDeclarationContext* TypedefParser::CompilationUnitContext::typeDeclaration(size_t i) {
  return getRuleContext<TypedefParser::TypeDeclarationContext>(i);
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
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(77);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(74);
      match(TypedefParser::WS);
      setState(79);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(80);
    typedefVersionDeclaration();
    setState(84);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(81);
        match(TypedefParser::WS); 
      }
      setState(86);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
    setState(88);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::KW_MODULE) {
      setState(87);
      moduleDeclaration();
    }
    setState(99);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(93);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(90);
          match(TypedefParser::WS);
          setState(95);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(96);
        useDeclaration(); 
      }
      setState(101);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
    setState(111);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(105);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(102);
          match(TypedefParser::WS);
          setState(107);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(108);
        typeDeclaration(); 
      }
      setState(113);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
    setState(117);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(114);
      match(TypedefParser::WS);
      setState(119);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(120);
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

std::vector<tree::TerminalNode *> TypedefParser::StructDeclarationContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::StructDeclarationContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
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
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(122);
    match(TypedefParser::KW_STRUCT);
    setState(126);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(123);
      match(TypedefParser::WS);
      setState(128);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(129);
    identifier();
    setState(133);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(130);
      match(TypedefParser::WS);
      setState(135);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(136);
    match(TypedefParser::LBRACE);
    setState(140);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(137);
        match(TypedefParser::WS); 
      }
      setState(142);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
    setState(159);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypedefParser::KW_STRUCT)
      | (1ULL << TypedefParser::KW_VARIANT)
      | (1ULL << TypedefParser::KW_VECTOR)
      | (1ULL << TypedefParser::KW_MAP))) != 0) || _la == TypedefParser::NON_KEYWORD_IDENTIFIER

    || _la == TypedefParser::RAW_ESCAPE) {
      setState(143);
      structMember();
      setState(147);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(144);
        match(TypedefParser::WS);
        setState(149);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(150);
      match(TypedefParser::SEMI);
      setState(154);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(151);
          match(TypedefParser::WS); 
        }
        setState(156);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
      }
      setState(161);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(165);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(162);
      match(TypedefParser::WS);
      setState(167);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(168);
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

std::vector<tree::TerminalNode *> TypedefParser::VariantDeclarationContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::VariantDeclarationContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
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
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(170);
    match(TypedefParser::KW_VARIANT);
    setState(174);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(171);
      match(TypedefParser::WS);
      setState(176);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(177);
    identifier();
    setState(181);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(178);
      match(TypedefParser::WS);
      setState(183);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(184);
    match(TypedefParser::LBRACE);
    setState(207);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypedefParser::KW_STRUCT)
      | (1ULL << TypedefParser::KW_VARIANT)
      | (1ULL << TypedefParser::KW_VECTOR)
      | (1ULL << TypedefParser::KW_MAP))) != 0) || ((((_la - 85) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 85)) & ((1ULL << (TypedefParser::NON_KEYWORD_IDENTIFIER - 85))
      | (1ULL << (TypedefParser::WS - 85))
      | (1ULL << (TypedefParser::RAW_ESCAPE - 85)))) != 0)) {
      setState(188);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(185);
        match(TypedefParser::WS);
        setState(190);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(191);
      structMember();
      setState(195);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(192);
        match(TypedefParser::WS);
        setState(197);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(198);
      match(TypedefParser::SEMI);
      setState(202);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(199);
          match(TypedefParser::WS); 
        }
        setState(204);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
      }
      setState(209);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(210);
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

TypedefParser::IdentifierContext* TypedefParser::VectorDeclarationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::VectorDeclarationContext::LT() {
  return getToken(TypedefParser::LT, 0);
}

tree::TerminalNode* TypedefParser::VectorDeclarationContext::GT() {
  return getToken(TypedefParser::GT, 0);
}

TypedefParser::PrimitiveTypeIdentifierContext* TypedefParser::VectorDeclarationContext::primitiveTypeIdentifier() {
  return getRuleContext<TypedefParser::PrimitiveTypeIdentifierContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::VectorDeclarationContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::VectorDeclarationContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    match(TypedefParser::KW_VECTOR);
    setState(216);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(213);
      match(TypedefParser::WS);
      setState(218);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(219);
    identifier();
    setState(223);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(220);
      match(TypedefParser::WS);
      setState(225);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(226);
    match(TypedefParser::LT);
    setState(230);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(227);
      match(TypedefParser::WS);
      setState(232);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(233);
    dynamic_cast<VectorDeclarationContext *>(_localctx)->val = primitiveTypeIdentifier();
    setState(237);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(234);
      match(TypedefParser::WS);
      setState(239);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(240);
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

TypedefParser::IdentifierContext* TypedefParser::MapDeclarationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
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

std::vector<TypedefParser::PrimitiveTypeIdentifierContext *> TypedefParser::MapDeclarationContext::primitiveTypeIdentifier() {
  return getRuleContexts<TypedefParser::PrimitiveTypeIdentifierContext>();
}

TypedefParser::PrimitiveTypeIdentifierContext* TypedefParser::MapDeclarationContext::primitiveTypeIdentifier(size_t i) {
  return getRuleContext<TypedefParser::PrimitiveTypeIdentifierContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::MapDeclarationContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::MapDeclarationContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(242);
    match(TypedefParser::KW_MAP);
    setState(246);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(243);
      match(TypedefParser::WS);
      setState(248);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(249);
    identifier();
    setState(253);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(250);
      match(TypedefParser::WS);
      setState(255);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(256);
    match(TypedefParser::LT);
    setState(260);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(257);
      match(TypedefParser::WS);
      setState(262);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(263);
    dynamic_cast<MapDeclarationContext *>(_localctx)->key = primitiveTypeIdentifier();
    setState(267);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(264);
      match(TypedefParser::WS);
      setState(269);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(270);
    match(TypedefParser::COMMA);
    setState(274);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(271);
      match(TypedefParser::WS);
      setState(276);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(277);
    dynamic_cast<MapDeclarationContext *>(_localctx)->val = primitiveTypeIdentifier();
    setState(281);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(278);
      match(TypedefParser::WS);
      setState(283);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(284);
    match(TypedefParser::GT);
   
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
  enterRule(_localctx, 10, TypedefParser::RuleStructMember);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(288);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::KW_STRUCT:
      case TypedefParser::KW_VARIANT:
      case TypedefParser::KW_VECTOR:
      case TypedefParser::KW_MAP: {
        enterOuterAlt(_localctx, 1);
        setState(286);
        typeDeclaration();
        break;
      }

      case TypedefParser::NON_KEYWORD_IDENTIFIER:
      case TypedefParser::RAW_ESCAPE: {
        enterOuterAlt(_localctx, 2);
        setState(287);
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

tree::TerminalNode* TypedefParser::TypeDeclarationContext::SEMI() {
  return getToken(TypedefParser::SEMI, 0);
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

std::vector<tree::TerminalNode *> TypedefParser::TypeDeclarationContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::TypeDeclarationContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
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
  enterRule(_localctx, 12, TypedefParser::RuleTypeDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(294);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::KW_STRUCT: {
        setState(290);
        structDeclaration();
        break;
      }

      case TypedefParser::KW_VARIANT: {
        setState(291);
        variantDeclaration();
        break;
      }

      case TypedefParser::KW_VECTOR: {
        setState(292);
        vectorDeclaration();
        break;
      }

      case TypedefParser::KW_MAP: {
        setState(293);
        mapDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(299);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(296);
      match(TypedefParser::WS);
      setState(301);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(302);
    match(TypedefParser::SEMI);
   
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
  enterRule(_localctx, 14, TypedefParser::RuleFieldDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(309);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(304);
      primitiveMemberDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(305);
      inlineStructDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(306);
      inlineVariantDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(307);
      inlineVectorDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(308);
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

std::vector<tree::TerminalNode *> TypedefParser::PrimitiveMemberDeclarationContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::PrimitiveMemberDeclarationContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
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
  enterRule(_localctx, 16, TypedefParser::RulePrimitiveMemberDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(311);
    identifier();
    setState(315);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(312);
      match(TypedefParser::WS);
      setState(317);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(318);
    match(TypedefParser::COLON);
    setState(322);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(319);
      match(TypedefParser::WS);
      setState(324);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(360);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      setState(325);
      primitiveTypeIdentifier();
      setState(329);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(326);
        match(TypedefParser::WS);
        setState(331);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(332);
      match(TypedefParser::EQ);
      setState(336);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(333);
        match(TypedefParser::WS);
        setState(338);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(341);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypedefParser::FLOAT_LITERAL: {
          setState(339);
          floatLiteral();
          break;
        }

        case TypedefParser::DEC_DIGITS:
        case TypedefParser::DEC_DIGITS_UNDERSCORE:
        case TypedefParser::HEX_PREFIX:
        case TypedefParser::OCT_PREFIX:
        case TypedefParser::BIN_PREFIX:
        case TypedefParser::MINUS: {
          setState(340);
          intLiteral();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 2: {
      setState(343);
      primitiveTypeIdentifier();
      setState(358);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
      case 1: {
        setState(347);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(344);
          match(TypedefParser::WS);
          setState(349);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(350);
        match(TypedefParser::EQ);
        setState(354);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(351);
          match(TypedefParser::WS);
          setState(356);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(357);
        explicitPrimitiveLiteral();
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

std::vector<tree::TerminalNode *> TypedefParser::InlineStructDeclarationContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::InlineStructDeclarationContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
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
  enterRule(_localctx, 18, TypedefParser::RuleInlineStructDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(362);
    identifier();
    setState(366);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(363);
      match(TypedefParser::WS);
      setState(368);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(369);
    match(TypedefParser::COLON);
    setState(373);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(370);
      match(TypedefParser::WS);
      setState(375);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(376);
    match(TypedefParser::KW_STRUCT);
    setState(380);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(377);
      match(TypedefParser::WS);
      setState(382);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(383);
    match(TypedefParser::LBRACE);
    setState(387);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(384);
        match(TypedefParser::WS); 
      }
      setState(389);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    }
    setState(406);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypedefParser::KW_STRUCT)
      | (1ULL << TypedefParser::KW_VARIANT)
      | (1ULL << TypedefParser::KW_VECTOR)
      | (1ULL << TypedefParser::KW_MAP))) != 0) || _la == TypedefParser::NON_KEYWORD_IDENTIFIER

    || _la == TypedefParser::RAW_ESCAPE) {
      setState(390);
      structMember();
      setState(394);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(391);
        match(TypedefParser::WS);
        setState(396);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(397);
      match(TypedefParser::SEMI);
      setState(401);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(398);
          match(TypedefParser::WS); 
        }
        setState(403);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
      }
      setState(408);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(412);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(409);
      match(TypedefParser::WS);
      setState(414);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(415);
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

std::vector<tree::TerminalNode *> TypedefParser::InlineVariantDeclarationContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::InlineVariantDeclarationContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
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
  enterRule(_localctx, 20, TypedefParser::RuleInlineVariantDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(417);
    identifier();
    setState(421);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(418);
      match(TypedefParser::WS);
      setState(423);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(424);
    match(TypedefParser::COLON);
    setState(428);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(425);
      match(TypedefParser::WS);
      setState(430);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(431);
    match(TypedefParser::KW_VARIANT);
    setState(435);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(432);
      match(TypedefParser::WS);
      setState(437);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(438);
    match(TypedefParser::LBRACE);
    setState(442);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(439);
        match(TypedefParser::WS); 
      }
      setState(444);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
    }
    setState(461);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypedefParser::KW_STRUCT)
      | (1ULL << TypedefParser::KW_VARIANT)
      | (1ULL << TypedefParser::KW_VECTOR)
      | (1ULL << TypedefParser::KW_MAP))) != 0) || _la == TypedefParser::NON_KEYWORD_IDENTIFIER

    || _la == TypedefParser::RAW_ESCAPE) {
      setState(445);
      structMember();
      setState(449);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(446);
        match(TypedefParser::WS);
        setState(451);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(452);
      match(TypedefParser::SEMI);
      setState(456);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(453);
          match(TypedefParser::WS); 
        }
        setState(458);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx);
      }
      setState(463);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(467);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(464);
      match(TypedefParser::WS);
      setState(469);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(470);
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

tree::TerminalNode* TypedefParser::InlineVectorDeclarationContext::GT() {
  return getToken(TypedefParser::GT, 0);
}

TypedefParser::PrimitiveTypeIdentifierContext* TypedefParser::InlineVectorDeclarationContext::primitiveTypeIdentifier() {
  return getRuleContext<TypedefParser::PrimitiveTypeIdentifierContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::InlineVectorDeclarationContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::InlineVectorDeclarationContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
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
  enterRule(_localctx, 22, TypedefParser::RuleInlineVectorDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(472);
    identifier();
    setState(476);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(473);
      match(TypedefParser::WS);
      setState(478);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(479);
    match(TypedefParser::COLON);
    setState(483);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(480);
      match(TypedefParser::WS);
      setState(485);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(486);
    match(TypedefParser::KW_VECTOR);
    setState(490);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(487);
      match(TypedefParser::WS);
      setState(492);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(493);
    match(TypedefParser::LT);
    setState(497);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(494);
      match(TypedefParser::WS);
      setState(499);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(500);
    dynamic_cast<InlineVectorDeclarationContext *>(_localctx)->val = primitiveTypeIdentifier();
    setState(504);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(501);
      match(TypedefParser::WS);
      setState(506);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(507);
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

std::vector<TypedefParser::PrimitiveTypeIdentifierContext *> TypedefParser::InlineMapDeclarationContext::primitiveTypeIdentifier() {
  return getRuleContexts<TypedefParser::PrimitiveTypeIdentifierContext>();
}

TypedefParser::PrimitiveTypeIdentifierContext* TypedefParser::InlineMapDeclarationContext::primitiveTypeIdentifier(size_t i) {
  return getRuleContext<TypedefParser::PrimitiveTypeIdentifierContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::InlineMapDeclarationContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::InlineMapDeclarationContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
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
  enterRule(_localctx, 24, TypedefParser::RuleInlineMapDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(509);
    identifier();
    setState(513);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(510);
      match(TypedefParser::WS);
      setState(515);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(516);
    match(TypedefParser::COLON);
    setState(520);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(517);
      match(TypedefParser::WS);
      setState(522);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(523);
    match(TypedefParser::KW_MAP);
    setState(527);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(524);
      match(TypedefParser::WS);
      setState(529);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(530);
    match(TypedefParser::LT);
    setState(534);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(531);
      match(TypedefParser::WS);
      setState(536);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(537);
    dynamic_cast<InlineMapDeclarationContext *>(_localctx)->key = primitiveTypeIdentifier();
    setState(541);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(538);
      match(TypedefParser::WS);
      setState(543);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(544);
    match(TypedefParser::COMMA);
    setState(548);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(545);
      match(TypedefParser::WS);
      setState(550);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(551);
    dynamic_cast<InlineMapDeclarationContext *>(_localctx)->val = primitiveTypeIdentifier();
    setState(555);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(552);
      match(TypedefParser::WS);
      setState(557);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(558);
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

std::vector<tree::TerminalNode *> TypedefParser::TypedefVersionDeclarationContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::TypedefVersionDeclarationContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
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
  enterRule(_localctx, 26, TypedefParser::RuleTypedefVersionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(560);
    match(TypedefParser::KW_TYPEDEF);
    setState(564);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(561);
      match(TypedefParser::WS);
      setState(566);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(567);
    match(TypedefParser::EQ);
    setState(571);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(568);
      match(TypedefParser::WS);
      setState(573);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(574);
    identifier();
    setState(578);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(575);
      match(TypedefParser::WS);
      setState(580);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(581);
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

std::vector<tree::TerminalNode *> TypedefParser::ModuleDeclarationContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::ModuleDeclarationContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
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
  enterRule(_localctx, 28, TypedefParser::RuleModuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(583);
    match(TypedefParser::KW_MODULE);
    setState(585); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(584);
      match(TypedefParser::WS);
      setState(587); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == TypedefParser::WS);
    setState(589);
    simplePath();
    setState(593);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(590);
      match(TypedefParser::WS);
      setState(595);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(596);
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

std::vector<tree::TerminalNode *> TypedefParser::UseDeclarationContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::UseDeclarationContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
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
  enterRule(_localctx, 30, TypedefParser::RuleUseDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(598);
    match(TypedefParser::KW_USE);
    setState(600); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(599);
      match(TypedefParser::WS);
      setState(602); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == TypedefParser::WS);
    setState(604);
    useTree();
    setState(608);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(605);
      match(TypedefParser::WS);
      setState(610);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(611);
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
  enterRule(_localctx, 32, TypedefParser::RuleUseTree);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(642);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(617);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypedefParser::NON_KEYWORD_IDENTIFIER

      || _la == TypedefParser::RAW_ESCAPE || _la == TypedefParser::PATHSEP) {
        setState(614);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
        case 1: {
          setState(613);
          simplePath();
          break;
        }

        }
        setState(616);
        match(TypedefParser::PATHSEP);
      }
      setState(635);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypedefParser::STAR: {
          setState(619);
          match(TypedefParser::STAR);
          break;
        }

        case TypedefParser::LBRACE: {
          setState(620);
          match(TypedefParser::LBRACE);
          setState(632);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (((((_la - 85) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 85)) & ((1ULL << (TypedefParser::NON_KEYWORD_IDENTIFIER - 85))
            | (1ULL << (TypedefParser::RAW_ESCAPE - 85))
            | (1ULL << (TypedefParser::STAR - 85)))) != 0) || _la == TypedefParser::PATHSEP

          || _la == TypedefParser::LBRACE) {
            setState(621);
            useTree();
            setState(626);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
              if (alt == 1) {
                setState(622);
                match(TypedefParser::COMMA);
                setState(623);
                useTree(); 
              }
              setState(628);
              _errHandler->sync(this);
              alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
            }
            setState(630);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == TypedefParser::COMMA) {
              setState(629);
              match(TypedefParser::COMMA);
            }
          }
          setState(634);
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
      setState(637);
      simplePath();
      setState(640);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypedefParser::KW_AS) {
        setState(638);
        match(TypedefParser::KW_AS);
        setState(639);
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
  enterRule(_localctx, 34, TypedefParser::RuleSimplePath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(645);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::PATHSEP) {
      setState(644);
      dynamic_cast<SimplePathContext *>(_localctx)->leading_pathsep = match(TypedefParser::PATHSEP);
    }
    setState(647);
    identifier();
    setState(652);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(648);
        match(TypedefParser::PATHSEP);
        setState(649);
        identifier(); 
      }
      setState(654);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx);
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
  enterRule(_localctx, 36, TypedefParser::RuleExplicitPrimitiveLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(668);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(655);
      boolLiteral();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(656);
      charLiteral();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(657);
      stringLiteral();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(658);
      f32Literal();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(659);
      f64Literal();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(660);
      u8Literal();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(661);
      u16Literal();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(662);
      u32Literal();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(663);
      u64Literal();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(664);
      i8Literal();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(665);
      i16Literal();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(666);
      i32Literal();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(667);
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
  enterRule(_localctx, 38, TypedefParser::RuleBoolLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(670);
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
  enterRule(_localctx, 40, TypedefParser::RuleCharLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(672);
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
  enterRule(_localctx, 42, TypedefParser::RuleStringLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(674);
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
  enterRule(_localctx, 44, TypedefParser::RuleF32Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(676);
    floatLiteral();
    setState(677);
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
  enterRule(_localctx, 46, TypedefParser::RuleF64Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(679);
    floatLiteral();
    setState(680);
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
  enterRule(_localctx, 48, TypedefParser::RuleU8Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(682);
    intLiteral();
    setState(683);
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
  enterRule(_localctx, 50, TypedefParser::RuleU16Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(685);
    intLiteral();
    setState(686);
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
  enterRule(_localctx, 52, TypedefParser::RuleU32Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(688);
    intLiteral();
    setState(689);
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
  enterRule(_localctx, 54, TypedefParser::RuleU64Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(691);
    intLiteral();
    setState(692);
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
  enterRule(_localctx, 56, TypedefParser::RuleI8Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(694);
    intLiteral();
    setState(695);
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
  enterRule(_localctx, 58, TypedefParser::RuleI16Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(697);
    intLiteral();
    setState(698);
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
  enterRule(_localctx, 60, TypedefParser::RuleI32Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(700);
    intLiteral();
    setState(701);
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
  enterRule(_localctx, 62, TypedefParser::RuleI64Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(703);
    intLiteral();
    setState(704);
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
  enterRule(_localctx, 64, TypedefParser::RuleFloatLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(706);
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
  enterRule(_localctx, 66, TypedefParser::RuleIntLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(718);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        enterOuterAlt(_localctx, 1);
        setState(709);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(708);
          match(TypedefParser::MINUS);
        }
        setState(711);
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
        setState(712);
        match(TypedefParser::HEX_PREFIX);
        setState(713);
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
        setState(714);
        match(TypedefParser::OCT_PREFIX);
        setState(715);
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
        setState(716);
        match(TypedefParser::BIN_PREFIX);
        setState(717);
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
  enterRule(_localctx, 68, TypedefParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(723);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::NON_KEYWORD_IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(720);
        dynamic_cast<IdentifierContext *>(_localctx)->nki = match(TypedefParser::NON_KEYWORD_IDENTIFIER);
        break;
      }

      case TypedefParser::RAW_ESCAPE: {
        enterOuterAlt(_localctx, 2);
        setState(721);
        match(TypedefParser::RAW_ESCAPE);
        setState(722);
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
  enterRule(_localctx, 70, TypedefParser::RulePrimitiveTypeIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(725);
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
  enterRule(_localctx, 72, TypedefParser::RuleKeyword);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(727);
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
  "mapDeclaration", "structMember", "typeDeclaration", "fieldDeclaration", 
  "primitiveMemberDeclaration", "inlineStructDeclaration", "inlineVariantDeclaration", 
  "inlineVectorDeclaration", "inlineMapDeclaration", "typedefVersionDeclaration", 
  "moduleDeclaration", "useDeclaration", "useTree", "simplePath", "explicitPrimitiveLiteral", 
  "boolLiteral", "charLiteral", "stringLiteral", "f32Literal", "f64Literal", 
  "u8Literal", "u16Literal", "u32Literal", "u64Literal", "i8Literal", "i16Literal", 
  "i32Literal", "i64Literal", "floatLiteral", "intLiteral", "identifier", 
  "primitiveTypeIdentifier", "keyword"
};

std::vector<std::string> TypedefParser::_literalNames = {
  "", "'array'", "'as'", "'enum'", "'false'", "'fn'", "'impl'", "'message'", 
  "'module'", "'struct'", "'true'", "'type'", "'typedef'", "'use'", "'variant'", 
  "'vector'", "'map'", "'tmpl_str'", "'and'", "'in'", "'let'", "'not'", 
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
  "", "", "", "", "", "", "", "", "", "'0x'", "'0o'", "'0b'", "'r#'", "'+'", 
  "'-'", "'*'", "'/'", "'%'", "'^'", "'!'", "'&'", "'|'", "'&&'", "'||'", 
  "'+='", "'-='", "'*='", "'/='", "'%='", "'^='", "'&='", "'|='", "'<<='", 
  "'>>='", "'='", "'=='", "'!='", "'>'", "'<'", "'>='", "'<='", "'@'", "'_'", 
  "'.'", "'..'", "'...'", "','", "';'", "':'", "'::'", "'->'", "'=>'", "'#'", 
  "'$'", "'?'", "'{'", "'}'", "'['", "']'", "'('", "')'"
};

std::vector<std::string> TypedefParser::_symbolicNames = {
  "", "KW_ARRAY", "KW_AS", "KW_ENUM", "KW_FALSE", "KW_FN", "KW_IMPL", "KW_MESSAGE", 
  "KW_MODULE", "KW_STRUCT", "KW_TRUE", "KW_TYPE", "KW_TYPEDEF", "KW_USE", 
  "KW_VARIANT", "KW_VECTOR", "KW_MAP", "KW_TEMPLATESTRING", "KW_AND", "KW_IN", 
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
  "SHEBANG", "WS", "CHAR_LITERAL", "STRING_LITERAL", "RAW_STRING_LITERAL", 
  "DEC_DIGITS", "DEC_DIGITS_UNDERSCORE", "HEX_DIGITS", "HEX_DIGITS_UNDERSCORE", 
  "OCT_DIGITS", "OCT_DIGITS_UNDERSCORE", "BIN_DIGITS", "BIN_DIGITS_UNDERSCORE", 
  "FLOAT_LITERAL", "OCT_DIGIT", "DEC_DIGIT", "HEX_DIGIT", "HEX_PREFIX", 
  "OCT_PREFIX", "BIN_PREFIX", "RAW_ESCAPE", "PLUS", "MINUS", "STAR", "SLASH", 
  "PERCENT", "CARET", "NOT", "AND", "OR", "ANDAND", "OROR", "PLUSEQ", "MINUSEQ", 
  "STAREQ", "SLASHEQ", "PERCENTEQ", "CARETEQ", "ANDEQ", "OREQ", "SHLEQ", 
  "SHREQ", "EQ", "EQEQ", "NE", "GT", "LT", "GE", "LE", "AT", "UNDERSCORE", 
  "DOT", "DOTDOT", "DOTDOTDOT", "COMMA", "SEMI", "COLON", "PATHSEP", "RARROW", 
  "FATARROW", "POUND", "DOLLAR", "QUESTION", "LBRACE", "RBRACE", "LBRACK", 
  "RBRACK", "LPAREN", "RPAREN"
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
    0x3, 0xa3, 0x2dc, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x25, 0x4, 0x26, 0x9, 0x26, 0x3, 0x2, 0x7, 0x2, 0x4e, 0xa, 0x2, 0xc, 
    0x2, 0xe, 0x2, 0x51, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x55, 0xa, 
    0x2, 0xc, 0x2, 0xe, 0x2, 0x58, 0xb, 0x2, 0x3, 0x2, 0x5, 0x2, 0x5b, 0xa, 
    0x2, 0x3, 0x2, 0x7, 0x2, 0x5e, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x61, 0xb, 
    0x2, 0x3, 0x2, 0x7, 0x2, 0x64, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x67, 0xb, 
    0x2, 0x3, 0x2, 0x7, 0x2, 0x6a, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x6d, 0xb, 
    0x2, 0x3, 0x2, 0x7, 0x2, 0x70, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x73, 0xb, 
    0x2, 0x3, 0x2, 0x7, 0x2, 0x76, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x79, 0xb, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x7f, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0x82, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x86, 
    0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x89, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 
    0x3, 0x8d, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x90, 0xb, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x7, 0x3, 0x94, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x97, 0xb, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x7, 0x3, 0x9b, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x9e, 0xb, 
    0x3, 0x7, 0x3, 0xa0, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0xa3, 0xb, 0x3, 0x3, 
    0x3, 0x7, 0x3, 0xa6, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0xa9, 0xb, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0xaf, 0xa, 0x4, 0xc, 0x4, 
    0xe, 0x4, 0xb2, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0xb6, 0xa, 0x4, 
    0xc, 0x4, 0xe, 0x4, 0xb9, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0xbd, 
    0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0xc0, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 
    0x4, 0xc4, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0xc7, 0xb, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x7, 0x4, 0xcb, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0xce, 0xb, 0x4, 0x7, 
    0x4, 0xd0, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0xd3, 0xb, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xd9, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 
    0xdc, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xe0, 0xa, 0x5, 0xc, 0x5, 
    0xe, 0x5, 0xe3, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xe7, 0xa, 0x5, 
    0xc, 0x5, 0xe, 0x5, 0xea, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xee, 
    0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xf1, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x7, 0x6, 0xf7, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0xfa, 0xb, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0xfe, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 
    0x101, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x105, 0xa, 0x6, 0xc, 
    0x6, 0xe, 0x6, 0x108, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x10c, 
    0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x10f, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 
    0x6, 0x113, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x116, 0xb, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x7, 0x6, 0x11a, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x11d, 0xb, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x123, 0xa, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x129, 0xa, 0x8, 0x3, 
    0x8, 0x7, 0x8, 0x12c, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x12f, 0xb, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x5, 0x9, 0x138, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x13c, 0xa, 
    0xa, 0xc, 0xa, 0xe, 0xa, 0x13f, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 
    0x143, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x146, 0xb, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x7, 0xa, 0x14a, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x14d, 0xb, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x151, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x154, 
    0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x158, 0xa, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x7, 0xa, 0x15c, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x15f, 0xb, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x163, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x166, 
    0xb, 0xa, 0x3, 0xa, 0x5, 0xa, 0x169, 0xa, 0xa, 0x5, 0xa, 0x16b, 0xa, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x16f, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 
    0x172, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x176, 0xa, 0xb, 0xc, 
    0xb, 0xe, 0xb, 0x179, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x17d, 
    0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x180, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 
    0xb, 0x184, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x187, 0xb, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x7, 0xb, 0x18b, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x18e, 0xb, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x192, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 
    0x195, 0xb, 0xb, 0x7, 0xb, 0x197, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x19a, 
    0xb, 0xb, 0x3, 0xb, 0x7, 0xb, 0x19d, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x1a0, 
    0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x1a6, 0xa, 
    0xc, 0xc, 0xc, 0xe, 0xc, 0x1a9, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 
    0x1ad, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x1b0, 0xb, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x7, 0xc, 0x1b4, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x1b7, 0xb, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x1bb, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x1be, 
    0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x1c2, 0xa, 0xc, 0xc, 0xc, 0xe, 
    0xc, 0x1c5, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x1c9, 0xa, 0xc, 
    0xc, 0xc, 0xe, 0xc, 0x1cc, 0xb, 0xc, 0x7, 0xc, 0x1ce, 0xa, 0xc, 0xc, 
    0xc, 0xe, 0xc, 0x1d1, 0xb, 0xc, 0x3, 0xc, 0x7, 0xc, 0x1d4, 0xa, 0xc, 
    0xc, 0xc, 0xe, 0xc, 0x1d7, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 
    0xd, 0x7, 0xd, 0x1dd, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x1e0, 0xb, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x1e4, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x1e7, 
    0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x1eb, 0xa, 0xd, 0xc, 0xd, 0xe, 
    0xd, 0x1ee, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x1f2, 0xa, 0xd, 
    0xc, 0xd, 0xe, 0xd, 0x1f5, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x1f9, 
    0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x1fc, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xe, 0x3, 0xe, 0x7, 0xe, 0x202, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x205, 
    0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x209, 0xa, 0xe, 0xc, 0xe, 0xe, 
    0xe, 0x20c, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x210, 0xa, 0xe, 
    0xc, 0xe, 0xe, 0xe, 0x213, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x217, 
    0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x21a, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 
    0xe, 0x21e, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x221, 0xb, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x7, 0xe, 0x225, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x228, 0xb, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x22c, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 
    0x22f, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x235, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x238, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 
    0xf, 0x23c, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x23f, 0xb, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x7, 0xf, 0x243, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x246, 0xb, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x6, 0x10, 0x24c, 0xa, 
    0x10, 0xd, 0x10, 0xe, 0x10, 0x24d, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 
    0x252, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x255, 0xb, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x6, 0x11, 0x25b, 0xa, 0x11, 0xd, 0x11, 
    0xe, 0x11, 0x25c, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x261, 0xa, 0x11, 
    0xc, 0x11, 0xe, 0x11, 0x264, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 
    0x5, 0x12, 0x269, 0xa, 0x12, 0x3, 0x12, 0x5, 0x12, 0x26c, 0xa, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x273, 
    0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x276, 0xb, 0x12, 0x3, 0x12, 0x5, 0x12, 
    0x279, 0xa, 0x12, 0x5, 0x12, 0x27b, 0xa, 0x12, 0x3, 0x12, 0x5, 0x12, 
    0x27e, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x283, 
    0xa, 0x12, 0x5, 0x12, 0x285, 0xa, 0x12, 0x3, 0x13, 0x5, 0x13, 0x288, 
    0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x28d, 0xa, 0x13, 
    0xc, 0x13, 0xe, 0x13, 0x290, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x29f, 0xa, 0x14, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 
    0x5, 0x23, 0x2c8, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x2d1, 0xa, 0x23, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x2d6, 0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x2, 0x2, 0x27, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
    0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 
    0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x2, 0xa, 0x4, 
    0x2, 0x6, 0x6, 0xc, 0xc, 0x3, 0x2, 0x62, 0x63, 0x3, 0x2, 0x64, 0x65, 
    0x3, 0x2, 0x66, 0x67, 0x3, 0x2, 0x68, 0x69, 0x3, 0x2, 0x6a, 0x6b, 0x3, 
    0x2, 0x4a, 0x56, 0x5, 0x2, 0x4, 0x8, 0xa, 0x12, 0x14, 0x49, 0x2, 0x325, 
    0x2, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x6, 0xac, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xa, 0xf4, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x122, 0x3, 0x2, 0x2, 0x2, 0xe, 0x128, 0x3, 0x2, 0x2, 
    0x2, 0x10, 0x137, 0x3, 0x2, 0x2, 0x2, 0x12, 0x139, 0x3, 0x2, 0x2, 0x2, 
    0x14, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x18, 
    0x1da, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x232, 
    0x3, 0x2, 0x2, 0x2, 0x1e, 0x249, 0x3, 0x2, 0x2, 0x2, 0x20, 0x258, 0x3, 
    0x2, 0x2, 0x2, 0x22, 0x284, 0x3, 0x2, 0x2, 0x2, 0x24, 0x287, 0x3, 0x2, 
    0x2, 0x2, 0x26, 0x29e, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2a0, 0x3, 0x2, 0x2, 
    0x2, 0x2a, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2a4, 0x3, 0x2, 0x2, 0x2, 
    0x2e, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x32, 
    0x2ac, 0x3, 0x2, 0x2, 0x2, 0x34, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x36, 0x2b2, 
    0x3, 0x2, 0x2, 0x2, 0x38, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x2b8, 0x3, 
    0x2, 0x2, 0x2, 0x3c, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x2be, 0x3, 0x2, 
    0x2, 0x2, 0x40, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x42, 0x2c4, 0x3, 0x2, 0x2, 
    0x2, 0x44, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x46, 0x2d5, 0x3, 0x2, 0x2, 0x2, 
    0x48, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x4c, 
    0x4e, 0x7, 0x60, 0x2, 0x2, 0x4d, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x51, 
    0x3, 0x2, 0x2, 0x2, 0x4f, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x3, 
    0x2, 0x2, 0x2, 0x50, 0x52, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4f, 0x3, 0x2, 
    0x2, 0x2, 0x52, 0x56, 0x5, 0x1c, 0xf, 0x2, 0x53, 0x55, 0x7, 0x60, 0x2, 
    0x2, 0x54, 0x53, 0x3, 0x2, 0x2, 0x2, 0x55, 0x58, 0x3, 0x2, 0x2, 0x2, 
    0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x3, 0x2, 0x2, 0x2, 0x57, 
    0x5a, 0x3, 0x2, 0x2, 0x2, 0x58, 0x56, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5b, 
    0x5, 0x1e, 0x10, 0x2, 0x5a, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x3, 
    0x2, 0x2, 0x2, 0x5b, 0x65, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5e, 0x7, 0x60, 
    0x2, 0x2, 0x5d, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x61, 0x3, 0x2, 0x2, 
    0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x3, 0x2, 0x2, 0x2, 
    0x60, 0x62, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x64, 0x5, 0x20, 0x11, 0x2, 0x63, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x64, 0x67, 
    0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x3, 
    0x2, 0x2, 0x2, 0x66, 0x71, 0x3, 0x2, 0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 
    0x2, 0x2, 0x68, 0x6a, 0x7, 0x60, 0x2, 0x2, 0x69, 0x68, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x69, 0x3, 0x2, 0x2, 0x2, 
    0x6b, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6d, 
    0x6b, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x70, 0x5, 0xe, 0x8, 0x2, 0x6f, 0x6b, 
    0x3, 0x2, 0x2, 0x2, 0x70, 0x73, 0x3, 0x2, 0x2, 0x2, 0x71, 0x6f, 0x3, 
    0x2, 0x2, 0x2, 0x71, 0x72, 0x3, 0x2, 0x2, 0x2, 0x72, 0x77, 0x3, 0x2, 
    0x2, 0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x74, 0x76, 0x7, 0x60, 0x2, 
    0x2, 0x75, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x79, 0x3, 0x2, 0x2, 0x2, 
    0x77, 0x75, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 0x2, 0x2, 0x2, 0x78, 
    0x7a, 0x3, 0x2, 0x2, 0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 
    0x7, 0x2, 0x2, 0x3, 0x7b, 0x3, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x80, 0x7, 
    0xb, 0x2, 0x2, 0x7d, 0x7f, 0x7, 0x60, 0x2, 0x2, 0x7e, 0x7d, 0x3, 0x2, 
    0x2, 0x2, 0x7f, 0x82, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7e, 0x3, 0x2, 0x2, 
    0x2, 0x80, 0x81, 0x3, 0x2, 0x2, 0x2, 0x81, 0x83, 0x3, 0x2, 0x2, 0x2, 
    0x82, 0x80, 0x3, 0x2, 0x2, 0x2, 0x83, 0x87, 0x5, 0x46, 0x24, 0x2, 0x84, 
    0x86, 0x7, 0x60, 0x2, 0x2, 0x85, 0x84, 0x3, 0x2, 0x2, 0x2, 0x86, 0x89, 
    0x3, 0x2, 0x2, 0x2, 0x87, 0x85, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 
    0x2, 0x2, 0x2, 0x88, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x89, 0x87, 0x3, 0x2, 
    0x2, 0x2, 0x8a, 0x8e, 0x7, 0x9e, 0x2, 0x2, 0x8b, 0x8d, 0x7, 0x60, 0x2, 
    0x2, 0x8c, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x90, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8f, 
    0xa1, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x91, 0x95, 
    0x5, 0xc, 0x7, 0x2, 0x92, 0x94, 0x7, 0x60, 0x2, 0x2, 0x93, 0x92, 0x3, 
    0x2, 0x2, 0x2, 0x94, 0x97, 0x3, 0x2, 0x2, 0x2, 0x95, 0x93, 0x3, 0x2, 
    0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 0x96, 0x98, 0x3, 0x2, 0x2, 
    0x2, 0x97, 0x95, 0x3, 0x2, 0x2, 0x2, 0x98, 0x9c, 0x7, 0x96, 0x2, 0x2, 
    0x99, 0x9b, 0x7, 0x60, 0x2, 0x2, 0x9a, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9b, 
    0x9e, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 
    0x3, 0x2, 0x2, 0x2, 0x9d, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9c, 0x3, 
    0x2, 0x2, 0x2, 0x9f, 0x91, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa3, 0x3, 0x2, 
    0x2, 0x2, 0xa1, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x3, 0x2, 0x2, 
    0x2, 0xa2, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa1, 0x3, 0x2, 0x2, 0x2, 
    0xa4, 0xa6, 0x7, 0x60, 0x2, 0x2, 0xa5, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa6, 
    0xa9, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 
    0x3, 0x2, 0x2, 0x2, 0xa8, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa7, 0x3, 
    0x2, 0x2, 0x2, 0xaa, 0xab, 0x7, 0x9f, 0x2, 0x2, 0xab, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0xac, 0xb0, 0x7, 0x10, 0x2, 0x2, 0xad, 0xaf, 0x7, 0x60, 0x2, 
    0x2, 0xae, 0xad, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb2, 0x3, 0x2, 0x2, 0x2, 
    0xb0, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb1, 
    0xb3, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb7, 
    0x5, 0x46, 0x24, 0x2, 0xb4, 0xb6, 0x7, 0x60, 0x2, 0x2, 0xb5, 0xb4, 0x3, 
    0x2, 0x2, 0x2, 0xb6, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb5, 0x3, 0x2, 
    0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xba, 0x3, 0x2, 0x2, 
    0x2, 0xb9, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xba, 0xd1, 0x7, 0x9e, 0x2, 0x2, 
    0xbb, 0xbd, 0x7, 0x60, 0x2, 0x2, 0xbc, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbd, 
    0xc0, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 
    0x3, 0x2, 0x2, 0x2, 0xbf, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbe, 0x3, 
    0x2, 0x2, 0x2, 0xc1, 0xc5, 0x5, 0xc, 0x7, 0x2, 0xc2, 0xc4, 0x7, 0x60, 
    0x2, 0x2, 0xc3, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc7, 0x3, 0x2, 0x2, 
    0x2, 0xc5, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x3, 0x2, 0x2, 0x2, 
    0xc6, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc8, 
    0xcc, 0x7, 0x96, 0x2, 0x2, 0xc9, 0xcb, 0x7, 0x60, 0x2, 0x2, 0xca, 0xc9, 
    0x3, 0x2, 0x2, 0x2, 0xcb, 0xce, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xca, 0x3, 
    0x2, 0x2, 0x2, 0xcc, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xd0, 0x3, 0x2, 
    0x2, 0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xbe, 0x3, 0x2, 0x2, 
    0x2, 0xd0, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xcf, 0x3, 0x2, 0x2, 0x2, 
    0xd1, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd3, 
    0xd1, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x7, 0x9f, 0x2, 0x2, 0xd5, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0xd6, 0xda, 0x7, 0x11, 0x2, 0x2, 0xd7, 0xd9, 0x7, 
    0x60, 0x2, 0x2, 0xd8, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdc, 0x3, 0x2, 
    0x2, 0x2, 0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 0x2, 0x2, 
    0x2, 0xdb, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 0x2, 
    0xdd, 0xe1, 0x5, 0x46, 0x24, 0x2, 0xde, 0xe0, 0x7, 0x60, 0x2, 0x2, 0xdf, 
    0xde, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xdf, 
    0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe4, 0x3, 
    0x2, 0x2, 0x2, 0xe3, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe8, 0x7, 0x8d, 
    0x2, 0x2, 0xe5, 0xe7, 0x7, 0x60, 0x2, 0x2, 0xe6, 0xe5, 0x3, 0x2, 0x2, 
    0x2, 0xe7, 0xea, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 
    0xe8, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xea, 
    0xe8, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xef, 0x5, 0x48, 0x25, 0x2, 0xec, 0xee, 
    0x7, 0x60, 0x2, 0x2, 0xed, 0xec, 0x3, 0x2, 0x2, 0x2, 0xee, 0xf1, 0x3, 
    0x2, 0x2, 0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x3, 0x2, 
    0x2, 0x2, 0xf0, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xef, 0x3, 0x2, 0x2, 
    0x2, 0xf2, 0xf3, 0x7, 0x8c, 0x2, 0x2, 0xf3, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0xf4, 0xf8, 0x7, 0x12, 0x2, 0x2, 0xf5, 0xf7, 0x7, 0x60, 0x2, 0x2, 0xf6, 
    0xf5, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf6, 
    0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfb, 0x3, 
    0x2, 0x2, 0x2, 0xfa, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xff, 0x5, 0x46, 
    0x24, 0x2, 0xfc, 0xfe, 0x7, 0x60, 0x2, 0x2, 0xfd, 0xfc, 0x3, 0x2, 0x2, 
    0x2, 0xfe, 0x101, 0x3, 0x2, 0x2, 0x2, 0xff, 0xfd, 0x3, 0x2, 0x2, 0x2, 
    0xff, 0x100, 0x3, 0x2, 0x2, 0x2, 0x100, 0x102, 0x3, 0x2, 0x2, 0x2, 0x101, 
    0xff, 0x3, 0x2, 0x2, 0x2, 0x102, 0x106, 0x7, 0x8d, 0x2, 0x2, 0x103, 
    0x105, 0x7, 0x60, 0x2, 0x2, 0x104, 0x103, 0x3, 0x2, 0x2, 0x2, 0x105, 
    0x108, 0x3, 0x2, 0x2, 0x2, 0x106, 0x104, 0x3, 0x2, 0x2, 0x2, 0x106, 
    0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 0x109, 0x3, 0x2, 0x2, 0x2, 0x108, 
    0x106, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10d, 0x5, 0x48, 0x25, 0x2, 0x10a, 
    0x10c, 0x7, 0x60, 0x2, 0x2, 0x10b, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10c, 
    0x10f, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10d, 
    0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x110, 0x3, 0x2, 0x2, 0x2, 0x10f, 
    0x10d, 0x3, 0x2, 0x2, 0x2, 0x110, 0x114, 0x7, 0x95, 0x2, 0x2, 0x111, 
    0x113, 0x7, 0x60, 0x2, 0x2, 0x112, 0x111, 0x3, 0x2, 0x2, 0x2, 0x113, 
    0x116, 0x3, 0x2, 0x2, 0x2, 0x114, 0x112, 0x3, 0x2, 0x2, 0x2, 0x114, 
    0x115, 0x3, 0x2, 0x2, 0x2, 0x115, 0x117, 0x3, 0x2, 0x2, 0x2, 0x116, 
    0x114, 0x3, 0x2, 0x2, 0x2, 0x117, 0x11b, 0x5, 0x48, 0x25, 0x2, 0x118, 
    0x11a, 0x7, 0x60, 0x2, 0x2, 0x119, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11a, 
    0x11d, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x119, 0x3, 0x2, 0x2, 0x2, 0x11b, 
    0x11c, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11d, 
    0x11b, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0x7, 0x8c, 0x2, 0x2, 0x11f, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x120, 0x123, 0x5, 0xe, 0x8, 0x2, 0x121, 0x123, 
    0x5, 0x10, 0x9, 0x2, 0x122, 0x120, 0x3, 0x2, 0x2, 0x2, 0x122, 0x121, 
    0x3, 0x2, 0x2, 0x2, 0x123, 0xd, 0x3, 0x2, 0x2, 0x2, 0x124, 0x129, 0x5, 
    0x4, 0x3, 0x2, 0x125, 0x129, 0x5, 0x6, 0x4, 0x2, 0x126, 0x129, 0x5, 
    0x8, 0x5, 0x2, 0x127, 0x129, 0x5, 0xa, 0x6, 0x2, 0x128, 0x124, 0x3, 
    0x2, 0x2, 0x2, 0x128, 0x125, 0x3, 0x2, 0x2, 0x2, 0x128, 0x126, 0x3, 
    0x2, 0x2, 0x2, 0x128, 0x127, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12d, 0x3, 
    0x2, 0x2, 0x2, 0x12a, 0x12c, 0x7, 0x60, 0x2, 0x2, 0x12b, 0x12a, 0x3, 
    0x2, 0x2, 0x2, 0x12c, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12b, 0x3, 
    0x2, 0x2, 0x2, 0x12d, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x130, 0x3, 
    0x2, 0x2, 0x2, 0x12f, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x7, 
    0x96, 0x2, 0x2, 0x131, 0xf, 0x3, 0x2, 0x2, 0x2, 0x132, 0x138, 0x5, 0x12, 
    0xa, 0x2, 0x133, 0x138, 0x5, 0x14, 0xb, 0x2, 0x134, 0x138, 0x5, 0x16, 
    0xc, 0x2, 0x135, 0x138, 0x5, 0x18, 0xd, 0x2, 0x136, 0x138, 0x5, 0x1a, 
    0xe, 0x2, 0x137, 0x132, 0x3, 0x2, 0x2, 0x2, 0x137, 0x133, 0x3, 0x2, 
    0x2, 0x2, 0x137, 0x134, 0x3, 0x2, 0x2, 0x2, 0x137, 0x135, 0x3, 0x2, 
    0x2, 0x2, 0x137, 0x136, 0x3, 0x2, 0x2, 0x2, 0x138, 0x11, 0x3, 0x2, 0x2, 
    0x2, 0x139, 0x13d, 0x5, 0x46, 0x24, 0x2, 0x13a, 0x13c, 0x7, 0x60, 0x2, 
    0x2, 0x13b, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13f, 0x3, 0x2, 0x2, 
    0x2, 0x13d, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 0x3, 0x2, 0x2, 
    0x2, 0x13e, 0x140, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x13d, 0x3, 0x2, 0x2, 
    0x2, 0x140, 0x144, 0x7, 0x97, 0x2, 0x2, 0x141, 0x143, 0x7, 0x60, 0x2, 
    0x2, 0x142, 0x141, 0x3, 0x2, 0x2, 0x2, 0x143, 0x146, 0x3, 0x2, 0x2, 
    0x2, 0x144, 0x142, 0x3, 0x2, 0x2, 0x2, 0x144, 0x145, 0x3, 0x2, 0x2, 
    0x2, 0x145, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x146, 0x144, 0x3, 0x2, 0x2, 
    0x2, 0x147, 0x14b, 0x5, 0x48, 0x25, 0x2, 0x148, 0x14a, 0x7, 0x60, 0x2, 
    0x2, 0x149, 0x148, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14d, 0x3, 0x2, 0x2, 
    0x2, 0x14b, 0x149, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x3, 0x2, 0x2, 
    0x2, 0x14c, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14b, 0x3, 0x2, 0x2, 
    0x2, 0x14e, 0x152, 0x7, 0x89, 0x2, 0x2, 0x14f, 0x151, 0x7, 0x60, 0x2, 
    0x2, 0x150, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x151, 0x154, 0x3, 0x2, 0x2, 
    0x2, 0x152, 0x150, 0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 0x3, 0x2, 0x2, 
    0x2, 0x153, 0x157, 0x3, 0x2, 0x2, 0x2, 0x154, 0x152, 0x3, 0x2, 0x2, 
    0x2, 0x155, 0x158, 0x5, 0x42, 0x22, 0x2, 0x156, 0x158, 0x5, 0x44, 0x23, 
    0x2, 0x157, 0x155, 0x3, 0x2, 0x2, 0x2, 0x157, 0x156, 0x3, 0x2, 0x2, 
    0x2, 0x158, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x159, 0x168, 0x5, 0x48, 0x25, 
    0x2, 0x15a, 0x15c, 0x7, 0x60, 0x2, 0x2, 0x15b, 0x15a, 0x3, 0x2, 0x2, 
    0x2, 0x15c, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15b, 0x3, 0x2, 0x2, 
    0x2, 0x15d, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x160, 0x3, 0x2, 0x2, 
    0x2, 0x15f, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x160, 0x164, 0x7, 0x89, 0x2, 
    0x2, 0x161, 0x163, 0x7, 0x60, 0x2, 0x2, 0x162, 0x161, 0x3, 0x2, 0x2, 
    0x2, 0x163, 0x166, 0x3, 0x2, 0x2, 0x2, 0x164, 0x162, 0x3, 0x2, 0x2, 
    0x2, 0x164, 0x165, 0x3, 0x2, 0x2, 0x2, 0x165, 0x167, 0x3, 0x2, 0x2, 
    0x2, 0x166, 0x164, 0x3, 0x2, 0x2, 0x2, 0x167, 0x169, 0x5, 0x26, 0x14, 
    0x2, 0x168, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x168, 0x169, 0x3, 0x2, 0x2, 
    0x2, 0x169, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x147, 0x3, 0x2, 0x2, 
    0x2, 0x16a, 0x159, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x16c, 0x170, 0x5, 0x46, 0x24, 0x2, 0x16d, 0x16f, 0x7, 0x60, 0x2, 0x2, 
    0x16e, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x172, 0x3, 0x2, 0x2, 0x2, 
    0x170, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x3, 0x2, 0x2, 0x2, 
    0x171, 0x173, 0x3, 0x2, 0x2, 0x2, 0x172, 0x170, 0x3, 0x2, 0x2, 0x2, 
    0x173, 0x177, 0x7, 0x97, 0x2, 0x2, 0x174, 0x176, 0x7, 0x60, 0x2, 0x2, 
    0x175, 0x174, 0x3, 0x2, 0x2, 0x2, 0x176, 0x179, 0x3, 0x2, 0x2, 0x2, 
    0x177, 0x175, 0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 0x3, 0x2, 0x2, 0x2, 
    0x178, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x179, 0x177, 0x3, 0x2, 0x2, 0x2, 
    0x17a, 0x17e, 0x7, 0xb, 0x2, 0x2, 0x17b, 0x17d, 0x7, 0x60, 0x2, 0x2, 
    0x17c, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x180, 0x3, 0x2, 0x2, 0x2, 
    0x17e, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17f, 0x3, 0x2, 0x2, 0x2, 
    0x17f, 0x181, 0x3, 0x2, 0x2, 0x2, 0x180, 0x17e, 0x3, 0x2, 0x2, 0x2, 
    0x181, 0x185, 0x7, 0x9e, 0x2, 0x2, 0x182, 0x184, 0x7, 0x60, 0x2, 0x2, 
    0x183, 0x182, 0x3, 0x2, 0x2, 0x2, 0x184, 0x187, 0x3, 0x2, 0x2, 0x2, 
    0x185, 0x183, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x3, 0x2, 0x2, 0x2, 
    0x186, 0x198, 0x3, 0x2, 0x2, 0x2, 0x187, 0x185, 0x3, 0x2, 0x2, 0x2, 
    0x188, 0x18c, 0x5, 0xc, 0x7, 0x2, 0x189, 0x18b, 0x7, 0x60, 0x2, 0x2, 
    0x18a, 0x189, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18e, 0x3, 0x2, 0x2, 0x2, 
    0x18c, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18d, 0x3, 0x2, 0x2, 0x2, 
    0x18d, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18c, 0x3, 0x2, 0x2, 0x2, 
    0x18f, 0x193, 0x7, 0x96, 0x2, 0x2, 0x190, 0x192, 0x7, 0x60, 0x2, 0x2, 
    0x191, 0x190, 0x3, 0x2, 0x2, 0x2, 0x192, 0x195, 0x3, 0x2, 0x2, 0x2, 
    0x193, 0x191, 0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 0x3, 0x2, 0x2, 0x2, 
    0x194, 0x197, 0x3, 0x2, 0x2, 0x2, 0x195, 0x193, 0x3, 0x2, 0x2, 0x2, 
    0x196, 0x188, 0x3, 0x2, 0x2, 0x2, 0x197, 0x19a, 0x3, 0x2, 0x2, 0x2, 
    0x198, 0x196, 0x3, 0x2, 0x2, 0x2, 0x198, 0x199, 0x3, 0x2, 0x2, 0x2, 
    0x199, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x198, 0x3, 0x2, 0x2, 0x2, 
    0x19b, 0x19d, 0x7, 0x60, 0x2, 0x2, 0x19c, 0x19b, 0x3, 0x2, 0x2, 0x2, 
    0x19d, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19c, 0x3, 0x2, 0x2, 0x2, 
    0x19e, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a1, 0x3, 0x2, 0x2, 0x2, 
    0x1a0, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a2, 0x7, 0x9f, 0x2, 0x2, 
    0x1a2, 0x15, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a7, 0x5, 0x46, 0x24, 0x2, 
    0x1a4, 0x1a6, 0x7, 0x60, 0x2, 0x2, 0x1a5, 0x1a4, 0x3, 0x2, 0x2, 0x2, 
    0x1a6, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a5, 0x3, 0x2, 0x2, 0x2, 
    0x1a7, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1aa, 0x3, 0x2, 0x2, 0x2, 
    0x1a9, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ae, 0x7, 0x97, 0x2, 0x2, 
    0x1ab, 0x1ad, 0x7, 0x60, 0x2, 0x2, 0x1ac, 0x1ab, 0x3, 0x2, 0x2, 0x2, 
    0x1ad, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1ac, 0x3, 0x2, 0x2, 0x2, 
    0x1ae, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b1, 0x3, 0x2, 0x2, 0x2, 
    0x1b0, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b5, 0x7, 0x10, 0x2, 0x2, 
    0x1b2, 0x1b4, 0x7, 0x60, 0x2, 0x2, 0x1b3, 0x1b2, 0x3, 0x2, 0x2, 0x2, 
    0x1b4, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b3, 0x3, 0x2, 0x2, 0x2, 
    0x1b5, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b8, 0x3, 0x2, 0x2, 0x2, 
    0x1b7, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1bc, 0x7, 0x9e, 0x2, 0x2, 
    0x1b9, 0x1bb, 0x7, 0x60, 0x2, 0x2, 0x1ba, 0x1b9, 0x3, 0x2, 0x2, 0x2, 
    0x1bb, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1ba, 0x3, 0x2, 0x2, 0x2, 
    0x1bc, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1cf, 0x3, 0x2, 0x2, 0x2, 
    0x1be, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c3, 0x5, 0xc, 0x7, 0x2, 
    0x1c0, 0x1c2, 0x7, 0x60, 0x2, 0x2, 0x1c1, 0x1c0, 0x3, 0x2, 0x2, 0x2, 
    0x1c2, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c1, 0x3, 0x2, 0x2, 0x2, 
    0x1c3, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c6, 0x3, 0x2, 0x2, 0x2, 
    0x1c5, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1ca, 0x7, 0x96, 0x2, 0x2, 
    0x1c7, 0x1c9, 0x7, 0x60, 0x2, 0x2, 0x1c8, 0x1c7, 0x3, 0x2, 0x2, 0x2, 
    0x1c9, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1c8, 0x3, 0x2, 0x2, 0x2, 
    0x1ca, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1ce, 0x3, 0x2, 0x2, 0x2, 
    0x1cc, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1bf, 0x3, 0x2, 0x2, 0x2, 
    0x1ce, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1cd, 0x3, 0x2, 0x2, 0x2, 
    0x1cf, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d5, 0x3, 0x2, 0x2, 0x2, 
    0x1d1, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d4, 0x7, 0x60, 0x2, 0x2, 
    0x1d3, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d7, 0x3, 0x2, 0x2, 0x2, 
    0x1d5, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d6, 0x3, 0x2, 0x2, 0x2, 
    0x1d6, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d5, 0x3, 0x2, 0x2, 0x2, 
    0x1d8, 0x1d9, 0x7, 0x9f, 0x2, 0x2, 0x1d9, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0x1da, 0x1de, 0x5, 0x46, 0x24, 0x2, 0x1db, 0x1dd, 0x7, 0x60, 0x2, 0x2, 
    0x1dc, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1e0, 0x3, 0x2, 0x2, 0x2, 
    0x1de, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1df, 0x3, 0x2, 0x2, 0x2, 
    0x1df, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1de, 0x3, 0x2, 0x2, 0x2, 
    0x1e1, 0x1e5, 0x7, 0x97, 0x2, 0x2, 0x1e2, 0x1e4, 0x7, 0x60, 0x2, 0x2, 
    0x1e3, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e7, 0x3, 0x2, 0x2, 0x2, 
    0x1e5, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e6, 0x3, 0x2, 0x2, 0x2, 
    0x1e6, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e5, 0x3, 0x2, 0x2, 0x2, 
    0x1e8, 0x1ec, 0x7, 0x11, 0x2, 0x2, 0x1e9, 0x1eb, 0x7, 0x60, 0x2, 0x2, 
    0x1ea, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ee, 0x3, 0x2, 0x2, 0x2, 
    0x1ec, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ed, 0x3, 0x2, 0x2, 0x2, 
    0x1ed, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ec, 0x3, 0x2, 0x2, 0x2, 
    0x1ef, 0x1f3, 0x7, 0x8d, 0x2, 0x2, 0x1f0, 0x1f2, 0x7, 0x60, 0x2, 0x2, 
    0x1f1, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f5, 0x3, 0x2, 0x2, 0x2, 
    0x1f3, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f4, 0x3, 0x2, 0x2, 0x2, 
    0x1f4, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f3, 0x3, 0x2, 0x2, 0x2, 
    0x1f6, 0x1fa, 0x5, 0x48, 0x25, 0x2, 0x1f7, 0x1f9, 0x7, 0x60, 0x2, 0x2, 
    0x1f8, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fc, 0x3, 0x2, 0x2, 0x2, 
    0x1fa, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fb, 0x3, 0x2, 0x2, 0x2, 
    0x1fb, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fa, 0x3, 0x2, 0x2, 0x2, 
    0x1fd, 0x1fe, 0x7, 0x8c, 0x2, 0x2, 0x1fe, 0x19, 0x3, 0x2, 0x2, 0x2, 
    0x1ff, 0x203, 0x5, 0x46, 0x24, 0x2, 0x200, 0x202, 0x7, 0x60, 0x2, 0x2, 
    0x201, 0x200, 0x3, 0x2, 0x2, 0x2, 0x202, 0x205, 0x3, 0x2, 0x2, 0x2, 
    0x203, 0x201, 0x3, 0x2, 0x2, 0x2, 0x203, 0x204, 0x3, 0x2, 0x2, 0x2, 
    0x204, 0x206, 0x3, 0x2, 0x2, 0x2, 0x205, 0x203, 0x3, 0x2, 0x2, 0x2, 
    0x206, 0x20a, 0x7, 0x97, 0x2, 0x2, 0x207, 0x209, 0x7, 0x60, 0x2, 0x2, 
    0x208, 0x207, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20c, 0x3, 0x2, 0x2, 0x2, 
    0x20a, 0x208, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20b, 0x3, 0x2, 0x2, 0x2, 
    0x20b, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20a, 0x3, 0x2, 0x2, 0x2, 
    0x20d, 0x211, 0x7, 0x12, 0x2, 0x2, 0x20e, 0x210, 0x7, 0x60, 0x2, 0x2, 
    0x20f, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x210, 0x213, 0x3, 0x2, 0x2, 0x2, 
    0x211, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x211, 0x212, 0x3, 0x2, 0x2, 0x2, 
    0x212, 0x214, 0x3, 0x2, 0x2, 0x2, 0x213, 0x211, 0x3, 0x2, 0x2, 0x2, 
    0x214, 0x218, 0x7, 0x8d, 0x2, 0x2, 0x215, 0x217, 0x7, 0x60, 0x2, 0x2, 
    0x216, 0x215, 0x3, 0x2, 0x2, 0x2, 0x217, 0x21a, 0x3, 0x2, 0x2, 0x2, 
    0x218, 0x216, 0x3, 0x2, 0x2, 0x2, 0x218, 0x219, 0x3, 0x2, 0x2, 0x2, 
    0x219, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x218, 0x3, 0x2, 0x2, 0x2, 
    0x21b, 0x21f, 0x5, 0x48, 0x25, 0x2, 0x21c, 0x21e, 0x7, 0x60, 0x2, 0x2, 
    0x21d, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x221, 0x3, 0x2, 0x2, 0x2, 
    0x21f, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 0x3, 0x2, 0x2, 0x2, 
    0x220, 0x222, 0x3, 0x2, 0x2, 0x2, 0x221, 0x21f, 0x3, 0x2, 0x2, 0x2, 
    0x222, 0x226, 0x7, 0x95, 0x2, 0x2, 0x223, 0x225, 0x7, 0x60, 0x2, 0x2, 
    0x224, 0x223, 0x3, 0x2, 0x2, 0x2, 0x225, 0x228, 0x3, 0x2, 0x2, 0x2, 
    0x226, 0x224, 0x3, 0x2, 0x2, 0x2, 0x226, 0x227, 0x3, 0x2, 0x2, 0x2, 
    0x227, 0x229, 0x3, 0x2, 0x2, 0x2, 0x228, 0x226, 0x3, 0x2, 0x2, 0x2, 
    0x229, 0x22d, 0x5, 0x48, 0x25, 0x2, 0x22a, 0x22c, 0x7, 0x60, 0x2, 0x2, 
    0x22b, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22f, 0x3, 0x2, 0x2, 0x2, 
    0x22d, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x22e, 0x3, 0x2, 0x2, 0x2, 
    0x22e, 0x230, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x22d, 0x3, 0x2, 0x2, 0x2, 
    0x230, 0x231, 0x7, 0x8c, 0x2, 0x2, 0x231, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x232, 0x236, 0x7, 0xe, 0x2, 0x2, 0x233, 0x235, 0x7, 0x60, 0x2, 0x2, 
    0x234, 0x233, 0x3, 0x2, 0x2, 0x2, 0x235, 0x238, 0x3, 0x2, 0x2, 0x2, 
    0x236, 0x234, 0x3, 0x2, 0x2, 0x2, 0x236, 0x237, 0x3, 0x2, 0x2, 0x2, 
    0x237, 0x239, 0x3, 0x2, 0x2, 0x2, 0x238, 0x236, 0x3, 0x2, 0x2, 0x2, 
    0x239, 0x23d, 0x7, 0x89, 0x2, 0x2, 0x23a, 0x23c, 0x7, 0x60, 0x2, 0x2, 
    0x23b, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23f, 0x3, 0x2, 0x2, 0x2, 
    0x23d, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x23e, 0x3, 0x2, 0x2, 0x2, 
    0x23e, 0x240, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x23d, 0x3, 0x2, 0x2, 0x2, 
    0x240, 0x244, 0x5, 0x46, 0x24, 0x2, 0x241, 0x243, 0x7, 0x60, 0x2, 0x2, 
    0x242, 0x241, 0x3, 0x2, 0x2, 0x2, 0x243, 0x246, 0x3, 0x2, 0x2, 0x2, 
    0x244, 0x242, 0x3, 0x2, 0x2, 0x2, 0x244, 0x245, 0x3, 0x2, 0x2, 0x2, 
    0x245, 0x247, 0x3, 0x2, 0x2, 0x2, 0x246, 0x244, 0x3, 0x2, 0x2, 0x2, 
    0x247, 0x248, 0x7, 0x96, 0x2, 0x2, 0x248, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x249, 0x24b, 0x7, 0xa, 0x2, 0x2, 0x24a, 0x24c, 0x7, 0x60, 0x2, 0x2, 
    0x24b, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24d, 0x3, 0x2, 0x2, 0x2, 
    0x24d, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x24e, 0x3, 0x2, 0x2, 0x2, 
    0x24e, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x253, 0x5, 0x24, 0x13, 0x2, 
    0x250, 0x252, 0x7, 0x60, 0x2, 0x2, 0x251, 0x250, 0x3, 0x2, 0x2, 0x2, 
    0x252, 0x255, 0x3, 0x2, 0x2, 0x2, 0x253, 0x251, 0x3, 0x2, 0x2, 0x2, 
    0x253, 0x254, 0x3, 0x2, 0x2, 0x2, 0x254, 0x256, 0x3, 0x2, 0x2, 0x2, 
    0x255, 0x253, 0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 0x7, 0x96, 0x2, 0x2, 
    0x257, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x258, 0x25a, 0x7, 0xf, 0x2, 0x2, 0x259, 
    0x25b, 0x7, 0x60, 0x2, 0x2, 0x25a, 0x259, 0x3, 0x2, 0x2, 0x2, 0x25b, 
    0x25c, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x25c, 
    0x25d, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x25e, 
    0x262, 0x5, 0x22, 0x12, 0x2, 0x25f, 0x261, 0x7, 0x60, 0x2, 0x2, 0x260, 
    0x25f, 0x3, 0x2, 0x2, 0x2, 0x261, 0x264, 0x3, 0x2, 0x2, 0x2, 0x262, 
    0x260, 0x3, 0x2, 0x2, 0x2, 0x262, 0x263, 0x3, 0x2, 0x2, 0x2, 0x263, 
    0x265, 0x3, 0x2, 0x2, 0x2, 0x264, 0x262, 0x3, 0x2, 0x2, 0x2, 0x265, 
    0x266, 0x7, 0x96, 0x2, 0x2, 0x266, 0x21, 0x3, 0x2, 0x2, 0x2, 0x267, 
    0x269, 0x5, 0x24, 0x13, 0x2, 0x268, 0x267, 0x3, 0x2, 0x2, 0x2, 0x268, 
    0x269, 0x3, 0x2, 0x2, 0x2, 0x269, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x26a, 
    0x26c, 0x7, 0x98, 0x2, 0x2, 0x26b, 0x268, 0x3, 0x2, 0x2, 0x2, 0x26b, 
    0x26c, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x26d, 
    0x27e, 0x7, 0x76, 0x2, 0x2, 0x26e, 0x27a, 0x7, 0x9e, 0x2, 0x2, 0x26f, 
    0x274, 0x5, 0x22, 0x12, 0x2, 0x270, 0x271, 0x7, 0x95, 0x2, 0x2, 0x271, 
    0x273, 0x5, 0x22, 0x12, 0x2, 0x272, 0x270, 0x3, 0x2, 0x2, 0x2, 0x273, 
    0x276, 0x3, 0x2, 0x2, 0x2, 0x274, 0x272, 0x3, 0x2, 0x2, 0x2, 0x274, 
    0x275, 0x3, 0x2, 0x2, 0x2, 0x275, 0x278, 0x3, 0x2, 0x2, 0x2, 0x276, 
    0x274, 0x3, 0x2, 0x2, 0x2, 0x277, 0x279, 0x7, 0x95, 0x2, 0x2, 0x278, 
    0x277, 0x3, 0x2, 0x2, 0x2, 0x278, 0x279, 0x3, 0x2, 0x2, 0x2, 0x279, 
    0x27b, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x27a, 
    0x27b, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x27c, 
    0x27e, 0x7, 0x9f, 0x2, 0x2, 0x27d, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x27d, 
    0x26e, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x285, 0x3, 0x2, 0x2, 0x2, 0x27f, 
    0x282, 0x5, 0x24, 0x13, 0x2, 0x280, 0x281, 0x7, 0x4, 0x2, 0x2, 0x281, 
    0x283, 0x5, 0x46, 0x24, 0x2, 0x282, 0x280, 0x3, 0x2, 0x2, 0x2, 0x282, 
    0x283, 0x3, 0x2, 0x2, 0x2, 0x283, 0x285, 0x3, 0x2, 0x2, 0x2, 0x284, 
    0x26b, 0x3, 0x2, 0x2, 0x2, 0x284, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x285, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x286, 0x288, 0x7, 0x98, 0x2, 0x2, 0x287, 
    0x286, 0x3, 0x2, 0x2, 0x2, 0x287, 0x288, 0x3, 0x2, 0x2, 0x2, 0x288, 
    0x289, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28e, 0x5, 0x46, 0x24, 0x2, 0x28a, 
    0x28b, 0x7, 0x98, 0x2, 0x2, 0x28b, 0x28d, 0x5, 0x46, 0x24, 0x2, 0x28c, 
    0x28a, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x290, 0x3, 0x2, 0x2, 0x2, 0x28e, 
    0x28c, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x28f, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0x290, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x291, 0x29f, 
    0x5, 0x28, 0x15, 0x2, 0x292, 0x29f, 0x5, 0x2a, 0x16, 0x2, 0x293, 0x29f, 
    0x5, 0x2c, 0x17, 0x2, 0x294, 0x29f, 0x5, 0x2e, 0x18, 0x2, 0x295, 0x29f, 
    0x5, 0x30, 0x19, 0x2, 0x296, 0x29f, 0x5, 0x32, 0x1a, 0x2, 0x297, 0x29f, 
    0x5, 0x34, 0x1b, 0x2, 0x298, 0x29f, 0x5, 0x36, 0x1c, 0x2, 0x299, 0x29f, 
    0x5, 0x38, 0x1d, 0x2, 0x29a, 0x29f, 0x5, 0x3a, 0x1e, 0x2, 0x29b, 0x29f, 
    0x5, 0x3c, 0x1f, 0x2, 0x29c, 0x29f, 0x5, 0x3e, 0x20, 0x2, 0x29d, 0x29f, 
    0x5, 0x40, 0x21, 0x2, 0x29e, 0x291, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x292, 
    0x3, 0x2, 0x2, 0x2, 0x29e, 0x293, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x294, 
    0x3, 0x2, 0x2, 0x2, 0x29e, 0x295, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x296, 
    0x3, 0x2, 0x2, 0x2, 0x29e, 0x297, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x298, 
    0x3, 0x2, 0x2, 0x2, 0x29e, 0x299, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29a, 
    0x3, 0x2, 0x2, 0x2, 0x29e, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29c, 
    0x3, 0x2, 0x2, 0x2, 0x29e, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x29f, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0x2a0, 0x2a1, 0x9, 0x2, 0x2, 0x2, 0x2a1, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0x2a2, 0x2a3, 0x7, 0x61, 0x2, 0x2, 0x2a3, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0x2a4, 0x2a5, 0x9, 0x3, 0x2, 0x2, 0x2a5, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x2a6, 0x2a7, 0x5, 0x42, 0x22, 0x2, 0x2a7, 0x2a8, 0x7, 0x4d, 0x2, 
    0x2, 0x2a8, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2aa, 0x5, 0x42, 0x22, 
    0x2, 0x2aa, 0x2ab, 0x7, 0x4e, 0x2, 0x2, 0x2ab, 0x31, 0x3, 0x2, 0x2, 
    0x2, 0x2ac, 0x2ad, 0x5, 0x44, 0x23, 0x2, 0x2ad, 0x2ae, 0x7, 0x4f, 0x2, 
    0x2, 0x2ae, 0x33, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2b0, 0x5, 0x44, 0x23, 
    0x2, 0x2b0, 0x2b1, 0x7, 0x50, 0x2, 0x2, 0x2b1, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x2b2, 0x2b3, 0x5, 0x44, 0x23, 0x2, 0x2b3, 0x2b4, 0x7, 0x51, 0x2, 
    0x2, 0x2b4, 0x37, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b6, 0x5, 0x44, 0x23, 
    0x2, 0x2b6, 0x2b7, 0x7, 0x52, 0x2, 0x2, 0x2b7, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x2b8, 0x2b9, 0x5, 0x44, 0x23, 0x2, 0x2b9, 0x2ba, 0x7, 0x53, 0x2, 
    0x2, 0x2ba, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x2bb, 0x2bc, 0x5, 0x44, 0x23, 
    0x2, 0x2bc, 0x2bd, 0x7, 0x54, 0x2, 0x2, 0x2bd, 0x3d, 0x3, 0x2, 0x2, 
    0x2, 0x2be, 0x2bf, 0x5, 0x44, 0x23, 0x2, 0x2bf, 0x2c0, 0x7, 0x55, 0x2, 
    0x2, 0x2c0, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2c2, 0x5, 0x44, 0x23, 
    0x2, 0x2c2, 0x2c3, 0x7, 0x56, 0x2, 0x2, 0x2c3, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x2c4, 0x2c5, 0x7, 0x6c, 0x2, 0x2, 0x2c5, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x2c6, 0x2c8, 0x7, 0x75, 0x2, 0x2, 0x2c7, 0x2c6, 0x3, 0x2, 0x2, 
    0x2, 0x2c7, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2c9, 0x3, 0x2, 0x2, 
    0x2, 0x2c9, 0x2d1, 0x9, 0x4, 0x2, 0x2, 0x2ca, 0x2cb, 0x7, 0x70, 0x2, 
    0x2, 0x2cb, 0x2d1, 0x9, 0x5, 0x2, 0x2, 0x2cc, 0x2cd, 0x7, 0x71, 0x2, 
    0x2, 0x2cd, 0x2d1, 0x9, 0x6, 0x2, 0x2, 0x2ce, 0x2cf, 0x7, 0x72, 0x2, 
    0x2, 0x2cf, 0x2d1, 0x9, 0x7, 0x2, 0x2, 0x2d0, 0x2c7, 0x3, 0x2, 0x2, 
    0x2, 0x2d0, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2cc, 0x3, 0x2, 0x2, 
    0x2, 0x2d0, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x45, 0x3, 0x2, 0x2, 0x2, 
    0x2d2, 0x2d6, 0x7, 0x57, 0x2, 0x2, 0x2d3, 0x2d4, 0x7, 0x73, 0x2, 0x2, 
    0x2d4, 0x2d6, 0x7, 0x57, 0x2, 0x2, 0x2d5, 0x2d2, 0x3, 0x2, 0x2, 0x2, 
    0x2d5, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2d6, 0x47, 0x3, 0x2, 0x2, 0x2, 0x2d7, 
    0x2d8, 0x9, 0x8, 0x2, 0x2, 0x2d8, 0x49, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2da, 
    0x9, 0x9, 0x2, 0x2, 0x2da, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x4f, 0x56, 
    0x5a, 0x5f, 0x65, 0x6b, 0x71, 0x77, 0x80, 0x87, 0x8e, 0x95, 0x9c, 0xa1, 
    0xa7, 0xb0, 0xb7, 0xbe, 0xc5, 0xcc, 0xd1, 0xda, 0xe1, 0xe8, 0xef, 0xf8, 
    0xff, 0x106, 0x10d, 0x114, 0x11b, 0x122, 0x128, 0x12d, 0x137, 0x13d, 
    0x144, 0x14b, 0x152, 0x157, 0x15d, 0x164, 0x168, 0x16a, 0x170, 0x177, 
    0x17e, 0x185, 0x18c, 0x193, 0x198, 0x19e, 0x1a7, 0x1ae, 0x1b5, 0x1bc, 
    0x1c3, 0x1ca, 0x1cf, 0x1d5, 0x1de, 0x1e5, 0x1ec, 0x1f3, 0x1fa, 0x203, 
    0x20a, 0x211, 0x218, 0x21f, 0x226, 0x22d, 0x236, 0x23d, 0x244, 0x24d, 
    0x253, 0x25c, 0x262, 0x268, 0x26b, 0x274, 0x278, 0x27a, 0x27d, 0x282, 
    0x284, 0x287, 0x28e, 0x29e, 0x2c7, 0x2d0, 0x2d5, 
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
