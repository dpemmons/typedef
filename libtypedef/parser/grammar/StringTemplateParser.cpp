
// Generated from ./libtypedef/parser/grammar/StringTemplate.g4 by ANTLR 4.7.2


#include "StringTemplateListener.h"
#include "StringTemplateVisitor.h"

#include "StringTemplateParser.h"


using namespace antlrcpp;
using namespace antlr4;

StringTemplateParser::StringTemplateParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

StringTemplateParser::~StringTemplateParser() {
  delete _interpreter;
}

std::string StringTemplateParser::getGrammarFileName() const {
  return "StringTemplate.g4";
}

const std::vector<std::string>& StringTemplateParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& StringTemplateParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- TmplContext ------------------------------------------------------------------

StringTemplateParser::TmplContext::TmplContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<StringTemplateParser::TextContext *> StringTemplateParser::TmplContext::text() {
  return getRuleContexts<StringTemplateParser::TextContext>();
}

StringTemplateParser::TextContext* StringTemplateParser::TmplContext::text(size_t i) {
  return getRuleContext<StringTemplateParser::TextContext>(i);
}

std::vector<StringTemplateParser::TaggedStatementContext *> StringTemplateParser::TmplContext::taggedStatement() {
  return getRuleContexts<StringTemplateParser::TaggedStatementContext>();
}

StringTemplateParser::TaggedStatementContext* StringTemplateParser::TmplContext::taggedStatement(size_t i) {
  return getRuleContext<StringTemplateParser::TaggedStatementContext>(i);
}


size_t StringTemplateParser::TmplContext::getRuleIndex() const {
  return StringTemplateParser::RuleTmpl;
}

void StringTemplateParser::TmplContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StringTemplateListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTmpl(this);
}

void StringTemplateParser::TmplContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StringTemplateListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTmpl(this);
}


antlrcpp::Any StringTemplateParser::TmplContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StringTemplateVisitor*>(visitor))
    return parserVisitor->visitTmpl(this);
  else
    return visitor->visitChildren(this);
}

StringTemplateParser::TmplContext* StringTemplateParser::tmpl() {
  TmplContext *_localctx = _tracker.createInstance<TmplContext>(_ctx, getState());
  enterRule(_localctx, 0, StringTemplateParser::RuleTmpl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(17);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == StringTemplateParser::TEXT) {
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

StringTemplateParser::TaggedStatementContext::TaggedStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

StringTemplateParser::StatementContext* StringTemplateParser::TaggedStatementContext::statement() {
  return getRuleContext<StringTemplateParser::StatementContext>(0);
}


size_t StringTemplateParser::TaggedStatementContext::getRuleIndex() const {
  return StringTemplateParser::RuleTaggedStatement;
}

void StringTemplateParser::TaggedStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StringTemplateListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTaggedStatement(this);
}

void StringTemplateParser::TaggedStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StringTemplateListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTaggedStatement(this);
}


antlrcpp::Any StringTemplateParser::TaggedStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StringTemplateVisitor*>(visitor))
    return parserVisitor->visitTaggedStatement(this);
  else
    return visitor->visitChildren(this);
}

StringTemplateParser::TaggedStatementContext* StringTemplateParser::taggedStatement() {
  TaggedStatementContext *_localctx = _tracker.createInstance<TaggedStatementContext>(_ctx, getState());
  enterRule(_localctx, 2, StringTemplateParser::RuleTaggedStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(20);
    match(StringTemplateParser::T__0);
    setState(21);
    statement();
    setState(22);
    match(StringTemplateParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

StringTemplateParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

StringTemplateParser::IdentifierContext* StringTemplateParser::StatementContext::identifier() {
  return getRuleContext<StringTemplateParser::IdentifierContext>(0);
}


size_t StringTemplateParser::StatementContext::getRuleIndex() const {
  return StringTemplateParser::RuleStatement;
}

void StringTemplateParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StringTemplateListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void StringTemplateParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StringTemplateListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any StringTemplateParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StringTemplateVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

StringTemplateParser::StatementContext* StringTemplateParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, StringTemplateParser::RuleStatement);

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

StringTemplateParser::TextContext::TextContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* StringTemplateParser::TextContext::TEXT() {
  return getToken(StringTemplateParser::TEXT, 0);
}


size_t StringTemplateParser::TextContext::getRuleIndex() const {
  return StringTemplateParser::RuleText;
}

void StringTemplateParser::TextContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StringTemplateListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterText(this);
}

void StringTemplateParser::TextContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StringTemplateListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitText(this);
}


antlrcpp::Any StringTemplateParser::TextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StringTemplateVisitor*>(visitor))
    return parserVisitor->visitText(this);
  else
    return visitor->visitChildren(this);
}

StringTemplateParser::TextContext* StringTemplateParser::text() {
  TextContext *_localctx = _tracker.createInstance<TextContext>(_ctx, getState());
  enterRule(_localctx, 6, StringTemplateParser::RuleText);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(26);
    match(StringTemplateParser::TEXT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

StringTemplateParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* StringTemplateParser::IdentifierContext::NON_KEYWORD_IDENTIFIER() {
  return getToken(StringTemplateParser::NON_KEYWORD_IDENTIFIER, 0);
}

tree::TerminalNode* StringTemplateParser::IdentifierContext::RAW_ESCAPE() {
  return getToken(StringTemplateParser::RAW_ESCAPE, 0);
}


size_t StringTemplateParser::IdentifierContext::getRuleIndex() const {
  return StringTemplateParser::RuleIdentifier;
}

void StringTemplateParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StringTemplateListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void StringTemplateParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StringTemplateListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}


antlrcpp::Any StringTemplateParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StringTemplateVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

StringTemplateParser::IdentifierContext* StringTemplateParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 8, StringTemplateParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(31);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StringTemplateParser::NON_KEYWORD_IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(28);
        dynamic_cast<IdentifierContext *>(_localctx)->nki = match(StringTemplateParser::NON_KEYWORD_IDENTIFIER);
        break;
      }

      case StringTemplateParser::RAW_ESCAPE: {
        enterOuterAlt(_localctx, 2);
        setState(29);
        match(StringTemplateParser::RAW_ESCAPE);
        setState(30);
        dynamic_cast<IdentifierContext *>(_localctx)->nki = match(StringTemplateParser::NON_KEYWORD_IDENTIFIER);
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
std::vector<dfa::DFA> StringTemplateParser::_decisionToDFA;
atn::PredictionContextCache StringTemplateParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN StringTemplateParser::_atn;
std::vector<uint16_t> StringTemplateParser::_serializedATN;

std::vector<std::string> StringTemplateParser::_ruleNames = {
  "tmpl", "taggedStatement", "statement", "text", "identifier"
};

std::vector<std::string> StringTemplateParser::_literalNames = {
  "", "'<%'", "'%>'", "", "'r#'"
};

std::vector<std::string> StringTemplateParser::_symbolicNames = {
  "", "", "", "NON_KEYWORD_IDENTIFIER", "RAW_ESCAPE", "COMMENT", "TAG", 
  "TEXT"
};

dfa::Vocabulary StringTemplateParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> StringTemplateParser::_tokenNames;

StringTemplateParser::Initializer::Initializer() {
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

StringTemplateParser::Initializer StringTemplateParser::_init;
