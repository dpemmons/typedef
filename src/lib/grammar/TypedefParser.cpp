
// Generated from ./src/lib/grammar/TypedefParser.g4 by ANTLR 4.7.2


#include "TypedefParserListener.h"

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

TypedefParser::ModuleDeclarationContext* TypedefParser::CompilationUnitContext::moduleDeclaration() {
  return getRuleContext<TypedefParser::ModuleDeclarationContext>(0);
}

tree::TerminalNode* TypedefParser::CompilationUnitContext::EOF() {
  return getToken(TypedefParser::EOF, 0);
}

std::vector<TypedefParser::UseDeclarationContext *> TypedefParser::CompilationUnitContext::useDeclaration() {
  return getRuleContexts<TypedefParser::UseDeclarationContext>();
}

TypedefParser::UseDeclarationContext* TypedefParser::CompilationUnitContext::useDeclaration(size_t i) {
  return getRuleContext<TypedefParser::UseDeclarationContext>(i);
}

std::vector<TypedefParser::EnumDeclarationContext *> TypedefParser::CompilationUnitContext::enumDeclaration() {
  return getRuleContexts<TypedefParser::EnumDeclarationContext>();
}

TypedefParser::EnumDeclarationContext* TypedefParser::CompilationUnitContext::enumDeclaration(size_t i) {
  return getRuleContext<TypedefParser::EnumDeclarationContext>(i);
}

std::vector<TypedefParser::MessageDeclarationContext *> TypedefParser::CompilationUnitContext::messageDeclaration() {
  return getRuleContexts<TypedefParser::MessageDeclarationContext>();
}

TypedefParser::MessageDeclarationContext* TypedefParser::CompilationUnitContext::messageDeclaration(size_t i) {
  return getRuleContext<TypedefParser::MessageDeclarationContext>(i);
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

TypedefParser::CompilationUnitContext* TypedefParser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, TypedefParser::RuleCompilationUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    typedefVersionDeclaration();
    setState(57);
    moduleDeclaration();
    setState(61);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::IMPORT) {
      setState(58);
      useDeclaration();
      setState(63);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(68);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::ENUM

    || _la == TypedefParser::MESSAGE) {
      setState(66);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypedefParser::ENUM: {
          setState(64);
          enumDeclaration();
          break;
        }

        case TypedefParser::MESSAGE: {
          setState(65);
          messageDeclaration();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(70);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(71);
    match(TypedefParser::EOF);
   
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

tree::TerminalNode* TypedefParser::TypedefVersionDeclarationContext::TYPEDEF() {
  return getToken(TypedefParser::TYPEDEF, 0);
}

tree::TerminalNode* TypedefParser::TypedefVersionDeclarationContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

tree::TerminalNode* TypedefParser::TypedefVersionDeclarationContext::IDENTIFIER() {
  return getToken(TypedefParser::IDENTIFIER, 0);
}

tree::TerminalNode* TypedefParser::TypedefVersionDeclarationContext::SEMI() {
  return getToken(TypedefParser::SEMI, 0);
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

TypedefParser::TypedefVersionDeclarationContext* TypedefParser::typedefVersionDeclaration() {
  TypedefVersionDeclarationContext *_localctx = _tracker.createInstance<TypedefVersionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, TypedefParser::RuleTypedefVersionDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    match(TypedefParser::TYPEDEF);
    setState(74);
    match(TypedefParser::EQ);
    setState(75);
    match(TypedefParser::IDENTIFIER);
    setState(76);
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

tree::TerminalNode* TypedefParser::ModuleDeclarationContext::MODULE() {
  return getToken(TypedefParser::MODULE, 0);
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

TypedefParser::ModuleDeclarationContext* TypedefParser::moduleDeclaration() {
  ModuleDeclarationContext *_localctx = _tracker.createInstance<ModuleDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, TypedefParser::RuleModuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    match(TypedefParser::MODULE);
    setState(79);
    simplePath();
    setState(80);
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

TypedefParser::SingleUseDeclarationContext* TypedefParser::UseDeclarationContext::singleUseDeclaration() {
  return getRuleContext<TypedefParser::SingleUseDeclarationContext>(0);
}

TypedefParser::WildcardUseDeclarationContext* TypedefParser::UseDeclarationContext::wildcardUseDeclaration() {
  return getRuleContext<TypedefParser::WildcardUseDeclarationContext>(0);
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

TypedefParser::UseDeclarationContext* TypedefParser::useDeclaration() {
  UseDeclarationContext *_localctx = _tracker.createInstance<UseDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, TypedefParser::RuleUseDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(84);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(82);
      singleUseDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(83);
      wildcardUseDeclaration();
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

//----------------- SingleUseDeclarationContext ------------------------------------------------------------------

TypedefParser::SingleUseDeclarationContext::SingleUseDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::SingleUseDeclarationContext::IMPORT() {
  return getToken(TypedefParser::IMPORT, 0);
}

TypedefParser::SimplePathContext* TypedefParser::SingleUseDeclarationContext::simplePath() {
  return getRuleContext<TypedefParser::SimplePathContext>(0);
}

tree::TerminalNode* TypedefParser::SingleUseDeclarationContext::SEMI() {
  return getToken(TypedefParser::SEMI, 0);
}

tree::TerminalNode* TypedefParser::SingleUseDeclarationContext::AS() {
  return getToken(TypedefParser::AS, 0);
}

TypedefParser::IdentifierContext* TypedefParser::SingleUseDeclarationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}


size_t TypedefParser::SingleUseDeclarationContext::getRuleIndex() const {
  return TypedefParser::RuleSingleUseDeclaration;
}

void TypedefParser::SingleUseDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingleUseDeclaration(this);
}

void TypedefParser::SingleUseDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingleUseDeclaration(this);
}

TypedefParser::SingleUseDeclarationContext* TypedefParser::singleUseDeclaration() {
  SingleUseDeclarationContext *_localctx = _tracker.createInstance<SingleUseDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, TypedefParser::RuleSingleUseDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    match(TypedefParser::IMPORT);
    setState(87);
    simplePath();
    setState(90);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::AS) {
      setState(88);
      match(TypedefParser::AS);
      setState(89);
      identifier();
    }
    setState(92);
    match(TypedefParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WildcardUseDeclarationContext ------------------------------------------------------------------

TypedefParser::WildcardUseDeclarationContext::WildcardUseDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::WildcardUseDeclarationContext::IMPORT() {
  return getToken(TypedefParser::IMPORT, 0);
}

TypedefParser::SimplePathContext* TypedefParser::WildcardUseDeclarationContext::simplePath() {
  return getRuleContext<TypedefParser::SimplePathContext>(0);
}

tree::TerminalNode* TypedefParser::WildcardUseDeclarationContext::DOTSTAR() {
  return getToken(TypedefParser::DOTSTAR, 0);
}

tree::TerminalNode* TypedefParser::WildcardUseDeclarationContext::SEMI() {
  return getToken(TypedefParser::SEMI, 0);
}


size_t TypedefParser::WildcardUseDeclarationContext::getRuleIndex() const {
  return TypedefParser::RuleWildcardUseDeclaration;
}

void TypedefParser::WildcardUseDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWildcardUseDeclaration(this);
}

void TypedefParser::WildcardUseDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWildcardUseDeclaration(this);
}

TypedefParser::WildcardUseDeclarationContext* TypedefParser::wildcardUseDeclaration() {
  WildcardUseDeclarationContext *_localctx = _tracker.createInstance<WildcardUseDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 10, TypedefParser::RuleWildcardUseDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    match(TypedefParser::IMPORT);
    setState(95);
    simplePath();
    setState(96);
    match(TypedefParser::DOTSTAR);
    setState(97);
    match(TypedefParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumDeclarationContext ------------------------------------------------------------------

TypedefParser::EnumDeclarationContext::EnumDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::EnumDeclarationContext::ENUM() {
  return getToken(TypedefParser::ENUM, 0);
}

TypedefParser::IdentifierContext* TypedefParser::EnumDeclarationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::EnumDeclarationContext::LBRACE() {
  return getToken(TypedefParser::LBRACE, 0);
}

TypedefParser::EnumBodyContext* TypedefParser::EnumDeclarationContext::enumBody() {
  return getRuleContext<TypedefParser::EnumBodyContext>(0);
}

tree::TerminalNode* TypedefParser::EnumDeclarationContext::RBRACE() {
  return getToken(TypedefParser::RBRACE, 0);
}

tree::TerminalNode* TypedefParser::EnumDeclarationContext::SEMI() {
  return getToken(TypedefParser::SEMI, 0);
}

tree::TerminalNode* TypedefParser::EnumDeclarationContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

TypedefParser::PrimitiveFixedPointTypeContext* TypedefParser::EnumDeclarationContext::primitiveFixedPointType() {
  return getRuleContext<TypedefParser::PrimitiveFixedPointTypeContext>(0);
}


size_t TypedefParser::EnumDeclarationContext::getRuleIndex() const {
  return TypedefParser::RuleEnumDeclaration;
}

void TypedefParser::EnumDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumDeclaration(this);
}

void TypedefParser::EnumDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumDeclaration(this);
}

TypedefParser::EnumDeclarationContext* TypedefParser::enumDeclaration() {
  EnumDeclarationContext *_localctx = _tracker.createInstance<EnumDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 12, TypedefParser::RuleEnumDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(TypedefParser::ENUM);
    setState(100);
    identifier();

    setState(101);
    match(TypedefParser::COLON);
    setState(102);
    primitiveFixedPointType();
    setState(104);
    match(TypedefParser::LBRACE);
    setState(105);
    enumBody();
    setState(106);
    match(TypedefParser::RBRACE);
    setState(107);
    match(TypedefParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumBodyContext ------------------------------------------------------------------

TypedefParser::EnumBodyContext::EnumBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypedefParser::EnumFieldContext *> TypedefParser::EnumBodyContext::enumField() {
  return getRuleContexts<TypedefParser::EnumFieldContext>();
}

TypedefParser::EnumFieldContext* TypedefParser::EnumBodyContext::enumField(size_t i) {
  return getRuleContext<TypedefParser::EnumFieldContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::EnumBodyContext::COMMA() {
  return getTokens(TypedefParser::COMMA);
}

tree::TerminalNode* TypedefParser::EnumBodyContext::COMMA(size_t i) {
  return getToken(TypedefParser::COMMA, i);
}


size_t TypedefParser::EnumBodyContext::getRuleIndex() const {
  return TypedefParser::RuleEnumBody;
}

void TypedefParser::EnumBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumBody(this);
}

void TypedefParser::EnumBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumBody(this);
}

TypedefParser::EnumBodyContext* TypedefParser::enumBody() {
  EnumBodyContext *_localctx = _tracker.createInstance<EnumBodyContext>(_ctx, getState());
  enterRule(_localctx, 14, TypedefParser::RuleEnumBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(112); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(109);
              enumField();
              setState(110);
              match(TypedefParser::COMMA);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(114); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(120);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::IDENTIFIER) {
      setState(116);
      enumField();
      setState(118);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypedefParser::COMMA) {
        setState(117);
        match(TypedefParser::COMMA);
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

//----------------- EnumFieldContext ------------------------------------------------------------------

TypedefParser::EnumFieldContext::EnumFieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::EnumFieldContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::EnumFieldContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::IntegerLiteralContext* TypedefParser::EnumFieldContext::integerLiteral() {
  return getRuleContext<TypedefParser::IntegerLiteralContext>(0);
}


size_t TypedefParser::EnumFieldContext::getRuleIndex() const {
  return TypedefParser::RuleEnumField;
}

void TypedefParser::EnumFieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnumField(this);
}

void TypedefParser::EnumFieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnumField(this);
}

TypedefParser::EnumFieldContext* TypedefParser::enumField() {
  EnumFieldContext *_localctx = _tracker.createInstance<EnumFieldContext>(_ctx, getState());
  enterRule(_localctx, 16, TypedefParser::RuleEnumField);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    identifier();
    setState(123);
    match(TypedefParser::EQ);
    setState(124);
    integerLiteral();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MessageDeclarationContext ------------------------------------------------------------------

TypedefParser::MessageDeclarationContext::MessageDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::MessageDeclarationContext::MESSAGE() {
  return getToken(TypedefParser::MESSAGE, 0);
}

TypedefParser::IdentifierContext* TypedefParser::MessageDeclarationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::MessageDeclarationContext::LBRACE() {
  return getToken(TypedefParser::LBRACE, 0);
}

TypedefParser::MessageBodyContext* TypedefParser::MessageDeclarationContext::messageBody() {
  return getRuleContext<TypedefParser::MessageBodyContext>(0);
}

tree::TerminalNode* TypedefParser::MessageDeclarationContext::RBRACE() {
  return getToken(TypedefParser::RBRACE, 0);
}

tree::TerminalNode* TypedefParser::MessageDeclarationContext::SEMI() {
  return getToken(TypedefParser::SEMI, 0);
}


size_t TypedefParser::MessageDeclarationContext::getRuleIndex() const {
  return TypedefParser::RuleMessageDeclaration;
}

void TypedefParser::MessageDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessageDeclaration(this);
}

void TypedefParser::MessageDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessageDeclaration(this);
}

TypedefParser::MessageDeclarationContext* TypedefParser::messageDeclaration() {
  MessageDeclarationContext *_localctx = _tracker.createInstance<MessageDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 18, TypedefParser::RuleMessageDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(TypedefParser::MESSAGE);
    setState(127);
    identifier();
    setState(128);
    match(TypedefParser::LBRACE);
    setState(129);
    messageBody();
    setState(130);
    match(TypedefParser::RBRACE);
    setState(131);
    match(TypedefParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MessageBodyContext ------------------------------------------------------------------

TypedefParser::MessageBodyContext::MessageBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypedefParser::FieldDeclarationContext *> TypedefParser::MessageBodyContext::fieldDeclaration() {
  return getRuleContexts<TypedefParser::FieldDeclarationContext>();
}

TypedefParser::FieldDeclarationContext* TypedefParser::MessageBodyContext::fieldDeclaration(size_t i) {
  return getRuleContext<TypedefParser::FieldDeclarationContext>(i);
}

std::vector<TypedefParser::EnumDeclarationContext *> TypedefParser::MessageBodyContext::enumDeclaration() {
  return getRuleContexts<TypedefParser::EnumDeclarationContext>();
}

TypedefParser::EnumDeclarationContext* TypedefParser::MessageBodyContext::enumDeclaration(size_t i) {
  return getRuleContext<TypedefParser::EnumDeclarationContext>(i);
}


size_t TypedefParser::MessageBodyContext::getRuleIndex() const {
  return TypedefParser::RuleMessageBody;
}

void TypedefParser::MessageBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessageBody(this);
}

void TypedefParser::MessageBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessageBody(this);
}

TypedefParser::MessageBodyContext* TypedefParser::messageBody() {
  MessageBodyContext *_localctx = _tracker.createInstance<MessageBodyContext>(_ctx, getState());
  enterRule(_localctx, 20, TypedefParser::RuleMessageBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::ENUM

    || _la == TypedefParser::IDENTIFIER) {
      setState(135);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypedefParser::IDENTIFIER: {
          setState(133);
          fieldDeclaration();
          break;
        }

        case TypedefParser::ENUM: {
          setState(134);
          enumDeclaration();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(139);
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

//----------------- FieldDeclarationContext ------------------------------------------------------------------

TypedefParser::FieldDeclarationContext::FieldDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::FieldDeclarationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::FieldDeclarationContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

TypedefParser::TypeContext* TypedefParser::FieldDeclarationContext::type() {
  return getRuleContext<TypedefParser::TypeContext>(0);
}

TypedefParser::PositionContext* TypedefParser::FieldDeclarationContext::position() {
  return getRuleContext<TypedefParser::PositionContext>(0);
}

tree::TerminalNode* TypedefParser::FieldDeclarationContext::SEMI() {
  return getToken(TypedefParser::SEMI, 0);
}

tree::TerminalNode* TypedefParser::FieldDeclarationContext::EQ() {
  return getToken(TypedefParser::EQ, 0);
}

TypedefParser::ValueContext* TypedefParser::FieldDeclarationContext::value() {
  return getRuleContext<TypedefParser::ValueContext>(0);
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

TypedefParser::FieldDeclarationContext* TypedefParser::fieldDeclaration() {
  FieldDeclarationContext *_localctx = _tracker.createInstance<FieldDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 22, TypedefParser::RuleFieldDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    identifier();
    setState(141);
    match(TypedefParser::COLON);
    setState(142);
    type();
    setState(143);
    position();
    setState(146);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::EQ) {
      setState(144);
      match(TypedefParser::EQ);
      setState(145);
      value();
    }
    setState(148);
    match(TypedefParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

TypedefParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::LiteralContext* TypedefParser::ValueContext::literal() {
  return getRuleContext<TypedefParser::LiteralContext>(0);
}

TypedefParser::ArrayContext* TypedefParser::ValueContext::array() {
  return getRuleContext<TypedefParser::ArrayContext>(0);
}

TypedefParser::MapContext* TypedefParser::ValueContext::map() {
  return getRuleContext<TypedefParser::MapContext>(0);
}

TypedefParser::IdentifierContext* TypedefParser::ValueContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}


size_t TypedefParser::ValueContext::getRuleIndex() const {
  return TypedefParser::RuleValue;
}

void TypedefParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void TypedefParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}

TypedefParser::ValueContext* TypedefParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 24, TypedefParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(154);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::TRUE:
      case TypedefParser::FALSE:
      case TypedefParser::DECIMAL_LITERAL:
      case TypedefParser::HEX_LITERAL:
      case TypedefParser::OCT_LITERAL:
      case TypedefParser::BINARY_LITERAL:
      case TypedefParser::FLOAT_LITERAL:
      case TypedefParser::HEX_FLOAT_LITERAL:
      case TypedefParser::CHAR_LITERAL:
      case TypedefParser::STRING_LITERAL:
      case TypedefParser::TEXT_BLOCK: {
        enterOuterAlt(_localctx, 1);
        setState(150);
        literal();
        break;
      }

      case TypedefParser::LBRACK: {
        enterOuterAlt(_localctx, 2);
        setState(151);
        array();
        break;
      }

      case TypedefParser::LBRACE: {
        enterOuterAlt(_localctx, 3);
        setState(152);
        map();
        break;
      }

      case TypedefParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 4);
        setState(153);
        identifier();
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

//----------------- ArrayContext ------------------------------------------------------------------

TypedefParser::ArrayContext::ArrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::ArrayContext::LBRACK() {
  return getToken(TypedefParser::LBRACK, 0);
}

tree::TerminalNode* TypedefParser::ArrayContext::RBRACK() {
  return getToken(TypedefParser::RBRACK, 0);
}

std::vector<TypedefParser::ValueContext *> TypedefParser::ArrayContext::value() {
  return getRuleContexts<TypedefParser::ValueContext>();
}

TypedefParser::ValueContext* TypedefParser::ArrayContext::value(size_t i) {
  return getRuleContext<TypedefParser::ValueContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::ArrayContext::COMMA() {
  return getTokens(TypedefParser::COMMA);
}

tree::TerminalNode* TypedefParser::ArrayContext::COMMA(size_t i) {
  return getToken(TypedefParser::COMMA, i);
}


size_t TypedefParser::ArrayContext::getRuleIndex() const {
  return TypedefParser::RuleArray;
}

void TypedefParser::ArrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray(this);
}

void TypedefParser::ArrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray(this);
}

TypedefParser::ArrayContext* TypedefParser::array() {
  ArrayContext *_localctx = _tracker.createInstance<ArrayContext>(_ctx, getState());
  enterRule(_localctx, 26, TypedefParser::RuleArray);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(156);
    match(TypedefParser::LBRACK);
    setState(165);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypedefParser::TRUE)
      | (1ULL << TypedefParser::FALSE)
      | (1ULL << TypedefParser::DECIMAL_LITERAL)
      | (1ULL << TypedefParser::HEX_LITERAL)
      | (1ULL << TypedefParser::OCT_LITERAL)
      | (1ULL << TypedefParser::BINARY_LITERAL)
      | (1ULL << TypedefParser::FLOAT_LITERAL)
      | (1ULL << TypedefParser::HEX_FLOAT_LITERAL)
      | (1ULL << TypedefParser::CHAR_LITERAL)
      | (1ULL << TypedefParser::STRING_LITERAL)
      | (1ULL << TypedefParser::TEXT_BLOCK)
      | (1ULL << TypedefParser::LBRACE)
      | (1ULL << TypedefParser::LBRACK)
      | (1ULL << TypedefParser::IDENTIFIER))) != 0)) {
      setState(157);
      value();
      setState(162);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(158);
          match(TypedefParser::COMMA);
          setState(159);
          value(); 
        }
        setState(164);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
      }
    }
    setState(168);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::COMMA) {
      setState(167);
      match(TypedefParser::COMMA);
    }
    setState(170);
    match(TypedefParser::RBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MapContext ------------------------------------------------------------------

TypedefParser::MapContext::MapContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::MapContext::LBRACE() {
  return getToken(TypedefParser::LBRACE, 0);
}

tree::TerminalNode* TypedefParser::MapContext::RBRACE() {
  return getToken(TypedefParser::RBRACE, 0);
}

std::vector<TypedefParser::KeyValueContext *> TypedefParser::MapContext::keyValue() {
  return getRuleContexts<TypedefParser::KeyValueContext>();
}

TypedefParser::KeyValueContext* TypedefParser::MapContext::keyValue(size_t i) {
  return getRuleContext<TypedefParser::KeyValueContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::MapContext::COMMA() {
  return getTokens(TypedefParser::COMMA);
}

tree::TerminalNode* TypedefParser::MapContext::COMMA(size_t i) {
  return getToken(TypedefParser::COMMA, i);
}


size_t TypedefParser::MapContext::getRuleIndex() const {
  return TypedefParser::RuleMap;
}

void TypedefParser::MapContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMap(this);
}

void TypedefParser::MapContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMap(this);
}

TypedefParser::MapContext* TypedefParser::map() {
  MapContext *_localctx = _tracker.createInstance<MapContext>(_ctx, getState());
  enterRule(_localctx, 28, TypedefParser::RuleMap);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(172);
    match(TypedefParser::LBRACE);
    setState(184);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::IDENTIFIER) {
      setState(173);
      keyValue();
      setState(178);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(174);
          match(TypedefParser::COMMA);
          setState(175);
          keyValue(); 
        }
        setState(180);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
      }
      setState(182);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypedefParser::COMMA) {
        setState(181);
        match(TypedefParser::COMMA);
      }
    }
    setState(186);
    match(TypedefParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeyValueContext ------------------------------------------------------------------

TypedefParser::KeyValueContext::KeyValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::KeyValueContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::KeyValueContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

TypedefParser::ValueContext* TypedefParser::KeyValueContext::value() {
  return getRuleContext<TypedefParser::ValueContext>(0);
}


size_t TypedefParser::KeyValueContext::getRuleIndex() const {
  return TypedefParser::RuleKeyValue;
}

void TypedefParser::KeyValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeyValue(this);
}

void TypedefParser::KeyValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeyValue(this);
}

TypedefParser::KeyValueContext* TypedefParser::keyValue() {
  KeyValueContext *_localctx = _tracker.createInstance<KeyValueContext>(_ctx, getState());
  enterRule(_localctx, 30, TypedefParser::RuleKeyValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    identifier();
    setState(189);
    match(TypedefParser::COLON);
    setState(190);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

TypedefParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::ArrayIdentifierContext* TypedefParser::TypeContext::arrayIdentifier() {
  return getRuleContext<TypedefParser::ArrayIdentifierContext>(0);
}

TypedefParser::TypeTypeContext* TypedefParser::TypeContext::typeType() {
  return getRuleContext<TypedefParser::TypeTypeContext>(0);
}


size_t TypedefParser::TypeContext::getRuleIndex() const {
  return TypedefParser::RuleType;
}

void TypedefParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void TypedefParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

TypedefParser::TypeContext* TypedefParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 32, TypedefParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(194);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(192);
      arrayIdentifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(193);
      typeType();
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

//----------------- ArrayIdentifierContext ------------------------------------------------------------------

TypedefParser::ArrayIdentifierContext::ArrayIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::TypeTypeContext* TypedefParser::ArrayIdentifierContext::typeType() {
  return getRuleContext<TypedefParser::TypeTypeContext>(0);
}

tree::TerminalNode* TypedefParser::ArrayIdentifierContext::LBRACK() {
  return getToken(TypedefParser::LBRACK, 0);
}

tree::TerminalNode* TypedefParser::ArrayIdentifierContext::RBRACK() {
  return getToken(TypedefParser::RBRACK, 0);
}

TypedefParser::IntegerLiteralContext* TypedefParser::ArrayIdentifierContext::integerLiteral() {
  return getRuleContext<TypedefParser::IntegerLiteralContext>(0);
}


size_t TypedefParser::ArrayIdentifierContext::getRuleIndex() const {
  return TypedefParser::RuleArrayIdentifier;
}

void TypedefParser::ArrayIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayIdentifier(this);
}

void TypedefParser::ArrayIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayIdentifier(this);
}

TypedefParser::ArrayIdentifierContext* TypedefParser::arrayIdentifier() {
  ArrayIdentifierContext *_localctx = _tracker.createInstance<ArrayIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 34, TypedefParser::RuleArrayIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(196);
    typeType();
    setState(197);
    match(TypedefParser::LBRACK);
    setState(199);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypedefParser::DECIMAL_LITERAL)
      | (1ULL << TypedefParser::HEX_LITERAL)
      | (1ULL << TypedefParser::OCT_LITERAL)
      | (1ULL << TypedefParser::BINARY_LITERAL))) != 0)) {
      setState(198);
      integerLiteral();
    }
    setState(201);
    match(TypedefParser::RBRACK);
   
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

std::vector<tree::TerminalNode *> TypedefParser::SimplePathContext::PS() {
  return getTokens(TypedefParser::PS);
}

tree::TerminalNode* TypedefParser::SimplePathContext::PS(size_t i) {
  return getToken(TypedefParser::PS, i);
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

TypedefParser::SimplePathContext* TypedefParser::simplePath() {
  SimplePathContext *_localctx = _tracker.createInstance<SimplePathContext>(_ctx, getState());
  enterRule(_localctx, 36, TypedefParser::RuleSimplePath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::PS) {
      setState(203);
      match(TypedefParser::PS);
    }
    setState(206);
    identifier();
    setState(211);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::PS) {
      setState(207);
      match(TypedefParser::PS);
      setState(208);
      identifier();
      setState(213);
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

//----------------- PositionContext ------------------------------------------------------------------

TypedefParser::PositionContext::PositionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::PositionContext::AT() {
  return getToken(TypedefParser::AT, 0);
}

TypedefParser::IntegerLiteralContext* TypedefParser::PositionContext::integerLiteral() {
  return getRuleContext<TypedefParser::IntegerLiteralContext>(0);
}


size_t TypedefParser::PositionContext::getRuleIndex() const {
  return TypedefParser::RulePosition;
}

void TypedefParser::PositionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPosition(this);
}

void TypedefParser::PositionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPosition(this);
}

TypedefParser::PositionContext* TypedefParser::position() {
  PositionContext *_localctx = _tracker.createInstance<PositionContext>(_ctx, getState());
  enterRule(_localctx, 38, TypedefParser::RulePosition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    match(TypedefParser::AT);
    setState(215);
    integerLiteral();
   
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

tree::TerminalNode* TypedefParser::IdentifierContext::IDENTIFIER() {
  return getToken(TypedefParser::IDENTIFIER, 0);
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

TypedefParser::IdentifierContext* TypedefParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 40, TypedefParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(217);
    match(TypedefParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

TypedefParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IntegerLiteralContext* TypedefParser::LiteralContext::integerLiteral() {
  return getRuleContext<TypedefParser::IntegerLiteralContext>(0);
}

TypedefParser::FloatLiteralContext* TypedefParser::LiteralContext::floatLiteral() {
  return getRuleContext<TypedefParser::FloatLiteralContext>(0);
}

tree::TerminalNode* TypedefParser::LiteralContext::CHAR_LITERAL() {
  return getToken(TypedefParser::CHAR_LITERAL, 0);
}

tree::TerminalNode* TypedefParser::LiteralContext::STRING_LITERAL() {
  return getToken(TypedefParser::STRING_LITERAL, 0);
}

TypedefParser::BoolLiteralContext* TypedefParser::LiteralContext::boolLiteral() {
  return getRuleContext<TypedefParser::BoolLiteralContext>(0);
}

tree::TerminalNode* TypedefParser::LiteralContext::TEXT_BLOCK() {
  return getToken(TypedefParser::TEXT_BLOCK, 0);
}


size_t TypedefParser::LiteralContext::getRuleIndex() const {
  return TypedefParser::RuleLiteral;
}

void TypedefParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void TypedefParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}

TypedefParser::LiteralContext* TypedefParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 42, TypedefParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(225);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DECIMAL_LITERAL:
      case TypedefParser::HEX_LITERAL:
      case TypedefParser::OCT_LITERAL:
      case TypedefParser::BINARY_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(219);
        integerLiteral();
        break;
      }

      case TypedefParser::FLOAT_LITERAL:
      case TypedefParser::HEX_FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(220);
        floatLiteral();
        break;
      }

      case TypedefParser::CHAR_LITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(221);
        match(TypedefParser::CHAR_LITERAL);
        break;
      }

      case TypedefParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(222);
        match(TypedefParser::STRING_LITERAL);
        break;
      }

      case TypedefParser::TRUE:
      case TypedefParser::FALSE: {
        enterOuterAlt(_localctx, 5);
        setState(223);
        boolLiteral();
        break;
      }

      case TypedefParser::TEXT_BLOCK: {
        enterOuterAlt(_localctx, 6);
        setState(224);
        match(TypedefParser::TEXT_BLOCK);
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

//----------------- BoolLiteralContext ------------------------------------------------------------------

TypedefParser::BoolLiteralContext::BoolLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::BoolLiteralContext::TRUE() {
  return getToken(TypedefParser::TRUE, 0);
}

tree::TerminalNode* TypedefParser::BoolLiteralContext::FALSE() {
  return getToken(TypedefParser::FALSE, 0);
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

TypedefParser::BoolLiteralContext* TypedefParser::boolLiteral() {
  BoolLiteralContext *_localctx = _tracker.createInstance<BoolLiteralContext>(_ctx, getState());
  enterRule(_localctx, 44, TypedefParser::RuleBoolLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    _la = _input->LA(1);
    if (!(_la == TypedefParser::TRUE

    || _la == TypedefParser::FALSE)) {
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

//----------------- IntegerLiteralContext ------------------------------------------------------------------

TypedefParser::IntegerLiteralContext::IntegerLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::IntegerLiteralContext::DECIMAL_LITERAL() {
  return getToken(TypedefParser::DECIMAL_LITERAL, 0);
}

tree::TerminalNode* TypedefParser::IntegerLiteralContext::HEX_LITERAL() {
  return getToken(TypedefParser::HEX_LITERAL, 0);
}

tree::TerminalNode* TypedefParser::IntegerLiteralContext::OCT_LITERAL() {
  return getToken(TypedefParser::OCT_LITERAL, 0);
}

tree::TerminalNode* TypedefParser::IntegerLiteralContext::BINARY_LITERAL() {
  return getToken(TypedefParser::BINARY_LITERAL, 0);
}


size_t TypedefParser::IntegerLiteralContext::getRuleIndex() const {
  return TypedefParser::RuleIntegerLiteral;
}

void TypedefParser::IntegerLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegerLiteral(this);
}

void TypedefParser::IntegerLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegerLiteral(this);
}

TypedefParser::IntegerLiteralContext* TypedefParser::integerLiteral() {
  IntegerLiteralContext *_localctx = _tracker.createInstance<IntegerLiteralContext>(_ctx, getState());
  enterRule(_localctx, 46, TypedefParser::RuleIntegerLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypedefParser::DECIMAL_LITERAL)
      | (1ULL << TypedefParser::HEX_LITERAL)
      | (1ULL << TypedefParser::OCT_LITERAL)
      | (1ULL << TypedefParser::BINARY_LITERAL))) != 0))) {
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

//----------------- FloatLiteralContext ------------------------------------------------------------------

TypedefParser::FloatLiteralContext::FloatLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::FloatLiteralContext::FLOAT_LITERAL() {
  return getToken(TypedefParser::FLOAT_LITERAL, 0);
}

tree::TerminalNode* TypedefParser::FloatLiteralContext::HEX_FLOAT_LITERAL() {
  return getToken(TypedefParser::HEX_FLOAT_LITERAL, 0);
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

TypedefParser::FloatLiteralContext* TypedefParser::floatLiteral() {
  FloatLiteralContext *_localctx = _tracker.createInstance<FloatLiteralContext>(_ctx, getState());
  enterRule(_localctx, 48, TypedefParser::RuleFloatLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(231);
    _la = _input->LA(1);
    if (!(_la == TypedefParser::FLOAT_LITERAL

    || _la == TypedefParser::HEX_FLOAT_LITERAL)) {
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

//----------------- TypeTypeContext ------------------------------------------------------------------

TypedefParser::TypeTypeContext::TypeTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::TypeTypeContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

TypedefParser::PrimitiveTypeContext* TypedefParser::TypeTypeContext::primitiveType() {
  return getRuleContext<TypedefParser::PrimitiveTypeContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::TypeTypeContext::LBRACK() {
  return getTokens(TypedefParser::LBRACK);
}

tree::TerminalNode* TypedefParser::TypeTypeContext::LBRACK(size_t i) {
  return getToken(TypedefParser::LBRACK, i);
}

std::vector<TypedefParser::IntegerLiteralContext *> TypedefParser::TypeTypeContext::integerLiteral() {
  return getRuleContexts<TypedefParser::IntegerLiteralContext>();
}

TypedefParser::IntegerLiteralContext* TypedefParser::TypeTypeContext::integerLiteral(size_t i) {
  return getRuleContext<TypedefParser::IntegerLiteralContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::TypeTypeContext::RBRACK() {
  return getTokens(TypedefParser::RBRACK);
}

tree::TerminalNode* TypedefParser::TypeTypeContext::RBRACK(size_t i) {
  return getToken(TypedefParser::RBRACK, i);
}


size_t TypedefParser::TypeTypeContext::getRuleIndex() const {
  return TypedefParser::RuleTypeType;
}

void TypedefParser::TypeTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeType(this);
}

void TypedefParser::TypeTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeType(this);
}

TypedefParser::TypeTypeContext* TypedefParser::typeType() {
  TypeTypeContext *_localctx = _tracker.createInstance<TypeTypeContext>(_ctx, getState());
  enterRule(_localctx, 50, TypedefParser::RuleTypeType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(235);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::IDENTIFIER: {
        setState(233);
        identifier();
        break;
      }

      case TypedefParser::BOOL:
      case TypedefParser::BYTE:
      case TypedefParser::FLOAT32:
      case TypedefParser::FLOAT64:
      case TypedefParser::INT8:
      case TypedefParser::INT16:
      case TypedefParser::INT32:
      case TypedefParser::INT64:
      case TypedefParser::UINT8:
      case TypedefParser::UINT16:
      case TypedefParser::UINT32:
      case TypedefParser::UINT64:
      case TypedefParser::FLOAT16: {
        setState(234);
        primitiveType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(243);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(237);
        match(TypedefParser::LBRACK);
        setState(238);
        integerLiteral();
        setState(239);
        match(TypedefParser::RBRACK); 
      }
      setState(245);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimitiveFixedPointTypeContext ------------------------------------------------------------------

TypedefParser::PrimitiveFixedPointTypeContext::PrimitiveFixedPointTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::PrimitiveFixedPointTypeContext::BYTE() {
  return getToken(TypedefParser::BYTE, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveFixedPointTypeContext::INT8() {
  return getToken(TypedefParser::INT8, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveFixedPointTypeContext::UINT8() {
  return getToken(TypedefParser::UINT8, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveFixedPointTypeContext::INT16() {
  return getToken(TypedefParser::INT16, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveFixedPointTypeContext::UINT16() {
  return getToken(TypedefParser::UINT16, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveFixedPointTypeContext::INT32() {
  return getToken(TypedefParser::INT32, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveFixedPointTypeContext::UINT32() {
  return getToken(TypedefParser::UINT32, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveFixedPointTypeContext::INT64() {
  return getToken(TypedefParser::INT64, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveFixedPointTypeContext::UINT64() {
  return getToken(TypedefParser::UINT64, 0);
}


size_t TypedefParser::PrimitiveFixedPointTypeContext::getRuleIndex() const {
  return TypedefParser::RulePrimitiveFixedPointType;
}

void TypedefParser::PrimitiveFixedPointTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimitiveFixedPointType(this);
}

void TypedefParser::PrimitiveFixedPointTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimitiveFixedPointType(this);
}

TypedefParser::PrimitiveFixedPointTypeContext* TypedefParser::primitiveFixedPointType() {
  PrimitiveFixedPointTypeContext *_localctx = _tracker.createInstance<PrimitiveFixedPointTypeContext>(_ctx, getState());
  enterRule(_localctx, 52, TypedefParser::RulePrimitiveFixedPointType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(246);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypedefParser::BYTE)
      | (1ULL << TypedefParser::INT8)
      | (1ULL << TypedefParser::INT16)
      | (1ULL << TypedefParser::INT32)
      | (1ULL << TypedefParser::INT64)
      | (1ULL << TypedefParser::UINT8)
      | (1ULL << TypedefParser::UINT16)
      | (1ULL << TypedefParser::UINT32)
      | (1ULL << TypedefParser::UINT64))) != 0))) {
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

//----------------- PrimitiveTypeContext ------------------------------------------------------------------

TypedefParser::PrimitiveTypeContext::PrimitiveTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::BOOL() {
  return getToken(TypedefParser::BOOL, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::BYTE() {
  return getToken(TypedefParser::BYTE, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::INT8() {
  return getToken(TypedefParser::INT8, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::UINT8() {
  return getToken(TypedefParser::UINT8, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::INT16() {
  return getToken(TypedefParser::INT16, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::UINT16() {
  return getToken(TypedefParser::UINT16, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::INT32() {
  return getToken(TypedefParser::INT32, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::UINT32() {
  return getToken(TypedefParser::UINT32, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::INT64() {
  return getToken(TypedefParser::INT64, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::UINT64() {
  return getToken(TypedefParser::UINT64, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::FLOAT16() {
  return getToken(TypedefParser::FLOAT16, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::FLOAT32() {
  return getToken(TypedefParser::FLOAT32, 0);
}

tree::TerminalNode* TypedefParser::PrimitiveTypeContext::FLOAT64() {
  return getToken(TypedefParser::FLOAT64, 0);
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

TypedefParser::PrimitiveTypeContext* TypedefParser::primitiveType() {
  PrimitiveTypeContext *_localctx = _tracker.createInstance<PrimitiveTypeContext>(_ctx, getState());
  enterRule(_localctx, 54, TypedefParser::RulePrimitiveType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(248);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypedefParser::BOOL)
      | (1ULL << TypedefParser::BYTE)
      | (1ULL << TypedefParser::FLOAT32)
      | (1ULL << TypedefParser::FLOAT64)
      | (1ULL << TypedefParser::INT8)
      | (1ULL << TypedefParser::INT16)
      | (1ULL << TypedefParser::INT32)
      | (1ULL << TypedefParser::INT64)
      | (1ULL << TypedefParser::UINT8)
      | (1ULL << TypedefParser::UINT16)
      | (1ULL << TypedefParser::UINT32)
      | (1ULL << TypedefParser::UINT64)
      | (1ULL << TypedefParser::FLOAT16))) != 0))) {
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
  "compilationUnit", "typedefVersionDeclaration", "moduleDeclaration", "useDeclaration", 
  "singleUseDeclaration", "wildcardUseDeclaration", "enumDeclaration", "enumBody", 
  "enumField", "messageDeclaration", "messageBody", "fieldDeclaration", 
  "value", "array", "map", "keyValue", "type", "arrayIdentifier", "simplePath", 
  "position", "identifier", "literal", "boolLiteral", "integerLiteral", 
  "floatLiteral", "typeType", "primitiveFixedPointType", "primitiveType"
};

std::vector<std::string> TypedefParser::_literalNames = {
  "", "'bool'", "'byte'", "'float32'", "'float64'", "'int8'", "'int16'", 
  "'int32'", "'int64'", "'uint8'", "'uint16'", "'uint32'", "'uint64'", "'float16'", 
  "'bfloat16'", "'default'", "'enum'", "'exports'", "'extends'", "'import'", 
  "'implements'", "'interface'", "'message'", "'module'", "'package'", "'true'", 
  "'false'", "'typedef'", "'as'", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "'('", "')'", "'{'", "'}'", "'['", "']'", "';'", "':'", "','", 
  "'.'", "'.*'", "'='", "'@'", "'::'"
};

std::vector<std::string> TypedefParser::_symbolicNames = {
  "", "BOOL", "BYTE", "FLOAT32", "FLOAT64", "INT8", "INT16", "INT32", "INT64", 
  "UINT8", "UINT16", "UINT32", "UINT64", "FLOAT16", "BFLAOT16", "DEFAULT", 
  "ENUM", "EXPORTS", "EXTENDS", "IMPORT", "IMPLEMENTS", "INTERFACE", "MESSAGE", 
  "MODULE", "PACKAGE", "TRUE", "FALSE", "TYPEDEF", "AS", "SEMVER", "DECIMAL_LITERAL", 
  "QUALIFIED_DECIMAL_LITERAL", "UNQUALIFIED_DECIMAL_LITERAL", "HEX_LITERAL", 
  "OCT_LITERAL", "BINARY_LITERAL", "FLOAT_LITERAL", "HEX_FLOAT_LITERAL", 
  "BOOL_LITERAL", "CHAR_LITERAL", "STRING_LITERAL", "TEXT_BLOCK", "LPAREN", 
  "RPAREN", "LBRACE", "RBRACE", "LBRACK", "RBRACK", "SEMI", "COLON", "COMMA", 
  "DOT", "DOTSTAR", "EQ", "AT", "PS", "WS", "COMMENT", "LINE_COMMENT", "IDENTIFIER"
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
    0x3, 0x3d, 0xfd, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 
    0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x7, 0x2, 0x3e, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x41, 0xb, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x7, 0x2, 0x45, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x48, 0xb, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 
    0x57, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x5d, 
    0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x6, 0x9, 0x73, 0xa, 0x9, 0xd, 0x9, 0xe, 0x9, 0x74, 0x3, 0x9, 0x3, 0x9, 
    0x5, 0x9, 0x79, 0xa, 0x9, 0x5, 0x9, 0x7b, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x8a, 0xa, 0xc, 0xc, 
    0xc, 0xe, 0xc, 0x8d, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x95, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x9d, 0xa, 0xe, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xa3, 0xa, 0xf, 0xc, 0xf, 0xe, 
    0xf, 0xa6, 0xb, 0xf, 0x5, 0xf, 0xa8, 0xa, 0xf, 0x3, 0xf, 0x5, 0xf, 0xab, 
    0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x7, 0x10, 0xb3, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xb6, 0xb, 0x10, 
    0x3, 0x10, 0x5, 0x10, 0xb9, 0xa, 0x10, 0x5, 0x10, 0xbb, 0xa, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 
    0x3, 0x12, 0x5, 0x12, 0xc5, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x5, 0x13, 0xca, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x5, 0x14, 
    0xcf, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0xd4, 0xa, 
    0x14, 0xc, 0x14, 0xe, 0x14, 0xd7, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0xe4, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x5, 
    0x1b, 0xee, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 
    0x1b, 0xf4, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0xf7, 0xb, 0x1b, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x2, 0x2, 0x1e, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
    0x38, 0x2, 0x7, 0x3, 0x2, 0x1b, 0x1c, 0x4, 0x2, 0x20, 0x20, 0x23, 0x25, 
    0x3, 0x2, 0x26, 0x27, 0x4, 0x2, 0x4, 0x4, 0x7, 0xe, 0x3, 0x2, 0x3, 0xf, 
    0x2, 0xff, 0x2, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x4, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x50, 0x3, 0x2, 0x2, 0x2, 0x8, 0x56, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x58, 0x3, 0x2, 0x2, 0x2, 0xc, 0x60, 0x3, 0x2, 0x2, 0x2, 0xe, 0x65, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x72, 0x3, 0x2, 0x2, 0x2, 0x12, 0x7c, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x80, 0x3, 0x2, 0x2, 0x2, 0x16, 0x8b, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x9c, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xae, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xbe, 0x3, 0x2, 0x2, 0x2, 0x22, 0xc4, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xc6, 0x3, 0x2, 0x2, 0x2, 0x26, 0xce, 0x3, 0x2, 0x2, 0x2, 0x28, 0xd8, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xe3, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x30, 0xe7, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x34, 0xed, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x38, 0xfa, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x3b, 0x5, 0x4, 0x3, 0x2, 0x3b, 0x3f, 0x5, 0x6, 0x4, 0x2, 0x3c, 
    0x3e, 0x5, 0x8, 0x5, 0x2, 0x3d, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x41, 
    0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x46, 0x3, 0x2, 0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x45, 0x5, 0xe, 0x8, 0x2, 0x43, 0x45, 0x5, 0x14, 0xb, 
    0x2, 0x44, 0x42, 0x3, 0x2, 0x2, 0x2, 0x44, 0x43, 0x3, 0x2, 0x2, 0x2, 
    0x45, 0x48, 0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 
    0x47, 0x3, 0x2, 0x2, 0x2, 0x47, 0x49, 0x3, 0x2, 0x2, 0x2, 0x48, 0x46, 
    0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x7, 0x2, 0x2, 0x3, 0x4a, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x1d, 0x2, 0x2, 0x4c, 0x4d, 0x7, 0x37, 
    0x2, 0x2, 0x4d, 0x4e, 0x7, 0x3d, 0x2, 0x2, 0x4e, 0x4f, 0x7, 0x32, 0x2, 
    0x2, 0x4f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x7, 0x19, 0x2, 0x2, 
    0x51, 0x52, 0x5, 0x26, 0x14, 0x2, 0x52, 0x53, 0x7, 0x32, 0x2, 0x2, 0x53, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x54, 0x57, 0x5, 0xa, 0x6, 0x2, 0x55, 0x57, 
    0x5, 0xc, 0x7, 0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 0x55, 0x3, 
    0x2, 0x2, 0x2, 0x57, 0x9, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x7, 0x15, 
    0x2, 0x2, 0x59, 0x5c, 0x5, 0x26, 0x14, 0x2, 0x5a, 0x5b, 0x7, 0x1e, 0x2, 
    0x2, 0x5b, 0x5d, 0x5, 0x2a, 0x16, 0x2, 0x5c, 0x5a, 0x3, 0x2, 0x2, 0x2, 
    0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 
    0x5f, 0x7, 0x32, 0x2, 0x2, 0x5f, 0xb, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 
    0x7, 0x15, 0x2, 0x2, 0x61, 0x62, 0x5, 0x26, 0x14, 0x2, 0x62, 0x63, 0x7, 
    0x36, 0x2, 0x2, 0x63, 0x64, 0x7, 0x32, 0x2, 0x2, 0x64, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x65, 0x66, 0x7, 0x12, 0x2, 0x2, 0x66, 0x67, 0x5, 0x2a, 0x16, 
    0x2, 0x67, 0x68, 0x7, 0x33, 0x2, 0x2, 0x68, 0x69, 0x5, 0x36, 0x1c, 0x2, 
    0x69, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0x2e, 0x2, 0x2, 0x6b, 
    0x6c, 0x5, 0x10, 0x9, 0x2, 0x6c, 0x6d, 0x7, 0x2f, 0x2, 0x2, 0x6d, 0x6e, 
    0x7, 0x32, 0x2, 0x2, 0x6e, 0xf, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x5, 
    0x12, 0xa, 0x2, 0x70, 0x71, 0x7, 0x34, 0x2, 0x2, 0x71, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x72, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 
    0x2, 0x74, 0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x3, 0x2, 0x2, 0x2, 
    0x75, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x76, 0x78, 0x5, 0x12, 0xa, 0x2, 0x77, 
    0x79, 0x7, 0x34, 0x2, 0x2, 0x78, 0x77, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 
    0x3, 0x2, 0x2, 0x2, 0x79, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x76, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x7c, 0x7d, 0x5, 0x2a, 0x16, 0x2, 0x7d, 0x7e, 0x7, 0x37, 0x2, 
    0x2, 0x7e, 0x7f, 0x5, 0x30, 0x19, 0x2, 0x7f, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x80, 0x81, 0x7, 0x18, 0x2, 0x2, 0x81, 0x82, 0x5, 0x2a, 0x16, 0x2, 0x82, 
    0x83, 0x7, 0x2e, 0x2, 0x2, 0x83, 0x84, 0x5, 0x16, 0xc, 0x2, 0x84, 0x85, 
    0x7, 0x2f, 0x2, 0x2, 0x85, 0x86, 0x7, 0x32, 0x2, 0x2, 0x86, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x87, 0x8a, 0x5, 0x18, 0xd, 0x2, 0x88, 0x8a, 0x5, 0xe, 
    0x8, 0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 0x89, 0x88, 0x3, 0x2, 0x2, 
    0x2, 0x8a, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x89, 0x3, 0x2, 0x2, 0x2, 
    0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x17, 0x3, 0x2, 0x2, 0x2, 0x8d, 
    0x8b, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x5, 0x2a, 0x16, 0x2, 0x8f, 0x90, 
    0x7, 0x33, 0x2, 0x2, 0x90, 0x91, 0x5, 0x22, 0x12, 0x2, 0x91, 0x94, 0x5, 
    0x28, 0x15, 0x2, 0x92, 0x93, 0x7, 0x37, 0x2, 0x2, 0x93, 0x95, 0x5, 0x1a, 
    0xe, 0x2, 0x94, 0x92, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x3, 0x2, 0x2, 
    0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x7, 0x32, 0x2, 0x2, 
    0x97, 0x19, 0x3, 0x2, 0x2, 0x2, 0x98, 0x9d, 0x5, 0x2c, 0x17, 0x2, 0x99, 
    0x9d, 0x5, 0x1c, 0xf, 0x2, 0x9a, 0x9d, 0x5, 0x1e, 0x10, 0x2, 0x9b, 0x9d, 
    0x5, 0x2a, 0x16, 0x2, 0x9c, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x99, 0x3, 
    0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9b, 0x3, 0x2, 
    0x2, 0x2, 0x9d, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa7, 0x7, 0x30, 0x2, 
    0x2, 0x9f, 0xa4, 0x5, 0x1a, 0xe, 0x2, 0xa0, 0xa1, 0x7, 0x34, 0x2, 0x2, 
    0xa1, 0xa3, 0x5, 0x1a, 0xe, 0x2, 0xa2, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa3, 
    0xa6, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 
    0x3, 0x2, 0x2, 0x2, 0xa5, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa4, 0x3, 
    0x2, 0x2, 0x2, 0xa7, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x3, 0x2, 
    0x2, 0x2, 0xa8, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xab, 0x7, 0x34, 0x2, 
    0x2, 0xaa, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 0x2, 0x2, 
    0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x7, 0x31, 0x2, 0x2, 0xad, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0xae, 0xba, 0x7, 0x2e, 0x2, 0x2, 0xaf, 0xb4, 
    0x5, 0x20, 0x11, 0x2, 0xb0, 0xb1, 0x7, 0x34, 0x2, 0x2, 0xb1, 0xb3, 0x5, 
    0x20, 0x11, 0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb6, 0x3, 0x2, 
    0x2, 0x2, 0xb4, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x3, 0x2, 0x2, 
    0x2, 0xb5, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb4, 0x3, 0x2, 0x2, 0x2, 
    0xb7, 0xb9, 0x7, 0x34, 0x2, 0x2, 0xb8, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb8, 
    0xb9, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xba, 0xaf, 
    0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x3, 
    0x2, 0x2, 0x2, 0xbc, 0xbd, 0x7, 0x2f, 0x2, 0x2, 0xbd, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0xbe, 0xbf, 0x5, 0x2a, 0x16, 0x2, 0xbf, 0xc0, 0x7, 0x33, 0x2, 
    0x2, 0xc0, 0xc1, 0x5, 0x1a, 0xe, 0x2, 0xc1, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0xc2, 0xc5, 0x5, 0x24, 0x13, 0x2, 0xc3, 0xc5, 0x5, 0x34, 0x1b, 0x2, 
    0xc4, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc5, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x5, 0x34, 0x1b, 0x2, 0xc7, 0xc9, 
    0x7, 0x30, 0x2, 0x2, 0xc8, 0xca, 0x5, 0x30, 0x19, 0x2, 0xc9, 0xc8, 0x3, 
    0x2, 0x2, 0x2, 0xc9, 0xca, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x3, 0x2, 
    0x2, 0x2, 0xcb, 0xcc, 0x7, 0x31, 0x2, 0x2, 0xcc, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0xcd, 0xcf, 0x7, 0x39, 0x2, 0x2, 0xce, 0xcd, 0x3, 0x2, 0x2, 0x2, 
    0xce, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd0, 
    0xd5, 0x5, 0x2a, 0x16, 0x2, 0xd1, 0xd2, 0x7, 0x39, 0x2, 0x2, 0xd2, 0xd4, 
    0x5, 0x2a, 0x16, 0x2, 0xd3, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd7, 0x3, 
    0x2, 0x2, 0x2, 0xd5, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x3, 0x2, 
    0x2, 0x2, 0xd6, 0x27, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd5, 0x3, 0x2, 0x2, 
    0x2, 0xd8, 0xd9, 0x7, 0x38, 0x2, 0x2, 0xd9, 0xda, 0x5, 0x30, 0x19, 0x2, 
    0xda, 0x29, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x7, 0x3d, 0x2, 0x2, 0xdc, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xe4, 0x5, 0x30, 0x19, 0x2, 0xde, 0xe4, 
    0x5, 0x32, 0x1a, 0x2, 0xdf, 0xe4, 0x7, 0x29, 0x2, 0x2, 0xe0, 0xe4, 0x7, 
    0x2a, 0x2, 0x2, 0xe1, 0xe4, 0x5, 0x2e, 0x18, 0x2, 0xe2, 0xe4, 0x7, 0x2b, 
    0x2, 0x2, 0xe3, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xde, 0x3, 0x2, 0x2, 
    0x2, 0xe3, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe0, 0x3, 0x2, 0x2, 0x2, 
    0xe3, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe4, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x9, 0x2, 0x2, 0x2, 0xe6, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x9, 0x3, 0x2, 0x2, 0xe8, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0xe9, 0xea, 0x9, 0x4, 0x2, 0x2, 0xea, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0xeb, 0xee, 0x5, 0x2a, 0x16, 0x2, 0xec, 0xee, 0x5, 0x38, 0x1d, 
    0x2, 0xed, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xed, 0xec, 0x3, 0x2, 0x2, 0x2, 
    0xee, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x7, 0x30, 0x2, 0x2, 0xf0, 
    0xf1, 0x5, 0x30, 0x19, 0x2, 0xf1, 0xf2, 0x7, 0x31, 0x2, 0x2, 0xf2, 0xf4, 
    0x3, 0x2, 0x2, 0x2, 0xf3, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf7, 0x3, 
    0x2, 0x2, 0x2, 0xf5, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x3, 0x2, 
    0x2, 0x2, 0xf6, 0x35, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf5, 0x3, 0x2, 0x2, 
    0x2, 0xf8, 0xf9, 0x9, 0x5, 0x2, 0x2, 0xf9, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0xfa, 0xfb, 0x9, 0x6, 0x2, 0x2, 0xfb, 0x39, 0x3, 0x2, 0x2, 0x2, 0x1b, 
    0x3f, 0x44, 0x46, 0x56, 0x5c, 0x74, 0x78, 0x7a, 0x89, 0x8b, 0x94, 0x9c, 
    0xa4, 0xa7, 0xaa, 0xb4, 0xb8, 0xba, 0xc4, 0xc9, 0xce, 0xd5, 0xe3, 0xed, 
    0xf5, 
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
