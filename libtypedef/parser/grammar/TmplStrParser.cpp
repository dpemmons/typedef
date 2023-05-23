


// Generated from ./libtypedef/parser/grammar/TmplStrParser.g4 by ANTLR 4.7.2


#include "TmplStrParserListener.h"
#include "TmplStrParserVisitor.h"

#include "TmplStrParser.h"


using namespace antlrcpp;
using namespace antlr4;

TmplStrParser::TmplStrParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

TmplStrParser::~TmplStrParser() {
  delete _interpreter;
}

std::string TmplStrParser::getGrammarFileName() const {
  return "TmplStrParser.g4";
}

const std::vector<std::string>& TmplStrParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& TmplStrParser::getVocabulary() const {
  return _vocabulary;
}


#include <string>


//----------------- TmplContext ------------------------------------------------------------------

TmplStrParser::TmplContext::TmplContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TmplStrParser::ItemContext *> TmplStrParser::TmplContext::item() {
  return getRuleContexts<TmplStrParser::ItemContext>();
}

TmplStrParser::ItemContext* TmplStrParser::TmplContext::item(size_t i) {
  return getRuleContext<TmplStrParser::ItemContext>(i);
}


size_t TmplStrParser::TmplContext::getRuleIndex() const {
  return TmplStrParser::RuleTmpl;
}

void TmplStrParser::TmplContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmpl(this);
}

void TmplStrParser::TmplContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmpl(this);
}


antlrcpp::Any TmplStrParser::TmplContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrParserVisitor*>(visitor))
    return parserVisitor->visitTmpl(this);
  else
    return visitor->visitChildren(this);
}

TmplStrParser::TmplContext* TmplStrParser::tmpl() {
  TmplContext *_localctx = _tracker.createInstance<TmplContext>(_ctx, getState());
  enterRule(_localctx, 0, TmplStrParser::RuleTmpl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TmplStrParser::OPEN

    || _la == TmplStrParser::TEXT) {
      setState(26);
      item();
      setState(31);
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

//----------------- ItemContext ------------------------------------------------------------------

TmplStrParser::ItemContext::ItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TmplStrParser::TextContext* TmplStrParser::ItemContext::text() {
  return getRuleContext<TmplStrParser::TextContext>(0);
}

TmplStrParser::ReplacementContext* TmplStrParser::ItemContext::replacement() {
  return getRuleContext<TmplStrParser::ReplacementContext>(0);
}

TmplStrParser::ForBlockContext* TmplStrParser::ItemContext::forBlock() {
  return getRuleContext<TmplStrParser::ForBlockContext>(0);
}

TmplStrParser::IfBlockContext* TmplStrParser::ItemContext::ifBlock() {
  return getRuleContext<TmplStrParser::IfBlockContext>(0);
}


size_t TmplStrParser::ItemContext::getRuleIndex() const {
  return TmplStrParser::RuleItem;
}

void TmplStrParser::ItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterItem(this);
}

void TmplStrParser::ItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitItem(this);
}


antlrcpp::Any TmplStrParser::ItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrParserVisitor*>(visitor))
    return parserVisitor->visitItem(this);
  else
    return visitor->visitChildren(this);
}

TmplStrParser::ItemContext* TmplStrParser::item() {
  ItemContext *_localctx = _tracker.createInstance<ItemContext>(_ctx, getState());
  enterRule(_localctx, 2, TmplStrParser::RuleItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(36);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(32);
      text();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(33);
      replacement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(34);
      forBlock();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(35);
      ifBlock();
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

//----------------- ReplacementContext ------------------------------------------------------------------

TmplStrParser::ReplacementContext::ReplacementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TmplStrParser::ReplacementContext::OPEN() {
  return getToken(TmplStrParser::OPEN, 0);
}

TmplStrParser::IdentifierContext* TmplStrParser::ReplacementContext::identifier() {
  return getRuleContext<TmplStrParser::IdentifierContext>(0);
}

tree::TerminalNode* TmplStrParser::ReplacementContext::CLOSE() {
  return getToken(TmplStrParser::CLOSE, 0);
}


size_t TmplStrParser::ReplacementContext::getRuleIndex() const {
  return TmplStrParser::RuleReplacement;
}

void TmplStrParser::ReplacementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReplacement(this);
}

void TmplStrParser::ReplacementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReplacement(this);
}


antlrcpp::Any TmplStrParser::ReplacementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrParserVisitor*>(visitor))
    return parserVisitor->visitReplacement(this);
  else
    return visitor->visitChildren(this);
}

TmplStrParser::ReplacementContext* TmplStrParser::replacement() {
  ReplacementContext *_localctx = _tracker.createInstance<ReplacementContext>(_ctx, getState());
  enterRule(_localctx, 4, TmplStrParser::RuleReplacement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(38);
    match(TmplStrParser::OPEN);
    setState(39);
    dynamic_cast<ReplacementContext *>(_localctx)->identifierContext = identifier();
    setState(40);
    match(TmplStrParser::CLOSE);
    dynamic_cast<ReplacementContext *>(_localctx)->id =  dynamic_cast<ReplacementContext *>(_localctx)->identifierContext->id;
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForBlockContext ------------------------------------------------------------------

TmplStrParser::ForBlockContext::ForBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TmplStrParser::ForOpenContext* TmplStrParser::ForBlockContext::forOpen() {
  return getRuleContext<TmplStrParser::ForOpenContext>(0);
}

TmplStrParser::ForCloseContext* TmplStrParser::ForBlockContext::forClose() {
  return getRuleContext<TmplStrParser::ForCloseContext>(0);
}

std::vector<TmplStrParser::ItemContext *> TmplStrParser::ForBlockContext::item() {
  return getRuleContexts<TmplStrParser::ItemContext>();
}

TmplStrParser::ItemContext* TmplStrParser::ForBlockContext::item(size_t i) {
  return getRuleContext<TmplStrParser::ItemContext>(i);
}


size_t TmplStrParser::ForBlockContext::getRuleIndex() const {
  return TmplStrParser::RuleForBlock;
}

void TmplStrParser::ForBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForBlock(this);
}

void TmplStrParser::ForBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForBlock(this);
}


antlrcpp::Any TmplStrParser::ForBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrParserVisitor*>(visitor))
    return parserVisitor->visitForBlock(this);
  else
    return visitor->visitChildren(this);
}

TmplStrParser::ForBlockContext* TmplStrParser::forBlock() {
  ForBlockContext *_localctx = _tracker.createInstance<ForBlockContext>(_ctx, getState());
  enterRule(_localctx, 6, TmplStrParser::RuleForBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(43);
    forOpen();
    setState(47);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(44);
        item(); 
      }
      setState(49);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
    setState(50);
    forClose();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForOpenContext ------------------------------------------------------------------

TmplStrParser::ForOpenContext::ForOpenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TmplStrParser::ForOpenContext::OPEN() {
  return getToken(TmplStrParser::OPEN, 0);
}

tree::TerminalNode* TmplStrParser::ForOpenContext::KW_FOR() {
  return getToken(TmplStrParser::KW_FOR, 0);
}

std::vector<TmplStrParser::IdentifierContext *> TmplStrParser::ForOpenContext::identifier() {
  return getRuleContexts<TmplStrParser::IdentifierContext>();
}

TmplStrParser::IdentifierContext* TmplStrParser::ForOpenContext::identifier(size_t i) {
  return getRuleContext<TmplStrParser::IdentifierContext>(i);
}

tree::TerminalNode* TmplStrParser::ForOpenContext::KW_IN() {
  return getToken(TmplStrParser::KW_IN, 0);
}

tree::TerminalNode* TmplStrParser::ForOpenContext::CLOSE() {
  return getToken(TmplStrParser::CLOSE, 0);
}


size_t TmplStrParser::ForOpenContext::getRuleIndex() const {
  return TmplStrParser::RuleForOpen;
}

void TmplStrParser::ForOpenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForOpen(this);
}

void TmplStrParser::ForOpenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForOpen(this);
}


antlrcpp::Any TmplStrParser::ForOpenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrParserVisitor*>(visitor))
    return parserVisitor->visitForOpen(this);
  else
    return visitor->visitChildren(this);
}

TmplStrParser::ForOpenContext* TmplStrParser::forOpen() {
  ForOpenContext *_localctx = _tracker.createInstance<ForOpenContext>(_ctx, getState());
  enterRule(_localctx, 8, TmplStrParser::RuleForOpen);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    match(TmplStrParser::OPEN);
    setState(53);
    match(TmplStrParser::KW_FOR);
    setState(54);
    identifier();
    setState(55);
    match(TmplStrParser::KW_IN);
    setState(56);
    identifier();
    setState(57);
    match(TmplStrParser::CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForCloseContext ------------------------------------------------------------------

TmplStrParser::ForCloseContext::ForCloseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TmplStrParser::ForCloseContext::OPEN() {
  return getToken(TmplStrParser::OPEN, 0);
}

tree::TerminalNode* TmplStrParser::ForCloseContext::SLASH() {
  return getToken(TmplStrParser::SLASH, 0);
}

tree::TerminalNode* TmplStrParser::ForCloseContext::KW_FOR() {
  return getToken(TmplStrParser::KW_FOR, 0);
}

tree::TerminalNode* TmplStrParser::ForCloseContext::CLOSE() {
  return getToken(TmplStrParser::CLOSE, 0);
}


size_t TmplStrParser::ForCloseContext::getRuleIndex() const {
  return TmplStrParser::RuleForClose;
}

void TmplStrParser::ForCloseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForClose(this);
}

void TmplStrParser::ForCloseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForClose(this);
}


antlrcpp::Any TmplStrParser::ForCloseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrParserVisitor*>(visitor))
    return parserVisitor->visitForClose(this);
  else
    return visitor->visitChildren(this);
}

TmplStrParser::ForCloseContext* TmplStrParser::forClose() {
  ForCloseContext *_localctx = _tracker.createInstance<ForCloseContext>(_ctx, getState());
  enterRule(_localctx, 10, TmplStrParser::RuleForClose);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(59);
    match(TmplStrParser::OPEN);
    setState(60);
    match(TmplStrParser::SLASH);
    setState(61);
    match(TmplStrParser::KW_FOR);
    setState(62);
    match(TmplStrParser::CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfBlockContext ------------------------------------------------------------------

TmplStrParser::IfBlockContext::IfBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TmplStrParser::IfOpenContext* TmplStrParser::IfBlockContext::ifOpen() {
  return getRuleContext<TmplStrParser::IfOpenContext>(0);
}

TmplStrParser::IfCloseContext* TmplStrParser::IfBlockContext::ifClose() {
  return getRuleContext<TmplStrParser::IfCloseContext>(0);
}

std::vector<TmplStrParser::ItemContext *> TmplStrParser::IfBlockContext::item() {
  return getRuleContexts<TmplStrParser::ItemContext>();
}

TmplStrParser::ItemContext* TmplStrParser::IfBlockContext::item(size_t i) {
  return getRuleContext<TmplStrParser::ItemContext>(i);
}

std::vector<TmplStrParser::ElseIfStmtContext *> TmplStrParser::IfBlockContext::elseIfStmt() {
  return getRuleContexts<TmplStrParser::ElseIfStmtContext>();
}

TmplStrParser::ElseIfStmtContext* TmplStrParser::IfBlockContext::elseIfStmt(size_t i) {
  return getRuleContext<TmplStrParser::ElseIfStmtContext>(i);
}

TmplStrParser::ElseStmtContext* TmplStrParser::IfBlockContext::elseStmt() {
  return getRuleContext<TmplStrParser::ElseStmtContext>(0);
}


size_t TmplStrParser::IfBlockContext::getRuleIndex() const {
  return TmplStrParser::RuleIfBlock;
}

void TmplStrParser::IfBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfBlock(this);
}

void TmplStrParser::IfBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfBlock(this);
}


antlrcpp::Any TmplStrParser::IfBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrParserVisitor*>(visitor))
    return parserVisitor->visitIfBlock(this);
  else
    return visitor->visitChildren(this);
}

TmplStrParser::IfBlockContext* TmplStrParser::ifBlock() {
  IfBlockContext *_localctx = _tracker.createInstance<IfBlockContext>(_ctx, getState());
  enterRule(_localctx, 12, TmplStrParser::RuleIfBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(64);
    ifOpen();
    setState(68);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(65);
        item(); 
      }
      setState(70);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
    setState(80);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(71);
        elseIfStmt();
        setState(75);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(72);
            item(); 
          }
          setState(77);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
        } 
      }
      setState(82);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
    setState(90);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(83);
      elseStmt();
      setState(87);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(84);
          item(); 
        }
        setState(89);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
      }
      break;
    }

    }
    setState(92);
    ifClose();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfOpenContext ------------------------------------------------------------------

TmplStrParser::IfOpenContext::IfOpenContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TmplStrParser::IfOpenContext::OPEN() {
  return getToken(TmplStrParser::OPEN, 0);
}

tree::TerminalNode* TmplStrParser::IfOpenContext::KW_IF() {
  return getToken(TmplStrParser::KW_IF, 0);
}

TmplStrParser::IdentifierContext* TmplStrParser::IfOpenContext::identifier() {
  return getRuleContext<TmplStrParser::IdentifierContext>(0);
}

tree::TerminalNode* TmplStrParser::IfOpenContext::CLOSE() {
  return getToken(TmplStrParser::CLOSE, 0);
}


size_t TmplStrParser::IfOpenContext::getRuleIndex() const {
  return TmplStrParser::RuleIfOpen;
}

void TmplStrParser::IfOpenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfOpen(this);
}

void TmplStrParser::IfOpenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfOpen(this);
}


antlrcpp::Any TmplStrParser::IfOpenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrParserVisitor*>(visitor))
    return parserVisitor->visitIfOpen(this);
  else
    return visitor->visitChildren(this);
}

TmplStrParser::IfOpenContext* TmplStrParser::ifOpen() {
  IfOpenContext *_localctx = _tracker.createInstance<IfOpenContext>(_ctx, getState());
  enterRule(_localctx, 14, TmplStrParser::RuleIfOpen);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    match(TmplStrParser::OPEN);
    setState(95);
    match(TmplStrParser::KW_IF);
    setState(96);
    identifier();
    setState(97);
    match(TmplStrParser::CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseIfStmtContext ------------------------------------------------------------------

TmplStrParser::ElseIfStmtContext::ElseIfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TmplStrParser::ElseIfStmtContext::OPEN() {
  return getToken(TmplStrParser::OPEN, 0);
}

tree::TerminalNode* TmplStrParser::ElseIfStmtContext::KW_ELSE() {
  return getToken(TmplStrParser::KW_ELSE, 0);
}

tree::TerminalNode* TmplStrParser::ElseIfStmtContext::KW_IF() {
  return getToken(TmplStrParser::KW_IF, 0);
}

TmplStrParser::IdentifierContext* TmplStrParser::ElseIfStmtContext::identifier() {
  return getRuleContext<TmplStrParser::IdentifierContext>(0);
}

tree::TerminalNode* TmplStrParser::ElseIfStmtContext::CLOSE() {
  return getToken(TmplStrParser::CLOSE, 0);
}


size_t TmplStrParser::ElseIfStmtContext::getRuleIndex() const {
  return TmplStrParser::RuleElseIfStmt;
}

void TmplStrParser::ElseIfStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseIfStmt(this);
}

void TmplStrParser::ElseIfStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseIfStmt(this);
}


antlrcpp::Any TmplStrParser::ElseIfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrParserVisitor*>(visitor))
    return parserVisitor->visitElseIfStmt(this);
  else
    return visitor->visitChildren(this);
}

TmplStrParser::ElseIfStmtContext* TmplStrParser::elseIfStmt() {
  ElseIfStmtContext *_localctx = _tracker.createInstance<ElseIfStmtContext>(_ctx, getState());
  enterRule(_localctx, 16, TmplStrParser::RuleElseIfStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(TmplStrParser::OPEN);
    setState(100);
    match(TmplStrParser::KW_ELSE);
    setState(101);
    match(TmplStrParser::KW_IF);
    setState(102);
    identifier();
    setState(103);
    match(TmplStrParser::CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStmtContext ------------------------------------------------------------------

TmplStrParser::ElseStmtContext::ElseStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TmplStrParser::ElseStmtContext::OPEN() {
  return getToken(TmplStrParser::OPEN, 0);
}

tree::TerminalNode* TmplStrParser::ElseStmtContext::KW_ELSE() {
  return getToken(TmplStrParser::KW_ELSE, 0);
}

tree::TerminalNode* TmplStrParser::ElseStmtContext::CLOSE() {
  return getToken(TmplStrParser::CLOSE, 0);
}


size_t TmplStrParser::ElseStmtContext::getRuleIndex() const {
  return TmplStrParser::RuleElseStmt;
}

void TmplStrParser::ElseStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseStmt(this);
}

void TmplStrParser::ElseStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseStmt(this);
}


antlrcpp::Any TmplStrParser::ElseStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrParserVisitor*>(visitor))
    return parserVisitor->visitElseStmt(this);
  else
    return visitor->visitChildren(this);
}

TmplStrParser::ElseStmtContext* TmplStrParser::elseStmt() {
  ElseStmtContext *_localctx = _tracker.createInstance<ElseStmtContext>(_ctx, getState());
  enterRule(_localctx, 18, TmplStrParser::RuleElseStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    match(TmplStrParser::OPEN);
    setState(106);
    match(TmplStrParser::KW_ELSE);
    setState(107);
    match(TmplStrParser::CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfCloseContext ------------------------------------------------------------------

TmplStrParser::IfCloseContext::IfCloseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TmplStrParser::IfCloseContext::OPEN() {
  return getToken(TmplStrParser::OPEN, 0);
}

tree::TerminalNode* TmplStrParser::IfCloseContext::SLASH() {
  return getToken(TmplStrParser::SLASH, 0);
}

tree::TerminalNode* TmplStrParser::IfCloseContext::KW_IF() {
  return getToken(TmplStrParser::KW_IF, 0);
}

tree::TerminalNode* TmplStrParser::IfCloseContext::CLOSE() {
  return getToken(TmplStrParser::CLOSE, 0);
}


size_t TmplStrParser::IfCloseContext::getRuleIndex() const {
  return TmplStrParser::RuleIfClose;
}

void TmplStrParser::IfCloseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfClose(this);
}

void TmplStrParser::IfCloseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfClose(this);
}


antlrcpp::Any TmplStrParser::IfCloseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrParserVisitor*>(visitor))
    return parserVisitor->visitIfClose(this);
  else
    return visitor->visitChildren(this);
}

TmplStrParser::IfCloseContext* TmplStrParser::ifClose() {
  IfCloseContext *_localctx = _tracker.createInstance<IfCloseContext>(_ctx, getState());
  enterRule(_localctx, 20, TmplStrParser::RuleIfClose);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    match(TmplStrParser::OPEN);
    setState(110);
    match(TmplStrParser::SLASH);
    setState(111);
    match(TmplStrParser::KW_IF);
    setState(112);
    match(TmplStrParser::CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TextContext ------------------------------------------------------------------

TmplStrParser::TextContext::TextContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TmplStrParser::TextContext::TEXT() {
  return getToken(TmplStrParser::TEXT, 0);
}


size_t TmplStrParser::TextContext::getRuleIndex() const {
  return TmplStrParser::RuleText;
}

void TmplStrParser::TextContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterText(this);
}

void TmplStrParser::TextContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitText(this);
}


antlrcpp::Any TmplStrParser::TextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrParserVisitor*>(visitor))
    return parserVisitor->visitText(this);
  else
    return visitor->visitChildren(this);
}

TmplStrParser::TextContext* TmplStrParser::text() {
  TextContext *_localctx = _tracker.createInstance<TextContext>(_ctx, getState());
  enterRule(_localctx, 22, TmplStrParser::RuleText);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    dynamic_cast<TextContext *>(_localctx)->textToken = match(TmplStrParser::TEXT);
     dynamic_cast<TextContext *>(_localctx)->txt =  dynamic_cast<TextContext *>(_localctx)->textToken->getText(); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

TmplStrParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TmplStrParser::IdentifierContext::NON_KEYWORD_IDENTIFIER() {
  return getToken(TmplStrParser::NON_KEYWORD_IDENTIFIER, 0);
}

tree::TerminalNode* TmplStrParser::IdentifierContext::RAW_ESCAPE() {
  return getToken(TmplStrParser::RAW_ESCAPE, 0);
}


size_t TmplStrParser::IdentifierContext::getRuleIndex() const {
  return TmplStrParser::RuleIdentifier;
}

void TmplStrParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void TmplStrParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}


antlrcpp::Any TmplStrParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrParserVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

TmplStrParser::IdentifierContext* TmplStrParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 24, TmplStrParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(120);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TmplStrParser::NON_KEYWORD_IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(117);
        dynamic_cast<IdentifierContext *>(_localctx)->nki = match(TmplStrParser::NON_KEYWORD_IDENTIFIER);
        break;
      }

      case TmplStrParser::RAW_ESCAPE: {
        enterOuterAlt(_localctx, 2);
        setState(118);
        match(TmplStrParser::RAW_ESCAPE);
        setState(119);
        dynamic_cast<IdentifierContext *>(_localctx)->nki = match(TmplStrParser::NON_KEYWORD_IDENTIFIER);
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

// Static vars and initialization.
std::vector<dfa::DFA> TmplStrParser::_decisionToDFA;
atn::PredictionContextCache TmplStrParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN TmplStrParser::_atn;
std::vector<uint16_t> TmplStrParser::_serializedATN;

std::vector<std::string> TmplStrParser::_ruleNames = {
  "tmpl", "item", "replacement", "forBlock", "forOpen", "forClose", "ifBlock", 
  "ifOpen", "elseIfStmt", "elseStmt", "ifClose", "text", "identifier"
};

std::vector<std::string> TmplStrParser::_literalNames = {
  "", "'<'", "", "'>'", "'/'", "'for'", "'in'", "'if'", "'else'", "", "'r#'"
};

std::vector<std::string> TmplStrParser::_symbolicNames = {
  "", "OPEN", "TEXT", "CLOSE", "SLASH", "KW_FOR", "KW_IN", "KW_IF", "KW_ELSE", 
  "NON_KEYWORD_IDENTIFIER", "RAW_ESCAPE", "WS"
};

dfa::Vocabulary TmplStrParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> TmplStrParser::_tokenNames;

TmplStrParser::Initializer::Initializer() {
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
    0x3, 0xd, 0x7d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x3, 
    0x2, 0x7, 0x2, 0x1e, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x21, 0xb, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x27, 0xa, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 
    0x30, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x33, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x7, 0x8, 0x45, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x48, 0xb, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x7, 0x8, 0x4c, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x4f, 0xb, 0x8, 
    0x7, 0x8, 0x51, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x54, 0xb, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x7, 0x8, 0x58, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x5b, 0xb, 0x8, 
    0x5, 0x8, 0x5d, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x7b, 0xa, 0xe, 0x3, 0xe, 0x2, 0x2, 
    0xf, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x2, 0x2, 0x2, 0x7a, 0x2, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x4, 0x26, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x28, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x36, 0x3, 0x2, 0x2, 0x2, 0xc, 0x3d, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x42, 0x3, 0x2, 0x2, 0x2, 0x10, 0x60, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x65, 0x3, 0x2, 0x2, 0x2, 0x14, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x16, 0x6f, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0x74, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x7a, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0x1e, 0x5, 0x4, 0x3, 0x2, 0x1d, 0x1c, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0x21, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0x1f, 0x20, 0x3, 0x2, 0x2, 0x2, 0x20, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x21, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x22, 0x27, 0x5, 0x18, 0xd, 0x2, 0x23, 
    0x27, 0x5, 0x6, 0x4, 0x2, 0x24, 0x27, 0x5, 0x8, 0x5, 0x2, 0x25, 0x27, 
    0x5, 0xe, 0x8, 0x2, 0x26, 0x22, 0x3, 0x2, 0x2, 0x2, 0x26, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0x27, 0x5, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x7, 0x3, 0x2, 
    0x2, 0x29, 0x2a, 0x5, 0x1a, 0xe, 0x2, 0x2a, 0x2b, 0x7, 0x5, 0x2, 0x2, 
    0x2b, 0x2c, 0x8, 0x4, 0x1, 0x2, 0x2c, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2d, 
    0x31, 0x5, 0xa, 0x6, 0x2, 0x2e, 0x30, 0x5, 0x4, 0x3, 0x2, 0x2f, 0x2e, 
    0x3, 0x2, 0x2, 0x2, 0x30, 0x33, 0x3, 0x2, 0x2, 0x2, 0x31, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0x31, 0x32, 0x3, 0x2, 0x2, 0x2, 0x32, 0x34, 0x3, 0x2, 
    0x2, 0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x5, 0xc, 0x7, 
    0x2, 0x35, 0x9, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x7, 0x3, 0x2, 0x2, 
    0x37, 0x38, 0x7, 0x7, 0x2, 0x2, 0x38, 0x39, 0x5, 0x1a, 0xe, 0x2, 0x39, 
    0x3a, 0x7, 0x8, 0x2, 0x2, 0x3a, 0x3b, 0x5, 0x1a, 0xe, 0x2, 0x3b, 0x3c, 
    0x7, 0x5, 0x2, 0x2, 0x3c, 0xb, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 0x7, 
    0x3, 0x2, 0x2, 0x3e, 0x3f, 0x7, 0x6, 0x2, 0x2, 0x3f, 0x40, 0x7, 0x7, 
    0x2, 0x2, 0x40, 0x41, 0x7, 0x5, 0x2, 0x2, 0x41, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x42, 0x46, 0x5, 0x10, 0x9, 0x2, 0x43, 0x45, 0x5, 0x4, 0x3, 0x2, 
    0x44, 0x43, 0x3, 0x2, 0x2, 0x2, 0x45, 0x48, 0x3, 0x2, 0x2, 0x2, 0x46, 
    0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x3, 0x2, 0x2, 0x2, 0x47, 0x52, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4d, 0x5, 
    0x12, 0xa, 0x2, 0x4a, 0x4c, 0x5, 0x4, 0x3, 0x2, 0x4b, 0x4a, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x4d, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x51, 0x3, 0x2, 0x2, 0x2, 
    0x4f, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x50, 0x49, 0x3, 0x2, 0x2, 0x2, 0x51, 
    0x54, 0x3, 0x2, 0x2, 0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 
    0x3, 0x2, 0x2, 0x2, 0x53, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x54, 0x52, 0x3, 
    0x2, 0x2, 0x2, 0x55, 0x59, 0x5, 0x14, 0xb, 0x2, 0x56, 0x58, 0x5, 0x4, 
    0x3, 0x2, 0x57, 0x56, 0x3, 0x2, 0x2, 0x2, 0x58, 0x5b, 0x3, 0x2, 0x2, 
    0x2, 0x59, 0x57, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x3, 0x2, 0x2, 0x2, 
    0x5a, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5c, 
    0x55, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 
    0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x5, 0x16, 0xc, 0x2, 0x5f, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x60, 0x61, 0x7, 0x3, 0x2, 0x2, 0x61, 0x62, 0x7, 0x9, 
    0x2, 0x2, 0x62, 0x63, 0x5, 0x1a, 0xe, 0x2, 0x63, 0x64, 0x7, 0x5, 0x2, 
    0x2, 0x64, 0x11, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x7, 0x3, 0x2, 0x2, 
    0x66, 0x67, 0x7, 0xa, 0x2, 0x2, 0x67, 0x68, 0x7, 0x9, 0x2, 0x2, 0x68, 
    0x69, 0x5, 0x1a, 0xe, 0x2, 0x69, 0x6a, 0x7, 0x5, 0x2, 0x2, 0x6a, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x7, 0x3, 0x2, 0x2, 0x6c, 0x6d, 0x7, 
    0xa, 0x2, 0x2, 0x6d, 0x6e, 0x7, 0x5, 0x2, 0x2, 0x6e, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0x6f, 0x70, 0x7, 0x3, 0x2, 0x2, 0x70, 0x71, 0x7, 0x6, 0x2, 
    0x2, 0x71, 0x72, 0x7, 0x9, 0x2, 0x2, 0x72, 0x73, 0x7, 0x5, 0x2, 0x2, 
    0x73, 0x17, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x7, 0x4, 0x2, 0x2, 0x75, 
    0x76, 0x8, 0xd, 0x1, 0x2, 0x76, 0x19, 0x3, 0x2, 0x2, 0x2, 0x77, 0x7b, 
    0x7, 0xb, 0x2, 0x2, 0x78, 0x79, 0x7, 0xc, 0x2, 0x2, 0x79, 0x7b, 0x7, 
    0xb, 0x2, 0x2, 0x7a, 0x77, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x78, 0x3, 0x2, 
    0x2, 0x2, 0x7b, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xb, 0x1f, 0x26, 0x31, 0x46, 
    0x4d, 0x52, 0x59, 0x5c, 0x7a, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

TmplStrParser::Initializer TmplStrParser::_init;
