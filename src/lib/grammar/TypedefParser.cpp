
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

std::vector<TypedefParser::ItemContext *> TypedefParser::CompilationUnitContext::item() {
  return getRuleContexts<TypedefParser::ItemContext>();
}

TypedefParser::ItemContext* TypedefParser::CompilationUnitContext::item(size_t i) {
  return getRuleContext<TypedefParser::ItemContext>(i);
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
    setState(94);
    typedefVersionDeclaration();
    setState(98);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(95);
        match(TypedefParser::WS); 
      }
      setState(100);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(102);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::KW_MODULE) {
      setState(101);
      moduleDeclaration();
    }
    setState(113);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(107);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(104);
          match(TypedefParser::WS);
          setState(109);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(110);
        useDeclaration(); 
      }
      setState(115);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
    setState(125);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(119);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(116);
          match(TypedefParser::WS);
          setState(121);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(122);
        item(); 
      }
      setState(127);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
    setState(131);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(128);
      match(TypedefParser::WS);
      setState(133);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(134);
    match(TypedefParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ItemContext ------------------------------------------------------------------

TypedefParser::ItemContext::ItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::MaybeValuedSymbolDeclarationContext* TypedefParser::ItemContext::maybeValuedSymbolDeclaration() {
  return getRuleContext<TypedefParser::MaybeValuedSymbolDeclarationContext>(0);
}

TypedefParser::StructDeclarationContext* TypedefParser::ItemContext::structDeclaration() {
  return getRuleContext<TypedefParser::StructDeclarationContext>(0);
}

TypedefParser::VariantDeclarationContext* TypedefParser::ItemContext::variantDeclaration() {
  return getRuleContext<TypedefParser::VariantDeclarationContext>(0);
}


size_t TypedefParser::ItemContext::getRuleIndex() const {
  return TypedefParser::RuleItem;
}

void TypedefParser::ItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterItem(this);
}

void TypedefParser::ItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitItem(this);
}


antlrcpp::Any TypedefParser::ItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitItem(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::ItemContext* TypedefParser::item() {
  ItemContext *_localctx = _tracker.createInstance<ItemContext>(_ctx, getState());
  enterRule(_localctx, 2, TypedefParser::RuleItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(145);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(136);
      dynamic_cast<ItemContext *>(_localctx)->maybeValuedSymbolDeclarationContext = maybeValuedSymbolDeclaration();

      		InsertField(global_symbol_table, this, dynamic_cast<ItemContext *>(_localctx)->maybeValuedSymbolDeclarationContext);

      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(139);
      dynamic_cast<ItemContext *>(_localctx)->structDeclarationContext = structDeclaration();

      		InsertField(global_symbol_table, this, dynamic_cast<ItemContext *>(_localctx)->structDeclarationContext);

      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(142);
      dynamic_cast<ItemContext *>(_localctx)->variantDeclarationContext = variantDeclaration();

      		InsertField(global_symbol_table, this, dynamic_cast<ItemContext *>(_localctx)->variantDeclarationContext);

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
  enterRule(_localctx, 4, TypedefParser::RuleMaybeValuedSymbolDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    maybeValuedSymbol();
    setState(151);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(148);
      match(TypedefParser::WS);
      setState(153);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(154);
    match(TypedefParser::SEMI);
   
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

TypedefParser::IdentifierContext* TypedefParser::VariantDeclarationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::VariantDeclarationContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

tree::TerminalNode* TypedefParser::VariantDeclarationContext::KW_VARIANT() {
  return getToken(TypedefParser::KW_VARIANT, 0);
}

tree::TerminalNode* TypedefParser::VariantDeclarationContext::LBRACE() {
  return getToken(TypedefParser::LBRACE, 0);
}

tree::TerminalNode* TypedefParser::VariantDeclarationContext::RBRACE() {
  return getToken(TypedefParser::RBRACE, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::VariantDeclarationContext::SEMI() {
  return getTokens(TypedefParser::SEMI);
}

tree::TerminalNode* TypedefParser::VariantDeclarationContext::SEMI(size_t i) {
  return getToken(TypedefParser::SEMI, i);
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
  enterRule(_localctx, 6, TypedefParser::RuleVariantDeclaration);

  		dynamic_cast<VariantDeclarationContext *>(_localctx)->v =  std::make_shared<td::Variant>();
  	
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(156);
    dynamic_cast<VariantDeclarationContext *>(_localctx)->identifierContext = identifier();
    setState(160);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(157);
      match(TypedefParser::WS);
      setState(162);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(163);
    match(TypedefParser::COLON);
    setState(167);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(164);
      match(TypedefParser::WS);
      setState(169);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
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
    match(TypedefParser::LBRACE);
    setState(201);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 84) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 84)) & ((1ULL << (TypedefParser::NON_KEYWORD_IDENTIFIER - 84))
      | (1ULL << (TypedefParser::WS - 84))
      | (1ULL << (TypedefParser::RAW_ESCAPE - 84)))) != 0)) {
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
      dynamic_cast<VariantDeclarationContext *>(_localctx)->unvaluedSymbolContext = unvaluedSymbol();

      				TryInsertSymbol(_localctx->v, this, dynamic_cast<VariantDeclarationContext *>(_localctx)->unvaluedSymbolContext);
      			
      setState(189);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(186);
        match(TypedefParser::WS);
        setState(191);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(192);
      match(TypedefParser::SEMI);
      setState(196);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(193);
          match(TypedefParser::WS); 
        }
        setState(198);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
      }
      setState(203);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(204);
    match(TypedefParser::RBRACE);
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

    		dynamic_cast<VariantDeclarationContext *>(_localctx)->maybe_symbol =  std::make_pair(dynamic_cast<VariantDeclarationContext *>(_localctx)->identifierContext->id, _localctx->v);
    	
   
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

TypedefParser::IdentifierContext* TypedefParser::StructDeclarationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::StructDeclarationContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

tree::TerminalNode* TypedefParser::StructDeclarationContext::KW_STRUCT() {
  return getToken(TypedefParser::KW_STRUCT, 0);
}

tree::TerminalNode* TypedefParser::StructDeclarationContext::LBRACE() {
  return getToken(TypedefParser::LBRACE, 0);
}

tree::TerminalNode* TypedefParser::StructDeclarationContext::RBRACE() {
  return getToken(TypedefParser::RBRACE, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::StructDeclarationContext::SEMI() {
  return getTokens(TypedefParser::SEMI);
}

tree::TerminalNode* TypedefParser::StructDeclarationContext::SEMI(size_t i) {
  return getToken(TypedefParser::SEMI, i);
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
  enterRule(_localctx, 8, TypedefParser::RuleStructDeclaration);

  		dynamic_cast<StructDeclarationContext *>(_localctx)->s =  std::make_shared<td::Struct>();
  	
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(215);
    dynamic_cast<StructDeclarationContext *>(_localctx)->identifierContext = identifier();
    setState(219);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(216);
      match(TypedefParser::WS);
      setState(221);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(222);
    match(TypedefParser::COLON);
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
    match(TypedefParser::KW_STRUCT);
    setState(233);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(230);
      match(TypedefParser::WS);
      setState(235);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(236);
    match(TypedefParser::LBRACE);
    setState(260);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 84) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 84)) & ((1ULL << (TypedefParser::NON_KEYWORD_IDENTIFIER - 84))
      | (1ULL << (TypedefParser::WS - 84))
      | (1ULL << (TypedefParser::RAW_ESCAPE - 84)))) != 0)) {
      setState(240);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(237);
        match(TypedefParser::WS);
        setState(242);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(243);
      dynamic_cast<StructDeclarationContext *>(_localctx)->maybeValuedSymbolContext = maybeValuedSymbol();

      				TryInsertSymbol(_localctx->s, this, dynamic_cast<StructDeclarationContext *>(_localctx)->maybeValuedSymbolContext);
      			
      setState(248);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(245);
        match(TypedefParser::WS);
        setState(250);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(251);
      match(TypedefParser::SEMI);
      setState(255);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(252);
          match(TypedefParser::WS); 
        }
        setState(257);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
      }
      setState(262);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(263);
    match(TypedefParser::RBRACE);
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
    match(TypedefParser::SEMI);

    		dynamic_cast<StructDeclarationContext *>(_localctx)->maybe_symbol =  std::make_pair(dynamic_cast<StructDeclarationContext *>(_localctx)->identifierContext->id, _localctx->s);
    	
   
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
  enterRule(_localctx, 10, TypedefParser::RuleMaybeValuedSymbol);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(274);
    dynamic_cast<MaybeValuedSymbolContext *>(_localctx)->identifierContext = identifier();
    setState(278);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(275);
        match(TypedefParser::WS); 
      }
      setState(280);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    }
    setState(281);
    dynamic_cast<MaybeValuedSymbolContext *>(_localctx)->maybeValuedTypeContext = maybeValuedType();
    setState(285);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(282);
        match(TypedefParser::WS); 
      }
      setState(287);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    }

    		dynamic_cast<MaybeValuedSymbolContext *>(_localctx)->maybe_symbol =  MakeSymbol(this, global_symbol_table,
    			dynamic_cast<MaybeValuedSymbolContext *>(_localctx)->identifierContext->id, dynamic_cast<MaybeValuedSymbolContext *>(_localctx)->maybeValuedTypeContext);

   
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
  enterRule(_localctx, 12, TypedefParser::RuleUnvaluedSymbol);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(290);
    dynamic_cast<UnvaluedSymbolContext *>(_localctx)->identifierContext = identifier();
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
    match(TypedefParser::COLON);
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
    dynamic_cast<UnvaluedSymbolContext *>(_localctx)->unvaluedTypeContext = unvaluedType();
    setState(308);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(305);
        match(TypedefParser::WS); 
      }
      setState(310);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    }

    		// TODO probably don't need this now that maybe_val's are getting
    		// bubbled up the tree.
    		dynamic_cast<UnvaluedSymbolContext *>(_localctx)->maybe_symbol =  MakeSymbol(this, global_symbol_table,
    			dynamic_cast<UnvaluedSymbolContext *>(_localctx)->identifierContext->id, dynamic_cast<UnvaluedSymbolContext *>(_localctx)->unvaluedTypeContext);

   
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
  enterRule(_localctx, 14, TypedefParser::RuleMaybeValuedType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(327);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(313);
      dynamic_cast<MaybeValuedTypeContext *>(_localctx)->valuedTypeContext = valuedType();
      dynamic_cast<MaybeValuedTypeContext *>(_localctx)->maybe_val =  dynamic_cast<MaybeValuedTypeContext *>(_localctx)->valuedTypeContext->mayble_val;
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(316);
      match(TypedefParser::COLON);
      setState(320);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(317);
        match(TypedefParser::WS);
        setState(322);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(323);
      dynamic_cast<MaybeValuedTypeContext *>(_localctx)->unvaluedTypeContext = unvaluedType();
      dynamic_cast<MaybeValuedTypeContext *>(_localctx)->maybe_val =  dynamic_cast<MaybeValuedTypeContext *>(_localctx)->unvaluedTypeContext->mayble_val;
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
  enterRule(_localctx, 16, TypedefParser::RuleValuedType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(329);
    dynamic_cast<ValuedTypeContext *>(_localctx)->valuedPrimitiveTypeContext = valuedPrimitiveType();
    dynamic_cast<ValuedTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedTypeContext *>(_localctx)->valuedPrimitiveTypeContext->mayble_val;
   
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

TypedefParser::VectorTypeContext* TypedefParser::UnvaluedTypeContext::vectorType() {
  return getRuleContext<TypedefParser::VectorTypeContext>(0);
}

TypedefParser::MapTypeContext* TypedefParser::UnvaluedTypeContext::mapType() {
  return getRuleContext<TypedefParser::MapTypeContext>(0);
}

TypedefParser::IdentifierContext* TypedefParser::UnvaluedTypeContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
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
  enterRule(_localctx, 18, TypedefParser::RuleUnvaluedType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(344);
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
        setState(332);
        dynamic_cast<UnvaluedTypeContext *>(_localctx)->primitiveTypeContext = primitiveType();
        dynamic_cast<UnvaluedTypeContext *>(_localctx)->maybe_val =  dynamic_cast<UnvaluedTypeContext *>(_localctx)->primitiveTypeContext->mayble_val;
        break;
      }

      case TypedefParser::KW_VECTOR: {
        setState(335);
        dynamic_cast<UnvaluedTypeContext *>(_localctx)->vectorTypeContext = vectorType();
        dynamic_cast<UnvaluedTypeContext *>(_localctx)->maybe_val =  dynamic_cast<UnvaluedTypeContext *>(_localctx)->vectorTypeContext->mayble_val;
        break;
      }

      case TypedefParser::KW_MAP: {
        setState(338);
        dynamic_cast<UnvaluedTypeContext *>(_localctx)->mapTypeContext = mapType();
        dynamic_cast<UnvaluedTypeContext *>(_localctx)->maybe_val =  dynamic_cast<UnvaluedTypeContext *>(_localctx)->mapTypeContext->mayble_val;
        break;
      }

      case TypedefParser::NON_KEYWORD_IDENTIFIER:
      case TypedefParser::RAW_ESCAPE: {
        setState(341);
        dynamic_cast<UnvaluedTypeContext *>(_localctx)->identifierContext = identifier();
        dynamic_cast<UnvaluedTypeContext *>(_localctx)->maybe_val =  std::optional<SymbolRef>(
        			  dynamic_cast<UnvaluedTypeContext *>(_localctx)->identifierContext->NON_KEYWORD_IDENTIFIER()->getSymbol()->getText());
        			
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

//----------------- VectorTypeContext ------------------------------------------------------------------

TypedefParser::VectorTypeContext::VectorTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::VectorTypeContext::KW_VECTOR() {
  return getToken(TypedefParser::KW_VECTOR, 0);
}

tree::TerminalNode* TypedefParser::VectorTypeContext::LT() {
  return getToken(TypedefParser::LT, 0);
}

TypedefParser::UnvaluedTypeContext* TypedefParser::VectorTypeContext::unvaluedType() {
  return getRuleContext<TypedefParser::UnvaluedTypeContext>(0);
}

tree::TerminalNode* TypedefParser::VectorTypeContext::GT() {
  return getToken(TypedefParser::GT, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::VectorTypeContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::VectorTypeContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::VectorTypeContext::getRuleIndex() const {
  return TypedefParser::RuleVectorType;
}

void TypedefParser::VectorTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVectorType(this);
}

void TypedefParser::VectorTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVectorType(this);
}


antlrcpp::Any TypedefParser::VectorTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitVectorType(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::VectorTypeContext* TypedefParser::vectorType() {
  VectorTypeContext *_localctx = _tracker.createInstance<VectorTypeContext>(_ctx, getState());
  enterRule(_localctx, 20, TypedefParser::RuleVectorType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(346);
    match(TypedefParser::KW_VECTOR);
    setState(350);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(347);
      match(TypedefParser::WS);
      setState(352);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(353);
    match(TypedefParser::LT);
    setState(357);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(354);
      match(TypedefParser::WS);
      setState(359);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(360);
    dynamic_cast<VectorTypeContext *>(_localctx)->unvaluedTypeContext = unvaluedType();
    setState(364);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(361);
      match(TypedefParser::WS);
      setState(366);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(367);
    match(TypedefParser::GT);

    		dynamic_cast<VectorTypeContext *>(_localctx)->maybe_val =  MakeVector(
    			this, global_symbol_table, dynamic_cast<VectorTypeContext *>(_localctx)->unvaluedTypeContext);
    	
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MapTypeContext ------------------------------------------------------------------

TypedefParser::MapTypeContext::MapTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::MapTypeContext::KW_MAP() {
  return getToken(TypedefParser::KW_MAP, 0);
}

tree::TerminalNode* TypedefParser::MapTypeContext::LT() {
  return getToken(TypedefParser::LT, 0);
}

TypedefParser::PrimitiveTypeContext* TypedefParser::MapTypeContext::primitiveType() {
  return getRuleContext<TypedefParser::PrimitiveTypeContext>(0);
}

tree::TerminalNode* TypedefParser::MapTypeContext::COMMA() {
  return getToken(TypedefParser::COMMA, 0);
}

TypedefParser::UnvaluedTypeContext* TypedefParser::MapTypeContext::unvaluedType() {
  return getRuleContext<TypedefParser::UnvaluedTypeContext>(0);
}

tree::TerminalNode* TypedefParser::MapTypeContext::GT() {
  return getToken(TypedefParser::GT, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::MapTypeContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::MapTypeContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::MapTypeContext::getRuleIndex() const {
  return TypedefParser::RuleMapType;
}

void TypedefParser::MapTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMapType(this);
}

void TypedefParser::MapTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMapType(this);
}


antlrcpp::Any TypedefParser::MapTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitMapType(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::MapTypeContext* TypedefParser::mapType() {
  MapTypeContext *_localctx = _tracker.createInstance<MapTypeContext>(_ctx, getState());
  enterRule(_localctx, 22, TypedefParser::RuleMapType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(370);
    match(TypedefParser::KW_MAP);
    setState(374);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(371);
      match(TypedefParser::WS);
      setState(376);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(377);
    match(TypedefParser::LT);
    setState(381);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(378);
      match(TypedefParser::WS);
      setState(383);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(384);
    dynamic_cast<MapTypeContext *>(_localctx)->primitiveTypeContext = primitiveType();
    setState(388);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(385);
      match(TypedefParser::WS);
      setState(390);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(391);
    match(TypedefParser::COMMA);
    setState(395);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(392);
      match(TypedefParser::WS);
      setState(397);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(398);
    dynamic_cast<MapTypeContext *>(_localctx)->unvaluedTypeContext = unvaluedType();
    setState(402);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(399);
      match(TypedefParser::WS);
      setState(404);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(405);
    match(TypedefParser::GT);

    		dynamic_cast<MapTypeContext *>(_localctx)->maybe_val =  MakeMap(
    			this, global_symbol_table, dynamic_cast<MapTypeContext *>(_localctx)->primitiveTypeContext, dynamic_cast<MapTypeContext *>(_localctx)->unvaluedTypeContext);
    	
   
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
  enterRule(_localctx, 24, TypedefParser::RulePrimitiveType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(434);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::KW_BOOL: {
        enterOuterAlt(_localctx, 1);
        setState(408);
        match(TypedefParser::KW_BOOL);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<bool>(); 
        break;
      }

      case TypedefParser::KW_CHAR: {
        enterOuterAlt(_localctx, 2);
        setState(410);
        match(TypedefParser::KW_CHAR);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<char32_t>(); 
        break;
      }

      case TypedefParser::KW_STRING: {
        enterOuterAlt(_localctx, 3);
        setState(412);
        match(TypedefParser::KW_STRING);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<string>(); 
        break;
      }

      case TypedefParser::KW_F32: {
        enterOuterAlt(_localctx, 4);
        setState(414);
        match(TypedefParser::KW_F32);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<float>(); 
        break;
      }

      case TypedefParser::KW_F64: {
        enterOuterAlt(_localctx, 5);
        setState(416);
        match(TypedefParser::KW_F64);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<double>(); 
        break;
      }

      case TypedefParser::KW_U8: {
        enterOuterAlt(_localctx, 6);
        setState(418);
        match(TypedefParser::KW_U8);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<uint8_t>(); 
        break;
      }

      case TypedefParser::KW_U16: {
        enterOuterAlt(_localctx, 7);
        setState(420);
        match(TypedefParser::KW_U16);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<uint16_t>(); 
        break;
      }

      case TypedefParser::KW_U32: {
        enterOuterAlt(_localctx, 8);
        setState(422);
        match(TypedefParser::KW_U32);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<uint32_t>(); 
        break;
      }

      case TypedefParser::KW_U64: {
        enterOuterAlt(_localctx, 9);
        setState(424);
        match(TypedefParser::KW_U64);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<uint64_t>(); 
        break;
      }

      case TypedefParser::KW_I8: {
        enterOuterAlt(_localctx, 10);
        setState(426);
        match(TypedefParser::KW_I8);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<int8_t>(); 
        break;
      }

      case TypedefParser::KW_I16: {
        enterOuterAlt(_localctx, 11);
        setState(428);
        match(TypedefParser::KW_I16);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<int16_t>(); 
        break;
      }

      case TypedefParser::KW_I32: {
        enterOuterAlt(_localctx, 12);
        setState(430);
        match(TypedefParser::KW_I32);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<int32_t>(); 
        break;
      }

      case TypedefParser::KW_I64: {
        enterOuterAlt(_localctx, 13);
        setState(432);
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
  enterRule(_localctx, 26, TypedefParser::RuleValuedPrimitiveType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(475);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      setState(436);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedBoolFragmentContext = valuedBoolFragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedBoolFragmentContext->literal->maybe_val;
      break;
    }

    case 2: {
      setState(439);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedCharFragmentContext = valuedCharFragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedCharFragmentContext->literal->maybe_val;
      break;
    }

    case 3: {
      setState(442);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedStringFragmentContext = valuedStringFragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedStringFragmentContext->literal->maybe_val;
      break;
    }

    case 4: {
      setState(445);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedF32FragmentContext = valuedF32Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedF32FragmentContext->literal->maybe_val;
      break;
    }

    case 5: {
      setState(448);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedF64FragmentContext = valuedF64Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedF64FragmentContext->literal->maybe_val;
      break;
    }

    case 6: {
      setState(451);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU8FragmentContext = valuedU8Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU8FragmentContext->literal->maybe_val;
      break;
    }

    case 7: {
      setState(454);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU16FragmentContext = valuedU16Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU16FragmentContext->literal->maybe_val;
      break;
    }

    case 8: {
      setState(457);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU32FragmentContext = valuedU32Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU32FragmentContext->literal->maybe_val;
      break;
    }

    case 9: {
      setState(460);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU64FragmentContext = valuedU64Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU64FragmentContext->literal->maybe_val;
      break;
    }

    case 10: {
      setState(463);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedI8FragmentContext = valuedI8Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedI8FragmentContext->literal->maybe_val;
      break;
    }

    case 11: {
      setState(466);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedI16FragmentContext = valuedI16Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedI16FragmentContext->literal->maybe_val;
      break;
    }

    case 12: {
      setState(469);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedI32FragmentContext = valuedI32Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedI32FragmentContext->literal->maybe_val;
      break;
    }

    case 13: {
      setState(472);
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
  enterRule(_localctx, 28, TypedefParser::RuleValuedBoolFragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(485);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::COLON) {
      setState(477);
      match(TypedefParser::COLON);
      setState(481);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(478);
        match(TypedefParser::WS);
        setState(483);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(484);
      match(TypedefParser::KW_BOOL);
    }
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
    match(TypedefParser::EQ);
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
  enterRule(_localctx, 30, TypedefParser::RuleValuedCharFragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(510);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::COLON) {
      setState(502);
      match(TypedefParser::COLON);
      setState(506);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(503);
        match(TypedefParser::WS);
        setState(508);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(509);
      match(TypedefParser::KW_CHAR);
    }
    setState(515);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(512);
      match(TypedefParser::WS);
      setState(517);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(518);
    match(TypedefParser::EQ);
    setState(522);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(519);
      match(TypedefParser::WS);
      setState(524);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(525);
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
  enterRule(_localctx, 32, TypedefParser::RuleValuedStringFragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(535);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::COLON) {
      setState(527);
      match(TypedefParser::COLON);
      setState(531);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(528);
        match(TypedefParser::WS);
        setState(533);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(534);
      match(TypedefParser::KW_STRING);
    }
    setState(540);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(537);
      match(TypedefParser::WS);
      setState(542);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(543);
    match(TypedefParser::EQ);
    setState(547);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(544);
      match(TypedefParser::WS);
      setState(549);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(550);
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
  enterRule(_localctx, 34, TypedefParser::RuleValuedF32Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(588);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(552);
        match(TypedefParser::COLON);
        setState(556);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(553);
          match(TypedefParser::WS);
          setState(558);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(559);
        match(TypedefParser::KW_F32);
        setState(563);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(560);
          match(TypedefParser::WS);
          setState(565);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(566);
        match(TypedefParser::EQ);
        setState(570);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(567);
          match(TypedefParser::WS);
          setState(572);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(573);
        dynamic_cast<ValuedF32FragmentContext *>(_localctx)->literal = f32Literal();
        setState(575);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_F32) {
          setState(574);
          match(TypedefParser::KW_F32);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(577);
        match(TypedefParser::EQ);
        setState(581);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(578);
          match(TypedefParser::WS);
          setState(583);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(584);
        dynamic_cast<ValuedF32FragmentContext *>(_localctx)->literal = f32Literal();
        setState(586);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_F32) {
          setState(585);
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
  enterRule(_localctx, 36, TypedefParser::RuleValuedF64Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(625);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(590);
        match(TypedefParser::COLON);
        setState(594);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(591);
          match(TypedefParser::WS);
          setState(596);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(597);
        match(TypedefParser::KW_F64);
        setState(601);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(598);
          match(TypedefParser::WS);
          setState(603);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(604);
        match(TypedefParser::EQ);
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
        dynamic_cast<ValuedF64FragmentContext *>(_localctx)->literal = f64Literal();
        setState(613);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_F64) {
          setState(612);
          match(TypedefParser::KW_F64);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(615);
        match(TypedefParser::EQ);
        setState(619);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(616);
          match(TypedefParser::WS);
          setState(621);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(622);
        dynamic_cast<ValuedF64FragmentContext *>(_localctx)->literal = f64Literal();
        setState(623);
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
  enterRule(_localctx, 38, TypedefParser::RuleValuedU8Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(662);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(627);
        match(TypedefParser::COLON);
        setState(631);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(628);
          match(TypedefParser::WS);
          setState(633);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(634);
        match(TypedefParser::KW_U8);
        setState(638);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(635);
          match(TypedefParser::WS);
          setState(640);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(641);
        match(TypedefParser::EQ);
        setState(645);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(642);
          match(TypedefParser::WS);
          setState(647);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(648);
        dynamic_cast<ValuedU8FragmentContext *>(_localctx)->literal = u8Literal();
        setState(650);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_U8) {
          setState(649);
          match(TypedefParser::KW_U8);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(652);
        match(TypedefParser::EQ);
        setState(656);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(653);
          match(TypedefParser::WS);
          setState(658);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(659);
        dynamic_cast<ValuedU8FragmentContext *>(_localctx)->literal = u8Literal();
        setState(660);
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
  enterRule(_localctx, 40, TypedefParser::RuleValuedU16Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(699);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(664);
        match(TypedefParser::COLON);
        setState(668);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(665);
          match(TypedefParser::WS);
          setState(670);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(671);
        match(TypedefParser::KW_U16);
        setState(675);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(672);
          match(TypedefParser::WS);
          setState(677);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(678);
        match(TypedefParser::EQ);
        setState(682);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(679);
          match(TypedefParser::WS);
          setState(684);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(685);
        dynamic_cast<ValuedU16FragmentContext *>(_localctx)->literal = u16Literal();
        setState(687);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_U16) {
          setState(686);
          match(TypedefParser::KW_U16);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(689);
        match(TypedefParser::EQ);
        setState(693);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(690);
          match(TypedefParser::WS);
          setState(695);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(696);
        dynamic_cast<ValuedU16FragmentContext *>(_localctx)->literal = u16Literal();
        setState(697);
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
  enterRule(_localctx, 42, TypedefParser::RuleValuedU32Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(736);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
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
        match(TypedefParser::KW_U32);
        setState(712);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(709);
          match(TypedefParser::WS);
          setState(714);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(715);
        match(TypedefParser::EQ);
        setState(719);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(716);
          match(TypedefParser::WS);
          setState(721);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(722);
        dynamic_cast<ValuedU32FragmentContext *>(_localctx)->literal = u32Literal();
        setState(724);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_U32) {
          setState(723);
          match(TypedefParser::KW_U32);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(726);
        match(TypedefParser::EQ);
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
        dynamic_cast<ValuedU32FragmentContext *>(_localctx)->literal = u32Literal();
        setState(734);
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
  enterRule(_localctx, 44, TypedefParser::RuleValuedU64Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(773);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(738);
        match(TypedefParser::COLON);
        setState(742);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(739);
          match(TypedefParser::WS);
          setState(744);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(745);
        match(TypedefParser::KW_U64);
        setState(749);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(746);
          match(TypedefParser::WS);
          setState(751);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(752);
        match(TypedefParser::EQ);
        setState(756);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(753);
          match(TypedefParser::WS);
          setState(758);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(759);
        dynamic_cast<ValuedU64FragmentContext *>(_localctx)->literal = u64Literal();
        setState(761);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_U64) {
          setState(760);
          match(TypedefParser::KW_U64);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(763);
        match(TypedefParser::EQ);
        setState(767);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(764);
          match(TypedefParser::WS);
          setState(769);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(770);
        dynamic_cast<ValuedU64FragmentContext *>(_localctx)->literal = u64Literal();
        setState(771);
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
  enterRule(_localctx, 46, TypedefParser::RuleValuedI8Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(810);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(775);
        match(TypedefParser::COLON);
        setState(779);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(776);
          match(TypedefParser::WS);
          setState(781);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(782);
        match(TypedefParser::KW_I8);
        setState(786);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(783);
          match(TypedefParser::WS);
          setState(788);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(789);
        match(TypedefParser::EQ);
        setState(793);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(790);
          match(TypedefParser::WS);
          setState(795);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(796);
        dynamic_cast<ValuedI8FragmentContext *>(_localctx)->literal = i8Literal();
        setState(798);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I8) {
          setState(797);
          match(TypedefParser::KW_I8);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(800);
        match(TypedefParser::EQ);
        setState(804);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(801);
          match(TypedefParser::WS);
          setState(806);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(807);
        dynamic_cast<ValuedI8FragmentContext *>(_localctx)->literal = i8Literal();
        setState(808);
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
  enterRule(_localctx, 48, TypedefParser::RuleValuedI16Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(847);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(812);
        match(TypedefParser::COLON);
        setState(816);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(813);
          match(TypedefParser::WS);
          setState(818);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(819);
        match(TypedefParser::KW_I16);
        setState(823);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(820);
          match(TypedefParser::WS);
          setState(825);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(826);
        match(TypedefParser::EQ);
        setState(830);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(827);
          match(TypedefParser::WS);
          setState(832);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(833);
        dynamic_cast<ValuedI16FragmentContext *>(_localctx)->literal = i16Literal();
        setState(835);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I16) {
          setState(834);
          match(TypedefParser::KW_I16);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(837);
        match(TypedefParser::EQ);
        setState(841);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(838);
          match(TypedefParser::WS);
          setState(843);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(844);
        dynamic_cast<ValuedI16FragmentContext *>(_localctx)->literal = i16Literal();
        setState(845);
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
  enterRule(_localctx, 50, TypedefParser::RuleValuedI32Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(885);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(849);
        match(TypedefParser::COLON);
        setState(853);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(850);
          match(TypedefParser::WS);
          setState(855);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(856);
        match(TypedefParser::KW_I32);
        setState(860);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(857);
          match(TypedefParser::WS);
          setState(862);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(863);
        match(TypedefParser::EQ);
        setState(867);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(864);
          match(TypedefParser::WS);
          setState(869);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(870);
        dynamic_cast<ValuedI32FragmentContext *>(_localctx)->literal = i32Literal();
        setState(872);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I32) {
          setState(871);
          match(TypedefParser::KW_I32);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(874);
        match(TypedefParser::EQ);
        setState(878);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(875);
          match(TypedefParser::WS);
          setState(880);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(881);
        dynamic_cast<ValuedI32FragmentContext *>(_localctx)->literal = i32Literal();
        setState(883);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I32) {
          setState(882);
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
  enterRule(_localctx, 52, TypedefParser::RuleValuedI64Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(922);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(887);
        match(TypedefParser::COLON);
        setState(891);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(888);
          match(TypedefParser::WS);
          setState(893);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(894);
        match(TypedefParser::KW_I64);
        setState(898);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(895);
          match(TypedefParser::WS);
          setState(900);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(901);
        match(TypedefParser::EQ);
        setState(905);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(902);
          match(TypedefParser::WS);
          setState(907);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(908);
        dynamic_cast<ValuedI64FragmentContext *>(_localctx)->literal = i64Literal();
        setState(910);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I64) {
          setState(909);
          match(TypedefParser::KW_I64);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(912);
        match(TypedefParser::EQ);
        setState(916);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(913);
          match(TypedefParser::WS);
          setState(918);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(919);
        dynamic_cast<ValuedI64FragmentContext *>(_localctx)->literal = i64Literal();
        setState(920);
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
  enterRule(_localctx, 54, TypedefParser::RuleTypedefVersionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(924);
    match(TypedefParser::KW_TYPEDEF);
    setState(928);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(925);
      match(TypedefParser::WS);
      setState(930);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(931);
    match(TypedefParser::EQ);
    setState(935);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(932);
      match(TypedefParser::WS);
      setState(937);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(938);
    identifier();
    setState(942);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(939);
      match(TypedefParser::WS);
      setState(944);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(945);
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
  enterRule(_localctx, 56, TypedefParser::RuleModuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(947);
    match(TypedefParser::KW_MODULE);
    setState(948);
    simplePath();
    setState(949);
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
  enterRule(_localctx, 58, TypedefParser::RuleUseDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(951);
    match(TypedefParser::KW_USE);
    setState(952);
    useTree();
    setState(953);
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
  enterRule(_localctx, 60, TypedefParser::RuleUseTree);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(984);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 127, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(959);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypedefParser::NON_KEYWORD_IDENTIFIER

      || _la == TypedefParser::RAW_ESCAPE || _la == TypedefParser::PATHSEP) {
        setState(956);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, _ctx)) {
        case 1: {
          setState(955);
          simplePath();
          break;
        }

        }
        setState(958);
        match(TypedefParser::PATHSEP);
      }
      setState(977);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypedefParser::STAR: {
          setState(961);
          match(TypedefParser::STAR);
          break;
        }

        case TypedefParser::LBRACE: {
          setState(962);
          match(TypedefParser::LBRACE);
          setState(974);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (((((_la - 84) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 84)) & ((1ULL << (TypedefParser::NON_KEYWORD_IDENTIFIER - 84))
            | (1ULL << (TypedefParser::RAW_ESCAPE - 84))
            | (1ULL << (TypedefParser::STAR - 84)))) != 0) || _la == TypedefParser::PATHSEP

          || _la == TypedefParser::LBRACE) {
            setState(963);
            useTree();
            setState(968);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 122, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
              if (alt == 1) {
                setState(964);
                match(TypedefParser::COMMA);
                setState(965);
                useTree(); 
              }
              setState(970);
              _errHandler->sync(this);
              alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 122, _ctx);
            }
            setState(972);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == TypedefParser::COMMA) {
              setState(971);
              match(TypedefParser::COMMA);
            }
          }
          setState(976);
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
      setState(979);
      simplePath();
      setState(982);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypedefParser::KW_AS) {
        setState(980);
        match(TypedefParser::KW_AS);
        setState(981);
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
  enterRule(_localctx, 62, TypedefParser::RuleSimplePath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(987);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::PATHSEP) {
      setState(986);
      match(TypedefParser::PATHSEP);
    }
    setState(989);
    identifier();
    setState(994);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 129, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(990);
        match(TypedefParser::PATHSEP);
        setState(991);
        identifier(); 
      }
      setState(996);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 129, _ctx);
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
    setState(997);
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
  enterRule(_localctx, 66, TypedefParser::RuleCharLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(999);
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
  enterRule(_localctx, 68, TypedefParser::RuleF32Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1002);
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
  enterRule(_localctx, 70, TypedefParser::RuleF64Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1005);
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
  enterRule(_localctx, 72, TypedefParser::RuleU8Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1018);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1009);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1008);
          match(TypedefParser::MINUS);
        }
        setState(1011);
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
        setState(1012);
        match(TypedefParser::HEX_PREFIX);
        setState(1013);
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
        setState(1014);
        match(TypedefParser::OCT_PREFIX);
        setState(1015);
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
        setState(1016);
        match(TypedefParser::BIN_PREFIX);
        setState(1017);
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
  enterRule(_localctx, 74, TypedefParser::RuleU16Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1032);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1023);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1022);
          match(TypedefParser::MINUS);
        }
        setState(1025);
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
        setState(1026);
        match(TypedefParser::HEX_PREFIX);
        setState(1027);
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
        setState(1028);
        match(TypedefParser::OCT_PREFIX);
        setState(1029);
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
        setState(1030);
        match(TypedefParser::BIN_PREFIX);
        setState(1031);
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
  enterRule(_localctx, 76, TypedefParser::RuleU32Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1046);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1037);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1036);
          match(TypedefParser::MINUS);
        }
        setState(1039);
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
        setState(1040);
        match(TypedefParser::HEX_PREFIX);
        setState(1041);
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
        setState(1042);
        match(TypedefParser::OCT_PREFIX);
        setState(1043);
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
        setState(1044);
        match(TypedefParser::BIN_PREFIX);
        setState(1045);
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
  enterRule(_localctx, 78, TypedefParser::RuleU64Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1060);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1051);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1050);
          match(TypedefParser::MINUS);
        }
        setState(1053);
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
        setState(1054);
        match(TypedefParser::HEX_PREFIX);
        setState(1055);
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
        setState(1056);
        match(TypedefParser::OCT_PREFIX);
        setState(1057);
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
        setState(1058);
        match(TypedefParser::BIN_PREFIX);
        setState(1059);
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
  enterRule(_localctx, 80, TypedefParser::RuleI8Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1074);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1065);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1064);
          match(TypedefParser::MINUS);
        }
        setState(1067);
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
        setState(1068);
        match(TypedefParser::HEX_PREFIX);
        setState(1069);
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
        setState(1070);
        match(TypedefParser::OCT_PREFIX);
        setState(1071);
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
        setState(1072);
        match(TypedefParser::BIN_PREFIX);
        setState(1073);
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
  enterRule(_localctx, 82, TypedefParser::RuleI16Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1088);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1079);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1078);
          match(TypedefParser::MINUS);
        }
        setState(1081);
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
        setState(1082);
        match(TypedefParser::HEX_PREFIX);
        setState(1083);
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
        setState(1084);
        match(TypedefParser::OCT_PREFIX);
        setState(1085);
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
        setState(1086);
        match(TypedefParser::BIN_PREFIX);
        setState(1087);
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
  enterRule(_localctx, 84, TypedefParser::RuleI32Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1102);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1093);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1092);
          match(TypedefParser::MINUS);
        }
        setState(1095);
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
        setState(1096);
        match(TypedefParser::HEX_PREFIX);
        setState(1097);
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
        setState(1098);
        match(TypedefParser::OCT_PREFIX);
        setState(1099);
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
        setState(1100);
        match(TypedefParser::BIN_PREFIX);
        setState(1101);
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
  enterRule(_localctx, 86, TypedefParser::RuleI64Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1116);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1107);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1106);
          match(TypedefParser::MINUS);
        }
        setState(1109);
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
        setState(1110);
        match(TypedefParser::HEX_PREFIX);
        setState(1111);
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
        setState(1112);
        match(TypedefParser::OCT_PREFIX);
        setState(1113);
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
        setState(1114);
        match(TypedefParser::BIN_PREFIX);
        setState(1115);
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
  enterRule(_localctx, 88, TypedefParser::RuleStringLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1124);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(1120);
        dynamic_cast<StringLiteralContext *>(_localctx)->string_literalToken = match(TypedefParser::STRING_LITERAL);

        		dynamic_cast<StringLiteralContext *>(_localctx)->maybe_val =  GetStringValue(this, dynamic_cast<StringLiteralContext *>(_localctx)->string_literalToken);
        	
        break;
      }

      case TypedefParser::RAW_STRING_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(1122);
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
  enterRule(_localctx, 90, TypedefParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1129);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::NON_KEYWORD_IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(1126);
        dynamic_cast<IdentifierContext *>(_localctx)->nki = match(TypedefParser::NON_KEYWORD_IDENTIFIER);
        break;
      }

      case TypedefParser::RAW_ESCAPE: {
        enterOuterAlt(_localctx, 2);
        setState(1127);
        match(TypedefParser::RAW_ESCAPE);
        setState(1128);
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
  enterRule(_localctx, 92, TypedefParser::RuleKeyword);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1131);
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
  "compilationUnit", "item", "maybeValuedSymbolDeclaration", "variantDeclaration", 
  "structDeclaration", "maybeValuedSymbol", "unvaluedSymbol", "maybeValuedType", 
  "valuedType", "unvaluedType", "vectorType", "mapType", "primitiveType", 
  "valuedPrimitiveType", "valuedBoolFragment", "valuedCharFragment", "valuedStringFragment", 
  "valuedF32Fragment", "valuedF64Fragment", "valuedU8Fragment", "valuedU16Fragment", 
  "valuedU32Fragment", "valuedU64Fragment", "valuedI8Fragment", "valuedI16Fragment", 
  "valuedI32Fragment", "valuedI64Fragment", "typedefVersionDeclaration", 
  "moduleDeclaration", "useDeclaration", "useTree", "simplePath", "boolLiteral", 
  "charLiteral", "f32Literal", "f64Literal", "u8Literal", "u16Literal", 
  "u32Literal", "u64Literal", "i8Literal", "i16Literal", "i32Literal", "i64Literal", 
  "stringLiteral", "identifier", "keyword"
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
    0x3, 0xa2, 0x470, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x63, 
    0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x66, 0xb, 0x2, 0x3, 0x2, 0x5, 0x2, 0x69, 
    0xa, 0x2, 0x3, 0x2, 0x7, 0x2, 0x6c, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x6f, 
    0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0x72, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x75, 
    0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0x78, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x7b, 
    0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0x7e, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x81, 
    0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0x84, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x87, 
    0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x94, 0xa, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x98, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 
    0x9b, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xa1, 
    0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xa4, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 
    0x5, 0xa8, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xab, 0xb, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x7, 0x5, 0xaf, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xb2, 0xb, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x7, 0x5, 0xb6, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xb9, 0xb, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xbe, 0xa, 0x5, 0xc, 0x5, 
    0xe, 0x5, 0xc1, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xc5, 0xa, 0x5, 
    0xc, 0x5, 0xe, 0x5, 0xc8, 0xb, 0x5, 0x7, 0x5, 0xca, 0xa, 0x5, 0xc, 0x5, 
    0xe, 0x5, 0xcd, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xd1, 0xa, 0x5, 
    0xc, 0x5, 0xe, 0x5, 0xd4, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0xdc, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 
    0xdf, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0xe3, 0xa, 0x6, 0xc, 0x6, 
    0xe, 0x6, 0xe6, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0xea, 0xa, 0x6, 
    0xc, 0x6, 0xe, 0x6, 0xed, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0xf1, 
    0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0xf4, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x7, 0x6, 0xf9, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0xfc, 0xb, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x7, 0x6, 0x100, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x103, 
    0xb, 0x6, 0x7, 0x6, 0x105, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x108, 0xb, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x10c, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 
    0x10f, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x7, 0x7, 0x117, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x11a, 0xb, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x11e, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x121, 
    0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x127, 0xa, 
    0x8, 0xc, 0x8, 0xe, 0x8, 0x12a, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 
    0x12e, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x131, 0xb, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x7, 0x8, 0x135, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x138, 0xb, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x7, 0x9, 0x141, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x144, 0xb, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x14a, 0xa, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x5, 0xb, 0x15b, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x15f, 0xa, 
    0xc, 0xc, 0xc, 0xe, 0xc, 0x162, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 
    0x166, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x169, 0xb, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x7, 0xc, 0x16d, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x170, 0xb, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x177, 0xa, 
    0xd, 0xc, 0xd, 0xe, 0xd, 0x17a, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 
    0x17e, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x181, 0xb, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x7, 0xd, 0x185, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x188, 0xb, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x18c, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x18f, 
    0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x193, 0xa, 0xd, 0xc, 0xd, 0xe, 
    0xd, 0x196, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1b5, 0xa, 0xe, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x1de, 0xa, 0xf, 0x3, 0x10, 0x3, 
    0x10, 0x7, 0x10, 0x1e2, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x1e5, 0xb, 
    0x10, 0x3, 0x10, 0x5, 0x10, 0x1e8, 0xa, 0x10, 0x3, 0x10, 0x7, 0x10, 
    0x1eb, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x1ee, 0xb, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x7, 0x10, 0x1f2, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x1f5, 
    0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x1fb, 
    0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x1fe, 0xb, 0x11, 0x3, 0x11, 0x5, 0x11, 
    0x201, 0xa, 0x11, 0x3, 0x11, 0x7, 0x11, 0x204, 0xa, 0x11, 0xc, 0x11, 
    0xe, 0x11, 0x207, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x20b, 
    0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x20e, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x214, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 
    0x217, 0xb, 0x12, 0x3, 0x12, 0x5, 0x12, 0x21a, 0xa, 0x12, 0x3, 0x12, 
    0x7, 0x12, 0x21d, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x220, 0xb, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x224, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 
    0x227, 0xb, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 
    0x22d, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x230, 0xb, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x7, 0x13, 0x234, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x237, 
    0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x23b, 0xa, 0x13, 0xc, 0x13, 
    0xe, 0x13, 0x23e, 0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x242, 
    0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x246, 0xa, 0x13, 0xc, 0x13, 
    0xe, 0x13, 0x249, 0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x24d, 
    0xa, 0x13, 0x5, 0x13, 0x24f, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 
    0x253, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x256, 0xb, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x7, 0x14, 0x25a, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x25d, 
    0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x261, 0xa, 0x14, 0xc, 0x14, 
    0xe, 0x14, 0x264, 0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x268, 
    0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x26c, 0xa, 0x14, 0xc, 0x14, 
    0xe, 0x14, 0x26f, 0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 
    0x274, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x278, 0xa, 0x15, 
    0xc, 0x15, 0xe, 0x15, 0x27b, 0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 
    0x27f, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x282, 0xb, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x7, 0x15, 0x286, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x289, 
    0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x28d, 0xa, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x7, 0x15, 0x291, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x294, 
    0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x299, 0xa, 0x15, 
    0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0x29d, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 
    0x2a0, 0xb, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0x2a4, 0xa, 0x16, 
    0xc, 0x16, 0xe, 0x16, 0x2a7, 0xb, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 
    0x2ab, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x2ae, 0xb, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x5, 0x16, 0x2b2, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 
    0x2b6, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x2b9, 0xb, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x2be, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x7, 0x17, 0x2c2, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x2c5, 0xb, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x2c9, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 
    0x2cc, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x2d0, 0xa, 0x17, 
    0xc, 0x17, 0xe, 0x17, 0x2d3, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 
    0x2d7, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x2db, 0xa, 0x17, 
    0xc, 0x17, 0xe, 0x17, 0x2de, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x5, 0x17, 0x2e3, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x2e7, 
    0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x2ea, 0xb, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x7, 0x18, 0x2ee, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x2f1, 0xb, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x2f5, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 
    0x2f8, 0xb, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x2fc, 0xa, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x300, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 
    0x303, 0xb, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x308, 
    0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x30c, 0xa, 0x19, 0xc, 0x19, 
    0xe, 0x19, 0x30f, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x313, 
    0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x316, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x7, 0x19, 0x31a, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x31d, 0xb, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x321, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x7, 0x19, 0x325, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x328, 0xb, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x32d, 0xa, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x7, 0x1a, 0x331, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x334, 
    0xb, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x338, 0xa, 0x1a, 0xc, 0x1a, 
    0xe, 0x1a, 0x33b, 0xb, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x33f, 
    0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x342, 0xb, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x5, 0x1a, 0x346, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x34a, 
    0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x34d, 0xb, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x5, 0x1a, 0x352, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 
    0x356, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x359, 0xb, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x7, 0x1b, 0x35d, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x360, 
    0xb, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x364, 0xa, 0x1b, 0xc, 0x1b, 
    0xe, 0x1b, 0x367, 0xb, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x36b, 
    0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x36f, 0xa, 0x1b, 0xc, 0x1b, 
    0xe, 0x1b, 0x372, 0xb, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x376, 
    0xa, 0x1b, 0x5, 0x1b, 0x378, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 
    0x37c, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x37f, 0xb, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x7, 0x1c, 0x383, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x386, 
    0xb, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x38a, 0xa, 0x1c, 0xc, 0x1c, 
    0xe, 0x1c, 0x38d, 0xb, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x391, 
    0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x395, 0xa, 0x1c, 0xc, 0x1c, 
    0xe, 0x1c, 0x398, 0xb, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 
    0x39d, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x3a1, 0xa, 0x1d, 
    0xc, 0x1d, 0xe, 0x1d, 0x3a4, 0xb, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 
    0x3a8, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x3ab, 0xb, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x7, 0x1d, 0x3af, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x3b2, 
    0xb, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x5, 0x20, 
    0x3bf, 0xa, 0x20, 0x3, 0x20, 0x5, 0x20, 0x3c2, 0xa, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x3c9, 0xa, 0x20, 
    0xc, 0x20, 0xe, 0x20, 0x3cc, 0xb, 0x20, 0x3, 0x20, 0x5, 0x20, 0x3cf, 
    0xa, 0x20, 0x5, 0x20, 0x3d1, 0xa, 0x20, 0x3, 0x20, 0x5, 0x20, 0x3d4, 
    0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x3d9, 0xa, 0x20, 
    0x5, 0x20, 0x3db, 0xa, 0x20, 0x3, 0x21, 0x5, 0x21, 0x3de, 0xa, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x3e3, 0xa, 0x21, 0xc, 0x21, 
    0xe, 0x21, 0x3e6, 0xb, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 
    0x25, 0x3, 0x26, 0x5, 0x26, 0x3f4, 0xa, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x3fd, 
    0xa, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x5, 0x27, 0x402, 0xa, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
    0x27, 0x5, 0x27, 0x40b, 0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 
    0x5, 0x28, 0x410, 0xa, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x419, 0xa, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x29, 0x5, 0x29, 0x41e, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x427, 
    0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x5, 0x2a, 0x42c, 0xa, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
    0x2a, 0x5, 0x2a, 0x435, 0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 
    0x5, 0x2b, 0x43a, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x443, 0xa, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2c, 0x5, 0x2c, 0x448, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x451, 
    0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x5, 0x2d, 0x456, 0xa, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
    0x2d, 0x5, 0x2d, 0x45f, 0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x467, 0xa, 0x2e, 0x3, 0x2f, 
    0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x46c, 0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x2, 0x2, 0x31, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
    0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 
    0x5a, 0x5c, 0x5e, 0x2, 0x8, 0x4, 0x2, 0x6, 0x6, 0xc, 0xc, 0x3, 0x2, 
    0x63, 0x64, 0x3, 0x2, 0x65, 0x66, 0x3, 0x2, 0x67, 0x68, 0x3, 0x2, 0x69, 
    0x6a, 0x4, 0x2, 0x4, 0x8, 0xa, 0x48, 0x2, 0x4fd, 0x2, 0x60, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x93, 0x3, 0x2, 0x2, 0x2, 0x6, 0x95, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xc, 0x114, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x124, 0x3, 0x2, 0x2, 0x2, 0x10, 0x149, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14, 0x15a, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x18, 0x174, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1dd, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x20, 0x200, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x219, 0x3, 0x2, 0x2, 0x2, 0x24, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x26, 0x273, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x298, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2bd, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x307, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x32c, 0x3, 0x2, 0x2, 0x2, 0x32, 0x351, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x377, 0x3, 0x2, 0x2, 0x2, 0x36, 0x39c, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x39e, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b5, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3da, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3dd, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x3e7, 0x3, 0x2, 0x2, 0x2, 0x44, 0x3e9, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x3ec, 0x3, 0x2, 0x2, 0x2, 0x48, 0x3ef, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x3fc, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x40a, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x418, 0x3, 0x2, 0x2, 0x2, 0x50, 0x426, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x434, 0x3, 0x2, 0x2, 0x2, 0x54, 0x442, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x450, 0x3, 0x2, 0x2, 0x2, 0x58, 0x45e, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x466, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x46b, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x46d, 0x3, 
    0x2, 0x2, 0x2, 0x60, 0x64, 0x5, 0x38, 0x1d, 0x2, 0x61, 0x63, 0x7, 0x5f, 
    0x2, 0x2, 0x62, 0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 0x66, 0x3, 0x2, 0x2, 
    0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x3, 0x2, 0x2, 0x2, 
    0x65, 0x68, 0x3, 0x2, 0x2, 0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x67, 
    0x69, 0x5, 0x3a, 0x1e, 0x2, 0x68, 0x67, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 
    0x3, 0x2, 0x2, 0x2, 0x69, 0x73, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6c, 0x7, 
    0x5f, 0x2, 0x2, 0x6b, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6f, 0x3, 0x2, 
    0x2, 0x2, 0x6d, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 
    0x2, 0x6e, 0x70, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 0x2, 
    0x70, 0x72, 0x5, 0x3c, 0x1f, 0x2, 0x71, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x72, 
    0x75, 0x3, 0x2, 0x2, 0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 
    0x3, 0x2, 0x2, 0x2, 0x74, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 
    0x2, 0x2, 0x2, 0x76, 0x78, 0x7, 0x5f, 0x2, 0x2, 0x77, 0x76, 0x3, 0x2, 
    0x2, 0x2, 0x78, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 
    0x2, 0x79, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7c, 0x3, 0x2, 0x2, 0x2, 
    0x7b, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7e, 0x5, 0x4, 0x3, 0x2, 0x7d, 
    0x79, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x81, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7d, 
    0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x3, 0x2, 0x2, 0x2, 0x80, 0x85, 0x3, 
    0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x82, 0x84, 0x7, 0x5f, 
    0x2, 0x2, 0x83, 0x82, 0x3, 0x2, 0x2, 0x2, 0x84, 0x87, 0x3, 0x2, 0x2, 
    0x2, 0x85, 0x83, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x3, 0x2, 0x2, 0x2, 
    0x86, 0x88, 0x3, 0x2, 0x2, 0x2, 0x87, 0x85, 0x3, 0x2, 0x2, 0x2, 0x88, 
    0x89, 0x7, 0x2, 0x2, 0x3, 0x89, 0x3, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 
    0x5, 0x6, 0x4, 0x2, 0x8b, 0x8c, 0x8, 0x3, 0x1, 0x2, 0x8c, 0x94, 0x3, 
    0x2, 0x2, 0x2, 0x8d, 0x8e, 0x5, 0xa, 0x6, 0x2, 0x8e, 0x8f, 0x8, 0x3, 
    0x1, 0x2, 0x8f, 0x94, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x5, 0x8, 0x5, 
    0x2, 0x91, 0x92, 0x8, 0x3, 0x1, 0x2, 0x92, 0x94, 0x3, 0x2, 0x2, 0x2, 
    0x93, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x93, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x93, 
    0x90, 0x3, 0x2, 0x2, 0x2, 0x94, 0x5, 0x3, 0x2, 0x2, 0x2, 0x95, 0x99, 
    0x5, 0xc, 0x7, 0x2, 0x96, 0x98, 0x7, 0x5f, 0x2, 0x2, 0x97, 0x96, 0x3, 
    0x2, 0x2, 0x2, 0x98, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x99, 0x97, 0x3, 0x2, 
    0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9c, 0x3, 0x2, 0x2, 
    0x2, 0x9b, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x7, 0x95, 0x2, 0x2, 
    0x9d, 0x7, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa2, 0x5, 0x5c, 0x2f, 0x2, 0x9f, 
    0xa1, 0x7, 0x5f, 0x2, 0x2, 0xa0, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa4, 
    0x3, 0x2, 0x2, 0x2, 0xa2, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x3, 
    0x2, 0x2, 0x2, 0xa3, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa2, 0x3, 0x2, 
    0x2, 0x2, 0xa5, 0xa9, 0x7, 0x96, 0x2, 0x2, 0xa6, 0xa8, 0x7, 0x5f, 0x2, 
    0x2, 0xa7, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xab, 0x3, 0x2, 0x2, 0x2, 
    0xa9, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 
    0xac, 0x3, 0x2, 0x2, 0x2, 0xab, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xac, 0xb0, 
    0x7, 0x10, 0x2, 0x2, 0xad, 0xaf, 0x7, 0x5f, 0x2, 0x2, 0xae, 0xad, 0x3, 
    0x2, 0x2, 0x2, 0xaf, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xae, 0x3, 0x2, 
    0x2, 0x2, 0xb0, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb3, 0x3, 0x2, 0x2, 
    0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xcb, 0x7, 0x9d, 0x2, 0x2, 
    0xb4, 0xb6, 0x7, 0x5f, 0x2, 0x2, 0xb5, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb6, 
    0xb9, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 
    0x3, 0x2, 0x2, 0x2, 0xb8, 0xba, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 0x3, 
    0x2, 0x2, 0x2, 0xba, 0xbb, 0x5, 0xe, 0x8, 0x2, 0xbb, 0xbf, 0x8, 0x5, 
    0x1, 0x2, 0xbc, 0xbe, 0x7, 0x5f, 0x2, 0x2, 0xbd, 0xbc, 0x3, 0x2, 0x2, 
    0x2, 0xbe, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xbd, 0x3, 0x2, 0x2, 0x2, 
    0xbf, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc1, 
    0xbf, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc6, 0x7, 0x95, 0x2, 0x2, 0xc3, 0xc5, 
    0x7, 0x5f, 0x2, 0x2, 0xc4, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc8, 0x3, 
    0x2, 0x2, 0x2, 0xc6, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x3, 0x2, 
    0x2, 0x2, 0xc7, 0xca, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc6, 0x3, 0x2, 0x2, 
    0x2, 0xc9, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcd, 0x3, 0x2, 0x2, 0x2, 
    0xcb, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 
    0xce, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xce, 0xd2, 
    0x7, 0x9e, 0x2, 0x2, 0xcf, 0xd1, 0x7, 0x5f, 0x2, 0x2, 0xd0, 0xcf, 0x3, 
    0x2, 0x2, 0x2, 0xd1, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd0, 0x3, 0x2, 
    0x2, 0x2, 0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd5, 0x3, 0x2, 0x2, 
    0x2, 0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x7, 0x95, 0x2, 0x2, 
    0xd6, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x8, 0x5, 0x1, 0x2, 0xd8, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdd, 0x5, 0x5c, 0x2f, 0x2, 0xda, 0xdc, 
    0x7, 0x5f, 0x2, 0x2, 0xdb, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdf, 0x3, 
    0x2, 0x2, 0x2, 0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x3, 0x2, 
    0x2, 0x2, 0xde, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xdd, 0x3, 0x2, 0x2, 
    0x2, 0xe0, 0xe4, 0x7, 0x96, 0x2, 0x2, 0xe1, 0xe3, 0x7, 0x5f, 0x2, 0x2, 
    0xe2, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe4, 
    0xe2, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe7, 
    0x3, 0x2, 0x2, 0x2, 0xe6, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xeb, 0x7, 
    0xb, 0x2, 0x2, 0xe8, 0xea, 0x7, 0x5f, 0x2, 0x2, 0xe9, 0xe8, 0x3, 0x2, 
    0x2, 0x2, 0xea, 0xed, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xe9, 0x3, 0x2, 0x2, 
    0x2, 0xeb, 0xec, 0x3, 0x2, 0x2, 0x2, 0xec, 0xee, 0x3, 0x2, 0x2, 0x2, 
    0xed, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xee, 0x106, 0x7, 0x9d, 0x2, 0x2, 0xef, 
    0xf1, 0x7, 0x5f, 0x2, 0x2, 0xf0, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf4, 
    0x3, 0x2, 0x2, 0x2, 0xf2, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x3, 
    0x2, 0x2, 0x2, 0xf3, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf2, 0x3, 0x2, 
    0x2, 0x2, 0xf5, 0xf6, 0x5, 0xc, 0x7, 0x2, 0xf6, 0xfa, 0x8, 0x6, 0x1, 
    0x2, 0xf7, 0xf9, 0x7, 0x5f, 0x2, 0x2, 0xf8, 0xf7, 0x3, 0x2, 0x2, 0x2, 
    0xf9, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xfa, 
    0xfb, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfa, 
    0x3, 0x2, 0x2, 0x2, 0xfd, 0x101, 0x7, 0x95, 0x2, 0x2, 0xfe, 0x100, 0x7, 
    0x5f, 0x2, 0x2, 0xff, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x100, 0x103, 0x3, 0x2, 
    0x2, 0x2, 0x101, 0xff, 0x3, 0x2, 0x2, 0x2, 0x101, 0x102, 0x3, 0x2, 0x2, 
    0x2, 0x102, 0x105, 0x3, 0x2, 0x2, 0x2, 0x103, 0x101, 0x3, 0x2, 0x2, 
    0x2, 0x104, 0xf2, 0x3, 0x2, 0x2, 0x2, 0x105, 0x108, 0x3, 0x2, 0x2, 0x2, 
    0x106, 0x104, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 0x3, 0x2, 0x2, 0x2, 
    0x107, 0x109, 0x3, 0x2, 0x2, 0x2, 0x108, 0x106, 0x3, 0x2, 0x2, 0x2, 
    0x109, 0x10d, 0x7, 0x9e, 0x2, 0x2, 0x10a, 0x10c, 0x7, 0x5f, 0x2, 0x2, 
    0x10b, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10f, 0x3, 0x2, 0x2, 0x2, 
    0x10d, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 
    0x10e, 0x110, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x10d, 0x3, 0x2, 0x2, 0x2, 
    0x110, 0x111, 0x7, 0x95, 0x2, 0x2, 0x111, 0x112, 0x3, 0x2, 0x2, 0x2, 
    0x112, 0x113, 0x8, 0x6, 0x1, 0x2, 0x113, 0xb, 0x3, 0x2, 0x2, 0x2, 0x114, 
    0x118, 0x5, 0x5c, 0x2f, 0x2, 0x115, 0x117, 0x7, 0x5f, 0x2, 0x2, 0x116, 
    0x115, 0x3, 0x2, 0x2, 0x2, 0x117, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x118, 
    0x116, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x3, 0x2, 0x2, 0x2, 0x119, 
    0x11b, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11b, 
    0x11f, 0x5, 0x10, 0x9, 0x2, 0x11c, 0x11e, 0x7, 0x5f, 0x2, 0x2, 0x11d, 
    0x11c, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x121, 0x3, 0x2, 0x2, 0x2, 0x11f, 
    0x11d, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x3, 0x2, 0x2, 0x2, 0x120, 
    0x122, 0x3, 0x2, 0x2, 0x2, 0x121, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x122, 
    0x123, 0x8, 0x7, 0x1, 0x2, 0x123, 0xd, 0x3, 0x2, 0x2, 0x2, 0x124, 0x128, 
    0x5, 0x5c, 0x2f, 0x2, 0x125, 0x127, 0x7, 0x5f, 0x2, 0x2, 0x126, 0x125, 
    0x3, 0x2, 0x2, 0x2, 0x127, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x128, 0x126, 
    0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12b, 
    0x3, 0x2, 0x2, 0x2, 0x12a, 0x128, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12f, 
    0x7, 0x96, 0x2, 0x2, 0x12c, 0x12e, 0x7, 0x5f, 0x2, 0x2, 0x12d, 0x12c, 
    0x3, 0x2, 0x2, 0x2, 0x12e, 0x131, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x12d, 
    0x3, 0x2, 0x2, 0x2, 0x12f, 0x130, 0x3, 0x2, 0x2, 0x2, 0x130, 0x132, 
    0x3, 0x2, 0x2, 0x2, 0x131, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x132, 0x136, 
    0x5, 0x14, 0xb, 0x2, 0x133, 0x135, 0x7, 0x5f, 0x2, 0x2, 0x134, 0x133, 
    0x3, 0x2, 0x2, 0x2, 0x135, 0x138, 0x3, 0x2, 0x2, 0x2, 0x136, 0x134, 
    0x3, 0x2, 0x2, 0x2, 0x136, 0x137, 0x3, 0x2, 0x2, 0x2, 0x137, 0x139, 
    0x3, 0x2, 0x2, 0x2, 0x138, 0x136, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 
    0x8, 0x8, 0x1, 0x2, 0x13a, 0xf, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x5, 
    0x12, 0xa, 0x2, 0x13c, 0x13d, 0x8, 0x9, 0x1, 0x2, 0x13d, 0x14a, 0x3, 
    0x2, 0x2, 0x2, 0x13e, 0x142, 0x7, 0x96, 0x2, 0x2, 0x13f, 0x141, 0x7, 
    0x5f, 0x2, 0x2, 0x140, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x141, 0x144, 0x3, 
    0x2, 0x2, 0x2, 0x142, 0x140, 0x3, 0x2, 0x2, 0x2, 0x142, 0x143, 0x3, 
    0x2, 0x2, 0x2, 0x143, 0x145, 0x3, 0x2, 0x2, 0x2, 0x144, 0x142, 0x3, 
    0x2, 0x2, 0x2, 0x145, 0x146, 0x5, 0x14, 0xb, 0x2, 0x146, 0x147, 0x3, 
    0x2, 0x2, 0x2, 0x147, 0x148, 0x8, 0x9, 0x1, 0x2, 0x148, 0x14a, 0x3, 
    0x2, 0x2, 0x2, 0x149, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x149, 0x13e, 0x3, 
    0x2, 0x2, 0x2, 0x14a, 0x11, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x5, 0x1c, 
    0xf, 0x2, 0x14c, 0x14d, 0x8, 0xa, 0x1, 0x2, 0x14d, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x14e, 0x14f, 0x5, 0x1a, 0xe, 0x2, 0x14f, 0x150, 0x8, 0xb, 0x1, 
    0x2, 0x150, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x5, 0x16, 0xc, 
    0x2, 0x152, 0x153, 0x8, 0xb, 0x1, 0x2, 0x153, 0x15b, 0x3, 0x2, 0x2, 
    0x2, 0x154, 0x155, 0x5, 0x18, 0xd, 0x2, 0x155, 0x156, 0x8, 0xb, 0x1, 
    0x2, 0x156, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 0x5, 0x5c, 0x2f, 
    0x2, 0x158, 0x159, 0x8, 0xb, 0x1, 0x2, 0x159, 0x15b, 0x3, 0x2, 0x2, 
    0x2, 0x15a, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x151, 0x3, 0x2, 0x2, 
    0x2, 0x15a, 0x154, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x157, 0x3, 0x2, 0x2, 
    0x2, 0x15b, 0x15, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x160, 0x7, 0x11, 0x2, 
    0x2, 0x15d, 0x15f, 0x7, 0x5f, 0x2, 0x2, 0x15e, 0x15d, 0x3, 0x2, 0x2, 
    0x2, 0x15f, 0x162, 0x3, 0x2, 0x2, 0x2, 0x160, 0x15e, 0x3, 0x2, 0x2, 
    0x2, 0x160, 0x161, 0x3, 0x2, 0x2, 0x2, 0x161, 0x163, 0x3, 0x2, 0x2, 
    0x2, 0x162, 0x160, 0x3, 0x2, 0x2, 0x2, 0x163, 0x167, 0x7, 0x8c, 0x2, 
    0x2, 0x164, 0x166, 0x7, 0x5f, 0x2, 0x2, 0x165, 0x164, 0x3, 0x2, 0x2, 
    0x2, 0x166, 0x169, 0x3, 0x2, 0x2, 0x2, 0x167, 0x165, 0x3, 0x2, 0x2, 
    0x2, 0x167, 0x168, 0x3, 0x2, 0x2, 0x2, 0x168, 0x16a, 0x3, 0x2, 0x2, 
    0x2, 0x169, 0x167, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16e, 0x5, 0x14, 0xb, 
    0x2, 0x16b, 0x16d, 0x7, 0x5f, 0x2, 0x2, 0x16c, 0x16b, 0x3, 0x2, 0x2, 
    0x2, 0x16d, 0x170, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16c, 0x3, 0x2, 0x2, 
    0x2, 0x16e, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x171, 0x3, 0x2, 0x2, 
    0x2, 0x170, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x171, 0x172, 0x7, 0x8b, 0x2, 
    0x2, 0x172, 0x173, 0x8, 0xc, 0x1, 0x2, 0x173, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0x174, 0x178, 0x7, 0x12, 0x2, 0x2, 0x175, 0x177, 0x7, 0x5f, 0x2, 0x2, 
    0x176, 0x175, 0x3, 0x2, 0x2, 0x2, 0x177, 0x17a, 0x3, 0x2, 0x2, 0x2, 
    0x178, 0x176, 0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 0x3, 0x2, 0x2, 0x2, 
    0x179, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x178, 0x3, 0x2, 0x2, 0x2, 
    0x17b, 0x17f, 0x7, 0x8c, 0x2, 0x2, 0x17c, 0x17e, 0x7, 0x5f, 0x2, 0x2, 
    0x17d, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x181, 0x3, 0x2, 0x2, 0x2, 
    0x17f, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x180, 0x3, 0x2, 0x2, 0x2, 
    0x180, 0x182, 0x3, 0x2, 0x2, 0x2, 0x181, 0x17f, 0x3, 0x2, 0x2, 0x2, 
    0x182, 0x186, 0x5, 0x1a, 0xe, 0x2, 0x183, 0x185, 0x7, 0x5f, 0x2, 0x2, 
    0x184, 0x183, 0x3, 0x2, 0x2, 0x2, 0x185, 0x188, 0x3, 0x2, 0x2, 0x2, 
    0x186, 0x184, 0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 0x3, 0x2, 0x2, 0x2, 
    0x187, 0x189, 0x3, 0x2, 0x2, 0x2, 0x188, 0x186, 0x3, 0x2, 0x2, 0x2, 
    0x189, 0x18d, 0x7, 0x94, 0x2, 0x2, 0x18a, 0x18c, 0x7, 0x5f, 0x2, 0x2, 
    0x18b, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18f, 0x3, 0x2, 0x2, 0x2, 
    0x18d, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18e, 0x3, 0x2, 0x2, 0x2, 
    0x18e, 0x190, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x18d, 0x3, 0x2, 0x2, 0x2, 
    0x190, 0x194, 0x5, 0x14, 0xb, 0x2, 0x191, 0x193, 0x7, 0x5f, 0x2, 0x2, 
    0x192, 0x191, 0x3, 0x2, 0x2, 0x2, 0x193, 0x196, 0x3, 0x2, 0x2, 0x2, 
    0x194, 0x192, 0x3, 0x2, 0x2, 0x2, 0x194, 0x195, 0x3, 0x2, 0x2, 0x2, 
    0x195, 0x197, 0x3, 0x2, 0x2, 0x2, 0x196, 0x194, 0x3, 0x2, 0x2, 0x2, 
    0x197, 0x198, 0x7, 0x8b, 0x2, 0x2, 0x198, 0x199, 0x8, 0xd, 0x1, 0x2, 
    0x199, 0x19, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19b, 0x7, 0x49, 0x2, 0x2, 
    0x19b, 0x1b5, 0x8, 0xe, 0x1, 0x2, 0x19c, 0x19d, 0x7, 0x4a, 0x2, 0x2, 
    0x19d, 0x1b5, 0x8, 0xe, 0x1, 0x2, 0x19e, 0x19f, 0x7, 0x4b, 0x2, 0x2, 
    0x19f, 0x1b5, 0x8, 0xe, 0x1, 0x2, 0x1a0, 0x1a1, 0x7, 0x4c, 0x2, 0x2, 
    0x1a1, 0x1b5, 0x8, 0xe, 0x1, 0x2, 0x1a2, 0x1a3, 0x7, 0x4d, 0x2, 0x2, 
    0x1a3, 0x1b5, 0x8, 0xe, 0x1, 0x2, 0x1a4, 0x1a5, 0x7, 0x4e, 0x2, 0x2, 
    0x1a5, 0x1b5, 0x8, 0xe, 0x1, 0x2, 0x1a6, 0x1a7, 0x7, 0x4f, 0x2, 0x2, 
    0x1a7, 0x1b5, 0x8, 0xe, 0x1, 0x2, 0x1a8, 0x1a9, 0x7, 0x50, 0x2, 0x2, 
    0x1a9, 0x1b5, 0x8, 0xe, 0x1, 0x2, 0x1aa, 0x1ab, 0x7, 0x51, 0x2, 0x2, 
    0x1ab, 0x1b5, 0x8, 0xe, 0x1, 0x2, 0x1ac, 0x1ad, 0x7, 0x52, 0x2, 0x2, 
    0x1ad, 0x1b5, 0x8, 0xe, 0x1, 0x2, 0x1ae, 0x1af, 0x7, 0x53, 0x2, 0x2, 
    0x1af, 0x1b5, 0x8, 0xe, 0x1, 0x2, 0x1b0, 0x1b1, 0x7, 0x54, 0x2, 0x2, 
    0x1b1, 0x1b5, 0x8, 0xe, 0x1, 0x2, 0x1b2, 0x1b3, 0x7, 0x55, 0x2, 0x2, 
    0x1b3, 0x1b5, 0x8, 0xe, 0x1, 0x2, 0x1b4, 0x19a, 0x3, 0x2, 0x2, 0x2, 
    0x1b4, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x19e, 0x3, 0x2, 0x2, 0x2, 
    0x1b4, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1a2, 0x3, 0x2, 0x2, 0x2, 
    0x1b4, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1a6, 0x3, 0x2, 0x2, 0x2, 
    0x1b4, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1aa, 0x3, 0x2, 0x2, 0x2, 
    0x1b4, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1ae, 0x3, 0x2, 0x2, 0x2, 
    0x1b4, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b2, 0x3, 0x2, 0x2, 0x2, 
    0x1b5, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 0x5, 0x1e, 0x10, 0x2, 
    0x1b7, 0x1b8, 0x8, 0xf, 0x1, 0x2, 0x1b8, 0x1de, 0x3, 0x2, 0x2, 0x2, 
    0x1b9, 0x1ba, 0x5, 0x20, 0x11, 0x2, 0x1ba, 0x1bb, 0x8, 0xf, 0x1, 0x2, 
    0x1bb, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bd, 0x5, 0x22, 0x12, 0x2, 
    0x1bd, 0x1be, 0x8, 0xf, 0x1, 0x2, 0x1be, 0x1de, 0x3, 0x2, 0x2, 0x2, 
    0x1bf, 0x1c0, 0x5, 0x24, 0x13, 0x2, 0x1c0, 0x1c1, 0x8, 0xf, 0x1, 0x2, 
    0x1c1, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c3, 0x5, 0x26, 0x14, 0x2, 
    0x1c3, 0x1c4, 0x8, 0xf, 0x1, 0x2, 0x1c4, 0x1de, 0x3, 0x2, 0x2, 0x2, 
    0x1c5, 0x1c6, 0x5, 0x28, 0x15, 0x2, 0x1c6, 0x1c7, 0x8, 0xf, 0x1, 0x2, 
    0x1c7, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c9, 0x5, 0x2a, 0x16, 0x2, 
    0x1c9, 0x1ca, 0x8, 0xf, 0x1, 0x2, 0x1ca, 0x1de, 0x3, 0x2, 0x2, 0x2, 
    0x1cb, 0x1cc, 0x5, 0x2c, 0x17, 0x2, 0x1cc, 0x1cd, 0x8, 0xf, 0x1, 0x2, 
    0x1cd, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cf, 0x5, 0x2e, 0x18, 0x2, 
    0x1cf, 0x1d0, 0x8, 0xf, 0x1, 0x2, 0x1d0, 0x1de, 0x3, 0x2, 0x2, 0x2, 
    0x1d1, 0x1d2, 0x5, 0x30, 0x19, 0x2, 0x1d2, 0x1d3, 0x8, 0xf, 0x1, 0x2, 
    0x1d3, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 0x5, 0x32, 0x1a, 0x2, 
    0x1d5, 0x1d6, 0x8, 0xf, 0x1, 0x2, 0x1d6, 0x1de, 0x3, 0x2, 0x2, 0x2, 
    0x1d7, 0x1d8, 0x5, 0x34, 0x1b, 0x2, 0x1d8, 0x1d9, 0x8, 0xf, 0x1, 0x2, 
    0x1d9, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1db, 0x5, 0x36, 0x1c, 0x2, 
    0x1db, 0x1dc, 0x8, 0xf, 0x1, 0x2, 0x1dc, 0x1de, 0x3, 0x2, 0x2, 0x2, 
    0x1dd, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1b9, 0x3, 0x2, 0x2, 0x2, 
    0x1dd, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1bf, 0x3, 0x2, 0x2, 0x2, 
    0x1dd, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1c5, 0x3, 0x2, 0x2, 0x2, 
    0x1dd, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1cb, 0x3, 0x2, 0x2, 0x2, 
    0x1dd, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1d1, 0x3, 0x2, 0x2, 0x2, 
    0x1dd, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1d7, 0x3, 0x2, 0x2, 0x2, 
    0x1dd, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1df, 
    0x1e3, 0x7, 0x96, 0x2, 0x2, 0x1e0, 0x1e2, 0x7, 0x5f, 0x2, 0x2, 0x1e1, 
    0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e3, 
    0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e4, 
    0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e6, 
    0x1e8, 0x7, 0x49, 0x2, 0x2, 0x1e7, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e7, 
    0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1e9, 
    0x1eb, 0x7, 0x5f, 0x2, 0x2, 0x1ea, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1eb, 
    0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1ec, 
    0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1ee, 
    0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f3, 0x7, 0x88, 0x2, 0x2, 0x1f0, 
    0x1f2, 0x7, 0x5f, 0x2, 0x2, 0x1f1, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f2, 
    0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f3, 
    0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f5, 
    0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f7, 0x5, 0x42, 0x22, 0x2, 0x1f7, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1fc, 0x7, 0x96, 0x2, 0x2, 0x1f9, 
    0x1fb, 0x7, 0x5f, 0x2, 0x2, 0x1fa, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1fb, 
    0x1fe, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fc, 
    0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1fe, 
    0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x201, 0x7, 0x4a, 0x2, 0x2, 0x200, 
    0x1f8, 0x3, 0x2, 0x2, 0x2, 0x200, 0x201, 0x3, 0x2, 0x2, 0x2, 0x201, 
    0x205, 0x3, 0x2, 0x2, 0x2, 0x202, 0x204, 0x7, 0x5f, 0x2, 0x2, 0x203, 
    0x202, 0x3, 0x2, 0x2, 0x2, 0x204, 0x207, 0x3, 0x2, 0x2, 0x2, 0x205, 
    0x203, 0x3, 0x2, 0x2, 0x2, 0x205, 0x206, 0x3, 0x2, 0x2, 0x2, 0x206, 
    0x208, 0x3, 0x2, 0x2, 0x2, 0x207, 0x205, 0x3, 0x2, 0x2, 0x2, 0x208, 
    0x20c, 0x7, 0x88, 0x2, 0x2, 0x209, 0x20b, 0x7, 0x5f, 0x2, 0x2, 0x20a, 
    0x209, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x20c, 
    0x20a, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20d, 
    0x20f, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20f, 
    0x210, 0x5, 0x44, 0x23, 0x2, 0x210, 0x21, 0x3, 0x2, 0x2, 0x2, 0x211, 
    0x215, 0x7, 0x96, 0x2, 0x2, 0x212, 0x214, 0x7, 0x5f, 0x2, 0x2, 0x213, 
    0x212, 0x3, 0x2, 0x2, 0x2, 0x214, 0x217, 0x3, 0x2, 0x2, 0x2, 0x215, 
    0x213, 0x3, 0x2, 0x2, 0x2, 0x215, 0x216, 0x3, 0x2, 0x2, 0x2, 0x216, 
    0x218, 0x3, 0x2, 0x2, 0x2, 0x217, 0x215, 0x3, 0x2, 0x2, 0x2, 0x218, 
    0x21a, 0x7, 0x4b, 0x2, 0x2, 0x219, 0x211, 0x3, 0x2, 0x2, 0x2, 0x219, 
    0x21a, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x21b, 
    0x21d, 0x7, 0x5f, 0x2, 0x2, 0x21c, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21d, 
    0x220, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x21e, 
    0x21f, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x221, 0x3, 0x2, 0x2, 0x2, 0x220, 
    0x21e, 0x3, 0x2, 0x2, 0x2, 0x221, 0x225, 0x7, 0x88, 0x2, 0x2, 0x222, 
    0x224, 0x7, 0x5f, 0x2, 0x2, 0x223, 0x222, 0x3, 0x2, 0x2, 0x2, 0x224, 
    0x227, 0x3, 0x2, 0x2, 0x2, 0x225, 0x223, 0x3, 0x2, 0x2, 0x2, 0x225, 
    0x226, 0x3, 0x2, 0x2, 0x2, 0x226, 0x228, 0x3, 0x2, 0x2, 0x2, 0x227, 
    0x225, 0x3, 0x2, 0x2, 0x2, 0x228, 0x229, 0x5, 0x5a, 0x2e, 0x2, 0x229, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x22e, 0x7, 0x96, 0x2, 0x2, 0x22b, 
    0x22d, 0x7, 0x5f, 0x2, 0x2, 0x22c, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x22d, 
    0x230, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22e, 
    0x22f, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x231, 0x3, 0x2, 0x2, 0x2, 0x230, 
    0x22e, 0x3, 0x2, 0x2, 0x2, 0x231, 0x235, 0x7, 0x4c, 0x2, 0x2, 0x232, 
    0x234, 0x7, 0x5f, 0x2, 0x2, 0x233, 0x232, 0x3, 0x2, 0x2, 0x2, 0x234, 
    0x237, 0x3, 0x2, 0x2, 0x2, 0x235, 0x233, 0x3, 0x2, 0x2, 0x2, 0x235, 
    0x236, 0x3, 0x2, 0x2, 0x2, 0x236, 0x238, 0x3, 0x2, 0x2, 0x2, 0x237, 
    0x235, 0x3, 0x2, 0x2, 0x2, 0x238, 0x23c, 0x7, 0x88, 0x2, 0x2, 0x239, 
    0x23b, 0x7, 0x5f, 0x2, 0x2, 0x23a, 0x239, 0x3, 0x2, 0x2, 0x2, 0x23b, 
    0x23e, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23c, 
    0x23d, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x23e, 
    0x23c, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x241, 0x5, 0x46, 0x24, 0x2, 0x240, 
    0x242, 0x7, 0x4c, 0x2, 0x2, 0x241, 0x240, 0x3, 0x2, 0x2, 0x2, 0x241, 
    0x242, 0x3, 0x2, 0x2, 0x2, 0x242, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x243, 
    0x247, 0x7, 0x88, 0x2, 0x2, 0x244, 0x246, 0x7, 0x5f, 0x2, 0x2, 0x245, 
    0x244, 0x3, 0x2, 0x2, 0x2, 0x246, 0x249, 0x3, 0x2, 0x2, 0x2, 0x247, 
    0x245, 0x3, 0x2, 0x2, 0x2, 0x247, 0x248, 0x3, 0x2, 0x2, 0x2, 0x248, 
    0x24a, 0x3, 0x2, 0x2, 0x2, 0x249, 0x247, 0x3, 0x2, 0x2, 0x2, 0x24a, 
    0x24c, 0x5, 0x46, 0x24, 0x2, 0x24b, 0x24d, 0x7, 0x4c, 0x2, 0x2, 0x24c, 
    0x24b, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24d, 
    0x24f, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x24e, 
    0x243, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x25, 0x3, 0x2, 0x2, 0x2, 0x250, 0x254, 
    0x7, 0x96, 0x2, 0x2, 0x251, 0x253, 0x7, 0x5f, 0x2, 0x2, 0x252, 0x251, 
    0x3, 0x2, 0x2, 0x2, 0x253, 0x256, 0x3, 0x2, 0x2, 0x2, 0x254, 0x252, 
    0x3, 0x2, 0x2, 0x2, 0x254, 0x255, 0x3, 0x2, 0x2, 0x2, 0x255, 0x257, 
    0x3, 0x2, 0x2, 0x2, 0x256, 0x254, 0x3, 0x2, 0x2, 0x2, 0x257, 0x25b, 
    0x7, 0x4d, 0x2, 0x2, 0x258, 0x25a, 0x7, 0x5f, 0x2, 0x2, 0x259, 0x258, 
    0x3, 0x2, 0x2, 0x2, 0x25a, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x259, 
    0x3, 0x2, 0x2, 0x2, 0x25b, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25e, 
    0x3, 0x2, 0x2, 0x2, 0x25d, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x262, 
    0x7, 0x88, 0x2, 0x2, 0x25f, 0x261, 0x7, 0x5f, 0x2, 0x2, 0x260, 0x25f, 
    0x3, 0x2, 0x2, 0x2, 0x261, 0x264, 0x3, 0x2, 0x2, 0x2, 0x262, 0x260, 
    0x3, 0x2, 0x2, 0x2, 0x262, 0x263, 0x3, 0x2, 0x2, 0x2, 0x263, 0x265, 
    0x3, 0x2, 0x2, 0x2, 0x264, 0x262, 0x3, 0x2, 0x2, 0x2, 0x265, 0x267, 
    0x5, 0x48, 0x25, 0x2, 0x266, 0x268, 0x7, 0x4d, 0x2, 0x2, 0x267, 0x266, 
    0x3, 0x2, 0x2, 0x2, 0x267, 0x268, 0x3, 0x2, 0x2, 0x2, 0x268, 0x274, 
    0x3, 0x2, 0x2, 0x2, 0x269, 0x26d, 0x7, 0x88, 0x2, 0x2, 0x26a, 0x26c, 
    0x7, 0x5f, 0x2, 0x2, 0x26b, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x26f, 
    0x3, 0x2, 0x2, 0x2, 0x26d, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26e, 
    0x3, 0x2, 0x2, 0x2, 0x26e, 0x270, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x26d, 
    0x3, 0x2, 0x2, 0x2, 0x270, 0x271, 0x5, 0x48, 0x25, 0x2, 0x271, 0x272, 
    0x7, 0x4d, 0x2, 0x2, 0x272, 0x274, 0x3, 0x2, 0x2, 0x2, 0x273, 0x250, 
    0x3, 0x2, 0x2, 0x2, 0x273, 0x269, 0x3, 0x2, 0x2, 0x2, 0x274, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0x275, 0x279, 0x7, 0x96, 0x2, 0x2, 0x276, 0x278, 0x7, 
    0x5f, 0x2, 0x2, 0x277, 0x276, 0x3, 0x2, 0x2, 0x2, 0x278, 0x27b, 0x3, 
    0x2, 0x2, 0x2, 0x279, 0x277, 0x3, 0x2, 0x2, 0x2, 0x279, 0x27a, 0x3, 
    0x2, 0x2, 0x2, 0x27a, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x279, 0x3, 
    0x2, 0x2, 0x2, 0x27c, 0x280, 0x7, 0x4e, 0x2, 0x2, 0x27d, 0x27f, 0x7, 
    0x5f, 0x2, 0x2, 0x27e, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x282, 0x3, 
    0x2, 0x2, 0x2, 0x280, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x280, 0x281, 0x3, 
    0x2, 0x2, 0x2, 0x281, 0x283, 0x3, 0x2, 0x2, 0x2, 0x282, 0x280, 0x3, 
    0x2, 0x2, 0x2, 0x283, 0x287, 0x7, 0x88, 0x2, 0x2, 0x284, 0x286, 0x7, 
    0x5f, 0x2, 0x2, 0x285, 0x284, 0x3, 0x2, 0x2, 0x2, 0x286, 0x289, 0x3, 
    0x2, 0x2, 0x2, 0x287, 0x285, 0x3, 0x2, 0x2, 0x2, 0x287, 0x288, 0x3, 
    0x2, 0x2, 0x2, 0x288, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x289, 0x287, 0x3, 
    0x2, 0x2, 0x2, 0x28a, 0x28c, 0x5, 0x4a, 0x26, 0x2, 0x28b, 0x28d, 0x7, 
    0x4e, 0x2, 0x2, 0x28c, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28d, 0x3, 
    0x2, 0x2, 0x2, 0x28d, 0x299, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x292, 0x7, 
    0x88, 0x2, 0x2, 0x28f, 0x291, 0x7, 0x5f, 0x2, 0x2, 0x290, 0x28f, 0x3, 
    0x2, 0x2, 0x2, 0x291, 0x294, 0x3, 0x2, 0x2, 0x2, 0x292, 0x290, 0x3, 
    0x2, 0x2, 0x2, 0x292, 0x293, 0x3, 0x2, 0x2, 0x2, 0x293, 0x295, 0x3, 
    0x2, 0x2, 0x2, 0x294, 0x292, 0x3, 0x2, 0x2, 0x2, 0x295, 0x296, 0x5, 
    0x4a, 0x26, 0x2, 0x296, 0x297, 0x7, 0x4e, 0x2, 0x2, 0x297, 0x299, 0x3, 
    0x2, 0x2, 0x2, 0x298, 0x275, 0x3, 0x2, 0x2, 0x2, 0x298, 0x28e, 0x3, 
    0x2, 0x2, 0x2, 0x299, 0x29, 0x3, 0x2, 0x2, 0x2, 0x29a, 0x29e, 0x7, 0x96, 
    0x2, 0x2, 0x29b, 0x29d, 0x7, 0x5f, 0x2, 0x2, 0x29c, 0x29b, 0x3, 0x2, 
    0x2, 0x2, 0x29d, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29c, 0x3, 0x2, 
    0x2, 0x2, 0x29e, 0x29f, 0x3, 0x2, 0x2, 0x2, 0x29f, 0x2a1, 0x3, 0x2, 
    0x2, 0x2, 0x2a0, 0x29e, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x2a5, 0x7, 0x4f, 
    0x2, 0x2, 0x2a2, 0x2a4, 0x7, 0x5f, 0x2, 0x2, 0x2a3, 0x2a2, 0x3, 0x2, 
    0x2, 0x2, 0x2a4, 0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a3, 0x3, 0x2, 
    0x2, 0x2, 0x2a5, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2a6, 0x2a8, 0x3, 0x2, 
    0x2, 0x2, 0x2a7, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2ac, 0x7, 0x88, 
    0x2, 0x2, 0x2a9, 0x2ab, 0x7, 0x5f, 0x2, 0x2, 0x2aa, 0x2a9, 0x3, 0x2, 
    0x2, 0x2, 0x2ab, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2aa, 0x3, 0x2, 
    0x2, 0x2, 0x2ac, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x2ad, 0x2af, 0x3, 0x2, 
    0x2, 0x2, 0x2ae, 0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2b1, 0x5, 0x4c, 
    0x27, 0x2, 0x2b0, 0x2b2, 0x7, 0x4f, 0x2, 0x2, 0x2b1, 0x2b0, 0x3, 0x2, 
    0x2, 0x2, 0x2b1, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2be, 0x3, 0x2, 
    0x2, 0x2, 0x2b3, 0x2b7, 0x7, 0x88, 0x2, 0x2, 0x2b4, 0x2b6, 0x7, 0x5f, 
    0x2, 0x2, 0x2b5, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2b6, 0x2b9, 0x3, 0x2, 
    0x2, 0x2, 0x2b7, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b8, 0x3, 0x2, 
    0x2, 0x2, 0x2b8, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2b7, 0x3, 0x2, 
    0x2, 0x2, 0x2ba, 0x2bb, 0x5, 0x4c, 0x27, 0x2, 0x2bb, 0x2bc, 0x7, 0x4f, 
    0x2, 0x2, 0x2bc, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x29a, 0x3, 0x2, 
    0x2, 0x2, 0x2bd, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2be, 0x2b, 0x3, 0x2, 0x2, 
    0x2, 0x2bf, 0x2c3, 0x7, 0x96, 0x2, 0x2, 0x2c0, 0x2c2, 0x7, 0x5f, 0x2, 
    0x2, 0x2c1, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c5, 0x3, 0x2, 0x2, 
    0x2, 0x2c3, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c4, 0x3, 0x2, 0x2, 
    0x2, 0x2c4, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c3, 0x3, 0x2, 0x2, 
    0x2, 0x2c6, 0x2ca, 0x7, 0x50, 0x2, 0x2, 0x2c7, 0x2c9, 0x7, 0x5f, 0x2, 
    0x2, 0x2c8, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2cc, 0x3, 0x2, 0x2, 
    0x2, 0x2ca, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2cb, 0x3, 0x2, 0x2, 
    0x2, 0x2cb, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2ca, 0x3, 0x2, 0x2, 
    0x2, 0x2cd, 0x2d1, 0x7, 0x88, 0x2, 0x2, 0x2ce, 0x2d0, 0x7, 0x5f, 0x2, 
    0x2, 0x2cf, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2d3, 0x3, 0x2, 0x2, 
    0x2, 0x2d1, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d2, 0x3, 0x2, 0x2, 
    0x2, 0x2d2, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d1, 0x3, 0x2, 0x2, 
    0x2, 0x2d4, 0x2d6, 0x5, 0x4e, 0x28, 0x2, 0x2d5, 0x2d7, 0x7, 0x50, 0x2, 
    0x2, 0x2d6, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d7, 0x3, 0x2, 0x2, 
    0x2, 0x2d7, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2dc, 0x7, 0x88, 0x2, 
    0x2, 0x2d9, 0x2db, 0x7, 0x5f, 0x2, 0x2, 0x2da, 0x2d9, 0x3, 0x2, 0x2, 
    0x2, 0x2db, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2da, 0x3, 0x2, 0x2, 
    0x2, 0x2dc, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2dd, 0x2df, 0x3, 0x2, 0x2, 
    0x2, 0x2de, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2e0, 0x5, 0x4e, 0x28, 
    0x2, 0x2e0, 0x2e1, 0x7, 0x50, 0x2, 0x2, 0x2e1, 0x2e3, 0x3, 0x2, 0x2, 
    0x2, 0x2e2, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2d8, 0x3, 0x2, 0x2, 
    0x2, 0x2e3, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e8, 0x7, 0x96, 0x2, 
    0x2, 0x2e5, 0x2e7, 0x7, 0x5f, 0x2, 0x2, 0x2e6, 0x2e5, 0x3, 0x2, 0x2, 
    0x2, 0x2e7, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2e6, 0x3, 0x2, 0x2, 
    0x2, 0x2e8, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2eb, 0x3, 0x2, 0x2, 
    0x2, 0x2ea, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2ef, 0x7, 0x51, 0x2, 
    0x2, 0x2ec, 0x2ee, 0x7, 0x5f, 0x2, 0x2, 0x2ed, 0x2ec, 0x3, 0x2, 0x2, 
    0x2, 0x2ee, 0x2f1, 0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2ed, 0x3, 0x2, 0x2, 
    0x2, 0x2ef, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2f0, 0x2f2, 0x3, 0x2, 0x2, 
    0x2, 0x2f1, 0x2ef, 0x3, 0x2, 0x2, 0x2, 0x2f2, 0x2f6, 0x7, 0x88, 0x2, 
    0x2, 0x2f3, 0x2f5, 0x7, 0x5f, 0x2, 0x2, 0x2f4, 0x2f3, 0x3, 0x2, 0x2, 
    0x2, 0x2f5, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f4, 0x3, 0x2, 0x2, 
    0x2, 0x2f6, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f9, 0x3, 0x2, 0x2, 
    0x2, 0x2f8, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2fb, 0x5, 0x50, 0x29, 
    0x2, 0x2fa, 0x2fc, 0x7, 0x51, 0x2, 0x2, 0x2fb, 0x2fa, 0x3, 0x2, 0x2, 
    0x2, 0x2fb, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x308, 0x3, 0x2, 0x2, 
    0x2, 0x2fd, 0x301, 0x7, 0x88, 0x2, 0x2, 0x2fe, 0x300, 0x7, 0x5f, 0x2, 
    0x2, 0x2ff, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x300, 0x303, 0x3, 0x2, 0x2, 
    0x2, 0x301, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x301, 0x302, 0x3, 0x2, 0x2, 
    0x2, 0x302, 0x304, 0x3, 0x2, 0x2, 0x2, 0x303, 0x301, 0x3, 0x2, 0x2, 
    0x2, 0x304, 0x305, 0x5, 0x50, 0x29, 0x2, 0x305, 0x306, 0x7, 0x51, 0x2, 
    0x2, 0x306, 0x308, 0x3, 0x2, 0x2, 0x2, 0x307, 0x2e4, 0x3, 0x2, 0x2, 
    0x2, 0x307, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x308, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x309, 0x30d, 0x7, 0x96, 0x2, 0x2, 0x30a, 0x30c, 0x7, 0x5f, 0x2, 0x2, 
    0x30b, 0x30a, 0x3, 0x2, 0x2, 0x2, 0x30c, 0x30f, 0x3, 0x2, 0x2, 0x2, 
    0x30d, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x30e, 0x3, 0x2, 0x2, 0x2, 
    0x30e, 0x310, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x30d, 0x3, 0x2, 0x2, 0x2, 
    0x310, 0x314, 0x7, 0x52, 0x2, 0x2, 0x311, 0x313, 0x7, 0x5f, 0x2, 0x2, 
    0x312, 0x311, 0x3, 0x2, 0x2, 0x2, 0x313, 0x316, 0x3, 0x2, 0x2, 0x2, 
    0x314, 0x312, 0x3, 0x2, 0x2, 0x2, 0x314, 0x315, 0x3, 0x2, 0x2, 0x2, 
    0x315, 0x317, 0x3, 0x2, 0x2, 0x2, 0x316, 0x314, 0x3, 0x2, 0x2, 0x2, 
    0x317, 0x31b, 0x7, 0x88, 0x2, 0x2, 0x318, 0x31a, 0x7, 0x5f, 0x2, 0x2, 
    0x319, 0x318, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x31d, 0x3, 0x2, 0x2, 0x2, 
    0x31b, 0x319, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x31c, 0x3, 0x2, 0x2, 0x2, 
    0x31c, 0x31e, 0x3, 0x2, 0x2, 0x2, 0x31d, 0x31b, 0x3, 0x2, 0x2, 0x2, 
    0x31e, 0x320, 0x5, 0x52, 0x2a, 0x2, 0x31f, 0x321, 0x7, 0x52, 0x2, 0x2, 
    0x320, 0x31f, 0x3, 0x2, 0x2, 0x2, 0x320, 0x321, 0x3, 0x2, 0x2, 0x2, 
    0x321, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x322, 0x326, 0x7, 0x88, 0x2, 0x2, 
    0x323, 0x325, 0x7, 0x5f, 0x2, 0x2, 0x324, 0x323, 0x3, 0x2, 0x2, 0x2, 
    0x325, 0x328, 0x3, 0x2, 0x2, 0x2, 0x326, 0x324, 0x3, 0x2, 0x2, 0x2, 
    0x326, 0x327, 0x3, 0x2, 0x2, 0x2, 0x327, 0x329, 0x3, 0x2, 0x2, 0x2, 
    0x328, 0x326, 0x3, 0x2, 0x2, 0x2, 0x329, 0x32a, 0x5, 0x52, 0x2a, 0x2, 
    0x32a, 0x32b, 0x7, 0x52, 0x2, 0x2, 0x32b, 0x32d, 0x3, 0x2, 0x2, 0x2, 
    0x32c, 0x309, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x322, 0x3, 0x2, 0x2, 0x2, 
    0x32d, 0x31, 0x3, 0x2, 0x2, 0x2, 0x32e, 0x332, 0x7, 0x96, 0x2, 0x2, 
    0x32f, 0x331, 0x7, 0x5f, 0x2, 0x2, 0x330, 0x32f, 0x3, 0x2, 0x2, 0x2, 
    0x331, 0x334, 0x3, 0x2, 0x2, 0x2, 0x332, 0x330, 0x3, 0x2, 0x2, 0x2, 
    0x332, 0x333, 0x3, 0x2, 0x2, 0x2, 0x333, 0x335, 0x3, 0x2, 0x2, 0x2, 
    0x334, 0x332, 0x3, 0x2, 0x2, 0x2, 0x335, 0x339, 0x7, 0x53, 0x2, 0x2, 
    0x336, 0x338, 0x7, 0x5f, 0x2, 0x2, 0x337, 0x336, 0x3, 0x2, 0x2, 0x2, 
    0x338, 0x33b, 0x3, 0x2, 0x2, 0x2, 0x339, 0x337, 0x3, 0x2, 0x2, 0x2, 
    0x339, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x33a, 0x33c, 0x3, 0x2, 0x2, 0x2, 
    0x33b, 0x339, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x340, 0x7, 0x88, 0x2, 0x2, 
    0x33d, 0x33f, 0x7, 0x5f, 0x2, 0x2, 0x33e, 0x33d, 0x3, 0x2, 0x2, 0x2, 
    0x33f, 0x342, 0x3, 0x2, 0x2, 0x2, 0x340, 0x33e, 0x3, 0x2, 0x2, 0x2, 
    0x340, 0x341, 0x3, 0x2, 0x2, 0x2, 0x341, 0x343, 0x3, 0x2, 0x2, 0x2, 
    0x342, 0x340, 0x3, 0x2, 0x2, 0x2, 0x343, 0x345, 0x5, 0x54, 0x2b, 0x2, 
    0x344, 0x346, 0x7, 0x53, 0x2, 0x2, 0x345, 0x344, 0x3, 0x2, 0x2, 0x2, 
    0x345, 0x346, 0x3, 0x2, 0x2, 0x2, 0x346, 0x352, 0x3, 0x2, 0x2, 0x2, 
    0x347, 0x34b, 0x7, 0x88, 0x2, 0x2, 0x348, 0x34a, 0x7, 0x5f, 0x2, 0x2, 
    0x349, 0x348, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x34d, 0x3, 0x2, 0x2, 0x2, 
    0x34b, 0x349, 0x3, 0x2, 0x2, 0x2, 0x34b, 0x34c, 0x3, 0x2, 0x2, 0x2, 
    0x34c, 0x34e, 0x3, 0x2, 0x2, 0x2, 0x34d, 0x34b, 0x3, 0x2, 0x2, 0x2, 
    0x34e, 0x34f, 0x5, 0x54, 0x2b, 0x2, 0x34f, 0x350, 0x7, 0x53, 0x2, 0x2, 
    0x350, 0x352, 0x3, 0x2, 0x2, 0x2, 0x351, 0x32e, 0x3, 0x2, 0x2, 0x2, 
    0x351, 0x347, 0x3, 0x2, 0x2, 0x2, 0x352, 0x33, 0x3, 0x2, 0x2, 0x2, 0x353, 
    0x357, 0x7, 0x96, 0x2, 0x2, 0x354, 0x356, 0x7, 0x5f, 0x2, 0x2, 0x355, 
    0x354, 0x3, 0x2, 0x2, 0x2, 0x356, 0x359, 0x3, 0x2, 0x2, 0x2, 0x357, 
    0x355, 0x3, 0x2, 0x2, 0x2, 0x357, 0x358, 0x3, 0x2, 0x2, 0x2, 0x358, 
    0x35a, 0x3, 0x2, 0x2, 0x2, 0x359, 0x357, 0x3, 0x2, 0x2, 0x2, 0x35a, 
    0x35e, 0x7, 0x54, 0x2, 0x2, 0x35b, 0x35d, 0x7, 0x5f, 0x2, 0x2, 0x35c, 
    0x35b, 0x3, 0x2, 0x2, 0x2, 0x35d, 0x360, 0x3, 0x2, 0x2, 0x2, 0x35e, 
    0x35c, 0x3, 0x2, 0x2, 0x2, 0x35e, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x35f, 
    0x361, 0x3, 0x2, 0x2, 0x2, 0x360, 0x35e, 0x3, 0x2, 0x2, 0x2, 0x361, 
    0x365, 0x7, 0x88, 0x2, 0x2, 0x362, 0x364, 0x7, 0x5f, 0x2, 0x2, 0x363, 
    0x362, 0x3, 0x2, 0x2, 0x2, 0x364, 0x367, 0x3, 0x2, 0x2, 0x2, 0x365, 
    0x363, 0x3, 0x2, 0x2, 0x2, 0x365, 0x366, 0x3, 0x2, 0x2, 0x2, 0x366, 
    0x368, 0x3, 0x2, 0x2, 0x2, 0x367, 0x365, 0x3, 0x2, 0x2, 0x2, 0x368, 
    0x36a, 0x5, 0x56, 0x2c, 0x2, 0x369, 0x36b, 0x7, 0x54, 0x2, 0x2, 0x36a, 
    0x369, 0x3, 0x2, 0x2, 0x2, 0x36a, 0x36b, 0x3, 0x2, 0x2, 0x2, 0x36b, 
    0x378, 0x3, 0x2, 0x2, 0x2, 0x36c, 0x370, 0x7, 0x88, 0x2, 0x2, 0x36d, 
    0x36f, 0x7, 0x5f, 0x2, 0x2, 0x36e, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x36f, 
    0x372, 0x3, 0x2, 0x2, 0x2, 0x370, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x370, 
    0x371, 0x3, 0x2, 0x2, 0x2, 0x371, 0x373, 0x3, 0x2, 0x2, 0x2, 0x372, 
    0x370, 0x3, 0x2, 0x2, 0x2, 0x373, 0x375, 0x5, 0x56, 0x2c, 0x2, 0x374, 
    0x376, 0x7, 0x54, 0x2, 0x2, 0x375, 0x374, 0x3, 0x2, 0x2, 0x2, 0x375, 
    0x376, 0x3, 0x2, 0x2, 0x2, 0x376, 0x378, 0x3, 0x2, 0x2, 0x2, 0x377, 
    0x353, 0x3, 0x2, 0x2, 0x2, 0x377, 0x36c, 0x3, 0x2, 0x2, 0x2, 0x378, 
    0x35, 0x3, 0x2, 0x2, 0x2, 0x379, 0x37d, 0x7, 0x96, 0x2, 0x2, 0x37a, 
    0x37c, 0x7, 0x5f, 0x2, 0x2, 0x37b, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x37c, 
    0x37f, 0x3, 0x2, 0x2, 0x2, 0x37d, 0x37b, 0x3, 0x2, 0x2, 0x2, 0x37d, 
    0x37e, 0x3, 0x2, 0x2, 0x2, 0x37e, 0x380, 0x3, 0x2, 0x2, 0x2, 0x37f, 
    0x37d, 0x3, 0x2, 0x2, 0x2, 0x380, 0x384, 0x7, 0x55, 0x2, 0x2, 0x381, 
    0x383, 0x7, 0x5f, 0x2, 0x2, 0x382, 0x381, 0x3, 0x2, 0x2, 0x2, 0x383, 
    0x386, 0x3, 0x2, 0x2, 0x2, 0x384, 0x382, 0x3, 0x2, 0x2, 0x2, 0x384, 
    0x385, 0x3, 0x2, 0x2, 0x2, 0x385, 0x387, 0x3, 0x2, 0x2, 0x2, 0x386, 
    0x384, 0x3, 0x2, 0x2, 0x2, 0x387, 0x38b, 0x7, 0x88, 0x2, 0x2, 0x388, 
    0x38a, 0x7, 0x5f, 0x2, 0x2, 0x389, 0x388, 0x3, 0x2, 0x2, 0x2, 0x38a, 
    0x38d, 0x3, 0x2, 0x2, 0x2, 0x38b, 0x389, 0x3, 0x2, 0x2, 0x2, 0x38b, 
    0x38c, 0x3, 0x2, 0x2, 0x2, 0x38c, 0x38e, 0x3, 0x2, 0x2, 0x2, 0x38d, 
    0x38b, 0x3, 0x2, 0x2, 0x2, 0x38e, 0x390, 0x5, 0x58, 0x2d, 0x2, 0x38f, 
    0x391, 0x7, 0x55, 0x2, 0x2, 0x390, 0x38f, 0x3, 0x2, 0x2, 0x2, 0x390, 
    0x391, 0x3, 0x2, 0x2, 0x2, 0x391, 0x39d, 0x3, 0x2, 0x2, 0x2, 0x392, 
    0x396, 0x7, 0x88, 0x2, 0x2, 0x393, 0x395, 0x7, 0x5f, 0x2, 0x2, 0x394, 
    0x393, 0x3, 0x2, 0x2, 0x2, 0x395, 0x398, 0x3, 0x2, 0x2, 0x2, 0x396, 
    0x394, 0x3, 0x2, 0x2, 0x2, 0x396, 0x397, 0x3, 0x2, 0x2, 0x2, 0x397, 
    0x399, 0x3, 0x2, 0x2, 0x2, 0x398, 0x396, 0x3, 0x2, 0x2, 0x2, 0x399, 
    0x39a, 0x5, 0x58, 0x2d, 0x2, 0x39a, 0x39b, 0x7, 0x55, 0x2, 0x2, 0x39b, 
    0x39d, 0x3, 0x2, 0x2, 0x2, 0x39c, 0x379, 0x3, 0x2, 0x2, 0x2, 0x39c, 
    0x392, 0x3, 0x2, 0x2, 0x2, 0x39d, 0x37, 0x3, 0x2, 0x2, 0x2, 0x39e, 0x3a2, 
    0x7, 0xe, 0x2, 0x2, 0x39f, 0x3a1, 0x7, 0x5f, 0x2, 0x2, 0x3a0, 0x39f, 
    0x3, 0x2, 0x2, 0x2, 0x3a1, 0x3a4, 0x3, 0x2, 0x2, 0x2, 0x3a2, 0x3a0, 
    0x3, 0x2, 0x2, 0x2, 0x3a2, 0x3a3, 0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3a5, 
    0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a2, 0x3, 0x2, 0x2, 0x2, 0x3a5, 0x3a9, 
    0x7, 0x88, 0x2, 0x2, 0x3a6, 0x3a8, 0x7, 0x5f, 0x2, 0x2, 0x3a7, 0x3a6, 
    0x3, 0x2, 0x2, 0x2, 0x3a8, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3a7, 
    0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3aa, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3ac, 
    0x3, 0x2, 0x2, 0x2, 0x3ab, 0x3a9, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3b0, 
    0x5, 0x5c, 0x2f, 0x2, 0x3ad, 0x3af, 0x7, 0x5f, 0x2, 0x2, 0x3ae, 0x3ad, 
    0x3, 0x2, 0x2, 0x2, 0x3af, 0x3b2, 0x3, 0x2, 0x2, 0x2, 0x3b0, 0x3ae, 
    0x3, 0x2, 0x2, 0x2, 0x3b0, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b3, 
    0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3b0, 0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3b4, 
    0x7, 0x95, 0x2, 0x2, 0x3b4, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b6, 
    0x7, 0xa, 0x2, 0x2, 0x3b6, 0x3b7, 0x5, 0x40, 0x21, 0x2, 0x3b7, 0x3b8, 
    0x7, 0x95, 0x2, 0x2, 0x3b8, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3ba, 
    0x7, 0xf, 0x2, 0x2, 0x3ba, 0x3bb, 0x5, 0x3e, 0x20, 0x2, 0x3bb, 0x3bc, 
    0x7, 0x95, 0x2, 0x2, 0x3bc, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3bd, 0x3bf, 
    0x5, 0x40, 0x21, 0x2, 0x3be, 0x3bd, 0x3, 0x2, 0x2, 0x2, 0x3be, 0x3bf, 
    0x3, 0x2, 0x2, 0x2, 0x3bf, 0x3c0, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3c2, 
    0x7, 0x97, 0x2, 0x2, 0x3c1, 0x3be, 0x3, 0x2, 0x2, 0x2, 0x3c1, 0x3c2, 
    0x3, 0x2, 0x2, 0x2, 0x3c2, 0x3d3, 0x3, 0x2, 0x2, 0x2, 0x3c3, 0x3d4, 
    0x7, 0x75, 0x2, 0x2, 0x3c4, 0x3d0, 0x7, 0x9d, 0x2, 0x2, 0x3c5, 0x3ca, 
    0x5, 0x3e, 0x20, 0x2, 0x3c6, 0x3c7, 0x7, 0x94, 0x2, 0x2, 0x3c7, 0x3c9, 
    0x5, 0x3e, 0x20, 0x2, 0x3c8, 0x3c6, 0x3, 0x2, 0x2, 0x2, 0x3c9, 0x3cc, 
    0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3c8, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3cb, 
    0x3, 0x2, 0x2, 0x2, 0x3cb, 0x3ce, 0x3, 0x2, 0x2, 0x2, 0x3cc, 0x3ca, 
    0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3cf, 0x7, 0x94, 0x2, 0x2, 0x3ce, 0x3cd, 
    0x3, 0x2, 0x2, 0x2, 0x3ce, 0x3cf, 0x3, 0x2, 0x2, 0x2, 0x3cf, 0x3d1, 
    0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3c5, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3d1, 
    0x3, 0x2, 0x2, 0x2, 0x3d1, 0x3d2, 0x3, 0x2, 0x2, 0x2, 0x3d2, 0x3d4, 
    0x7, 0x9e, 0x2, 0x2, 0x3d3, 0x3c3, 0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3c4, 
    0x3, 0x2, 0x2, 0x2, 0x3d4, 0x3db, 0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d8, 
    0x5, 0x40, 0x21, 0x2, 0x3d6, 0x3d7, 0x7, 0x4, 0x2, 0x2, 0x3d7, 0x3d9, 
    0x5, 0x5c, 0x2f, 0x2, 0x3d8, 0x3d6, 0x3, 0x2, 0x2, 0x2, 0x3d8, 0x3d9, 
    0x3, 0x2, 0x2, 0x2, 0x3d9, 0x3db, 0x3, 0x2, 0x2, 0x2, 0x3da, 0x3c1, 
    0x3, 0x2, 0x2, 0x2, 0x3da, 0x3d5, 0x3, 0x2, 0x2, 0x2, 0x3db, 0x3f, 0x3, 
    0x2, 0x2, 0x2, 0x3dc, 0x3de, 0x7, 0x97, 0x2, 0x2, 0x3dd, 0x3dc, 0x3, 
    0x2, 0x2, 0x2, 0x3dd, 0x3de, 0x3, 0x2, 0x2, 0x2, 0x3de, 0x3df, 0x3, 
    0x2, 0x2, 0x2, 0x3df, 0x3e4, 0x5, 0x5c, 0x2f, 0x2, 0x3e0, 0x3e1, 0x7, 
    0x97, 0x2, 0x2, 0x3e1, 0x3e3, 0x5, 0x5c, 0x2f, 0x2, 0x3e2, 0x3e0, 0x3, 
    0x2, 0x2, 0x2, 0x3e3, 0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3e2, 0x3, 
    0x2, 0x2, 0x2, 0x3e4, 0x3e5, 0x3, 0x2, 0x2, 0x2, 0x3e5, 0x41, 0x3, 0x2, 
    0x2, 0x2, 0x3e6, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3e8, 0x9, 0x2, 
    0x2, 0x2, 0x3e8, 0x43, 0x3, 0x2, 0x2, 0x2, 0x3e9, 0x3ea, 0x7, 0x60, 
    0x2, 0x2, 0x3ea, 0x3eb, 0x8, 0x23, 0x1, 0x2, 0x3eb, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0x3ec, 0x3ed, 0x7, 0x6b, 0x2, 0x2, 0x3ed, 0x3ee, 0x8, 0x24, 
    0x1, 0x2, 0x3ee, 0x47, 0x3, 0x2, 0x2, 0x2, 0x3ef, 0x3f0, 0x7, 0x6b, 
    0x2, 0x2, 0x3f0, 0x3f1, 0x8, 0x25, 0x1, 0x2, 0x3f1, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x3f2, 0x3f4, 0x7, 0x74, 0x2, 0x2, 0x3f3, 0x3f2, 0x3, 0x2, 
    0x2, 0x2, 0x3f3, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3f5, 0x3, 0x2, 
    0x2, 0x2, 0x3f5, 0x3fd, 0x9, 0x3, 0x2, 0x2, 0x3f6, 0x3f7, 0x7, 0x6f, 
    0x2, 0x2, 0x3f7, 0x3fd, 0x9, 0x4, 0x2, 0x2, 0x3f8, 0x3f9, 0x7, 0x70, 
    0x2, 0x2, 0x3f9, 0x3fd, 0x9, 0x5, 0x2, 0x2, 0x3fa, 0x3fb, 0x7, 0x71, 
    0x2, 0x2, 0x3fb, 0x3fd, 0x9, 0x6, 0x2, 0x2, 0x3fc, 0x3f3, 0x3, 0x2, 
    0x2, 0x2, 0x3fc, 0x3f6, 0x3, 0x2, 0x2, 0x2, 0x3fc, 0x3f8, 0x3, 0x2, 
    0x2, 0x2, 0x3fc, 0x3fa, 0x3, 0x2, 0x2, 0x2, 0x3fd, 0x3fe, 0x3, 0x2, 
    0x2, 0x2, 0x3fe, 0x3ff, 0x8, 0x26, 0x1, 0x2, 0x3ff, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x400, 0x402, 0x7, 0x74, 0x2, 0x2, 0x401, 0x400, 0x3, 0x2, 
    0x2, 0x2, 0x401, 0x402, 0x3, 0x2, 0x2, 0x2, 0x402, 0x403, 0x3, 0x2, 
    0x2, 0x2, 0x403, 0x40b, 0x9, 0x3, 0x2, 0x2, 0x404, 0x405, 0x7, 0x6f, 
    0x2, 0x2, 0x405, 0x40b, 0x9, 0x4, 0x2, 0x2, 0x406, 0x407, 0x7, 0x70, 
    0x2, 0x2, 0x407, 0x40b, 0x9, 0x5, 0x2, 0x2, 0x408, 0x409, 0x7, 0x71, 
    0x2, 0x2, 0x409, 0x40b, 0x9, 0x6, 0x2, 0x2, 0x40a, 0x401, 0x3, 0x2, 
    0x2, 0x2, 0x40a, 0x404, 0x3, 0x2, 0x2, 0x2, 0x40a, 0x406, 0x3, 0x2, 
    0x2, 0x2, 0x40a, 0x408, 0x3, 0x2, 0x2, 0x2, 0x40b, 0x40c, 0x3, 0x2, 
    0x2, 0x2, 0x40c, 0x40d, 0x8, 0x27, 0x1, 0x2, 0x40d, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x40e, 0x410, 0x7, 0x74, 0x2, 0x2, 0x40f, 0x40e, 0x3, 0x2, 
    0x2, 0x2, 0x40f, 0x410, 0x3, 0x2, 0x2, 0x2, 0x410, 0x411, 0x3, 0x2, 
    0x2, 0x2, 0x411, 0x419, 0x9, 0x3, 0x2, 0x2, 0x412, 0x413, 0x7, 0x6f, 
    0x2, 0x2, 0x413, 0x419, 0x9, 0x4, 0x2, 0x2, 0x414, 0x415, 0x7, 0x70, 
    0x2, 0x2, 0x415, 0x419, 0x9, 0x5, 0x2, 0x2, 0x416, 0x417, 0x7, 0x71, 
    0x2, 0x2, 0x417, 0x419, 0x9, 0x6, 0x2, 0x2, 0x418, 0x40f, 0x3, 0x2, 
    0x2, 0x2, 0x418, 0x412, 0x3, 0x2, 0x2, 0x2, 0x418, 0x414, 0x3, 0x2, 
    0x2, 0x2, 0x418, 0x416, 0x3, 0x2, 0x2, 0x2, 0x419, 0x41a, 0x3, 0x2, 
    0x2, 0x2, 0x41a, 0x41b, 0x8, 0x28, 0x1, 0x2, 0x41b, 0x4f, 0x3, 0x2, 
    0x2, 0x2, 0x41c, 0x41e, 0x7, 0x74, 0x2, 0x2, 0x41d, 0x41c, 0x3, 0x2, 
    0x2, 0x2, 0x41d, 0x41e, 0x3, 0x2, 0x2, 0x2, 0x41e, 0x41f, 0x3, 0x2, 
    0x2, 0x2, 0x41f, 0x427, 0x9, 0x3, 0x2, 0x2, 0x420, 0x421, 0x7, 0x6f, 
    0x2, 0x2, 0x421, 0x427, 0x9, 0x4, 0x2, 0x2, 0x422, 0x423, 0x7, 0x70, 
    0x2, 0x2, 0x423, 0x427, 0x9, 0x5, 0x2, 0x2, 0x424, 0x425, 0x7, 0x71, 
    0x2, 0x2, 0x425, 0x427, 0x9, 0x6, 0x2, 0x2, 0x426, 0x41d, 0x3, 0x2, 
    0x2, 0x2, 0x426, 0x420, 0x3, 0x2, 0x2, 0x2, 0x426, 0x422, 0x3, 0x2, 
    0x2, 0x2, 0x426, 0x424, 0x3, 0x2, 0x2, 0x2, 0x427, 0x428, 0x3, 0x2, 
    0x2, 0x2, 0x428, 0x429, 0x8, 0x29, 0x1, 0x2, 0x429, 0x51, 0x3, 0x2, 
    0x2, 0x2, 0x42a, 0x42c, 0x7, 0x74, 0x2, 0x2, 0x42b, 0x42a, 0x3, 0x2, 
    0x2, 0x2, 0x42b, 0x42c, 0x3, 0x2, 0x2, 0x2, 0x42c, 0x42d, 0x3, 0x2, 
    0x2, 0x2, 0x42d, 0x435, 0x9, 0x3, 0x2, 0x2, 0x42e, 0x42f, 0x7, 0x6f, 
    0x2, 0x2, 0x42f, 0x435, 0x9, 0x4, 0x2, 0x2, 0x430, 0x431, 0x7, 0x70, 
    0x2, 0x2, 0x431, 0x435, 0x9, 0x5, 0x2, 0x2, 0x432, 0x433, 0x7, 0x71, 
    0x2, 0x2, 0x433, 0x435, 0x9, 0x6, 0x2, 0x2, 0x434, 0x42b, 0x3, 0x2, 
    0x2, 0x2, 0x434, 0x42e, 0x3, 0x2, 0x2, 0x2, 0x434, 0x430, 0x3, 0x2, 
    0x2, 0x2, 0x434, 0x432, 0x3, 0x2, 0x2, 0x2, 0x435, 0x436, 0x3, 0x2, 
    0x2, 0x2, 0x436, 0x437, 0x8, 0x2a, 0x1, 0x2, 0x437, 0x53, 0x3, 0x2, 
    0x2, 0x2, 0x438, 0x43a, 0x7, 0x74, 0x2, 0x2, 0x439, 0x438, 0x3, 0x2, 
    0x2, 0x2, 0x439, 0x43a, 0x3, 0x2, 0x2, 0x2, 0x43a, 0x43b, 0x3, 0x2, 
    0x2, 0x2, 0x43b, 0x443, 0x9, 0x3, 0x2, 0x2, 0x43c, 0x43d, 0x7, 0x6f, 
    0x2, 0x2, 0x43d, 0x443, 0x9, 0x4, 0x2, 0x2, 0x43e, 0x43f, 0x7, 0x70, 
    0x2, 0x2, 0x43f, 0x443, 0x9, 0x5, 0x2, 0x2, 0x440, 0x441, 0x7, 0x71, 
    0x2, 0x2, 0x441, 0x443, 0x9, 0x6, 0x2, 0x2, 0x442, 0x439, 0x3, 0x2, 
    0x2, 0x2, 0x442, 0x43c, 0x3, 0x2, 0x2, 0x2, 0x442, 0x43e, 0x3, 0x2, 
    0x2, 0x2, 0x442, 0x440, 0x3, 0x2, 0x2, 0x2, 0x443, 0x444, 0x3, 0x2, 
    0x2, 0x2, 0x444, 0x445, 0x8, 0x2b, 0x1, 0x2, 0x445, 0x55, 0x3, 0x2, 
    0x2, 0x2, 0x446, 0x448, 0x7, 0x74, 0x2, 0x2, 0x447, 0x446, 0x3, 0x2, 
    0x2, 0x2, 0x447, 0x448, 0x3, 0x2, 0x2, 0x2, 0x448, 0x449, 0x3, 0x2, 
    0x2, 0x2, 0x449, 0x451, 0x9, 0x3, 0x2, 0x2, 0x44a, 0x44b, 0x7, 0x6f, 
    0x2, 0x2, 0x44b, 0x451, 0x9, 0x4, 0x2, 0x2, 0x44c, 0x44d, 0x7, 0x70, 
    0x2, 0x2, 0x44d, 0x451, 0x9, 0x5, 0x2, 0x2, 0x44e, 0x44f, 0x7, 0x71, 
    0x2, 0x2, 0x44f, 0x451, 0x9, 0x6, 0x2, 0x2, 0x450, 0x447, 0x3, 0x2, 
    0x2, 0x2, 0x450, 0x44a, 0x3, 0x2, 0x2, 0x2, 0x450, 0x44c, 0x3, 0x2, 
    0x2, 0x2, 0x450, 0x44e, 0x3, 0x2, 0x2, 0x2, 0x451, 0x452, 0x3, 0x2, 
    0x2, 0x2, 0x452, 0x453, 0x8, 0x2c, 0x1, 0x2, 0x453, 0x57, 0x3, 0x2, 
    0x2, 0x2, 0x454, 0x456, 0x7, 0x74, 0x2, 0x2, 0x455, 0x454, 0x3, 0x2, 
    0x2, 0x2, 0x455, 0x456, 0x3, 0x2, 0x2, 0x2, 0x456, 0x457, 0x3, 0x2, 
    0x2, 0x2, 0x457, 0x45f, 0x9, 0x3, 0x2, 0x2, 0x458, 0x459, 0x7, 0x6f, 
    0x2, 0x2, 0x459, 0x45f, 0x9, 0x4, 0x2, 0x2, 0x45a, 0x45b, 0x7, 0x70, 
    0x2, 0x2, 0x45b, 0x45f, 0x9, 0x5, 0x2, 0x2, 0x45c, 0x45d, 0x7, 0x71, 
    0x2, 0x2, 0x45d, 0x45f, 0x9, 0x6, 0x2, 0x2, 0x45e, 0x455, 0x3, 0x2, 
    0x2, 0x2, 0x45e, 0x458, 0x3, 0x2, 0x2, 0x2, 0x45e, 0x45a, 0x3, 0x2, 
    0x2, 0x2, 0x45e, 0x45c, 0x3, 0x2, 0x2, 0x2, 0x45f, 0x460, 0x3, 0x2, 
    0x2, 0x2, 0x460, 0x461, 0x8, 0x2d, 0x1, 0x2, 0x461, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x462, 0x463, 0x7, 0x61, 0x2, 0x2, 0x463, 0x467, 0x8, 0x2e, 
    0x1, 0x2, 0x464, 0x465, 0x7, 0x62, 0x2, 0x2, 0x465, 0x467, 0x8, 0x2e, 
    0x1, 0x2, 0x466, 0x462, 0x3, 0x2, 0x2, 0x2, 0x466, 0x464, 0x3, 0x2, 
    0x2, 0x2, 0x467, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x468, 0x46c, 0x7, 0x56, 
    0x2, 0x2, 0x469, 0x46a, 0x7, 0x72, 0x2, 0x2, 0x46a, 0x46c, 0x7, 0x56, 
    0x2, 0x2, 0x46b, 0x468, 0x3, 0x2, 0x2, 0x2, 0x46b, 0x469, 0x3, 0x2, 
    0x2, 0x2, 0x46c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x46d, 0x46e, 0x9, 0x7, 0x2, 
    0x2, 0x46e, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x96, 0x64, 0x68, 0x6d, 0x73, 
    0x79, 0x7f, 0x85, 0x93, 0x99, 0xa2, 0xa9, 0xb0, 0xb7, 0xbf, 0xc6, 0xcb, 
    0xd2, 0xdd, 0xe4, 0xeb, 0xf2, 0xfa, 0x101, 0x106, 0x10d, 0x118, 0x11f, 
    0x128, 0x12f, 0x136, 0x142, 0x149, 0x15a, 0x160, 0x167, 0x16e, 0x178, 
    0x17f, 0x186, 0x18d, 0x194, 0x1b4, 0x1dd, 0x1e3, 0x1e7, 0x1ec, 0x1f3, 
    0x1fc, 0x200, 0x205, 0x20c, 0x215, 0x219, 0x21e, 0x225, 0x22e, 0x235, 
    0x23c, 0x241, 0x247, 0x24c, 0x24e, 0x254, 0x25b, 0x262, 0x267, 0x26d, 
    0x273, 0x279, 0x280, 0x287, 0x28c, 0x292, 0x298, 0x29e, 0x2a5, 0x2ac, 
    0x2b1, 0x2b7, 0x2bd, 0x2c3, 0x2ca, 0x2d1, 0x2d6, 0x2dc, 0x2e2, 0x2e8, 
    0x2ef, 0x2f6, 0x2fb, 0x301, 0x307, 0x30d, 0x314, 0x31b, 0x320, 0x326, 
    0x32c, 0x332, 0x339, 0x340, 0x345, 0x34b, 0x351, 0x357, 0x35e, 0x365, 
    0x36a, 0x370, 0x375, 0x377, 0x37d, 0x384, 0x38b, 0x390, 0x396, 0x39c, 
    0x3a2, 0x3a9, 0x3b0, 0x3be, 0x3c1, 0x3ca, 0x3ce, 0x3d0, 0x3d3, 0x3d8, 
    0x3da, 0x3dd, 0x3e4, 0x3f3, 0x3fc, 0x401, 0x40a, 0x40f, 0x418, 0x41d, 
    0x426, 0x42b, 0x434, 0x439, 0x442, 0x447, 0x450, 0x455, 0x45e, 0x466, 
    0x46b, 
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
