
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

TypedefParser::StructDeclarationContext* TypedefParser::ItemContext::structDeclaration() {
  return getRuleContext<TypedefParser::StructDeclarationContext>(0);
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
    setState(130);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(124);
      dynamic_cast<ItemContext *>(_localctx)->valueDefinitionContext = valueDefinition();

      		if (dynamic_cast<ItemContext *>(_localctx)->valueDefinitionContext->maybe_field) {
      			if (!symbol_table.TryInsert(*dynamic_cast<ItemContext *>(_localctx)->valueDefinitionContext->maybe_field)) {
      				throw DuplicateSymbolException(this, dynamic_cast<ItemContext *>(_localctx)->valueDefinitionContext->identifier(), dynamic_cast<ItemContext *>(_localctx)->valueDefinitionContext->identifier()->NON_KEYWORD_IDENTIFIER()->getSymbol());
      			}
      		}

      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(127);
      dynamic_cast<ItemContext *>(_localctx)->structDeclarationContext = structDeclaration();

      		if (dynamic_cast<ItemContext *>(_localctx)->structDeclarationContext->maybe_field) {
      			if (!symbol_table.TryInsert(*dynamic_cast<ItemContext *>(_localctx)->structDeclarationContext->maybe_field)) {
      				throw DuplicateSymbolException(this, dynamic_cast<ItemContext *>(_localctx)->structDeclarationContext->identifier(), dynamic_cast<ItemContext *>(_localctx)->structDeclarationContext->identifier()->NON_KEYWORD_IDENTIFIER()->getSymbol());
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

tree::TerminalNode* TypedefParser::StructDeclarationContext::SEMI() {
  return getToken(TypedefParser::SEMI, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::StructDeclarationContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::StructDeclarationContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}

std::vector<TypedefParser::StructFieldContext *> TypedefParser::StructDeclarationContext::structField() {
  return getRuleContexts<TypedefParser::StructFieldContext>();
}

TypedefParser::StructFieldContext* TypedefParser::StructDeclarationContext::structField(size_t i) {
  return getRuleContext<TypedefParser::StructFieldContext>(i);
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
  enterRule(_localctx, 4, TypedefParser::RuleStructDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(132);
    dynamic_cast<StructDeclarationContext *>(_localctx)->identifierContext = identifier();
    setState(136);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(133);
      match(TypedefParser::WS);
      setState(138);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(139);
    match(TypedefParser::COLON);
    setState(143);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(140);
      match(TypedefParser::WS);
      setState(145);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(146);
    match(TypedefParser::KW_STRUCT);
    setState(150);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(147);
      match(TypedefParser::WS);
      setState(152);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(153);
    match(TypedefParser::LBRACE);
    setState(157);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(154);
        match(TypedefParser::WS); 
      }
      setState(159);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
    setState(163);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::NON_KEYWORD_IDENTIFIER

    || _la == TypedefParser::RAW_ESCAPE) {
      setState(160);
      dynamic_cast<StructDeclarationContext *>(_localctx)->structFieldContext = structField();
      dynamic_cast<StructDeclarationContext *>(_localctx)->fields.push_back(dynamic_cast<StructDeclarationContext *>(_localctx)->structFieldContext);
      setState(165);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(169);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(166);
      match(TypedefParser::WS);
      setState(171);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(172);
    match(TypedefParser::RBRACE);
    setState(176);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(173);
      match(TypedefParser::WS);
      setState(178);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(179);
    match(TypedefParser::SEMI);

    		auto s = std::make_shared<td::SymbolTable::Struct>();
    		for (auto field : dynamic_cast<StructDeclarationContext *>(_localctx)->fields) {
    			if (field->maybe_field) {
    				s->table.insert(*field->maybe_field);
    			}
    		}
    		dynamic_cast<StructDeclarationContext *>(_localctx)->maybe_field =  std::make_pair(dynamic_cast<StructDeclarationContext *>(_localctx)->identifierContext->id, s);
    	
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructFieldContext ------------------------------------------------------------------

TypedefParser::StructFieldContext::StructFieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::StructFieldContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::StructFieldContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

TypedefParser::Type_Context* TypedefParser::StructFieldContext::type_() {
  return getRuleContext<TypedefParser::Type_Context>(0);
}

tree::TerminalNode* TypedefParser::StructFieldContext::SEMI() {
  return getToken(TypedefParser::SEMI, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::StructFieldContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::StructFieldContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::StructFieldContext::getRuleIndex() const {
  return TypedefParser::RuleStructField;
}

void TypedefParser::StructFieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructField(this);
}

void TypedefParser::StructFieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructField(this);
}


antlrcpp::Any TypedefParser::StructFieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitStructField(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::StructFieldContext* TypedefParser::structField() {
  StructFieldContext *_localctx = _tracker.createInstance<StructFieldContext>(_ctx, getState());
  enterRule(_localctx, 6, TypedefParser::RuleStructField);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    dynamic_cast<StructFieldContext *>(_localctx)->identifierContext = identifier();
    setState(187);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(184);
      match(TypedefParser::WS);
      setState(189);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(190);
    match(TypedefParser::COLON);
    setState(194);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(191);
      match(TypedefParser::WS);
      setState(196);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(197);
    dynamic_cast<StructFieldContext *>(_localctx)->type_Context = type_();
    setState(201);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(198);
      match(TypedefParser::WS);
      setState(203);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(204);
    match(TypedefParser::SEMI);

    		dynamic_cast<StructFieldContext *>(_localctx)->maybe_field =  MakeStructField(dynamic_cast<StructFieldContext *>(_localctx)->identifierContext->id, dynamic_cast<StructFieldContext *>(_localctx)->type_Context);

   
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
  enterRule(_localctx, 8, TypedefParser::RuleValueDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(207);
    dynamic_cast<ValueDefinitionContext *>(_localctx)->identifierContext = identifier();
    setState(211);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(208);
        match(TypedefParser::WS); 
      }
      setState(213);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
    setState(214);
    dynamic_cast<ValueDefinitionContext *>(_localctx)->primitiveFragmentContext = primitiveFragment();
    setState(218);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(215);
      match(TypedefParser::WS);
      setState(220);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(221);
    match(TypedefParser::SEMI);

    		dynamic_cast<ValueDefinitionContext *>(_localctx)->maybe_field =  MakeValueField(dynamic_cast<ValueDefinitionContext *>(_localctx)->identifierContext->id, dynamic_cast<ValueDefinitionContext *>(_localctx)->primitiveFragmentContext);

   
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
  enterRule(_localctx, 10, TypedefParser::RulePrimitiveFragment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      setState(224);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->boolFragmentContext = boolFragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->boolFragmentContext->literal->maybe_val;
      break;
    }

    case 2: {
      setState(227);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->charFragmentContext = charFragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->charFragmentContext->literal->maybe_val;
      break;
    }

    case 3: {
      setState(230);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->stringFragmentContext = stringFragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->stringFragmentContext->literal->maybe_val;
      break;
    }

    case 4: {
      setState(233);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->f32FragmentContext = f32Fragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->f32FragmentContext->literal->maybe_val;
      break;
    }

    case 5: {
      setState(236);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->f64FragmentContext = f64Fragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->f64FragmentContext->literal->maybe_val;
      break;
    }

    case 6: {
      setState(239);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->u8FragmentContext = u8Fragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->u8FragmentContext->literal->maybe_val;
      break;
    }

    case 7: {
      setState(242);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->u16FragmentContext = u16Fragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->u16FragmentContext->literal->maybe_val;
      break;
    }

    case 8: {
      setState(245);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->u32FragmentContext = u32Fragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->u32FragmentContext->literal->maybe_val;
      break;
    }

    case 9: {
      setState(248);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->u64FragmentContext = u64Fragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->u64FragmentContext->literal->maybe_val;
      break;
    }

    case 10: {
      setState(251);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->i8FragmentContext = i8Fragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->i8FragmentContext->literal->maybe_val;
      break;
    }

    case 11: {
      setState(254);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->i16FragmentContext = i16Fragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->i16FragmentContext->literal->maybe_val;
      break;
    }

    case 12: {
      setState(257);
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->i32FragmentContext = i32Fragment();
      dynamic_cast<PrimitiveFragmentContext *>(_localctx)->maybe_val =  dynamic_cast<PrimitiveFragmentContext *>(_localctx)->i32FragmentContext->literal->maybe_val;
      break;
    }

    case 13: {
      setState(260);
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
  enterRule(_localctx, 12, TypedefParser::RuleBoolFragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(273);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::COLON) {
      setState(265);
      match(TypedefParser::COLON);
      setState(269);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(266);
        match(TypedefParser::WS);
        setState(271);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(272);
      match(TypedefParser::KW_BOOL);
    }
    setState(278);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(275);
      match(TypedefParser::WS);
      setState(280);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(281);
    match(TypedefParser::EQ);
    setState(285);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(282);
      match(TypedefParser::WS);
      setState(287);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(288);
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
  enterRule(_localctx, 14, TypedefParser::RuleCharFragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(298);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::COLON) {
      setState(290);
      match(TypedefParser::COLON);
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
      match(TypedefParser::KW_CHAR);
    }
    setState(303);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(300);
      match(TypedefParser::WS);
      setState(305);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(306);
    match(TypedefParser::EQ);
    setState(310);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(307);
      match(TypedefParser::WS);
      setState(312);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(313);
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

tree::TerminalNode* TypedefParser::StringFragmentContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::StringLiteralContext* TypedefParser::StringFragmentContext::stringLiteral() {
  return getRuleContext<TypedefParser::StringLiteralContext>(0);
}

tree::TerminalNode* TypedefParser::StringFragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

tree::TerminalNode* TypedefParser::StringFragmentContext::KW_STRING() {
  return getToken(TypedefParser::KW_STRING, 0);
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
  enterRule(_localctx, 16, TypedefParser::RuleStringFragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(323);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::COLON) {
      setState(315);
      match(TypedefParser::COLON);
      setState(319);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(316);
        match(TypedefParser::WS);
        setState(321);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(322);
      match(TypedefParser::KW_STRING);
    }
    setState(328);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(325);
      match(TypedefParser::WS);
      setState(330);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(331);
    match(TypedefParser::EQ);
    setState(335);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(332);
      match(TypedefParser::WS);
      setState(337);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(338);
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

tree::TerminalNode* TypedefParser::F32FragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::F32FragmentContext::KW_F32() {
  return getTokens(TypedefParser::KW_F32);
}

tree::TerminalNode* TypedefParser::F32FragmentContext::KW_F32(size_t i) {
  return getToken(TypedefParser::KW_F32, i);
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
  enterRule(_localctx, 18, TypedefParser::RuleF32Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(376);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(340);
        match(TypedefParser::COLON);
        setState(344);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(341);
          match(TypedefParser::WS);
          setState(346);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(347);
        match(TypedefParser::KW_F32);
        setState(351);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(348);
          match(TypedefParser::WS);
          setState(353);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(354);
        match(TypedefParser::EQ);
        setState(358);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(355);
          match(TypedefParser::WS);
          setState(360);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(361);
        dynamic_cast<F32FragmentContext *>(_localctx)->literal = f32Literal();
        setState(363);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_F32) {
          setState(362);
          match(TypedefParser::KW_F32);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(365);
        match(TypedefParser::EQ);
        setState(369);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(366);
          match(TypedefParser::WS);
          setState(371);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(372);
        dynamic_cast<F32FragmentContext *>(_localctx)->literal = f32Literal();
        setState(374);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_F32) {
          setState(373);
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

//----------------- F64FragmentContext ------------------------------------------------------------------

TypedefParser::F64FragmentContext::F64FragmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::F64FragmentContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::F64FragmentContext::KW_F64() {
  return getTokens(TypedefParser::KW_F64);
}

tree::TerminalNode* TypedefParser::F64FragmentContext::KW_F64(size_t i) {
  return getToken(TypedefParser::KW_F64, i);
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
  enterRule(_localctx, 20, TypedefParser::RuleF64Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(413);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(378);
        match(TypedefParser::COLON);
        setState(382);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(379);
          match(TypedefParser::WS);
          setState(384);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(385);
        match(TypedefParser::KW_F64);
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
        match(TypedefParser::EQ);
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
        dynamic_cast<F64FragmentContext *>(_localctx)->literal = f64Literal();
        setState(401);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_F64) {
          setState(400);
          match(TypedefParser::KW_F64);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(403);
        match(TypedefParser::EQ);
        setState(407);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(404);
          match(TypedefParser::WS);
          setState(409);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(410);
        dynamic_cast<F64FragmentContext *>(_localctx)->literal = f64Literal();
        setState(411);
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
  enterRule(_localctx, 22, TypedefParser::RuleU8Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(450);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(415);
        match(TypedefParser::COLON);
        setState(419);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(416);
          match(TypedefParser::WS);
          setState(421);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(422);
        match(TypedefParser::KW_U8);
        setState(426);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(423);
          match(TypedefParser::WS);
          setState(428);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(429);
        match(TypedefParser::EQ);
        setState(433);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(430);
          match(TypedefParser::WS);
          setState(435);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(436);
        dynamic_cast<U8FragmentContext *>(_localctx)->literal = u8Literal();
        setState(438);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_U8) {
          setState(437);
          match(TypedefParser::KW_U8);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(440);
        match(TypedefParser::EQ);
        setState(444);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(441);
          match(TypedefParser::WS);
          setState(446);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(447);
        dynamic_cast<U8FragmentContext *>(_localctx)->literal = u8Literal();
        setState(448);
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
  enterRule(_localctx, 24, TypedefParser::RuleU16Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(487);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(452);
        match(TypedefParser::COLON);
        setState(456);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(453);
          match(TypedefParser::WS);
          setState(458);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(459);
        match(TypedefParser::KW_U16);
        setState(463);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(460);
          match(TypedefParser::WS);
          setState(465);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(466);
        match(TypedefParser::EQ);
        setState(470);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(467);
          match(TypedefParser::WS);
          setState(472);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(473);
        dynamic_cast<U16FragmentContext *>(_localctx)->literal = u16Literal();
        setState(475);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_U16) {
          setState(474);
          match(TypedefParser::KW_U16);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(477);
        match(TypedefParser::EQ);
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
        dynamic_cast<U16FragmentContext *>(_localctx)->literal = u16Literal();
        setState(485);
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
  enterRule(_localctx, 26, TypedefParser::RuleU32Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(524);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(489);
        match(TypedefParser::COLON);
        setState(493);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(490);
          match(TypedefParser::WS);
          setState(495);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(496);
        match(TypedefParser::KW_U32);
        setState(500);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(497);
          match(TypedefParser::WS);
          setState(502);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(503);
        match(TypedefParser::EQ);
        setState(507);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(504);
          match(TypedefParser::WS);
          setState(509);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(510);
        dynamic_cast<U32FragmentContext *>(_localctx)->literal = u32Literal();
        setState(512);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_U32) {
          setState(511);
          match(TypedefParser::KW_U32);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(514);
        match(TypedefParser::EQ);
        setState(518);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(515);
          match(TypedefParser::WS);
          setState(520);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(521);
        dynamic_cast<U32FragmentContext *>(_localctx)->literal = u32Literal();
        setState(522);
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
  enterRule(_localctx, 28, TypedefParser::RuleU64Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(561);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(526);
        match(TypedefParser::COLON);
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
        match(TypedefParser::KW_U64);
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
        match(TypedefParser::EQ);
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
        dynamic_cast<U64FragmentContext *>(_localctx)->literal = u64Literal();
        setState(549);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_U64) {
          setState(548);
          match(TypedefParser::KW_U64);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(551);
        match(TypedefParser::EQ);
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
        dynamic_cast<U64FragmentContext *>(_localctx)->literal = u64Literal();
        setState(559);
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
  enterRule(_localctx, 30, TypedefParser::RuleI8Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(598);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(563);
        match(TypedefParser::COLON);
        setState(567);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(564);
          match(TypedefParser::WS);
          setState(569);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(570);
        match(TypedefParser::KW_I8);
        setState(574);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(571);
          match(TypedefParser::WS);
          setState(576);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
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
        dynamic_cast<I8FragmentContext *>(_localctx)->literal = i8Literal();
        setState(586);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I8) {
          setState(585);
          match(TypedefParser::KW_I8);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(588);
        match(TypedefParser::EQ);
        setState(592);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(589);
          match(TypedefParser::WS);
          setState(594);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(595);
        dynamic_cast<I8FragmentContext *>(_localctx)->literal = i8Literal();
        setState(596);
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
  enterRule(_localctx, 32, TypedefParser::RuleI16Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(635);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(600);
        match(TypedefParser::COLON);
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
        match(TypedefParser::KW_I16);
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
        match(TypedefParser::EQ);
        setState(618);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(615);
          match(TypedefParser::WS);
          setState(620);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(621);
        dynamic_cast<I16FragmentContext *>(_localctx)->literal = i16Literal();
        setState(623);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I16) {
          setState(622);
          match(TypedefParser::KW_I16);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(625);
        match(TypedefParser::EQ);
        setState(629);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(626);
          match(TypedefParser::WS);
          setState(631);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(632);
        dynamic_cast<I16FragmentContext *>(_localctx)->literal = i16Literal();
        setState(633);
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
  enterRule(_localctx, 34, TypedefParser::RuleI32Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(673);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(637);
        match(TypedefParser::COLON);
        setState(641);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(638);
          match(TypedefParser::WS);
          setState(643);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(644);
        match(TypedefParser::KW_I32);
        setState(648);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(645);
          match(TypedefParser::WS);
          setState(650);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(651);
        match(TypedefParser::EQ);
        setState(655);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(652);
          match(TypedefParser::WS);
          setState(657);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(658);
        dynamic_cast<I32FragmentContext *>(_localctx)->literal = i32Literal();
        setState(660);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I32) {
          setState(659);
          match(TypedefParser::KW_I32);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(662);
        match(TypedefParser::EQ);
        setState(666);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(663);
          match(TypedefParser::WS);
          setState(668);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(669);
        dynamic_cast<I32FragmentContext *>(_localctx)->literal = i32Literal();
        setState(671);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I32) {
          setState(670);
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
  enterRule(_localctx, 36, TypedefParser::RuleI64Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(710);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(675);
        match(TypedefParser::COLON);
        setState(679);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(676);
          match(TypedefParser::WS);
          setState(681);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(682);
        match(TypedefParser::KW_I64);
        setState(686);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(683);
          match(TypedefParser::WS);
          setState(688);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
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
        dynamic_cast<I64FragmentContext *>(_localctx)->literal = i64Literal();
        setState(698);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I64) {
          setState(697);
          match(TypedefParser::KW_I64);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(700);
        match(TypedefParser::EQ);
        setState(704);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(701);
          match(TypedefParser::WS);
          setState(706);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(707);
        dynamic_cast<I64FragmentContext *>(_localctx)->literal = i64Literal();
        setState(708);
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

TypedefParser::PrimitiveTypeContext* TypedefParser::Type_Context::primitiveType() {
  return getRuleContext<TypedefParser::PrimitiveTypeContext>(0);
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
  enterRule(_localctx, 38, TypedefParser::RuleType_);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(712);
    primitiveType();
   
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
  enterRule(_localctx, 40, TypedefParser::RulePrimitiveType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(714);
    _la = _input->LA(1);
    if (!(((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & ((1ULL << (TypedefParser::KW_BOOL - 70))
      | (1ULL << (TypedefParser::KW_CHAR - 70))
      | (1ULL << (TypedefParser::KW_STRING - 70))
      | (1ULL << (TypedefParser::KW_F32 - 70))
      | (1ULL << (TypedefParser::KW_F64 - 70))
      | (1ULL << (TypedefParser::KW_U8 - 70))
      | (1ULL << (TypedefParser::KW_U16 - 70))
      | (1ULL << (TypedefParser::KW_U32 - 70))
      | (1ULL << (TypedefParser::KW_U64 - 70))
      | (1ULL << (TypedefParser::KW_I8 - 70))
      | (1ULL << (TypedefParser::KW_I16 - 70))
      | (1ULL << (TypedefParser::KW_I32 - 70))
      | (1ULL << (TypedefParser::KW_I64 - 70)))) != 0))) {
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
  enterRule(_localctx, 42, TypedefParser::RuleTypedefVersionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(716);
    match(TypedefParser::KW_TYPEDEF);
    setState(720);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(717);
      match(TypedefParser::WS);
      setState(722);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(723);
    match(TypedefParser::EQ);
    setState(727);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(724);
      match(TypedefParser::WS);
      setState(729);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(730);
    identifier();
    setState(734);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(731);
      match(TypedefParser::WS);
      setState(736);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(737);
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
  enterRule(_localctx, 44, TypedefParser::RuleModuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(739);
    match(TypedefParser::KW_MODULE);
    setState(740);
    simplePath();
    setState(741);
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
  enterRule(_localctx, 46, TypedefParser::RuleUseDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(743);
    match(TypedefParser::KW_USE);
    setState(744);
    useTree();
    setState(745);
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
  enterRule(_localctx, 48, TypedefParser::RuleUseTree);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(776);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 105, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(751);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypedefParser::NON_KEYWORD_IDENTIFIER

      || _la == TypedefParser::RAW_ESCAPE || _la == TypedefParser::PATHSEP) {
        setState(748);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx)) {
        case 1: {
          setState(747);
          simplePath();
          break;
        }

        }
        setState(750);
        match(TypedefParser::PATHSEP);
      }
      setState(769);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypedefParser::STAR: {
          setState(753);
          match(TypedefParser::STAR);
          break;
        }

        case TypedefParser::LBRACE: {
          setState(754);
          match(TypedefParser::LBRACE);
          setState(766);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (((((_la - 83) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 83)) & ((1ULL << (TypedefParser::NON_KEYWORD_IDENTIFIER - 83))
            | (1ULL << (TypedefParser::RAW_ESCAPE - 83))
            | (1ULL << (TypedefParser::STAR - 83)))) != 0) || _la == TypedefParser::PATHSEP

          || _la == TypedefParser::LBRACE) {
            setState(755);
            useTree();
            setState(760);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
              if (alt == 1) {
                setState(756);
                match(TypedefParser::COMMA);
                setState(757);
                useTree(); 
              }
              setState(762);
              _errHandler->sync(this);
              alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx);
            }
            setState(764);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == TypedefParser::COMMA) {
              setState(763);
              match(TypedefParser::COMMA);
            }
          }
          setState(768);
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
      setState(771);
      simplePath();
      setState(774);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypedefParser::KW_AS) {
        setState(772);
        match(TypedefParser::KW_AS);
        setState(773);
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
  enterRule(_localctx, 50, TypedefParser::RuleSimplePath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(779);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::PATHSEP) {
      setState(778);
      match(TypedefParser::PATHSEP);
    }
    setState(781);
    identifier();
    setState(786);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 107, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(782);
        match(TypedefParser::PATHSEP);
        setState(783);
        identifier(); 
      }
      setState(788);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 107, _ctx);
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
  enterRule(_localctx, 52, TypedefParser::RuleBoolLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(789);
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
  enterRule(_localctx, 54, TypedefParser::RuleCharLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(791);
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
  enterRule(_localctx, 56, TypedefParser::RuleF32Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(794);
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
  enterRule(_localctx, 58, TypedefParser::RuleF64Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(797);
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
  enterRule(_localctx, 60, TypedefParser::RuleU8Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(807);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE: {
        setState(800);
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
        setState(801);
        match(TypedefParser::HEX_PREFIX);
        setState(802);
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
        setState(803);
        match(TypedefParser::OCT_PREFIX);
        setState(804);
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
        setState(805);
        match(TypedefParser::BIN_PREFIX);
        setState(806);
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
  enterRule(_localctx, 62, TypedefParser::RuleU16Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(818);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE: {
        setState(811);
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
        setState(812);
        match(TypedefParser::HEX_PREFIX);
        setState(813);
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
        setState(814);
        match(TypedefParser::OCT_PREFIX);
        setState(815);
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
        setState(816);
        match(TypedefParser::BIN_PREFIX);
        setState(817);
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
  enterRule(_localctx, 64, TypedefParser::RuleU32Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(829);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE: {
        setState(822);
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
        setState(823);
        match(TypedefParser::HEX_PREFIX);
        setState(824);
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
        setState(825);
        match(TypedefParser::OCT_PREFIX);
        setState(826);
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
        setState(827);
        match(TypedefParser::BIN_PREFIX);
        setState(828);
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
  enterRule(_localctx, 66, TypedefParser::RuleU64Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(840);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE: {
        setState(833);
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
        setState(834);
        match(TypedefParser::HEX_PREFIX);
        setState(835);
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
        setState(836);
        match(TypedefParser::OCT_PREFIX);
        setState(837);
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
        setState(838);
        match(TypedefParser::BIN_PREFIX);
        setState(839);
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
  enterRule(_localctx, 68, TypedefParser::RuleI8Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(851);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE: {
        setState(844);
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
        setState(845);
        match(TypedefParser::HEX_PREFIX);
        setState(846);
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
        setState(847);
        match(TypedefParser::OCT_PREFIX);
        setState(848);
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
        setState(849);
        match(TypedefParser::BIN_PREFIX);
        setState(850);
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
  enterRule(_localctx, 70, TypedefParser::RuleI16Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(862);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE: {
        setState(855);
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
        setState(856);
        match(TypedefParser::HEX_PREFIX);
        setState(857);
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
        setState(858);
        match(TypedefParser::OCT_PREFIX);
        setState(859);
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
        setState(860);
        match(TypedefParser::BIN_PREFIX);
        setState(861);
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
  enterRule(_localctx, 72, TypedefParser::RuleI32Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(873);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE: {
        setState(866);
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
        setState(867);
        match(TypedefParser::HEX_PREFIX);
        setState(868);
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
        setState(869);
        match(TypedefParser::OCT_PREFIX);
        setState(870);
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
        setState(871);
        match(TypedefParser::BIN_PREFIX);
        setState(872);
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
  enterRule(_localctx, 74, TypedefParser::RuleI64Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(884);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE: {
        setState(877);
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
        setState(878);
        match(TypedefParser::HEX_PREFIX);
        setState(879);
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
        setState(880);
        match(TypedefParser::OCT_PREFIX);
        setState(881);
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
        setState(882);
        match(TypedefParser::BIN_PREFIX);
        setState(883);
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
  enterRule(_localctx, 76, TypedefParser::RuleStringLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(892);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(888);
        dynamic_cast<StringLiteralContext *>(_localctx)->string_literalToken = match(TypedefParser::STRING_LITERAL);

        		dynamic_cast<StringLiteralContext *>(_localctx)->maybe_val =  GetStringValue(this, dynamic_cast<StringLiteralContext *>(_localctx)->string_literalToken);
        	
        break;
      }

      case TypedefParser::RAW_STRING_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(890);
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
  enterRule(_localctx, 78, TypedefParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(897);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::NON_KEYWORD_IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(894);
        dynamic_cast<IdentifierContext *>(_localctx)->nki = match(TypedefParser::NON_KEYWORD_IDENTIFIER);
        break;
      }

      case TypedefParser::RAW_ESCAPE: {
        enterOuterAlt(_localctx, 2);
        setState(895);
        match(TypedefParser::RAW_ESCAPE);
        setState(896);
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
    setState(899);
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
  "compilationUnit", "item", "structDeclaration", "structField", "valueDefinition", 
  "primitiveFragment", "boolFragment", "charFragment", "stringFragment", 
  "f32Fragment", "f64Fragment", "u8Fragment", "u16Fragment", "u32Fragment", 
  "u64Fragment", "i8Fragment", "i16Fragment", "i32Fragment", "i64Fragment", 
  "type_", "primitiveType", "typedefVersionDeclaration", "moduleDeclaration", 
  "useDeclaration", "useTree", "simplePath", "boolLiteral", "charLiteral", 
  "f32Literal", "f64Literal", "u8Literal", "u16Literal", "u32Literal", "u64Literal", 
  "i8Literal", "i16Literal", "i32Literal", "i64Literal", "stringLiteral", 
  "identifier", "keyword"
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
  "'char'", "'str'", "'f32'", "'f64'", "'u8'", "'u16'", "'u32'", "'u64'", 
  "'i8'", "'i16'", "'i32'", "'i64'", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "'0x'", 
  "'0o'", "'0b'", "'r#'", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "'!'", 
  "'&'", "'|'", "'&&'", "'||'", "'+='", "'-='", "'*='", "'/='", "'%='", 
  "'^='", "'&='", "'|='", "'<<='", "'>>='", "'='", "'=='", "'!='", "'>'", 
  "'<'", "'>='", "'<='", "'@'", "'_'", "'.'", "'..'", "'...'", "','", "';'", 
  "':'", "'::'", "'->'", "'=>'", "'#'", "'$'", "'?'", "'{'", "'}'", "'['", 
  "']'", "'('", "')'"
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
    0x3, 0xa1, 0x388, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x2, 0x7b, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x85, 0xa, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x7, 0x4, 0x89, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x8c, 0xb, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x7, 0x4, 0x90, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x93, 0xb, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x97, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 
    0x9a, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x9e, 0xa, 0x4, 0xc, 0x4, 
    0xe, 0x4, 0xa1, 0xb, 0x4, 0x3, 0x4, 0x7, 0x4, 0xa4, 0xa, 0x4, 0xc, 0x4, 
    0xe, 0x4, 0xa7, 0xb, 0x4, 0x3, 0x4, 0x7, 0x4, 0xaa, 0xa, 0x4, 0xc, 0x4, 
    0xe, 0x4, 0xad, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0xb1, 0xa, 0x4, 
    0xc, 0x4, 0xe, 0x4, 0xb4, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xbc, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 
    0xbf, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xc3, 0xa, 0x5, 0xc, 0x5, 
    0xe, 0x5, 0xc6, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xca, 0xa, 0x5, 
    0xc, 0x5, 0xe, 0x5, 0xcd, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x7, 0x6, 0xd4, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0xd7, 0xb, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0xdb, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 
    0xde, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x5, 0x7, 0x10a, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 
    0x10e, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x111, 0xb, 0x8, 0x3, 0x8, 0x5, 
    0x8, 0x114, 0xa, 0x8, 0x3, 0x8, 0x7, 0x8, 0x117, 0xa, 0x8, 0xc, 0x8, 
    0xe, 0x8, 0x11a, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x11e, 0xa, 
    0x8, 0xc, 0x8, 0xe, 0x8, 0x121, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x7, 0x9, 0x127, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x12a, 0xb, 
    0x9, 0x3, 0x9, 0x5, 0x9, 0x12d, 0xa, 0x9, 0x3, 0x9, 0x7, 0x9, 0x130, 
    0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x133, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 
    0x9, 0x137, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x13a, 0xb, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x140, 0xa, 0xa, 0xc, 0xa, 0xe, 
    0xa, 0x143, 0xb, 0xa, 0x3, 0xa, 0x5, 0xa, 0x146, 0xa, 0xa, 0x3, 0xa, 
    0x7, 0xa, 0x149, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x14c, 0xb, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x7, 0xa, 0x150, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x153, 
    0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x159, 0xa, 
    0xb, 0xc, 0xb, 0xe, 0xb, 0x15c, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 
    0x160, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x163, 0xb, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x7, 0xb, 0x167, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x16a, 0xb, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x16e, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 
    0xb, 0x172, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x175, 0xb, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x5, 0xb, 0x179, 0xa, 0xb, 0x5, 0xb, 0x17b, 0xa, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x7, 0xc, 0x17f, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x182, 
    0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x186, 0xa, 0xc, 0xc, 0xc, 0xe, 
    0xc, 0x189, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x18d, 0xa, 0xc, 
    0xc, 0xc, 0xe, 0xc, 0x190, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x194, 
    0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x198, 0xa, 0xc, 0xc, 0xc, 0xe, 
    0xc, 0x19b, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x1a0, 
    0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x1a4, 0xa, 0xd, 0xc, 0xd, 0xe, 
    0xd, 0x1a7, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x1ab, 0xa, 0xd, 
    0xc, 0xd, 0xe, 0xd, 0x1ae, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x1b2, 
    0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x1b5, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 
    0xd, 0x1b9, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x1bd, 0xa, 0xd, 
    0xc, 0xd, 0xe, 0xd, 0x1c0, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 
    0xd, 0x1c5, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x1c9, 0xa, 0xe, 
    0xc, 0xe, 0xe, 0xe, 0x1cc, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x1d0, 
    0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x1d3, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 
    0xe, 0x1d7, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x1da, 0xb, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x5, 0xe, 0x1de, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x1e2, 
    0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x1e5, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x5, 0xe, 0x1ea, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x1ee, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x1f1, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 
    0xf, 0x1f5, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x1f8, 0xb, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x7, 0xf, 0x1fc, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x1ff, 0xb, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x203, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x7, 0xf, 0x207, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x20a, 0xb, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x20f, 0xa, 0xf, 0x3, 0x10, 0x3, 
    0x10, 0x7, 0x10, 0x213, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x216, 0xb, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x21a, 0xa, 0x10, 0xc, 0x10, 
    0xe, 0x10, 0x21d, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x221, 
    0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x224, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x5, 0x10, 0x228, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0x22c, 
    0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x22f, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x5, 0x10, 0x234, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 
    0x238, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x23b, 0xb, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x7, 0x11, 0x23f, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x242, 
    0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x246, 0xa, 0x11, 0xc, 0x11, 
    0xe, 0x11, 0x249, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x24d, 
    0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x251, 0xa, 0x11, 0xc, 0x11, 
    0xe, 0x11, 0x254, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 
    0x259, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x25d, 0xa, 0x12, 
    0xc, 0x12, 0xe, 0x12, 0x260, 0xb, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 
    0x264, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x267, 0xb, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x7, 0x12, 0x26b, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x26e, 
    0xb, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x272, 0xa, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x7, 0x12, 0x276, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x279, 
    0xb, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x27e, 0xa, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x282, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 
    0x285, 0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x289, 0xa, 0x13, 
    0xc, 0x13, 0xe, 0x13, 0x28c, 0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 
    0x290, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x293, 0xb, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x5, 0x13, 0x297, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 
    0x29b, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x29e, 0xb, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x5, 0x13, 0x2a2, 0xa, 0x13, 0x5, 0x13, 0x2a4, 0xa, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x2a8, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 
    0x2ab, 0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x2af, 0xa, 0x14, 
    0xc, 0x14, 0xe, 0x14, 0x2b2, 0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 
    0x2b6, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x2b9, 0xb, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x5, 0x14, 0x2bd, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 
    0x2c1, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x2c4, 0xb, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x2c9, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x2d1, 0xa, 0x17, 
    0xc, 0x17, 0xe, 0x17, 0x2d4, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 
    0x2d8, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x2db, 0xb, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x7, 0x17, 0x2df, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x2e2, 
    0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x5, 0x1a, 
    0x2ef, 0xa, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x2f2, 0xa, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x2f9, 0xa, 0x1a, 
    0xc, 0x1a, 0xe, 0x1a, 0x2fc, 0xb, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x2ff, 
    0xa, 0x1a, 0x5, 0x1a, 0x301, 0xa, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x304, 
    0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x309, 0xa, 0x1a, 
    0x5, 0x1a, 0x30b, 0xa, 0x1a, 0x3, 0x1b, 0x5, 0x1b, 0x30e, 0xa, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x313, 0xa, 0x1b, 0xc, 0x1b, 
    0xe, 0x1b, 0x316, 0xb, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x5, 0x20, 0x32a, 0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 
    0x21, 0x335, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x340, 
    0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
    0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x34b, 0xa, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 
    0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x356, 0xa, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
    0x25, 0x3, 0x25, 0x5, 0x25, 0x361, 0xa, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
    0x26, 0x5, 0x26, 0x36c, 0xa, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 
    0x27, 0x377, 0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x37f, 0xa, 0x28, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x5, 0x29, 0x384, 0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
    0x2, 0x2, 0x2b, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
    0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 
    0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 
    0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x2, 0x9, 0x3, 0x2, 0x48, 
    0x54, 0x4, 0x2, 0x6, 0x6, 0xc, 0xc, 0x3, 0x2, 0x62, 0x63, 0x3, 0x2, 
    0x64, 0x65, 0x3, 0x2, 0x66, 0x67, 0x3, 0x2, 0x68, 0x69, 0x5, 0x2, 0x4, 
    0x8, 0xa, 0xf, 0x12, 0x47, 0x2, 0x3ef, 0x2, 0x54, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x84, 0x3, 0x2, 0x2, 0x2, 0x6, 0x86, 0x3, 0x2, 0x2, 0x2, 0x8, 0xb9, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xc, 0x109, 0x3, 
    0x2, 0x2, 0x2, 0xe, 0x113, 0x3, 0x2, 0x2, 0x2, 0x10, 0x12c, 0x3, 0x2, 
    0x2, 0x2, 0x12, 0x145, 0x3, 0x2, 0x2, 0x2, 0x14, 0x17a, 0x3, 0x2, 0x2, 
    0x2, 0x16, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x18, 0x1c4, 0x3, 0x2, 0x2, 0x2, 
    0x1a, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x1e, 
    0x233, 0x3, 0x2, 0x2, 0x2, 0x20, 0x258, 0x3, 0x2, 0x2, 0x2, 0x22, 0x27d, 
    0x3, 0x2, 0x2, 0x2, 0x24, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x26, 0x2c8, 0x3, 
    0x2, 0x2, 0x2, 0x28, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2cc, 0x3, 0x2, 
    0x2, 0x2, 0x2c, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2e5, 0x3, 0x2, 0x2, 
    0x2, 0x30, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x32, 0x30a, 0x3, 0x2, 0x2, 0x2, 
    0x34, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x36, 0x317, 0x3, 0x2, 0x2, 0x2, 0x38, 
    0x319, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x31f, 
    0x3, 0x2, 0x2, 0x2, 0x3e, 0x329, 0x3, 0x2, 0x2, 0x2, 0x40, 0x334, 0x3, 
    0x2, 0x2, 0x2, 0x42, 0x33f, 0x3, 0x2, 0x2, 0x2, 0x44, 0x34a, 0x3, 0x2, 
    0x2, 0x2, 0x46, 0x355, 0x3, 0x2, 0x2, 0x2, 0x48, 0x360, 0x3, 0x2, 0x2, 
    0x2, 0x4a, 0x36b, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x376, 0x3, 0x2, 0x2, 0x2, 
    0x4e, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x50, 0x383, 0x3, 0x2, 0x2, 0x2, 0x52, 
    0x385, 0x3, 0x2, 0x2, 0x2, 0x54, 0x58, 0x5, 0x2c, 0x17, 0x2, 0x55, 0x57, 
    0x7, 0x5e, 0x2, 0x2, 0x56, 0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 0x5a, 0x3, 
    0x2, 0x2, 0x2, 0x58, 0x56, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x59, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x58, 0x3, 0x2, 0x2, 
    0x2, 0x5b, 0x5d, 0x5, 0x2e, 0x18, 0x2, 0x5c, 0x5b, 0x3, 0x2, 0x2, 0x2, 
    0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x67, 0x3, 0x2, 0x2, 0x2, 0x5e, 
    0x60, 0x7, 0x5e, 0x2, 0x2, 0x5f, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x63, 
    0x3, 0x2, 0x2, 0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x3, 
    0x2, 0x2, 0x2, 0x62, 0x64, 0x3, 0x2, 0x2, 0x2, 0x63, 0x61, 0x3, 0x2, 
    0x2, 0x2, 0x64, 0x66, 0x5, 0x30, 0x19, 0x2, 0x65, 0x61, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0x69, 0x3, 0x2, 0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 
    0x67, 0x68, 0x3, 0x2, 0x2, 0x2, 0x68, 0x73, 0x3, 0x2, 0x2, 0x2, 0x69, 
    0x67, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6c, 0x7, 0x5e, 0x2, 0x2, 0x6b, 0x6a, 
    0x3, 0x2, 0x2, 0x2, 0x6c, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6b, 0x3, 
    0x2, 0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x70, 0x3, 0x2, 
    0x2, 0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x70, 0x72, 0x5, 0x4, 0x3, 
    0x2, 0x71, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x72, 0x75, 0x3, 0x2, 0x2, 0x2, 
    0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 
    0x79, 0x3, 0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 0x76, 0x78, 
    0x7, 0x5e, 0x2, 0x2, 0x77, 0x76, 0x3, 0x2, 0x2, 0x2, 0x78, 0x7b, 0x3, 
    0x2, 0x2, 0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 0x2, 
    0x2, 0x2, 0x7a, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x79, 0x3, 0x2, 0x2, 
    0x2, 0x7c, 0x7d, 0x7, 0x2, 0x2, 0x3, 0x7d, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x7e, 0x7f, 0x5, 0xa, 0x6, 0x2, 0x7f, 0x80, 0x8, 0x3, 0x1, 0x2, 0x80, 
    0x85, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x5, 0x6, 0x4, 0x2, 0x82, 0x83, 
    0x8, 0x3, 0x1, 0x2, 0x83, 0x85, 0x3, 0x2, 0x2, 0x2, 0x84, 0x7e, 0x3, 
    0x2, 0x2, 0x2, 0x84, 0x81, 0x3, 0x2, 0x2, 0x2, 0x85, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x86, 0x8a, 0x5, 0x50, 0x29, 0x2, 0x87, 0x89, 0x7, 0x5e, 0x2, 
    0x2, 0x88, 0x87, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8c, 0x3, 0x2, 0x2, 0x2, 
    0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 
    0x8d, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x91, 
    0x7, 0x95, 0x2, 0x2, 0x8e, 0x90, 0x7, 0x5e, 0x2, 0x2, 0x8f, 0x8e, 0x3, 
    0x2, 0x2, 0x2, 0x90, 0x93, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8f, 0x3, 0x2, 
    0x2, 0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x94, 0x3, 0x2, 0x2, 
    0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x94, 0x98, 0x7, 0xb, 0x2, 0x2, 
    0x95, 0x97, 0x7, 0x5e, 0x2, 0x2, 0x96, 0x95, 0x3, 0x2, 0x2, 0x2, 0x97, 
    0x9a, 0x3, 0x2, 0x2, 0x2, 0x98, 0x96, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 
    0x3, 0x2, 0x2, 0x2, 0x99, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x98, 0x3, 
    0x2, 0x2, 0x2, 0x9b, 0x9f, 0x7, 0x9c, 0x2, 0x2, 0x9c, 0x9e, 0x7, 0x5e, 
    0x2, 0x2, 0x9d, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa1, 0x3, 0x2, 0x2, 
    0x2, 0x9f, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x3, 0x2, 0x2, 0x2, 
    0xa0, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa2, 
    0xa4, 0x5, 0x8, 0x5, 0x2, 0xa3, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa7, 
    0x3, 0x2, 0x2, 0x2, 0xa5, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x3, 
    0x2, 0x2, 0x2, 0xa6, 0xab, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa5, 0x3, 0x2, 
    0x2, 0x2, 0xa8, 0xaa, 0x7, 0x5e, 0x2, 0x2, 0xa9, 0xa8, 0x3, 0x2, 0x2, 
    0x2, 0xaa, 0xad, 0x3, 0x2, 0x2, 0x2, 0xab, 0xa9, 0x3, 0x2, 0x2, 0x2, 
    0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 0xae, 0x3, 0x2, 0x2, 0x2, 0xad, 
    0xab, 0x3, 0x2, 0x2, 0x2, 0xae, 0xb2, 0x7, 0x9d, 0x2, 0x2, 0xaf, 0xb1, 
    0x7, 0x5e, 0x2, 0x2, 0xb0, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb4, 0x3, 
    0x2, 0x2, 0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x3, 0x2, 
    0x2, 0x2, 0xb3, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb2, 0x3, 0x2, 0x2, 
    0x2, 0xb5, 0xb6, 0x7, 0x94, 0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 
    0xb7, 0xb8, 0x8, 0x4, 0x1, 0x2, 0xb8, 0x7, 0x3, 0x2, 0x2, 0x2, 0xb9, 
    0xbd, 0x5, 0x50, 0x29, 0x2, 0xba, 0xbc, 0x7, 0x5e, 0x2, 0x2, 0xbb, 0xba, 
    0x3, 0x2, 0x2, 0x2, 0xbc, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbb, 0x3, 
    0x2, 0x2, 0x2, 0xbd, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xc0, 0x3, 0x2, 
    0x2, 0x2, 0xbf, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc4, 0x7, 0x95, 0x2, 
    0x2, 0xc1, 0xc3, 0x7, 0x5e, 0x2, 0x2, 0xc2, 0xc1, 0x3, 0x2, 0x2, 0x2, 
    0xc3, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc4, 
    0xc5, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc4, 
    0x3, 0x2, 0x2, 0x2, 0xc7, 0xcb, 0x5, 0x28, 0x15, 0x2, 0xc8, 0xca, 0x7, 
    0x5e, 0x2, 0x2, 0xc9, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcd, 0x3, 0x2, 
    0x2, 0x2, 0xcb, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x3, 0x2, 0x2, 
    0x2, 0xcc, 0xce, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xcb, 0x3, 0x2, 0x2, 0x2, 
    0xce, 0xcf, 0x7, 0x94, 0x2, 0x2, 0xcf, 0xd0, 0x8, 0x5, 0x1, 0x2, 0xd0, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd5, 0x5, 0x50, 0x29, 0x2, 0xd2, 0xd4, 
    0x7, 0x5e, 0x2, 0x2, 0xd3, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd7, 0x3, 
    0x2, 0x2, 0x2, 0xd5, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x3, 0x2, 
    0x2, 0x2, 0xd6, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd5, 0x3, 0x2, 0x2, 
    0x2, 0xd8, 0xdc, 0x5, 0xc, 0x7, 0x2, 0xd9, 0xdb, 0x7, 0x5e, 0x2, 0x2, 
    0xda, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xde, 0x3, 0x2, 0x2, 0x2, 0xdc, 
    0xda, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdf, 
    0x3, 0x2, 0x2, 0x2, 0xde, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x7, 
    0x94, 0x2, 0x2, 0xe0, 0xe1, 0x8, 0x6, 0x1, 0x2, 0xe1, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0xe2, 0xe3, 0x5, 0xe, 0x8, 0x2, 0xe3, 0xe4, 0x8, 0x7, 0x1, 
    0x2, 0xe4, 0x10a, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x5, 0x10, 0x9, 0x2, 
    0xe6, 0xe7, 0x8, 0x7, 0x1, 0x2, 0xe7, 0x10a, 0x3, 0x2, 0x2, 0x2, 0xe8, 
    0xe9, 0x5, 0x12, 0xa, 0x2, 0xe9, 0xea, 0x8, 0x7, 0x1, 0x2, 0xea, 0x10a, 
    0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x5, 0x14, 0xb, 0x2, 0xec, 0xed, 0x8, 
    0x7, 0x1, 0x2, 0xed, 0x10a, 0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x5, 0x16, 
    0xc, 0x2, 0xef, 0xf0, 0x8, 0x7, 0x1, 0x2, 0xf0, 0x10a, 0x3, 0x2, 0x2, 
    0x2, 0xf1, 0xf2, 0x5, 0x18, 0xd, 0x2, 0xf2, 0xf3, 0x8, 0x7, 0x1, 0x2, 
    0xf3, 0x10a, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0x5, 0x1a, 0xe, 0x2, 0xf5, 
    0xf6, 0x8, 0x7, 0x1, 0x2, 0xf6, 0x10a, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 
    0x5, 0x1c, 0xf, 0x2, 0xf8, 0xf9, 0x8, 0x7, 0x1, 0x2, 0xf9, 0x10a, 0x3, 
    0x2, 0x2, 0x2, 0xfa, 0xfb, 0x5, 0x1e, 0x10, 0x2, 0xfb, 0xfc, 0x8, 0x7, 
    0x1, 0x2, 0xfc, 0x10a, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x5, 0x20, 0x11, 
    0x2, 0xfe, 0xff, 0x8, 0x7, 0x1, 0x2, 0xff, 0x10a, 0x3, 0x2, 0x2, 0x2, 
    0x100, 0x101, 0x5, 0x22, 0x12, 0x2, 0x101, 0x102, 0x8, 0x7, 0x1, 0x2, 
    0x102, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x5, 0x24, 0x13, 0x2, 
    0x104, 0x105, 0x8, 0x7, 0x1, 0x2, 0x105, 0x10a, 0x3, 0x2, 0x2, 0x2, 
    0x106, 0x107, 0x5, 0x26, 0x14, 0x2, 0x107, 0x108, 0x8, 0x7, 0x1, 0x2, 
    0x108, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x109, 0xe2, 0x3, 0x2, 0x2, 0x2, 0x109, 
    0xe5, 0x3, 0x2, 0x2, 0x2, 0x109, 0xe8, 0x3, 0x2, 0x2, 0x2, 0x109, 0xeb, 
    0x3, 0x2, 0x2, 0x2, 0x109, 0xee, 0x3, 0x2, 0x2, 0x2, 0x109, 0xf1, 0x3, 
    0x2, 0x2, 0x2, 0x109, 0xf4, 0x3, 0x2, 0x2, 0x2, 0x109, 0xf7, 0x3, 0x2, 
    0x2, 0x2, 0x109, 0xfa, 0x3, 0x2, 0x2, 0x2, 0x109, 0xfd, 0x3, 0x2, 0x2, 
    0x2, 0x109, 0x100, 0x3, 0x2, 0x2, 0x2, 0x109, 0x103, 0x3, 0x2, 0x2, 
    0x2, 0x109, 0x106, 0x3, 0x2, 0x2, 0x2, 0x10a, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x10b, 0x10f, 0x7, 0x95, 0x2, 0x2, 0x10c, 0x10e, 0x7, 0x5e, 0x2, 0x2, 
    0x10d, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x111, 0x3, 0x2, 0x2, 0x2, 
    0x10f, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 0x3, 0x2, 0x2, 0x2, 
    0x110, 0x112, 0x3, 0x2, 0x2, 0x2, 0x111, 0x10f, 0x3, 0x2, 0x2, 0x2, 
    0x112, 0x114, 0x7, 0x48, 0x2, 0x2, 0x113, 0x10b, 0x3, 0x2, 0x2, 0x2, 
    0x113, 0x114, 0x3, 0x2, 0x2, 0x2, 0x114, 0x118, 0x3, 0x2, 0x2, 0x2, 
    0x115, 0x117, 0x7, 0x5e, 0x2, 0x2, 0x116, 0x115, 0x3, 0x2, 0x2, 0x2, 
    0x117, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x118, 0x116, 0x3, 0x2, 0x2, 0x2, 
    0x118, 0x119, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11b, 0x3, 0x2, 0x2, 0x2, 
    0x11a, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11f, 0x7, 0x87, 0x2, 0x2, 
    0x11c, 0x11e, 0x7, 0x5e, 0x2, 0x2, 0x11d, 0x11c, 0x3, 0x2, 0x2, 0x2, 
    0x11e, 0x121, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x11d, 0x3, 0x2, 0x2, 0x2, 
    0x11f, 0x120, 0x3, 0x2, 0x2, 0x2, 0x120, 0x122, 0x3, 0x2, 0x2, 0x2, 
    0x121, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x5, 0x36, 0x1c, 0x2, 
    0x123, 0xf, 0x3, 0x2, 0x2, 0x2, 0x124, 0x128, 0x7, 0x95, 0x2, 0x2, 0x125, 
    0x127, 0x7, 0x5e, 0x2, 0x2, 0x126, 0x125, 0x3, 0x2, 0x2, 0x2, 0x127, 
    0x12a, 0x3, 0x2, 0x2, 0x2, 0x128, 0x126, 0x3, 0x2, 0x2, 0x2, 0x128, 
    0x129, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12a, 
    0x128, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12d, 0x7, 0x49, 0x2, 0x2, 0x12c, 
    0x124, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12d, 
    0x131, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x130, 0x7, 0x5e, 0x2, 0x2, 0x12f, 
    0x12e, 0x3, 0x2, 0x2, 0x2, 0x130, 0x133, 0x3, 0x2, 0x2, 0x2, 0x131, 
    0x12f, 0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 0x3, 0x2, 0x2, 0x2, 0x132, 
    0x134, 0x3, 0x2, 0x2, 0x2, 0x133, 0x131, 0x3, 0x2, 0x2, 0x2, 0x134, 
    0x138, 0x7, 0x87, 0x2, 0x2, 0x135, 0x137, 0x7, 0x5e, 0x2, 0x2, 0x136, 
    0x135, 0x3, 0x2, 0x2, 0x2, 0x137, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x138, 
    0x136, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 0x3, 0x2, 0x2, 0x2, 0x139, 
    0x13b, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x138, 0x3, 0x2, 0x2, 0x2, 0x13b, 
    0x13c, 0x5, 0x38, 0x1d, 0x2, 0x13c, 0x11, 0x3, 0x2, 0x2, 0x2, 0x13d, 
    0x141, 0x7, 0x95, 0x2, 0x2, 0x13e, 0x140, 0x7, 0x5e, 0x2, 0x2, 0x13f, 
    0x13e, 0x3, 0x2, 0x2, 0x2, 0x140, 0x143, 0x3, 0x2, 0x2, 0x2, 0x141, 
    0x13f, 0x3, 0x2, 0x2, 0x2, 0x141, 0x142, 0x3, 0x2, 0x2, 0x2, 0x142, 
    0x144, 0x3, 0x2, 0x2, 0x2, 0x143, 0x141, 0x3, 0x2, 0x2, 0x2, 0x144, 
    0x146, 0x7, 0x4a, 0x2, 0x2, 0x145, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x145, 
    0x146, 0x3, 0x2, 0x2, 0x2, 0x146, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x147, 
    0x149, 0x7, 0x5e, 0x2, 0x2, 0x148, 0x147, 0x3, 0x2, 0x2, 0x2, 0x149, 
    0x14c, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x148, 0x3, 0x2, 0x2, 0x2, 0x14a, 
    0x14b, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14c, 
    0x14a, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x151, 0x7, 0x87, 0x2, 0x2, 0x14e, 
    0x150, 0x7, 0x5e, 0x2, 0x2, 0x14f, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x150, 
    0x153, 0x3, 0x2, 0x2, 0x2, 0x151, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x151, 
    0x152, 0x3, 0x2, 0x2, 0x2, 0x152, 0x154, 0x3, 0x2, 0x2, 0x2, 0x153, 
    0x151, 0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 0x5, 0x4e, 0x28, 0x2, 0x155, 
    0x13, 0x3, 0x2, 0x2, 0x2, 0x156, 0x15a, 0x7, 0x95, 0x2, 0x2, 0x157, 
    0x159, 0x7, 0x5e, 0x2, 0x2, 0x158, 0x157, 0x3, 0x2, 0x2, 0x2, 0x159, 
    0x15c, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x158, 0x3, 0x2, 0x2, 0x2, 0x15a, 
    0x15b, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x15c, 
    0x15a, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x161, 0x7, 0x4b, 0x2, 0x2, 0x15e, 
    0x160, 0x7, 0x5e, 0x2, 0x2, 0x15f, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x160, 
    0x163, 0x3, 0x2, 0x2, 0x2, 0x161, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x161, 
    0x162, 0x3, 0x2, 0x2, 0x2, 0x162, 0x164, 0x3, 0x2, 0x2, 0x2, 0x163, 
    0x161, 0x3, 0x2, 0x2, 0x2, 0x164, 0x168, 0x7, 0x87, 0x2, 0x2, 0x165, 
    0x167, 0x7, 0x5e, 0x2, 0x2, 0x166, 0x165, 0x3, 0x2, 0x2, 0x2, 0x167, 
    0x16a, 0x3, 0x2, 0x2, 0x2, 0x168, 0x166, 0x3, 0x2, 0x2, 0x2, 0x168, 
    0x169, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16a, 
    0x168, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16d, 0x5, 0x3a, 0x1e, 0x2, 0x16c, 
    0x16e, 0x7, 0x4b, 0x2, 0x2, 0x16d, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16d, 
    0x16e, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x16f, 
    0x173, 0x7, 0x87, 0x2, 0x2, 0x170, 0x172, 0x7, 0x5e, 0x2, 0x2, 0x171, 
    0x170, 0x3, 0x2, 0x2, 0x2, 0x172, 0x175, 0x3, 0x2, 0x2, 0x2, 0x173, 
    0x171, 0x3, 0x2, 0x2, 0x2, 0x173, 0x174, 0x3, 0x2, 0x2, 0x2, 0x174, 
    0x176, 0x3, 0x2, 0x2, 0x2, 0x175, 0x173, 0x3, 0x2, 0x2, 0x2, 0x176, 
    0x178, 0x5, 0x3a, 0x1e, 0x2, 0x177, 0x179, 0x7, 0x4b, 0x2, 0x2, 0x178, 
    0x177, 0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 0x3, 0x2, 0x2, 0x2, 0x179, 
    0x17b, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x156, 0x3, 0x2, 0x2, 0x2, 0x17a, 
    0x16f, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x15, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x180, 
    0x7, 0x95, 0x2, 0x2, 0x17d, 0x17f, 0x7, 0x5e, 0x2, 0x2, 0x17e, 0x17d, 
    0x3, 0x2, 0x2, 0x2, 0x17f, 0x182, 0x3, 0x2, 0x2, 0x2, 0x180, 0x17e, 
    0x3, 0x2, 0x2, 0x2, 0x180, 0x181, 0x3, 0x2, 0x2, 0x2, 0x181, 0x183, 
    0x3, 0x2, 0x2, 0x2, 0x182, 0x180, 0x3, 0x2, 0x2, 0x2, 0x183, 0x187, 
    0x7, 0x4c, 0x2, 0x2, 0x184, 0x186, 0x7, 0x5e, 0x2, 0x2, 0x185, 0x184, 
    0x3, 0x2, 0x2, 0x2, 0x186, 0x189, 0x3, 0x2, 0x2, 0x2, 0x187, 0x185, 
    0x3, 0x2, 0x2, 0x2, 0x187, 0x188, 0x3, 0x2, 0x2, 0x2, 0x188, 0x18a, 
    0x3, 0x2, 0x2, 0x2, 0x189, 0x187, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18e, 
    0x7, 0x87, 0x2, 0x2, 0x18b, 0x18d, 0x7, 0x5e, 0x2, 0x2, 0x18c, 0x18b, 
    0x3, 0x2, 0x2, 0x2, 0x18d, 0x190, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18c, 
    0x3, 0x2, 0x2, 0x2, 0x18e, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x191, 
    0x3, 0x2, 0x2, 0x2, 0x190, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x191, 0x193, 
    0x5, 0x3c, 0x1f, 0x2, 0x192, 0x194, 0x7, 0x4c, 0x2, 0x2, 0x193, 0x192, 
    0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 0x3, 0x2, 0x2, 0x2, 0x194, 0x1a0, 
    0x3, 0x2, 0x2, 0x2, 0x195, 0x199, 0x7, 0x87, 0x2, 0x2, 0x196, 0x198, 
    0x7, 0x5e, 0x2, 0x2, 0x197, 0x196, 0x3, 0x2, 0x2, 0x2, 0x198, 0x19b, 
    0x3, 0x2, 0x2, 0x2, 0x199, 0x197, 0x3, 0x2, 0x2, 0x2, 0x199, 0x19a, 
    0x3, 0x2, 0x2, 0x2, 0x19a, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x199, 
    0x3, 0x2, 0x2, 0x2, 0x19c, 0x19d, 0x5, 0x3c, 0x1f, 0x2, 0x19d, 0x19e, 
    0x7, 0x4c, 0x2, 0x2, 0x19e, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x17c, 
    0x3, 0x2, 0x2, 0x2, 0x19f, 0x195, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x1a1, 0x1a5, 0x7, 0x95, 0x2, 0x2, 0x1a2, 0x1a4, 0x7, 
    0x5e, 0x2, 0x2, 0x1a3, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a7, 0x3, 
    0x2, 0x2, 0x2, 0x1a5, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a6, 0x3, 
    0x2, 0x2, 0x2, 0x1a6, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a5, 0x3, 
    0x2, 0x2, 0x2, 0x1a8, 0x1ac, 0x7, 0x4d, 0x2, 0x2, 0x1a9, 0x1ab, 0x7, 
    0x5e, 0x2, 0x2, 0x1aa, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ae, 0x3, 
    0x2, 0x2, 0x2, 0x1ac, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1ad, 0x3, 
    0x2, 0x2, 0x2, 0x1ad, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1ac, 0x3, 
    0x2, 0x2, 0x2, 0x1af, 0x1b3, 0x7, 0x87, 0x2, 0x2, 0x1b0, 0x1b2, 0x7, 
    0x5e, 0x2, 0x2, 0x1b1, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b5, 0x3, 
    0x2, 0x2, 0x2, 0x1b3, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b4, 0x3, 
    0x2, 0x2, 0x2, 0x1b4, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b3, 0x3, 
    0x2, 0x2, 0x2, 0x1b6, 0x1b8, 0x5, 0x3e, 0x20, 0x2, 0x1b7, 0x1b9, 0x7, 
    0x4d, 0x2, 0x2, 0x1b8, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b9, 0x3, 
    0x2, 0x2, 0x2, 0x1b9, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1be, 0x7, 
    0x87, 0x2, 0x2, 0x1bb, 0x1bd, 0x7, 0x5e, 0x2, 0x2, 0x1bc, 0x1bb, 0x3, 
    0x2, 0x2, 0x2, 0x1bd, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bc, 0x3, 
    0x2, 0x2, 0x2, 0x1be, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c1, 0x3, 
    0x2, 0x2, 0x2, 0x1c0, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c2, 0x5, 
    0x3e, 0x20, 0x2, 0x1c2, 0x1c3, 0x7, 0x4d, 0x2, 0x2, 0x1c3, 0x1c5, 0x3, 
    0x2, 0x2, 0x2, 0x1c4, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1ba, 0x3, 
    0x2, 0x2, 0x2, 0x1c5, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1ca, 0x7, 0x95, 
    0x2, 0x2, 0x1c7, 0x1c9, 0x7, 0x5e, 0x2, 0x2, 0x1c8, 0x1c7, 0x3, 0x2, 
    0x2, 0x2, 0x1c9, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1c8, 0x3, 0x2, 
    0x2, 0x2, 0x1ca, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1cd, 0x3, 0x2, 
    0x2, 0x2, 0x1cc, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1d1, 0x7, 0x4e, 
    0x2, 0x2, 0x1ce, 0x1d0, 0x7, 0x5e, 0x2, 0x2, 0x1cf, 0x1ce, 0x3, 0x2, 
    0x2, 0x2, 0x1d0, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1cf, 0x3, 0x2, 
    0x2, 0x2, 0x1d1, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d4, 0x3, 0x2, 
    0x2, 0x2, 0x1d3, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d8, 0x7, 0x87, 
    0x2, 0x2, 0x1d5, 0x1d7, 0x7, 0x5e, 0x2, 0x2, 0x1d6, 0x1d5, 0x3, 0x2, 
    0x2, 0x2, 0x1d7, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1d6, 0x3, 0x2, 
    0x2, 0x2, 0x1d8, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1db, 0x3, 0x2, 
    0x2, 0x2, 0x1da, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dd, 0x5, 0x40, 
    0x21, 0x2, 0x1dc, 0x1de, 0x7, 0x4e, 0x2, 0x2, 0x1dd, 0x1dc, 0x3, 0x2, 
    0x2, 0x2, 0x1dd, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1ea, 0x3, 0x2, 
    0x2, 0x2, 0x1df, 0x1e3, 0x7, 0x87, 0x2, 0x2, 0x1e0, 0x1e2, 0x7, 0x5e, 
    0x2, 0x2, 0x1e1, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e5, 0x3, 0x2, 
    0x2, 0x2, 0x1e3, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x3, 0x2, 
    0x2, 0x2, 0x1e4, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e3, 0x3, 0x2, 
    0x2, 0x2, 0x1e6, 0x1e7, 0x5, 0x40, 0x21, 0x2, 0x1e7, 0x1e8, 0x7, 0x4e, 
    0x2, 0x2, 0x1e8, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1c6, 0x3, 0x2, 
    0x2, 0x2, 0x1e9, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x1eb, 0x1ef, 0x7, 0x95, 0x2, 0x2, 0x1ec, 0x1ee, 0x7, 0x5e, 0x2, 
    0x2, 0x1ed, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1f1, 0x3, 0x2, 0x2, 
    0x2, 0x1ef, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f0, 0x3, 0x2, 0x2, 
    0x2, 0x1f0, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1ef, 0x3, 0x2, 0x2, 
    0x2, 0x1f2, 0x1f6, 0x7, 0x4f, 0x2, 0x2, 0x1f3, 0x1f5, 0x7, 0x5e, 0x2, 
    0x2, 0x1f4, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f8, 0x3, 0x2, 0x2, 
    0x2, 0x1f6, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f7, 0x3, 0x2, 0x2, 
    0x2, 0x1f7, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f6, 0x3, 0x2, 0x2, 
    0x2, 0x1f9, 0x1fd, 0x7, 0x87, 0x2, 0x2, 0x1fa, 0x1fc, 0x7, 0x5e, 0x2, 
    0x2, 0x1fb, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1ff, 0x3, 0x2, 0x2, 
    0x2, 0x1fd, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fe, 0x3, 0x2, 0x2, 
    0x2, 0x1fe, 0x200, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x1fd, 0x3, 0x2, 0x2, 
    0x2, 0x200, 0x202, 0x5, 0x42, 0x22, 0x2, 0x201, 0x203, 0x7, 0x4f, 0x2, 
    0x2, 0x202, 0x201, 0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 0x3, 0x2, 0x2, 
    0x2, 0x203, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x204, 0x208, 0x7, 0x87, 0x2, 
    0x2, 0x205, 0x207, 0x7, 0x5e, 0x2, 0x2, 0x206, 0x205, 0x3, 0x2, 0x2, 
    0x2, 0x207, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x208, 0x206, 0x3, 0x2, 0x2, 
    0x2, 0x208, 0x209, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20b, 0x3, 0x2, 0x2, 
    0x2, 0x20a, 0x208, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x20c, 0x5, 0x42, 0x22, 
    0x2, 0x20c, 0x20d, 0x7, 0x4f, 0x2, 0x2, 0x20d, 0x20f, 0x3, 0x2, 0x2, 
    0x2, 0x20e, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x204, 0x3, 0x2, 0x2, 
    0x2, 0x20f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x210, 0x214, 0x7, 0x95, 0x2, 
    0x2, 0x211, 0x213, 0x7, 0x5e, 0x2, 0x2, 0x212, 0x211, 0x3, 0x2, 0x2, 
    0x2, 0x213, 0x216, 0x3, 0x2, 0x2, 0x2, 0x214, 0x212, 0x3, 0x2, 0x2, 
    0x2, 0x214, 0x215, 0x3, 0x2, 0x2, 0x2, 0x215, 0x217, 0x3, 0x2, 0x2, 
    0x2, 0x216, 0x214, 0x3, 0x2, 0x2, 0x2, 0x217, 0x21b, 0x7, 0x50, 0x2, 
    0x2, 0x218, 0x21a, 0x7, 0x5e, 0x2, 0x2, 0x219, 0x218, 0x3, 0x2, 0x2, 
    0x2, 0x21a, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x219, 0x3, 0x2, 0x2, 
    0x2, 0x21b, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21e, 0x3, 0x2, 0x2, 
    0x2, 0x21d, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x222, 0x7, 0x87, 0x2, 
    0x2, 0x21f, 0x221, 0x7, 0x5e, 0x2, 0x2, 0x220, 0x21f, 0x3, 0x2, 0x2, 
    0x2, 0x221, 0x224, 0x3, 0x2, 0x2, 0x2, 0x222, 0x220, 0x3, 0x2, 0x2, 
    0x2, 0x222, 0x223, 0x3, 0x2, 0x2, 0x2, 0x223, 0x225, 0x3, 0x2, 0x2, 
    0x2, 0x224, 0x222, 0x3, 0x2, 0x2, 0x2, 0x225, 0x227, 0x5, 0x44, 0x23, 
    0x2, 0x226, 0x228, 0x7, 0x50, 0x2, 0x2, 0x227, 0x226, 0x3, 0x2, 0x2, 
    0x2, 0x227, 0x228, 0x3, 0x2, 0x2, 0x2, 0x228, 0x234, 0x3, 0x2, 0x2, 
    0x2, 0x229, 0x22d, 0x7, 0x87, 0x2, 0x2, 0x22a, 0x22c, 0x7, 0x5e, 0x2, 
    0x2, 0x22b, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22f, 0x3, 0x2, 0x2, 
    0x2, 0x22d, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x22e, 0x3, 0x2, 0x2, 
    0x2, 0x22e, 0x230, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x22d, 0x3, 0x2, 0x2, 
    0x2, 0x230, 0x231, 0x5, 0x44, 0x23, 0x2, 0x231, 0x232, 0x7, 0x50, 0x2, 
    0x2, 0x232, 0x234, 0x3, 0x2, 0x2, 0x2, 0x233, 0x210, 0x3, 0x2, 0x2, 
    0x2, 0x233, 0x229, 0x3, 0x2, 0x2, 0x2, 0x234, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x235, 0x239, 0x7, 0x95, 0x2, 0x2, 0x236, 0x238, 0x7, 0x5e, 0x2, 0x2, 
    0x237, 0x236, 0x3, 0x2, 0x2, 0x2, 0x238, 0x23b, 0x3, 0x2, 0x2, 0x2, 
    0x239, 0x237, 0x3, 0x2, 0x2, 0x2, 0x239, 0x23a, 0x3, 0x2, 0x2, 0x2, 
    0x23a, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x239, 0x3, 0x2, 0x2, 0x2, 
    0x23c, 0x240, 0x7, 0x51, 0x2, 0x2, 0x23d, 0x23f, 0x7, 0x5e, 0x2, 0x2, 
    0x23e, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x242, 0x3, 0x2, 0x2, 0x2, 
    0x240, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x240, 0x241, 0x3, 0x2, 0x2, 0x2, 
    0x241, 0x243, 0x3, 0x2, 0x2, 0x2, 0x242, 0x240, 0x3, 0x2, 0x2, 0x2, 
    0x243, 0x247, 0x7, 0x87, 0x2, 0x2, 0x244, 0x246, 0x7, 0x5e, 0x2, 0x2, 
    0x245, 0x244, 0x3, 0x2, 0x2, 0x2, 0x246, 0x249, 0x3, 0x2, 0x2, 0x2, 
    0x247, 0x245, 0x3, 0x2, 0x2, 0x2, 0x247, 0x248, 0x3, 0x2, 0x2, 0x2, 
    0x248, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x249, 0x247, 0x3, 0x2, 0x2, 0x2, 
    0x24a, 0x24c, 0x5, 0x46, 0x24, 0x2, 0x24b, 0x24d, 0x7, 0x51, 0x2, 0x2, 
    0x24c, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24d, 0x3, 0x2, 0x2, 0x2, 
    0x24d, 0x259, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x252, 0x7, 0x87, 0x2, 0x2, 
    0x24f, 0x251, 0x7, 0x5e, 0x2, 0x2, 0x250, 0x24f, 0x3, 0x2, 0x2, 0x2, 
    0x251, 0x254, 0x3, 0x2, 0x2, 0x2, 0x252, 0x250, 0x3, 0x2, 0x2, 0x2, 
    0x252, 0x253, 0x3, 0x2, 0x2, 0x2, 0x253, 0x255, 0x3, 0x2, 0x2, 0x2, 
    0x254, 0x252, 0x3, 0x2, 0x2, 0x2, 0x255, 0x256, 0x5, 0x46, 0x24, 0x2, 
    0x256, 0x257, 0x7, 0x51, 0x2, 0x2, 0x257, 0x259, 0x3, 0x2, 0x2, 0x2, 
    0x258, 0x235, 0x3, 0x2, 0x2, 0x2, 0x258, 0x24e, 0x3, 0x2, 0x2, 0x2, 
    0x259, 0x21, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25e, 0x7, 0x95, 0x2, 0x2, 
    0x25b, 0x25d, 0x7, 0x5e, 0x2, 0x2, 0x25c, 0x25b, 0x3, 0x2, 0x2, 0x2, 
    0x25d, 0x260, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x25c, 0x3, 0x2, 0x2, 0x2, 
    0x25e, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x261, 0x3, 0x2, 0x2, 0x2, 
    0x260, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x261, 0x265, 0x7, 0x52, 0x2, 0x2, 
    0x262, 0x264, 0x7, 0x5e, 0x2, 0x2, 0x263, 0x262, 0x3, 0x2, 0x2, 0x2, 
    0x264, 0x267, 0x3, 0x2, 0x2, 0x2, 0x265, 0x263, 0x3, 0x2, 0x2, 0x2, 
    0x265, 0x266, 0x3, 0x2, 0x2, 0x2, 0x266, 0x268, 0x3, 0x2, 0x2, 0x2, 
    0x267, 0x265, 0x3, 0x2, 0x2, 0x2, 0x268, 0x26c, 0x7, 0x87, 0x2, 0x2, 
    0x269, 0x26b, 0x7, 0x5e, 0x2, 0x2, 0x26a, 0x269, 0x3, 0x2, 0x2, 0x2, 
    0x26b, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x26a, 0x3, 0x2, 0x2, 0x2, 
    0x26c, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26f, 0x3, 0x2, 0x2, 0x2, 
    0x26e, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x271, 0x5, 0x48, 0x25, 0x2, 
    0x270, 0x272, 0x7, 0x52, 0x2, 0x2, 0x271, 0x270, 0x3, 0x2, 0x2, 0x2, 
    0x271, 0x272, 0x3, 0x2, 0x2, 0x2, 0x272, 0x27e, 0x3, 0x2, 0x2, 0x2, 
    0x273, 0x277, 0x7, 0x87, 0x2, 0x2, 0x274, 0x276, 0x7, 0x5e, 0x2, 0x2, 
    0x275, 0x274, 0x3, 0x2, 0x2, 0x2, 0x276, 0x279, 0x3, 0x2, 0x2, 0x2, 
    0x277, 0x275, 0x3, 0x2, 0x2, 0x2, 0x277, 0x278, 0x3, 0x2, 0x2, 0x2, 
    0x278, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x279, 0x277, 0x3, 0x2, 0x2, 0x2, 
    0x27a, 0x27b, 0x5, 0x48, 0x25, 0x2, 0x27b, 0x27c, 0x7, 0x52, 0x2, 0x2, 
    0x27c, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x25a, 0x3, 0x2, 0x2, 0x2, 
    0x27d, 0x273, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x23, 0x3, 0x2, 0x2, 0x2, 0x27f, 
    0x283, 0x7, 0x95, 0x2, 0x2, 0x280, 0x282, 0x7, 0x5e, 0x2, 0x2, 0x281, 
    0x280, 0x3, 0x2, 0x2, 0x2, 0x282, 0x285, 0x3, 0x2, 0x2, 0x2, 0x283, 
    0x281, 0x3, 0x2, 0x2, 0x2, 0x283, 0x284, 0x3, 0x2, 0x2, 0x2, 0x284, 
    0x286, 0x3, 0x2, 0x2, 0x2, 0x285, 0x283, 0x3, 0x2, 0x2, 0x2, 0x286, 
    0x28a, 0x7, 0x53, 0x2, 0x2, 0x287, 0x289, 0x7, 0x5e, 0x2, 0x2, 0x288, 
    0x287, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x28a, 
    0x288, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28b, 
    0x28d, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x28d, 
    0x291, 0x7, 0x87, 0x2, 0x2, 0x28e, 0x290, 0x7, 0x5e, 0x2, 0x2, 0x28f, 
    0x28e, 0x3, 0x2, 0x2, 0x2, 0x290, 0x293, 0x3, 0x2, 0x2, 0x2, 0x291, 
    0x28f, 0x3, 0x2, 0x2, 0x2, 0x291, 0x292, 0x3, 0x2, 0x2, 0x2, 0x292, 
    0x294, 0x3, 0x2, 0x2, 0x2, 0x293, 0x291, 0x3, 0x2, 0x2, 0x2, 0x294, 
    0x296, 0x5, 0x4a, 0x26, 0x2, 0x295, 0x297, 0x7, 0x53, 0x2, 0x2, 0x296, 
    0x295, 0x3, 0x2, 0x2, 0x2, 0x296, 0x297, 0x3, 0x2, 0x2, 0x2, 0x297, 
    0x2a4, 0x3, 0x2, 0x2, 0x2, 0x298, 0x29c, 0x7, 0x87, 0x2, 0x2, 0x299, 
    0x29b, 0x7, 0x5e, 0x2, 0x2, 0x29a, 0x299, 0x3, 0x2, 0x2, 0x2, 0x29b, 
    0x29e, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x29a, 0x3, 0x2, 0x2, 0x2, 0x29c, 
    0x29d, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x29f, 0x3, 0x2, 0x2, 0x2, 0x29e, 
    0x29c, 0x3, 0x2, 0x2, 0x2, 0x29f, 0x2a1, 0x5, 0x4a, 0x26, 0x2, 0x2a0, 
    0x2a2, 0x7, 0x53, 0x2, 0x2, 0x2a1, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a1, 
    0x2a2, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x2a3, 
    0x27f, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x298, 0x3, 0x2, 0x2, 0x2, 0x2a4, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a9, 0x7, 0x95, 0x2, 0x2, 0x2a6, 
    0x2a8, 0x7, 0x5e, 0x2, 0x2, 0x2a7, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2a8, 
    0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2a9, 
    0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2ab, 
    0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2b0, 0x7, 0x54, 0x2, 0x2, 0x2ad, 
    0x2af, 0x7, 0x5e, 0x2, 0x2, 0x2ae, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x2af, 
    0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2b0, 
    0x2b1, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2b2, 
    0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b7, 0x7, 0x87, 0x2, 0x2, 0x2b4, 
    0x2b6, 0x7, 0x5e, 0x2, 0x2, 0x2b5, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2b6, 
    0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2b7, 
    0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2b8, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2b9, 
    0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2bc, 0x5, 0x4c, 0x27, 0x2, 0x2bb, 
    0x2bd, 0x7, 0x54, 0x2, 0x2, 0x2bc, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2bc, 
    0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2be, 
    0x2c2, 0x7, 0x87, 0x2, 0x2, 0x2bf, 0x2c1, 0x7, 0x5e, 0x2, 0x2, 0x2c0, 
    0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2c2, 
    0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2c3, 
    0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2c4, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2c5, 
    0x2c6, 0x5, 0x4c, 0x27, 0x2, 0x2c6, 0x2c7, 0x7, 0x54, 0x2, 0x2, 0x2c7, 
    0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2c8, 
    0x2be, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2cb, 
    0x5, 0x2a, 0x16, 0x2, 0x2cb, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2cd, 
    0x9, 0x2, 0x2, 0x2, 0x2cd, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2d2, 0x7, 
    0xe, 0x2, 0x2, 0x2cf, 0x2d1, 0x7, 0x5e, 0x2, 0x2, 0x2d0, 0x2cf, 0x3, 
    0x2, 0x2, 0x2, 0x2d1, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d0, 0x3, 
    0x2, 0x2, 0x2, 0x2d2, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d5, 0x3, 
    0x2, 0x2, 0x2, 0x2d4, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2d9, 0x7, 
    0x87, 0x2, 0x2, 0x2d6, 0x2d8, 0x7, 0x5e, 0x2, 0x2, 0x2d7, 0x2d6, 0x3, 
    0x2, 0x2, 0x2, 0x2d8, 0x2db, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2d7, 0x3, 
    0x2, 0x2, 0x2, 0x2d9, 0x2da, 0x3, 0x2, 0x2, 0x2, 0x2da, 0x2dc, 0x3, 
    0x2, 0x2, 0x2, 0x2db, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2e0, 0x5, 
    0x50, 0x29, 0x2, 0x2dd, 0x2df, 0x7, 0x5e, 0x2, 0x2, 0x2de, 0x2dd, 0x3, 
    0x2, 0x2, 0x2, 0x2df, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2de, 0x3, 
    0x2, 0x2, 0x2, 0x2e0, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2e3, 0x3, 
    0x2, 0x2, 0x2, 0x2e2, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e4, 0x7, 
    0x94, 0x2, 0x2, 0x2e4, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e6, 0x7, 
    0xa, 0x2, 0x2, 0x2e6, 0x2e7, 0x5, 0x34, 0x1b, 0x2, 0x2e7, 0x2e8, 0x7, 
    0x94, 0x2, 0x2, 0x2e8, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2ea, 0x7, 
    0xf, 0x2, 0x2, 0x2ea, 0x2eb, 0x5, 0x32, 0x1a, 0x2, 0x2eb, 0x2ec, 0x7, 
    0x94, 0x2, 0x2, 0x2ec, 0x31, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2ef, 0x5, 
    0x34, 0x1b, 0x2, 0x2ee, 0x2ed, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2ef, 0x3, 
    0x2, 0x2, 0x2, 0x2ef, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2f0, 0x2f2, 0x7, 
    0x96, 0x2, 0x2, 0x2f1, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2f2, 0x3, 
    0x2, 0x2, 0x2, 0x2f2, 0x303, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x304, 0x7, 
    0x74, 0x2, 0x2, 0x2f4, 0x300, 0x7, 0x9c, 0x2, 0x2, 0x2f5, 0x2fa, 0x5, 
    0x32, 0x1a, 0x2, 0x2f6, 0x2f7, 0x7, 0x93, 0x2, 0x2, 0x2f7, 0x2f9, 0x5, 
    0x32, 0x1a, 0x2, 0x2f8, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2fc, 0x3, 
    0x2, 0x2, 0x2, 0x2fa, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2fb, 0x3, 
    0x2, 0x2, 0x2, 0x2fb, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2fa, 0x3, 
    0x2, 0x2, 0x2, 0x2fd, 0x2ff, 0x7, 0x93, 0x2, 0x2, 0x2fe, 0x2fd, 0x3, 
    0x2, 0x2, 0x2, 0x2fe, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x2ff, 0x301, 0x3, 
    0x2, 0x2, 0x2, 0x300, 0x2f5, 0x3, 0x2, 0x2, 0x2, 0x300, 0x301, 0x3, 
    0x2, 0x2, 0x2, 0x301, 0x302, 0x3, 0x2, 0x2, 0x2, 0x302, 0x304, 0x7, 
    0x9d, 0x2, 0x2, 0x303, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x303, 0x2f4, 0x3, 
    0x2, 0x2, 0x2, 0x304, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x305, 0x308, 0x5, 
    0x34, 0x1b, 0x2, 0x306, 0x307, 0x7, 0x4, 0x2, 0x2, 0x307, 0x309, 0x5, 
    0x50, 0x29, 0x2, 0x308, 0x306, 0x3, 0x2, 0x2, 0x2, 0x308, 0x309, 0x3, 
    0x2, 0x2, 0x2, 0x309, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x2f1, 0x3, 
    0x2, 0x2, 0x2, 0x30a, 0x305, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0x30c, 0x30e, 0x7, 0x96, 0x2, 0x2, 0x30d, 0x30c, 0x3, 0x2, 
    0x2, 0x2, 0x30d, 0x30e, 0x3, 0x2, 0x2, 0x2, 0x30e, 0x30f, 0x3, 0x2, 
    0x2, 0x2, 0x30f, 0x314, 0x5, 0x50, 0x29, 0x2, 0x310, 0x311, 0x7, 0x96, 
    0x2, 0x2, 0x311, 0x313, 0x5, 0x50, 0x29, 0x2, 0x312, 0x310, 0x3, 0x2, 
    0x2, 0x2, 0x313, 0x316, 0x3, 0x2, 0x2, 0x2, 0x314, 0x312, 0x3, 0x2, 
    0x2, 0x2, 0x314, 0x315, 0x3, 0x2, 0x2, 0x2, 0x315, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x316, 0x314, 0x3, 0x2, 0x2, 0x2, 0x317, 0x318, 0x9, 0x3, 0x2, 
    0x2, 0x318, 0x37, 0x3, 0x2, 0x2, 0x2, 0x319, 0x31a, 0x7, 0x5f, 0x2, 
    0x2, 0x31a, 0x31b, 0x8, 0x1d, 0x1, 0x2, 0x31b, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x31c, 0x31d, 0x7, 0x6a, 0x2, 0x2, 0x31d, 0x31e, 0x8, 0x1e, 0x1, 
    0x2, 0x31e, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x31f, 0x320, 0x7, 0x6a, 0x2, 
    0x2, 0x320, 0x321, 0x8, 0x1f, 0x1, 0x2, 0x321, 0x3d, 0x3, 0x2, 0x2, 
    0x2, 0x322, 0x32a, 0x9, 0x4, 0x2, 0x2, 0x323, 0x324, 0x7, 0x6e, 0x2, 
    0x2, 0x324, 0x32a, 0x9, 0x5, 0x2, 0x2, 0x325, 0x326, 0x7, 0x6f, 0x2, 
    0x2, 0x326, 0x32a, 0x9, 0x6, 0x2, 0x2, 0x327, 0x328, 0x7, 0x70, 0x2, 
    0x2, 0x328, 0x32a, 0x9, 0x7, 0x2, 0x2, 0x329, 0x322, 0x3, 0x2, 0x2, 
    0x2, 0x329, 0x323, 0x3, 0x2, 0x2, 0x2, 0x329, 0x325, 0x3, 0x2, 0x2, 
    0x2, 0x329, 0x327, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x32b, 0x3, 0x2, 0x2, 
    0x2, 0x32b, 0x32c, 0x8, 0x20, 0x1, 0x2, 0x32c, 0x3f, 0x3, 0x2, 0x2, 
    0x2, 0x32d, 0x335, 0x9, 0x4, 0x2, 0x2, 0x32e, 0x32f, 0x7, 0x6e, 0x2, 
    0x2, 0x32f, 0x335, 0x9, 0x5, 0x2, 0x2, 0x330, 0x331, 0x7, 0x6f, 0x2, 
    0x2, 0x331, 0x335, 0x9, 0x6, 0x2, 0x2, 0x332, 0x333, 0x7, 0x70, 0x2, 
    0x2, 0x333, 0x335, 0x9, 0x7, 0x2, 0x2, 0x334, 0x32d, 0x3, 0x2, 0x2, 
    0x2, 0x334, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x334, 0x330, 0x3, 0x2, 0x2, 
    0x2, 0x334, 0x332, 0x3, 0x2, 0x2, 0x2, 0x335, 0x336, 0x3, 0x2, 0x2, 
    0x2, 0x336, 0x337, 0x8, 0x21, 0x1, 0x2, 0x337, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x338, 0x340, 0x9, 0x4, 0x2, 0x2, 0x339, 0x33a, 0x7, 0x6e, 0x2, 
    0x2, 0x33a, 0x340, 0x9, 0x5, 0x2, 0x2, 0x33b, 0x33c, 0x7, 0x6f, 0x2, 
    0x2, 0x33c, 0x340, 0x9, 0x6, 0x2, 0x2, 0x33d, 0x33e, 0x7, 0x70, 0x2, 
    0x2, 0x33e, 0x340, 0x9, 0x7, 0x2, 0x2, 0x33f, 0x338, 0x3, 0x2, 0x2, 
    0x2, 0x33f, 0x339, 0x3, 0x2, 0x2, 0x2, 0x33f, 0x33b, 0x3, 0x2, 0x2, 
    0x2, 0x33f, 0x33d, 0x3, 0x2, 0x2, 0x2, 0x340, 0x341, 0x3, 0x2, 0x2, 
    0x2, 0x341, 0x342, 0x8, 0x22, 0x1, 0x2, 0x342, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x343, 0x34b, 0x9, 0x4, 0x2, 0x2, 0x344, 0x345, 0x7, 0x6e, 0x2, 
    0x2, 0x345, 0x34b, 0x9, 0x5, 0x2, 0x2, 0x346, 0x347, 0x7, 0x6f, 0x2, 
    0x2, 0x347, 0x34b, 0x9, 0x6, 0x2, 0x2, 0x348, 0x349, 0x7, 0x70, 0x2, 
    0x2, 0x349, 0x34b, 0x9, 0x7, 0x2, 0x2, 0x34a, 0x343, 0x3, 0x2, 0x2, 
    0x2, 0x34a, 0x344, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x346, 0x3, 0x2, 0x2, 
    0x2, 0x34a, 0x348, 0x3, 0x2, 0x2, 0x2, 0x34b, 0x34c, 0x3, 0x2, 0x2, 
    0x2, 0x34c, 0x34d, 0x8, 0x23, 0x1, 0x2, 0x34d, 0x45, 0x3, 0x2, 0x2, 
    0x2, 0x34e, 0x356, 0x9, 0x4, 0x2, 0x2, 0x34f, 0x350, 0x7, 0x6e, 0x2, 
    0x2, 0x350, 0x356, 0x9, 0x5, 0x2, 0x2, 0x351, 0x352, 0x7, 0x6f, 0x2, 
    0x2, 0x352, 0x356, 0x9, 0x6, 0x2, 0x2, 0x353, 0x354, 0x7, 0x70, 0x2, 
    0x2, 0x354, 0x356, 0x9, 0x7, 0x2, 0x2, 0x355, 0x34e, 0x3, 0x2, 0x2, 
    0x2, 0x355, 0x34f, 0x3, 0x2, 0x2, 0x2, 0x355, 0x351, 0x3, 0x2, 0x2, 
    0x2, 0x355, 0x353, 0x3, 0x2, 0x2, 0x2, 0x356, 0x357, 0x3, 0x2, 0x2, 
    0x2, 0x357, 0x358, 0x8, 0x24, 0x1, 0x2, 0x358, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x359, 0x361, 0x9, 0x4, 0x2, 0x2, 0x35a, 0x35b, 0x7, 0x6e, 0x2, 
    0x2, 0x35b, 0x361, 0x9, 0x5, 0x2, 0x2, 0x35c, 0x35d, 0x7, 0x6f, 0x2, 
    0x2, 0x35d, 0x361, 0x9, 0x6, 0x2, 0x2, 0x35e, 0x35f, 0x7, 0x70, 0x2, 
    0x2, 0x35f, 0x361, 0x9, 0x7, 0x2, 0x2, 0x360, 0x359, 0x3, 0x2, 0x2, 
    0x2, 0x360, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x360, 0x35c, 0x3, 0x2, 0x2, 
    0x2, 0x360, 0x35e, 0x3, 0x2, 0x2, 0x2, 0x361, 0x362, 0x3, 0x2, 0x2, 
    0x2, 0x362, 0x363, 0x8, 0x25, 0x1, 0x2, 0x363, 0x49, 0x3, 0x2, 0x2, 
    0x2, 0x364, 0x36c, 0x9, 0x4, 0x2, 0x2, 0x365, 0x366, 0x7, 0x6e, 0x2, 
    0x2, 0x366, 0x36c, 0x9, 0x5, 0x2, 0x2, 0x367, 0x368, 0x7, 0x6f, 0x2, 
    0x2, 0x368, 0x36c, 0x9, 0x6, 0x2, 0x2, 0x369, 0x36a, 0x7, 0x70, 0x2, 
    0x2, 0x36a, 0x36c, 0x9, 0x7, 0x2, 0x2, 0x36b, 0x364, 0x3, 0x2, 0x2, 
    0x2, 0x36b, 0x365, 0x3, 0x2, 0x2, 0x2, 0x36b, 0x367, 0x3, 0x2, 0x2, 
    0x2, 0x36b, 0x369, 0x3, 0x2, 0x2, 0x2, 0x36c, 0x36d, 0x3, 0x2, 0x2, 
    0x2, 0x36d, 0x36e, 0x8, 0x26, 0x1, 0x2, 0x36e, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x36f, 0x377, 0x9, 0x4, 0x2, 0x2, 0x370, 0x371, 0x7, 0x6e, 0x2, 
    0x2, 0x371, 0x377, 0x9, 0x5, 0x2, 0x2, 0x372, 0x373, 0x7, 0x6f, 0x2, 
    0x2, 0x373, 0x377, 0x9, 0x6, 0x2, 0x2, 0x374, 0x375, 0x7, 0x70, 0x2, 
    0x2, 0x375, 0x377, 0x9, 0x7, 0x2, 0x2, 0x376, 0x36f, 0x3, 0x2, 0x2, 
    0x2, 0x376, 0x370, 0x3, 0x2, 0x2, 0x2, 0x376, 0x372, 0x3, 0x2, 0x2, 
    0x2, 0x376, 0x374, 0x3, 0x2, 0x2, 0x2, 0x377, 0x378, 0x3, 0x2, 0x2, 
    0x2, 0x378, 0x379, 0x8, 0x27, 0x1, 0x2, 0x379, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x37a, 0x37b, 0x7, 0x60, 0x2, 0x2, 0x37b, 0x37f, 0x8, 0x28, 0x1, 
    0x2, 0x37c, 0x37d, 0x7, 0x61, 0x2, 0x2, 0x37d, 0x37f, 0x8, 0x28, 0x1, 
    0x2, 0x37e, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x37e, 0x37c, 0x3, 0x2, 0x2, 
    0x2, 0x37f, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x380, 0x384, 0x7, 0x55, 0x2, 
    0x2, 0x381, 0x382, 0x7, 0x71, 0x2, 0x2, 0x382, 0x384, 0x7, 0x55, 0x2, 
    0x2, 0x383, 0x380, 0x3, 0x2, 0x2, 0x2, 0x383, 0x381, 0x3, 0x2, 0x2, 
    0x2, 0x384, 0x51, 0x3, 0x2, 0x2, 0x2, 0x385, 0x386, 0x9, 0x8, 0x2, 0x2, 
    0x386, 0x53, 0x3, 0x2, 0x2, 0x2, 0x78, 0x58, 0x5c, 0x61, 0x67, 0x6d, 
    0x73, 0x79, 0x84, 0x8a, 0x91, 0x98, 0x9f, 0xa5, 0xab, 0xb2, 0xbd, 0xc4, 
    0xcb, 0xd5, 0xdc, 0x109, 0x10f, 0x113, 0x118, 0x11f, 0x128, 0x12c, 0x131, 
    0x138, 0x141, 0x145, 0x14a, 0x151, 0x15a, 0x161, 0x168, 0x16d, 0x173, 
    0x178, 0x17a, 0x180, 0x187, 0x18e, 0x193, 0x199, 0x19f, 0x1a5, 0x1ac, 
    0x1b3, 0x1b8, 0x1be, 0x1c4, 0x1ca, 0x1d1, 0x1d8, 0x1dd, 0x1e3, 0x1e9, 
    0x1ef, 0x1f6, 0x1fd, 0x202, 0x208, 0x20e, 0x214, 0x21b, 0x222, 0x227, 
    0x22d, 0x233, 0x239, 0x240, 0x247, 0x24c, 0x252, 0x258, 0x25e, 0x265, 
    0x26c, 0x271, 0x277, 0x27d, 0x283, 0x28a, 0x291, 0x296, 0x29c, 0x2a1, 
    0x2a3, 0x2a9, 0x2b0, 0x2b7, 0x2bc, 0x2c2, 0x2c8, 0x2d2, 0x2d9, 0x2e0, 
    0x2ee, 0x2f1, 0x2fa, 0x2fe, 0x300, 0x303, 0x308, 0x30a, 0x30d, 0x314, 
    0x329, 0x334, 0x33f, 0x34a, 0x355, 0x360, 0x36b, 0x376, 0x37e, 0x383, 
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
