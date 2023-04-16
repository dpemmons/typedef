
#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include "parser_helpers.h"
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
    setState(82);
    typedefVersionDeclaration();
    setState(86);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(83);
        match(TypedefParser::WS); 
      }
      setState(88);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(90);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::KW_MODULE) {
      setState(89);
      moduleDeclaration();
    }
    setState(101);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(95);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(92);
          match(TypedefParser::WS);
          setState(97);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(98);
        useDeclaration(); 
      }
      setState(103);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
    setState(113);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
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
        item(); 
      }
      setState(115);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
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

TypedefParser::ValueDefinitionContext* TypedefParser::ItemContext::valueDefinition() {
  return getRuleContext<TypedefParser::ValueDefinitionContext>(0);
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
    enterOuterAlt(_localctx, 1);
    setState(124);
    valueDefinition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueDefinitionContext ------------------------------------------------------------------

TypedefParser::ValueDefinitionContext::ValueDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::ValueDefinitionContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

TypedefParser::PrimitiveFragmentContext* TypedefParser::ValueDefinitionContext::primitiveFragment() {
  return getRuleContext<TypedefParser::PrimitiveFragmentContext>(0);
}

tree::TerminalNode* TypedefParser::ValueDefinitionContext::SEMI() {
  return getToken(TypedefParser::SEMI, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::ValueDefinitionContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::ValueDefinitionContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::ValueDefinitionContext::getRuleIndex() const {
  return TypedefParser::RuleValueDefinition;
}

void TypedefParser::ValueDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValueDefinition(this);
}

void TypedefParser::ValueDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValueDefinition(this);
}


antlrcpp::Any TypedefParser::ValueDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitValueDefinition(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::ValueDefinitionContext* TypedefParser::valueDefinition() {
  ValueDefinitionContext *_localctx = _tracker.createInstance<ValueDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 4, TypedefParser::RuleValueDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(126);
    dynamic_cast<ValueDefinitionContext *>(_localctx)->identifierContext = identifier();
    setState(130);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(127);
        match(TypedefParser::WS); 
      }
      setState(132);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
    setState(133);
    dynamic_cast<ValueDefinitionContext *>(_localctx)->primitiveFragmentContext = primitiveFragment();
    setState(137);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(134);
      match(TypedefParser::WS);
      setState(139);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(140);
    match(TypedefParser::SEMI);

    	if (dynamic_cast<ValueDefinitionContext *>(_localctx)->primitiveFragmentContext->maybe_val) {
    		if (!symbol_table.TryInsert(dynamic_cast<ValueDefinitionContext *>(_localctx)->identifierContext->id, dynamic_cast<ValueDefinitionContext *>(_localctx)->primitiveFragmentContext->maybe_val.value())) {
    			throw DuplicateSymbol(this, dynamic_cast<ValueDefinitionContext *>(_localctx)->identifierContext, dynamic_cast<ValueDefinitionContext *>(_localctx)->identifierContext->NON_KEYWORD_IDENTIFIER()->getSymbol());
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

//----------------- PrimitiveFragmentContext ------------------------------------------------------------------

TypedefParser::PrimitiveFragmentContext::PrimitiveFragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::BoolFragmentContext* TypedefParser::PrimitiveFragmentContext::boolFragment() {
  return getRuleContext<TypedefParser::BoolFragmentContext>(0);
}

TypedefParser::CharFragmentContext* TypedefParser::PrimitiveFragmentContext::charFragment() {
  return getRuleContext<TypedefParser::CharFragmentContext>(0);
}

TypedefParser::StringFragmentContext* TypedefParser::PrimitiveFragmentContext::stringFragment() {
  return getRuleContext<TypedefParser::StringFragmentContext>(0);
}

TypedefParser::F32FragmentContext* TypedefParser::PrimitiveFragmentContext::f32Fragment() {
  return getRuleContext<TypedefParser::F32FragmentContext>(0);
}

TypedefParser::F64FragmentContext* TypedefParser::PrimitiveFragmentContext::f64Fragment() {
  return getRuleContext<TypedefParser::F64FragmentContext>(0);
}

TypedefParser::U8FragmentContext* TypedefParser::PrimitiveFragmentContext::u8Fragment() {
  return getRuleContext<TypedefParser::U8FragmentContext>(0);
}

TypedefParser::U16FragmentContext* TypedefParser::PrimitiveFragmentContext::u16Fragment() {
  return getRuleContext<TypedefParser::U16FragmentContext>(0);
}

TypedefParser::U32FragmentContext* TypedefParser::PrimitiveFragmentContext::u32Fragment() {
  return getRuleContext<TypedefParser::U32FragmentContext>(0);
}

TypedefParser::U64FragmentContext* TypedefParser::PrimitiveFragmentContext::u64Fragment() {
  return getRuleContext<TypedefParser::U64FragmentContext>(0);
}

TypedefParser::I8FragmentContext* TypedefParser::PrimitiveFragmentContext::i8Fragment() {
  return getRuleContext<TypedefParser::I8FragmentContext>(0);
}

TypedefParser::I16FragmentContext* TypedefParser::PrimitiveFragmentContext::i16Fragment() {
  return getRuleContext<TypedefParser::I16FragmentContext>(0);
}

TypedefParser::I32FragmentContext* TypedefParser::PrimitiveFragmentContext::i32Fragment() {
  return getRuleContext<TypedefParser::I32FragmentContext>(0);
}

TypedefParser::I64FragmentContext* TypedefParser::PrimitiveFragmentContext::i64Fragment() {
  return getRuleContext<TypedefParser::I64FragmentContext>(0);
}


size_t TypedefParser::PrimitiveFragmentContext::getRuleIndex() const {
  return TypedefParser::RulePrimitiveFragment;
}

void TypedefParser::PrimitiveFragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimitiveFragment(this);
}

void TypedefParser::PrimitiveFragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimitiveFragment(this);
}


antlrcpp::Any TypedefParser::PrimitiveFragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitPrimitiveFragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::PrimitiveFragmentContext* TypedefParser::primitiveFragment() {
  PrimitiveFragmentContext *_localctx = _tracker.createInstance<PrimitiveFragmentContext>(_ctx, getState());
  enterRule(_localctx, 6, TypedefParser::RulePrimitiveFragment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(143);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->boolFragmentContext = boolFragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->boolFragmentContext->literal->maybe_val;
      break;
    }

    case 2: {
      setState(146);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->charFragmentContext = charFragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->charFragmentContext->literal->maybe_val;
      break;
    }

    case 3: {
      setState(149);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->stringFragmentContext = stringFragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->stringFragmentContext->literal->maybe_val;
      break;
    }

    case 4: {
      setState(152);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->f32FragmentContext = f32Fragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->f32FragmentContext->literal->maybe_val;
      break;
    }

    case 5: {
      setState(155);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->f64FragmentContext = f64Fragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->f64FragmentContext->literal->maybe_val;
      break;
    }

    case 6: {
      setState(158);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->u8FragmentContext = u8Fragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->u8FragmentContext->literal->maybe_val;
      break;
    }

    case 7: {
      setState(161);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->u16FragmentContext = u16Fragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->u16FragmentContext->literal->maybe_val;
      break;
    }

    case 8: {
      setState(164);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->u32FragmentContext = u32Fragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->u32FragmentContext->literal->maybe_val;
      break;
    }

    case 9: {
      setState(167);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->u64FragmentContext = u64Fragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->u64FragmentContext->literal->maybe_val;
      break;
    }

    case 10: {
      setState(170);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->i8FragmentContext = i8Fragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->i8FragmentContext->literal->maybe_val;
      break;
    }

    case 11: {
      setState(173);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->i16FragmentContext = i16Fragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->i16FragmentContext->literal->maybe_val;
      break;
    }

    case 12: {
      setState(176);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->i32FragmentContext = i32Fragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->i32FragmentContext->literal->maybe_val;
      break;
    }

    case 13: {
      setState(179);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->i64FragmentContext = i64Fragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->i64FragmentContext->literal->maybe_val;
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

//----------------- BoolFragmentContext ------------------------------------------------------------------

TypedefParser::BoolFragmentContext::BoolFragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::BoolFragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::BoolLiteralContext* TypedefParser::BoolFragmentContext::boolLiteral() {
  return getRuleContext<TypedefParser::BoolLiteralContext>(0);
}

tree::TerminalNode* TypedefParser::BoolFragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

tree::TerminalNode* TypedefParser::BoolFragmentContext::KW_BOOL() {
  return getToken(TypedefParser::KW_BOOL, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::BoolFragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::BoolFragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::BoolFragmentContext::getRuleIndex() const {
  return TypedefParser::RuleBoolFragment;
}

void TypedefParser::BoolFragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolFragment(this);
}

void TypedefParser::BoolFragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolFragment(this);
}


antlrcpp::Any TypedefParser::BoolFragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitBoolFragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::BoolFragmentContext* TypedefParser::boolFragment() {
  BoolFragmentContext *_localctx = _tracker.createInstance<BoolFragmentContext>(_ctx, getState());
  enterRule(_localctx, 8, TypedefParser::RuleBoolFragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::COLON) {
      setState(184);
      match(TypedefParser::COLON);
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
      match(TypedefParser::KW_BOOL);
    }
    setState(197);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(194);
      match(TypedefParser::WS);
      setState(199);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(200);
    match(TypedefParser::EQ);
    setState(204);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(201);
      match(TypedefParser::WS);
      setState(206);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(207);
    dynamic_cast<BoolFragmentContext *>(_localctx)->literal = boolLiteral();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharFragmentContext ------------------------------------------------------------------

TypedefParser::CharFragmentContext::CharFragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::CharFragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::CharLiteralContext* TypedefParser::CharFragmentContext::charLiteral() {
  return getRuleContext<TypedefParser::CharLiteralContext>(0);
}

tree::TerminalNode* TypedefParser::CharFragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

tree::TerminalNode* TypedefParser::CharFragmentContext::KW_CHAR() {
  return getToken(TypedefParser::KW_CHAR, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::CharFragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::CharFragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::CharFragmentContext::getRuleIndex() const {
  return TypedefParser::RuleCharFragment;
}

void TypedefParser::CharFragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharFragment(this);
}

void TypedefParser::CharFragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharFragment(this);
}


antlrcpp::Any TypedefParser::CharFragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitCharFragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::CharFragmentContext* TypedefParser::charFragment() {
  CharFragmentContext *_localctx = _tracker.createInstance<CharFragmentContext>(_ctx, getState());
  enterRule(_localctx, 10, TypedefParser::RuleCharFragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(217);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::COLON) {
      setState(209);
      match(TypedefParser::COLON);
      setState(213);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(210);
        match(TypedefParser::WS);
        setState(215);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(216);
      match(TypedefParser::KW_CHAR);
    }
    setState(222);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(219);
      match(TypedefParser::WS);
      setState(224);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(225);
    match(TypedefParser::EQ);
    setState(229);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(226);
      match(TypedefParser::WS);
      setState(231);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(232);
    dynamic_cast<CharFragmentContext *>(_localctx)->literal = charLiteral();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringFragmentContext ------------------------------------------------------------------

TypedefParser::StringFragmentContext::StringFragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::StringFragmentContext::KW_STRING() {
  return getToken(TypedefParser::KW_STRING, 0);
}

tree::TerminalNode* TypedefParser::StringFragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::StringLiteralContext* TypedefParser::StringFragmentContext::stringLiteral() {
  return getRuleContext<TypedefParser::StringLiteralContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::StringFragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::StringFragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::StringFragmentContext::getRuleIndex() const {
  return TypedefParser::RuleStringFragment;
}

void TypedefParser::StringFragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringFragment(this);
}

void TypedefParser::StringFragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringFragment(this);
}


antlrcpp::Any TypedefParser::StringFragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitStringFragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::StringFragmentContext* TypedefParser::stringFragment() {
  StringFragmentContext *_localctx = _tracker.createInstance<StringFragmentContext>(_ctx, getState());
  enterRule(_localctx, 12, TypedefParser::RuleStringFragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(234);
    match(TypedefParser::KW_STRING);
    setState(238);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(235);
      match(TypedefParser::WS);
      setState(240);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(241);
    match(TypedefParser::EQ);
    setState(245);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(242);
      match(TypedefParser::WS);
      setState(247);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(248);
    dynamic_cast<StringFragmentContext *>(_localctx)->literal = stringLiteral();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- F32FragmentContext ------------------------------------------------------------------

TypedefParser::F32FragmentContext::F32FragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::F32FragmentContext::KW_F32() {
  return getToken(TypedefParser::KW_F32, 0);
}

tree::TerminalNode* TypedefParser::F32FragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::F32LiteralContext* TypedefParser::F32FragmentContext::f32Literal() {
  return getRuleContext<TypedefParser::F32LiteralContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::F32FragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::F32FragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::F32FragmentContext::getRuleIndex() const {
  return TypedefParser::RuleF32Fragment;
}

void TypedefParser::F32FragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterF32Fragment(this);
}

void TypedefParser::F32FragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitF32Fragment(this);
}


antlrcpp::Any TypedefParser::F32FragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitF32Fragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::F32FragmentContext* TypedefParser::f32Fragment() {
  F32FragmentContext *_localctx = _tracker.createInstance<F32FragmentContext>(_ctx, getState());
  enterRule(_localctx, 14, TypedefParser::RuleF32Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(250);
    match(TypedefParser::KW_F32);
    setState(254);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(251);
      match(TypedefParser::WS);
      setState(256);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(257);
    match(TypedefParser::EQ);
    setState(261);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(258);
      match(TypedefParser::WS);
      setState(263);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(264);
    dynamic_cast<F32FragmentContext *>(_localctx)->literal = f32Literal();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- F64FragmentContext ------------------------------------------------------------------

TypedefParser::F64FragmentContext::F64FragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::F64FragmentContext::KW_F64() {
  return getToken(TypedefParser::KW_F64, 0);
}

tree::TerminalNode* TypedefParser::F64FragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::F64LiteralContext* TypedefParser::F64FragmentContext::f64Literal() {
  return getRuleContext<TypedefParser::F64LiteralContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::F64FragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::F64FragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::F64FragmentContext::getRuleIndex() const {
  return TypedefParser::RuleF64Fragment;
}

void TypedefParser::F64FragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterF64Fragment(this);
}

void TypedefParser::F64FragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitF64Fragment(this);
}


antlrcpp::Any TypedefParser::F64FragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitF64Fragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::F64FragmentContext* TypedefParser::f64Fragment() {
  F64FragmentContext *_localctx = _tracker.createInstance<F64FragmentContext>(_ctx, getState());
  enterRule(_localctx, 16, TypedefParser::RuleF64Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(266);
    match(TypedefParser::KW_F64);
    setState(270);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(267);
      match(TypedefParser::WS);
      setState(272);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(273);
    match(TypedefParser::EQ);
    setState(277);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(274);
      match(TypedefParser::WS);
      setState(279);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(280);
    dynamic_cast<F64FragmentContext *>(_localctx)->literal = f64Literal();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- U8FragmentContext ------------------------------------------------------------------

TypedefParser::U8FragmentContext::U8FragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::U8FragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::U8FragmentContext::KW_U8() {
  return getTokens(TypedefParser::KW_U8);
}

tree::TerminalNode* TypedefParser::U8FragmentContext::KW_U8(size_t i) {
  return getToken(TypedefParser::KW_U8, i);
}

tree::TerminalNode* TypedefParser::U8FragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::U8LiteralContext* TypedefParser::U8FragmentContext::u8Literal() {
  return getRuleContext<TypedefParser::U8LiteralContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::U8FragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::U8FragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::U8FragmentContext::getRuleIndex() const {
  return TypedefParser::RuleU8Fragment;
}

void TypedefParser::U8FragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterU8Fragment(this);
}

void TypedefParser::U8FragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitU8Fragment(this);
}


antlrcpp::Any TypedefParser::U8FragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitU8Fragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::U8FragmentContext* TypedefParser::u8Fragment() {
  U8FragmentContext *_localctx = _tracker.createInstance<U8FragmentContext>(_ctx, getState());
  enterRule(_localctx, 18, TypedefParser::RuleU8Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(317);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(282);
        match(TypedefParser::COLON);
        setState(286);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(283);
          match(TypedefParser::WS);
          setState(288);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(289);
        match(TypedefParser::KW_U8);
        setState(293);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(290);
          match(TypedefParser::WS);
          setState(295);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(296);
        match(TypedefParser::EQ);
        setState(300);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(297);
          match(TypedefParser::WS);
          setState(302);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(303);
        dynamic_cast<U8FragmentContext *>(_localctx)->literal = u8Literal();
        setState(305);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_U8) {
          setState(304);
          match(TypedefParser::KW_U8);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(307);
        match(TypedefParser::EQ);
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
        dynamic_cast<U8FragmentContext *>(_localctx)->literal = u8Literal();
        setState(315);
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

//----------------- U16FragmentContext ------------------------------------------------------------------

TypedefParser::U16FragmentContext::U16FragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::U16FragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::U16FragmentContext::KW_U16() {
  return getTokens(TypedefParser::KW_U16);
}

tree::TerminalNode* TypedefParser::U16FragmentContext::KW_U16(size_t i) {
  return getToken(TypedefParser::KW_U16, i);
}

tree::TerminalNode* TypedefParser::U16FragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::U16LiteralContext* TypedefParser::U16FragmentContext::u16Literal() {
  return getRuleContext<TypedefParser::U16LiteralContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::U16FragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::U16FragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::U16FragmentContext::getRuleIndex() const {
  return TypedefParser::RuleU16Fragment;
}

void TypedefParser::U16FragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterU16Fragment(this);
}

void TypedefParser::U16FragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitU16Fragment(this);
}


antlrcpp::Any TypedefParser::U16FragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitU16Fragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::U16FragmentContext* TypedefParser::u16Fragment() {
  U16FragmentContext *_localctx = _tracker.createInstance<U16FragmentContext>(_ctx, getState());
  enterRule(_localctx, 20, TypedefParser::RuleU16Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(354);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(319);
        match(TypedefParser::COLON);
        setState(323);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(320);
          match(TypedefParser::WS);
          setState(325);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(326);
        match(TypedefParser::KW_U16);
        setState(330);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(327);
          match(TypedefParser::WS);
          setState(332);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(333);
        match(TypedefParser::EQ);
        setState(337);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(334);
          match(TypedefParser::WS);
          setState(339);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(340);
        dynamic_cast<U16FragmentContext *>(_localctx)->literal = u16Literal();
        setState(342);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_U16) {
          setState(341);
          match(TypedefParser::KW_U16);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(344);
        match(TypedefParser::EQ);
        setState(348);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(345);
          match(TypedefParser::WS);
          setState(350);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(351);
        dynamic_cast<U16FragmentContext *>(_localctx)->literal = u16Literal();
        setState(352);
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

//----------------- U32FragmentContext ------------------------------------------------------------------

TypedefParser::U32FragmentContext::U32FragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::U32FragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::U32FragmentContext::KW_U32() {
  return getTokens(TypedefParser::KW_U32);
}

tree::TerminalNode* TypedefParser::U32FragmentContext::KW_U32(size_t i) {
  return getToken(TypedefParser::KW_U32, i);
}

tree::TerminalNode* TypedefParser::U32FragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::U32LiteralContext* TypedefParser::U32FragmentContext::u32Literal() {
  return getRuleContext<TypedefParser::U32LiteralContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::U32FragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::U32FragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::U32FragmentContext::getRuleIndex() const {
  return TypedefParser::RuleU32Fragment;
}

void TypedefParser::U32FragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterU32Fragment(this);
}

void TypedefParser::U32FragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitU32Fragment(this);
}


antlrcpp::Any TypedefParser::U32FragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitU32Fragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::U32FragmentContext* TypedefParser::u32Fragment() {
  U32FragmentContext *_localctx = _tracker.createInstance<U32FragmentContext>(_ctx, getState());
  enterRule(_localctx, 22, TypedefParser::RuleU32Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(391);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(356);
        match(TypedefParser::COLON);
        setState(360);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(357);
          match(TypedefParser::WS);
          setState(362);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(363);
        match(TypedefParser::KW_U32);
        setState(367);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(364);
          match(TypedefParser::WS);
          setState(369);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(370);
        match(TypedefParser::EQ);
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
        dynamic_cast<U32FragmentContext *>(_localctx)->literal = u32Literal();
        setState(379);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_U32) {
          setState(378);
          match(TypedefParser::KW_U32);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(381);
        match(TypedefParser::EQ);
        setState(385);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(382);
          match(TypedefParser::WS);
          setState(387);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(388);
        dynamic_cast<U32FragmentContext *>(_localctx)->literal = u32Literal();
        setState(389);
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

//----------------- U64FragmentContext ------------------------------------------------------------------

TypedefParser::U64FragmentContext::U64FragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::U64FragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::U64FragmentContext::KW_U64() {
  return getTokens(TypedefParser::KW_U64);
}

tree::TerminalNode* TypedefParser::U64FragmentContext::KW_U64(size_t i) {
  return getToken(TypedefParser::KW_U64, i);
}

tree::TerminalNode* TypedefParser::U64FragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::U64LiteralContext* TypedefParser::U64FragmentContext::u64Literal() {
  return getRuleContext<TypedefParser::U64LiteralContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::U64FragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::U64FragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::U64FragmentContext::getRuleIndex() const {
  return TypedefParser::RuleU64Fragment;
}

void TypedefParser::U64FragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterU64Fragment(this);
}

void TypedefParser::U64FragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitU64Fragment(this);
}


antlrcpp::Any TypedefParser::U64FragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitU64Fragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::U64FragmentContext* TypedefParser::u64Fragment() {
  U64FragmentContext *_localctx = _tracker.createInstance<U64FragmentContext>(_ctx, getState());
  enterRule(_localctx, 24, TypedefParser::RuleU64Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(428);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(393);
        match(TypedefParser::COLON);
        setState(397);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(394);
          match(TypedefParser::WS);
          setState(399);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(400);
        match(TypedefParser::KW_U64);
        setState(404);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(401);
          match(TypedefParser::WS);
          setState(406);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(407);
        match(TypedefParser::EQ);
        setState(411);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(408);
          match(TypedefParser::WS);
          setState(413);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(414);
        dynamic_cast<U64FragmentContext *>(_localctx)->literal = u64Literal();
        setState(416);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_U64) {
          setState(415);
          match(TypedefParser::KW_U64);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(418);
        match(TypedefParser::EQ);
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
        dynamic_cast<U64FragmentContext *>(_localctx)->literal = u64Literal();
        setState(426);
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

//----------------- I8FragmentContext ------------------------------------------------------------------

TypedefParser::I8FragmentContext::I8FragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::I8FragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::I8FragmentContext::KW_I8() {
  return getTokens(TypedefParser::KW_I8);
}

tree::TerminalNode* TypedefParser::I8FragmentContext::KW_I8(size_t i) {
  return getToken(TypedefParser::KW_I8, i);
}

tree::TerminalNode* TypedefParser::I8FragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::I8LiteralContext* TypedefParser::I8FragmentContext::i8Literal() {
  return getRuleContext<TypedefParser::I8LiteralContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::I8FragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::I8FragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::I8FragmentContext::getRuleIndex() const {
  return TypedefParser::RuleI8Fragment;
}

void TypedefParser::I8FragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterI8Fragment(this);
}

void TypedefParser::I8FragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitI8Fragment(this);
}


antlrcpp::Any TypedefParser::I8FragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitI8Fragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::I8FragmentContext* TypedefParser::i8Fragment() {
  I8FragmentContext *_localctx = _tracker.createInstance<I8FragmentContext>(_ctx, getState());
  enterRule(_localctx, 26, TypedefParser::RuleI8Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(465);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(430);
        match(TypedefParser::COLON);
        setState(434);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(431);
          match(TypedefParser::WS);
          setState(436);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(437);
        match(TypedefParser::KW_I8);
        setState(441);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(438);
          match(TypedefParser::WS);
          setState(443);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(444);
        match(TypedefParser::EQ);
        setState(448);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(445);
          match(TypedefParser::WS);
          setState(450);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(451);
        dynamic_cast<I8FragmentContext *>(_localctx)->literal = i8Literal();
        setState(453);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I8) {
          setState(452);
          match(TypedefParser::KW_I8);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(455);
        match(TypedefParser::EQ);
        setState(459);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(456);
          match(TypedefParser::WS);
          setState(461);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(462);
        dynamic_cast<I8FragmentContext *>(_localctx)->literal = i8Literal();
        setState(463);
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

//----------------- I16FragmentContext ------------------------------------------------------------------

TypedefParser::I16FragmentContext::I16FragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::I16FragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::I16FragmentContext::KW_I16() {
  return getTokens(TypedefParser::KW_I16);
}

tree::TerminalNode* TypedefParser::I16FragmentContext::KW_I16(size_t i) {
  return getToken(TypedefParser::KW_I16, i);
}

tree::TerminalNode* TypedefParser::I16FragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::I16LiteralContext* TypedefParser::I16FragmentContext::i16Literal() {
  return getRuleContext<TypedefParser::I16LiteralContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::I16FragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::I16FragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::I16FragmentContext::getRuleIndex() const {
  return TypedefParser::RuleI16Fragment;
}

void TypedefParser::I16FragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterI16Fragment(this);
}

void TypedefParser::I16FragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitI16Fragment(this);
}


antlrcpp::Any TypedefParser::I16FragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitI16Fragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::I16FragmentContext* TypedefParser::i16Fragment() {
  I16FragmentContext *_localctx = _tracker.createInstance<I16FragmentContext>(_ctx, getState());
  enterRule(_localctx, 28, TypedefParser::RuleI16Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(502);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(467);
        match(TypedefParser::COLON);
        setState(471);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(468);
          match(TypedefParser::WS);
          setState(473);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(474);
        match(TypedefParser::KW_I16);
        setState(478);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(475);
          match(TypedefParser::WS);
          setState(480);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(481);
        match(TypedefParser::EQ);
        setState(485);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(482);
          match(TypedefParser::WS);
          setState(487);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(488);
        dynamic_cast<I16FragmentContext *>(_localctx)->literal = i16Literal();
        setState(490);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I16) {
          setState(489);
          match(TypedefParser::KW_I16);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(492);
        match(TypedefParser::EQ);
        setState(496);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(493);
          match(TypedefParser::WS);
          setState(498);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(499);
        dynamic_cast<I16FragmentContext *>(_localctx)->literal = i16Literal();
        setState(500);
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

//----------------- I32FragmentContext ------------------------------------------------------------------

TypedefParser::I32FragmentContext::I32FragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::I32FragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::I32FragmentContext::KW_I32() {
  return getTokens(TypedefParser::KW_I32);
}

tree::TerminalNode* TypedefParser::I32FragmentContext::KW_I32(size_t i) {
  return getToken(TypedefParser::KW_I32, i);
}

tree::TerminalNode* TypedefParser::I32FragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::I32LiteralContext* TypedefParser::I32FragmentContext::i32Literal() {
  return getRuleContext<TypedefParser::I32LiteralContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::I32FragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::I32FragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::I32FragmentContext::getRuleIndex() const {
  return TypedefParser::RuleI32Fragment;
}

void TypedefParser::I32FragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterI32Fragment(this);
}

void TypedefParser::I32FragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitI32Fragment(this);
}


antlrcpp::Any TypedefParser::I32FragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitI32Fragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::I32FragmentContext* TypedefParser::i32Fragment() {
  I32FragmentContext *_localctx = _tracker.createInstance<I32FragmentContext>(_ctx, getState());
  enterRule(_localctx, 30, TypedefParser::RuleI32Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(540);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(504);
        match(TypedefParser::COLON);
        setState(508);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(505);
          match(TypedefParser::WS);
          setState(510);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(511);
        match(TypedefParser::KW_I32);
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
        dynamic_cast<I32FragmentContext *>(_localctx)->literal = i32Literal();
        setState(527);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I32) {
          setState(526);
          match(TypedefParser::KW_I32);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(529);
        match(TypedefParser::EQ);
        setState(533);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(530);
          match(TypedefParser::WS);
          setState(535);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(536);
        dynamic_cast<I32FragmentContext *>(_localctx)->literal = i32Literal();
        setState(538);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I32) {
          setState(537);
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

//----------------- I64FragmentContext ------------------------------------------------------------------

TypedefParser::I64FragmentContext::I64FragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::I64FragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::I64FragmentContext::KW_I64() {
  return getTokens(TypedefParser::KW_I64);
}

tree::TerminalNode* TypedefParser::I64FragmentContext::KW_I64(size_t i) {
  return getToken(TypedefParser::KW_I64, i);
}

tree::TerminalNode* TypedefParser::I64FragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::I64LiteralContext* TypedefParser::I64FragmentContext::i64Literal() {
  return getRuleContext<TypedefParser::I64LiteralContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::I64FragmentContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::I64FragmentContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::I64FragmentContext::getRuleIndex() const {
  return TypedefParser::RuleI64Fragment;
}

void TypedefParser::I64FragmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterI64Fragment(this);
}

void TypedefParser::I64FragmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitI64Fragment(this);
}


antlrcpp::Any TypedefParser::I64FragmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitI64Fragment(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::I64FragmentContext* TypedefParser::i64Fragment() {
  I64FragmentContext *_localctx = _tracker.createInstance<I64FragmentContext>(_ctx, getState());
  enterRule(_localctx, 32, TypedefParser::RuleI64Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(577);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(542);
        match(TypedefParser::COLON);
        setState(546);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(543);
          match(TypedefParser::WS);
          setState(548);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(549);
        match(TypedefParser::KW_I64);
        setState(553);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(550);
          match(TypedefParser::WS);
          setState(555);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(556);
        match(TypedefParser::EQ);
        setState(560);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(557);
          match(TypedefParser::WS);
          setState(562);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(563);
        dynamic_cast<I64FragmentContext *>(_localctx)->literal = i64Literal();
        setState(565);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I64) {
          setState(564);
          match(TypedefParser::KW_I64);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
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
        dynamic_cast<I64FragmentContext *>(_localctx)->literal = i64Literal();
        setState(575);
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

//----------------- Type_Context ------------------------------------------------------------------

TypedefParser::Type_Context::Type_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::Type_Context::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

TypedefParser::ParameterizedTypeContext* TypedefParser::Type_Context::parameterizedType() {
  return getRuleContext<TypedefParser::ParameterizedTypeContext>(0);
}


size_t TypedefParser::Type_Context::getRuleIndex() const {
  return TypedefParser::RuleType_;
}

void TypedefParser::Type_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_(this);
}

void TypedefParser::Type_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_(this);
}


antlrcpp::Any TypedefParser::Type_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitType_(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::Type_Context* TypedefParser::type_() {
  Type_Context *_localctx = _tracker.createInstance<Type_Context>(_ctx, getState());
  enterRule(_localctx, 34, TypedefParser::RuleType_);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(581);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(579);
      identifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(580);
      parameterizedType();
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

//----------------- ParameterizedTypeContext ------------------------------------------------------------------

TypedefParser::ParameterizedTypeContext::ParameterizedTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypedefParser::IdentifierContext *> TypedefParser::ParameterizedTypeContext::identifier() {
  return getRuleContexts<TypedefParser::IdentifierContext>();
}

TypedefParser::IdentifierContext* TypedefParser::ParameterizedTypeContext::identifier(size_t i) {
  return getRuleContext<TypedefParser::IdentifierContext>(i);
}

tree::TerminalNode* TypedefParser::ParameterizedTypeContext::LT() {
  return getToken(TypedefParser::LT, 0);
}

tree::TerminalNode* TypedefParser::ParameterizedTypeContext::GT() {
  return getToken(TypedefParser::GT, 0);
}

std::vector<TypedefParser::U64LiteralContext *> TypedefParser::ParameterizedTypeContext::u64Literal() {
  return getRuleContexts<TypedefParser::U64LiteralContext>();
}

TypedefParser::U64LiteralContext* TypedefParser::ParameterizedTypeContext::u64Literal(size_t i) {
  return getRuleContext<TypedefParser::U64LiteralContext>(i);
}


size_t TypedefParser::ParameterizedTypeContext::getRuleIndex() const {
  return TypedefParser::RuleParameterizedType;
}

void TypedefParser::ParameterizedTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterizedType(this);
}

void TypedefParser::ParameterizedTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterizedType(this);
}


antlrcpp::Any TypedefParser::ParameterizedTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitParameterizedType(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::ParameterizedTypeContext* TypedefParser::parameterizedType() {
  ParameterizedTypeContext *_localctx = _tracker.createInstance<ParameterizedTypeContext>(_ctx, getState());
  enterRule(_localctx, 36, TypedefParser::RuleParameterizedType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(583);
    identifier();
    setState(584);
    match(TypedefParser::LT);
    setState(587); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(587);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypedefParser::NON_KEYWORD_IDENTIFIER:
        case TypedefParser::RAW_ESCAPE: {
          setState(585);
          identifier();
          break;
        }

        case TypedefParser::DEC_DIGITS:
        case TypedefParser::DEC_DIGITS_UNDERSCORE:
        case TypedefParser::HEX_PREFIX:
        case TypedefParser::OCT_PREFIX:
        case TypedefParser::BIN_PREFIX: {
          setState(586);
          u64Literal();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(589); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 83) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 83)) & ((1ULL << (TypedefParser::NON_KEYWORD_IDENTIFIER - 83))
      | (1ULL << (TypedefParser::DEC_DIGITS - 83))
      | (1ULL << (TypedefParser::DEC_DIGITS_UNDERSCORE - 83))
      | (1ULL << (TypedefParser::HEX_PREFIX - 83))
      | (1ULL << (TypedefParser::OCT_PREFIX - 83))
      | (1ULL << (TypedefParser::BIN_PREFIX - 83))
      | (1ULL << (TypedefParser::RAW_ESCAPE - 83)))) != 0));
    setState(591);
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
  enterRule(_localctx, 38, TypedefParser::RuleTypedefVersionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(593);
    match(TypedefParser::KW_TYPEDEF);
    setState(597);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(594);
      match(TypedefParser::WS);
      setState(599);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(600);
    match(TypedefParser::EQ);
    setState(604);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(601);
      match(TypedefParser::WS);
      setState(606);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(607);
    identifier();
    setState(611);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(608);
      match(TypedefParser::WS);
      setState(613);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(614);
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
  enterRule(_localctx, 40, TypedefParser::RuleModuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(616);
    match(TypedefParser::KW_MODULE);
    setState(617);
    simplePath();
    setState(618);
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
  enterRule(_localctx, 42, TypedefParser::RuleUseDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(620);
    match(TypedefParser::KW_USE);
    setState(621);
    useTree();
    setState(622);
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
  enterRule(_localctx, 44, TypedefParser::RuleUseTree);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(653);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(628);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypedefParser::NON_KEYWORD_IDENTIFIER

      || _la == TypedefParser::RAW_ESCAPE || _la == TypedefParser::PATHSEP) {
        setState(625);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
        case 1: {
          setState(624);
          simplePath();
          break;
        }

        }
        setState(627);
        match(TypedefParser::PATHSEP);
      }
      setState(646);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypedefParser::STAR: {
          setState(630);
          match(TypedefParser::STAR);
          break;
        }

        case TypedefParser::LBRACE: {
          setState(631);
          match(TypedefParser::LBRACE);
          setState(643);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (((((_la - 83) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 83)) & ((1ULL << (TypedefParser::NON_KEYWORD_IDENTIFIER - 83))
            | (1ULL << (TypedefParser::RAW_ESCAPE - 83))
            | (1ULL << (TypedefParser::STAR - 83)))) != 0) || _la == TypedefParser::PATHSEP

          || _la == TypedefParser::LBRACE) {
            setState(632);
            useTree();
            setState(637);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
              if (alt == 1) {
                setState(633);
                match(TypedefParser::COMMA);
                setState(634);
                useTree(); 
              }
              setState(639);
              _errHandler->sync(this);
              alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx);
            }
            setState(641);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == TypedefParser::COMMA) {
              setState(640);
              match(TypedefParser::COMMA);
            }
          }
          setState(645);
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
      setState(648);
      simplePath();
      setState(651);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypedefParser::KW_AS) {
        setState(649);
        match(TypedefParser::KW_AS);
        setState(650);
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
  enterRule(_localctx, 46, TypedefParser::RuleSimplePath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(656);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::PATHSEP) {
      setState(655);
      match(TypedefParser::PATHSEP);
    }
    setState(658);
    identifier();
    setState(663);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(659);
        match(TypedefParser::PATHSEP);
        setState(660);
        identifier(); 
      }
      setState(665);
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
  enterRule(_localctx, 48, TypedefParser::RuleBoolLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(666);
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

//----------------- ByteLiteralContext ------------------------------------------------------------------

TypedefParser::ByteLiteralContext::ByteLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::ByteLiteralContext::BYTE_LITERAL() {
  return getToken(TypedefParser::BYTE_LITERAL, 0);
}


size_t TypedefParser::ByteLiteralContext::getRuleIndex() const {
  return TypedefParser::RuleByteLiteral;
}

void TypedefParser::ByteLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterByteLiteral(this);
}

void TypedefParser::ByteLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitByteLiteral(this);
}


antlrcpp::Any TypedefParser::ByteLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitByteLiteral(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::ByteLiteralContext* TypedefParser::byteLiteral() {
  ByteLiteralContext *_localctx = _tracker.createInstance<ByteLiteralContext>(_ctx, getState());
  enterRule(_localctx, 50, TypedefParser::RuleByteLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(668);
    match(TypedefParser::BYTE_LITERAL);
   
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
  enterRule(_localctx, 52, TypedefParser::RuleCharLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(670);
    match(TypedefParser::CHAR_LITERAL);
   
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
  enterRule(_localctx, 54, TypedefParser::RuleF32Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(672);
    match(TypedefParser::FLOAT_LITERAL);
   
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
  enterRule(_localctx, 56, TypedefParser::RuleF64Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(674);
    match(TypedefParser::FLOAT_LITERAL);
   
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

tree::TerminalNode* TypedefParser::U8LiteralContext::DEC_DIGITS() {
  return getToken(TypedefParser::DEC_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::U8LiteralContext::DEC_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::DEC_DIGITS_UNDERSCORE, 0);
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
  enterRule(_localctx, 58, TypedefParser::RuleU8Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(683);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE: {
        setState(676);
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
        setState(677);
        match(TypedefParser::HEX_PREFIX);
        setState(678);
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
        setState(679);
        match(TypedefParser::OCT_PREFIX);
        setState(680);
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
        setState(681);
        match(TypedefParser::BIN_PREFIX);
        setState(682);
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
   _ctx->stop = _input->LT(-1);

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

tree::TerminalNode* TypedefParser::U16LiteralContext::DEC_DIGITS() {
  return getToken(TypedefParser::DEC_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::U16LiteralContext::DEC_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::DEC_DIGITS_UNDERSCORE, 0);
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
  enterRule(_localctx, 60, TypedefParser::RuleU16Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(692);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE: {
        setState(685);
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
        setState(686);
        match(TypedefParser::HEX_PREFIX);
        setState(687);
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
        setState(688);
        match(TypedefParser::OCT_PREFIX);
        setState(689);
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
        setState(690);
        match(TypedefParser::BIN_PREFIX);
        setState(691);
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
   _ctx->stop = _input->LT(-1);

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

tree::TerminalNode* TypedefParser::U32LiteralContext::DEC_DIGITS() {
  return getToken(TypedefParser::DEC_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::U32LiteralContext::DEC_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::DEC_DIGITS_UNDERSCORE, 0);
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
  enterRule(_localctx, 62, TypedefParser::RuleU32Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(701);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE: {
        setState(694);
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
        setState(695);
        match(TypedefParser::HEX_PREFIX);
        setState(696);
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
        setState(697);
        match(TypedefParser::OCT_PREFIX);
        setState(698);
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
        setState(699);
        match(TypedefParser::BIN_PREFIX);
        setState(700);
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
   _ctx->stop = _input->LT(-1);

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

tree::TerminalNode* TypedefParser::U64LiteralContext::DEC_DIGITS() {
  return getToken(TypedefParser::DEC_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::U64LiteralContext::DEC_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::DEC_DIGITS_UNDERSCORE, 0);
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
  enterRule(_localctx, 64, TypedefParser::RuleU64Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(710);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE: {
        setState(703);
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
        setState(704);
        match(TypedefParser::HEX_PREFIX);
        setState(705);
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
        setState(706);
        match(TypedefParser::OCT_PREFIX);
        setState(707);
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
        setState(708);
        match(TypedefParser::BIN_PREFIX);
        setState(709);
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
   _ctx->stop = _input->LT(-1);

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

tree::TerminalNode* TypedefParser::I8LiteralContext::DEC_DIGITS() {
  return getToken(TypedefParser::DEC_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::I8LiteralContext::DEC_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::DEC_DIGITS_UNDERSCORE, 0);
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
  enterRule(_localctx, 66, TypedefParser::RuleI8Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(719);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE: {
        setState(712);
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
        setState(713);
        match(TypedefParser::HEX_PREFIX);
        setState(714);
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
        setState(715);
        match(TypedefParser::OCT_PREFIX);
        setState(716);
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
        setState(717);
        match(TypedefParser::BIN_PREFIX);
        setState(718);
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
   _ctx->stop = _input->LT(-1);

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

tree::TerminalNode* TypedefParser::I16LiteralContext::DEC_DIGITS() {
  return getToken(TypedefParser::DEC_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::I16LiteralContext::DEC_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::DEC_DIGITS_UNDERSCORE, 0);
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
  enterRule(_localctx, 68, TypedefParser::RuleI16Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(728);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE: {
        setState(721);
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
        setState(722);
        match(TypedefParser::HEX_PREFIX);
        setState(723);
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
        setState(724);
        match(TypedefParser::OCT_PREFIX);
        setState(725);
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
        setState(726);
        match(TypedefParser::BIN_PREFIX);
        setState(727);
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
   _ctx->stop = _input->LT(-1);

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

tree::TerminalNode* TypedefParser::I32LiteralContext::DEC_DIGITS() {
  return getToken(TypedefParser::DEC_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::I32LiteralContext::DEC_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::DEC_DIGITS_UNDERSCORE, 0);
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
  enterRule(_localctx, 70, TypedefParser::RuleI32Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(737);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE: {
        setState(730);
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
        setState(731);
        match(TypedefParser::HEX_PREFIX);
        setState(732);
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
        setState(733);
        match(TypedefParser::OCT_PREFIX);
        setState(734);
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
        setState(735);
        match(TypedefParser::BIN_PREFIX);
        setState(736);
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

tree::TerminalNode* TypedefParser::I64LiteralContext::DEC_DIGITS() {
  return getToken(TypedefParser::DEC_DIGITS, 0);
}

tree::TerminalNode* TypedefParser::I64LiteralContext::DEC_DIGITS_UNDERSCORE() {
  return getToken(TypedefParser::DEC_DIGITS_UNDERSCORE, 0);
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
  enterRule(_localctx, 72, TypedefParser::RuleI64Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(748);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE: {
        setState(741);
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
        setState(742);
        match(TypedefParser::HEX_PREFIX);
        setState(743);
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
        setState(744);
        match(TypedefParser::OCT_PREFIX);
        setState(745);
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
        setState(746);
        match(TypedefParser::BIN_PREFIX);
        setState(747);
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
  enterRule(_localctx, 74, TypedefParser::RuleStringLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(752);
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

//----------------- ByteStringLiteralContext ------------------------------------------------------------------

TypedefParser::ByteStringLiteralContext::ByteStringLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::ByteStringLiteralContext::BYTE_STRING_LITERAL() {
  return getToken(TypedefParser::BYTE_STRING_LITERAL, 0);
}

tree::TerminalNode* TypedefParser::ByteStringLiteralContext::RAW_BYTE_STRING_LITERAL() {
  return getToken(TypedefParser::RAW_BYTE_STRING_LITERAL, 0);
}


size_t TypedefParser::ByteStringLiteralContext::getRuleIndex() const {
  return TypedefParser::RuleByteStringLiteral;
}

void TypedefParser::ByteStringLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterByteStringLiteral(this);
}

void TypedefParser::ByteStringLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitByteStringLiteral(this);
}


antlrcpp::Any TypedefParser::ByteStringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitByteStringLiteral(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::ByteStringLiteralContext* TypedefParser::byteStringLiteral() {
  ByteStringLiteralContext *_localctx = _tracker.createInstance<ByteStringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 76, TypedefParser::RuleByteStringLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(754);
    _la = _input->LA(1);
    if (!(_la == TypedefParser::BYTE_STRING_LITERAL

    || _la == TypedefParser::RAW_BYTE_STRING_LITERAL)) {
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
  enterRule(_localctx, 78, TypedefParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(759);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::NON_KEYWORD_IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(756);
        dynamic_cast<IdentifierContext *>(_localctx)->nki = match(TypedefParser::NON_KEYWORD_IDENTIFIER);
        break;
      }

      case TypedefParser::RAW_ESCAPE: {
        enterOuterAlt(_localctx, 2);
        setState(757);
        match(TypedefParser::RAW_ESCAPE);
        setState(758);
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
    setState(761);
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
      | (1ULL << TypedefParser::KW_TYPEOF)
      | (1ULL << TypedefParser::KW_UNION))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (TypedefParser::KW_UNSAFE - 64))
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
  "compilationUnit", "item", "valueDefinition", "primitiveFragment", "boolFragment", 
  "charFragment", "stringFragment", "f32Fragment", "f64Fragment", "u8Fragment", 
  "u16Fragment", "u32Fragment", "u64Fragment", "i8Fragment", "i16Fragment", 
  "i32Fragment", "i64Fragment", "type_", "parameterizedType", "typedefVersionDeclaration", 
  "moduleDeclaration", "useDeclaration", "useTree", "simplePath", "boolLiteral", 
  "byteLiteral", "charLiteral", "f32Literal", "f64Literal", "u8Literal", 
  "u16Literal", "u32Literal", "u64Literal", "i8Literal", "i16Literal", "i32Literal", 
  "i64Literal", "stringLiteral", "byteStringLiteral", "identifier", "keyword"
};

std::vector<std::string> TypedefParser::_literalNames = {
  "", "'array'", "'as'", "'enum'", "'false'", "'fn'", "'impl'", "'message'", 
  "'module'", "'struct'", "'true'", "'type'", "'typedef'", "'use'", "'variant'", 
  "'vector'", "'and'", "'in'", "'let'", "'not'", "'or'", "'sizeof'", "'this'", 
  "'trait'", "'where'", "'xor'", "'break'", "'continue'", "'default'", "'do'", 
  "'else'", "'for'", "'goto'", "'if'", "'loop'", "'match'", "'move'", "'return'", 
  "'try'", "'while'", "'yield'", "'abstract'", "'auto'", "'const'", "'double'", 
  "'extern'", "'final'", "'float'", "'int'", "'long'", "'macro'", "'mut'", 
  "'override'", "'private'", "'pub'", "'ref'", "'Self'", "'self'", "'signed'", 
  "'static'", "'super'", "'switch'", "'typeof'", "'union'", "'unsafe'", 
  "'unsigned'", "'unsized'", "'virtual'", "'void'", "'volatile'", "'bool'", 
  "'char'", "'string'", "'f32'", "'f64'", "'u8'", "'u16'", "'u32'", "'u64'", 
  "'i8'", "'i16'", "'i32'", "'i64'", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "'0x'", "'0o'", "'0b'", "", "'r#'", "'+'", "'-'", "'*'", "'/'", "'%'", 
  "'^'", "'!'", "'&'", "'|'", "'&&'", "'||'", "'+='", "'-='", "'*='", "'/='", 
  "'%='", "'^='", "'&='", "'|='", "'<<='", "'>>='", "'='", "'=='", "'!='", 
  "'>'", "'<'", "'>='", "'<='", "'@'", "'_'", "'.'", "'..'", "'...'", "','", 
  "';'", "':'", "'::'", "'->'", "'=>'", "'#'", "'$'", "'?'", "'{'", "'}'", 
  "'['", "']'", "'('", "')'"
};

std::vector<std::string> TypedefParser::_symbolicNames = {
  "", "KW_ARRAY", "KW_AS", "KW_ENUM", "KW_FALSE", "KW_FN", "KW_IMPL", "KW_MESSAGE", 
  "KW_MODULE", "KW_STRUCT", "KW_TRUE", "KW_TYPE", "KW_TYPEDEF", "KW_USE", 
  "KW_VARIANT", "KW_VECTOR", "KW_AND", "KW_IN", "KW_LET", "KW_NOT", "KW_OR", 
  "KW_SIZEOF", "KW_THIS", "KW_TRAIT", "KW_WHERE", "KW_XOR", "KW_BREAK", 
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
  "WS", "CHAR_LITERAL", "STRING_LITERAL", "RAW_STRING_LITERAL", "BYTE_LITERAL", 
  "BYTE_STRING_LITERAL", "RAW_BYTE_STRING_LITERAL", "DEC_DIGITS", "DEC_DIGITS_UNDERSCORE", 
  "HEX_DIGITS", "HEX_DIGITS_UNDERSCORE", "OCT_DIGITS", "OCT_DIGITS_UNDERSCORE", 
  "BIN_DIGITS", "BIN_DIGITS_UNDERSCORE", "FLOAT_LITERAL", "OCT_DIGIT", "DEC_DIGIT", 
  "HEX_DIGIT", "HEX_PREFIX", "OCT_PREFIX", "BIN_PREFIX", "LIFETIME_OR_LABEL", 
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
    0x3, 0xa5, 0x2fe, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x3, 0x2, 0x3, 0x2, 0x7, 
    0x2, 0x57, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x5a, 0xb, 0x2, 0x3, 0x2, 0x5, 
    0x2, 0x5d, 0xa, 0x2, 0x3, 0x2, 0x7, 0x2, 0x60, 0xa, 0x2, 0xc, 0x2, 0xe, 
    0x2, 0x63, 0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0x66, 0xa, 0x2, 0xc, 0x2, 0xe, 
    0x2, 0x69, 0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0x6c, 0xa, 0x2, 0xc, 0x2, 0xe, 
    0x2, 0x6f, 0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0x72, 0xa, 0x2, 0xc, 0x2, 0xe, 
    0x2, 0x75, 0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0x78, 0xa, 0x2, 0xc, 0x2, 0xe, 
    0x2, 0x7b, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x7, 0x4, 0x83, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x86, 0xb, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x8a, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x8d, 
    0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x5, 0x5, 0xb9, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0xbd, 
    0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0xc0, 0xb, 0x6, 0x3, 0x6, 0x5, 0x6, 0xc3, 
    0xa, 0x6, 0x3, 0x6, 0x7, 0x6, 0xc6, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0xc9, 
    0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0xcd, 0xa, 0x6, 0xc, 0x6, 0xe, 
    0x6, 0xd0, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 
    0xd6, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0xd9, 0xb, 0x7, 0x3, 0x7, 0x5, 0x7, 
    0xdc, 0xa, 0x7, 0x3, 0x7, 0x7, 0x7, 0xdf, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 
    0xe2, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0xe6, 0xa, 0x7, 0xc, 0x7, 
    0xe, 0x7, 0xe9, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x7, 
    0x8, 0xef, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0xf2, 0xb, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x7, 0x8, 0xf6, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0xf9, 0xb, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0xff, 0xa, 0x9, 0xc, 0x9, 
    0xe, 0x9, 0x102, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x106, 0xa, 
    0x9, 0xc, 0x9, 0xe, 0x9, 0x109, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x7, 0xa, 0x10f, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x112, 0xb, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x116, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 
    0x119, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x11f, 
    0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x122, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 
    0xb, 0x126, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x129, 0xb, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x7, 0xb, 0x12d, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x130, 0xb, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x134, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x7, 0xb, 0x138, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x13b, 0xb, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x140, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x7, 0xc, 0x144, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x147, 0xb, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x7, 0xc, 0x14b, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x14e, 
    0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x152, 0xa, 0xc, 0xc, 0xc, 0xe, 
    0xc, 0x155, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x159, 0xa, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x15d, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x160, 
    0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x165, 0xa, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x7, 0xd, 0x169, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x16c, 
    0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x170, 0xa, 0xd, 0xc, 0xd, 0xe, 
    0xd, 0x173, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x177, 0xa, 0xd, 
    0xc, 0xd, 0xe, 0xd, 0x17a, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x17e, 
    0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x182, 0xa, 0xd, 0xc, 0xd, 0xe, 
    0xd, 0x185, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x18a, 
    0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x18e, 0xa, 0xe, 0xc, 0xe, 0xe, 
    0xe, 0x191, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x195, 0xa, 0xe, 
    0xc, 0xe, 0xe, 0xe, 0x198, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x19c, 
    0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x19f, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 
    0xe, 0x1a3, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x1a7, 0xa, 0xe, 
    0xc, 0xe, 0xe, 0xe, 0x1aa, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 
    0xe, 0x1af, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x1b3, 0xa, 0xf, 
    0xc, 0xf, 0xe, 0xf, 0x1b6, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x1ba, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x1bd, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 
    0xf, 0x1c1, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x1c4, 0xb, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x5, 0xf, 0x1c8, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x1cc, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x1cf, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x5, 0xf, 0x1d4, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x1d8, 
    0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x1db, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x7, 0x10, 0x1df, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x1e2, 0xb, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x1e6, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 
    0x1e9, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x1ed, 0xa, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x1f1, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 
    0x1f4, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x1f9, 
    0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x1fd, 0xa, 0x11, 0xc, 0x11, 
    0xe, 0x11, 0x200, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x204, 
    0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x207, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x7, 0x11, 0x20b, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x20e, 0xb, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x212, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x7, 0x11, 0x216, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x219, 0xb, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x21d, 0xa, 0x11, 0x5, 0x11, 0x21f, 
    0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x223, 0xa, 0x12, 0xc, 0x12, 
    0xe, 0x12, 0x226, 0xb, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x22a, 
    0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x22d, 0xb, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x7, 0x12, 0x231, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x234, 0xb, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x238, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x7, 0x12, 0x23c, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x23f, 0xb, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x244, 0xa, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x5, 0x13, 0x248, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x6, 0x14, 0x24e, 0xa, 0x14, 0xd, 0x14, 0xe, 0x14, 0x24f, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x256, 0xa, 0x15, 
    0xc, 0x15, 0xe, 0x15, 0x259, 0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 
    0x25d, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x260, 0xb, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x7, 0x15, 0x264, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x267, 
    0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x5, 0x18, 
    0x274, 0xa, 0x18, 0x3, 0x18, 0x5, 0x18, 0x277, 0xa, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x27e, 0xa, 0x18, 
    0xc, 0x18, 0xe, 0x18, 0x281, 0xb, 0x18, 0x3, 0x18, 0x5, 0x18, 0x284, 
    0xa, 0x18, 0x5, 0x18, 0x286, 0xa, 0x18, 0x3, 0x18, 0x5, 0x18, 0x289, 
    0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x28e, 0xa, 0x18, 
    0x5, 0x18, 0x290, 0xa, 0x18, 0x3, 0x19, 0x5, 0x19, 0x293, 0xa, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x298, 0xa, 0x19, 0xc, 0x19, 
    0xe, 0x19, 0x29b, 0xb, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x5, 0x1f, 0x2ae, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x2b7, 0xa, 0x20, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 
    0x21, 0x2c0, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x2c9, 0xa, 0x22, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 
    0x23, 0x2d2, 0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x2db, 0xa, 0x24, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 
    0x25, 0x2e4, 0xa, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x2ef, 
    0xa, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 
    0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x2fa, 0xa, 0x29, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x2, 0x2, 0x2b, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
    0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 
    0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 
    0x52, 0x2, 0xa, 0x4, 0x2, 0x6, 0x6, 0xc, 0xc, 0x3, 0x2, 0x65, 0x66, 
    0x3, 0x2, 0x67, 0x68, 0x3, 0x2, 0x69, 0x6a, 0x3, 0x2, 0x6b, 0x6c, 0x3, 
    0x2, 0x60, 0x61, 0x3, 0x2, 0x63, 0x64, 0x5, 0x2, 0x4, 0x8, 0xa, 0xf, 
    0x12, 0x47, 0x2, 0x351, 0x2, 0x54, 0x3, 0x2, 0x2, 0x2, 0x4, 0x7e, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x80, 0x3, 0x2, 0x2, 0x2, 0x8, 0xb8, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0xec, 0x3, 0x2, 0x2, 0x2, 0x10, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x12, 0x10c, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x16, 0x164, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0x189, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1ae, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f8, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x22, 0x243, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0x247, 0x3, 0x2, 0x2, 0x2, 0x26, 0x249, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x253, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x26e, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x30, 0x292, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0x29c, 0x3, 0x2, 0x2, 0x2, 0x34, 0x29e, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x38, 0x2a2, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x2ad, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x2b6, 0x3, 0x2, 0x2, 0x2, 0x40, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x2c8, 0x3, 0x2, 0x2, 0x2, 0x44, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0x46, 0x2da, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x2ee, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x2f4, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x2f9, 0x3, 0x2, 0x2, 0x2, 0x52, 0x2fb, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x58, 0x5, 0x28, 0x15, 0x2, 0x55, 0x57, 0x7, 0x5e, 0x2, 0x2, 
    0x56, 0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x58, 
    0x56, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5c, 
    0x3, 0x2, 0x2, 0x2, 0x5a, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5d, 0x5, 
    0x2a, 0x16, 0x2, 0x5c, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 
    0x2, 0x2, 0x5d, 0x67, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x60, 0x7, 0x5e, 0x2, 
    0x2, 0x5f, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x64, 0x3, 0x2, 0x2, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x64, 0x66, 
    0x5, 0x2c, 0x17, 0x2, 0x65, 0x61, 0x3, 0x2, 0x2, 0x2, 0x66, 0x69, 0x3, 
    0x2, 0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x3, 0x2, 
    0x2, 0x2, 0x68, 0x73, 0x3, 0x2, 0x2, 0x2, 0x69, 0x67, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x6c, 0x7, 0x5e, 0x2, 0x2, 0x6b, 0x6a, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6d, 
    0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x70, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6d, 
    0x3, 0x2, 0x2, 0x2, 0x70, 0x72, 0x5, 0x4, 0x3, 0x2, 0x71, 0x6d, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x75, 0x3, 0x2, 0x2, 0x2, 0x73, 0x71, 0x3, 0x2, 
    0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 0x79, 0x3, 0x2, 0x2, 
    0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 0x76, 0x78, 0x7, 0x5e, 0x2, 0x2, 
    0x77, 0x76, 0x3, 0x2, 0x2, 0x2, 0x78, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x79, 
    0x77, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7c, 
    0x3, 0x2, 0x2, 0x2, 0x7b, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x7, 
    0x2, 0x2, 0x3, 0x7d, 0x3, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x5, 0x6, 
    0x4, 0x2, 0x7f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x80, 0x84, 0x5, 0x50, 0x29, 
    0x2, 0x81, 0x83, 0x7, 0x5e, 0x2, 0x2, 0x82, 0x81, 0x3, 0x2, 0x2, 0x2, 
    0x83, 0x86, 0x3, 0x2, 0x2, 0x2, 0x84, 0x82, 0x3, 0x2, 0x2, 0x2, 0x84, 
    0x85, 0x3, 0x2, 0x2, 0x2, 0x85, 0x87, 0x3, 0x2, 0x2, 0x2, 0x86, 0x84, 
    0x3, 0x2, 0x2, 0x2, 0x87, 0x8b, 0x5, 0x8, 0x5, 0x2, 0x88, 0x8a, 0x7, 
    0x5e, 0x2, 0x2, 0x89, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8d, 0x3, 0x2, 
    0x2, 0x2, 0x8b, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 
    0x2, 0x8c, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8b, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0x8f, 0x7, 0x98, 0x2, 0x2, 0x8f, 0x90, 0x8, 0x4, 0x1, 0x2, 0x90, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x5, 0xa, 0x6, 0x2, 0x92, 0x93, 
    0x8, 0x5, 0x1, 0x2, 0x93, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x5, 
    0xc, 0x7, 0x2, 0x95, 0x96, 0x8, 0x5, 0x1, 0x2, 0x96, 0xb9, 0x3, 0x2, 
    0x2, 0x2, 0x97, 0x98, 0x5, 0xe, 0x8, 0x2, 0x98, 0x99, 0x8, 0x5, 0x1, 
    0x2, 0x99, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x5, 0x10, 0x9, 0x2, 
    0x9b, 0x9c, 0x8, 0x5, 0x1, 0x2, 0x9c, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x9d, 
    0x9e, 0x5, 0x12, 0xa, 0x2, 0x9e, 0x9f, 0x8, 0x5, 0x1, 0x2, 0x9f, 0xb9, 
    0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x14, 0xb, 0x2, 0xa1, 0xa2, 0x8, 
    0x5, 0x1, 0x2, 0xa2, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x5, 0x16, 
    0xc, 0x2, 0xa4, 0xa5, 0x8, 0x5, 0x1, 0x2, 0xa5, 0xb9, 0x3, 0x2, 0x2, 
    0x2, 0xa6, 0xa7, 0x5, 0x18, 0xd, 0x2, 0xa7, 0xa8, 0x8, 0x5, 0x1, 0x2, 
    0xa8, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x5, 0x1a, 0xe, 0x2, 0xaa, 
    0xab, 0x8, 0x5, 0x1, 0x2, 0xab, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 
    0x5, 0x1c, 0xf, 0x2, 0xad, 0xae, 0x8, 0x5, 0x1, 0x2, 0xae, 0xb9, 0x3, 
    0x2, 0x2, 0x2, 0xaf, 0xb0, 0x5, 0x1e, 0x10, 0x2, 0xb0, 0xb1, 0x8, 0x5, 
    0x1, 0x2, 0xb1, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x5, 0x20, 0x11, 
    0x2, 0xb3, 0xb4, 0x8, 0x5, 0x1, 0x2, 0xb4, 0xb9, 0x3, 0x2, 0x2, 0x2, 
    0xb5, 0xb6, 0x5, 0x22, 0x12, 0x2, 0xb6, 0xb7, 0x8, 0x5, 0x1, 0x2, 0xb7, 
    0xb9, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x91, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x94, 
    0x3, 0x2, 0x2, 0x2, 0xb8, 0x97, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x9a, 0x3, 
    0x2, 0x2, 0x2, 0xb8, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xa0, 0x3, 0x2, 
    0x2, 0x2, 0xb8, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xa6, 0x3, 0x2, 0x2, 
    0x2, 0xb8, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xac, 0x3, 0x2, 0x2, 0x2, 
    0xb8, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb8, 
    0xb5, 0x3, 0x2, 0x2, 0x2, 0xb9, 0x9, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbe, 
    0x7, 0x99, 0x2, 0x2, 0xbb, 0xbd, 0x7, 0x5e, 0x2, 0x2, 0xbc, 0xbb, 0x3, 
    0x2, 0x2, 0x2, 0xbd, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbc, 0x3, 0x2, 
    0x2, 0x2, 0xbe, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc1, 0x3, 0x2, 0x2, 
    0x2, 0xc0, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc3, 0x7, 0x48, 0x2, 0x2, 
    0xc2, 0xba, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc3, 
    0xc7, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc6, 0x7, 0x5e, 0x2, 0x2, 0xc5, 0xc4, 
    0x3, 0x2, 0x2, 0x2, 0xc6, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc5, 0x3, 
    0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xca, 0x3, 0x2, 
    0x2, 0x2, 0xc9, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xca, 0xce, 0x7, 0x8b, 0x2, 
    0x2, 0xcb, 0xcd, 0x7, 0x5e, 0x2, 0x2, 0xcc, 0xcb, 0x3, 0x2, 0x2, 0x2, 
    0xcd, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xce, 
    0xcf, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xce, 
    0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x5, 0x32, 0x1a, 0x2, 0xd2, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0xd3, 0xd7, 0x7, 0x99, 0x2, 0x2, 0xd4, 0xd6, 0x7, 0x5e, 
    0x2, 0x2, 0xd5, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd9, 0x3, 0x2, 0x2, 
    0x2, 0xd7, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x3, 0x2, 0x2, 0x2, 
    0xd8, 0xda, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xda, 
    0xdc, 0x7, 0x49, 0x2, 0x2, 0xdb, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 
    0x3, 0x2, 0x2, 0x2, 0xdc, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdf, 0x7, 
    0x5e, 0x2, 0x2, 0xde, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe2, 0x3, 0x2, 
    0x2, 0x2, 0xe0, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x3, 0x2, 0x2, 
    0x2, 0xe1, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe0, 0x3, 0x2, 0x2, 0x2, 
    0xe3, 0xe7, 0x7, 0x8b, 0x2, 0x2, 0xe4, 0xe6, 0x7, 0x5e, 0x2, 0x2, 0xe5, 
    0xe4, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe5, 
    0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xea, 0x3, 
    0x2, 0x2, 0x2, 0xe9, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x5, 0x36, 
    0x1c, 0x2, 0xeb, 0xd, 0x3, 0x2, 0x2, 0x2, 0xec, 0xf0, 0x7, 0x4a, 0x2, 
    0x2, 0xed, 0xef, 0x7, 0x5e, 0x2, 0x2, 0xee, 0xed, 0x3, 0x2, 0x2, 0x2, 
    0xef, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf0, 
    0xf1, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf0, 
    0x3, 0x2, 0x2, 0x2, 0xf3, 0xf7, 0x7, 0x8b, 0x2, 0x2, 0xf4, 0xf6, 0x7, 
    0x5e, 0x2, 0x2, 0xf5, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf9, 0x3, 0x2, 
    0x2, 0x2, 0xf7, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x3, 0x2, 0x2, 
    0x2, 0xf8, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xf7, 0x3, 0x2, 0x2, 0x2, 
    0xfa, 0xfb, 0x5, 0x4c, 0x27, 0x2, 0xfb, 0xf, 0x3, 0x2, 0x2, 0x2, 0xfc, 
    0x100, 0x7, 0x4b, 0x2, 0x2, 0xfd, 0xff, 0x7, 0x5e, 0x2, 0x2, 0xfe, 0xfd, 
    0x3, 0x2, 0x2, 0x2, 0xff, 0x102, 0x3, 0x2, 0x2, 0x2, 0x100, 0xfe, 0x3, 
    0x2, 0x2, 0x2, 0x100, 0x101, 0x3, 0x2, 0x2, 0x2, 0x101, 0x103, 0x3, 
    0x2, 0x2, 0x2, 0x102, 0x100, 0x3, 0x2, 0x2, 0x2, 0x103, 0x107, 0x7, 
    0x8b, 0x2, 0x2, 0x104, 0x106, 0x7, 0x5e, 0x2, 0x2, 0x105, 0x104, 0x3, 
    0x2, 0x2, 0x2, 0x106, 0x109, 0x3, 0x2, 0x2, 0x2, 0x107, 0x105, 0x3, 
    0x2, 0x2, 0x2, 0x107, 0x108, 0x3, 0x2, 0x2, 0x2, 0x108, 0x10a, 0x3, 
    0x2, 0x2, 0x2, 0x109, 0x107, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x5, 
    0x38, 0x1d, 0x2, 0x10b, 0x11, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x110, 0x7, 
    0x4c, 0x2, 0x2, 0x10d, 0x10f, 0x7, 0x5e, 0x2, 0x2, 0x10e, 0x10d, 0x3, 
    0x2, 0x2, 0x2, 0x10f, 0x112, 0x3, 0x2, 0x2, 0x2, 0x110, 0x10e, 0x3, 
    0x2, 0x2, 0x2, 0x110, 0x111, 0x3, 0x2, 0x2, 0x2, 0x111, 0x113, 0x3, 
    0x2, 0x2, 0x2, 0x112, 0x110, 0x3, 0x2, 0x2, 0x2, 0x113, 0x117, 0x7, 
    0x8b, 0x2, 0x2, 0x114, 0x116, 0x7, 0x5e, 0x2, 0x2, 0x115, 0x114, 0x3, 
    0x2, 0x2, 0x2, 0x116, 0x119, 0x3, 0x2, 0x2, 0x2, 0x117, 0x115, 0x3, 
    0x2, 0x2, 0x2, 0x117, 0x118, 0x3, 0x2, 0x2, 0x2, 0x118, 0x11a, 0x3, 
    0x2, 0x2, 0x2, 0x119, 0x117, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 0x5, 
    0x3a, 0x1e, 0x2, 0x11b, 0x13, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x120, 0x7, 
    0x99, 0x2, 0x2, 0x11d, 0x11f, 0x7, 0x5e, 0x2, 0x2, 0x11e, 0x11d, 0x3, 
    0x2, 0x2, 0x2, 0x11f, 0x122, 0x3, 0x2, 0x2, 0x2, 0x120, 0x11e, 0x3, 
    0x2, 0x2, 0x2, 0x120, 0x121, 0x3, 0x2, 0x2, 0x2, 0x121, 0x123, 0x3, 
    0x2, 0x2, 0x2, 0x122, 0x120, 0x3, 0x2, 0x2, 0x2, 0x123, 0x127, 0x7, 
    0x4d, 0x2, 0x2, 0x124, 0x126, 0x7, 0x5e, 0x2, 0x2, 0x125, 0x124, 0x3, 
    0x2, 0x2, 0x2, 0x126, 0x129, 0x3, 0x2, 0x2, 0x2, 0x127, 0x125, 0x3, 
    0x2, 0x2, 0x2, 0x127, 0x128, 0x3, 0x2, 0x2, 0x2, 0x128, 0x12a, 0x3, 
    0x2, 0x2, 0x2, 0x129, 0x127, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12e, 0x7, 
    0x8b, 0x2, 0x2, 0x12b, 0x12d, 0x7, 0x5e, 0x2, 0x2, 0x12c, 0x12b, 0x3, 
    0x2, 0x2, 0x2, 0x12d, 0x130, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12c, 0x3, 
    0x2, 0x2, 0x2, 0x12e, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x131, 0x3, 
    0x2, 0x2, 0x2, 0x130, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x131, 0x133, 0x5, 
    0x3c, 0x1f, 0x2, 0x132, 0x134, 0x7, 0x4d, 0x2, 0x2, 0x133, 0x132, 0x3, 
    0x2, 0x2, 0x2, 0x133, 0x134, 0x3, 0x2, 0x2, 0x2, 0x134, 0x140, 0x3, 
    0x2, 0x2, 0x2, 0x135, 0x139, 0x7, 0x8b, 0x2, 0x2, 0x136, 0x138, 0x7, 
    0x5e, 0x2, 0x2, 0x137, 0x136, 0x3, 0x2, 0x2, 0x2, 0x138, 0x13b, 0x3, 
    0x2, 0x2, 0x2, 0x139, 0x137, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x3, 
    0x2, 0x2, 0x2, 0x13a, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x139, 0x3, 
    0x2, 0x2, 0x2, 0x13c, 0x13d, 0x5, 0x3c, 0x1f, 0x2, 0x13d, 0x13e, 0x7, 
    0x4d, 0x2, 0x2, 0x13e, 0x140, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x11c, 0x3, 
    0x2, 0x2, 0x2, 0x13f, 0x135, 0x3, 0x2, 0x2, 0x2, 0x140, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0x141, 0x145, 0x7, 0x99, 0x2, 0x2, 0x142, 0x144, 0x7, 0x5e, 
    0x2, 0x2, 0x143, 0x142, 0x3, 0x2, 0x2, 0x2, 0x144, 0x147, 0x3, 0x2, 
    0x2, 0x2, 0x145, 0x143, 0x3, 0x2, 0x2, 0x2, 0x145, 0x146, 0x3, 0x2, 
    0x2, 0x2, 0x146, 0x148, 0x3, 0x2, 0x2, 0x2, 0x147, 0x145, 0x3, 0x2, 
    0x2, 0x2, 0x148, 0x14c, 0x7, 0x4e, 0x2, 0x2, 0x149, 0x14b, 0x7, 0x5e, 
    0x2, 0x2, 0x14a, 0x149, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14e, 0x3, 0x2, 
    0x2, 0x2, 0x14c, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14d, 0x3, 0x2, 
    0x2, 0x2, 0x14d, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14c, 0x3, 0x2, 
    0x2, 0x2, 0x14f, 0x153, 0x7, 0x8b, 0x2, 0x2, 0x150, 0x152, 0x7, 0x5e, 
    0x2, 0x2, 0x151, 0x150, 0x3, 0x2, 0x2, 0x2, 0x152, 0x155, 0x3, 0x2, 
    0x2, 0x2, 0x153, 0x151, 0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 0x3, 0x2, 
    0x2, 0x2, 0x154, 0x156, 0x3, 0x2, 0x2, 0x2, 0x155, 0x153, 0x3, 0x2, 
    0x2, 0x2, 0x156, 0x158, 0x5, 0x3e, 0x20, 0x2, 0x157, 0x159, 0x7, 0x4e, 
    0x2, 0x2, 0x158, 0x157, 0x3, 0x2, 0x2, 0x2, 0x158, 0x159, 0x3, 0x2, 
    0x2, 0x2, 0x159, 0x165, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x15e, 0x7, 0x8b, 
    0x2, 0x2, 0x15b, 0x15d, 0x7, 0x5e, 0x2, 0x2, 0x15c, 0x15b, 0x3, 0x2, 
    0x2, 0x2, 0x15d, 0x160, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15c, 0x3, 0x2, 
    0x2, 0x2, 0x15e, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x161, 0x3, 0x2, 
    0x2, 0x2, 0x160, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x161, 0x162, 0x5, 0x3e, 
    0x20, 0x2, 0x162, 0x163, 0x7, 0x4e, 0x2, 0x2, 0x163, 0x165, 0x3, 0x2, 
    0x2, 0x2, 0x164, 0x141, 0x3, 0x2, 0x2, 0x2, 0x164, 0x15a, 0x3, 0x2, 
    0x2, 0x2, 0x165, 0x17, 0x3, 0x2, 0x2, 0x2, 0x166, 0x16a, 0x7, 0x99, 
    0x2, 0x2, 0x167, 0x169, 0x7, 0x5e, 0x2, 0x2, 0x168, 0x167, 0x3, 0x2, 
    0x2, 0x2, 0x169, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x168, 0x3, 0x2, 
    0x2, 0x2, 0x16a, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16d, 0x3, 0x2, 
    0x2, 0x2, 0x16c, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x171, 0x7, 0x4f, 
    0x2, 0x2, 0x16e, 0x170, 0x7, 0x5e, 0x2, 0x2, 0x16f, 0x16e, 0x3, 0x2, 
    0x2, 0x2, 0x170, 0x173, 0x3, 0x2, 0x2, 0x2, 0x171, 0x16f, 0x3, 0x2, 
    0x2, 0x2, 0x171, 0x172, 0x3, 0x2, 0x2, 0x2, 0x172, 0x174, 0x3, 0x2, 
    0x2, 0x2, 0x173, 0x171, 0x3, 0x2, 0x2, 0x2, 0x174, 0x178, 0x7, 0x8b, 
    0x2, 0x2, 0x175, 0x177, 0x7, 0x5e, 0x2, 0x2, 0x176, 0x175, 0x3, 0x2, 
    0x2, 0x2, 0x177, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x178, 0x176, 0x3, 0x2, 
    0x2, 0x2, 0x178, 0x179, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17b, 0x3, 0x2, 
    0x2, 0x2, 0x17a, 0x178, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17d, 0x5, 0x40, 
    0x21, 0x2, 0x17c, 0x17e, 0x7, 0x4f, 0x2, 0x2, 0x17d, 0x17c, 0x3, 0x2, 
    0x2, 0x2, 0x17d, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x18a, 0x3, 0x2, 
    0x2, 0x2, 0x17f, 0x183, 0x7, 0x8b, 0x2, 0x2, 0x180, 0x182, 0x7, 0x5e, 
    0x2, 0x2, 0x181, 0x180, 0x3, 0x2, 0x2, 0x2, 0x182, 0x185, 0x3, 0x2, 
    0x2, 0x2, 0x183, 0x181, 0x3, 0x2, 0x2, 0x2, 0x183, 0x184, 0x3, 0x2, 
    0x2, 0x2, 0x184, 0x186, 0x3, 0x2, 0x2, 0x2, 0x185, 0x183, 0x3, 0x2, 
    0x2, 0x2, 0x186, 0x187, 0x5, 0x40, 0x21, 0x2, 0x187, 0x188, 0x7, 0x4f, 
    0x2, 0x2, 0x188, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x189, 0x166, 0x3, 0x2, 
    0x2, 0x2, 0x189, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x18b, 0x18f, 0x7, 0x99, 0x2, 0x2, 0x18c, 0x18e, 0x7, 0x5e, 0x2, 
    0x2, 0x18d, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x191, 0x3, 0x2, 0x2, 
    0x2, 0x18f, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 0x3, 0x2, 0x2, 
    0x2, 0x190, 0x192, 0x3, 0x2, 0x2, 0x2, 0x191, 0x18f, 0x3, 0x2, 0x2, 
    0x2, 0x192, 0x196, 0x7, 0x50, 0x2, 0x2, 0x193, 0x195, 0x7, 0x5e, 0x2, 
    0x2, 0x194, 0x193, 0x3, 0x2, 0x2, 0x2, 0x195, 0x198, 0x3, 0x2, 0x2, 
    0x2, 0x196, 0x194, 0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 0x3, 0x2, 0x2, 
    0x2, 0x197, 0x199, 0x3, 0x2, 0x2, 0x2, 0x198, 0x196, 0x3, 0x2, 0x2, 
    0x2, 0x199, 0x19d, 0x7, 0x8b, 0x2, 0x2, 0x19a, 0x19c, 0x7, 0x5e, 0x2, 
    0x2, 0x19b, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19f, 0x3, 0x2, 0x2, 
    0x2, 0x19d, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 0x3, 0x2, 0x2, 
    0x2, 0x19e, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x19d, 0x3, 0x2, 0x2, 
    0x2, 0x1a0, 0x1a2, 0x5, 0x42, 0x22, 0x2, 0x1a1, 0x1a3, 0x7, 0x50, 0x2, 
    0x2, 0x1a2, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a3, 0x3, 0x2, 0x2, 
    0x2, 0x1a3, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a8, 0x7, 0x8b, 0x2, 
    0x2, 0x1a5, 0x1a7, 0x7, 0x5e, 0x2, 0x2, 0x1a6, 0x1a5, 0x3, 0x2, 0x2, 
    0x2, 0x1a7, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a6, 0x3, 0x2, 0x2, 
    0x2, 0x1a8, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1ab, 0x3, 0x2, 0x2, 
    0x2, 0x1aa, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x5, 0x42, 0x22, 
    0x2, 0x1ac, 0x1ad, 0x7, 0x50, 0x2, 0x2, 0x1ad, 0x1af, 0x3, 0x2, 0x2, 
    0x2, 0x1ae, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1a4, 0x3, 0x2, 0x2, 
    0x2, 0x1af, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b4, 0x7, 0x99, 0x2, 
    0x2, 0x1b1, 0x1b3, 0x7, 0x5e, 0x2, 0x2, 0x1b2, 0x1b1, 0x3, 0x2, 0x2, 
    0x2, 0x1b3, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b2, 0x3, 0x2, 0x2, 
    0x2, 0x1b4, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b7, 0x3, 0x2, 0x2, 
    0x2, 0x1b6, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1bb, 0x7, 0x51, 0x2, 
    0x2, 0x1b8, 0x1ba, 0x7, 0x5e, 0x2, 0x2, 0x1b9, 0x1b8, 0x3, 0x2, 0x2, 
    0x2, 0x1ba, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1b9, 0x3, 0x2, 0x2, 
    0x2, 0x1bb, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1be, 0x3, 0x2, 0x2, 
    0x2, 0x1bd, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1c2, 0x7, 0x8b, 0x2, 
    0x2, 0x1bf, 0x1c1, 0x7, 0x5e, 0x2, 0x2, 0x1c0, 0x1bf, 0x3, 0x2, 0x2, 
    0x2, 0x1c1, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c0, 0x3, 0x2, 0x2, 
    0x2, 0x1c2, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c5, 0x3, 0x2, 0x2, 
    0x2, 0x1c4, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c7, 0x5, 0x44, 0x23, 
    0x2, 0x1c6, 0x1c8, 0x7, 0x51, 0x2, 0x2, 0x1c7, 0x1c6, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1d4, 0x3, 0x2, 0x2, 
    0x2, 0x1c9, 0x1cd, 0x7, 0x8b, 0x2, 0x2, 0x1ca, 0x1cc, 0x7, 0x5e, 0x2, 
    0x2, 0x1cb, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1cf, 0x3, 0x2, 0x2, 
    0x2, 0x1cd, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1ce, 0x3, 0x2, 0x2, 
    0x2, 0x1ce, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1cd, 0x3, 0x2, 0x2, 
    0x2, 0x1d0, 0x1d1, 0x5, 0x44, 0x23, 0x2, 0x1d1, 0x1d2, 0x7, 0x51, 0x2, 
    0x2, 0x1d2, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1b0, 0x3, 0x2, 0x2, 
    0x2, 0x1d3, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x1d5, 0x1d9, 0x7, 0x99, 0x2, 0x2, 0x1d6, 0x1d8, 0x7, 0x5e, 0x2, 0x2, 
    0x1d7, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1db, 0x3, 0x2, 0x2, 0x2, 
    0x1d9, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1da, 0x3, 0x2, 0x2, 0x2, 
    0x1da, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1d9, 0x3, 0x2, 0x2, 0x2, 
    0x1dc, 0x1e0, 0x7, 0x52, 0x2, 0x2, 0x1dd, 0x1df, 0x7, 0x5e, 0x2, 0x2, 
    0x1de, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e2, 0x3, 0x2, 0x2, 0x2, 
    0x1e0, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e1, 0x3, 0x2, 0x2, 0x2, 
    0x1e1, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e0, 0x3, 0x2, 0x2, 0x2, 
    0x1e3, 0x1e7, 0x7, 0x8b, 0x2, 0x2, 0x1e4, 0x1e6, 0x7, 0x5e, 0x2, 0x2, 
    0x1e5, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e9, 0x3, 0x2, 0x2, 0x2, 
    0x1e7, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e8, 0x3, 0x2, 0x2, 0x2, 
    0x1e8, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1e7, 0x3, 0x2, 0x2, 0x2, 
    0x1ea, 0x1ec, 0x5, 0x46, 0x24, 0x2, 0x1eb, 0x1ed, 0x7, 0x52, 0x2, 0x2, 
    0x1ec, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ed, 0x3, 0x2, 0x2, 0x2, 
    0x1ed, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1f2, 0x7, 0x8b, 0x2, 0x2, 
    0x1ef, 0x1f1, 0x7, 0x5e, 0x2, 0x2, 0x1f0, 0x1ef, 0x3, 0x2, 0x2, 0x2, 
    0x1f1, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f0, 0x3, 0x2, 0x2, 0x2, 
    0x1f2, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f5, 0x3, 0x2, 0x2, 0x2, 
    0x1f4, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f6, 0x5, 0x46, 0x24, 0x2, 
    0x1f6, 0x1f7, 0x7, 0x52, 0x2, 0x2, 0x1f7, 0x1f9, 0x3, 0x2, 0x2, 0x2, 
    0x1f8, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1ee, 0x3, 0x2, 0x2, 0x2, 
    0x1f9, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fe, 0x7, 0x99, 0x2, 0x2, 
    0x1fb, 0x1fd, 0x7, 0x5e, 0x2, 0x2, 0x1fc, 0x1fb, 0x3, 0x2, 0x2, 0x2, 
    0x1fd, 0x200, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1fc, 0x3, 0x2, 0x2, 0x2, 
    0x1fe, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x201, 0x3, 0x2, 0x2, 0x2, 
    0x200, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x201, 0x205, 0x7, 0x53, 0x2, 0x2, 
    0x202, 0x204, 0x7, 0x5e, 0x2, 0x2, 0x203, 0x202, 0x3, 0x2, 0x2, 0x2, 
    0x204, 0x207, 0x3, 0x2, 0x2, 0x2, 0x205, 0x203, 0x3, 0x2, 0x2, 0x2, 
    0x205, 0x206, 0x3, 0x2, 0x2, 0x2, 0x206, 0x208, 0x3, 0x2, 0x2, 0x2, 
    0x207, 0x205, 0x3, 0x2, 0x2, 0x2, 0x208, 0x20c, 0x7, 0x8b, 0x2, 0x2, 
    0x209, 0x20b, 0x7, 0x5e, 0x2, 0x2, 0x20a, 0x209, 0x3, 0x2, 0x2, 0x2, 
    0x20b, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20a, 0x3, 0x2, 0x2, 0x2, 
    0x20c, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20f, 0x3, 0x2, 0x2, 0x2, 
    0x20e, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x211, 0x5, 0x48, 0x25, 0x2, 
    0x210, 0x212, 0x7, 0x53, 0x2, 0x2, 0x211, 0x210, 0x3, 0x2, 0x2, 0x2, 
    0x211, 0x212, 0x3, 0x2, 0x2, 0x2, 0x212, 0x21f, 0x3, 0x2, 0x2, 0x2, 
    0x213, 0x217, 0x7, 0x8b, 0x2, 0x2, 0x214, 0x216, 0x7, 0x5e, 0x2, 0x2, 
    0x215, 0x214, 0x3, 0x2, 0x2, 0x2, 0x216, 0x219, 0x3, 0x2, 0x2, 0x2, 
    0x217, 0x215, 0x3, 0x2, 0x2, 0x2, 0x217, 0x218, 0x3, 0x2, 0x2, 0x2, 
    0x218, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x219, 0x217, 0x3, 0x2, 0x2, 0x2, 
    0x21a, 0x21c, 0x5, 0x48, 0x25, 0x2, 0x21b, 0x21d, 0x7, 0x53, 0x2, 0x2, 
    0x21c, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21d, 0x3, 0x2, 0x2, 0x2, 
    0x21d, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x1fa, 0x3, 0x2, 0x2, 0x2, 
    0x21e, 0x213, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x21, 0x3, 0x2, 0x2, 0x2, 0x220, 
    0x224, 0x7, 0x99, 0x2, 0x2, 0x221, 0x223, 0x7, 0x5e, 0x2, 0x2, 0x222, 
    0x221, 0x3, 0x2, 0x2, 0x2, 0x223, 0x226, 0x3, 0x2, 0x2, 0x2, 0x224, 
    0x222, 0x3, 0x2, 0x2, 0x2, 0x224, 0x225, 0x3, 0x2, 0x2, 0x2, 0x225, 
    0x227, 0x3, 0x2, 0x2, 0x2, 0x226, 0x224, 0x3, 0x2, 0x2, 0x2, 0x227, 
    0x22b, 0x7, 0x54, 0x2, 0x2, 0x228, 0x22a, 0x7, 0x5e, 0x2, 0x2, 0x229, 
    0x228, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22b, 
    0x229, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22c, 
    0x22e, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x22e, 
    0x232, 0x7, 0x8b, 0x2, 0x2, 0x22f, 0x231, 0x7, 0x5e, 0x2, 0x2, 0x230, 
    0x22f, 0x3, 0x2, 0x2, 0x2, 0x231, 0x234, 0x3, 0x2, 0x2, 0x2, 0x232, 
    0x230, 0x3, 0x2, 0x2, 0x2, 0x232, 0x233, 0x3, 0x2, 0x2, 0x2, 0x233, 
    0x235, 0x3, 0x2, 0x2, 0x2, 0x234, 0x232, 0x3, 0x2, 0x2, 0x2, 0x235, 
    0x237, 0x5, 0x4a, 0x26, 0x2, 0x236, 0x238, 0x7, 0x54, 0x2, 0x2, 0x237, 
    0x236, 0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 0x3, 0x2, 0x2, 0x2, 0x238, 
    0x244, 0x3, 0x2, 0x2, 0x2, 0x239, 0x23d, 0x7, 0x8b, 0x2, 0x2, 0x23a, 
    0x23c, 0x7, 0x5e, 0x2, 0x2, 0x23b, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23c, 
    0x23f, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23d, 
    0x23e, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x240, 0x3, 0x2, 0x2, 0x2, 0x23f, 
    0x23d, 0x3, 0x2, 0x2, 0x2, 0x240, 0x241, 0x5, 0x4a, 0x26, 0x2, 0x241, 
    0x242, 0x7, 0x54, 0x2, 0x2, 0x242, 0x244, 0x3, 0x2, 0x2, 0x2, 0x243, 
    0x220, 0x3, 0x2, 0x2, 0x2, 0x243, 0x239, 0x3, 0x2, 0x2, 0x2, 0x244, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x245, 0x248, 0x5, 0x50, 0x29, 0x2, 0x246, 
    0x248, 0x5, 0x26, 0x14, 0x2, 0x247, 0x245, 0x3, 0x2, 0x2, 0x2, 0x247, 
    0x246, 0x3, 0x2, 0x2, 0x2, 0x248, 0x25, 0x3, 0x2, 0x2, 0x2, 0x249, 0x24a, 
    0x5, 0x50, 0x29, 0x2, 0x24a, 0x24d, 0x7, 0x8f, 0x2, 0x2, 0x24b, 0x24e, 
    0x5, 0x50, 0x29, 0x2, 0x24c, 0x24e, 0x5, 0x42, 0x22, 0x2, 0x24d, 0x24b, 
    0x3, 0x2, 0x2, 0x2, 0x24d, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24f, 
    0x3, 0x2, 0x2, 0x2, 0x24f, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x250, 
    0x3, 0x2, 0x2, 0x2, 0x250, 0x251, 0x3, 0x2, 0x2, 0x2, 0x251, 0x252, 
    0x7, 0x8e, 0x2, 0x2, 0x252, 0x27, 0x3, 0x2, 0x2, 0x2, 0x253, 0x257, 
    0x7, 0xe, 0x2, 0x2, 0x254, 0x256, 0x7, 0x5e, 0x2, 0x2, 0x255, 0x254, 
    0x3, 0x2, 0x2, 0x2, 0x256, 0x259, 0x3, 0x2, 0x2, 0x2, 0x257, 0x255, 
    0x3, 0x2, 0x2, 0x2, 0x257, 0x258, 0x3, 0x2, 0x2, 0x2, 0x258, 0x25a, 
    0x3, 0x2, 0x2, 0x2, 0x259, 0x257, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25e, 
    0x7, 0x8b, 0x2, 0x2, 0x25b, 0x25d, 0x7, 0x5e, 0x2, 0x2, 0x25c, 0x25b, 
    0x3, 0x2, 0x2, 0x2, 0x25d, 0x260, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x25c, 
    0x3, 0x2, 0x2, 0x2, 0x25e, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x261, 
    0x3, 0x2, 0x2, 0x2, 0x260, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x261, 0x265, 
    0x5, 0x50, 0x29, 0x2, 0x262, 0x264, 0x7, 0x5e, 0x2, 0x2, 0x263, 0x262, 
    0x3, 0x2, 0x2, 0x2, 0x264, 0x267, 0x3, 0x2, 0x2, 0x2, 0x265, 0x263, 
    0x3, 0x2, 0x2, 0x2, 0x265, 0x266, 0x3, 0x2, 0x2, 0x2, 0x266, 0x268, 
    0x3, 0x2, 0x2, 0x2, 0x267, 0x265, 0x3, 0x2, 0x2, 0x2, 0x268, 0x269, 
    0x7, 0x98, 0x2, 0x2, 0x269, 0x29, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x26b, 
    0x7, 0xa, 0x2, 0x2, 0x26b, 0x26c, 0x5, 0x30, 0x19, 0x2, 0x26c, 0x26d, 
    0x7, 0x98, 0x2, 0x2, 0x26d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x26f, 
    0x7, 0xf, 0x2, 0x2, 0x26f, 0x270, 0x5, 0x2e, 0x18, 0x2, 0x270, 0x271, 
    0x7, 0x98, 0x2, 0x2, 0x271, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x272, 0x274, 
    0x5, 0x30, 0x19, 0x2, 0x273, 0x272, 0x3, 0x2, 0x2, 0x2, 0x273, 0x274, 
    0x3, 0x2, 0x2, 0x2, 0x274, 0x275, 0x3, 0x2, 0x2, 0x2, 0x275, 0x277, 
    0x7, 0x9a, 0x2, 0x2, 0x276, 0x273, 0x3, 0x2, 0x2, 0x2, 0x276, 0x277, 
    0x3, 0x2, 0x2, 0x2, 0x277, 0x288, 0x3, 0x2, 0x2, 0x2, 0x278, 0x289, 
    0x7, 0x78, 0x2, 0x2, 0x279, 0x285, 0x7, 0xa0, 0x2, 0x2, 0x27a, 0x27f, 
    0x5, 0x2e, 0x18, 0x2, 0x27b, 0x27c, 0x7, 0x97, 0x2, 0x2, 0x27c, 0x27e, 
    0x5, 0x2e, 0x18, 0x2, 0x27d, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x281, 
    0x3, 0x2, 0x2, 0x2, 0x27f, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x280, 
    0x3, 0x2, 0x2, 0x2, 0x280, 0x283, 0x3, 0x2, 0x2, 0x2, 0x281, 0x27f, 
    0x3, 0x2, 0x2, 0x2, 0x282, 0x284, 0x7, 0x97, 0x2, 0x2, 0x283, 0x282, 
    0x3, 0x2, 0x2, 0x2, 0x283, 0x284, 0x3, 0x2, 0x2, 0x2, 0x284, 0x286, 
    0x3, 0x2, 0x2, 0x2, 0x285, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x285, 0x286, 
    0x3, 0x2, 0x2, 0x2, 0x286, 0x287, 0x3, 0x2, 0x2, 0x2, 0x287, 0x289, 
    0x7, 0xa1, 0x2, 0x2, 0x288, 0x278, 0x3, 0x2, 0x2, 0x2, 0x288, 0x279, 
    0x3, 0x2, 0x2, 0x2, 0x289, 0x290, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x28d, 
    0x5, 0x30, 0x19, 0x2, 0x28b, 0x28c, 0x7, 0x4, 0x2, 0x2, 0x28c, 0x28e, 
    0x5, 0x50, 0x29, 0x2, 0x28d, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x28e, 
    0x3, 0x2, 0x2, 0x2, 0x28e, 0x290, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x276, 
    0x3, 0x2, 0x2, 0x2, 0x28f, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x290, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0x291, 0x293, 0x7, 0x9a, 0x2, 0x2, 0x292, 0x291, 0x3, 
    0x2, 0x2, 0x2, 0x292, 0x293, 0x3, 0x2, 0x2, 0x2, 0x293, 0x294, 0x3, 
    0x2, 0x2, 0x2, 0x294, 0x299, 0x5, 0x50, 0x29, 0x2, 0x295, 0x296, 0x7, 
    0x9a, 0x2, 0x2, 0x296, 0x298, 0x5, 0x50, 0x29, 0x2, 0x297, 0x295, 0x3, 
    0x2, 0x2, 0x2, 0x298, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x299, 0x297, 0x3, 
    0x2, 0x2, 0x2, 0x299, 0x29a, 0x3, 0x2, 0x2, 0x2, 0x29a, 0x31, 0x3, 0x2, 
    0x2, 0x2, 0x29b, 0x299, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x29d, 0x9, 0x2, 
    0x2, 0x2, 0x29d, 0x33, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29f, 0x7, 0x62, 
    0x2, 0x2, 0x29f, 0x35, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x2a1, 0x7, 0x5f, 
    0x2, 0x2, 0x2a1, 0x37, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2a3, 0x7, 0x6d, 
    0x2, 0x2, 0x2a3, 0x39, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a5, 0x7, 0x6d, 
    0x2, 0x2, 0x2a5, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x2a6, 0x2ae, 0x9, 0x3, 0x2, 
    0x2, 0x2a7, 0x2a8, 0x7, 0x71, 0x2, 0x2, 0x2a8, 0x2ae, 0x9, 0x4, 0x2, 
    0x2, 0x2a9, 0x2aa, 0x7, 0x72, 0x2, 0x2, 0x2aa, 0x2ae, 0x9, 0x5, 0x2, 
    0x2, 0x2ab, 0x2ac, 0x7, 0x73, 0x2, 0x2, 0x2ac, 0x2ae, 0x9, 0x6, 0x2, 
    0x2, 0x2ad, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2ad, 0x2a7, 0x3, 0x2, 0x2, 
    0x2, 0x2ad, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2ad, 0x2ab, 0x3, 0x2, 0x2, 
    0x2, 0x2ae, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2b7, 0x9, 0x3, 0x2, 0x2, 
    0x2b0, 0x2b1, 0x7, 0x71, 0x2, 0x2, 0x2b1, 0x2b7, 0x9, 0x4, 0x2, 0x2, 
    0x2b2, 0x2b3, 0x7, 0x72, 0x2, 0x2, 0x2b3, 0x2b7, 0x9, 0x5, 0x2, 0x2, 
    0x2b4, 0x2b5, 0x7, 0x73, 0x2, 0x2, 0x2b5, 0x2b7, 0x9, 0x6, 0x2, 0x2, 
    0x2b6, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x2b6, 0x2b0, 0x3, 0x2, 0x2, 0x2, 
    0x2b6, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2b6, 0x2b4, 0x3, 0x2, 0x2, 0x2, 
    0x2b7, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x2b8, 0x2c0, 0x9, 0x3, 0x2, 0x2, 0x2b9, 
    0x2ba, 0x7, 0x71, 0x2, 0x2, 0x2ba, 0x2c0, 0x9, 0x4, 0x2, 0x2, 0x2bb, 
    0x2bc, 0x7, 0x72, 0x2, 0x2, 0x2bc, 0x2c0, 0x9, 0x5, 0x2, 0x2, 0x2bd, 
    0x2be, 0x7, 0x73, 0x2, 0x2, 0x2be, 0x2c0, 0x9, 0x6, 0x2, 0x2, 0x2bf, 
    0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2bf, 
    0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2c0, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2c9, 0x9, 0x3, 0x2, 0x2, 0x2c2, 0x2c3, 
    0x7, 0x71, 0x2, 0x2, 0x2c3, 0x2c9, 0x9, 0x4, 0x2, 0x2, 0x2c4, 0x2c5, 
    0x7, 0x72, 0x2, 0x2, 0x2c5, 0x2c9, 0x9, 0x5, 0x2, 0x2, 0x2c6, 0x2c7, 
    0x7, 0x73, 0x2, 0x2, 0x2c7, 0x2c9, 0x9, 0x6, 0x2, 0x2, 0x2c8, 0x2c1, 
    0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2c4, 
    0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x43, 0x3, 
    0x2, 0x2, 0x2, 0x2ca, 0x2d2, 0x9, 0x3, 0x2, 0x2, 0x2cb, 0x2cc, 0x7, 
    0x71, 0x2, 0x2, 0x2cc, 0x2d2, 0x9, 0x4, 0x2, 0x2, 0x2cd, 0x2ce, 0x7, 
    0x72, 0x2, 0x2, 0x2ce, 0x2d2, 0x9, 0x5, 0x2, 0x2, 0x2cf, 0x2d0, 0x7, 
    0x73, 0x2, 0x2, 0x2d0, 0x2d2, 0x9, 0x6, 0x2, 0x2, 0x2d1, 0x2ca, 0x3, 
    0x2, 0x2, 0x2, 0x2d1, 0x2cb, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2cd, 0x3, 
    0x2, 0x2, 0x2, 0x2d1, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0x2d3, 0x2db, 0x9, 0x3, 0x2, 0x2, 0x2d4, 0x2d5, 0x7, 0x71, 
    0x2, 0x2, 0x2d5, 0x2db, 0x9, 0x4, 0x2, 0x2, 0x2d6, 0x2d7, 0x7, 0x72, 
    0x2, 0x2, 0x2d7, 0x2db, 0x9, 0x5, 0x2, 0x2, 0x2d8, 0x2d9, 0x7, 0x73, 
    0x2, 0x2, 0x2d9, 0x2db, 0x9, 0x6, 0x2, 0x2, 0x2da, 0x2d3, 0x3, 0x2, 
    0x2, 0x2, 0x2da, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2da, 0x2d6, 0x3, 0x2, 
    0x2, 0x2, 0x2da, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x2dc, 0x2e4, 0x9, 0x3, 0x2, 0x2, 0x2dd, 0x2de, 0x7, 0x71, 0x2, 
    0x2, 0x2de, 0x2e4, 0x9, 0x4, 0x2, 0x2, 0x2df, 0x2e0, 0x7, 0x72, 0x2, 
    0x2, 0x2e0, 0x2e4, 0x9, 0x5, 0x2, 0x2, 0x2e1, 0x2e2, 0x7, 0x73, 0x2, 
    0x2, 0x2e2, 0x2e4, 0x9, 0x6, 0x2, 0x2, 0x2e3, 0x2dc, 0x3, 0x2, 0x2, 
    0x2, 0x2e3, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2df, 0x3, 0x2, 0x2, 
    0x2, 0x2e3, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e5, 0x3, 0x2, 0x2, 
    0x2, 0x2e5, 0x2e6, 0x8, 0x25, 0x1, 0x2, 0x2e6, 0x49, 0x3, 0x2, 0x2, 
    0x2, 0x2e7, 0x2ef, 0x9, 0x3, 0x2, 0x2, 0x2e8, 0x2e9, 0x7, 0x71, 0x2, 
    0x2, 0x2e9, 0x2ef, 0x9, 0x4, 0x2, 0x2, 0x2ea, 0x2eb, 0x7, 0x72, 0x2, 
    0x2, 0x2eb, 0x2ef, 0x9, 0x5, 0x2, 0x2, 0x2ec, 0x2ed, 0x7, 0x73, 0x2, 
    0x2, 0x2ed, 0x2ef, 0x9, 0x6, 0x2, 0x2, 0x2ee, 0x2e7, 0x3, 0x2, 0x2, 
    0x2, 0x2ee, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2ea, 0x3, 0x2, 0x2, 
    0x2, 0x2ee, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2f0, 0x3, 0x2, 0x2, 
    0x2, 0x2f0, 0x2f1, 0x8, 0x26, 0x1, 0x2, 0x2f1, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x2f2, 0x2f3, 0x9, 0x7, 0x2, 0x2, 0x2f3, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x2f4, 0x2f5, 0x9, 0x8, 0x2, 0x2, 0x2f5, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x2f6, 
    0x2fa, 0x7, 0x55, 0x2, 0x2, 0x2f7, 0x2f8, 0x7, 0x75, 0x2, 0x2, 0x2f8, 
    0x2fa, 0x7, 0x55, 0x2, 0x2, 0x2f9, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f9, 
    0x2f7, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x51, 0x3, 0x2, 0x2, 0x2, 0x2fb, 0x2fc, 
    0x9, 0x9, 0x2, 0x2, 0x2fc, 0x53, 0x3, 0x2, 0x2, 0x2, 0x64, 0x58, 0x5c, 
    0x61, 0x67, 0x6d, 0x73, 0x79, 0x84, 0x8b, 0xb8, 0xbe, 0xc2, 0xc7, 0xce, 
    0xd7, 0xdb, 0xe0, 0xe7, 0xf0, 0xf7, 0x100, 0x107, 0x110, 0x117, 0x120, 
    0x127, 0x12e, 0x133, 0x139, 0x13f, 0x145, 0x14c, 0x153, 0x158, 0x15e, 
    0x164, 0x16a, 0x171, 0x178, 0x17d, 0x183, 0x189, 0x18f, 0x196, 0x19d, 
    0x1a2, 0x1a8, 0x1ae, 0x1b4, 0x1bb, 0x1c2, 0x1c7, 0x1cd, 0x1d3, 0x1d9, 
    0x1e0, 0x1e7, 0x1ec, 0x1f2, 0x1f8, 0x1fe, 0x205, 0x20c, 0x211, 0x217, 
    0x21c, 0x21e, 0x224, 0x22b, 0x232, 0x237, 0x23d, 0x243, 0x247, 0x24d, 
    0x24f, 0x257, 0x25e, 0x265, 0x273, 0x276, 0x27f, 0x283, 0x285, 0x288, 
    0x28d, 0x28f, 0x292, 0x299, 0x2ad, 0x2b6, 0x2bf, 0x2c8, 0x2d1, 0x2da, 
    0x2e3, 0x2ee, 0x2f9, 
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
