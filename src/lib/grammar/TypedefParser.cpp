
#include "symbol_table.h"


// Generated from ./src/lib/grammar/TypedefParser.g4 by ANTLR 4.7.2


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
#include "parser_helpers.h"


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
    setState(104);
    dynamic_cast<CompilationUnitContext *>(_localctx)->typedefVersionDeclarationContext = typedefVersionDeclaration();
     dynamic_cast<CompilationUnitContext *>(_localctx)->version =  dynamic_cast<CompilationUnitContext *>(_localctx)->typedefVersionDeclarationContext->version; 
    setState(109);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(106);
        match(TypedefParser::WS); 
      }
      setState(111);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(115);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::KW_MODULE) {
      setState(112);
      dynamic_cast<CompilationUnitContext *>(_localctx)->moduleDeclarationContext = moduleDeclaration();
       dynamic_cast<CompilationUnitContext *>(_localctx)->module =  dynamic_cast<CompilationUnitContext *>(_localctx)->moduleDeclarationContext->module; 
    }
    setState(126);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(120);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(117);
          match(TypedefParser::WS);
          setState(122);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(123);
        useDeclaration(); 
      }
      setState(128);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
    setState(140);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(132);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(129);
          match(TypedefParser::WS);
          setState(134);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(135);
        dynamic_cast<CompilationUnitContext *>(_localctx)->typeDeclarationContext = typeDeclaration();

        		TryInsert(_localctx->symbol_table, dynamic_cast<CompilationUnitContext *>(_localctx)->typeDeclarationContext, this);
        	 
      }
      setState(142);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
    setState(146);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(143);
      match(TypedefParser::WS);
      setState(148);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(149);
    match(TypedefParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MaybeValuedSymbolDeclarationContext ------------------------------------------------------------------

TypedefParser::MaybeValuedSymbolDeclarationContext::MaybeValuedSymbolDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::MaybeValuedSymbolContext* TypedefParser::MaybeValuedSymbolDeclarationContext::maybeValuedSymbol() {
  return getRuleContext<TypedefParser::MaybeValuedSymbolContext>(0);
}

tree::TerminalNode* TypedefParser::MaybeValuedSymbolDeclarationContext::SEMI() {
  return getToken(TypedefParser::SEMI, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::MaybeValuedSymbolDeclarationContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::MaybeValuedSymbolDeclarationContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::MaybeValuedSymbolDeclarationContext::getRuleIndex() const {
  return TypedefParser::RuleMaybeValuedSymbolDeclaration;
}

void TypedefParser::MaybeValuedSymbolDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMaybeValuedSymbolDeclaration(this);
}

void TypedefParser::MaybeValuedSymbolDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMaybeValuedSymbolDeclaration(this);
}


antlrcpp::Any TypedefParser::MaybeValuedSymbolDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitMaybeValuedSymbolDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::MaybeValuedSymbolDeclarationContext* TypedefParser::maybeValuedSymbolDeclaration() {
  MaybeValuedSymbolDeclarationContext *_localctx = _tracker.createInstance<MaybeValuedSymbolDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, TypedefParser::RuleMaybeValuedSymbolDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(151);
    maybeValuedSymbol();
    setState(155);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(152);
      match(TypedefParser::WS);
      setState(157);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
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
  enterRule(_localctx, 4, TypedefParser::RuleTypeDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(172);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::KW_STRUCT: {
        setState(160);
        dynamic_cast<TypeDeclarationContext *>(_localctx)->structDeclarationContext = structDeclaration();
         dynamic_cast<TypeDeclarationContext *>(_localctx)->maybe_symbol =  dynamic_cast<TypeDeclarationContext *>(_localctx)->structDeclarationContext->maybe_symbol; 
        break;
      }

      case TypedefParser::KW_VARIANT: {
        setState(163);
        dynamic_cast<TypeDeclarationContext *>(_localctx)->variantDeclarationContext = variantDeclaration();
         dynamic_cast<TypeDeclarationContext *>(_localctx)->maybe_symbol =  dynamic_cast<TypeDeclarationContext *>(_localctx)->variantDeclarationContext->maybe_symbol; 
        break;
      }

      case TypedefParser::KW_VECTOR: {
        setState(166);
        dynamic_cast<TypeDeclarationContext *>(_localctx)->vectorDeclarationContext = vectorDeclaration();
         dynamic_cast<TypeDeclarationContext *>(_localctx)->maybe_symbol =  dynamic_cast<TypeDeclarationContext *>(_localctx)->vectorDeclarationContext->maybe_symbol; 
        break;
      }

      case TypedefParser::KW_MAP: {
        setState(169);
        dynamic_cast<TypeDeclarationContext *>(_localctx)->mapDeclarationContext = mapDeclaration();
         dynamic_cast<TypeDeclarationContext *>(_localctx)->maybe_symbol =  dynamic_cast<TypeDeclarationContext *>(_localctx)->mapDeclarationContext->maybe_symbol; 
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(177);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(174);
      match(TypedefParser::WS);
      setState(179);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(180);
    match(TypedefParser::SEMI);
   
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

std::vector<TypedefParser::MaybeValuedSymbolContext *> TypedefParser::StructDeclarationContext::maybeValuedSymbol() {
  return getRuleContexts<TypedefParser::MaybeValuedSymbolContext>();
}

TypedefParser::MaybeValuedSymbolContext* TypedefParser::StructDeclarationContext::maybeValuedSymbol(size_t i) {
  return getRuleContext<TypedefParser::MaybeValuedSymbolContext>(i);
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
  enterRule(_localctx, 6, TypedefParser::RuleStructDeclaration);

  		dynamic_cast<StructDeclarationContext *>(_localctx)->s =  std::make_shared<td::Struct>();
  	
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(182);
    match(TypedefParser::KW_STRUCT);
    setState(186);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(183);
      match(TypedefParser::WS);
      setState(188);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(189);
    dynamic_cast<StructDeclarationContext *>(_localctx)->identifierContext = identifier();
    setState(193);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(190);
      match(TypedefParser::WS);
      setState(195);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(196);
    match(TypedefParser::LBRACE);
    setState(200);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(197);
        match(TypedefParser::WS); 
      }
      setState(202);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
    setState(220);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::NON_KEYWORD_IDENTIFIER

    || _la == TypedefParser::RAW_ESCAPE) {
      setState(203);
      dynamic_cast<StructDeclarationContext *>(_localctx)->maybeValuedSymbolContext = maybeValuedSymbol();

      				TryInsertSymbol(_localctx->s, this, dynamic_cast<StructDeclarationContext *>(_localctx)->maybeValuedSymbolContext);
      			
      setState(208);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(205);
        match(TypedefParser::WS);
        setState(210);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(211);
      match(TypedefParser::SEMI);
      setState(215);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(212);
          match(TypedefParser::WS); 
        }
        setState(217);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
      }
      setState(222);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(226);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(223);
      match(TypedefParser::WS);
      setState(228);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(229);
    match(TypedefParser::RBRACE);

    		dynamic_cast<StructDeclarationContext *>(_localctx)->maybe_symbol =  std::make_pair(dynamic_cast<StructDeclarationContext *>(_localctx)->identifierContext->id, _localctx->s);
    	
   
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

std::vector<TypedefParser::UnvaluedSymbolContext *> TypedefParser::VariantDeclarationContext::unvaluedSymbol() {
  return getRuleContexts<TypedefParser::UnvaluedSymbolContext>();
}

TypedefParser::UnvaluedSymbolContext* TypedefParser::VariantDeclarationContext::unvaluedSymbol(size_t i) {
  return getRuleContext<TypedefParser::UnvaluedSymbolContext>(i);
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
  enterRule(_localctx, 8, TypedefParser::RuleVariantDeclaration);

  		dynamic_cast<VariantDeclarationContext *>(_localctx)->v =  std::make_shared<td::Variant>();
  	
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(232);
    match(TypedefParser::KW_VARIANT);
    setState(236);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(233);
      match(TypedefParser::WS);
      setState(238);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(239);
    dynamic_cast<VariantDeclarationContext *>(_localctx)->identifierContext = identifier();
    setState(243);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(240);
      match(TypedefParser::WS);
      setState(245);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(246);
    match(TypedefParser::LBRACE);
    setState(270);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 84) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 84)) & ((1ULL << (TypedefParser::NON_KEYWORD_IDENTIFIER - 84))
      | (1ULL << (TypedefParser::WS - 84))
      | (1ULL << (TypedefParser::RAW_ESCAPE - 84)))) != 0)) {
      setState(250);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(247);
        match(TypedefParser::WS);
        setState(252);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(253);
      dynamic_cast<VariantDeclarationContext *>(_localctx)->unvaluedSymbolContext = unvaluedSymbol();

      				TryInsertSymbol(_localctx->v, this, dynamic_cast<VariantDeclarationContext *>(_localctx)->unvaluedSymbolContext);
      			
      setState(258);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(255);
        match(TypedefParser::WS);
        setState(260);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(261);
      match(TypedefParser::SEMI);
      setState(265);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(262);
          match(TypedefParser::WS); 
        }
        setState(267);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
      }
      setState(272);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(273);
    match(TypedefParser::RBRACE);

    		dynamic_cast<VariantDeclarationContext *>(_localctx)->maybe_symbol =  std::make_pair(dynamic_cast<VariantDeclarationContext *>(_localctx)->identifierContext->id, _localctx->v);
    	
   
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

TypedefParser::UnvaluedTypeContext* TypedefParser::VectorDeclarationContext::unvaluedType() {
  return getRuleContext<TypedefParser::UnvaluedTypeContext>(0);
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
  enterRule(_localctx, 10, TypedefParser::RuleVectorDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(276);
    match(TypedefParser::KW_VECTOR);
    setState(280);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(277);
      match(TypedefParser::WS);
      setState(282);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(283);
    dynamic_cast<VectorDeclarationContext *>(_localctx)->identifierContext = identifier();
    setState(287);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(284);
      match(TypedefParser::WS);
      setState(289);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(290);
    match(TypedefParser::LT);
    setState(294);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(291);
      match(TypedefParser::WS);
      setState(296);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(297);
    dynamic_cast<VectorDeclarationContext *>(_localctx)->val = dynamic_cast<VectorDeclarationContext *>(_localctx)->unvaluedTypeContext = unvaluedType();
    setState(301);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(298);
      match(TypedefParser::WS);
      setState(303);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(304);
    match(TypedefParser::GT);

    		if (dynamic_cast<VectorDeclarationContext *>(_localctx)->unvaluedTypeContext->maybe_val) {
    			dynamic_cast<VectorDeclarationContext *>(_localctx)->maybe_symbol =  std::make_pair(dynamic_cast<VectorDeclarationContext *>(_localctx)->identifierContext->id,
    			  std::make_shared<td::Vector>(*dynamic_cast<VectorDeclarationContext *>(_localctx)->val->maybe_val));
    		}
    	
   
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

TypedefParser::PrimitiveTypeContext* TypedefParser::MapDeclarationContext::primitiveType() {
  return getRuleContext<TypedefParser::PrimitiveTypeContext>(0);
}

TypedefParser::UnvaluedTypeContext* TypedefParser::MapDeclarationContext::unvaluedType() {
  return getRuleContext<TypedefParser::UnvaluedTypeContext>(0);
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
  enterRule(_localctx, 12, TypedefParser::RuleMapDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(307);
    match(TypedefParser::KW_MAP);
    setState(311);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(308);
      match(TypedefParser::WS);
      setState(313);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(314);
    dynamic_cast<MapDeclarationContext *>(_localctx)->identifierContext = identifier();
    setState(318);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(315);
      match(TypedefParser::WS);
      setState(320);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(321);
    match(TypedefParser::LT);
    setState(325);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(322);
      match(TypedefParser::WS);
      setState(327);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(328);
    dynamic_cast<MapDeclarationContext *>(_localctx)->key = primitiveType();
    setState(332);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(329);
      match(TypedefParser::WS);
      setState(334);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(335);
    match(TypedefParser::COMMA);
    setState(339);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(336);
      match(TypedefParser::WS);
      setState(341);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(342);
    dynamic_cast<MapDeclarationContext *>(_localctx)->val = unvaluedType();
    setState(346);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(343);
      match(TypedefParser::WS);
      setState(348);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(349);
    match(TypedefParser::GT);

    		// Map Declaration
    		if (dynamic_cast<MapDeclarationContext *>(_localctx)->key->maybe_val && dynamic_cast<MapDeclarationContext *>(_localctx)->val->maybe_val) {
    			dynamic_cast<MapDeclarationContext *>(_localctx)->maybe_symbol =  std::make_pair(dynamic_cast<MapDeclarationContext *>(_localctx)->identifierContext->id,
    			  std::make_shared<td::Map>(
    					*dynamic_cast<MapDeclarationContext *>(_localctx)->key->maybe_val, *dynamic_cast<MapDeclarationContext *>(_localctx)->val->maybe_val));
    		}
    	
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MaybeValuedSymbolContext ------------------------------------------------------------------

TypedefParser::MaybeValuedSymbolContext::MaybeValuedSymbolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::MaybeValuedSymbolContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

TypedefParser::MaybeValuedTypeContext* TypedefParser::MaybeValuedSymbolContext::maybeValuedType() {
  return getRuleContext<TypedefParser::MaybeValuedTypeContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::MaybeValuedSymbolContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::MaybeValuedSymbolContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}

TypedefParser::UnvaluedSymbolContext* TypedefParser::MaybeValuedSymbolContext::unvaluedSymbol() {
  return getRuleContext<TypedefParser::UnvaluedSymbolContext>(0);
}


size_t TypedefParser::MaybeValuedSymbolContext::getRuleIndex() const {
  return TypedefParser::RuleMaybeValuedSymbol;
}

void TypedefParser::MaybeValuedSymbolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMaybeValuedSymbol(this);
}

void TypedefParser::MaybeValuedSymbolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMaybeValuedSymbol(this);
}


antlrcpp::Any TypedefParser::MaybeValuedSymbolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitMaybeValuedSymbol(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::MaybeValuedSymbolContext* TypedefParser::maybeValuedSymbol() {
  MaybeValuedSymbolContext *_localctx = _tracker.createInstance<MaybeValuedSymbolContext>(_ctx, getState());
  enterRule(_localctx, 14, TypedefParser::RuleMaybeValuedSymbol);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(371);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(352);
      dynamic_cast<MaybeValuedSymbolContext *>(_localctx)->identifierContext = identifier();
      setState(356);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(353);
          match(TypedefParser::WS); 
        }
        setState(358);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
      }
      setState(359);
      dynamic_cast<MaybeValuedSymbolContext *>(_localctx)->maybeValuedTypeContext = maybeValuedType();
      setState(363);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(360);
          match(TypedefParser::WS); 
        }
        setState(365);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
      }

      		if (dynamic_cast<MaybeValuedSymbolContext *>(_localctx)->maybeValuedTypeContext->maybe_val) {
      			dynamic_cast<MaybeValuedSymbolContext *>(_localctx)->maybe_symbol =  std::make_pair(dynamic_cast<MaybeValuedSymbolContext *>(_localctx)->identifierContext->id, *dynamic_cast<MaybeValuedSymbolContext *>(_localctx)->maybeValuedTypeContext->maybe_val);
      		}
      	
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(368);
      dynamic_cast<MaybeValuedSymbolContext *>(_localctx)->unvaluedSymbolContext = unvaluedSymbol();
      dynamic_cast<MaybeValuedSymbolContext *>(_localctx)->maybe_symbol =  dynamic_cast<MaybeValuedSymbolContext *>(_localctx)->unvaluedSymbolContext->maybe_symbol; 
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

//----------------- UnvaluedSymbolContext ------------------------------------------------------------------

TypedefParser::UnvaluedSymbolContext::UnvaluedSymbolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::InlineStructContext* TypedefParser::UnvaluedSymbolContext::inlineStruct() {
  return getRuleContext<TypedefParser::InlineStructContext>(0);
}

TypedefParser::InlineVariantContext* TypedefParser::UnvaluedSymbolContext::inlineVariant() {
  return getRuleContext<TypedefParser::InlineVariantContext>(0);
}

TypedefParser::InlineVectorContext* TypedefParser::UnvaluedSymbolContext::inlineVector() {
  return getRuleContext<TypedefParser::InlineVectorContext>(0);
}

TypedefParser::InlineMapContext* TypedefParser::UnvaluedSymbolContext::inlineMap() {
  return getRuleContext<TypedefParser::InlineMapContext>(0);
}

TypedefParser::IdentifierContext* TypedefParser::UnvaluedSymbolContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::UnvaluedSymbolContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

TypedefParser::UnvaluedTypeContext* TypedefParser::UnvaluedSymbolContext::unvaluedType() {
  return getRuleContext<TypedefParser::UnvaluedTypeContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::UnvaluedSymbolContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::UnvaluedSymbolContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::UnvaluedSymbolContext::getRuleIndex() const {
  return TypedefParser::RuleUnvaluedSymbol;
}

void TypedefParser::UnvaluedSymbolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnvaluedSymbol(this);
}

void TypedefParser::UnvaluedSymbolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnvaluedSymbol(this);
}


antlrcpp::Any TypedefParser::UnvaluedSymbolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitUnvaluedSymbol(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::UnvaluedSymbolContext* TypedefParser::unvaluedSymbol() {
  UnvaluedSymbolContext *_localctx = _tracker.createInstance<UnvaluedSymbolContext>(_ctx, getState());
  enterRule(_localctx, 16, TypedefParser::RuleUnvaluedSymbol);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(402);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(373);
      dynamic_cast<UnvaluedSymbolContext *>(_localctx)->inlineStructContext = inlineStruct();
      dynamic_cast<UnvaluedSymbolContext *>(_localctx)->maybe_symbol =  dynamic_cast<UnvaluedSymbolContext *>(_localctx)->inlineStructContext->maybe_symbol; 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(376);
      dynamic_cast<UnvaluedSymbolContext *>(_localctx)->inlineVariantContext = inlineVariant();
      dynamic_cast<UnvaluedSymbolContext *>(_localctx)->maybe_symbol =  dynamic_cast<UnvaluedSymbolContext *>(_localctx)->inlineVariantContext->maybe_symbol; 
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(379);
      dynamic_cast<UnvaluedSymbolContext *>(_localctx)->inlineVectorContext = inlineVector();
      dynamic_cast<UnvaluedSymbolContext *>(_localctx)->maybe_symbol =  dynamic_cast<UnvaluedSymbolContext *>(_localctx)->inlineVectorContext->maybe_symbol; 
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(382);
      dynamic_cast<UnvaluedSymbolContext *>(_localctx)->inlineMapContext = inlineMap();
      dynamic_cast<UnvaluedSymbolContext *>(_localctx)->maybe_symbol =  dynamic_cast<UnvaluedSymbolContext *>(_localctx)->inlineMapContext->maybe_symbol; 
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(385);
      dynamic_cast<UnvaluedSymbolContext *>(_localctx)->identifierContext = identifier();
      setState(389);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(386);
        match(TypedefParser::WS);
        setState(391);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(392);
      match(TypedefParser::COLON);
      setState(396);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(393);
        match(TypedefParser::WS);
        setState(398);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(399);
      dynamic_cast<UnvaluedSymbolContext *>(_localctx)->unvaluedTypeContext = unvaluedType();

      		if (dynamic_cast<UnvaluedSymbolContext *>(_localctx)->unvaluedTypeContext->maybe_val) {
      			dynamic_cast<UnvaluedSymbolContext *>(_localctx)->maybe_symbol =  std::make_pair(dynamic_cast<UnvaluedSymbolContext *>(_localctx)->identifierContext->id, *dynamic_cast<UnvaluedSymbolContext *>(_localctx)->unvaluedTypeContext->maybe_val);
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

//----------------- InlineStructContext ------------------------------------------------------------------

TypedefParser::InlineStructContext::InlineStructContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::InlineStructContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::InlineStructContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

tree::TerminalNode* TypedefParser::InlineStructContext::KW_STRUCT() {
  return getToken(TypedefParser::KW_STRUCT, 0);
}

tree::TerminalNode* TypedefParser::InlineStructContext::LBRACE() {
  return getToken(TypedefParser::LBRACE, 0);
}

tree::TerminalNode* TypedefParser::InlineStructContext::RBRACE() {
  return getToken(TypedefParser::RBRACE, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::InlineStructContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::InlineStructContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}

std::vector<TypedefParser::MaybeValuedSymbolContext *> TypedefParser::InlineStructContext::maybeValuedSymbol() {
  return getRuleContexts<TypedefParser::MaybeValuedSymbolContext>();
}

TypedefParser::MaybeValuedSymbolContext* TypedefParser::InlineStructContext::maybeValuedSymbol(size_t i) {
  return getRuleContext<TypedefParser::MaybeValuedSymbolContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::InlineStructContext::SEMI() {
  return getTokens(TypedefParser::SEMI);
}

tree::TerminalNode* TypedefParser::InlineStructContext::SEMI(size_t i) {
  return getToken(TypedefParser::SEMI, i);
}


size_t TypedefParser::InlineStructContext::getRuleIndex() const {
  return TypedefParser::RuleInlineStruct;
}

void TypedefParser::InlineStructContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineStruct(this);
}

void TypedefParser::InlineStructContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineStruct(this);
}


antlrcpp::Any TypedefParser::InlineStructContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitInlineStruct(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::InlineStructContext* TypedefParser::inlineStruct() {
  InlineStructContext *_localctx = _tracker.createInstance<InlineStructContext>(_ctx, getState());
  enterRule(_localctx, 18, TypedefParser::RuleInlineStruct);

  		dynamic_cast<InlineStructContext *>(_localctx)->s =  std::make_shared<td::Struct>();
  	
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(404);
    dynamic_cast<InlineStructContext *>(_localctx)->identifierContext = identifier();
    setState(408);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(405);
      match(TypedefParser::WS);
      setState(410);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(411);
    match(TypedefParser::COLON);
    setState(415);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(412);
      match(TypedefParser::WS);
      setState(417);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(418);
    match(TypedefParser::KW_STRUCT);
    setState(422);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(419);
      match(TypedefParser::WS);
      setState(424);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(425);
    match(TypedefParser::LBRACE);
    setState(429);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(426);
        match(TypedefParser::WS); 
      }
      setState(431);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    }
    setState(449);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::NON_KEYWORD_IDENTIFIER

    || _la == TypedefParser::RAW_ESCAPE) {
      setState(432);
      dynamic_cast<InlineStructContext *>(_localctx)->maybeValuedSymbolContext = maybeValuedSymbol();

      				TryInsertSymbol(_localctx->s, this, dynamic_cast<InlineStructContext *>(_localctx)->maybeValuedSymbolContext);
      			
      setState(437);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(434);
        match(TypedefParser::WS);
        setState(439);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(440);
      match(TypedefParser::SEMI);
      setState(444);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(441);
          match(TypedefParser::WS); 
        }
        setState(446);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
      }
      setState(451);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(455);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(452);
      match(TypedefParser::WS);
      setState(457);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(458);
    match(TypedefParser::RBRACE);

    		dynamic_cast<InlineStructContext *>(_localctx)->maybe_symbol =  std::make_pair(dynamic_cast<InlineStructContext *>(_localctx)->identifierContext->id, _localctx->s);
    	
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InlineVariantContext ------------------------------------------------------------------

TypedefParser::InlineVariantContext::InlineVariantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::InlineVariantContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::InlineVariantContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

tree::TerminalNode* TypedefParser::InlineVariantContext::KW_VARIANT() {
  return getToken(TypedefParser::KW_VARIANT, 0);
}

tree::TerminalNode* TypedefParser::InlineVariantContext::LBRACE() {
  return getToken(TypedefParser::LBRACE, 0);
}

tree::TerminalNode* TypedefParser::InlineVariantContext::RBRACE() {
  return getToken(TypedefParser::RBRACE, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::InlineVariantContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::InlineVariantContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}

std::vector<TypedefParser::UnvaluedSymbolContext *> TypedefParser::InlineVariantContext::unvaluedSymbol() {
  return getRuleContexts<TypedefParser::UnvaluedSymbolContext>();
}

TypedefParser::UnvaluedSymbolContext* TypedefParser::InlineVariantContext::unvaluedSymbol(size_t i) {
  return getRuleContext<TypedefParser::UnvaluedSymbolContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::InlineVariantContext::SEMI() {
  return getTokens(TypedefParser::SEMI);
}

tree::TerminalNode* TypedefParser::InlineVariantContext::SEMI(size_t i) {
  return getToken(TypedefParser::SEMI, i);
}


size_t TypedefParser::InlineVariantContext::getRuleIndex() const {
  return TypedefParser::RuleInlineVariant;
}

void TypedefParser::InlineVariantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineVariant(this);
}

void TypedefParser::InlineVariantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineVariant(this);
}


antlrcpp::Any TypedefParser::InlineVariantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitInlineVariant(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::InlineVariantContext* TypedefParser::inlineVariant() {
  InlineVariantContext *_localctx = _tracker.createInstance<InlineVariantContext>(_ctx, getState());
  enterRule(_localctx, 20, TypedefParser::RuleInlineVariant);

  		dynamic_cast<InlineVariantContext *>(_localctx)->v =  std::make_shared<td::Variant>();
  	
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(461);
    dynamic_cast<InlineVariantContext *>(_localctx)->identifierContext = identifier();
    setState(465);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(462);
      match(TypedefParser::WS);
      setState(467);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(468);
    match(TypedefParser::COLON);
    setState(472);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(469);
      match(TypedefParser::WS);
      setState(474);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(475);
    match(TypedefParser::KW_VARIANT);
    setState(479);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(476);
      match(TypedefParser::WS);
      setState(481);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(482);
    match(TypedefParser::LBRACE);
    setState(506);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 84) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 84)) & ((1ULL << (TypedefParser::NON_KEYWORD_IDENTIFIER - 84))
      | (1ULL << (TypedefParser::WS - 84))
      | (1ULL << (TypedefParser::RAW_ESCAPE - 84)))) != 0)) {
      setState(486);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(483);
        match(TypedefParser::WS);
        setState(488);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(489);
      dynamic_cast<InlineVariantContext *>(_localctx)->unvaluedSymbolContext = unvaluedSymbol();

      				TryInsertSymbol(_localctx->v, this, dynamic_cast<InlineVariantContext *>(_localctx)->unvaluedSymbolContext);
      			
      setState(494);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(491);
        match(TypedefParser::WS);
        setState(496);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(497);
      match(TypedefParser::SEMI);
      setState(501);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(498);
          match(TypedefParser::WS); 
        }
        setState(503);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
      }
      setState(508);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(509);
    match(TypedefParser::RBRACE);

    		dynamic_cast<InlineVariantContext *>(_localctx)->maybe_symbol =  std::make_pair(dynamic_cast<InlineVariantContext *>(_localctx)->identifierContext->id, _localctx->v);
    	
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InlineVectorContext ------------------------------------------------------------------

TypedefParser::InlineVectorContext::InlineVectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::InlineVectorContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::InlineVectorContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

tree::TerminalNode* TypedefParser::InlineVectorContext::KW_VECTOR() {
  return getToken(TypedefParser::KW_VECTOR, 0);
}

tree::TerminalNode* TypedefParser::InlineVectorContext::LT() {
  return getToken(TypedefParser::LT, 0);
}

tree::TerminalNode* TypedefParser::InlineVectorContext::GT() {
  return getToken(TypedefParser::GT, 0);
}

TypedefParser::UnvaluedTypeContext* TypedefParser::InlineVectorContext::unvaluedType() {
  return getRuleContext<TypedefParser::UnvaluedTypeContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::InlineVectorContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::InlineVectorContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::InlineVectorContext::getRuleIndex() const {
  return TypedefParser::RuleInlineVector;
}

void TypedefParser::InlineVectorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineVector(this);
}

void TypedefParser::InlineVectorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineVector(this);
}


antlrcpp::Any TypedefParser::InlineVectorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitInlineVector(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::InlineVectorContext* TypedefParser::inlineVector() {
  InlineVectorContext *_localctx = _tracker.createInstance<InlineVectorContext>(_ctx, getState());
  enterRule(_localctx, 22, TypedefParser::RuleInlineVector);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(512);
    dynamic_cast<InlineVectorContext *>(_localctx)->identifierContext = identifier();
    setState(516);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(513);
      match(TypedefParser::WS);
      setState(518);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(519);
    match(TypedefParser::COLON);
    setState(523);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(520);
      match(TypedefParser::WS);
      setState(525);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(526);
    match(TypedefParser::KW_VECTOR);
    setState(530);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(527);
      match(TypedefParser::WS);
      setState(532);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(533);
    match(TypedefParser::LT);
    setState(537);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(534);
      match(TypedefParser::WS);
      setState(539);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(540);
    dynamic_cast<InlineVectorContext *>(_localctx)->val = dynamic_cast<InlineVectorContext *>(_localctx)->unvaluedTypeContext = unvaluedType();
    setState(544);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(541);
      match(TypedefParser::WS);
      setState(546);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(547);
    match(TypedefParser::GT);

    		if (dynamic_cast<InlineVectorContext *>(_localctx)->unvaluedTypeContext->maybe_val) {
    			dynamic_cast<InlineVectorContext *>(_localctx)->maybe_symbol =  std::make_pair(dynamic_cast<InlineVectorContext *>(_localctx)->identifierContext->id,
    			  std::make_shared<td::Vector>(*dynamic_cast<InlineVectorContext *>(_localctx)->val->maybe_val));
    		}
    	
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InlineMapContext ------------------------------------------------------------------

TypedefParser::InlineMapContext::InlineMapContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::InlineMapContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::InlineMapContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

tree::TerminalNode* TypedefParser::InlineMapContext::KW_MAP() {
  return getToken(TypedefParser::KW_MAP, 0);
}

tree::TerminalNode* TypedefParser::InlineMapContext::LT() {
  return getToken(TypedefParser::LT, 0);
}

tree::TerminalNode* TypedefParser::InlineMapContext::COMMA() {
  return getToken(TypedefParser::COMMA, 0);
}

tree::TerminalNode* TypedefParser::InlineMapContext::GT() {
  return getToken(TypedefParser::GT, 0);
}

TypedefParser::PrimitiveTypeContext* TypedefParser::InlineMapContext::primitiveType() {
  return getRuleContext<TypedefParser::PrimitiveTypeContext>(0);
}

TypedefParser::UnvaluedTypeContext* TypedefParser::InlineMapContext::unvaluedType() {
  return getRuleContext<TypedefParser::UnvaluedTypeContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::InlineMapContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::InlineMapContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::InlineMapContext::getRuleIndex() const {
  return TypedefParser::RuleInlineMap;
}

void TypedefParser::InlineMapContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineMap(this);
}

void TypedefParser::InlineMapContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineMap(this);
}


antlrcpp::Any TypedefParser::InlineMapContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitInlineMap(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::InlineMapContext* TypedefParser::inlineMap() {
  InlineMapContext *_localctx = _tracker.createInstance<InlineMapContext>(_ctx, getState());
  enterRule(_localctx, 24, TypedefParser::RuleInlineMap);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(550);
    dynamic_cast<InlineMapContext *>(_localctx)->identifierContext = identifier();
    setState(554);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(551);
      match(TypedefParser::WS);
      setState(556);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(557);
    match(TypedefParser::COLON);
    setState(561);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(558);
      match(TypedefParser::WS);
      setState(563);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(564);
    match(TypedefParser::KW_MAP);
    setState(568);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(565);
      match(TypedefParser::WS);
      setState(570);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(571);
    match(TypedefParser::LT);
    setState(575);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(572);
      match(TypedefParser::WS);
      setState(577);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(578);
    dynamic_cast<InlineMapContext *>(_localctx)->key = primitiveType();
    setState(582);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(579);
      match(TypedefParser::WS);
      setState(584);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(585);
    match(TypedefParser::COMMA);
    setState(589);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(586);
      match(TypedefParser::WS);
      setState(591);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(592);
    dynamic_cast<InlineMapContext *>(_localctx)->val = unvaluedType();
    setState(596);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(593);
      match(TypedefParser::WS);
      setState(598);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(599);
    match(TypedefParser::GT);

    		// Map Declaration
    		if (dynamic_cast<InlineMapContext *>(_localctx)->key->maybe_val && dynamic_cast<InlineMapContext *>(_localctx)->val->maybe_val) {
    			dynamic_cast<InlineMapContext *>(_localctx)->maybe_symbol =  std::make_pair(dynamic_cast<InlineMapContext *>(_localctx)->identifierContext->id,
    			  std::make_shared<td::Map>(
    					*dynamic_cast<InlineMapContext *>(_localctx)->key->maybe_val, *dynamic_cast<InlineMapContext *>(_localctx)->val->maybe_val));
    		}
    	
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MaybeValuedTypeContext ------------------------------------------------------------------

TypedefParser::MaybeValuedTypeContext::MaybeValuedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::ValuedTypeContext* TypedefParser::MaybeValuedTypeContext::valuedType() {
  return getRuleContext<TypedefParser::ValuedTypeContext>(0);
}

tree::TerminalNode* TypedefParser::MaybeValuedTypeContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

TypedefParser::UnvaluedTypeContext* TypedefParser::MaybeValuedTypeContext::unvaluedType() {
  return getRuleContext<TypedefParser::UnvaluedTypeContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::MaybeValuedTypeContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::MaybeValuedTypeContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::MaybeValuedTypeContext::getRuleIndex() const {
  return TypedefParser::RuleMaybeValuedType;
}

void TypedefParser::MaybeValuedTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMaybeValuedType(this);
}

void TypedefParser::MaybeValuedTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMaybeValuedType(this);
}


antlrcpp::Any TypedefParser::MaybeValuedTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitMaybeValuedType(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::MaybeValuedTypeContext* TypedefParser::maybeValuedType() {
  MaybeValuedTypeContext *_localctx = _tracker.createInstance<MaybeValuedTypeContext>(_ctx, getState());
  enterRule(_localctx, 26, TypedefParser::RuleMaybeValuedType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(616);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(602);
      dynamic_cast<MaybeValuedTypeContext *>(_localctx)->valuedTypeContext = valuedType();
      dynamic_cast<MaybeValuedTypeContext *>(_localctx)->maybe_val =  dynamic_cast<MaybeValuedTypeContext *>(_localctx)->valuedTypeContext->maybe_val;
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(605);
      match(TypedefParser::COLON);
      setState(609);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(606);
        match(TypedefParser::WS);
        setState(611);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(612);
      dynamic_cast<MaybeValuedTypeContext *>(_localctx)->unvaluedTypeContext = unvaluedType();
      dynamic_cast<MaybeValuedTypeContext *>(_localctx)->maybe_val =  dynamic_cast<MaybeValuedTypeContext *>(_localctx)->unvaluedTypeContext->maybe_val;
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

//----------------- ValuedTypeContext ------------------------------------------------------------------

TypedefParser::ValuedTypeContext::ValuedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::ValuedPrimitiveTypeContext* TypedefParser::ValuedTypeContext::valuedPrimitiveType() {
  return getRuleContext<TypedefParser::ValuedPrimitiveTypeContext>(0);
}


size_t TypedefParser::ValuedTypeContext::getRuleIndex() const {
  return TypedefParser::RuleValuedType;
}

void TypedefParser::ValuedTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValuedType(this);
}

void TypedefParser::ValuedTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValuedType(this);
}


antlrcpp::Any TypedefParser::ValuedTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitValuedType(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::ValuedTypeContext* TypedefParser::valuedType() {
  ValuedTypeContext *_localctx = _tracker.createInstance<ValuedTypeContext>(_ctx, getState());
  enterRule(_localctx, 28, TypedefParser::RuleValuedType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(618);
    dynamic_cast<ValuedTypeContext *>(_localctx)->valuedPrimitiveTypeContext = valuedPrimitiveType();
    dynamic_cast<ValuedTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedTypeContext *>(_localctx)->valuedPrimitiveTypeContext->maybe_val;
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnvaluedTypeContext ------------------------------------------------------------------

TypedefParser::UnvaluedTypeContext::UnvaluedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::PrimitiveTypeContext* TypedefParser::UnvaluedTypeContext::primitiveType() {
  return getRuleContext<TypedefParser::PrimitiveTypeContext>(0);
}

TypedefParser::SymbolReferenceContext* TypedefParser::UnvaluedTypeContext::symbolReference() {
  return getRuleContext<TypedefParser::SymbolReferenceContext>(0);
}


size_t TypedefParser::UnvaluedTypeContext::getRuleIndex() const {
  return TypedefParser::RuleUnvaluedType;
}

void TypedefParser::UnvaluedTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnvaluedType(this);
}

void TypedefParser::UnvaluedTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnvaluedType(this);
}


antlrcpp::Any TypedefParser::UnvaluedTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitUnvaluedType(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::UnvaluedTypeContext* TypedefParser::unvaluedType() {
  UnvaluedTypeContext *_localctx = _tracker.createInstance<UnvaluedTypeContext>(_ctx, getState());
  enterRule(_localctx, 30, TypedefParser::RuleUnvaluedType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(627);
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
        setState(621);
        dynamic_cast<UnvaluedTypeContext *>(_localctx)->primitiveTypeContext = primitiveType();
        dynamic_cast<UnvaluedTypeContext *>(_localctx)->maybe_val =  dynamic_cast<UnvaluedTypeContext *>(_localctx)->primitiveTypeContext->maybe_val;
        break;
      }

      case TypedefParser::NON_KEYWORD_IDENTIFIER:
      case TypedefParser::RAW_ESCAPE: {
        setState(624);
        dynamic_cast<UnvaluedTypeContext *>(_localctx)->symbolReferenceContext = symbolReference();
        dynamic_cast<UnvaluedTypeContext *>(_localctx)->maybe_val =  dynamic_cast<UnvaluedTypeContext *>(_localctx)->symbolReferenceContext->maybe_symref; 
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

//----------------- SymbolReferenceContext ------------------------------------------------------------------

TypedefParser::SymbolReferenceContext::SymbolReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::SymbolReferenceContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}


size_t TypedefParser::SymbolReferenceContext::getRuleIndex() const {
  return TypedefParser::RuleSymbolReference;
}

void TypedefParser::SymbolReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSymbolReference(this);
}

void TypedefParser::SymbolReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSymbolReference(this);
}


antlrcpp::Any TypedefParser::SymbolReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitSymbolReference(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::SymbolReferenceContext* TypedefParser::symbolReference() {
  SymbolReferenceContext *_localctx = _tracker.createInstance<SymbolReferenceContext>(_ctx, getState());
  enterRule(_localctx, 32, TypedefParser::RuleSymbolReference);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(629);
    dynamic_cast<SymbolReferenceContext *>(_localctx)->identifierContext = identifier();
    dynamic_cast<SymbolReferenceContext *>(_localctx)->maybe_symref =  td::SymbolRef(dynamic_cast<SymbolReferenceContext *>(_localctx)->identifierContext->id); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimitiveTypeContext ------------------------------------------------------------------

TypedefParser::PrimitiveTypeContext::PrimitiveTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::KW_BOOL() {
  return getToken(TypedefParser::KW_BOOL, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::KW_CHAR() {
  return getToken(TypedefParser::KW_CHAR, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::KW_STRING() {
  return getToken(TypedefParser::KW_STRING, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::KW_F32() {
  return getToken(TypedefParser::KW_F32, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::KW_F64() {
  return getToken(TypedefParser::KW_F64, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::KW_U8() {
  return getToken(TypedefParser::KW_U8, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::KW_U16() {
  return getToken(TypedefParser::KW_U16, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::KW_U32() {
  return getToken(TypedefParser::KW_U32, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::KW_U64() {
  return getToken(TypedefParser::KW_U64, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::KW_I8() {
  return getToken(TypedefParser::KW_I8, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::KW_I16() {
  return getToken(TypedefParser::KW_I16, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::KW_I32() {
  return getToken(TypedefParser::KW_I32, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::KW_I64() {
  return getToken(TypedefParser::KW_I64, 0);
}


size_t TypedefParser::PrimitiveTypeContext::getRuleIndex() const {
  return TypedefParser::RulePrimitiveType;
}

void TypedefParser::PrimitiveTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimitiveType(this);
}

void TypedefParser::PrimitiveTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimitiveType(this);
}


antlrcpp::Any TypedefParser::PrimitiveTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitPrimitiveType(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::PrimitiveTypeContext* TypedefParser::primitiveType() {
  PrimitiveTypeContext *_localctx = _tracker.createInstance<PrimitiveTypeContext>(_ctx, getState());
  enterRule(_localctx, 34, TypedefParser::RulePrimitiveType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(658);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::KW_BOOL: {
        enterOuterAlt(_localctx, 1);
        setState(632);
        match(TypedefParser::KW_BOOL);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<bool>(); 
        break;
      }

      case TypedefParser::KW_CHAR: {
        enterOuterAlt(_localctx, 2);
        setState(634);
        match(TypedefParser::KW_CHAR);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<char32_t>(); 
        break;
      }

      case TypedefParser::KW_STRING: {
        enterOuterAlt(_localctx, 3);
        setState(636);
        match(TypedefParser::KW_STRING);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<std::string>(); 
        break;
      }

      case TypedefParser::KW_F32: {
        enterOuterAlt(_localctx, 4);
        setState(638);
        match(TypedefParser::KW_F32);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<float>(); 
        break;
      }

      case TypedefParser::KW_F64: {
        enterOuterAlt(_localctx, 5);
        setState(640);
        match(TypedefParser::KW_F64);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<double>(); 
        break;
      }

      case TypedefParser::KW_U8: {
        enterOuterAlt(_localctx, 6);
        setState(642);
        match(TypedefParser::KW_U8);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<uint8_t>(); 
        break;
      }

      case TypedefParser::KW_U16: {
        enterOuterAlt(_localctx, 7);
        setState(644);
        match(TypedefParser::KW_U16);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<uint16_t>(); 
        break;
      }

      case TypedefParser::KW_U32: {
        enterOuterAlt(_localctx, 8);
        setState(646);
        match(TypedefParser::KW_U32);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<uint32_t>(); 
        break;
      }

      case TypedefParser::KW_U64: {
        enterOuterAlt(_localctx, 9);
        setState(648);
        match(TypedefParser::KW_U64);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<uint64_t>(); 
        break;
      }

      case TypedefParser::KW_I8: {
        enterOuterAlt(_localctx, 10);
        setState(650);
        match(TypedefParser::KW_I8);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<int8_t>(); 
        break;
      }

      case TypedefParser::KW_I16: {
        enterOuterAlt(_localctx, 11);
        setState(652);
        match(TypedefParser::KW_I16);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<int16_t>(); 
        break;
      }

      case TypedefParser::KW_I32: {
        enterOuterAlt(_localctx, 12);
        setState(654);
        match(TypedefParser::KW_I32);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<int32_t>(); 
        break;
      }

      case TypedefParser::KW_I64: {
        enterOuterAlt(_localctx, 13);
        setState(656);
        match(TypedefParser::KW_I64);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<int64_t>(); 
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

//----------------- ValuedPrimitiveTypeContext ------------------------------------------------------------------

TypedefParser::ValuedPrimitiveTypeContext::ValuedPrimitiveTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::ValuedBoolFragmentContext* TypedefParser::ValuedPrimitiveTypeContext::valuedBoolFragment() {
  return getRuleContext<TypedefParser::ValuedBoolFragmentContext>(0);
}

TypedefParser::ValuedCharFragmentContext* TypedefParser::ValuedPrimitiveTypeContext::valuedCharFragment() {
  return getRuleContext<TypedefParser::ValuedCharFragmentContext>(0);
}

TypedefParser::ValuedStringFragmentContext* TypedefParser::ValuedPrimitiveTypeContext::valuedStringFragment() {
  return getRuleContext<TypedefParser::ValuedStringFragmentContext>(0);
}

TypedefParser::ValuedF32FragmentContext* TypedefParser::ValuedPrimitiveTypeContext::valuedF32Fragment() {
  return getRuleContext<TypedefParser::ValuedF32FragmentContext>(0);
}

TypedefParser::ValuedF64FragmentContext* TypedefParser::ValuedPrimitiveTypeContext::valuedF64Fragment() {
  return getRuleContext<TypedefParser::ValuedF64FragmentContext>(0);
}

TypedefParser::ValuedU8FragmentContext* TypedefParser::ValuedPrimitiveTypeContext::valuedU8Fragment() {
  return getRuleContext<TypedefParser::ValuedU8FragmentContext>(0);
}

TypedefParser::ValuedU16FragmentContext* TypedefParser::ValuedPrimitiveTypeContext::valuedU16Fragment() {
  return getRuleContext<TypedefParser::ValuedU16FragmentContext>(0);
}

TypedefParser::ValuedU32FragmentContext* TypedefParser::ValuedPrimitiveTypeContext::valuedU32Fragment() {
  return getRuleContext<TypedefParser::ValuedU32FragmentContext>(0);
}

TypedefParser::ValuedU64FragmentContext* TypedefParser::ValuedPrimitiveTypeContext::valuedU64Fragment() {
  return getRuleContext<TypedefParser::ValuedU64FragmentContext>(0);
}

TypedefParser::ValuedI8FragmentContext* TypedefParser::ValuedPrimitiveTypeContext::valuedI8Fragment() {
  return getRuleContext<TypedefParser::ValuedI8FragmentContext>(0);
}

TypedefParser::ValuedI16FragmentContext* TypedefParser::ValuedPrimitiveTypeContext::valuedI16Fragment() {
  return getRuleContext<TypedefParser::ValuedI16FragmentContext>(0);
}

TypedefParser::ValuedI32FragmentContext* TypedefParser::ValuedPrimitiveTypeContext::valuedI32Fragment() {
  return getRuleContext<TypedefParser::ValuedI32FragmentContext>(0);
}

TypedefParser::ValuedI64FragmentContext* TypedefParser::ValuedPrimitiveTypeContext::valuedI64Fragment() {
  return getRuleContext<TypedefParser::ValuedI64FragmentContext>(0);
}


size_t TypedefParser::ValuedPrimitiveTypeContext::getRuleIndex() const {
  return TypedefParser::RuleValuedPrimitiveType;
}

void TypedefParser::ValuedPrimitiveTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValuedPrimitiveType(this);
}

void TypedefParser::ValuedPrimitiveTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValuedPrimitiveType(this);
}


antlrcpp::Any TypedefParser::ValuedPrimitiveTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitValuedPrimitiveType(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::ValuedPrimitiveTypeContext* TypedefParser::valuedPrimitiveType() {
  ValuedPrimitiveTypeContext *_localctx = _tracker.createInstance<ValuedPrimitiveTypeContext>(_ctx, getState());
  enterRule(_localctx, 36, TypedefParser::RuleValuedPrimitiveType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(699);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      setState(660);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedBoolFragmentContext = valuedBoolFragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedBoolFragmentContext->literal->maybe_val;
      break;
    }

    case 2: {
      setState(663);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedCharFragmentContext = valuedCharFragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedCharFragmentContext->literal->maybe_val;
      break;
    }

    case 3: {
      setState(666);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedStringFragmentContext = valuedStringFragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedStringFragmentContext->literal->maybe_val;
      break;
    }

    case 4: {
      setState(669);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedF32FragmentContext = valuedF32Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedF32FragmentContext->literal->maybe_val;
      break;
    }

    case 5: {
      setState(672);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedF64FragmentContext = valuedF64Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedF64FragmentContext->literal->maybe_val;
      break;
    }

    case 6: {
      setState(675);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU8FragmentContext = valuedU8Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU8FragmentContext->literal->maybe_val;
      break;
    }

    case 7: {
      setState(678);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU16FragmentContext = valuedU16Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU16FragmentContext->literal->maybe_val;
      break;
    }

    case 8: {
      setState(681);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU32FragmentContext = valuedU32Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU32FragmentContext->literal->maybe_val;
      break;
    }

    case 9: {
      setState(684);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU64FragmentContext = valuedU64Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU64FragmentContext->literal->maybe_val;
      break;
    }

    case 10: {
      setState(687);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedI8FragmentContext = valuedI8Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedI8FragmentContext->literal->maybe_val;
      break;
    }

    case 11: {
      setState(690);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedI16FragmentContext = valuedI16Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedI16FragmentContext->literal->maybe_val;
      break;
    }

    case 12: {
      setState(693);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedI32FragmentContext = valuedI32Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedI32FragmentContext->literal->maybe_val;
      break;
    }

    case 13: {
      setState(696);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedI64FragmentContext = valuedI64Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedI64FragmentContext->literal->maybe_val;
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

//----------------- ValuedBoolFragmentContext ------------------------------------------------------------------

TypedefParser::ValuedBoolFragmentContext::ValuedBoolFragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::ValuedBoolFragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::BoolLiteralContext* TypedefParser::ValuedBoolFragmentContext::boolLiteral() {
  return getRuleContext<TypedefParser::BoolLiteralContext>(0);
}

tree::TerminalNode* TypedefParser::ValuedBoolFragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

tree::TerminalNode* TypedefParser::ValuedBoolFragmentContext::KW_BOOL() {
  return getToken(TypedefParser::KW_BOOL, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValuedBoolFragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::ValuedBoolFragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::ValuedBoolFragmentContext::getRuleIndex() const {
  return TypedefParser::RuleValuedBoolFragment;
}

void TypedefParser::ValuedBoolFragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValuedBoolFragment(this);
}

void TypedefParser::ValuedBoolFragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValuedBoolFragment(this);
}


antlrcpp::Any TypedefParser::ValuedBoolFragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitValuedBoolFragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::ValuedBoolFragmentContext* TypedefParser::valuedBoolFragment() {
  ValuedBoolFragmentContext *_localctx = _tracker.createInstance<ValuedBoolFragmentContext>(_ctx, getState());
  enterRule(_localctx, 38, TypedefParser::RuleValuedBoolFragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(709);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::COLON) {
      setState(701);
      match(TypedefParser::COLON);
      setState(705);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(702);
        match(TypedefParser::WS);
        setState(707);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(708);
      match(TypedefParser::KW_BOOL);
    }
    setState(714);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(711);
      match(TypedefParser::WS);
      setState(716);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(717);
    match(TypedefParser::EQ);
    setState(721);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(718);
      match(TypedefParser::WS);
      setState(723);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(724);
    dynamic_cast<ValuedBoolFragmentContext *>(_localctx)->literal = boolLiteral();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValuedCharFragmentContext ------------------------------------------------------------------

TypedefParser::ValuedCharFragmentContext::ValuedCharFragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::ValuedCharFragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::CharLiteralContext* TypedefParser::ValuedCharFragmentContext::charLiteral() {
  return getRuleContext<TypedefParser::CharLiteralContext>(0);
}

tree::TerminalNode* TypedefParser::ValuedCharFragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

tree::TerminalNode* TypedefParser::ValuedCharFragmentContext::KW_CHAR() {
  return getToken(TypedefParser::KW_CHAR, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValuedCharFragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::ValuedCharFragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::ValuedCharFragmentContext::getRuleIndex() const {
  return TypedefParser::RuleValuedCharFragment;
}

void TypedefParser::ValuedCharFragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValuedCharFragment(this);
}

void TypedefParser::ValuedCharFragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValuedCharFragment(this);
}


antlrcpp::Any TypedefParser::ValuedCharFragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitValuedCharFragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::ValuedCharFragmentContext* TypedefParser::valuedCharFragment() {
  ValuedCharFragmentContext *_localctx = _tracker.createInstance<ValuedCharFragmentContext>(_ctx, getState());
  enterRule(_localctx, 40, TypedefParser::RuleValuedCharFragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(734);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::COLON) {
      setState(726);
      match(TypedefParser::COLON);
      setState(730);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(727);
        match(TypedefParser::WS);
        setState(732);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(733);
      match(TypedefParser::KW_CHAR);
    }
    setState(739);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(736);
      match(TypedefParser::WS);
      setState(741);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(742);
    match(TypedefParser::EQ);
    setState(746);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(743);
      match(TypedefParser::WS);
      setState(748);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(749);
    dynamic_cast<ValuedCharFragmentContext *>(_localctx)->literal = charLiteral();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValuedStringFragmentContext ------------------------------------------------------------------

TypedefParser::ValuedStringFragmentContext::ValuedStringFragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::ValuedStringFragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::StringLiteralContext* TypedefParser::ValuedStringFragmentContext::stringLiteral() {
  return getRuleContext<TypedefParser::StringLiteralContext>(0);
}

tree::TerminalNode* TypedefParser::ValuedStringFragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

tree::TerminalNode* TypedefParser::ValuedStringFragmentContext::KW_STRING() {
  return getToken(TypedefParser::KW_STRING, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValuedStringFragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::ValuedStringFragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::ValuedStringFragmentContext::getRuleIndex() const {
  return TypedefParser::RuleValuedStringFragment;
}

void TypedefParser::ValuedStringFragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValuedStringFragment(this);
}

void TypedefParser::ValuedStringFragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValuedStringFragment(this);
}


antlrcpp::Any TypedefParser::ValuedStringFragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitValuedStringFragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::ValuedStringFragmentContext* TypedefParser::valuedStringFragment() {
  ValuedStringFragmentContext *_localctx = _tracker.createInstance<ValuedStringFragmentContext>(_ctx, getState());
  enterRule(_localctx, 42, TypedefParser::RuleValuedStringFragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(759);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::COLON) {
      setState(751);
      match(TypedefParser::COLON);
      setState(755);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(752);
        match(TypedefParser::WS);
        setState(757);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(758);
      match(TypedefParser::KW_STRING);
    }
    setState(764);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(761);
      match(TypedefParser::WS);
      setState(766);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(767);
    match(TypedefParser::EQ);
    setState(771);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(768);
      match(TypedefParser::WS);
      setState(773);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(774);
    dynamic_cast<ValuedStringFragmentContext *>(_localctx)->literal = stringLiteral();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValuedF32FragmentContext ------------------------------------------------------------------

TypedefParser::ValuedF32FragmentContext::ValuedF32FragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::ValuedF32FragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValuedF32FragmentContext::KW_F32() {
  return getTokens(TypedefParser::KW_F32);
}

tree::TerminalNode* TypedefParser::ValuedF32FragmentContext::KW_F32(size_t i) {
  return getToken(TypedefParser::KW_F32, i);
}

tree::TerminalNode* TypedefParser::ValuedF32FragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::F32LiteralContext* TypedefParser::ValuedF32FragmentContext::f32Literal() {
  return getRuleContext<TypedefParser::F32LiteralContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValuedF32FragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::ValuedF32FragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::ValuedF32FragmentContext::getRuleIndex() const {
  return TypedefParser::RuleValuedF32Fragment;
}

void TypedefParser::ValuedF32FragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValuedF32Fragment(this);
}

void TypedefParser::ValuedF32FragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValuedF32Fragment(this);
}


antlrcpp::Any TypedefParser::ValuedF32FragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitValuedF32Fragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::ValuedF32FragmentContext* TypedefParser::valuedF32Fragment() {
  ValuedF32FragmentContext *_localctx = _tracker.createInstance<ValuedF32FragmentContext>(_ctx, getState());
  enterRule(_localctx, 44, TypedefParser::RuleValuedF32Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(812);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(776);
        match(TypedefParser::COLON);
        setState(780);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(777);
          match(TypedefParser::WS);
          setState(782);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(783);
        match(TypedefParser::KW_F32);
        setState(787);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(784);
          match(TypedefParser::WS);
          setState(789);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(790);
        match(TypedefParser::EQ);
        setState(794);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(791);
          match(TypedefParser::WS);
          setState(796);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(797);
        dynamic_cast<ValuedF32FragmentContext *>(_localctx)->literal = f32Literal();
        setState(799);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_F32) {
          setState(798);
          match(TypedefParser::KW_F32);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(801);
        match(TypedefParser::EQ);
        setState(805);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(802);
          match(TypedefParser::WS);
          setState(807);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(808);
        dynamic_cast<ValuedF32FragmentContext *>(_localctx)->literal = f32Literal();
        setState(810);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_F32) {
          setState(809);
          match(TypedefParser::KW_F32);
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

//----------------- ValuedF64FragmentContext ------------------------------------------------------------------

TypedefParser::ValuedF64FragmentContext::ValuedF64FragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::ValuedF64FragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValuedF64FragmentContext::KW_F64() {
  return getTokens(TypedefParser::KW_F64);
}

tree::TerminalNode* TypedefParser::ValuedF64FragmentContext::KW_F64(size_t i) {
  return getToken(TypedefParser::KW_F64, i);
}

tree::TerminalNode* TypedefParser::ValuedF64FragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::F64LiteralContext* TypedefParser::ValuedF64FragmentContext::f64Literal() {
  return getRuleContext<TypedefParser::F64LiteralContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValuedF64FragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::ValuedF64FragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::ValuedF64FragmentContext::getRuleIndex() const {
  return TypedefParser::RuleValuedF64Fragment;
}

void TypedefParser::ValuedF64FragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValuedF64Fragment(this);
}

void TypedefParser::ValuedF64FragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValuedF64Fragment(this);
}


antlrcpp::Any TypedefParser::ValuedF64FragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitValuedF64Fragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::ValuedF64FragmentContext* TypedefParser::valuedF64Fragment() {
  ValuedF64FragmentContext *_localctx = _tracker.createInstance<ValuedF64FragmentContext>(_ctx, getState());
  enterRule(_localctx, 46, TypedefParser::RuleValuedF64Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(849);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(814);
        match(TypedefParser::COLON);
        setState(818);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(815);
          match(TypedefParser::WS);
          setState(820);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(821);
        match(TypedefParser::KW_F64);
        setState(825);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(822);
          match(TypedefParser::WS);
          setState(827);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(828);
        match(TypedefParser::EQ);
        setState(832);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(829);
          match(TypedefParser::WS);
          setState(834);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(835);
        dynamic_cast<ValuedF64FragmentContext *>(_localctx)->literal = f64Literal();
        setState(837);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_F64) {
          setState(836);
          match(TypedefParser::KW_F64);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(839);
        match(TypedefParser::EQ);
        setState(843);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(840);
          match(TypedefParser::WS);
          setState(845);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(846);
        dynamic_cast<ValuedF64FragmentContext *>(_localctx)->literal = f64Literal();
        setState(847);
        match(TypedefParser::KW_F64);
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

//----------------- ValuedU8FragmentContext ------------------------------------------------------------------

TypedefParser::ValuedU8FragmentContext::ValuedU8FragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::ValuedU8FragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValuedU8FragmentContext::KW_U8() {
  return getTokens(TypedefParser::KW_U8);
}

tree::TerminalNode* TypedefParser::ValuedU8FragmentContext::KW_U8(size_t i) {
  return getToken(TypedefParser::KW_U8, i);
}

tree::TerminalNode* TypedefParser::ValuedU8FragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::U8LiteralContext* TypedefParser::ValuedU8FragmentContext::u8Literal() {
  return getRuleContext<TypedefParser::U8LiteralContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValuedU8FragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::ValuedU8FragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::ValuedU8FragmentContext::getRuleIndex() const {
  return TypedefParser::RuleValuedU8Fragment;
}

void TypedefParser::ValuedU8FragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValuedU8Fragment(this);
}

void TypedefParser::ValuedU8FragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValuedU8Fragment(this);
}


antlrcpp::Any TypedefParser::ValuedU8FragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitValuedU8Fragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::ValuedU8FragmentContext* TypedefParser::valuedU8Fragment() {
  ValuedU8FragmentContext *_localctx = _tracker.createInstance<ValuedU8FragmentContext>(_ctx, getState());
  enterRule(_localctx, 48, TypedefParser::RuleValuedU8Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(886);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(851);
        match(TypedefParser::COLON);
        setState(855);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(852);
          match(TypedefParser::WS);
          setState(857);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(858);
        match(TypedefParser::KW_U8);
        setState(862);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(859);
          match(TypedefParser::WS);
          setState(864);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(865);
        match(TypedefParser::EQ);
        setState(869);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(866);
          match(TypedefParser::WS);
          setState(871);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(872);
        dynamic_cast<ValuedU8FragmentContext *>(_localctx)->literal = u8Literal();
        setState(874);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_U8) {
          setState(873);
          match(TypedefParser::KW_U8);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(876);
        match(TypedefParser::EQ);
        setState(880);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(877);
          match(TypedefParser::WS);
          setState(882);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(883);
        dynamic_cast<ValuedU8FragmentContext *>(_localctx)->literal = u8Literal();
        setState(884);
        match(TypedefParser::KW_U8);
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

//----------------- ValuedU16FragmentContext ------------------------------------------------------------------

TypedefParser::ValuedU16FragmentContext::ValuedU16FragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::ValuedU16FragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValuedU16FragmentContext::KW_U16() {
  return getTokens(TypedefParser::KW_U16);
}

tree::TerminalNode* TypedefParser::ValuedU16FragmentContext::KW_U16(size_t i) {
  return getToken(TypedefParser::KW_U16, i);
}

tree::TerminalNode* TypedefParser::ValuedU16FragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::U16LiteralContext* TypedefParser::ValuedU16FragmentContext::u16Literal() {
  return getRuleContext<TypedefParser::U16LiteralContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValuedU16FragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::ValuedU16FragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::ValuedU16FragmentContext::getRuleIndex() const {
  return TypedefParser::RuleValuedU16Fragment;
}

void TypedefParser::ValuedU16FragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValuedU16Fragment(this);
}

void TypedefParser::ValuedU16FragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValuedU16Fragment(this);
}


antlrcpp::Any TypedefParser::ValuedU16FragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitValuedU16Fragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::ValuedU16FragmentContext* TypedefParser::valuedU16Fragment() {
  ValuedU16FragmentContext *_localctx = _tracker.createInstance<ValuedU16FragmentContext>(_ctx, getState());
  enterRule(_localctx, 50, TypedefParser::RuleValuedU16Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(923);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(888);
        match(TypedefParser::COLON);
        setState(892);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(889);
          match(TypedefParser::WS);
          setState(894);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(895);
        match(TypedefParser::KW_U16);
        setState(899);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(896);
          match(TypedefParser::WS);
          setState(901);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(902);
        match(TypedefParser::EQ);
        setState(906);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(903);
          match(TypedefParser::WS);
          setState(908);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(909);
        dynamic_cast<ValuedU16FragmentContext *>(_localctx)->literal = u16Literal();
        setState(911);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_U16) {
          setState(910);
          match(TypedefParser::KW_U16);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(913);
        match(TypedefParser::EQ);
        setState(917);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(914);
          match(TypedefParser::WS);
          setState(919);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(920);
        dynamic_cast<ValuedU16FragmentContext *>(_localctx)->literal = u16Literal();
        setState(921);
        match(TypedefParser::KW_U16);
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

//----------------- ValuedU32FragmentContext ------------------------------------------------------------------

TypedefParser::ValuedU32FragmentContext::ValuedU32FragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::ValuedU32FragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValuedU32FragmentContext::KW_U32() {
  return getTokens(TypedefParser::KW_U32);
}

tree::TerminalNode* TypedefParser::ValuedU32FragmentContext::KW_U32(size_t i) {
  return getToken(TypedefParser::KW_U32, i);
}

tree::TerminalNode* TypedefParser::ValuedU32FragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::U32LiteralContext* TypedefParser::ValuedU32FragmentContext::u32Literal() {
  return getRuleContext<TypedefParser::U32LiteralContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValuedU32FragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::ValuedU32FragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::ValuedU32FragmentContext::getRuleIndex() const {
  return TypedefParser::RuleValuedU32Fragment;
}

void TypedefParser::ValuedU32FragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValuedU32Fragment(this);
}

void TypedefParser::ValuedU32FragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValuedU32Fragment(this);
}


antlrcpp::Any TypedefParser::ValuedU32FragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitValuedU32Fragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::ValuedU32FragmentContext* TypedefParser::valuedU32Fragment() {
  ValuedU32FragmentContext *_localctx = _tracker.createInstance<ValuedU32FragmentContext>(_ctx, getState());
  enterRule(_localctx, 52, TypedefParser::RuleValuedU32Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(960);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(925);
        match(TypedefParser::COLON);
        setState(929);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(926);
          match(TypedefParser::WS);
          setState(931);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(932);
        match(TypedefParser::KW_U32);
        setState(936);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(933);
          match(TypedefParser::WS);
          setState(938);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(939);
        match(TypedefParser::EQ);
        setState(943);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(940);
          match(TypedefParser::WS);
          setState(945);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(946);
        dynamic_cast<ValuedU32FragmentContext *>(_localctx)->literal = u32Literal();
        setState(948);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_U32) {
          setState(947);
          match(TypedefParser::KW_U32);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(950);
        match(TypedefParser::EQ);
        setState(954);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(951);
          match(TypedefParser::WS);
          setState(956);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(957);
        dynamic_cast<ValuedU32FragmentContext *>(_localctx)->literal = u32Literal();
        setState(958);
        match(TypedefParser::KW_U32);
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

//----------------- ValuedU64FragmentContext ------------------------------------------------------------------

TypedefParser::ValuedU64FragmentContext::ValuedU64FragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::ValuedU64FragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValuedU64FragmentContext::KW_U64() {
  return getTokens(TypedefParser::KW_U64);
}

tree::TerminalNode* TypedefParser::ValuedU64FragmentContext::KW_U64(size_t i) {
  return getToken(TypedefParser::KW_U64, i);
}

tree::TerminalNode* TypedefParser::ValuedU64FragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::U64LiteralContext* TypedefParser::ValuedU64FragmentContext::u64Literal() {
  return getRuleContext<TypedefParser::U64LiteralContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValuedU64FragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::ValuedU64FragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::ValuedU64FragmentContext::getRuleIndex() const {
  return TypedefParser::RuleValuedU64Fragment;
}

void TypedefParser::ValuedU64FragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValuedU64Fragment(this);
}

void TypedefParser::ValuedU64FragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValuedU64Fragment(this);
}


antlrcpp::Any TypedefParser::ValuedU64FragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitValuedU64Fragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::ValuedU64FragmentContext* TypedefParser::valuedU64Fragment() {
  ValuedU64FragmentContext *_localctx = _tracker.createInstance<ValuedU64FragmentContext>(_ctx, getState());
  enterRule(_localctx, 54, TypedefParser::RuleValuedU64Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(997);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(962);
        match(TypedefParser::COLON);
        setState(966);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(963);
          match(TypedefParser::WS);
          setState(968);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(969);
        match(TypedefParser::KW_U64);
        setState(973);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(970);
          match(TypedefParser::WS);
          setState(975);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(976);
        match(TypedefParser::EQ);
        setState(980);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(977);
          match(TypedefParser::WS);
          setState(982);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(983);
        dynamic_cast<ValuedU64FragmentContext *>(_localctx)->literal = u64Literal();
        setState(985);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_U64) {
          setState(984);
          match(TypedefParser::KW_U64);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(987);
        match(TypedefParser::EQ);
        setState(991);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(988);
          match(TypedefParser::WS);
          setState(993);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(994);
        dynamic_cast<ValuedU64FragmentContext *>(_localctx)->literal = u64Literal();
        setState(995);
        match(TypedefParser::KW_U64);
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

//----------------- ValuedI8FragmentContext ------------------------------------------------------------------

TypedefParser::ValuedI8FragmentContext::ValuedI8FragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::ValuedI8FragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValuedI8FragmentContext::KW_I8() {
  return getTokens(TypedefParser::KW_I8);
}

tree::TerminalNode* TypedefParser::ValuedI8FragmentContext::KW_I8(size_t i) {
  return getToken(TypedefParser::KW_I8, i);
}

tree::TerminalNode* TypedefParser::ValuedI8FragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::I8LiteralContext* TypedefParser::ValuedI8FragmentContext::i8Literal() {
  return getRuleContext<TypedefParser::I8LiteralContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValuedI8FragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::ValuedI8FragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::ValuedI8FragmentContext::getRuleIndex() const {
  return TypedefParser::RuleValuedI8Fragment;
}

void TypedefParser::ValuedI8FragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValuedI8Fragment(this);
}

void TypedefParser::ValuedI8FragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValuedI8Fragment(this);
}


antlrcpp::Any TypedefParser::ValuedI8FragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitValuedI8Fragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::ValuedI8FragmentContext* TypedefParser::valuedI8Fragment() {
  ValuedI8FragmentContext *_localctx = _tracker.createInstance<ValuedI8FragmentContext>(_ctx, getState());
  enterRule(_localctx, 56, TypedefParser::RuleValuedI8Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1034);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(999);
        match(TypedefParser::COLON);
        setState(1003);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1000);
          match(TypedefParser::WS);
          setState(1005);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1006);
        match(TypedefParser::KW_I8);
        setState(1010);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1007);
          match(TypedefParser::WS);
          setState(1012);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1013);
        match(TypedefParser::EQ);
        setState(1017);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1014);
          match(TypedefParser::WS);
          setState(1019);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1020);
        dynamic_cast<ValuedI8FragmentContext *>(_localctx)->literal = i8Literal();
        setState(1022);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I8) {
          setState(1021);
          match(TypedefParser::KW_I8);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(1024);
        match(TypedefParser::EQ);
        setState(1028);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1025);
          match(TypedefParser::WS);
          setState(1030);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1031);
        dynamic_cast<ValuedI8FragmentContext *>(_localctx)->literal = i8Literal();
        setState(1032);
        match(TypedefParser::KW_I8);
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

//----------------- ValuedI16FragmentContext ------------------------------------------------------------------

TypedefParser::ValuedI16FragmentContext::ValuedI16FragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::ValuedI16FragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValuedI16FragmentContext::KW_I16() {
  return getTokens(TypedefParser::KW_I16);
}

tree::TerminalNode* TypedefParser::ValuedI16FragmentContext::KW_I16(size_t i) {
  return getToken(TypedefParser::KW_I16, i);
}

tree::TerminalNode* TypedefParser::ValuedI16FragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::I16LiteralContext* TypedefParser::ValuedI16FragmentContext::i16Literal() {
  return getRuleContext<TypedefParser::I16LiteralContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValuedI16FragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::ValuedI16FragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::ValuedI16FragmentContext::getRuleIndex() const {
  return TypedefParser::RuleValuedI16Fragment;
}

void TypedefParser::ValuedI16FragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValuedI16Fragment(this);
}

void TypedefParser::ValuedI16FragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValuedI16Fragment(this);
}


antlrcpp::Any TypedefParser::ValuedI16FragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitValuedI16Fragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::ValuedI16FragmentContext* TypedefParser::valuedI16Fragment() {
  ValuedI16FragmentContext *_localctx = _tracker.createInstance<ValuedI16FragmentContext>(_ctx, getState());
  enterRule(_localctx, 58, TypedefParser::RuleValuedI16Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1071);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(1036);
        match(TypedefParser::COLON);
        setState(1040);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1037);
          match(TypedefParser::WS);
          setState(1042);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1043);
        match(TypedefParser::KW_I16);
        setState(1047);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1044);
          match(TypedefParser::WS);
          setState(1049);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1050);
        match(TypedefParser::EQ);
        setState(1054);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1051);
          match(TypedefParser::WS);
          setState(1056);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1057);
        dynamic_cast<ValuedI16FragmentContext *>(_localctx)->literal = i16Literal();
        setState(1059);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I16) {
          setState(1058);
          match(TypedefParser::KW_I16);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(1061);
        match(TypedefParser::EQ);
        setState(1065);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1062);
          match(TypedefParser::WS);
          setState(1067);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1068);
        dynamic_cast<ValuedI16FragmentContext *>(_localctx)->literal = i16Literal();
        setState(1069);
        match(TypedefParser::KW_I16);
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

//----------------- ValuedI32FragmentContext ------------------------------------------------------------------

TypedefParser::ValuedI32FragmentContext::ValuedI32FragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::ValuedI32FragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValuedI32FragmentContext::KW_I32() {
  return getTokens(TypedefParser::KW_I32);
}

tree::TerminalNode* TypedefParser::ValuedI32FragmentContext::KW_I32(size_t i) {
  return getToken(TypedefParser::KW_I32, i);
}

tree::TerminalNode* TypedefParser::ValuedI32FragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::I32LiteralContext* TypedefParser::ValuedI32FragmentContext::i32Literal() {
  return getRuleContext<TypedefParser::I32LiteralContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValuedI32FragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::ValuedI32FragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::ValuedI32FragmentContext::getRuleIndex() const {
  return TypedefParser::RuleValuedI32Fragment;
}

void TypedefParser::ValuedI32FragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValuedI32Fragment(this);
}

void TypedefParser::ValuedI32FragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValuedI32Fragment(this);
}


antlrcpp::Any TypedefParser::ValuedI32FragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitValuedI32Fragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::ValuedI32FragmentContext* TypedefParser::valuedI32Fragment() {
  ValuedI32FragmentContext *_localctx = _tracker.createInstance<ValuedI32FragmentContext>(_ctx, getState());
  enterRule(_localctx, 60, TypedefParser::RuleValuedI32Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1109);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(1073);
        match(TypedefParser::COLON);
        setState(1077);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1074);
          match(TypedefParser::WS);
          setState(1079);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1080);
        match(TypedefParser::KW_I32);
        setState(1084);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1081);
          match(TypedefParser::WS);
          setState(1086);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1087);
        match(TypedefParser::EQ);
        setState(1091);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1088);
          match(TypedefParser::WS);
          setState(1093);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1094);
        dynamic_cast<ValuedI32FragmentContext *>(_localctx)->literal = i32Literal();
        setState(1096);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I32) {
          setState(1095);
          match(TypedefParser::KW_I32);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(1098);
        match(TypedefParser::EQ);
        setState(1102);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1099);
          match(TypedefParser::WS);
          setState(1104);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1105);
        dynamic_cast<ValuedI32FragmentContext *>(_localctx)->literal = i32Literal();
        setState(1107);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I32) {
          setState(1106);
          match(TypedefParser::KW_I32);
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

//----------------- ValuedI64FragmentContext ------------------------------------------------------------------

TypedefParser::ValuedI64FragmentContext::ValuedI64FragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::ValuedI64FragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValuedI64FragmentContext::KW_I64() {
  return getTokens(TypedefParser::KW_I64);
}

tree::TerminalNode* TypedefParser::ValuedI64FragmentContext::KW_I64(size_t i) {
  return getToken(TypedefParser::KW_I64, i);
}

tree::TerminalNode* TypedefParser::ValuedI64FragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::I64LiteralContext* TypedefParser::ValuedI64FragmentContext::i64Literal() {
  return getRuleContext<TypedefParser::I64LiteralContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValuedI64FragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::ValuedI64FragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::ValuedI64FragmentContext::getRuleIndex() const {
  return TypedefParser::RuleValuedI64Fragment;
}

void TypedefParser::ValuedI64FragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValuedI64Fragment(this);
}

void TypedefParser::ValuedI64FragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValuedI64Fragment(this);
}


antlrcpp::Any TypedefParser::ValuedI64FragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitValuedI64Fragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::ValuedI64FragmentContext* TypedefParser::valuedI64Fragment() {
  ValuedI64FragmentContext *_localctx = _tracker.createInstance<ValuedI64FragmentContext>(_ctx, getState());
  enterRule(_localctx, 62, TypedefParser::RuleValuedI64Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1146);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(1111);
        match(TypedefParser::COLON);
        setState(1115);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1112);
          match(TypedefParser::WS);
          setState(1117);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1118);
        match(TypedefParser::KW_I64);
        setState(1122);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1119);
          match(TypedefParser::WS);
          setState(1124);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1125);
        match(TypedefParser::EQ);
        setState(1129);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1126);
          match(TypedefParser::WS);
          setState(1131);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1132);
        dynamic_cast<ValuedI64FragmentContext *>(_localctx)->literal = i64Literal();
        setState(1134);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I64) {
          setState(1133);
          match(TypedefParser::KW_I64);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(1136);
        match(TypedefParser::EQ);
        setState(1140);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1137);
          match(TypedefParser::WS);
          setState(1142);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1143);
        dynamic_cast<ValuedI64FragmentContext *>(_localctx)->literal = i64Literal();
        setState(1144);
        match(TypedefParser::KW_I64);
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
  enterRule(_localctx, 64, TypedefParser::RuleTypedefVersionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1148);
    match(TypedefParser::KW_TYPEDEF);
    setState(1152);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(1149);
      match(TypedefParser::WS);
      setState(1154);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1155);
    match(TypedefParser::EQ);
    setState(1159);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(1156);
      match(TypedefParser::WS);
      setState(1161);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1162);
    dynamic_cast<TypedefVersionDeclarationContext *>(_localctx)->identifierContext = identifier();
    setState(1166);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(1163);
      match(TypedefParser::WS);
      setState(1168);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1169);
    match(TypedefParser::SEMI);
     dynamic_cast<TypedefVersionDeclarationContext *>(_localctx)->version =  dynamic_cast<TypedefVersionDeclarationContext *>(_localctx)->identifierContext->id; 
   
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
  enterRule(_localctx, 66, TypedefParser::RuleModuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1172);
    match(TypedefParser::KW_MODULE);
    setState(1174); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1173);
      match(TypedefParser::WS);
      setState(1176); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == TypedefParser::WS);
    setState(1178);
    dynamic_cast<ModuleDeclarationContext *>(_localctx)->simplePathContext = simplePath();
    setState(1182);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(1179);
      match(TypedefParser::WS);
      setState(1184);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1185);
    match(TypedefParser::SEMI);
     dynamic_cast<ModuleDeclarationContext *>(_localctx)->module =  dynamic_cast<ModuleDeclarationContext *>(_localctx)->simplePathContext->path; 
   
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
  enterRule(_localctx, 68, TypedefParser::RuleUseDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1188);
    match(TypedefParser::KW_USE);
    setState(1189);
    useTree();
    setState(1190);
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
  enterRule(_localctx, 70, TypedefParser::RuleUseTree);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(1221);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 157, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1196);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypedefParser::NON_KEYWORD_IDENTIFIER

      || _la == TypedefParser::RAW_ESCAPE || _la == TypedefParser::PATHSEP) {
        setState(1193);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 150, _ctx)) {
        case 1: {
          setState(1192);
          simplePath();
          break;
        }

        }
        setState(1195);
        match(TypedefParser::PATHSEP);
      }
      setState(1214);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypedefParser::STAR: {
          setState(1198);
          match(TypedefParser::STAR);
          break;
        }

        case TypedefParser::LBRACE: {
          setState(1199);
          match(TypedefParser::LBRACE);
          setState(1211);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (((((_la - 84) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 84)) & ((1ULL << (TypedefParser::NON_KEYWORD_IDENTIFIER - 84))
            | (1ULL << (TypedefParser::RAW_ESCAPE - 84))
            | (1ULL << (TypedefParser::STAR - 84)))) != 0) || _la == TypedefParser::PATHSEP

          || _la == TypedefParser::LBRACE) {
            setState(1200);
            useTree();
            setState(1205);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 152, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
              if (alt == 1) {
                setState(1201);
                match(TypedefParser::COMMA);
                setState(1202);
                useTree(); 
              }
              setState(1207);
              _errHandler->sync(this);
              alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 152, _ctx);
            }
            setState(1209);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == TypedefParser::COMMA) {
              setState(1208);
              match(TypedefParser::COMMA);
            }
          }
          setState(1213);
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
      setState(1216);
      simplePath();
      setState(1219);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypedefParser::KW_AS) {
        setState(1217);
        match(TypedefParser::KW_AS);
        setState(1218);
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
  enterRule(_localctx, 72, TypedefParser::RuleSimplePath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1224);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::PATHSEP) {
      setState(1223);
      match(TypedefParser::PATHSEP);
    }
    setState(1226);
    dynamic_cast<SimplePathContext *>(_localctx)->identifierContext = identifier();
    _localctx->path.push_back(dynamic_cast<SimplePathContext *>(_localctx)->identifierContext->id);
    setState(1234);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 159, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1228);
        match(TypedefParser::PATHSEP);
        setState(1229);
        dynamic_cast<SimplePathContext *>(_localctx)->identifierContext = identifier();
        _localctx->path.push_back(dynamic_cast<SimplePathContext *>(_localctx)->identifierContext->id); 
      }
      setState(1236);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 159, _ctx);
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
  enterRule(_localctx, 74, TypedefParser::RuleBoolLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1237);
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

    		// From boolLiteral grammar.
    		if (_localctx->start->getType() == TypedefParser::KW_FALSE) {
    			dynamic_cast<BoolLiteralContext *>(_localctx)->maybe_val =  false;
    		} else if (_localctx->start->getType() == TypedefParser::KW_TRUE) {
    			dynamic_cast<BoolLiteralContext *>(_localctx)->maybe_val =  true;
    		} else {
    			throw InputMismatchException(this);
    		}
    		// End from boolLiteral grammar.
      
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
  enterRule(_localctx, 76, TypedefParser::RuleCharLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1239);
    match(TypedefParser::CHAR_LITERAL);

    		dynamic_cast<CharLiteralContext *>(_localctx)->maybe_val =  GetCharValue(this, _localctx);
      
   
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

tree::TerminalNode* TypedefParser::F32LiteralContext::FLOAT_LITERAL() {
  return getToken(TypedefParser::FLOAT_LITERAL, 0);
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
  enterRule(_localctx, 78, TypedefParser::RuleF32Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1242);
    match(TypedefParser::FLOAT_LITERAL);

    		dynamic_cast<F32LiteralContext *>(_localctx)->maybe_val =  GetFloatValue<float>(this, _localctx);
      
   
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

tree::TerminalNode* TypedefParser::F64LiteralContext::FLOAT_LITERAL() {
  return getToken(TypedefParser::FLOAT_LITERAL, 0);
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
  enterRule(_localctx, 80, TypedefParser::RuleF64Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1245);
    match(TypedefParser::FLOAT_LITERAL);

    		dynamic_cast<F64LiteralContext *>(_localctx)->maybe_val =  GetFloatValue<double>(this, _localctx);
      
   
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

tree::TerminalNode* TypedefParser::U8LiteralContext::HEX_PREFIX() {
  return getToken(TypedefParser::HEX_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::U8LiteralContext::OCT_PREFIX() {
  return getToken(TypedefParser::OCT_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::U8LiteralContext::BIN_PREFIX() {
  return getToken(TypedefParser::BIN_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::U8LiteralContext::DEC_DIGITS() {
  return getToken(TypedefParser::DEC_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::U8LiteralContext::DEC_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::DEC_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::U8LiteralContext::HEX_DIGITS() {
  return getToken(TypedefParser::HEX_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::U8LiteralContext::HEX_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::HEX_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::U8LiteralContext::OCT_DIGITS() {
  return getToken(TypedefParser::OCT_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::U8LiteralContext::OCT_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::OCT_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::U8LiteralContext::BIN_DIGITS() {
  return getToken(TypedefParser::BIN_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::U8LiteralContext::BIN_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::BIN_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::U8LiteralContext::MINUS() {
  return getToken(TypedefParser::MINUS, 0);
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
  enterRule(_localctx, 82, TypedefParser::RuleU8Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1258);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1249);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1248);
          match(TypedefParser::MINUS);
        }
        setState(1251);
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
        setState(1252);
        match(TypedefParser::HEX_PREFIX);
        setState(1253);
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
        setState(1254);
        match(TypedefParser::OCT_PREFIX);
        setState(1255);
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
        setState(1256);
        match(TypedefParser::BIN_PREFIX);
        setState(1257);
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

    		dynamic_cast<U8LiteralContext *>(_localctx)->maybe_val =  GetIntValue<uint8_t>(this, _localctx);
      
   
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

tree::TerminalNode* TypedefParser::U16LiteralContext::HEX_PREFIX() {
  return getToken(TypedefParser::HEX_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::U16LiteralContext::OCT_PREFIX() {
  return getToken(TypedefParser::OCT_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::U16LiteralContext::BIN_PREFIX() {
  return getToken(TypedefParser::BIN_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::U16LiteralContext::DEC_DIGITS() {
  return getToken(TypedefParser::DEC_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::U16LiteralContext::DEC_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::DEC_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::U16LiteralContext::HEX_DIGITS() {
  return getToken(TypedefParser::HEX_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::U16LiteralContext::HEX_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::HEX_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::U16LiteralContext::OCT_DIGITS() {
  return getToken(TypedefParser::OCT_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::U16LiteralContext::OCT_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::OCT_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::U16LiteralContext::BIN_DIGITS() {
  return getToken(TypedefParser::BIN_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::U16LiteralContext::BIN_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::BIN_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::U16LiteralContext::MINUS() {
  return getToken(TypedefParser::MINUS, 0);
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
  enterRule(_localctx, 84, TypedefParser::RuleU16Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1272);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1263);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1262);
          match(TypedefParser::MINUS);
        }
        setState(1265);
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
        setState(1266);
        match(TypedefParser::HEX_PREFIX);
        setState(1267);
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
        setState(1268);
        match(TypedefParser::OCT_PREFIX);
        setState(1269);
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
        setState(1270);
        match(TypedefParser::BIN_PREFIX);
        setState(1271);
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

    		dynamic_cast<U16LiteralContext *>(_localctx)->maybe_val =  GetIntValue<uint16_t>(this, _localctx);
      
   
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

tree::TerminalNode* TypedefParser::U32LiteralContext::HEX_PREFIX() {
  return getToken(TypedefParser::HEX_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::U32LiteralContext::OCT_PREFIX() {
  return getToken(TypedefParser::OCT_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::U32LiteralContext::BIN_PREFIX() {
  return getToken(TypedefParser::BIN_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::U32LiteralContext::DEC_DIGITS() {
  return getToken(TypedefParser::DEC_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::U32LiteralContext::DEC_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::DEC_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::U32LiteralContext::HEX_DIGITS() {
  return getToken(TypedefParser::HEX_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::U32LiteralContext::HEX_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::HEX_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::U32LiteralContext::OCT_DIGITS() {
  return getToken(TypedefParser::OCT_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::U32LiteralContext::OCT_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::OCT_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::U32LiteralContext::BIN_DIGITS() {
  return getToken(TypedefParser::BIN_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::U32LiteralContext::BIN_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::BIN_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::U32LiteralContext::MINUS() {
  return getToken(TypedefParser::MINUS, 0);
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
  enterRule(_localctx, 86, TypedefParser::RuleU32Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1286);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1277);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1276);
          match(TypedefParser::MINUS);
        }
        setState(1279);
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
        setState(1280);
        match(TypedefParser::HEX_PREFIX);
        setState(1281);
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
        setState(1282);
        match(TypedefParser::OCT_PREFIX);
        setState(1283);
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
        setState(1284);
        match(TypedefParser::BIN_PREFIX);
        setState(1285);
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

    		dynamic_cast<U32LiteralContext *>(_localctx)->maybe_val =  GetIntValue<uint32_t>(this, _localctx);
      
   
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

tree::TerminalNode* TypedefParser::U64LiteralContext::HEX_PREFIX() {
  return getToken(TypedefParser::HEX_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::U64LiteralContext::OCT_PREFIX() {
  return getToken(TypedefParser::OCT_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::U64LiteralContext::BIN_PREFIX() {
  return getToken(TypedefParser::BIN_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::U64LiteralContext::DEC_DIGITS() {
  return getToken(TypedefParser::DEC_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::U64LiteralContext::DEC_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::DEC_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::U64LiteralContext::HEX_DIGITS() {
  return getToken(TypedefParser::HEX_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::U64LiteralContext::HEX_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::HEX_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::U64LiteralContext::OCT_DIGITS() {
  return getToken(TypedefParser::OCT_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::U64LiteralContext::OCT_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::OCT_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::U64LiteralContext::BIN_DIGITS() {
  return getToken(TypedefParser::BIN_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::U64LiteralContext::BIN_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::BIN_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::U64LiteralContext::MINUS() {
  return getToken(TypedefParser::MINUS, 0);
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
  enterRule(_localctx, 88, TypedefParser::RuleU64Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1300);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1291);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1290);
          match(TypedefParser::MINUS);
        }
        setState(1293);
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
        setState(1294);
        match(TypedefParser::HEX_PREFIX);
        setState(1295);
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
        setState(1296);
        match(TypedefParser::OCT_PREFIX);
        setState(1297);
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
        setState(1298);
        match(TypedefParser::BIN_PREFIX);
        setState(1299);
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

    		dynamic_cast<U64LiteralContext *>(_localctx)->maybe_val =  GetIntValue<uint64_t>(this, _localctx);
      
   
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

tree::TerminalNode* TypedefParser::I8LiteralContext::HEX_PREFIX() {
  return getToken(TypedefParser::HEX_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::I8LiteralContext::OCT_PREFIX() {
  return getToken(TypedefParser::OCT_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::I8LiteralContext::BIN_PREFIX() {
  return getToken(TypedefParser::BIN_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::I8LiteralContext::DEC_DIGITS() {
  return getToken(TypedefParser::DEC_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::I8LiteralContext::DEC_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::DEC_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::I8LiteralContext::HEX_DIGITS() {
  return getToken(TypedefParser::HEX_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::I8LiteralContext::HEX_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::HEX_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::I8LiteralContext::OCT_DIGITS() {
  return getToken(TypedefParser::OCT_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::I8LiteralContext::OCT_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::OCT_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::I8LiteralContext::BIN_DIGITS() {
  return getToken(TypedefParser::BIN_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::I8LiteralContext::BIN_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::BIN_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::I8LiteralContext::MINUS() {
  return getToken(TypedefParser::MINUS, 0);
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
  enterRule(_localctx, 90, TypedefParser::RuleI8Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1314);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1305);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1304);
          match(TypedefParser::MINUS);
        }
        setState(1307);
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
        setState(1308);
        match(TypedefParser::HEX_PREFIX);
        setState(1309);
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
        setState(1310);
        match(TypedefParser::OCT_PREFIX);
        setState(1311);
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
        setState(1312);
        match(TypedefParser::BIN_PREFIX);
        setState(1313);
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

    		dynamic_cast<I8LiteralContext *>(_localctx)->maybe_val =  GetIntValue<int8_t>(this, _localctx);
      
   
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

tree::TerminalNode* TypedefParser::I16LiteralContext::HEX_PREFIX() {
  return getToken(TypedefParser::HEX_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::I16LiteralContext::OCT_PREFIX() {
  return getToken(TypedefParser::OCT_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::I16LiteralContext::BIN_PREFIX() {
  return getToken(TypedefParser::BIN_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::I16LiteralContext::DEC_DIGITS() {
  return getToken(TypedefParser::DEC_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::I16LiteralContext::DEC_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::DEC_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::I16LiteralContext::HEX_DIGITS() {
  return getToken(TypedefParser::HEX_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::I16LiteralContext::HEX_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::HEX_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::I16LiteralContext::OCT_DIGITS() {
  return getToken(TypedefParser::OCT_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::I16LiteralContext::OCT_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::OCT_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::I16LiteralContext::BIN_DIGITS() {
  return getToken(TypedefParser::BIN_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::I16LiteralContext::BIN_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::BIN_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::I16LiteralContext::MINUS() {
  return getToken(TypedefParser::MINUS, 0);
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
  enterRule(_localctx, 92, TypedefParser::RuleI16Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1328);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1319);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1318);
          match(TypedefParser::MINUS);
        }
        setState(1321);
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
        setState(1322);
        match(TypedefParser::HEX_PREFIX);
        setState(1323);
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
        setState(1324);
        match(TypedefParser::OCT_PREFIX);
        setState(1325);
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
        setState(1326);
        match(TypedefParser::BIN_PREFIX);
        setState(1327);
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

    		dynamic_cast<I16LiteralContext *>(_localctx)->maybe_val =  GetIntValue<int16_t>(this, _localctx);
      
   
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

tree::TerminalNode* TypedefParser::I32LiteralContext::HEX_PREFIX() {
  return getToken(TypedefParser::HEX_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::I32LiteralContext::OCT_PREFIX() {
  return getToken(TypedefParser::OCT_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::I32LiteralContext::BIN_PREFIX() {
  return getToken(TypedefParser::BIN_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::I32LiteralContext::DEC_DIGITS() {
  return getToken(TypedefParser::DEC_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::I32LiteralContext::DEC_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::DEC_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::I32LiteralContext::HEX_DIGITS() {
  return getToken(TypedefParser::HEX_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::I32LiteralContext::HEX_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::HEX_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::I32LiteralContext::OCT_DIGITS() {
  return getToken(TypedefParser::OCT_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::I32LiteralContext::OCT_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::OCT_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::I32LiteralContext::BIN_DIGITS() {
  return getToken(TypedefParser::BIN_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::I32LiteralContext::BIN_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::BIN_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::I32LiteralContext::MINUS() {
  return getToken(TypedefParser::MINUS, 0);
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
  enterRule(_localctx, 94, TypedefParser::RuleI32Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1342);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1333);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1332);
          match(TypedefParser::MINUS);
        }
        setState(1335);
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
        setState(1336);
        match(TypedefParser::HEX_PREFIX);
        setState(1337);
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
        setState(1338);
        match(TypedefParser::OCT_PREFIX);
        setState(1339);
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
        setState(1340);
        match(TypedefParser::BIN_PREFIX);
        setState(1341);
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

    		dynamic_cast<I32LiteralContext *>(_localctx)->maybe_val =  GetIntValue<int32_t>(this, _localctx);
      
   
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

tree::TerminalNode* TypedefParser::I64LiteralContext::HEX_PREFIX() {
  return getToken(TypedefParser::HEX_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::I64LiteralContext::OCT_PREFIX() {
  return getToken(TypedefParser::OCT_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::I64LiteralContext::BIN_PREFIX() {
  return getToken(TypedefParser::BIN_PREFIX, 0);
}

tree::TerminalNode* TypedefParser::I64LiteralContext::DEC_DIGITS() {
  return getToken(TypedefParser::DEC_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::I64LiteralContext::DEC_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::DEC_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::I64LiteralContext::HEX_DIGITS() {
  return getToken(TypedefParser::HEX_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::I64LiteralContext::HEX_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::HEX_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::I64LiteralContext::OCT_DIGITS() {
  return getToken(TypedefParser::OCT_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::I64LiteralContext::OCT_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::OCT_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::I64LiteralContext::BIN_DIGITS() {
  return getToken(TypedefParser::BIN_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::I64LiteralContext::BIN_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::BIN_DIGITS_UNDERSCORE, 0);
}

tree::TerminalNode* TypedefParser::I64LiteralContext::MINUS() {
  return getToken(TypedefParser::MINUS, 0);
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
  enterRule(_localctx, 96, TypedefParser::RuleI64Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1356);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1347);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1346);
          match(TypedefParser::MINUS);
        }
        setState(1349);
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
        setState(1350);
        match(TypedefParser::HEX_PREFIX);
        setState(1351);
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
        setState(1352);
        match(TypedefParser::OCT_PREFIX);
        setState(1353);
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
        setState(1354);
        match(TypedefParser::BIN_PREFIX);
        setState(1355);
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

    		dynamic_cast<I64LiteralContext *>(_localctx)->maybe_val =  GetIntValue<int64_t>(this, _localctx);
      
   
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
  enterRule(_localctx, 98, TypedefParser::RuleStringLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1364);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(1360);
        dynamic_cast<StringLiteralContext *>(_localctx)->string_literalToken = match(TypedefParser::STRING_LITERAL);

        		dynamic_cast<StringLiteralContext *>(_localctx)->maybe_val =  GetStringValue(this, dynamic_cast<StringLiteralContext *>(_localctx)->string_literalToken);
        	
        break;
      }

      case TypedefParser::RAW_STRING_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(1362);
        dynamic_cast<StringLiteralContext *>(_localctx)->raw_string_literalToken = match(TypedefParser::RAW_STRING_LITERAL);

        		dynamic_cast<StringLiteralContext *>(_localctx)->maybe_val =  GetRawString(this, dynamic_cast<StringLiteralContext *>(_localctx)->raw_string_literalToken);
        	
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
  enterRule(_localctx, 100, TypedefParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1369);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::NON_KEYWORD_IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(1366);
        dynamic_cast<IdentifierContext *>(_localctx)->nki = match(TypedefParser::NON_KEYWORD_IDENTIFIER);
        break;
      }

      case TypedefParser::RAW_ESCAPE: {
        enterOuterAlt(_localctx, 2);
        setState(1367);
        match(TypedefParser::RAW_ESCAPE);
        setState(1368);
        dynamic_cast<IdentifierContext *>(_localctx)->nki = match(TypedefParser::NON_KEYWORD_IDENTIFIER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   _ctx->stop = _input->LT(-1);

    		dynamic_cast<IdentifierContext *>(_localctx)->id =  dynamic_cast<IdentifierContext *>(_localctx)->nki->getText();
      
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
  enterRule(_localctx, 102, TypedefParser::RuleKeyword);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1371);
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
      | (1ULL << TypedefParser::KW_SWITCH)
      | (1ULL << TypedefParser::KW_TYPEOF))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (TypedefParser::KW_UNION - 64))
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
  "compilationUnit", "maybeValuedSymbolDeclaration", "typeDeclaration", 
  "structDeclaration", "variantDeclaration", "vectorDeclaration", "mapDeclaration", 
  "maybeValuedSymbol", "unvaluedSymbol", "inlineStruct", "inlineVariant", 
  "inlineVector", "inlineMap", "maybeValuedType", "valuedType", "unvaluedType", 
  "symbolReference", "primitiveType", "valuedPrimitiveType", "valuedBoolFragment", 
  "valuedCharFragment", "valuedStringFragment", "valuedF32Fragment", "valuedF64Fragment", 
  "valuedU8Fragment", "valuedU16Fragment", "valuedU32Fragment", "valuedU64Fragment", 
  "valuedI8Fragment", "valuedI16Fragment", "valuedI32Fragment", "valuedI64Fragment", 
  "typedefVersionDeclaration", "moduleDeclaration", "useDeclaration", "useTree", 
  "simplePath", "boolLiteral", "charLiteral", "f32Literal", "f64Literal", 
  "u8Literal", "u16Literal", "u32Literal", "u64Literal", "i8Literal", "i16Literal", 
  "i32Literal", "i64Literal", "stringLiteral", "identifier", "keyword"
};

std::vector<std::string> TypedefParser::_literalNames = {
  "", "'array'", "'as'", "'enum'", "'false'", "'fn'", "'impl'", "'message'", 
  "'module'", "'struct'", "'true'", "'type'", "'typedef'", "'use'", "'variant'", 
  "'vector'", "'map'", "'and'", "'in'", "'let'", "'not'", "'or'", "'sizeof'", 
  "'this'", "'trait'", "'where'", "'xor'", "'break'", "'continue'", "'default'", 
  "'do'", "'else'", "'for'", "'goto'", "'if'", "'loop'", "'match'", "'move'", 
  "'return'", "'try'", "'while'", "'yield'", "'abstract'", "'auto'", "'const'", 
  "'double'", "'extern'", "'final'", "'float'", "'int'", "'long'", "'macro'", 
  "'mut'", "'override'", "'private'", "'pub'", "'ref'", "'Self'", "'self'", 
  "'signed'", "'static'", "'super'", "'switch'", "'typeof'", "'union'", 
  "'unsafe'", "'unsigned'", "'unsized'", "'virtual'", "'void'", "'volatile'", 
  "'bool'", "'char'", "'str'", "'f32'", "'f64'", "'u8'", "'u16'", "'u32'", 
  "'u64'", "'i8'", "'i16'", "'i32'", "'i64'", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "'0x'", "'0o'", "'0b'", "'r#'", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", 
  "'!'", "'&'", "'|'", "'&&'", "'||'", "'+='", "'-='", "'*='", "'/='", "'%='", 
  "'^='", "'&='", "'|='", "'<<='", "'>>='", "'='", "'=='", "'!='", "'>'", 
  "'<'", "'>='", "'<='", "'@'", "'_'", "'.'", "'..'", "'...'", "','", "';'", 
  "':'", "'::'", "'->'", "'=>'", "'#'", "'$'", "'?'", "'{'", "'}'", "'['", 
  "']'", "'('", "')'"
};

std::vector<std::string> TypedefParser::_symbolicNames = {
  "", "KW_ARRAY", "KW_AS", "KW_ENUM", "KW_FALSE", "KW_FN", "KW_IMPL", "KW_MESSAGE", 
  "KW_MODULE", "KW_STRUCT", "KW_TRUE", "KW_TYPE", "KW_TYPEDEF", "KW_USE", 
  "KW_VARIANT", "KW_VECTOR", "KW_MAP", "KW_AND", "KW_IN", "KW_LET", "KW_NOT", 
  "KW_OR", "KW_SIZEOF", "KW_THIS", "KW_TRAIT", "KW_WHERE", "KW_XOR", "KW_BREAK", 
  "KW_CONTINUE", "KW_DEFAULT", "KW_DO", "KW_ELSE", "KW_FOR", "KW_GOTO", 
  "KW_IF", "KW_LOOP", "KW_MATCH", "KW_MOVE", "KW_RETURN", "KW_TRY", "KW_WHILE", 
  "KW_YIELD", "KW_ABSTRACT", "KW_AUTO", "KW_CONST", "KW_DOUBLE", "KW_EXTERN", 
  "KW_FINAL", "KW_FLOAT", "KW_INT", "KW_LONG", "KW_MACRO", "KW_MUT", "KW_OVERRIDE", 
  "KW_PRIVATE", "KW_PUB", "KW_REF", "KW_SELFTYPE", "KW_SELFVALUE", "KW_SIGNED", 
  "KW_STATIC", "KW_SUPER", "KW_SWITCH", "KW_TYPEOF", "KW_UNION", "KW_UNSAFE", 
  "KW_UNSIGNED", "KW_UNSIZED", "KW_VIRTUAL", "KW_VOID", "KW_VOLATILE", "KW_BOOL", 
  "KW_CHAR", "KW_STRING", "KW_F32", "KW_F64", "KW_U8", "KW_U16", "KW_U32", 
  "KW_U64", "KW_I8", "KW_I16", "KW_I32", "KW_I64", "NON_KEYWORD_IDENTIFIER", 
  "LINE_COMMENT", "BLOCK_COMMENT", "INNER_LINE_DOC", "INNER_BLOCK_DOC", 
  "OUTER_LINE_DOC", "OUTER_BLOCK_DOC", "BLOCK_COMMENT_OR_DOC", "SHEBANG", 
  "WS", "CHAR_LITERAL", "STRING_LITERAL", "RAW_STRING_LITERAL", "DEC_DIGITS", 
  "DEC_DIGITS_UNDERSCORE", "HEX_DIGITS", "HEX_DIGITS_UNDERSCORE", "OCT_DIGITS", 
  "OCT_DIGITS_UNDERSCORE", "BIN_DIGITS", "BIN_DIGITS_UNDERSCORE", "FLOAT_LITERAL", 
  "OCT_DIGIT", "DEC_DIGIT", "HEX_DIGIT", "HEX_PREFIX", "OCT_PREFIX", "BIN_PREFIX", 
  "RAW_ESCAPE", "PLUS", "MINUS", "STAR", "SLASH", "PERCENT", "CARET", "NOT", 
  "AND", "OR", "ANDAND", "OROR", "PLUSEQ", "MINUSEQ", "STAREQ", "SLASHEQ", 
  "PERCENTEQ", "CARETEQ", "ANDEQ", "OREQ", "SHLEQ", "SHREQ", "EQ", "EQEQ", 
  "NE", "GT", "LT", "GE", "LE", "AT", "UNDERSCORE", "DOT", "DOTDOT", "DOTDOTDOT", 
  "COMMA", "SEMI", "COLON", "PATHSEP", "RARROW", "FATARROW", "POUND", "DOLLAR", 
  "QUESTION", "LBRACE", "RBRACE", "LBRACK", "RBRACK", "LPAREN", "RPAREN"
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
    0x3, 0xa2, 0x560, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x6e, 0xa, 0x2, 0xc, 0x2, 0xe, 
    0x2, 0x71, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x76, 0xa, 
    0x2, 0x3, 0x2, 0x7, 0x2, 0x79, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x7c, 0xb, 
    0x2, 0x3, 0x2, 0x7, 0x2, 0x7f, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x82, 0xb, 
    0x2, 0x3, 0x2, 0x7, 0x2, 0x85, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x88, 0xb, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x8d, 0xa, 0x2, 0xc, 0x2, 
    0xe, 0x2, 0x90, 0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0x93, 0xa, 0x2, 0xc, 0x2, 
    0xe, 0x2, 0x96, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x7, 
    0x3, 0x9c, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x9f, 0xb, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0xaf, 
    0xa, 0x4, 0x3, 0x4, 0x7, 0x4, 0xb2, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0xb5, 
    0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xbb, 0xa, 
    0x5, 0xc, 0x5, 0xe, 0x5, 0xbe, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 
    0xc2, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xc5, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x7, 0x5, 0xc9, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xcc, 0xb, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xd1, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xd4, 
    0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xd8, 0xa, 0x5, 0xc, 0x5, 0xe, 
    0x5, 0xdb, 0xb, 0x5, 0x7, 0x5, 0xdd, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xe0, 
    0xb, 0x5, 0x3, 0x5, 0x7, 0x5, 0xe3, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xe6, 
    0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 
    0xed, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0xf0, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x7, 0x6, 0xf4, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0xf7, 0xb, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x7, 0x6, 0xfb, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0xfe, 0xb, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x103, 0xa, 0x6, 0xc, 0x6, 0xe, 
    0x6, 0x106, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x10a, 0xa, 0x6, 
    0xc, 0x6, 0xe, 0x6, 0x10d, 0xb, 0x6, 0x7, 0x6, 0x10f, 0xa, 0x6, 0xc, 
    0x6, 0xe, 0x6, 0x112, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x7, 0x7, 0x119, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x11c, 0xb, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x120, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 
    0x123, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x127, 0xa, 0x7, 0xc, 
    0x7, 0xe, 0x7, 0x12a, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x12e, 
    0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x131, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x138, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 
    0x13b, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x13f, 0xa, 0x8, 0xc, 
    0x8, 0xe, 0x8, 0x142, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x146, 
    0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x149, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 
    0x8, 0x14d, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x150, 0xb, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x7, 0x8, 0x154, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x157, 0xb, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x15b, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 
    0x15e, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x7, 
    0x9, 0x165, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x168, 0xb, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x7, 0x9, 0x16c, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x16f, 0xb, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x176, 
    0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x7, 0xa, 0x186, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x189, 0xb, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x18d, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 
    0x190, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x195, 0xa, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x199, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 
    0x19c, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x1a0, 0xa, 0xb, 0xc, 
    0xb, 0xe, 0xb, 0x1a3, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x1a7, 
    0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x1aa, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 
    0xb, 0x1ae, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x1b1, 0xb, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x1b6, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x1b9, 
    0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x1bd, 0xa, 0xb, 0xc, 0xb, 0xe, 
    0xb, 0x1c0, 0xb, 0xb, 0x7, 0xb, 0x1c2, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 
    0x1c5, 0xb, 0xb, 0x3, 0xb, 0x7, 0xb, 0x1c8, 0xa, 0xb, 0xc, 0xb, 0xe, 
    0xb, 0x1cb, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x7, 0xc, 0x1d2, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x1d5, 0xb, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x7, 0xc, 0x1d9, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x1dc, 
    0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x1e0, 0xa, 0xc, 0xc, 0xc, 0xe, 
    0xc, 0x1e3, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x1e7, 0xa, 0xc, 
    0xc, 0xc, 0xe, 0xc, 0x1ea, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 
    0xc, 0x1ef, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x1f2, 0xb, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x7, 0xc, 0x1f6, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x1f9, 0xb, 
    0xc, 0x7, 0xc, 0x1fb, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x1fe, 0xb, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x205, 0xa, 
    0xd, 0xc, 0xd, 0xe, 0xd, 0x208, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 
    0x20c, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x20f, 0xb, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x7, 0xd, 0x213, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x216, 0xb, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x21a, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x21d, 
    0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x221, 0xa, 0xd, 0xc, 0xd, 0xe, 
    0xd, 0x224, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 
    0x7, 0xe, 0x22b, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x22e, 0xb, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x7, 0xe, 0x232, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x235, 
    0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x239, 0xa, 0xe, 0xc, 0xe, 0xe, 
    0xe, 0x23c, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x240, 0xa, 0xe, 
    0xc, 0xe, 0xe, 0xe, 0x243, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x247, 
    0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x24a, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 
    0xe, 0x24e, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x251, 0xb, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x7, 0xe, 0x255, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x258, 0xb, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x7, 0xf, 0x262, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x265, 
    0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x26b, 0xa, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x276, 0xa, 0x11, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x295, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x2be, 
    0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x2c2, 0xa, 0x15, 0xc, 0x15, 
    0xe, 0x15, 0x2c5, 0xb, 0x15, 0x3, 0x15, 0x5, 0x15, 0x2c8, 0xa, 0x15, 
    0x3, 0x15, 0x7, 0x15, 0x2cb, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x2ce, 
    0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x2d2, 0xa, 0x15, 0xc, 0x15, 
    0xe, 0x15, 0x2d5, 0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 
    0x7, 0x16, 0x2db, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x2de, 0xb, 0x16, 
    0x3, 0x16, 0x5, 0x16, 0x2e1, 0xa, 0x16, 0x3, 0x16, 0x7, 0x16, 0x2e4, 
    0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x2e7, 0xb, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x7, 0x16, 0x2eb, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x2ee, 0xb, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x2f4, 0xa, 0x17, 
    0xc, 0x17, 0xe, 0x17, 0x2f7, 0xb, 0x17, 0x3, 0x17, 0x5, 0x17, 0x2fa, 
    0xa, 0x17, 0x3, 0x17, 0x7, 0x17, 0x2fd, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 
    0x300, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x304, 0xa, 0x17, 
    0xc, 0x17, 0xe, 0x17, 0x307, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x7, 0x18, 0x30d, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x310, 
    0xb, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x314, 0xa, 0x18, 0xc, 0x18, 
    0xe, 0x18, 0x317, 0xb, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x31b, 
    0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x31e, 0xb, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x5, 0x18, 0x322, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x326, 
    0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x329, 0xb, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x5, 0x18, 0x32d, 0xa, 0x18, 0x5, 0x18, 0x32f, 0xa, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x7, 0x19, 0x333, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x336, 
    0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x33a, 0xa, 0x19, 0xc, 0x19, 
    0xe, 0x19, 0x33d, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x341, 
    0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x344, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x5, 0x19, 0x348, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x34c, 
    0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x34f, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x5, 0x19, 0x354, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 
    0x358, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x35b, 0xb, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x7, 0x1a, 0x35f, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x362, 
    0xb, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x366, 0xa, 0x1a, 0xc, 0x1a, 
    0xe, 0x1a, 0x369, 0xb, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x36d, 
    0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x371, 0xa, 0x1a, 0xc, 0x1a, 
    0xe, 0x1a, 0x374, 0xb, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 
    0x379, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x37d, 0xa, 0x1b, 
    0xc, 0x1b, 0xe, 0x1b, 0x380, 0xb, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 
    0x384, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x387, 0xb, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x7, 0x1b, 0x38b, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x38e, 
    0xb, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x392, 0xa, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x7, 0x1b, 0x396, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x399, 
    0xb, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x39e, 0xa, 0x1b, 
    0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x3a2, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 
    0x3a5, 0xb, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x3a9, 0xa, 0x1c, 
    0xc, 0x1c, 0xe, 0x1c, 0x3ac, 0xb, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 
    0x3b0, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x3b3, 0xb, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x5, 0x1c, 0x3b7, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 
    0x3bb, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x3be, 0xb, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x3c3, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x7, 0x1d, 0x3c7, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x3ca, 0xb, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x3ce, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 
    0x3d1, 0xb, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x3d5, 0xa, 0x1d, 
    0xc, 0x1d, 0xe, 0x1d, 0x3d8, 0xb, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 
    0x3dc, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x3e0, 0xa, 0x1d, 
    0xc, 0x1d, 0xe, 0x1d, 0x3e3, 0xb, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x5, 0x1d, 0x3e8, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x3ec, 
    0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x3ef, 0xb, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x7, 0x1e, 0x3f3, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x3f6, 0xb, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x3fa, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 
    0x3fd, 0xb, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x401, 0xa, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x405, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 
    0x408, 0xb, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x40d, 
    0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x411, 0xa, 0x1f, 0xc, 0x1f, 
    0xe, 0x1f, 0x414, 0xb, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x418, 
    0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x41b, 0xb, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x7, 0x1f, 0x41f, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x422, 0xb, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x426, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x7, 0x1f, 0x42a, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x42d, 0xb, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x432, 0xa, 0x1f, 0x3, 0x20, 
    0x3, 0x20, 0x7, 0x20, 0x436, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x439, 
    0xb, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x43d, 0xa, 0x20, 0xc, 0x20, 
    0xe, 0x20, 0x440, 0xb, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x444, 
    0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x447, 0xb, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x5, 0x20, 0x44b, 0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x44f, 
    0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x452, 0xb, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x5, 0x20, 0x456, 0xa, 0x20, 0x5, 0x20, 0x458, 0xa, 0x20, 0x3, 0x21, 
    0x3, 0x21, 0x7, 0x21, 0x45c, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x45f, 
    0xb, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x463, 0xa, 0x21, 0xc, 0x21, 
    0xe, 0x21, 0x466, 0xb, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x46a, 
    0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x46d, 0xb, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x5, 0x21, 0x471, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x475, 
    0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x478, 0xb, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x5, 0x21, 0x47d, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 
    0x481, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x484, 0xb, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x7, 0x22, 0x488, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x48b, 
    0xb, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x48f, 0xa, 0x22, 0xc, 0x22, 
    0xe, 0x22, 0x492, 0xb, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 
    0x3, 0x23, 0x6, 0x23, 0x499, 0xa, 0x23, 0xd, 0x23, 0xe, 0x23, 0x49a, 
    0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x49f, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 
    0x4a2, 0xb, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x5, 0x25, 0x4ac, 0xa, 0x25, 0x3, 0x25, 
    0x5, 0x25, 0x4af, 0xa, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x7, 0x25, 0x4b6, 0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 0x4b9, 
    0xb, 0x25, 0x3, 0x25, 0x5, 0x25, 0x4bc, 0xa, 0x25, 0x5, 0x25, 0x4be, 
    0xa, 0x25, 0x3, 0x25, 0x5, 0x25, 0x4c1, 0xa, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x5, 0x25, 0x4c6, 0xa, 0x25, 0x5, 0x25, 0x4c8, 0xa, 0x25, 
    0x3, 0x26, 0x5, 0x26, 0x4cb, 0xa, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x7, 0x26, 0x4d3, 0xa, 0x26, 0xc, 0x26, 
    0xe, 0x26, 0x4d6, 0xb, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
    0x2a, 0x3, 0x2b, 0x5, 0x2b, 0x4e4, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x4ed, 
    0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x5, 0x2c, 0x4f2, 0xa, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 
    0x2c, 0x5, 0x2c, 0x4fb, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 
    0x5, 0x2d, 0x500, 0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x509, 0xa, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2e, 0x5, 0x2e, 0x50e, 0xa, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x517, 
    0xa, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x5, 0x2f, 0x51c, 0xa, 0x2f, 
    0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
    0x2f, 0x5, 0x2f, 0x525, 0xa, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 
    0x5, 0x30, 0x52a, 0xa, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x533, 0xa, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x31, 0x5, 0x31, 0x538, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x541, 
    0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x5, 0x32, 0x546, 0xa, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x32, 0x5, 0x32, 0x54f, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x557, 0xa, 0x33, 0x3, 0x34, 
    0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x55c, 0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x35, 0x2, 0x2, 0x36, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
    0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 
    0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x2, 0x8, 0x4, 0x2, 
    0x6, 0x6, 0xc, 0xc, 0x3, 0x2, 0x63, 0x64, 0x3, 0x2, 0x65, 0x66, 0x3, 
    0x2, 0x67, 0x68, 0x3, 0x2, 0x69, 0x6a, 0x4, 0x2, 0x4, 0x8, 0xa, 0x48, 
    0x2, 0x608, 0x2, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x4, 0x99, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0xae, 0x3, 0x2, 0x2, 0x2, 0x8, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0xea, 0x3, 0x2, 0x2, 0x2, 0xc, 0x116, 0x3, 0x2, 0x2, 0x2, 0xe, 0x135, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x175, 0x3, 0x2, 0x2, 0x2, 0x12, 0x194, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x196, 0x3, 0x2, 0x2, 0x2, 0x16, 0x1cf, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x202, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x228, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x26c, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x275, 0x3, 0x2, 0x2, 0x2, 0x22, 0x277, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x294, 0x3, 0x2, 0x2, 0x2, 0x26, 0x2bd, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2c7, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2f9, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x30, 0x353, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x378, 0x3, 0x2, 0x2, 0x2, 0x34, 0x39d, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x3c2, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3e7, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x431, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x457, 0x3, 0x2, 0x2, 0x2, 0x40, 0x47c, 0x3, 0x2, 0x2, 0x2, 0x42, 0x47e, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x496, 0x3, 0x2, 0x2, 0x2, 0x46, 0x4a6, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x4c7, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4ca, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x4d7, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4d9, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x4dc, 0x3, 0x2, 0x2, 0x2, 0x52, 0x4df, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x4ec, 0x3, 0x2, 0x2, 0x2, 0x56, 0x4fa, 0x3, 0x2, 0x2, 0x2, 0x58, 
    0x508, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x516, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x524, 
    0x3, 0x2, 0x2, 0x2, 0x5e, 0x532, 0x3, 0x2, 0x2, 0x2, 0x60, 0x540, 0x3, 
    0x2, 0x2, 0x2, 0x62, 0x54e, 0x3, 0x2, 0x2, 0x2, 0x64, 0x556, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x55b, 0x3, 0x2, 0x2, 0x2, 0x68, 0x55d, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x6b, 0x5, 0x42, 0x22, 0x2, 0x6b, 0x6f, 0x8, 0x2, 0x1, 0x2, 
    0x6c, 0x6e, 0x7, 0x5f, 0x2, 0x2, 0x6d, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6e, 
    0x71, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 
    0x3, 0x2, 0x2, 0x2, 0x70, 0x75, 0x3, 0x2, 0x2, 0x2, 0x71, 0x6f, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x73, 0x5, 0x44, 0x23, 0x2, 0x73, 0x74, 0x8, 0x2, 
    0x1, 0x2, 0x74, 0x76, 0x3, 0x2, 0x2, 0x2, 0x75, 0x72, 0x3, 0x2, 0x2, 
    0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 0x80, 0x3, 0x2, 0x2, 0x2, 
    0x77, 0x79, 0x7, 0x5f, 0x2, 0x2, 0x78, 0x77, 0x3, 0x2, 0x2, 0x2, 0x79, 
    0x7c, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 
    0x3, 0x2, 0x2, 0x2, 0x7b, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7a, 0x3, 
    0x2, 0x2, 0x2, 0x7d, 0x7f, 0x5, 0x46, 0x24, 0x2, 0x7e, 0x7a, 0x3, 0x2, 
    0x2, 0x2, 0x7f, 0x82, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7e, 0x3, 0x2, 0x2, 
    0x2, 0x80, 0x81, 0x3, 0x2, 0x2, 0x2, 0x81, 0x8e, 0x3, 0x2, 0x2, 0x2, 
    0x82, 0x80, 0x3, 0x2, 0x2, 0x2, 0x83, 0x85, 0x7, 0x5f, 0x2, 0x2, 0x84, 
    0x83, 0x3, 0x2, 0x2, 0x2, 0x85, 0x88, 0x3, 0x2, 0x2, 0x2, 0x86, 0x84, 
    0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x89, 0x3, 
    0x2, 0x2, 0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x5, 0x6, 
    0x4, 0x2, 0x8a, 0x8b, 0x8, 0x2, 0x1, 0x2, 0x8b, 0x8d, 0x3, 0x2, 0x2, 
    0x2, 0x8c, 0x86, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x90, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8f, 
    0x94, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x91, 0x93, 
    0x7, 0x5f, 0x2, 0x2, 0x92, 0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 0x96, 0x3, 
    0x2, 0x2, 0x2, 0x94, 0x92, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x3, 0x2, 
    0x2, 0x2, 0x95, 0x97, 0x3, 0x2, 0x2, 0x2, 0x96, 0x94, 0x3, 0x2, 0x2, 
    0x2, 0x97, 0x98, 0x7, 0x2, 0x2, 0x3, 0x98, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x99, 0x9d, 0x5, 0x10, 0x9, 0x2, 0x9a, 0x9c, 0x7, 0x5f, 0x2, 0x2, 0x9b, 
    0x9a, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9b, 
    0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa0, 0x3, 
    0x2, 0x2, 0x2, 0x9f, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x7, 0x95, 
    0x2, 0x2, 0xa1, 0x5, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x5, 0x8, 0x5, 
    0x2, 0xa3, 0xa4, 0x8, 0x4, 0x1, 0x2, 0xa4, 0xaf, 0x3, 0x2, 0x2, 0x2, 
    0xa5, 0xa6, 0x5, 0xa, 0x6, 0x2, 0xa6, 0xa7, 0x8, 0x4, 0x1, 0x2, 0xa7, 
    0xaf, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x5, 0xc, 0x7, 0x2, 0xa9, 0xaa, 
    0x8, 0x4, 0x1, 0x2, 0xaa, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x5, 
    0xe, 0x8, 0x2, 0xac, 0xad, 0x8, 0x4, 0x1, 0x2, 0xad, 0xaf, 0x3, 0x2, 
    0x2, 0x2, 0xae, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xae, 0xa5, 0x3, 0x2, 0x2, 
    0x2, 0xae, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xae, 0xab, 0x3, 0x2, 0x2, 0x2, 
    0xaf, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb2, 0x7, 0x5f, 0x2, 0x2, 0xb1, 
    0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb1, 
    0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb6, 0x3, 
    0x2, 0x2, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x7, 0x95, 
    0x2, 0x2, 0xb7, 0x7, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xbc, 0x7, 0xb, 0x2, 
    0x2, 0xb9, 0xbb, 0x7, 0x5f, 0x2, 0x2, 0xba, 0xb9, 0x3, 0x2, 0x2, 0x2, 
    0xbb, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbc, 
    0xbd, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbc, 
    0x3, 0x2, 0x2, 0x2, 0xbf, 0xc3, 0x5, 0x66, 0x34, 0x2, 0xc0, 0xc2, 0x7, 
    0x5f, 0x2, 0x2, 0xc1, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc5, 0x3, 0x2, 
    0x2, 0x2, 0xc3, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x3, 0x2, 0x2, 
    0x2, 0xc4, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc3, 0x3, 0x2, 0x2, 0x2, 
    0xc6, 0xca, 0x7, 0x9d, 0x2, 0x2, 0xc7, 0xc9, 0x7, 0x5f, 0x2, 0x2, 0xc8, 
    0xc7, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xca, 0xc8, 
    0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xde, 0x3, 
    0x2, 0x2, 0x2, 0xcc, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x5, 0x10, 
    0x9, 0x2, 0xce, 0xd2, 0x8, 0x5, 0x1, 0x2, 0xcf, 0xd1, 0x7, 0x5f, 0x2, 
    0x2, 0xd0, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd4, 0x3, 0x2, 0x2, 0x2, 
    0xd2, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 
    0xd5, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd9, 
    0x7, 0x95, 0x2, 0x2, 0xd6, 0xd8, 0x7, 0x5f, 0x2, 0x2, 0xd7, 0xd6, 0x3, 
    0x2, 0x2, 0x2, 0xd8, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xd7, 0x3, 0x2, 
    0x2, 0x2, 0xd9, 0xda, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdd, 0x3, 0x2, 0x2, 
    0x2, 0xdb, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xcd, 0x3, 0x2, 0x2, 0x2, 
    0xdd, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xde, 
    0xdf, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xde, 
    0x3, 0x2, 0x2, 0x2, 0xe1, 0xe3, 0x7, 0x5f, 0x2, 0x2, 0xe2, 0xe1, 0x3, 
    0x2, 0x2, 0x2, 0xe3, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe2, 0x3, 0x2, 
    0x2, 0x2, 0xe4, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe7, 0x3, 0x2, 0x2, 
    0x2, 0xe6, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x7, 0x9e, 0x2, 0x2, 
    0xe8, 0xe9, 0x8, 0x5, 0x1, 0x2, 0xe9, 0x9, 0x3, 0x2, 0x2, 0x2, 0xea, 
    0xee, 0x7, 0x10, 0x2, 0x2, 0xeb, 0xed, 0x7, 0x5f, 0x2, 0x2, 0xec, 0xeb, 
    0x3, 0x2, 0x2, 0x2, 0xed, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xee, 0xec, 0x3, 
    0x2, 0x2, 0x2, 0xee, 0xef, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf1, 0x3, 0x2, 
    0x2, 0x2, 0xf0, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf5, 0x5, 0x66, 0x34, 
    0x2, 0xf2, 0xf4, 0x7, 0x5f, 0x2, 0x2, 0xf3, 0xf2, 0x3, 0x2, 0x2, 0x2, 
    0xf4, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf5, 
    0xf6, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf5, 
    0x3, 0x2, 0x2, 0x2, 0xf8, 0x110, 0x7, 0x9d, 0x2, 0x2, 0xf9, 0xfb, 0x7, 
    0x5f, 0x2, 0x2, 0xfa, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfe, 0x3, 0x2, 
    0x2, 0x2, 0xfc, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x3, 0x2, 0x2, 
    0x2, 0xfd, 0xff, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfc, 0x3, 0x2, 0x2, 0x2, 
    0xff, 0x100, 0x5, 0x12, 0xa, 0x2, 0x100, 0x104, 0x8, 0x6, 0x1, 0x2, 
    0x101, 0x103, 0x7, 0x5f, 0x2, 0x2, 0x102, 0x101, 0x3, 0x2, 0x2, 0x2, 
    0x103, 0x106, 0x3, 0x2, 0x2, 0x2, 0x104, 0x102, 0x3, 0x2, 0x2, 0x2, 
    0x104, 0x105, 0x3, 0x2, 0x2, 0x2, 0x105, 0x107, 0x3, 0x2, 0x2, 0x2, 
    0x106, 0x104, 0x3, 0x2, 0x2, 0x2, 0x107, 0x10b, 0x7, 0x95, 0x2, 0x2, 
    0x108, 0x10a, 0x7, 0x5f, 0x2, 0x2, 0x109, 0x108, 0x3, 0x2, 0x2, 0x2, 
    0x10a, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x109, 0x3, 0x2, 0x2, 0x2, 
    0x10b, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10f, 0x3, 0x2, 0x2, 0x2, 
    0x10d, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10e, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x10f, 
    0x112, 0x3, 0x2, 0x2, 0x2, 0x110, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x110, 
    0x111, 0x3, 0x2, 0x2, 0x2, 0x111, 0x113, 0x3, 0x2, 0x2, 0x2, 0x112, 
    0x110, 0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 0x7, 0x9e, 0x2, 0x2, 0x114, 
    0x115, 0x8, 0x6, 0x1, 0x2, 0x115, 0xb, 0x3, 0x2, 0x2, 0x2, 0x116, 0x11a, 
    0x7, 0x11, 0x2, 0x2, 0x117, 0x119, 0x7, 0x5f, 0x2, 0x2, 0x118, 0x117, 
    0x3, 0x2, 0x2, 0x2, 0x119, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x118, 
    0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11d, 
    0x3, 0x2, 0x2, 0x2, 0x11c, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x121, 
    0x5, 0x66, 0x34, 0x2, 0x11e, 0x120, 0x7, 0x5f, 0x2, 0x2, 0x11f, 0x11e, 
    0x3, 0x2, 0x2, 0x2, 0x120, 0x123, 0x3, 0x2, 0x2, 0x2, 0x121, 0x11f, 
    0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x3, 0x2, 0x2, 0x2, 0x122, 0x124, 
    0x3, 0x2, 0x2, 0x2, 0x123, 0x121, 0x3, 0x2, 0x2, 0x2, 0x124, 0x128, 
    0x7, 0x8c, 0x2, 0x2, 0x125, 0x127, 0x7, 0x5f, 0x2, 0x2, 0x126, 0x125, 
    0x3, 0x2, 0x2, 0x2, 0x127, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x128, 0x126, 
    0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12b, 
    0x3, 0x2, 0x2, 0x2, 0x12a, 0x128, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12f, 
    0x5, 0x20, 0x11, 0x2, 0x12c, 0x12e, 0x7, 0x5f, 0x2, 0x2, 0x12d, 0x12c, 
    0x3, 0x2, 0x2, 0x2, 0x12e, 0x131, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x12d, 
    0x3, 0x2, 0x2, 0x2, 0x12f, 0x130, 0x3, 0x2, 0x2, 0x2, 0x130, 0x132, 
    0x3, 0x2, 0x2, 0x2, 0x131, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 
    0x7, 0x8b, 0x2, 0x2, 0x133, 0x134, 0x8, 0x7, 0x1, 0x2, 0x134, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x135, 0x139, 0x7, 0x12, 0x2, 0x2, 0x136, 0x138, 0x7, 
    0x5f, 0x2, 0x2, 0x137, 0x136, 0x3, 0x2, 0x2, 0x2, 0x138, 0x13b, 0x3, 
    0x2, 0x2, 0x2, 0x139, 0x137, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x3, 
    0x2, 0x2, 0x2, 0x13a, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x139, 0x3, 
    0x2, 0x2, 0x2, 0x13c, 0x140, 0x5, 0x66, 0x34, 0x2, 0x13d, 0x13f, 0x7, 
    0x5f, 0x2, 0x2, 0x13e, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x142, 0x3, 
    0x2, 0x2, 0x2, 0x140, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 0x3, 
    0x2, 0x2, 0x2, 0x141, 0x143, 0x3, 0x2, 0x2, 0x2, 0x142, 0x140, 0x3, 
    0x2, 0x2, 0x2, 0x143, 0x147, 0x7, 0x8c, 0x2, 0x2, 0x144, 0x146, 0x7, 
    0x5f, 0x2, 0x2, 0x145, 0x144, 0x3, 0x2, 0x2, 0x2, 0x146, 0x149, 0x3, 
    0x2, 0x2, 0x2, 0x147, 0x145, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x3, 
    0x2, 0x2, 0x2, 0x148, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x149, 0x147, 0x3, 
    0x2, 0x2, 0x2, 0x14a, 0x14e, 0x5, 0x24, 0x13, 0x2, 0x14b, 0x14d, 0x7, 
    0x5f, 0x2, 0x2, 0x14c, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x150, 0x3, 
    0x2, 0x2, 0x2, 0x14e, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 0x3, 
    0x2, 0x2, 0x2, 0x14f, 0x151, 0x3, 0x2, 0x2, 0x2, 0x150, 0x14e, 0x3, 
    0x2, 0x2, 0x2, 0x151, 0x155, 0x7, 0x94, 0x2, 0x2, 0x152, 0x154, 0x7, 
    0x5f, 0x2, 0x2, 0x153, 0x152, 0x3, 0x2, 0x2, 0x2, 0x154, 0x157, 0x3, 
    0x2, 0x2, 0x2, 0x155, 0x153, 0x3, 0x2, 0x2, 0x2, 0x155, 0x156, 0x3, 
    0x2, 0x2, 0x2, 0x156, 0x158, 0x3, 0x2, 0x2, 0x2, 0x157, 0x155, 0x3, 
    0x2, 0x2, 0x2, 0x158, 0x15c, 0x5, 0x20, 0x11, 0x2, 0x159, 0x15b, 0x7, 
    0x5f, 0x2, 0x2, 0x15a, 0x159, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15e, 0x3, 
    0x2, 0x2, 0x2, 0x15c, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15d, 0x3, 
    0x2, 0x2, 0x2, 0x15d, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15c, 0x3, 
    0x2, 0x2, 0x2, 0x15f, 0x160, 0x7, 0x8b, 0x2, 0x2, 0x160, 0x161, 0x8, 
    0x8, 0x1, 0x2, 0x161, 0xf, 0x3, 0x2, 0x2, 0x2, 0x162, 0x166, 0x5, 0x66, 
    0x34, 0x2, 0x163, 0x165, 0x7, 0x5f, 0x2, 0x2, 0x164, 0x163, 0x3, 0x2, 
    0x2, 0x2, 0x165, 0x168, 0x3, 0x2, 0x2, 0x2, 0x166, 0x164, 0x3, 0x2, 
    0x2, 0x2, 0x166, 0x167, 0x3, 0x2, 0x2, 0x2, 0x167, 0x169, 0x3, 0x2, 
    0x2, 0x2, 0x168, 0x166, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16d, 0x5, 0x1c, 
    0xf, 0x2, 0x16a, 0x16c, 0x7, 0x5f, 0x2, 0x2, 0x16b, 0x16a, 0x3, 0x2, 
    0x2, 0x2, 0x16c, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16b, 0x3, 0x2, 
    0x2, 0x2, 0x16d, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x170, 0x3, 0x2, 
    0x2, 0x2, 0x16f, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x8, 0x9, 
    0x1, 0x2, 0x171, 0x176, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 0x5, 0x12, 
    0xa, 0x2, 0x173, 0x174, 0x8, 0x9, 0x1, 0x2, 0x174, 0x176, 0x3, 0x2, 
    0x2, 0x2, 0x175, 0x162, 0x3, 0x2, 0x2, 0x2, 0x175, 0x172, 0x3, 0x2, 
    0x2, 0x2, 0x176, 0x11, 0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 0x5, 0x14, 
    0xb, 0x2, 0x178, 0x179, 0x8, 0xa, 0x1, 0x2, 0x179, 0x195, 0x3, 0x2, 
    0x2, 0x2, 0x17a, 0x17b, 0x5, 0x16, 0xc, 0x2, 0x17b, 0x17c, 0x8, 0xa, 
    0x1, 0x2, 0x17c, 0x195, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17e, 0x5, 0x18, 
    0xd, 0x2, 0x17e, 0x17f, 0x8, 0xa, 0x1, 0x2, 0x17f, 0x195, 0x3, 0x2, 
    0x2, 0x2, 0x180, 0x181, 0x5, 0x1a, 0xe, 0x2, 0x181, 0x182, 0x8, 0xa, 
    0x1, 0x2, 0x182, 0x195, 0x3, 0x2, 0x2, 0x2, 0x183, 0x187, 0x5, 0x66, 
    0x34, 0x2, 0x184, 0x186, 0x7, 0x5f, 0x2, 0x2, 0x185, 0x184, 0x3, 0x2, 
    0x2, 0x2, 0x186, 0x189, 0x3, 0x2, 0x2, 0x2, 0x187, 0x185, 0x3, 0x2, 
    0x2, 0x2, 0x187, 0x188, 0x3, 0x2, 0x2, 0x2, 0x188, 0x18a, 0x3, 0x2, 
    0x2, 0x2, 0x189, 0x187, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18e, 0x7, 0x96, 
    0x2, 0x2, 0x18b, 0x18d, 0x7, 0x5f, 0x2, 0x2, 0x18c, 0x18b, 0x3, 0x2, 
    0x2, 0x2, 0x18d, 0x190, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18c, 0x3, 0x2, 
    0x2, 0x2, 0x18e, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x191, 0x3, 0x2, 
    0x2, 0x2, 0x190, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x191, 0x192, 0x5, 0x20, 
    0x11, 0x2, 0x192, 0x193, 0x8, 0xa, 0x1, 0x2, 0x193, 0x195, 0x3, 0x2, 
    0x2, 0x2, 0x194, 0x177, 0x3, 0x2, 0x2, 0x2, 0x194, 0x17a, 0x3, 0x2, 
    0x2, 0x2, 0x194, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x194, 0x180, 0x3, 0x2, 
    0x2, 0x2, 0x194, 0x183, 0x3, 0x2, 0x2, 0x2, 0x195, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x196, 0x19a, 0x5, 0x66, 0x34, 0x2, 0x197, 0x199, 0x7, 0x5f, 0x2, 
    0x2, 0x198, 0x197, 0x3, 0x2, 0x2, 0x2, 0x199, 0x19c, 0x3, 0x2, 0x2, 
    0x2, 0x19a, 0x198, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19b, 0x3, 0x2, 0x2, 
    0x2, 0x19b, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19a, 0x3, 0x2, 0x2, 
    0x2, 0x19d, 0x1a1, 0x7, 0x96, 0x2, 0x2, 0x19e, 0x1a0, 0x7, 0x5f, 0x2, 
    0x2, 0x19f, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a3, 0x3, 0x2, 0x2, 
    0x2, 0x1a1, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a2, 0x3, 0x2, 0x2, 
    0x2, 0x1a2, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a1, 0x3, 0x2, 0x2, 
    0x2, 0x1a4, 0x1a8, 0x7, 0xb, 0x2, 0x2, 0x1a5, 0x1a7, 0x7, 0x5f, 0x2, 
    0x2, 0x1a6, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1aa, 0x3, 0x2, 0x2, 
    0x2, 0x1a8, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a9, 0x3, 0x2, 0x2, 
    0x2, 0x1a9, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1a8, 0x3, 0x2, 0x2, 
    0x2, 0x1ab, 0x1af, 0x7, 0x9d, 0x2, 0x2, 0x1ac, 0x1ae, 0x7, 0x5f, 0x2, 
    0x2, 0x1ad, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1b1, 0x3, 0x2, 0x2, 
    0x2, 0x1af, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b0, 0x3, 0x2, 0x2, 
    0x2, 0x1b0, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1af, 0x3, 0x2, 0x2, 
    0x2, 0x1b2, 0x1b3, 0x5, 0x10, 0x9, 0x2, 0x1b3, 0x1b7, 0x8, 0xb, 0x1, 
    0x2, 0x1b4, 0x1b6, 0x7, 0x5f, 0x2, 0x2, 0x1b5, 0x1b4, 0x3, 0x2, 0x2, 
    0x2, 0x1b6, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b5, 0x3, 0x2, 0x2, 
    0x2, 0x1b7, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1ba, 0x3, 0x2, 0x2, 
    0x2, 0x1b9, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1be, 0x7, 0x95, 0x2, 
    0x2, 0x1bb, 0x1bd, 0x7, 0x5f, 0x2, 0x2, 0x1bc, 0x1bb, 0x3, 0x2, 0x2, 
    0x2, 0x1bd, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bc, 0x3, 0x2, 0x2, 
    0x2, 0x1be, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c2, 0x3, 0x2, 0x2, 
    0x2, 0x1c0, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1b2, 0x3, 0x2, 0x2, 
    0x2, 0x1c2, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c1, 0x3, 0x2, 0x2, 
    0x2, 0x1c3, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c9, 0x3, 0x2, 0x2, 
    0x2, 0x1c5, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c8, 0x7, 0x5f, 0x2, 
    0x2, 0x1c7, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1cb, 0x3, 0x2, 0x2, 
    0x2, 0x1c9, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 0x3, 0x2, 0x2, 
    0x2, 0x1ca, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1c9, 0x3, 0x2, 0x2, 
    0x2, 0x1cc, 0x1cd, 0x7, 0x9e, 0x2, 0x2, 0x1cd, 0x1ce, 0x8, 0xb, 0x1, 
    0x2, 0x1ce, 0x15, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d3, 0x5, 0x66, 0x34, 
    0x2, 0x1d0, 0x1d2, 0x7, 0x5f, 0x2, 0x2, 0x1d1, 0x1d0, 0x3, 0x2, 0x2, 
    0x2, 0x1d2, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d1, 0x3, 0x2, 0x2, 
    0x2, 0x1d3, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d6, 0x3, 0x2, 0x2, 
    0x2, 0x1d5, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1da, 0x7, 0x96, 0x2, 
    0x2, 0x1d7, 0x1d9, 0x7, 0x5f, 0x2, 0x2, 0x1d8, 0x1d7, 0x3, 0x2, 0x2, 
    0x2, 0x1d9, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1d8, 0x3, 0x2, 0x2, 
    0x2, 0x1da, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dd, 0x3, 0x2, 0x2, 
    0x2, 0x1dc, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1e1, 0x7, 0x10, 0x2, 
    0x2, 0x1de, 0x1e0, 0x7, 0x5f, 0x2, 0x2, 0x1df, 0x1de, 0x3, 0x2, 0x2, 
    0x2, 0x1e0, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1df, 0x3, 0x2, 0x2, 
    0x2, 0x1e1, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e4, 0x3, 0x2, 0x2, 
    0x2, 0x1e3, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1fc, 0x7, 0x9d, 0x2, 
    0x2, 0x1e5, 0x1e7, 0x7, 0x5f, 0x2, 0x2, 0x1e6, 0x1e5, 0x3, 0x2, 0x2, 
    0x2, 0x1e7, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e6, 0x3, 0x2, 0x2, 
    0x2, 0x1e8, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1eb, 0x3, 0x2, 0x2, 
    0x2, 0x1ea, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ec, 0x5, 0x12, 0xa, 
    0x2, 0x1ec, 0x1f0, 0x8, 0xc, 0x1, 0x2, 0x1ed, 0x1ef, 0x7, 0x5f, 0x2, 
    0x2, 0x1ee, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f2, 0x3, 0x2, 0x2, 
    0x2, 0x1f0, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f1, 0x3, 0x2, 0x2, 
    0x2, 0x1f1, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f0, 0x3, 0x2, 0x2, 
    0x2, 0x1f3, 0x1f7, 0x7, 0x95, 0x2, 0x2, 0x1f4, 0x1f6, 0x7, 0x5f, 0x2, 
    0x2, 0x1f5, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f9, 0x3, 0x2, 0x2, 
    0x2, 0x1f7, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 0x3, 0x2, 0x2, 
    0x2, 0x1f8, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1f7, 0x3, 0x2, 0x2, 
    0x2, 0x1fa, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fe, 0x3, 0x2, 0x2, 
    0x2, 0x1fc, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fd, 0x3, 0x2, 0x2, 
    0x2, 0x1fd, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1fc, 0x3, 0x2, 0x2, 
    0x2, 0x1ff, 0x200, 0x7, 0x9e, 0x2, 0x2, 0x200, 0x201, 0x8, 0xc, 0x1, 
    0x2, 0x201, 0x17, 0x3, 0x2, 0x2, 0x2, 0x202, 0x206, 0x5, 0x66, 0x34, 
    0x2, 0x203, 0x205, 0x7, 0x5f, 0x2, 0x2, 0x204, 0x203, 0x3, 0x2, 0x2, 
    0x2, 0x205, 0x208, 0x3, 0x2, 0x2, 0x2, 0x206, 0x204, 0x3, 0x2, 0x2, 
    0x2, 0x206, 0x207, 0x3, 0x2, 0x2, 0x2, 0x207, 0x209, 0x3, 0x2, 0x2, 
    0x2, 0x208, 0x206, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20d, 0x7, 0x96, 0x2, 
    0x2, 0x20a, 0x20c, 0x7, 0x5f, 0x2, 0x2, 0x20b, 0x20a, 0x3, 0x2, 0x2, 
    0x2, 0x20c, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20b, 0x3, 0x2, 0x2, 
    0x2, 0x20d, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x210, 0x3, 0x2, 0x2, 
    0x2, 0x20f, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x210, 0x214, 0x7, 0x11, 0x2, 
    0x2, 0x211, 0x213, 0x7, 0x5f, 0x2, 0x2, 0x212, 0x211, 0x3, 0x2, 0x2, 
    0x2, 0x213, 0x216, 0x3, 0x2, 0x2, 0x2, 0x214, 0x212, 0x3, 0x2, 0x2, 
    0x2, 0x214, 0x215, 0x3, 0x2, 0x2, 0x2, 0x215, 0x217, 0x3, 0x2, 0x2, 
    0x2, 0x216, 0x214, 0x3, 0x2, 0x2, 0x2, 0x217, 0x21b, 0x7, 0x8c, 0x2, 
    0x2, 0x218, 0x21a, 0x7, 0x5f, 0x2, 0x2, 0x219, 0x218, 0x3, 0x2, 0x2, 
    0x2, 0x21a, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x219, 0x3, 0x2, 0x2, 
    0x2, 0x21b, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21e, 0x3, 0x2, 0x2, 
    0x2, 0x21d, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x222, 0x5, 0x20, 0x11, 
    0x2, 0x21f, 0x221, 0x7, 0x5f, 0x2, 0x2, 0x220, 0x21f, 0x3, 0x2, 0x2, 
    0x2, 0x221, 0x224, 0x3, 0x2, 0x2, 0x2, 0x222, 0x220, 0x3, 0x2, 0x2, 
    0x2, 0x222, 0x223, 0x3, 0x2, 0x2, 0x2, 0x223, 0x225, 0x3, 0x2, 0x2, 
    0x2, 0x224, 0x222, 0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 0x7, 0x8b, 0x2, 
    0x2, 0x226, 0x227, 0x8, 0xd, 0x1, 0x2, 0x227, 0x19, 0x3, 0x2, 0x2, 0x2, 
    0x228, 0x22c, 0x5, 0x66, 0x34, 0x2, 0x229, 0x22b, 0x7, 0x5f, 0x2, 0x2, 
    0x22a, 0x229, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22e, 0x3, 0x2, 0x2, 0x2, 
    0x22c, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22d, 0x3, 0x2, 0x2, 0x2, 
    0x22d, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22c, 0x3, 0x2, 0x2, 0x2, 
    0x22f, 0x233, 0x7, 0x96, 0x2, 0x2, 0x230, 0x232, 0x7, 0x5f, 0x2, 0x2, 
    0x231, 0x230, 0x3, 0x2, 0x2, 0x2, 0x232, 0x235, 0x3, 0x2, 0x2, 0x2, 
    0x233, 0x231, 0x3, 0x2, 0x2, 0x2, 0x233, 0x234, 0x3, 0x2, 0x2, 0x2, 
    0x234, 0x236, 0x3, 0x2, 0x2, 0x2, 0x235, 0x233, 0x3, 0x2, 0x2, 0x2, 
    0x236, 0x23a, 0x7, 0x12, 0x2, 0x2, 0x237, 0x239, 0x7, 0x5f, 0x2, 0x2, 
    0x238, 0x237, 0x3, 0x2, 0x2, 0x2, 0x239, 0x23c, 0x3, 0x2, 0x2, 0x2, 
    0x23a, 0x238, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x23b, 0x3, 0x2, 0x2, 0x2, 
    0x23b, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23a, 0x3, 0x2, 0x2, 0x2, 
    0x23d, 0x241, 0x7, 0x8c, 0x2, 0x2, 0x23e, 0x240, 0x7, 0x5f, 0x2, 0x2, 
    0x23f, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x240, 0x243, 0x3, 0x2, 0x2, 0x2, 
    0x241, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x241, 0x242, 0x3, 0x2, 0x2, 0x2, 
    0x242, 0x244, 0x3, 0x2, 0x2, 0x2, 0x243, 0x241, 0x3, 0x2, 0x2, 0x2, 
    0x244, 0x248, 0x5, 0x24, 0x13, 0x2, 0x245, 0x247, 0x7, 0x5f, 0x2, 0x2, 
    0x246, 0x245, 0x3, 0x2, 0x2, 0x2, 0x247, 0x24a, 0x3, 0x2, 0x2, 0x2, 
    0x248, 0x246, 0x3, 0x2, 0x2, 0x2, 0x248, 0x249, 0x3, 0x2, 0x2, 0x2, 
    0x249, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x248, 0x3, 0x2, 0x2, 0x2, 
    0x24b, 0x24f, 0x7, 0x94, 0x2, 0x2, 0x24c, 0x24e, 0x7, 0x5f, 0x2, 0x2, 
    0x24d, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x251, 0x3, 0x2, 0x2, 0x2, 
    0x24f, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x250, 0x3, 0x2, 0x2, 0x2, 
    0x250, 0x252, 0x3, 0x2, 0x2, 0x2, 0x251, 0x24f, 0x3, 0x2, 0x2, 0x2, 
    0x252, 0x256, 0x5, 0x20, 0x11, 0x2, 0x253, 0x255, 0x7, 0x5f, 0x2, 0x2, 
    0x254, 0x253, 0x3, 0x2, 0x2, 0x2, 0x255, 0x258, 0x3, 0x2, 0x2, 0x2, 
    0x256, 0x254, 0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 0x3, 0x2, 0x2, 0x2, 
    0x257, 0x259, 0x3, 0x2, 0x2, 0x2, 0x258, 0x256, 0x3, 0x2, 0x2, 0x2, 
    0x259, 0x25a, 0x7, 0x8b, 0x2, 0x2, 0x25a, 0x25b, 0x8, 0xe, 0x1, 0x2, 
    0x25b, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25d, 0x5, 0x1e, 0x10, 0x2, 
    0x25d, 0x25e, 0x8, 0xf, 0x1, 0x2, 0x25e, 0x26b, 0x3, 0x2, 0x2, 0x2, 
    0x25f, 0x263, 0x7, 0x96, 0x2, 0x2, 0x260, 0x262, 0x7, 0x5f, 0x2, 0x2, 
    0x261, 0x260, 0x3, 0x2, 0x2, 0x2, 0x262, 0x265, 0x3, 0x2, 0x2, 0x2, 
    0x263, 0x261, 0x3, 0x2, 0x2, 0x2, 0x263, 0x264, 0x3, 0x2, 0x2, 0x2, 
    0x264, 0x266, 0x3, 0x2, 0x2, 0x2, 0x265, 0x263, 0x3, 0x2, 0x2, 0x2, 
    0x266, 0x267, 0x5, 0x20, 0x11, 0x2, 0x267, 0x268, 0x3, 0x2, 0x2, 0x2, 
    0x268, 0x269, 0x8, 0xf, 0x1, 0x2, 0x269, 0x26b, 0x3, 0x2, 0x2, 0x2, 
    0x26a, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x25f, 0x3, 0x2, 0x2, 0x2, 
    0x26b, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x26d, 0x5, 0x26, 0x14, 0x2, 
    0x26d, 0x26e, 0x8, 0x10, 0x1, 0x2, 0x26e, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x26f, 0x270, 0x5, 0x24, 0x13, 0x2, 0x270, 0x271, 0x8, 0x11, 0x1, 0x2, 
    0x271, 0x276, 0x3, 0x2, 0x2, 0x2, 0x272, 0x273, 0x5, 0x22, 0x12, 0x2, 
    0x273, 0x274, 0x8, 0x11, 0x1, 0x2, 0x274, 0x276, 0x3, 0x2, 0x2, 0x2, 
    0x275, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x275, 0x272, 0x3, 0x2, 0x2, 0x2, 
    0x276, 0x21, 0x3, 0x2, 0x2, 0x2, 0x277, 0x278, 0x5, 0x66, 0x34, 0x2, 
    0x278, 0x279, 0x8, 0x12, 0x1, 0x2, 0x279, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x27a, 0x27b, 0x7, 0x49, 0x2, 0x2, 0x27b, 0x295, 0x8, 0x13, 0x1, 0x2, 
    0x27c, 0x27d, 0x7, 0x4a, 0x2, 0x2, 0x27d, 0x295, 0x8, 0x13, 0x1, 0x2, 
    0x27e, 0x27f, 0x7, 0x4b, 0x2, 0x2, 0x27f, 0x295, 0x8, 0x13, 0x1, 0x2, 
    0x280, 0x281, 0x7, 0x4c, 0x2, 0x2, 0x281, 0x295, 0x8, 0x13, 0x1, 0x2, 
    0x282, 0x283, 0x7, 0x4d, 0x2, 0x2, 0x283, 0x295, 0x8, 0x13, 0x1, 0x2, 
    0x284, 0x285, 0x7, 0x4e, 0x2, 0x2, 0x285, 0x295, 0x8, 0x13, 0x1, 0x2, 
    0x286, 0x287, 0x7, 0x4f, 0x2, 0x2, 0x287, 0x295, 0x8, 0x13, 0x1, 0x2, 
    0x288, 0x289, 0x7, 0x50, 0x2, 0x2, 0x289, 0x295, 0x8, 0x13, 0x1, 0x2, 
    0x28a, 0x28b, 0x7, 0x51, 0x2, 0x2, 0x28b, 0x295, 0x8, 0x13, 0x1, 0x2, 
    0x28c, 0x28d, 0x7, 0x52, 0x2, 0x2, 0x28d, 0x295, 0x8, 0x13, 0x1, 0x2, 
    0x28e, 0x28f, 0x7, 0x53, 0x2, 0x2, 0x28f, 0x295, 0x8, 0x13, 0x1, 0x2, 
    0x290, 0x291, 0x7, 0x54, 0x2, 0x2, 0x291, 0x295, 0x8, 0x13, 0x1, 0x2, 
    0x292, 0x293, 0x7, 0x55, 0x2, 0x2, 0x293, 0x295, 0x8, 0x13, 0x1, 0x2, 
    0x294, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x294, 0x27c, 0x3, 0x2, 0x2, 0x2, 
    0x294, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x294, 0x280, 0x3, 0x2, 0x2, 0x2, 
    0x294, 0x282, 0x3, 0x2, 0x2, 0x2, 0x294, 0x284, 0x3, 0x2, 0x2, 0x2, 
    0x294, 0x286, 0x3, 0x2, 0x2, 0x2, 0x294, 0x288, 0x3, 0x2, 0x2, 0x2, 
    0x294, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x294, 0x28c, 0x3, 0x2, 0x2, 0x2, 
    0x294, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x294, 0x290, 0x3, 0x2, 0x2, 0x2, 
    0x294, 0x292, 0x3, 0x2, 0x2, 0x2, 0x295, 0x25, 0x3, 0x2, 0x2, 0x2, 0x296, 
    0x297, 0x5, 0x28, 0x15, 0x2, 0x297, 0x298, 0x8, 0x14, 0x1, 0x2, 0x298, 
    0x2be, 0x3, 0x2, 0x2, 0x2, 0x299, 0x29a, 0x5, 0x2a, 0x16, 0x2, 0x29a, 
    0x29b, 0x8, 0x14, 0x1, 0x2, 0x29b, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x29c, 
    0x29d, 0x5, 0x2c, 0x17, 0x2, 0x29d, 0x29e, 0x8, 0x14, 0x1, 0x2, 0x29e, 
    0x2be, 0x3, 0x2, 0x2, 0x2, 0x29f, 0x2a0, 0x5, 0x2e, 0x18, 0x2, 0x2a0, 
    0x2a1, 0x8, 0x14, 0x1, 0x2, 0x2a1, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2a2, 
    0x2a3, 0x5, 0x30, 0x19, 0x2, 0x2a3, 0x2a4, 0x8, 0x14, 0x1, 0x2, 0x2a4, 
    0x2be, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a6, 0x5, 0x32, 0x1a, 0x2, 0x2a6, 
    0x2a7, 0x8, 0x14, 0x1, 0x2, 0x2a7, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2a8, 
    0x2a9, 0x5, 0x34, 0x1b, 0x2, 0x2a9, 0x2aa, 0x8, 0x14, 0x1, 0x2, 0x2aa, 
    0x2be, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2ac, 0x5, 0x36, 0x1c, 0x2, 0x2ac, 
    0x2ad, 0x8, 0x14, 0x1, 0x2, 0x2ad, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2ae, 
    0x2af, 0x5, 0x38, 0x1d, 0x2, 0x2af, 0x2b0, 0x8, 0x14, 0x1, 0x2, 0x2b0, 
    0x2be, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2b2, 0x5, 0x3a, 0x1e, 0x2, 0x2b2, 
    0x2b3, 0x8, 0x14, 0x1, 0x2, 0x2b3, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2b4, 
    0x2b5, 0x5, 0x3c, 0x1f, 0x2, 0x2b5, 0x2b6, 0x8, 0x14, 0x1, 0x2, 0x2b6, 
    0x2be, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b8, 0x5, 0x3e, 0x20, 0x2, 0x2b8, 
    0x2b9, 0x8, 0x14, 0x1, 0x2, 0x2b9, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2ba, 
    0x2bb, 0x5, 0x40, 0x21, 0x2, 0x2bb, 0x2bc, 0x8, 0x14, 0x1, 0x2, 0x2bc, 
    0x2be, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x296, 0x3, 0x2, 0x2, 0x2, 0x2bd, 
    0x299, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x29c, 0x3, 0x2, 0x2, 0x2, 0x2bd, 
    0x29f, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x2bd, 
    0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2a8, 0x3, 0x2, 0x2, 0x2, 0x2bd, 
    0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2bd, 
    0x2b1, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2bd, 
    0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2be, 
    0x27, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2c3, 0x7, 0x96, 0x2, 0x2, 0x2c0, 
    0x2c2, 0x7, 0x5f, 0x2, 0x2, 0x2c1, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2c2, 
    0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2c3, 
    0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2c4, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2c5, 
    0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2c8, 0x7, 0x49, 0x2, 0x2, 0x2c7, 
    0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2c8, 
    0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2cb, 0x7, 0x5f, 0x2, 0x2, 0x2ca, 
    0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2cc, 
    0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2cd, 
    0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2cf, 
    0x2d3, 0x7, 0x88, 0x2, 0x2, 0x2d0, 0x2d2, 0x7, 0x5f, 0x2, 0x2, 0x2d1, 
    0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d3, 
    0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d4, 
    0x2d6, 0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2d6, 
    0x2d7, 0x5, 0x4c, 0x27, 0x2, 0x2d7, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2d8, 
    0x2dc, 0x7, 0x96, 0x2, 0x2, 0x2d9, 0x2db, 0x7, 0x5f, 0x2, 0x2, 0x2da, 
    0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x2dc, 
    0x2da, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2dd, 
    0x2df, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2df, 
    0x2e1, 0x7, 0x4a, 0x2, 0x2, 0x2e0, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2e0, 
    0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e2, 
    0x2e4, 0x7, 0x5f, 0x2, 0x2, 0x2e3, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2e4, 
    0x2e7, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e5, 
    0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2e7, 
    0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2ec, 0x7, 0x88, 0x2, 0x2, 0x2e9, 
    0x2eb, 0x7, 0x5f, 0x2, 0x2, 0x2ea, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x2eb, 
    0x2ee, 0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2ec, 
    0x2ed, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2ef, 0x3, 0x2, 0x2, 0x2, 0x2ee, 
    0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2f0, 0x5, 0x4e, 0x28, 0x2, 0x2f0, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2f5, 0x7, 0x96, 0x2, 0x2, 0x2f2, 
    0x2f4, 0x7, 0x5f, 0x2, 0x2, 0x2f3, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f4, 
    0x2f7, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2f5, 
    0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x2f7, 
    0x2f5, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2fa, 0x7, 0x4b, 0x2, 0x2, 0x2f9, 
    0x2f1, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x2fa, 
    0x2fe, 0x3, 0x2, 0x2, 0x2, 0x2fb, 0x2fd, 0x7, 0x5f, 0x2, 0x2, 0x2fc, 
    0x2fb, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x300, 0x3, 0x2, 0x2, 0x2, 0x2fe, 
    0x2fc, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x2ff, 
    0x301, 0x3, 0x2, 0x2, 0x2, 0x300, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x301, 
    0x305, 0x7, 0x88, 0x2, 0x2, 0x302, 0x304, 0x7, 0x5f, 0x2, 0x2, 0x303, 
    0x302, 0x3, 0x2, 0x2, 0x2, 0x304, 0x307, 0x3, 0x2, 0x2, 0x2, 0x305, 
    0x303, 0x3, 0x2, 0x2, 0x2, 0x305, 0x306, 0x3, 0x2, 0x2, 0x2, 0x306, 
    0x308, 0x3, 0x2, 0x2, 0x2, 0x307, 0x305, 0x3, 0x2, 0x2, 0x2, 0x308, 
    0x309, 0x5, 0x64, 0x33, 0x2, 0x309, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x30a, 
    0x30e, 0x7, 0x96, 0x2, 0x2, 0x30b, 0x30d, 0x7, 0x5f, 0x2, 0x2, 0x30c, 
    0x30b, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x310, 0x3, 0x2, 0x2, 0x2, 0x30e, 
    0x30c, 0x3, 0x2, 0x2, 0x2, 0x30e, 0x30f, 0x3, 0x2, 0x2, 0x2, 0x30f, 
    0x311, 0x3, 0x2, 0x2, 0x2, 0x310, 0x30e, 0x3, 0x2, 0x2, 0x2, 0x311, 
    0x315, 0x7, 0x4c, 0x2, 0x2, 0x312, 0x314, 0x7, 0x5f, 0x2, 0x2, 0x313, 
    0x312, 0x3, 0x2, 0x2, 0x2, 0x314, 0x317, 0x3, 0x2, 0x2, 0x2, 0x315, 
    0x313, 0x3, 0x2, 0x2, 0x2, 0x315, 0x316, 0x3, 0x2, 0x2, 0x2, 0x316, 
    0x318, 0x3, 0x2, 0x2, 0x2, 0x317, 0x315, 0x3, 0x2, 0x2, 0x2, 0x318, 
    0x31c, 0x7, 0x88, 0x2, 0x2, 0x319, 0x31b, 0x7, 0x5f, 0x2, 0x2, 0x31a, 
    0x319, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x31e, 0x3, 0x2, 0x2, 0x2, 0x31c, 
    0x31a, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x31d, 0x3, 0x2, 0x2, 0x2, 0x31d, 
    0x31f, 0x3, 0x2, 0x2, 0x2, 0x31e, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x31f, 
    0x321, 0x5, 0x50, 0x29, 0x2, 0x320, 0x322, 0x7, 0x4c, 0x2, 0x2, 0x321, 
    0x320, 0x3, 0x2, 0x2, 0x2, 0x321, 0x322, 0x3, 0x2, 0x2, 0x2, 0x322, 
    0x32f, 0x3, 0x2, 0x2, 0x2, 0x323, 0x327, 0x7, 0x88, 0x2, 0x2, 0x324, 
    0x326, 0x7, 0x5f, 0x2, 0x2, 0x325, 0x324, 0x3, 0x2, 0x2, 0x2, 0x326, 
    0x329, 0x3, 0x2, 0x2, 0x2, 0x327, 0x325, 0x3, 0x2, 0x2, 0x2, 0x327, 
    0x328, 0x3, 0x2, 0x2, 0x2, 0x328, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x329, 
    0x327, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x32c, 0x5, 0x50, 0x29, 0x2, 0x32b, 
    0x32d, 0x7, 0x4c, 0x2, 0x2, 0x32c, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x32c, 
    0x32d, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x32e, 
    0x30a, 0x3, 0x2, 0x2, 0x2, 0x32e, 0x323, 0x3, 0x2, 0x2, 0x2, 0x32f, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0x330, 0x334, 0x7, 0x96, 0x2, 0x2, 0x331, 
    0x333, 0x7, 0x5f, 0x2, 0x2, 0x332, 0x331, 0x3, 0x2, 0x2, 0x2, 0x333, 
    0x336, 0x3, 0x2, 0x2, 0x2, 0x334, 0x332, 0x3, 0x2, 0x2, 0x2, 0x334, 
    0x335, 0x3, 0x2, 0x2, 0x2, 0x335, 0x337, 0x3, 0x2, 0x2, 0x2, 0x336, 
    0x334, 0x3, 0x2, 0x2, 0x2, 0x337, 0x33b, 0x7, 0x4d, 0x2, 0x2, 0x338, 
    0x33a, 0x7, 0x5f, 0x2, 0x2, 0x339, 0x338, 0x3, 0x2, 0x2, 0x2, 0x33a, 
    0x33d, 0x3, 0x2, 0x2, 0x2, 0x33b, 0x339, 0x3, 0x2, 0x2, 0x2, 0x33b, 
    0x33c, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x33d, 
    0x33b, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x342, 0x7, 0x88, 0x2, 0x2, 0x33f, 
    0x341, 0x7, 0x5f, 0x2, 0x2, 0x340, 0x33f, 0x3, 0x2, 0x2, 0x2, 0x341, 
    0x344, 0x3, 0x2, 0x2, 0x2, 0x342, 0x340, 0x3, 0x2, 0x2, 0x2, 0x342, 
    0x343, 0x3, 0x2, 0x2, 0x2, 0x343, 0x345, 0x3, 0x2, 0x2, 0x2, 0x344, 
    0x342, 0x3, 0x2, 0x2, 0x2, 0x345, 0x347, 0x5, 0x52, 0x2a, 0x2, 0x346, 
    0x348, 0x7, 0x4d, 0x2, 0x2, 0x347, 0x346, 0x3, 0x2, 0x2, 0x2, 0x347, 
    0x348, 0x3, 0x2, 0x2, 0x2, 0x348, 0x354, 0x3, 0x2, 0x2, 0x2, 0x349, 
    0x34d, 0x7, 0x88, 0x2, 0x2, 0x34a, 0x34c, 0x7, 0x5f, 0x2, 0x2, 0x34b, 
    0x34a, 0x3, 0x2, 0x2, 0x2, 0x34c, 0x34f, 0x3, 0x2, 0x2, 0x2, 0x34d, 
    0x34b, 0x3, 0x2, 0x2, 0x2, 0x34d, 0x34e, 0x3, 0x2, 0x2, 0x2, 0x34e, 
    0x350, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x34d, 0x3, 0x2, 0x2, 0x2, 0x350, 
    0x351, 0x5, 0x52, 0x2a, 0x2, 0x351, 0x352, 0x7, 0x4d, 0x2, 0x2, 0x352, 
    0x354, 0x3, 0x2, 0x2, 0x2, 0x353, 0x330, 0x3, 0x2, 0x2, 0x2, 0x353, 
    0x349, 0x3, 0x2, 0x2, 0x2, 0x354, 0x31, 0x3, 0x2, 0x2, 0x2, 0x355, 0x359, 
    0x7, 0x96, 0x2, 0x2, 0x356, 0x358, 0x7, 0x5f, 0x2, 0x2, 0x357, 0x356, 
    0x3, 0x2, 0x2, 0x2, 0x358, 0x35b, 0x3, 0x2, 0x2, 0x2, 0x359, 0x357, 
    0x3, 0x2, 0x2, 0x2, 0x359, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x35c, 
    0x3, 0x2, 0x2, 0x2, 0x35b, 0x359, 0x3, 0x2, 0x2, 0x2, 0x35c, 0x360, 
    0x7, 0x4e, 0x2, 0x2, 0x35d, 0x35f, 0x7, 0x5f, 0x2, 0x2, 0x35e, 0x35d, 
    0x3, 0x2, 0x2, 0x2, 0x35f, 0x362, 0x3, 0x2, 0x2, 0x2, 0x360, 0x35e, 
    0x3, 0x2, 0x2, 0x2, 0x360, 0x361, 0x3, 0x2, 0x2, 0x2, 0x361, 0x363, 
    0x3, 0x2, 0x2, 0x2, 0x362, 0x360, 0x3, 0x2, 0x2, 0x2, 0x363, 0x367, 
    0x7, 0x88, 0x2, 0x2, 0x364, 0x366, 0x7, 0x5f, 0x2, 0x2, 0x365, 0x364, 
    0x3, 0x2, 0x2, 0x2, 0x366, 0x369, 0x3, 0x2, 0x2, 0x2, 0x367, 0x365, 
    0x3, 0x2, 0x2, 0x2, 0x367, 0x368, 0x3, 0x2, 0x2, 0x2, 0x368, 0x36a, 
    0x3, 0x2, 0x2, 0x2, 0x369, 0x367, 0x3, 0x2, 0x2, 0x2, 0x36a, 0x36c, 
    0x5, 0x54, 0x2b, 0x2, 0x36b, 0x36d, 0x7, 0x4e, 0x2, 0x2, 0x36c, 0x36b, 
    0x3, 0x2, 0x2, 0x2, 0x36c, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x36d, 0x379, 
    0x3, 0x2, 0x2, 0x2, 0x36e, 0x372, 0x7, 0x88, 0x2, 0x2, 0x36f, 0x371, 
    0x7, 0x5f, 0x2, 0x2, 0x370, 0x36f, 0x3, 0x2, 0x2, 0x2, 0x371, 0x374, 
    0x3, 0x2, 0x2, 0x2, 0x372, 0x370, 0x3, 0x2, 0x2, 0x2, 0x372, 0x373, 
    0x3, 0x2, 0x2, 0x2, 0x373, 0x375, 0x3, 0x2, 0x2, 0x2, 0x374, 0x372, 
    0x3, 0x2, 0x2, 0x2, 0x375, 0x376, 0x5, 0x54, 0x2b, 0x2, 0x376, 0x377, 
    0x7, 0x4e, 0x2, 0x2, 0x377, 0x379, 0x3, 0x2, 0x2, 0x2, 0x378, 0x355, 
    0x3, 0x2, 0x2, 0x2, 0x378, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x379, 0x33, 0x3, 
    0x2, 0x2, 0x2, 0x37a, 0x37e, 0x7, 0x96, 0x2, 0x2, 0x37b, 0x37d, 0x7, 
    0x5f, 0x2, 0x2, 0x37c, 0x37b, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x380, 0x3, 
    0x2, 0x2, 0x2, 0x37e, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x37e, 0x37f, 0x3, 
    0x2, 0x2, 0x2, 0x37f, 0x381, 0x3, 0x2, 0x2, 0x2, 0x380, 0x37e, 0x3, 
    0x2, 0x2, 0x2, 0x381, 0x385, 0x7, 0x4f, 0x2, 0x2, 0x382, 0x384, 0x7, 
    0x5f, 0x2, 0x2, 0x383, 0x382, 0x3, 0x2, 0x2, 0x2, 0x384, 0x387, 0x3, 
    0x2, 0x2, 0x2, 0x385, 0x383, 0x3, 0x2, 0x2, 0x2, 0x385, 0x386, 0x3, 
    0x2, 0x2, 0x2, 0x386, 0x388, 0x3, 0x2, 0x2, 0x2, 0x387, 0x385, 0x3, 
    0x2, 0x2, 0x2, 0x388, 0x38c, 0x7, 0x88, 0x2, 0x2, 0x389, 0x38b, 0x7, 
    0x5f, 0x2, 0x2, 0x38a, 0x389, 0x3, 0x2, 0x2, 0x2, 0x38b, 0x38e, 0x3, 
    0x2, 0x2, 0x2, 0x38c, 0x38a, 0x3, 0x2, 0x2, 0x2, 0x38c, 0x38d, 0x3, 
    0x2, 0x2, 0x2, 0x38d, 0x38f, 0x3, 0x2, 0x2, 0x2, 0x38e, 0x38c, 0x3, 
    0x2, 0x2, 0x2, 0x38f, 0x391, 0x5, 0x56, 0x2c, 0x2, 0x390, 0x392, 0x7, 
    0x4f, 0x2, 0x2, 0x391, 0x390, 0x3, 0x2, 0x2, 0x2, 0x391, 0x392, 0x3, 
    0x2, 0x2, 0x2, 0x392, 0x39e, 0x3, 0x2, 0x2, 0x2, 0x393, 0x397, 0x7, 
    0x88, 0x2, 0x2, 0x394, 0x396, 0x7, 0x5f, 0x2, 0x2, 0x395, 0x394, 0x3, 
    0x2, 0x2, 0x2, 0x396, 0x399, 0x3, 0x2, 0x2, 0x2, 0x397, 0x395, 0x3, 
    0x2, 0x2, 0x2, 0x397, 0x398, 0x3, 0x2, 0x2, 0x2, 0x398, 0x39a, 0x3, 
    0x2, 0x2, 0x2, 0x399, 0x397, 0x3, 0x2, 0x2, 0x2, 0x39a, 0x39b, 0x5, 
    0x56, 0x2c, 0x2, 0x39b, 0x39c, 0x7, 0x4f, 0x2, 0x2, 0x39c, 0x39e, 0x3, 
    0x2, 0x2, 0x2, 0x39d, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x39d, 0x393, 0x3, 
    0x2, 0x2, 0x2, 0x39e, 0x35, 0x3, 0x2, 0x2, 0x2, 0x39f, 0x3a3, 0x7, 0x96, 
    0x2, 0x2, 0x3a0, 0x3a2, 0x7, 0x5f, 0x2, 0x2, 0x3a1, 0x3a0, 0x3, 0x2, 
    0x2, 0x2, 0x3a2, 0x3a5, 0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3a1, 0x3, 0x2, 
    0x2, 0x2, 0x3a3, 0x3a4, 0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a6, 0x3, 0x2, 
    0x2, 0x2, 0x3a5, 0x3a3, 0x3, 0x2, 0x2, 0x2, 0x3a6, 0x3aa, 0x7, 0x50, 
    0x2, 0x2, 0x3a7, 0x3a9, 0x7, 0x5f, 0x2, 0x2, 0x3a8, 0x3a7, 0x3, 0x2, 
    0x2, 0x2, 0x3a9, 0x3ac, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3a8, 0x3, 0x2, 
    0x2, 0x2, 0x3aa, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3ab, 0x3ad, 0x3, 0x2, 
    0x2, 0x2, 0x3ac, 0x3aa, 0x3, 0x2, 0x2, 0x2, 0x3ad, 0x3b1, 0x7, 0x88, 
    0x2, 0x2, 0x3ae, 0x3b0, 0x7, 0x5f, 0x2, 0x2, 0x3af, 0x3ae, 0x3, 0x2, 
    0x2, 0x2, 0x3b0, 0x3b3, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3af, 0x3, 0x2, 
    0x2, 0x2, 0x3b1, 0x3b2, 0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3b4, 0x3, 0x2, 
    0x2, 0x2, 0x3b3, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3b6, 0x5, 0x58, 
    0x2d, 0x2, 0x3b5, 0x3b7, 0x7, 0x50, 0x2, 0x2, 0x3b6, 0x3b5, 0x3, 0x2, 
    0x2, 0x2, 0x3b6, 0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3b7, 0x3c3, 0x3, 0x2, 
    0x2, 0x2, 0x3b8, 0x3bc, 0x7, 0x88, 0x2, 0x2, 0x3b9, 0x3bb, 0x7, 0x5f, 
    0x2, 0x2, 0x3ba, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3bb, 0x3be, 0x3, 0x2, 
    0x2, 0x2, 0x3bc, 0x3ba, 0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3bd, 0x3, 0x2, 
    0x2, 0x2, 0x3bd, 0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3be, 0x3bc, 0x3, 0x2, 
    0x2, 0x2, 0x3bf, 0x3c0, 0x5, 0x58, 0x2d, 0x2, 0x3c0, 0x3c1, 0x7, 0x50, 
    0x2, 0x2, 0x3c1, 0x3c3, 0x3, 0x2, 0x2, 0x2, 0x3c2, 0x39f, 0x3, 0x2, 
    0x2, 0x2, 0x3c2, 0x3b8, 0x3, 0x2, 0x2, 0x2, 0x3c3, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0x3c4, 0x3c8, 0x7, 0x96, 0x2, 0x2, 0x3c5, 0x3c7, 0x7, 0x5f, 0x2, 
    0x2, 0x3c6, 0x3c5, 0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3ca, 0x3, 0x2, 0x2, 
    0x2, 0x3c8, 0x3c6, 0x3, 0x2, 0x2, 0x2, 0x3c8, 0x3c9, 0x3, 0x2, 0x2, 
    0x2, 0x3c9, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3c8, 0x3, 0x2, 0x2, 
    0x2, 0x3cb, 0x3cf, 0x7, 0x51, 0x2, 0x2, 0x3cc, 0x3ce, 0x7, 0x5f, 0x2, 
    0x2, 0x3cd, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0x3ce, 0x3d1, 0x3, 0x2, 0x2, 
    0x2, 0x3cf, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x3cf, 0x3d0, 0x3, 0x2, 0x2, 
    0x2, 0x3d0, 0x3d2, 0x3, 0x2, 0x2, 0x2, 0x3d1, 0x3cf, 0x3, 0x2, 0x2, 
    0x2, 0x3d2, 0x3d6, 0x7, 0x88, 0x2, 0x2, 0x3d3, 0x3d5, 0x7, 0x5f, 0x2, 
    0x2, 0x3d4, 0x3d3, 0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d8, 0x3, 0x2, 0x2, 
    0x2, 0x3d6, 0x3d4, 0x3, 0x2, 0x2, 0x2, 0x3d6, 0x3d7, 0x3, 0x2, 0x2, 
    0x2, 0x3d7, 0x3d9, 0x3, 0x2, 0x2, 0x2, 0x3d8, 0x3d6, 0x3, 0x2, 0x2, 
    0x2, 0x3d9, 0x3db, 0x5, 0x5a, 0x2e, 0x2, 0x3da, 0x3dc, 0x7, 0x51, 0x2, 
    0x2, 0x3db, 0x3da, 0x3, 0x2, 0x2, 0x2, 0x3db, 0x3dc, 0x3, 0x2, 0x2, 
    0x2, 0x3dc, 0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3dd, 0x3e1, 0x7, 0x88, 0x2, 
    0x2, 0x3de, 0x3e0, 0x7, 0x5f, 0x2, 0x2, 0x3df, 0x3de, 0x3, 0x2, 0x2, 
    0x2, 0x3e0, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3e1, 0x3df, 0x3, 0x2, 0x2, 
    0x2, 0x3e1, 0x3e2, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e4, 0x3, 0x2, 0x2, 
    0x2, 0x3e3, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3e5, 0x5, 0x5a, 0x2e, 
    0x2, 0x3e5, 0x3e6, 0x7, 0x51, 0x2, 0x2, 0x3e6, 0x3e8, 0x3, 0x2, 0x2, 
    0x2, 0x3e7, 0x3c4, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3dd, 0x3, 0x2, 0x2, 
    0x2, 0x3e8, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3e9, 0x3ed, 0x7, 0x96, 0x2, 
    0x2, 0x3ea, 0x3ec, 0x7, 0x5f, 0x2, 0x2, 0x3eb, 0x3ea, 0x3, 0x2, 0x2, 
    0x2, 0x3ec, 0x3ef, 0x3, 0x2, 0x2, 0x2, 0x3ed, 0x3eb, 0x3, 0x2, 0x2, 
    0x2, 0x3ed, 0x3ee, 0x3, 0x2, 0x2, 0x2, 0x3ee, 0x3f0, 0x3, 0x2, 0x2, 
    0x2, 0x3ef, 0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3f0, 0x3f4, 0x7, 0x52, 0x2, 
    0x2, 0x3f1, 0x3f3, 0x7, 0x5f, 0x2, 0x2, 0x3f2, 0x3f1, 0x3, 0x2, 0x2, 
    0x2, 0x3f3, 0x3f6, 0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3f2, 0x3, 0x2, 0x2, 
    0x2, 0x3f4, 0x3f5, 0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3f7, 0x3, 0x2, 0x2, 
    0x2, 0x3f6, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f7, 0x3fb, 0x7, 0x88, 0x2, 
    0x2, 0x3f8, 0x3fa, 0x7, 0x5f, 0x2, 0x2, 0x3f9, 0x3f8, 0x3, 0x2, 0x2, 
    0x2, 0x3fa, 0x3fd, 0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3f9, 0x3, 0x2, 0x2, 
    0x2, 0x3fb, 0x3fc, 0x3, 0x2, 0x2, 0x2, 0x3fc, 0x3fe, 0x3, 0x2, 0x2, 
    0x2, 0x3fd, 0x3fb, 0x3, 0x2, 0x2, 0x2, 0x3fe, 0x400, 0x5, 0x5c, 0x2f, 
    0x2, 0x3ff, 0x401, 0x7, 0x52, 0x2, 0x2, 0x400, 0x3ff, 0x3, 0x2, 0x2, 
    0x2, 0x400, 0x401, 0x3, 0x2, 0x2, 0x2, 0x401, 0x40d, 0x3, 0x2, 0x2, 
    0x2, 0x402, 0x406, 0x7, 0x88, 0x2, 0x2, 0x403, 0x405, 0x7, 0x5f, 0x2, 
    0x2, 0x404, 0x403, 0x3, 0x2, 0x2, 0x2, 0x405, 0x408, 0x3, 0x2, 0x2, 
    0x2, 0x406, 0x404, 0x3, 0x2, 0x2, 0x2, 0x406, 0x407, 0x3, 0x2, 0x2, 
    0x2, 0x407, 0x409, 0x3, 0x2, 0x2, 0x2, 0x408, 0x406, 0x3, 0x2, 0x2, 
    0x2, 0x409, 0x40a, 0x5, 0x5c, 0x2f, 0x2, 0x40a, 0x40b, 0x7, 0x52, 0x2, 
    0x2, 0x40b, 0x40d, 0x3, 0x2, 0x2, 0x2, 0x40c, 0x3e9, 0x3, 0x2, 0x2, 
    0x2, 0x40c, 0x402, 0x3, 0x2, 0x2, 0x2, 0x40d, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x40e, 0x412, 0x7, 0x96, 0x2, 0x2, 0x40f, 0x411, 0x7, 0x5f, 0x2, 0x2, 
    0x410, 0x40f, 0x3, 0x2, 0x2, 0x2, 0x411, 0x414, 0x3, 0x2, 0x2, 0x2, 
    0x412, 0x410, 0x3, 0x2, 0x2, 0x2, 0x412, 0x413, 0x3, 0x2, 0x2, 0x2, 
    0x413, 0x415, 0x3, 0x2, 0x2, 0x2, 0x414, 0x412, 0x3, 0x2, 0x2, 0x2, 
    0x415, 0x419, 0x7, 0x53, 0x2, 0x2, 0x416, 0x418, 0x7, 0x5f, 0x2, 0x2, 
    0x417, 0x416, 0x3, 0x2, 0x2, 0x2, 0x418, 0x41b, 0x3, 0x2, 0x2, 0x2, 
    0x419, 0x417, 0x3, 0x2, 0x2, 0x2, 0x419, 0x41a, 0x3, 0x2, 0x2, 0x2, 
    0x41a, 0x41c, 0x3, 0x2, 0x2, 0x2, 0x41b, 0x419, 0x3, 0x2, 0x2, 0x2, 
    0x41c, 0x420, 0x7, 0x88, 0x2, 0x2, 0x41d, 0x41f, 0x7, 0x5f, 0x2, 0x2, 
    0x41e, 0x41d, 0x3, 0x2, 0x2, 0x2, 0x41f, 0x422, 0x3, 0x2, 0x2, 0x2, 
    0x420, 0x41e, 0x3, 0x2, 0x2, 0x2, 0x420, 0x421, 0x3, 0x2, 0x2, 0x2, 
    0x421, 0x423, 0x3, 0x2, 0x2, 0x2, 0x422, 0x420, 0x3, 0x2, 0x2, 0x2, 
    0x423, 0x425, 0x5, 0x5e, 0x30, 0x2, 0x424, 0x426, 0x7, 0x53, 0x2, 0x2, 
    0x425, 0x424, 0x3, 0x2, 0x2, 0x2, 0x425, 0x426, 0x3, 0x2, 0x2, 0x2, 
    0x426, 0x432, 0x3, 0x2, 0x2, 0x2, 0x427, 0x42b, 0x7, 0x88, 0x2, 0x2, 
    0x428, 0x42a, 0x7, 0x5f, 0x2, 0x2, 0x429, 0x428, 0x3, 0x2, 0x2, 0x2, 
    0x42a, 0x42d, 0x3, 0x2, 0x2, 0x2, 0x42b, 0x429, 0x3, 0x2, 0x2, 0x2, 
    0x42b, 0x42c, 0x3, 0x2, 0x2, 0x2, 0x42c, 0x42e, 0x3, 0x2, 0x2, 0x2, 
    0x42d, 0x42b, 0x3, 0x2, 0x2, 0x2, 0x42e, 0x42f, 0x5, 0x5e, 0x30, 0x2, 
    0x42f, 0x430, 0x7, 0x53, 0x2, 0x2, 0x430, 0x432, 0x3, 0x2, 0x2, 0x2, 
    0x431, 0x40e, 0x3, 0x2, 0x2, 0x2, 0x431, 0x427, 0x3, 0x2, 0x2, 0x2, 
    0x432, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x433, 0x437, 0x7, 0x96, 0x2, 0x2, 
    0x434, 0x436, 0x7, 0x5f, 0x2, 0x2, 0x435, 0x434, 0x3, 0x2, 0x2, 0x2, 
    0x436, 0x439, 0x3, 0x2, 0x2, 0x2, 0x437, 0x435, 0x3, 0x2, 0x2, 0x2, 
    0x437, 0x438, 0x3, 0x2, 0x2, 0x2, 0x438, 0x43a, 0x3, 0x2, 0x2, 0x2, 
    0x439, 0x437, 0x3, 0x2, 0x2, 0x2, 0x43a, 0x43e, 0x7, 0x54, 0x2, 0x2, 
    0x43b, 0x43d, 0x7, 0x5f, 0x2, 0x2, 0x43c, 0x43b, 0x3, 0x2, 0x2, 0x2, 
    0x43d, 0x440, 0x3, 0x2, 0x2, 0x2, 0x43e, 0x43c, 0x3, 0x2, 0x2, 0x2, 
    0x43e, 0x43f, 0x3, 0x2, 0x2, 0x2, 0x43f, 0x441, 0x3, 0x2, 0x2, 0x2, 
    0x440, 0x43e, 0x3, 0x2, 0x2, 0x2, 0x441, 0x445, 0x7, 0x88, 0x2, 0x2, 
    0x442, 0x444, 0x7, 0x5f, 0x2, 0x2, 0x443, 0x442, 0x3, 0x2, 0x2, 0x2, 
    0x444, 0x447, 0x3, 0x2, 0x2, 0x2, 0x445, 0x443, 0x3, 0x2, 0x2, 0x2, 
    0x445, 0x446, 0x3, 0x2, 0x2, 0x2, 0x446, 0x448, 0x3, 0x2, 0x2, 0x2, 
    0x447, 0x445, 0x3, 0x2, 0x2, 0x2, 0x448, 0x44a, 0x5, 0x60, 0x31, 0x2, 
    0x449, 0x44b, 0x7, 0x54, 0x2, 0x2, 0x44a, 0x449, 0x3, 0x2, 0x2, 0x2, 
    0x44a, 0x44b, 0x3, 0x2, 0x2, 0x2, 0x44b, 0x458, 0x3, 0x2, 0x2, 0x2, 
    0x44c, 0x450, 0x7, 0x88, 0x2, 0x2, 0x44d, 0x44f, 0x7, 0x5f, 0x2, 0x2, 
    0x44e, 0x44d, 0x3, 0x2, 0x2, 0x2, 0x44f, 0x452, 0x3, 0x2, 0x2, 0x2, 
    0x450, 0x44e, 0x3, 0x2, 0x2, 0x2, 0x450, 0x451, 0x3, 0x2, 0x2, 0x2, 
    0x451, 0x453, 0x3, 0x2, 0x2, 0x2, 0x452, 0x450, 0x3, 0x2, 0x2, 0x2, 
    0x453, 0x455, 0x5, 0x60, 0x31, 0x2, 0x454, 0x456, 0x7, 0x54, 0x2, 0x2, 
    0x455, 0x454, 0x3, 0x2, 0x2, 0x2, 0x455, 0x456, 0x3, 0x2, 0x2, 0x2, 
    0x456, 0x458, 0x3, 0x2, 0x2, 0x2, 0x457, 0x433, 0x3, 0x2, 0x2, 0x2, 
    0x457, 0x44c, 0x3, 0x2, 0x2, 0x2, 0x458, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x459, 
    0x45d, 0x7, 0x96, 0x2, 0x2, 0x45a, 0x45c, 0x7, 0x5f, 0x2, 0x2, 0x45b, 
    0x45a, 0x3, 0x2, 0x2, 0x2, 0x45c, 0x45f, 0x3, 0x2, 0x2, 0x2, 0x45d, 
    0x45b, 0x3, 0x2, 0x2, 0x2, 0x45d, 0x45e, 0x3, 0x2, 0x2, 0x2, 0x45e, 
    0x460, 0x3, 0x2, 0x2, 0x2, 0x45f, 0x45d, 0x3, 0x2, 0x2, 0x2, 0x460, 
    0x464, 0x7, 0x55, 0x2, 0x2, 0x461, 0x463, 0x7, 0x5f, 0x2, 0x2, 0x462, 
    0x461, 0x3, 0x2, 0x2, 0x2, 0x463, 0x466, 0x3, 0x2, 0x2, 0x2, 0x464, 
    0x462, 0x3, 0x2, 0x2, 0x2, 0x464, 0x465, 0x3, 0x2, 0x2, 0x2, 0x465, 
    0x467, 0x3, 0x2, 0x2, 0x2, 0x466, 0x464, 0x3, 0x2, 0x2, 0x2, 0x467, 
    0x46b, 0x7, 0x88, 0x2, 0x2, 0x468, 0x46a, 0x7, 0x5f, 0x2, 0x2, 0x469, 
    0x468, 0x3, 0x2, 0x2, 0x2, 0x46a, 0x46d, 0x3, 0x2, 0x2, 0x2, 0x46b, 
    0x469, 0x3, 0x2, 0x2, 0x2, 0x46b, 0x46c, 0x3, 0x2, 0x2, 0x2, 0x46c, 
    0x46e, 0x3, 0x2, 0x2, 0x2, 0x46d, 0x46b, 0x3, 0x2, 0x2, 0x2, 0x46e, 
    0x470, 0x5, 0x62, 0x32, 0x2, 0x46f, 0x471, 0x7, 0x55, 0x2, 0x2, 0x470, 
    0x46f, 0x3, 0x2, 0x2, 0x2, 0x470, 0x471, 0x3, 0x2, 0x2, 0x2, 0x471, 
    0x47d, 0x3, 0x2, 0x2, 0x2, 0x472, 0x476, 0x7, 0x88, 0x2, 0x2, 0x473, 
    0x475, 0x7, 0x5f, 0x2, 0x2, 0x474, 0x473, 0x3, 0x2, 0x2, 0x2, 0x475, 
    0x478, 0x3, 0x2, 0x2, 0x2, 0x476, 0x474, 0x3, 0x2, 0x2, 0x2, 0x476, 
    0x477, 0x3, 0x2, 0x2, 0x2, 0x477, 0x479, 0x3, 0x2, 0x2, 0x2, 0x478, 
    0x476, 0x3, 0x2, 0x2, 0x2, 0x479, 0x47a, 0x5, 0x62, 0x32, 0x2, 0x47a, 
    0x47b, 0x7, 0x55, 0x2, 0x2, 0x47b, 0x47d, 0x3, 0x2, 0x2, 0x2, 0x47c, 
    0x459, 0x3, 0x2, 0x2, 0x2, 0x47c, 0x472, 0x3, 0x2, 0x2, 0x2, 0x47d, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x47e, 0x482, 0x7, 0xe, 0x2, 0x2, 0x47f, 0x481, 
    0x7, 0x5f, 0x2, 0x2, 0x480, 0x47f, 0x3, 0x2, 0x2, 0x2, 0x481, 0x484, 
    0x3, 0x2, 0x2, 0x2, 0x482, 0x480, 0x3, 0x2, 0x2, 0x2, 0x482, 0x483, 
    0x3, 0x2, 0x2, 0x2, 0x483, 0x485, 0x3, 0x2, 0x2, 0x2, 0x484, 0x482, 
    0x3, 0x2, 0x2, 0x2, 0x485, 0x489, 0x7, 0x88, 0x2, 0x2, 0x486, 0x488, 
    0x7, 0x5f, 0x2, 0x2, 0x487, 0x486, 0x3, 0x2, 0x2, 0x2, 0x488, 0x48b, 
    0x3, 0x2, 0x2, 0x2, 0x489, 0x487, 0x3, 0x2, 0x2, 0x2, 0x489, 0x48a, 
    0x3, 0x2, 0x2, 0x2, 0x48a, 0x48c, 0x3, 0x2, 0x2, 0x2, 0x48b, 0x489, 
    0x3, 0x2, 0x2, 0x2, 0x48c, 0x490, 0x5, 0x66, 0x34, 0x2, 0x48d, 0x48f, 
    0x7, 0x5f, 0x2, 0x2, 0x48e, 0x48d, 0x3, 0x2, 0x2, 0x2, 0x48f, 0x492, 
    0x3, 0x2, 0x2, 0x2, 0x490, 0x48e, 0x3, 0x2, 0x2, 0x2, 0x490, 0x491, 
    0x3, 0x2, 0x2, 0x2, 0x491, 0x493, 0x3, 0x2, 0x2, 0x2, 0x492, 0x490, 
    0x3, 0x2, 0x2, 0x2, 0x493, 0x494, 0x7, 0x95, 0x2, 0x2, 0x494, 0x495, 
    0x8, 0x22, 0x1, 0x2, 0x495, 0x43, 0x3, 0x2, 0x2, 0x2, 0x496, 0x498, 
    0x7, 0xa, 0x2, 0x2, 0x497, 0x499, 0x7, 0x5f, 0x2, 0x2, 0x498, 0x497, 
    0x3, 0x2, 0x2, 0x2, 0x499, 0x49a, 0x3, 0x2, 0x2, 0x2, 0x49a, 0x498, 
    0x3, 0x2, 0x2, 0x2, 0x49a, 0x49b, 0x3, 0x2, 0x2, 0x2, 0x49b, 0x49c, 
    0x3, 0x2, 0x2, 0x2, 0x49c, 0x4a0, 0x5, 0x4a, 0x26, 0x2, 0x49d, 0x49f, 
    0x7, 0x5f, 0x2, 0x2, 0x49e, 0x49d, 0x3, 0x2, 0x2, 0x2, 0x49f, 0x4a2, 
    0x3, 0x2, 0x2, 0x2, 0x4a0, 0x49e, 0x3, 0x2, 0x2, 0x2, 0x4a0, 0x4a1, 
    0x3, 0x2, 0x2, 0x2, 0x4a1, 0x4a3, 0x3, 0x2, 0x2, 0x2, 0x4a2, 0x4a0, 
    0x3, 0x2, 0x2, 0x2, 0x4a3, 0x4a4, 0x7, 0x95, 0x2, 0x2, 0x4a4, 0x4a5, 
    0x8, 0x23, 0x1, 0x2, 0x4a5, 0x45, 0x3, 0x2, 0x2, 0x2, 0x4a6, 0x4a7, 
    0x7, 0xf, 0x2, 0x2, 0x4a7, 0x4a8, 0x5, 0x48, 0x25, 0x2, 0x4a8, 0x4a9, 
    0x7, 0x95, 0x2, 0x2, 0x4a9, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4aa, 0x4ac, 
    0x5, 0x4a, 0x26, 0x2, 0x4ab, 0x4aa, 0x3, 0x2, 0x2, 0x2, 0x4ab, 0x4ac, 
    0x3, 0x2, 0x2, 0x2, 0x4ac, 0x4ad, 0x3, 0x2, 0x2, 0x2, 0x4ad, 0x4af, 
    0x7, 0x97, 0x2, 0x2, 0x4ae, 0x4ab, 0x3, 0x2, 0x2, 0x2, 0x4ae, 0x4af, 
    0x3, 0x2, 0x2, 0x2, 0x4af, 0x4c0, 0x3, 0x2, 0x2, 0x2, 0x4b0, 0x4c1, 
    0x7, 0x75, 0x2, 0x2, 0x4b1, 0x4bd, 0x7, 0x9d, 0x2, 0x2, 0x4b2, 0x4b7, 
    0x5, 0x48, 0x25, 0x2, 0x4b3, 0x4b4, 0x7, 0x94, 0x2, 0x2, 0x4b4, 0x4b6, 
    0x5, 0x48, 0x25, 0x2, 0x4b5, 0x4b3, 0x3, 0x2, 0x2, 0x2, 0x4b6, 0x4b9, 
    0x3, 0x2, 0x2, 0x2, 0x4b7, 0x4b5, 0x3, 0x2, 0x2, 0x2, 0x4b7, 0x4b8, 
    0x3, 0x2, 0x2, 0x2, 0x4b8, 0x4bb, 0x3, 0x2, 0x2, 0x2, 0x4b9, 0x4b7, 
    0x3, 0x2, 0x2, 0x2, 0x4ba, 0x4bc, 0x7, 0x94, 0x2, 0x2, 0x4bb, 0x4ba, 
    0x3, 0x2, 0x2, 0x2, 0x4bb, 0x4bc, 0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4be, 
    0x3, 0x2, 0x2, 0x2, 0x4bd, 0x4b2, 0x3, 0x2, 0x2, 0x2, 0x4bd, 0x4be, 
    0x3, 0x2, 0x2, 0x2, 0x4be, 0x4bf, 0x3, 0x2, 0x2, 0x2, 0x4bf, 0x4c1, 
    0x7, 0x9e, 0x2, 0x2, 0x4c0, 0x4b0, 0x3, 0x2, 0x2, 0x2, 0x4c0, 0x4b1, 
    0x3, 0x2, 0x2, 0x2, 0x4c1, 0x4c8, 0x3, 0x2, 0x2, 0x2, 0x4c2, 0x4c5, 
    0x5, 0x4a, 0x26, 0x2, 0x4c3, 0x4c4, 0x7, 0x4, 0x2, 0x2, 0x4c4, 0x4c6, 
    0x5, 0x66, 0x34, 0x2, 0x4c5, 0x4c3, 0x3, 0x2, 0x2, 0x2, 0x4c5, 0x4c6, 
    0x3, 0x2, 0x2, 0x2, 0x4c6, 0x4c8, 0x3, 0x2, 0x2, 0x2, 0x4c7, 0x4ae, 
    0x3, 0x2, 0x2, 0x2, 0x4c7, 0x4c2, 0x3, 0x2, 0x2, 0x2, 0x4c8, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x4c9, 0x4cb, 0x7, 0x97, 0x2, 0x2, 0x4ca, 0x4c9, 0x3, 
    0x2, 0x2, 0x2, 0x4ca, 0x4cb, 0x3, 0x2, 0x2, 0x2, 0x4cb, 0x4cc, 0x3, 
    0x2, 0x2, 0x2, 0x4cc, 0x4cd, 0x5, 0x66, 0x34, 0x2, 0x4cd, 0x4d4, 0x8, 
    0x26, 0x1, 0x2, 0x4ce, 0x4cf, 0x7, 0x97, 0x2, 0x2, 0x4cf, 0x4d0, 0x5, 
    0x66, 0x34, 0x2, 0x4d0, 0x4d1, 0x8, 0x26, 0x1, 0x2, 0x4d1, 0x4d3, 0x3, 
    0x2, 0x2, 0x2, 0x4d2, 0x4ce, 0x3, 0x2, 0x2, 0x2, 0x4d3, 0x4d6, 0x3, 
    0x2, 0x2, 0x2, 0x4d4, 0x4d2, 0x3, 0x2, 0x2, 0x2, 0x4d4, 0x4d5, 0x3, 
    0x2, 0x2, 0x2, 0x4d5, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4d6, 0x4d4, 0x3, 0x2, 
    0x2, 0x2, 0x4d7, 0x4d8, 0x9, 0x2, 0x2, 0x2, 0x4d8, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x4d9, 0x4da, 0x7, 0x60, 0x2, 0x2, 0x4da, 0x4db, 0x8, 0x28, 0x1, 
    0x2, 0x4db, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4dc, 0x4dd, 0x7, 0x6b, 0x2, 
    0x2, 0x4dd, 0x4de, 0x8, 0x29, 0x1, 0x2, 0x4de, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x4df, 0x4e0, 0x7, 0x6b, 0x2, 0x2, 0x4e0, 0x4e1, 0x8, 0x2a, 0x1, 
    0x2, 0x4e1, 0x53, 0x3, 0x2, 0x2, 0x2, 0x4e2, 0x4e4, 0x7, 0x74, 0x2, 
    0x2, 0x4e3, 0x4e2, 0x3, 0x2, 0x2, 0x2, 0x4e3, 0x4e4, 0x3, 0x2, 0x2, 
    0x2, 0x4e4, 0x4e5, 0x3, 0x2, 0x2, 0x2, 0x4e5, 0x4ed, 0x9, 0x3, 0x2, 
    0x2, 0x4e6, 0x4e7, 0x7, 0x6f, 0x2, 0x2, 0x4e7, 0x4ed, 0x9, 0x4, 0x2, 
    0x2, 0x4e8, 0x4e9, 0x7, 0x70, 0x2, 0x2, 0x4e9, 0x4ed, 0x9, 0x5, 0x2, 
    0x2, 0x4ea, 0x4eb, 0x7, 0x71, 0x2, 0x2, 0x4eb, 0x4ed, 0x9, 0x6, 0x2, 
    0x2, 0x4ec, 0x4e3, 0x3, 0x2, 0x2, 0x2, 0x4ec, 0x4e6, 0x3, 0x2, 0x2, 
    0x2, 0x4ec, 0x4e8, 0x3, 0x2, 0x2, 0x2, 0x4ec, 0x4ea, 0x3, 0x2, 0x2, 
    0x2, 0x4ed, 0x4ee, 0x3, 0x2, 0x2, 0x2, 0x4ee, 0x4ef, 0x8, 0x2b, 0x1, 
    0x2, 0x4ef, 0x55, 0x3, 0x2, 0x2, 0x2, 0x4f0, 0x4f2, 0x7, 0x74, 0x2, 
    0x2, 0x4f1, 0x4f0, 0x3, 0x2, 0x2, 0x2, 0x4f1, 0x4f2, 0x3, 0x2, 0x2, 
    0x2, 0x4f2, 0x4f3, 0x3, 0x2, 0x2, 0x2, 0x4f3, 0x4fb, 0x9, 0x3, 0x2, 
    0x2, 0x4f4, 0x4f5, 0x7, 0x6f, 0x2, 0x2, 0x4f5, 0x4fb, 0x9, 0x4, 0x2, 
    0x2, 0x4f6, 0x4f7, 0x7, 0x70, 0x2, 0x2, 0x4f7, 0x4fb, 0x9, 0x5, 0x2, 
    0x2, 0x4f8, 0x4f9, 0x7, 0x71, 0x2, 0x2, 0x4f9, 0x4fb, 0x9, 0x6, 0x2, 
    0x2, 0x4fa, 0x4f1, 0x3, 0x2, 0x2, 0x2, 0x4fa, 0x4f4, 0x3, 0x2, 0x2, 
    0x2, 0x4fa, 0x4f6, 0x3, 0x2, 0x2, 0x2, 0x4fa, 0x4f8, 0x3, 0x2, 0x2, 
    0x2, 0x4fb, 0x4fc, 0x3, 0x2, 0x2, 0x2, 0x4fc, 0x4fd, 0x8, 0x2c, 0x1, 
    0x2, 0x4fd, 0x57, 0x3, 0x2, 0x2, 0x2, 0x4fe, 0x500, 0x7, 0x74, 0x2, 
    0x2, 0x4ff, 0x4fe, 0x3, 0x2, 0x2, 0x2, 0x4ff, 0x500, 0x3, 0x2, 0x2, 
    0x2, 0x500, 0x501, 0x3, 0x2, 0x2, 0x2, 0x501, 0x509, 0x9, 0x3, 0x2, 
    0x2, 0x502, 0x503, 0x7, 0x6f, 0x2, 0x2, 0x503, 0x509, 0x9, 0x4, 0x2, 
    0x2, 0x504, 0x505, 0x7, 0x70, 0x2, 0x2, 0x505, 0x509, 0x9, 0x5, 0x2, 
    0x2, 0x506, 0x507, 0x7, 0x71, 0x2, 0x2, 0x507, 0x509, 0x9, 0x6, 0x2, 
    0x2, 0x508, 0x4ff, 0x3, 0x2, 0x2, 0x2, 0x508, 0x502, 0x3, 0x2, 0x2, 
    0x2, 0x508, 0x504, 0x3, 0x2, 0x2, 0x2, 0x508, 0x506, 0x3, 0x2, 0x2, 
    0x2, 0x509, 0x50a, 0x3, 0x2, 0x2, 0x2, 0x50a, 0x50b, 0x8, 0x2d, 0x1, 
    0x2, 0x50b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x50c, 0x50e, 0x7, 0x74, 0x2, 
    0x2, 0x50d, 0x50c, 0x3, 0x2, 0x2, 0x2, 0x50d, 0x50e, 0x3, 0x2, 0x2, 
    0x2, 0x50e, 0x50f, 0x3, 0x2, 0x2, 0x2, 0x50f, 0x517, 0x9, 0x3, 0x2, 
    0x2, 0x510, 0x511, 0x7, 0x6f, 0x2, 0x2, 0x511, 0x517, 0x9, 0x4, 0x2, 
    0x2, 0x512, 0x513, 0x7, 0x70, 0x2, 0x2, 0x513, 0x517, 0x9, 0x5, 0x2, 
    0x2, 0x514, 0x515, 0x7, 0x71, 0x2, 0x2, 0x515, 0x517, 0x9, 0x6, 0x2, 
    0x2, 0x516, 0x50d, 0x3, 0x2, 0x2, 0x2, 0x516, 0x510, 0x3, 0x2, 0x2, 
    0x2, 0x516, 0x512, 0x3, 0x2, 0x2, 0x2, 0x516, 0x514, 0x3, 0x2, 0x2, 
    0x2, 0x517, 0x518, 0x3, 0x2, 0x2, 0x2, 0x518, 0x519, 0x8, 0x2e, 0x1, 
    0x2, 0x519, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x51a, 0x51c, 0x7, 0x74, 0x2, 
    0x2, 0x51b, 0x51a, 0x3, 0x2, 0x2, 0x2, 0x51b, 0x51c, 0x3, 0x2, 0x2, 
    0x2, 0x51c, 0x51d, 0x3, 0x2, 0x2, 0x2, 0x51d, 0x525, 0x9, 0x3, 0x2, 
    0x2, 0x51e, 0x51f, 0x7, 0x6f, 0x2, 0x2, 0x51f, 0x525, 0x9, 0x4, 0x2, 
    0x2, 0x520, 0x521, 0x7, 0x70, 0x2, 0x2, 0x521, 0x525, 0x9, 0x5, 0x2, 
    0x2, 0x522, 0x523, 0x7, 0x71, 0x2, 0x2, 0x523, 0x525, 0x9, 0x6, 0x2, 
    0x2, 0x524, 0x51b, 0x3, 0x2, 0x2, 0x2, 0x524, 0x51e, 0x3, 0x2, 0x2, 
    0x2, 0x524, 0x520, 0x3, 0x2, 0x2, 0x2, 0x524, 0x522, 0x3, 0x2, 0x2, 
    0x2, 0x525, 0x526, 0x3, 0x2, 0x2, 0x2, 0x526, 0x527, 0x8, 0x2f, 0x1, 
    0x2, 0x527, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x528, 0x52a, 0x7, 0x74, 0x2, 
    0x2, 0x529, 0x528, 0x3, 0x2, 0x2, 0x2, 0x529, 0x52a, 0x3, 0x2, 0x2, 
    0x2, 0x52a, 0x52b, 0x3, 0x2, 0x2, 0x2, 0x52b, 0x533, 0x9, 0x3, 0x2, 
    0x2, 0x52c, 0x52d, 0x7, 0x6f, 0x2, 0x2, 0x52d, 0x533, 0x9, 0x4, 0x2, 
    0x2, 0x52e, 0x52f, 0x7, 0x70, 0x2, 0x2, 0x52f, 0x533, 0x9, 0x5, 0x2, 
    0x2, 0x530, 0x531, 0x7, 0x71, 0x2, 0x2, 0x531, 0x533, 0x9, 0x6, 0x2, 
    0x2, 0x532, 0x529, 0x3, 0x2, 0x2, 0x2, 0x532, 0x52c, 0x3, 0x2, 0x2, 
    0x2, 0x532, 0x52e, 0x3, 0x2, 0x2, 0x2, 0x532, 0x530, 0x3, 0x2, 0x2, 
    0x2, 0x533, 0x534, 0x3, 0x2, 0x2, 0x2, 0x534, 0x535, 0x8, 0x30, 0x1, 
    0x2, 0x535, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x536, 0x538, 0x7, 0x74, 0x2, 
    0x2, 0x537, 0x536, 0x3, 0x2, 0x2, 0x2, 0x537, 0x538, 0x3, 0x2, 0x2, 
    0x2, 0x538, 0x539, 0x3, 0x2, 0x2, 0x2, 0x539, 0x541, 0x9, 0x3, 0x2, 
    0x2, 0x53a, 0x53b, 0x7, 0x6f, 0x2, 0x2, 0x53b, 0x541, 0x9, 0x4, 0x2, 
    0x2, 0x53c, 0x53d, 0x7, 0x70, 0x2, 0x2, 0x53d, 0x541, 0x9, 0x5, 0x2, 
    0x2, 0x53e, 0x53f, 0x7, 0x71, 0x2, 0x2, 0x53f, 0x541, 0x9, 0x6, 0x2, 
    0x2, 0x540, 0x537, 0x3, 0x2, 0x2, 0x2, 0x540, 0x53a, 0x3, 0x2, 0x2, 
    0x2, 0x540, 0x53c, 0x3, 0x2, 0x2, 0x2, 0x540, 0x53e, 0x3, 0x2, 0x2, 
    0x2, 0x541, 0x542, 0x3, 0x2, 0x2, 0x2, 0x542, 0x543, 0x8, 0x31, 0x1, 
    0x2, 0x543, 0x61, 0x3, 0x2, 0x2, 0x2, 0x544, 0x546, 0x7, 0x74, 0x2, 
    0x2, 0x545, 0x544, 0x3, 0x2, 0x2, 0x2, 0x545, 0x546, 0x3, 0x2, 0x2, 
    0x2, 0x546, 0x547, 0x3, 0x2, 0x2, 0x2, 0x547, 0x54f, 0x9, 0x3, 0x2, 
    0x2, 0x548, 0x549, 0x7, 0x6f, 0x2, 0x2, 0x549, 0x54f, 0x9, 0x4, 0x2, 
    0x2, 0x54a, 0x54b, 0x7, 0x70, 0x2, 0x2, 0x54b, 0x54f, 0x9, 0x5, 0x2, 
    0x2, 0x54c, 0x54d, 0x7, 0x71, 0x2, 0x2, 0x54d, 0x54f, 0x9, 0x6, 0x2, 
    0x2, 0x54e, 0x545, 0x3, 0x2, 0x2, 0x2, 0x54e, 0x548, 0x3, 0x2, 0x2, 
    0x2, 0x54e, 0x54a, 0x3, 0x2, 0x2, 0x2, 0x54e, 0x54c, 0x3, 0x2, 0x2, 
    0x2, 0x54f, 0x550, 0x3, 0x2, 0x2, 0x2, 0x550, 0x551, 0x8, 0x32, 0x1, 
    0x2, 0x551, 0x63, 0x3, 0x2, 0x2, 0x2, 0x552, 0x553, 0x7, 0x61, 0x2, 
    0x2, 0x553, 0x557, 0x8, 0x33, 0x1, 0x2, 0x554, 0x555, 0x7, 0x62, 0x2, 
    0x2, 0x555, 0x557, 0x8, 0x33, 0x1, 0x2, 0x556, 0x552, 0x3, 0x2, 0x2, 
    0x2, 0x556, 0x554, 0x3, 0x2, 0x2, 0x2, 0x557, 0x65, 0x3, 0x2, 0x2, 0x2, 
    0x558, 0x55c, 0x7, 0x56, 0x2, 0x2, 0x559, 0x55a, 0x7, 0x72, 0x2, 0x2, 
    0x55a, 0x55c, 0x7, 0x56, 0x2, 0x2, 0x55b, 0x558, 0x3, 0x2, 0x2, 0x2, 
    0x55b, 0x559, 0x3, 0x2, 0x2, 0x2, 0x55c, 0x67, 0x3, 0x2, 0x2, 0x2, 0x55d, 
    0x55e, 0x9, 0x7, 0x2, 0x2, 0x55e, 0x69, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x6f, 
    0x75, 0x7a, 0x80, 0x86, 0x8e, 0x94, 0x9d, 0xae, 0xb3, 0xbc, 0xc3, 0xca, 
    0xd2, 0xd9, 0xde, 0xe4, 0xee, 0xf5, 0xfc, 0x104, 0x10b, 0x110, 0x11a, 
    0x121, 0x128, 0x12f, 0x139, 0x140, 0x147, 0x14e, 0x155, 0x15c, 0x166, 
    0x16d, 0x175, 0x187, 0x18e, 0x194, 0x19a, 0x1a1, 0x1a8, 0x1af, 0x1b7, 
    0x1be, 0x1c3, 0x1c9, 0x1d3, 0x1da, 0x1e1, 0x1e8, 0x1f0, 0x1f7, 0x1fc, 
    0x206, 0x20d, 0x214, 0x21b, 0x222, 0x22c, 0x233, 0x23a, 0x241, 0x248, 
    0x24f, 0x256, 0x263, 0x26a, 0x275, 0x294, 0x2bd, 0x2c3, 0x2c7, 0x2cc, 
    0x2d3, 0x2dc, 0x2e0, 0x2e5, 0x2ec, 0x2f5, 0x2f9, 0x2fe, 0x305, 0x30e, 
    0x315, 0x31c, 0x321, 0x327, 0x32c, 0x32e, 0x334, 0x33b, 0x342, 0x347, 
    0x34d, 0x353, 0x359, 0x360, 0x367, 0x36c, 0x372, 0x378, 0x37e, 0x385, 
    0x38c, 0x391, 0x397, 0x39d, 0x3a3, 0x3aa, 0x3b1, 0x3b6, 0x3bc, 0x3c2, 
    0x3c8, 0x3cf, 0x3d6, 0x3db, 0x3e1, 0x3e7, 0x3ed, 0x3f4, 0x3fb, 0x400, 
    0x406, 0x40c, 0x412, 0x419, 0x420, 0x425, 0x42b, 0x431, 0x437, 0x43e, 
    0x445, 0x44a, 0x450, 0x455, 0x457, 0x45d, 0x464, 0x46b, 0x470, 0x476, 
    0x47c, 0x482, 0x489, 0x490, 0x49a, 0x4a0, 0x4ab, 0x4ae, 0x4b7, 0x4bb, 
    0x4bd, 0x4c0, 0x4c5, 0x4c7, 0x4ca, 0x4d4, 0x4e3, 0x4ec, 0x4f1, 0x4fa, 
    0x4ff, 0x508, 0x50d, 0x516, 0x51b, 0x524, 0x529, 0x532, 0x537, 0x540, 
    0x545, 0x54e, 0x556, 0x55b, 
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
