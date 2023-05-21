
// Generated from ./libtypedef/parser/grammar/TmplStr.g4 by ANTLR 4.7.2


#include "TmplStrListener.h"
#include "TmplStrVisitor.h"

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
  return "TmplStr.g4";
}

const std::vector<std::string>& TmplStrParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& TmplStrParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- TmplContext ------------------------------------------------------------------

TmplStrParser::TmplContext::TmplContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TmplStrParser::TextContext *> TmplStrParser::TmplContext::text() {
  return getRuleContexts<TmplStrParser::TextContext>();
}

TmplStrParser::TextContext* TmplStrParser::TmplContext::text(size_t i) {
  return getRuleContext<TmplStrParser::TextContext>(i);
}

std::vector<TmplStrParser::TaggedStatementContext *> TmplStrParser::TmplContext::taggedStatement() {
  return getRuleContexts<TmplStrParser::TaggedStatementContext>();
}

TmplStrParser::TaggedStatementContext* TmplStrParser::TmplContext::taggedStatement(size_t i) {
  return getRuleContext<TmplStrParser::TaggedStatementContext>(i);
}


size_t TmplStrParser::TmplContext::getRuleIndex() const {
  return TmplStrParser::RuleTmpl;
}

void TmplStrParser::TmplContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmpl(this);
}

void TmplStrParser::TmplContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmpl(this);
}


antlrcpp::Any TmplStrParser::TmplContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrVisitor*>(visitor))
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
    setState(17);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TmplStrParser::TEXT) {
      setState(10);
      text();
      setState(11);
      taggedStatement();
      setState(13);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(12);
        text();
        break;
      }

      }
      setState(19);
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

//----------------- TaggedStatementContext ------------------------------------------------------------------

TmplStrParser::TaggedStatementContext::TaggedStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TmplStrParser::StatementContext* TmplStrParser::TaggedStatementContext::statement() {
  return getRuleContext<TmplStrParser::StatementContext>(0);
}

std::vector<tree::TerminalNode *> TmplStrParser::TaggedStatementContext::WS() {
  return getTokens(TmplStrParser::WS);
}

tree::TerminalNode* TmplStrParser::TaggedStatementContext::WS(size_t i) {
  return getToken(TmplStrParser::WS, i);
}


size_t TmplStrParser::TaggedStatementContext::getRuleIndex() const {
  return TmplStrParser::RuleTaggedStatement;
}

void TmplStrParser::TaggedStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTaggedStatement(this);
}

void TmplStrParser::TaggedStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTaggedStatement(this);
}


antlrcpp::Any TmplStrParser::TaggedStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrVisitor*>(visitor))
    return parserVisitor->visitTaggedStatement(this);
  else
    return visitor->visitChildren(this);
}

TmplStrParser::TaggedStatementContext* TmplStrParser::taggedStatement() {
  TaggedStatementContext *_localctx = _tracker.createInstance<TaggedStatementContext>(_ctx, getState());
  enterRule(_localctx, 2, TmplStrParser::RuleTaggedStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(20);
    match(TmplStrParser::T__0);
    setState(24);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TmplStrParser::WS) {
      setState(21);
      match(TmplStrParser::WS);
      setState(26);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(27);
    statement();
    setState(31);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TmplStrParser::WS) {
      setState(28);
      match(TmplStrParser::WS);
      setState(33);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(34);
    match(TmplStrParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

TmplStrParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TmplStrParser::IdentifierContext* TmplStrParser::StatementContext::identifier() {
  return getRuleContext<TmplStrParser::IdentifierContext>(0);
}


size_t TmplStrParser::StatementContext::getRuleIndex() const {
  return TmplStrParser::RuleStatement;
}

void TmplStrParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void TmplStrParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any TmplStrParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

TmplStrParser::StatementContext* TmplStrParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, TmplStrParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    identifier();
   
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
  auto parserListener = dynamic_cast<TmplStrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterText(this);
}

void TmplStrParser::TextContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitText(this);
}


antlrcpp::Any TmplStrParser::TextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrVisitor*>(visitor))
    return parserVisitor->visitText(this);
  else
    return visitor->visitChildren(this);
}

TmplStrParser::TextContext* TmplStrParser::text() {
  TextContext *_localctx = _tracker.createInstance<TextContext>(_ctx, getState());
  enterRule(_localctx, 6, TmplStrParser::RuleText);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(38);
    match(TmplStrParser::TEXT);
   
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
  auto parserListener = dynamic_cast<TmplStrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void TmplStrParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}


antlrcpp::Any TmplStrParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

TmplStrParser::IdentifierContext* TmplStrParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 8, TmplStrParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(43);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TmplStrParser::NON_KEYWORD_IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(40);
        dynamic_cast<IdentifierContext *>(_localctx)->nki = match(TmplStrParser::NON_KEYWORD_IDENTIFIER);
        break;
      }

      case TmplStrParser::RAW_ESCAPE: {
        enterOuterAlt(_localctx, 2);
        setState(41);
        match(TmplStrParser::RAW_ESCAPE);
        setState(42);
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
  "tmpl", "taggedStatement", "statement", "text", "identifier"
};

std::vector<std::string> TmplStrParser::_literalNames = {
  "", "'<'", "'>'", "", "'r#'"
};

std::vector<std::string> TmplStrParser::_symbolicNames = {
  "", "", "", "NON_KEYWORD_IDENTIFIER", "RAW_ESCAPE", "WS", "COMMENT", "TEXT"
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
    0x3, 0x9, 0x30, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x5, 0x2, 0x10, 0xa, 0x2, 0x7, 0x2, 0x12, 0xa, 0x2, 0xc, 0x2, 0xe, 
    0x2, 0x15, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x19, 0xa, 0x3, 0xc, 
    0x3, 0xe, 0x3, 0x1c, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x20, 0xa, 
    0x3, 0xc, 0x3, 0xe, 0x3, 0x23, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 
    0x2e, 0xa, 0x6, 0x3, 0x6, 0x2, 0x2, 0x7, 0x2, 0x4, 0x6, 0x8, 0xa, 0x2, 
    0x2, 0x2, 0x2f, 0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 0x4, 0x16, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x26, 0x3, 0x2, 0x2, 0x2, 0x8, 0x28, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x5, 0x8, 0x5, 0x2, 0xd, 0xf, 
    0x5, 0x4, 0x3, 0x2, 0xe, 0x10, 0x5, 0x8, 0x5, 0x2, 0xf, 0xe, 0x3, 0x2, 
    0x2, 0x2, 0xf, 0x10, 0x3, 0x2, 0x2, 0x2, 0x10, 0x12, 0x3, 0x2, 0x2, 
    0x2, 0x11, 0xc, 0x3, 0x2, 0x2, 0x2, 0x12, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x13, 0x11, 0x3, 0x2, 0x2, 0x2, 0x13, 0x14, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x15, 0x13, 0x3, 0x2, 0x2, 0x2, 0x16, 0x1a, 
    0x7, 0x3, 0x2, 0x2, 0x17, 0x19, 0x7, 0x7, 0x2, 0x2, 0x18, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x19, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x18, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x21, 0x5, 0x6, 0x4, 0x2, 
    0x1e, 0x20, 0x7, 0x7, 0x2, 0x2, 0x1f, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x20, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x21, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0x24, 0x3, 0x2, 0x2, 0x2, 0x23, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0x25, 0x7, 0x4, 0x2, 0x2, 0x25, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x26, 0x27, 0x5, 0xa, 0x6, 0x2, 0x27, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x28, 0x29, 0x7, 0x9, 0x2, 0x2, 0x29, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x2e, 0x7, 0x5, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0x6, 0x2, 0x2, 0x2c, 
    0x2e, 0x7, 0x5, 0x2, 0x2, 0x2d, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2b, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0xb, 0x3, 0x2, 0x2, 0x2, 0x7, 0xf, 0x13, 0x1a, 
    0x21, 0x2d, 
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
