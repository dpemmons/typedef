
// Generated from ./libtypedef/parser/grammar/TemplateString.g4 by ANTLR 4.7.2


#include "TemplateStringListener.h"
#include "TemplateStringVisitor.h"

#include "TemplateStringParser.h"


using namespace antlrcpp;
using namespace antlr4;

TemplateStringParser::TemplateStringParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

TemplateStringParser::~TemplateStringParser() {
  delete _interpreter;
}

std::string TemplateStringParser::getGrammarFileName() const {
  return "TemplateString.g4";
}

const std::vector<std::string>& TemplateStringParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& TemplateStringParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- TmplContext ------------------------------------------------------------------

TemplateStringParser::TmplContext::TmplContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TemplateStringParser::TextContext *> TemplateStringParser::TmplContext::text() {
  return getRuleContexts<TemplateStringParser::TextContext>();
}

TemplateStringParser::TextContext* TemplateStringParser::TmplContext::text(size_t i) {
  return getRuleContext<TemplateStringParser::TextContext>(i);
}

std::vector<TemplateStringParser::TaggedStatementContext *> TemplateStringParser::TmplContext::taggedStatement() {
  return getRuleContexts<TemplateStringParser::TaggedStatementContext>();
}

TemplateStringParser::TaggedStatementContext* TemplateStringParser::TmplContext::taggedStatement(size_t i) {
  return getRuleContext<TemplateStringParser::TaggedStatementContext>(i);
}


size_t TemplateStringParser::TmplContext::getRuleIndex() const {
  return TemplateStringParser::RuleTmpl;
}

void TemplateStringParser::TmplContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TemplateStringListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmpl(this);
}

void TemplateStringParser::TmplContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TemplateStringListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmpl(this);
}


antlrcpp::Any TemplateStringParser::TmplContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TemplateStringVisitor*>(visitor))
    return parserVisitor->visitTmpl(this);
  else
    return visitor->visitChildren(this);
}

TemplateStringParser::TmplContext* TemplateStringParser::tmpl() {
  TmplContext *_localctx = _tracker.createInstance<TmplContext>(_ctx, getState());
  enterRule(_localctx, 0, TemplateStringParser::RuleTmpl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(17);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TemplateStringParser::TEXT) {
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

TemplateStringParser::TaggedStatementContext::TaggedStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TemplateStringParser::StatementContext* TemplateStringParser::TaggedStatementContext::statement() {
  return getRuleContext<TemplateStringParser::StatementContext>(0);
}


size_t TemplateStringParser::TaggedStatementContext::getRuleIndex() const {
  return TemplateStringParser::RuleTaggedStatement;
}

void TemplateStringParser::TaggedStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TemplateStringListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTaggedStatement(this);
}

void TemplateStringParser::TaggedStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TemplateStringListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTaggedStatement(this);
}


antlrcpp::Any TemplateStringParser::TaggedStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TemplateStringVisitor*>(visitor))
    return parserVisitor->visitTaggedStatement(this);
  else
    return visitor->visitChildren(this);
}

TemplateStringParser::TaggedStatementContext* TemplateStringParser::taggedStatement() {
  TaggedStatementContext *_localctx = _tracker.createInstance<TaggedStatementContext>(_ctx, getState());
  enterRule(_localctx, 2, TemplateStringParser::RuleTaggedStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(20);
    match(TemplateStringParser::T__0);
    setState(21);
    statement();
    setState(22);
    match(TemplateStringParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

TemplateStringParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TemplateStringParser::IdentifierContext* TemplateStringParser::StatementContext::identifier() {
  return getRuleContext<TemplateStringParser::IdentifierContext>(0);
}


size_t TemplateStringParser::StatementContext::getRuleIndex() const {
  return TemplateStringParser::RuleStatement;
}

void TemplateStringParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TemplateStringListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void TemplateStringParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TemplateStringListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any TemplateStringParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TemplateStringVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

TemplateStringParser::StatementContext* TemplateStringParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, TemplateStringParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24);
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

TemplateStringParser::TextContext::TextContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TemplateStringParser::TextContext::TEXT() {
  return getToken(TemplateStringParser::TEXT, 0);
}


size_t TemplateStringParser::TextContext::getRuleIndex() const {
  return TemplateStringParser::RuleText;
}

void TemplateStringParser::TextContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TemplateStringListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterText(this);
}

void TemplateStringParser::TextContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TemplateStringListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitText(this);
}


antlrcpp::Any TemplateStringParser::TextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TemplateStringVisitor*>(visitor))
    return parserVisitor->visitText(this);
  else
    return visitor->visitChildren(this);
}

TemplateStringParser::TextContext* TemplateStringParser::text() {
  TextContext *_localctx = _tracker.createInstance<TextContext>(_ctx, getState());
  enterRule(_localctx, 6, TemplateStringParser::RuleText);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(26);
    match(TemplateStringParser::TEXT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

TemplateStringParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TemplateStringParser::IdentifierContext::NON_KEYWORD_IDENTIFIER() {
  return getToken(TemplateStringParser::NON_KEYWORD_IDENTIFIER, 0);
}

tree::TerminalNode* TemplateStringParser::IdentifierContext::RAW_ESCAPE() {
  return getToken(TemplateStringParser::RAW_ESCAPE, 0);
}


size_t TemplateStringParser::IdentifierContext::getRuleIndex() const {
  return TemplateStringParser::RuleIdentifier;
}

void TemplateStringParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TemplateStringListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void TemplateStringParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TemplateStringListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}


antlrcpp::Any TemplateStringParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TemplateStringVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

TemplateStringParser::IdentifierContext* TemplateStringParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 8, TemplateStringParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(31);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TemplateStringParser::NON_KEYWORD_IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(28);
        dynamic_cast<IdentifierContext *>(_localctx)->nki = match(TemplateStringParser::NON_KEYWORD_IDENTIFIER);
        break;
      }

      case TemplateStringParser::RAW_ESCAPE: {
        enterOuterAlt(_localctx, 2);
        setState(29);
        match(TemplateStringParser::RAW_ESCAPE);
        setState(30);
        dynamic_cast<IdentifierContext *>(_localctx)->nki = match(TemplateStringParser::NON_KEYWORD_IDENTIFIER);
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
std::vector<dfa::DFA> TemplateStringParser::_decisionToDFA;
atn::PredictionContextCache TemplateStringParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN TemplateStringParser::_atn;
std::vector<uint16_t> TemplateStringParser::_serializedATN;

std::vector<std::string> TemplateStringParser::_ruleNames = {
  "tmpl", "taggedStatement", "statement", "text", "identifier"
};

std::vector<std::string> TemplateStringParser::_literalNames = {
  "", "'<%'", "'%>'", "", "'r#'"
};

std::vector<std::string> TemplateStringParser::_symbolicNames = {
  "", "", "", "NON_KEYWORD_IDENTIFIER", "RAW_ESCAPE", "COMMENT", "TAG", 
  "TEXT"
};

dfa::Vocabulary TemplateStringParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> TemplateStringParser::_tokenNames;

TemplateStringParser::Initializer::Initializer() {
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
    0x3, 0x9, 0x24, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x5, 0x2, 0x10, 0xa, 0x2, 0x7, 0x2, 0x12, 0xa, 0x2, 0xc, 0x2, 0xe, 
    0x2, 0x15, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 
    0x22, 0xa, 0x6, 0x3, 0x6, 0x2, 0x2, 0x7, 0x2, 0x4, 0x6, 0x8, 0xa, 0x2, 
    0x2, 0x2, 0x21, 0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 0x4, 0x16, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x8, 0x1c, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x21, 0x3, 0x2, 0x2, 0x2, 0xc, 0xd, 0x5, 0x8, 0x5, 0x2, 0xd, 0xf, 
    0x5, 0x4, 0x3, 0x2, 0xe, 0x10, 0x5, 0x8, 0x5, 0x2, 0xf, 0xe, 0x3, 0x2, 
    0x2, 0x2, 0xf, 0x10, 0x3, 0x2, 0x2, 0x2, 0x10, 0x12, 0x3, 0x2, 0x2, 
    0x2, 0x11, 0xc, 0x3, 0x2, 0x2, 0x2, 0x12, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x13, 0x11, 0x3, 0x2, 0x2, 0x2, 0x13, 0x14, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x15, 0x13, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 
    0x7, 0x3, 0x2, 0x2, 0x17, 0x18, 0x5, 0x6, 0x4, 0x2, 0x18, 0x19, 0x7, 
    0x4, 0x2, 0x2, 0x19, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x5, 0xa, 
    0x6, 0x2, 0x1b, 0x7, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 0x7, 0x9, 0x2, 
    0x2, 0x1d, 0x9, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x22, 0x7, 0x5, 0x2, 0x2, 
    0x1f, 0x20, 0x7, 0x6, 0x2, 0x2, 0x20, 0x22, 0x7, 0x5, 0x2, 0x2, 0x21, 
    0x1e, 0x3, 0x2, 0x2, 0x2, 0x21, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x22, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x5, 0xf, 0x13, 0x21, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

TemplateStringParser::Initializer TemplateStringParser::_init;
