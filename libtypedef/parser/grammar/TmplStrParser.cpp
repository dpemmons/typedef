
#include "libtypedef/parser/tmpl_str_table.h"


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


#include <memory>
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
  dynamic_cast<TmplContext *>(_localctx)->tbl =  std::make_shared<td::TmplStrTable>();
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(37);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TmplStrParser::OPEN

    || _la == TmplStrParser::TEXT) {
      setState(32);
      dynamic_cast<TmplContext *>(_localctx)->itemContext = item();
      _localctx->tbl->items.push_back(dynamic_cast<TmplContext *>(_localctx)->itemContext->itm);
      setState(39);
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

TmplStrParser::TextItemContext* TmplStrParser::ItemContext::textItem() {
  return getRuleContext<TmplStrParser::TextItemContext>(0);
}

TmplStrParser::InsertionContext* TmplStrParser::ItemContext::insertion() {
  return getRuleContext<TmplStrParser::InsertionContext>(0);
}

TmplStrParser::FunctionCallContext* TmplStrParser::ItemContext::functionCall() {
  return getRuleContext<TmplStrParser::FunctionCallContext>(0);
}

TmplStrParser::ForBlockContext* TmplStrParser::ItemContext::forBlock() {
  return getRuleContext<TmplStrParser::ForBlockContext>(0);
}

TmplStrParser::FullIIfBlockContext* TmplStrParser::ItemContext::fullIIfBlock() {
  return getRuleContext<TmplStrParser::FullIIfBlockContext>(0);
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
  dynamic_cast<ItemContext *>(_localctx)->itm =  std::make_shared<td::TmplStrTable::Item>();

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(55);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(40);
      dynamic_cast<ItemContext *>(_localctx)->textItemContext = textItem();
      _localctx->itm->text = dynamic_cast<ItemContext *>(_localctx)->textItemContext->txt;
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(43);
      dynamic_cast<ItemContext *>(_localctx)->insertionContext = insertion();
      _localctx->itm->insertion = dynamic_cast<ItemContext *>(_localctx)->insertionContext->ins;
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(46);
      dynamic_cast<ItemContext *>(_localctx)->functionCallContext = functionCall();
      _localctx->itm->function_call = dynamic_cast<ItemContext *>(_localctx)->functionCallContext->function_call;
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(49);
      dynamic_cast<ItemContext *>(_localctx)->forBlockContext = forBlock();
      _localctx->itm->for_block = dynamic_cast<ItemContext *>(_localctx)->forBlockContext->for_block;
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(52);
      dynamic_cast<ItemContext *>(_localctx)->fullIIfBlockContext = fullIIfBlock();
      _localctx->itm->if_block  = dynamic_cast<ItemContext *>(_localctx)->fullIIfBlockContext->if_block;
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

//----------------- InsertionContext ------------------------------------------------------------------

TmplStrParser::InsertionContext::InsertionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TmplStrParser::InsertionContext::OPEN() {
  return getToken(TmplStrParser::OPEN, 0);
}

TmplStrParser::IdentifierContext* TmplStrParser::InsertionContext::identifier() {
  return getRuleContext<TmplStrParser::IdentifierContext>(0);
}

tree::TerminalNode* TmplStrParser::InsertionContext::CLOSE() {
  return getToken(TmplStrParser::CLOSE, 0);
}


size_t TmplStrParser::InsertionContext::getRuleIndex() const {
  return TmplStrParser::RuleInsertion;
}

void TmplStrParser::InsertionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInsertion(this);
}

void TmplStrParser::InsertionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInsertion(this);
}


antlrcpp::Any TmplStrParser::InsertionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrParserVisitor*>(visitor))
    return parserVisitor->visitInsertion(this);
  else
    return visitor->visitChildren(this);
}

TmplStrParser::InsertionContext* TmplStrParser::insertion() {
  InsertionContext *_localctx = _tracker.createInstance<InsertionContext>(_ctx, getState());
  enterRule(_localctx, 4, TmplStrParser::RuleInsertion);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(57);
    match(TmplStrParser::OPEN);
    setState(58);
    dynamic_cast<InsertionContext *>(_localctx)->identifierContext = identifier();
    setState(59);
    match(TmplStrParser::CLOSE);

    		dynamic_cast<InsertionContext *>(_localctx)->ins =  std::make_shared<td::TmplStrTable::Insertion>();
    		_localctx->ins->identifier = dynamic_cast<InsertionContext *>(_localctx)->identifierContext->id;
    	
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

TmplStrParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TmplStrParser::FunctionCallContext::OPEN() {
  return getToken(TmplStrParser::OPEN, 0);
}

std::vector<TmplStrParser::IdentifierContext *> TmplStrParser::FunctionCallContext::identifier() {
  return getRuleContexts<TmplStrParser::IdentifierContext>();
}

TmplStrParser::IdentifierContext* TmplStrParser::FunctionCallContext::identifier(size_t i) {
  return getRuleContext<TmplStrParser::IdentifierContext>(i);
}

tree::TerminalNode* TmplStrParser::FunctionCallContext::LPAREN() {
  return getToken(TmplStrParser::LPAREN, 0);
}

tree::TerminalNode* TmplStrParser::FunctionCallContext::RPAREN() {
  return getToken(TmplStrParser::RPAREN, 0);
}

tree::TerminalNode* TmplStrParser::FunctionCallContext::CLOSE() {
  return getToken(TmplStrParser::CLOSE, 0);
}

std::vector<tree::TerminalNode *> TmplStrParser::FunctionCallContext::COMMA() {
  return getTokens(TmplStrParser::COMMA);
}

tree::TerminalNode* TmplStrParser::FunctionCallContext::COMMA(size_t i) {
  return getToken(TmplStrParser::COMMA, i);
}


size_t TmplStrParser::FunctionCallContext::getRuleIndex() const {
  return TmplStrParser::RuleFunctionCall;
}

void TmplStrParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void TmplStrParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}


antlrcpp::Any TmplStrParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

TmplStrParser::FunctionCallContext* TmplStrParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 6, TmplStrParser::RuleFunctionCall);
  dynamic_cast<FunctionCallContext *>(_localctx)->function_call =  std::make_shared<td::TmplStrTable::FunctionCall>();
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    match(TmplStrParser::OPEN);
    setState(63);
    dynamic_cast<FunctionCallContext *>(_localctx)->identifierContext = identifier();
    _localctx->function_call->identifier = dynamic_cast<FunctionCallContext *>(_localctx)->identifierContext->id;
    setState(65);
    match(TmplStrParser::LPAREN);
    setState(69);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TmplStrParser::NON_KEYWORD_IDENTIFIER

    || _la == TmplStrParser::RAW_ESCAPE) {
      setState(66);
      dynamic_cast<FunctionCallContext *>(_localctx)->identifierContext = identifier();
      _localctx->function_call->args.push_back(dynamic_cast<FunctionCallContext *>(_localctx)->identifierContext->id);
    }
    setState(77);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TmplStrParser::COMMA) {
      setState(71);
      match(TmplStrParser::COMMA);
      setState(72);
      dynamic_cast<FunctionCallContext *>(_localctx)->identifierContext = identifier();
      _localctx->function_call->args.push_back(dynamic_cast<FunctionCallContext *>(_localctx)->identifierContext->id);
      setState(79);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(80);
    match(TmplStrParser::RPAREN);
    setState(81);
    match(TmplStrParser::CLOSE);
   
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

TmplStrParser::ForCloseContext* TmplStrParser::ForBlockContext::forClose() {
  return getRuleContext<TmplStrParser::ForCloseContext>(0);
}

tree::TerminalNode* TmplStrParser::ForBlockContext::OPEN() {
  return getToken(TmplStrParser::OPEN, 0);
}

tree::TerminalNode* TmplStrParser::ForBlockContext::KW_FOR() {
  return getToken(TmplStrParser::KW_FOR, 0);
}

std::vector<TmplStrParser::IdentifierContext *> TmplStrParser::ForBlockContext::identifier() {
  return getRuleContexts<TmplStrParser::IdentifierContext>();
}

TmplStrParser::IdentifierContext* TmplStrParser::ForBlockContext::identifier(size_t i) {
  return getRuleContext<TmplStrParser::IdentifierContext>(i);
}

tree::TerminalNode* TmplStrParser::ForBlockContext::KW_IN() {
  return getToken(TmplStrParser::KW_IN, 0);
}

tree::TerminalNode* TmplStrParser::ForBlockContext::CLOSE() {
  return getToken(TmplStrParser::CLOSE, 0);
}

std::vector<TmplStrParser::ItemContext *> TmplStrParser::ForBlockContext::item() {
  return getRuleContexts<TmplStrParser::ItemContext>();
}

TmplStrParser::ItemContext* TmplStrParser::ForBlockContext::item(size_t i) {
  return getRuleContext<TmplStrParser::ItemContext>(i);
}

tree::TerminalNode* TmplStrParser::ForBlockContext::COMMA() {
  return getToken(TmplStrParser::COMMA, 0);
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
  enterRule(_localctx, 8, TmplStrParser::RuleForBlock);
  dynamic_cast<ForBlockContext *>(_localctx)->for_block =  std::make_shared<td::TmplStrTable::ForBlock>();
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(83);
    match(TmplStrParser::OPEN);
    setState(84);
    match(TmplStrParser::KW_FOR);
    setState(85);
    dynamic_cast<ForBlockContext *>(_localctx)->identifierContext = identifier();
    _localctx->for_block->loop_variable = dynamic_cast<ForBlockContext *>(_localctx)->identifierContext->id;
    setState(91);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TmplStrParser::COMMA) {
      setState(87);
      match(TmplStrParser::COMMA);
      setState(88);
      dynamic_cast<ForBlockContext *>(_localctx)->identifierContext = identifier();
      _localctx->for_block->loop_variable2 = dynamic_cast<ForBlockContext *>(_localctx)->identifierContext->id;
    }
    setState(93);
    match(TmplStrParser::KW_IN);
    setState(94);
    dynamic_cast<ForBlockContext *>(_localctx)->identifierContext = identifier();
    _localctx->for_block->iterable_identifier = dynamic_cast<ForBlockContext *>(_localctx)->identifierContext->id;
    		
    setState(96);
    match(TmplStrParser::CLOSE);
    setState(103);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(98);
        dynamic_cast<ForBlockContext *>(_localctx)->itemContext = item();
        _localctx->for_block->body_items.push_back(dynamic_cast<ForBlockContext *>(_localctx)->itemContext->itm); 
      }
      setState(105);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
    setState(106);
    forClose();
   
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
    setState(108);
    match(TmplStrParser::OPEN);
    setState(109);
    match(TmplStrParser::SLASH);
    setState(110);
    match(TmplStrParser::KW_FOR);
    setState(111);
    match(TmplStrParser::CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FullIIfBlockContext ------------------------------------------------------------------

TmplStrParser::FullIIfBlockContext::FullIIfBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TmplStrParser::IfBlockContext* TmplStrParser::FullIIfBlockContext::ifBlock() {
  return getRuleContext<TmplStrParser::IfBlockContext>(0);
}

TmplStrParser::IfCloseContext* TmplStrParser::FullIIfBlockContext::ifClose() {
  return getRuleContext<TmplStrParser::IfCloseContext>(0);
}

std::vector<TmplStrParser::ElseIfBlockContext *> TmplStrParser::FullIIfBlockContext::elseIfBlock() {
  return getRuleContexts<TmplStrParser::ElseIfBlockContext>();
}

TmplStrParser::ElseIfBlockContext* TmplStrParser::FullIIfBlockContext::elseIfBlock(size_t i) {
  return getRuleContext<TmplStrParser::ElseIfBlockContext>(i);
}

TmplStrParser::ElseBlockContext* TmplStrParser::FullIIfBlockContext::elseBlock() {
  return getRuleContext<TmplStrParser::ElseBlockContext>(0);
}


size_t TmplStrParser::FullIIfBlockContext::getRuleIndex() const {
  return TmplStrParser::RuleFullIIfBlock;
}

void TmplStrParser::FullIIfBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFullIIfBlock(this);
}

void TmplStrParser::FullIIfBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFullIIfBlock(this);
}


antlrcpp::Any TmplStrParser::FullIIfBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrParserVisitor*>(visitor))
    return parserVisitor->visitFullIIfBlock(this);
  else
    return visitor->visitChildren(this);
}

TmplStrParser::FullIIfBlockContext* TmplStrParser::fullIIfBlock() {
  FullIIfBlockContext *_localctx = _tracker.createInstance<FullIIfBlockContext>(_ctx, getState());
  enterRule(_localctx, 12, TmplStrParser::RuleFullIIfBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(113);
    dynamic_cast<FullIIfBlockContext *>(_localctx)->ifBlockContext = ifBlock();
    dynamic_cast<FullIIfBlockContext *>(_localctx)->if_block =  dynamic_cast<FullIIfBlockContext *>(_localctx)->ifBlockContext->if_block;
    setState(120);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(115);
        dynamic_cast<FullIIfBlockContext *>(_localctx)->elseIfBlockContext = elseIfBlock();
        _localctx->if_block->else_ifs.push_back(dynamic_cast<FullIIfBlockContext *>(_localctx)->elseIfBlockContext->else_if_block); 
      }
      setState(122);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
    setState(126);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(123);
      dynamic_cast<FullIIfBlockContext *>(_localctx)->elseBlockContext = elseBlock();
      _localctx->if_block->else_body_items = dynamic_cast<FullIIfBlockContext *>(_localctx)->elseBlockContext->else_body_items;
      break;
    }

    }
    setState(128);
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
    setState(130);
    match(TmplStrParser::OPEN);
    setState(131);
    match(TmplStrParser::KW_IF);
    setState(132);
    dynamic_cast<IfOpenContext *>(_localctx)->identifierContext = identifier();
    setState(133);
    match(TmplStrParser::CLOSE);
    dynamic_cast<IfOpenContext *>(_localctx)->conditional =  dynamic_cast<IfOpenContext *>(_localctx)->identifierContext->id;
   
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

std::vector<TmplStrParser::ItemContext *> TmplStrParser::IfBlockContext::item() {
  return getRuleContexts<TmplStrParser::ItemContext>();
}

TmplStrParser::ItemContext* TmplStrParser::IfBlockContext::item(size_t i) {
  return getRuleContext<TmplStrParser::ItemContext>(i);
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
  enterRule(_localctx, 16, TmplStrParser::RuleIfBlock);
  dynamic_cast<IfBlockContext *>(_localctx)->if_block =  std::make_shared<td::TmplStrTable::IfBlock>();

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(136);
    dynamic_cast<IfBlockContext *>(_localctx)->ifOpenContext = ifOpen();
    _localctx->if_block->conditional_identifier = dynamic_cast<IfBlockContext *>(_localctx)->ifOpenContext->conditional;
    setState(143);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(138);
        dynamic_cast<IfBlockContext *>(_localctx)->itemContext = item();
        _localctx->if_block->body_items.push_back(dynamic_cast<IfBlockContext *>(_localctx)->itemContext->itm); 
      }
      setState(145);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
   
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
  enterRule(_localctx, 18, TmplStrParser::RuleElseIfStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    match(TmplStrParser::OPEN);
    setState(147);
    match(TmplStrParser::KW_ELSE);
    setState(148);
    match(TmplStrParser::KW_IF);
    setState(149);
    dynamic_cast<ElseIfStmtContext *>(_localctx)->identifierContext = identifier();
    setState(150);
    match(TmplStrParser::CLOSE);
    dynamic_cast<ElseIfStmtContext *>(_localctx)->conditional =  dynamic_cast<ElseIfStmtContext *>(_localctx)->identifierContext->id;
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseIfBlockContext ------------------------------------------------------------------

TmplStrParser::ElseIfBlockContext::ElseIfBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TmplStrParser::ElseIfStmtContext* TmplStrParser::ElseIfBlockContext::elseIfStmt() {
  return getRuleContext<TmplStrParser::ElseIfStmtContext>(0);
}

std::vector<TmplStrParser::ItemContext *> TmplStrParser::ElseIfBlockContext::item() {
  return getRuleContexts<TmplStrParser::ItemContext>();
}

TmplStrParser::ItemContext* TmplStrParser::ElseIfBlockContext::item(size_t i) {
  return getRuleContext<TmplStrParser::ItemContext>(i);
}


size_t TmplStrParser::ElseIfBlockContext::getRuleIndex() const {
  return TmplStrParser::RuleElseIfBlock;
}

void TmplStrParser::ElseIfBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseIfBlock(this);
}

void TmplStrParser::ElseIfBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseIfBlock(this);
}


antlrcpp::Any TmplStrParser::ElseIfBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrParserVisitor*>(visitor))
    return parserVisitor->visitElseIfBlock(this);
  else
    return visitor->visitChildren(this);
}

TmplStrParser::ElseIfBlockContext* TmplStrParser::elseIfBlock() {
  ElseIfBlockContext *_localctx = _tracker.createInstance<ElseIfBlockContext>(_ctx, getState());
  enterRule(_localctx, 20, TmplStrParser::RuleElseIfBlock);
  dynamic_cast<ElseIfBlockContext *>(_localctx)->else_if_block =  std::make_shared<td::TmplStrTable::ElseIfBlock>();

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(153);
    dynamic_cast<ElseIfBlockContext *>(_localctx)->elseIfStmtContext = elseIfStmt();
    _localctx->else_if_block->conditional_identifier = dynamic_cast<ElseIfBlockContext *>(_localctx)->elseIfStmtContext->conditional;
    setState(160);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(155);
        dynamic_cast<ElseIfBlockContext *>(_localctx)->itemContext = item();
        _localctx->else_if_block->body_items.push_back(dynamic_cast<ElseIfBlockContext *>(_localctx)->itemContext->itm); 
      }
      setState(162);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
   
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
  enterRule(_localctx, 22, TmplStrParser::RuleElseStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    match(TmplStrParser::OPEN);
    setState(164);
    match(TmplStrParser::KW_ELSE);
    setState(165);
    match(TmplStrParser::CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseBlockContext ------------------------------------------------------------------

TmplStrParser::ElseBlockContext::ElseBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TmplStrParser::ElseStmtContext* TmplStrParser::ElseBlockContext::elseStmt() {
  return getRuleContext<TmplStrParser::ElseStmtContext>(0);
}

std::vector<TmplStrParser::ItemContext *> TmplStrParser::ElseBlockContext::item() {
  return getRuleContexts<TmplStrParser::ItemContext>();
}

TmplStrParser::ItemContext* TmplStrParser::ElseBlockContext::item(size_t i) {
  return getRuleContext<TmplStrParser::ItemContext>(i);
}


size_t TmplStrParser::ElseBlockContext::getRuleIndex() const {
  return TmplStrParser::RuleElseBlock;
}

void TmplStrParser::ElseBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseBlock(this);
}

void TmplStrParser::ElseBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseBlock(this);
}


antlrcpp::Any TmplStrParser::ElseBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrParserVisitor*>(visitor))
    return parserVisitor->visitElseBlock(this);
  else
    return visitor->visitChildren(this);
}

TmplStrParser::ElseBlockContext* TmplStrParser::elseBlock() {
  ElseBlockContext *_localctx = _tracker.createInstance<ElseBlockContext>(_ctx, getState());
  enterRule(_localctx, 24, TmplStrParser::RuleElseBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(167);
    elseStmt();
    setState(173);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(168);
        dynamic_cast<ElseBlockContext *>(_localctx)->itemContext = item();
        _localctx->else_body_items.push_back(dynamic_cast<ElseBlockContext *>(_localctx)->itemContext->itm); 
      }
      setState(175);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
   
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
  enterRule(_localctx, 26, TmplStrParser::RuleIfClose);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    match(TmplStrParser::OPEN);
    setState(177);
    match(TmplStrParser::SLASH);
    setState(178);
    match(TmplStrParser::KW_IF);
    setState(179);
    match(TmplStrParser::CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TextItemContext ------------------------------------------------------------------

TmplStrParser::TextItemContext::TextItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TmplStrParser::TextItemContext::TEXT() {
  return getToken(TmplStrParser::TEXT, 0);
}


size_t TmplStrParser::TextItemContext::getRuleIndex() const {
  return TmplStrParser::RuleTextItem;
}

void TmplStrParser::TextItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTextItem(this);
}

void TmplStrParser::TextItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TmplStrParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTextItem(this);
}


antlrcpp::Any TmplStrParser::TextItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TmplStrParserVisitor*>(visitor))
    return parserVisitor->visitTextItem(this);
  else
    return visitor->visitChildren(this);
}

TmplStrParser::TextItemContext* TmplStrParser::textItem() {
  TextItemContext *_localctx = _tracker.createInstance<TextItemContext>(_ctx, getState());
  enterRule(_localctx, 28, TmplStrParser::RuleTextItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    dynamic_cast<TextItemContext *>(_localctx)->textToken = match(TmplStrParser::TEXT);
    dynamic_cast<TextItemContext *>(_localctx)->txt =  std::make_shared<std::string>(dynamic_cast<TextItemContext *>(_localctx)->textToken->getText());
   
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

tree::TerminalNode* TmplStrParser::IdentifierContext::RAW_ESCAPE() {
  return getToken(TmplStrParser::RAW_ESCAPE, 0);
}

tree::TerminalNode* TmplStrParser::IdentifierContext::NON_KEYWORD_IDENTIFIER() {
  return getToken(TmplStrParser::NON_KEYWORD_IDENTIFIER, 0);
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
  enterRule(_localctx, 30, TmplStrParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(187);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TmplStrParser::NON_KEYWORD_IDENTIFIER: {
        setState(184);
        dynamic_cast<IdentifierContext *>(_localctx)->nki = match(TmplStrParser::NON_KEYWORD_IDENTIFIER);
        break;
      }

      case TmplStrParser::RAW_ESCAPE: {
        setState(185);
        match(TmplStrParser::RAW_ESCAPE);
        setState(186);
        dynamic_cast<IdentifierContext *>(_localctx)->nki = match(TmplStrParser::NON_KEYWORD_IDENTIFIER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    dynamic_cast<IdentifierContext *>(_localctx)->id =  std::make_shared<std::string>(dynamic_cast<IdentifierContext *>(_localctx)->nki->getText());
   
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
  "tmpl", "item", "insertion", "functionCall", "forBlock", "forClose", "fullIIfBlock", 
  "ifOpen", "ifBlock", "elseIfStmt", "elseIfBlock", "elseStmt", "elseBlock", 
  "ifClose", "textItem", "identifier"
};

std::vector<std::string> TmplStrParser::_literalNames = {
  "", "'<'", "", "'>'", "'/'", "','", "'('", "')'", "'::'", "'for'", "'in'", 
  "'if'", "'else'", "", "'r#'"
};

std::vector<std::string> TmplStrParser::_symbolicNames = {
  "", "OPEN", "TEXT", "CLOSE", "SLASH", "COMMA", "LPAREN", "RPAREN", "PATHSEP", 
  "KW_FOR", "KW_IN", "KW_IF", "KW_ELSE", "NON_KEYWORD_IDENTIFIER", "RAW_ESCAPE", 
  "WS"
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
    0x3, 0x11, 0xc2, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x26, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x29, 
    0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x3a, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x48, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x4e, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x51, 
    0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x5e, 0xa, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x7, 0x6, 0x68, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x6b, 0xb, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x79, 
    0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x7c, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x5, 0x8, 0x81, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x90, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x93, 
    0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 
    0xa1, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0xa4, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 
    0xae, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xb1, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xbe, 0xa, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x2, 0x2, 0x12, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
    0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x2, 0x2, 0x2, 
    0xc0, 0x2, 0x27, 0x3, 0x2, 0x2, 0x2, 0x4, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x8, 0x40, 0x3, 0x2, 0x2, 0x2, 0xa, 0x55, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x6e, 0x3, 0x2, 0x2, 0x2, 0xe, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x84, 0x3, 0x2, 0x2, 0x2, 0x12, 0x8a, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x94, 0x3, 0x2, 0x2, 0x2, 0x16, 0x9b, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0xb2, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x20, 0xbd, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0x5, 0x4, 0x3, 0x2, 0x23, 0x24, 0x8, 
    0x2, 0x1, 0x2, 0x24, 0x26, 0x3, 0x2, 0x2, 0x2, 0x25, 0x22, 0x3, 0x2, 
    0x2, 0x2, 0x26, 0x29, 0x3, 0x2, 0x2, 0x2, 0x27, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0x27, 0x28, 0x3, 0x2, 0x2, 0x2, 0x28, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x29, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x5, 0x1e, 0x10, 0x2, 0x2b, 
    0x2c, 0x8, 0x3, 0x1, 0x2, 0x2c, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 
    0x5, 0x6, 0x4, 0x2, 0x2e, 0x2f, 0x8, 0x3, 0x1, 0x2, 0x2f, 0x3a, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0x31, 0x5, 0x8, 0x5, 0x2, 0x31, 0x32, 0x8, 0x3, 
    0x1, 0x2, 0x32, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x5, 0xa, 0x6, 
    0x2, 0x34, 0x35, 0x8, 0x3, 0x1, 0x2, 0x35, 0x3a, 0x3, 0x2, 0x2, 0x2, 
    0x36, 0x37, 0x5, 0xe, 0x8, 0x2, 0x37, 0x38, 0x8, 0x3, 0x1, 0x2, 0x38, 
    0x3a, 0x3, 0x2, 0x2, 0x2, 0x39, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x39, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x39, 0x30, 0x3, 0x2, 0x2, 0x2, 0x39, 0x33, 0x3, 
    0x2, 0x2, 0x2, 0x39, 0x36, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x3b, 0x3c, 0x7, 0x3, 0x2, 0x2, 0x3c, 0x3d, 0x5, 0x20, 0x11, 
    0x2, 0x3d, 0x3e, 0x7, 0x5, 0x2, 0x2, 0x3e, 0x3f, 0x8, 0x4, 0x1, 0x2, 
    0x3f, 0x7, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x7, 0x3, 0x2, 0x2, 0x41, 
    0x42, 0x5, 0x20, 0x11, 0x2, 0x42, 0x43, 0x8, 0x5, 0x1, 0x2, 0x43, 0x47, 
    0x7, 0x8, 0x2, 0x2, 0x44, 0x45, 0x5, 0x20, 0x11, 0x2, 0x45, 0x46, 0x8, 
    0x5, 0x1, 0x2, 0x46, 0x48, 0x3, 0x2, 0x2, 0x2, 0x47, 0x44, 0x3, 0x2, 
    0x2, 0x2, 0x47, 0x48, 0x3, 0x2, 0x2, 0x2, 0x48, 0x4f, 0x3, 0x2, 0x2, 
    0x2, 0x49, 0x4a, 0x7, 0x7, 0x2, 0x2, 0x4a, 0x4b, 0x5, 0x20, 0x11, 0x2, 
    0x4b, 0x4c, 0x8, 0x5, 0x1, 0x2, 0x4c, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4d, 
    0x49, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x51, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4d, 
    0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x3, 0x2, 0x2, 0x2, 0x50, 0x52, 0x3, 
    0x2, 0x2, 0x2, 0x51, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x7, 0x9, 
    0x2, 0x2, 0x53, 0x54, 0x7, 0x5, 0x2, 0x2, 0x54, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x55, 0x56, 0x7, 0x3, 0x2, 0x2, 0x56, 0x57, 0x7, 0xb, 0x2, 0x2, 
    0x57, 0x58, 0x5, 0x20, 0x11, 0x2, 0x58, 0x5d, 0x8, 0x6, 0x1, 0x2, 0x59, 
    0x5a, 0x7, 0x7, 0x2, 0x2, 0x5a, 0x5b, 0x5, 0x20, 0x11, 0x2, 0x5b, 0x5c, 
    0x8, 0x6, 0x1, 0x2, 0x5c, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x59, 0x3, 
    0x2, 0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x3, 0x2, 
    0x2, 0x2, 0x5f, 0x60, 0x7, 0xc, 0x2, 0x2, 0x60, 0x61, 0x5, 0x20, 0x11, 
    0x2, 0x61, 0x62, 0x8, 0x6, 0x1, 0x2, 0x62, 0x63, 0x7, 0x5, 0x2, 0x2, 
    0x63, 0x69, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x5, 0x4, 0x3, 0x2, 0x65, 
    0x66, 0x8, 0x6, 0x1, 0x2, 0x66, 0x68, 0x3, 0x2, 0x2, 0x2, 0x67, 0x64, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x69, 0x67, 0x3, 
    0x2, 0x2, 0x2, 0x69, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6c, 0x3, 0x2, 
    0x2, 0x2, 0x6b, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x5, 0xc, 0x7, 
    0x2, 0x6d, 0xb, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0x3, 0x2, 0x2, 
    0x6f, 0x70, 0x7, 0x6, 0x2, 0x2, 0x70, 0x71, 0x7, 0xb, 0x2, 0x2, 0x71, 
    0x72, 0x7, 0x5, 0x2, 0x2, 0x72, 0xd, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 
    0x5, 0x12, 0xa, 0x2, 0x74, 0x7a, 0x8, 0x8, 0x1, 0x2, 0x75, 0x76, 0x5, 
    0x16, 0xc, 0x2, 0x76, 0x77, 0x8, 0x8, 0x1, 0x2, 0x77, 0x79, 0x3, 0x2, 
    0x2, 0x2, 0x78, 0x75, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7c, 0x3, 0x2, 0x2, 
    0x2, 0x7a, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 
    0x7b, 0x80, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7d, 
    0x7e, 0x5, 0x1a, 0xe, 0x2, 0x7e, 0x7f, 0x8, 0x8, 0x1, 0x2, 0x7f, 0x81, 
    0x3, 0x2, 0x2, 0x2, 0x80, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x3, 
    0x2, 0x2, 0x2, 0x81, 0x82, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x5, 0x1c, 
    0xf, 0x2, 0x83, 0xf, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 0x7, 0x3, 0x2, 
    0x2, 0x85, 0x86, 0x7, 0xd, 0x2, 0x2, 0x86, 0x87, 0x5, 0x20, 0x11, 0x2, 
    0x87, 0x88, 0x7, 0x5, 0x2, 0x2, 0x88, 0x89, 0x8, 0x9, 0x1, 0x2, 0x89, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x5, 0x10, 0x9, 0x2, 0x8b, 0x91, 
    0x8, 0xa, 0x1, 0x2, 0x8c, 0x8d, 0x5, 0x4, 0x3, 0x2, 0x8d, 0x8e, 0x8, 
    0xa, 0x1, 0x2, 0x8e, 0x90, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x8c, 0x3, 0x2, 
    0x2, 0x2, 0x90, 0x93, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8f, 0x3, 0x2, 0x2, 
    0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x7, 0x3, 0x2, 0x2, 0x95, 
    0x96, 0x7, 0xe, 0x2, 0x2, 0x96, 0x97, 0x7, 0xd, 0x2, 0x2, 0x97, 0x98, 
    0x5, 0x20, 0x11, 0x2, 0x98, 0x99, 0x7, 0x5, 0x2, 0x2, 0x99, 0x9a, 0x8, 
    0xb, 0x1, 0x2, 0x9a, 0x15, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9c, 0x5, 0x14, 
    0xb, 0x2, 0x9c, 0xa2, 0x8, 0xc, 0x1, 0x2, 0x9d, 0x9e, 0x5, 0x4, 0x3, 
    0x2, 0x9e, 0x9f, 0x8, 0xc, 0x1, 0x2, 0x9f, 0xa1, 0x3, 0x2, 0x2, 0x2, 
    0xa0, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa2, 
    0xa0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa3, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0xa4, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x7, 
    0x3, 0x2, 0x2, 0xa6, 0xa7, 0x7, 0xe, 0x2, 0x2, 0xa7, 0xa8, 0x7, 0x5, 
    0x2, 0x2, 0xa8, 0x19, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaf, 0x5, 0x18, 0xd, 
    0x2, 0xaa, 0xab, 0x5, 0x4, 0x3, 0x2, 0xab, 0xac, 0x8, 0xe, 0x1, 0x2, 
    0xac, 0xae, 0x3, 0x2, 0x2, 0x2, 0xad, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xae, 
    0xb1, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xad, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 
    0x3, 0x2, 0x2, 0x2, 0xb0, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xaf, 0x3, 
    0x2, 0x2, 0x2, 0xb2, 0xb3, 0x7, 0x3, 0x2, 0x2, 0xb3, 0xb4, 0x7, 0x6, 
    0x2, 0x2, 0xb4, 0xb5, 0x7, 0xd, 0x2, 0x2, 0xb5, 0xb6, 0x7, 0x5, 0x2, 
    0x2, 0xb6, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x7, 0x4, 0x2, 0x2, 
    0xb8, 0xb9, 0x8, 0x10, 0x1, 0x2, 0xb9, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xba, 
    0xbe, 0x7, 0xf, 0x2, 0x2, 0xbb, 0xbc, 0x7, 0x10, 0x2, 0x2, 0xbc, 0xbe, 
    0x7, 0xf, 0x2, 0x2, 0xbd, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbb, 0x3, 
    0x2, 0x2, 0x2, 0xbe, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x8, 0x11, 
    0x1, 0x2, 0xc0, 0x21, 0x3, 0x2, 0x2, 0x2, 0xe, 0x27, 0x39, 0x47, 0x4f, 
    0x5d, 0x69, 0x7a, 0x80, 0x91, 0xa2, 0xaf, 0xbd, 
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
