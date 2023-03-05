
// Generated from ./TypedefParser.g4 by ANTLR 4.7.2


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

std::vector<TypedefParser::ImportStatementContext *> TypedefParser::CompilationUnitContext::importStatement() {
  return getRuleContexts<TypedefParser::ImportStatementContext>();
}

TypedefParser::ImportStatementContext* TypedefParser::CompilationUnitContext::importStatement(size_t i) {
  return getRuleContext<TypedefParser::ImportStatementContext>(i);
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
    setState(58);
    typedefVersionDeclaration();
    setState(59);
    moduleDeclaration();
    setState(63);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::IMPORT) {
      setState(60);
      importStatement();
      setState(65);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(70);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::ENUM

    || _la == TypedefParser::MESSAGE) {
      setState(68);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypedefParser::ENUM: {
          setState(66);
          enumDeclaration();
          break;
        }

        case TypedefParser::MESSAGE: {
          setState(67);
          messageDeclaration();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(72);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(73);
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
    setState(75);
    match(TypedefParser::TYPEDEF);
    setState(76);
    match(TypedefParser::EQ);
    setState(77);
    match(TypedefParser::IDENTIFIER);
    setState(78);
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

TypedefParser::ModuleNameContext* TypedefParser::ModuleDeclarationContext::moduleName() {
  return getRuleContext<TypedefParser::ModuleNameContext>(0);
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
    setState(80);
    match(TypedefParser::MODULE);
    setState(81);
    moduleName();
    setState(82);
    match(TypedefParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportStatementContext ------------------------------------------------------------------

TypedefParser::ImportStatementContext::ImportStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::SingleImportStatementContext* TypedefParser::ImportStatementContext::singleImportStatement() {
  return getRuleContext<TypedefParser::SingleImportStatementContext>(0);
}

TypedefParser::WildcardImportStatementContext* TypedefParser::ImportStatementContext::wildcardImportStatement() {
  return getRuleContext<TypedefParser::WildcardImportStatementContext>(0);
}


size_t TypedefParser::ImportStatementContext::getRuleIndex() const {
  return TypedefParser::RuleImportStatement;
}

void TypedefParser::ImportStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportStatement(this);
}

void TypedefParser::ImportStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportStatement(this);
}

TypedefParser::ImportStatementContext* TypedefParser::importStatement() {
  ImportStatementContext *_localctx = _tracker.createInstance<ImportStatementContext>(_ctx, getState());
  enterRule(_localctx, 6, TypedefParser::RuleImportStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(86);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(84);
      singleImportStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(85);
      wildcardImportStatement();
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

//----------------- SingleImportStatementContext ------------------------------------------------------------------

TypedefParser::SingleImportStatementContext::SingleImportStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::SingleImportStatementContext::IMPORT() {
  return getToken(TypedefParser::IMPORT, 0);
}

TypedefParser::QualifiedNameContext* TypedefParser::SingleImportStatementContext::qualifiedName() {
  return getRuleContext<TypedefParser::QualifiedNameContext>(0);
}

tree::TerminalNode* TypedefParser::SingleImportStatementContext::SEMI() {
  return getToken(TypedefParser::SEMI, 0);
}

tree::TerminalNode* TypedefParser::SingleImportStatementContext::AS() {
  return getToken(TypedefParser::AS, 0);
}

TypedefParser::IdentifierContext* TypedefParser::SingleImportStatementContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}


size_t TypedefParser::SingleImportStatementContext::getRuleIndex() const {
  return TypedefParser::RuleSingleImportStatement;
}

void TypedefParser::SingleImportStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingleImportStatement(this);
}

void TypedefParser::SingleImportStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingleImportStatement(this);
}

TypedefParser::SingleImportStatementContext* TypedefParser::singleImportStatement() {
  SingleImportStatementContext *_localctx = _tracker.createInstance<SingleImportStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, TypedefParser::RuleSingleImportStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(TypedefParser::IMPORT);
    setState(89);
    qualifiedName();
    setState(92);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::AS) {
      setState(90);
      match(TypedefParser::AS);
      setState(91);
      identifier();
    }
    setState(94);
    match(TypedefParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WildcardImportStatementContext ------------------------------------------------------------------

TypedefParser::WildcardImportStatementContext::WildcardImportStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::WildcardImportStatementContext::IMPORT() {
  return getToken(TypedefParser::IMPORT, 0);
}

TypedefParser::QualifiedNameContext* TypedefParser::WildcardImportStatementContext::qualifiedName() {
  return getRuleContext<TypedefParser::QualifiedNameContext>(0);
}

tree::TerminalNode* TypedefParser::WildcardImportStatementContext::DOTSTAR() {
  return getToken(TypedefParser::DOTSTAR, 0);
}

tree::TerminalNode* TypedefParser::WildcardImportStatementContext::SEMI() {
  return getToken(TypedefParser::SEMI, 0);
}


size_t TypedefParser::WildcardImportStatementContext::getRuleIndex() const {
  return TypedefParser::RuleWildcardImportStatement;
}

void TypedefParser::WildcardImportStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWildcardImportStatement(this);
}

void TypedefParser::WildcardImportStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWildcardImportStatement(this);
}

TypedefParser::WildcardImportStatementContext* TypedefParser::wildcardImportStatement() {
  WildcardImportStatementContext *_localctx = _tracker.createInstance<WildcardImportStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, TypedefParser::RuleWildcardImportStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    match(TypedefParser::IMPORT);
    setState(97);
    qualifiedName();
    setState(98);
    match(TypedefParser::DOTSTAR);
    setState(99);
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
    setState(101);
    match(TypedefParser::ENUM);
    setState(102);
    identifier();

    setState(103);
    match(TypedefParser::COLON);
    setState(104);
    primitiveFixedPointType();
    setState(106);
    match(TypedefParser::LBRACE);
    setState(107);
    enumBody();
    setState(108);
    match(TypedefParser::RBRACE);
    setState(109);
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
    setState(114); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(111);
              enumField();
              setState(112);
              match(TypedefParser::COMMA);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(116); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(122);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::IDENTIFIER) {
      setState(118);
      enumField();
      setState(120);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypedefParser::COMMA) {
        setState(119);
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
    setState(124);
    identifier();
    setState(125);
    match(TypedefParser::EQ);
    setState(126);
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
    setState(128);
    match(TypedefParser::MESSAGE);
    setState(129);
    identifier();
    setState(130);
    match(TypedefParser::LBRACE);
    setState(131);
    messageBody();
    setState(132);
    match(TypedefParser::RBRACE);
    setState(133);
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
    setState(139);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::ENUM

    || _la == TypedefParser::IDENTIFIER) {
      setState(137);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypedefParser::IDENTIFIER: {
          setState(135);
          fieldDeclaration();
          break;
        }

        case TypedefParser::ENUM: {
          setState(136);
          enumDeclaration();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(141);
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
    setState(142);
    identifier();
    setState(143);
    match(TypedefParser::COLON);
    setState(144);
    type();
    setState(145);
    position();
    setState(148);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::EQ) {
      setState(146);
      match(TypedefParser::EQ);
      setState(147);
      value();
    }
    setState(150);
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
    setState(156);
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
        setState(152);
        literal();
        break;
      }

      case TypedefParser::LBRACK: {
        enterOuterAlt(_localctx, 2);
        setState(153);
        array();
        break;
      }

      case TypedefParser::LBRACE: {
        enterOuterAlt(_localctx, 3);
        setState(154);
        map();
        break;
      }

      case TypedefParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 4);
        setState(155);
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
    setState(158);
    match(TypedefParser::LBRACK);
    setState(167);
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
      setState(159);
      value();
      setState(164);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(160);
          match(TypedefParser::COMMA);
          setState(161);
          value(); 
        }
        setState(166);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
      }
    }
    setState(170);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::COMMA) {
      setState(169);
      match(TypedefParser::COMMA);
    }
    setState(172);
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
    setState(174);
    match(TypedefParser::LBRACE);
    setState(186);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::IDENTIFIER) {
      setState(175);
      keyValue();
      setState(180);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(176);
          match(TypedefParser::COMMA);
          setState(177);
          keyValue(); 
        }
        setState(182);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
      }
      setState(184);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypedefParser::COMMA) {
        setState(183);
        match(TypedefParser::COMMA);
      }
    }
    setState(188);
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
    setState(190);
    identifier();
    setState(191);
    match(TypedefParser::COLON);
    setState(192);
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
    setState(196);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(194);
      arrayIdentifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(195);
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
    setState(198);
    typeType();
    setState(199);
    match(TypedefParser::LBRACK);
    setState(201);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypedefParser::DECIMAL_LITERAL)
      | (1ULL << TypedefParser::HEX_LITERAL)
      | (1ULL << TypedefParser::OCT_LITERAL)
      | (1ULL << TypedefParser::BINARY_LITERAL))) != 0)) {
      setState(200);
      integerLiteral();
    }
    setState(203);
    match(TypedefParser::RBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiedNameContext ------------------------------------------------------------------

TypedefParser::QualifiedNameContext::QualifiedNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypedefParser::IdentifierContext *> TypedefParser::QualifiedNameContext::identifier() {
  return getRuleContexts<TypedefParser::IdentifierContext>();
}

TypedefParser::IdentifierContext* TypedefParser::QualifiedNameContext::identifier(size_t i) {
  return getRuleContext<TypedefParser::IdentifierContext>(i);
}

std::vector<TypedefParser::ModuleNameContext *> TypedefParser::QualifiedNameContext::moduleName() {
  return getRuleContexts<TypedefParser::ModuleNameContext>();
}

TypedefParser::ModuleNameContext* TypedefParser::QualifiedNameContext::moduleName(size_t i) {
  return getRuleContext<TypedefParser::ModuleNameContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::QualifiedNameContext::PS() {
  return getTokens(TypedefParser::PS);
}

tree::TerminalNode* TypedefParser::QualifiedNameContext::PS(size_t i) {
  return getToken(TypedefParser::PS, i);
}

std::vector<tree::TerminalNode *> TypedefParser::QualifiedNameContext::DOT() {
  return getTokens(TypedefParser::DOT);
}

tree::TerminalNode* TypedefParser::QualifiedNameContext::DOT(size_t i) {
  return getToken(TypedefParser::DOT, i);
}


size_t TypedefParser::QualifiedNameContext::getRuleIndex() const {
  return TypedefParser::RuleQualifiedName;
}

void TypedefParser::QualifiedNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQualifiedName(this);
}

void TypedefParser::QualifiedNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQualifiedName(this);
}

TypedefParser::QualifiedNameContext* TypedefParser::qualifiedName() {
  QualifiedNameContext *_localctx = _tracker.createInstance<QualifiedNameContext>(_ctx, getState());
  enterRule(_localctx, 36, TypedefParser::RuleQualifiedName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(210);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(205);
        moduleName();
        setState(206);
        match(TypedefParser::PS); 
      }
      setState(212);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
    setState(213);
    identifier();
    setState(218);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::DOT) {
      setState(214);
      match(TypedefParser::DOT);
      setState(215);
      identifier();
      setState(220);
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

//----------------- ModuleNameContext ------------------------------------------------------------------

TypedefParser::ModuleNameContext::ModuleNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TypedefParser::IdentifierContext *> TypedefParser::ModuleNameContext::identifier() {
  return getRuleContexts<TypedefParser::IdentifierContext>();
}

TypedefParser::IdentifierContext* TypedefParser::ModuleNameContext::identifier(size_t i) {
  return getRuleContext<TypedefParser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::ModuleNameContext::PS() {
  return getTokens(TypedefParser::PS);
}

tree::TerminalNode* TypedefParser::ModuleNameContext::PS(size_t i) {
  return getToken(TypedefParser::PS, i);
}


size_t TypedefParser::ModuleNameContext::getRuleIndex() const {
  return TypedefParser::RuleModuleName;
}

void TypedefParser::ModuleNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModuleName(this);
}

void TypedefParser::ModuleNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModuleName(this);
}

TypedefParser::ModuleNameContext* TypedefParser::moduleName() {
  ModuleNameContext *_localctx = _tracker.createInstance<ModuleNameContext>(_ctx, getState());
  enterRule(_localctx, 38, TypedefParser::RuleModuleName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(221);
    identifier();
    setState(226);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(222);
        match(TypedefParser::PS);
        setState(223);
        identifier(); 
      }
      setState(228);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
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
  enterRule(_localctx, 40, TypedefParser::RulePosition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    match(TypedefParser::AT);
    setState(230);
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
  enterRule(_localctx, 42, TypedefParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
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
  enterRule(_localctx, 44, TypedefParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(240);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DECIMAL_LITERAL:
      case TypedefParser::HEX_LITERAL:
      case TypedefParser::OCT_LITERAL:
      case TypedefParser::BINARY_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(234);
        integerLiteral();
        break;
      }

      case TypedefParser::FLOAT_LITERAL:
      case TypedefParser::HEX_FLOAT_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(235);
        floatLiteral();
        break;
      }

      case TypedefParser::CHAR_LITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(236);
        match(TypedefParser::CHAR_LITERAL);
        break;
      }

      case TypedefParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(237);
        match(TypedefParser::STRING_LITERAL);
        break;
      }

      case TypedefParser::TRUE:
      case TypedefParser::FALSE: {
        enterOuterAlt(_localctx, 5);
        setState(238);
        boolLiteral();
        break;
      }

      case TypedefParser::TEXT_BLOCK: {
        enterOuterAlt(_localctx, 6);
        setState(239);
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
  enterRule(_localctx, 46, TypedefParser::RuleBoolLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(242);
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
  enterRule(_localctx, 48, TypedefParser::RuleIntegerLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(244);
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
  enterRule(_localctx, 50, TypedefParser::RuleFloatLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(246);
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
  enterRule(_localctx, 52, TypedefParser::RuleTypeType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(250);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::IDENTIFIER: {
        setState(248);
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
        setState(249);
        primitiveType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(258);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(252);
        match(TypedefParser::LBRACK);
        setState(253);
        integerLiteral();
        setState(254);
        match(TypedefParser::RBRACK); 
      }
      setState(260);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
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
  enterRule(_localctx, 54, TypedefParser::RulePrimitiveFixedPointType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(261);
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
  enterRule(_localctx, 56, TypedefParser::RulePrimitiveType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
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
  "compilationUnit", "typedefVersionDeclaration", "moduleDeclaration", "importStatement", 
  "singleImportStatement", "wildcardImportStatement", "enumDeclaration", 
  "enumBody", "enumField", "messageDeclaration", "messageBody", "fieldDeclaration", 
  "value", "array", "map", "keyValue", "type", "arrayIdentifier", "qualifiedName", 
  "moduleName", "position", "identifier", "literal", "boolLiteral", "integerLiteral", 
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
    0x3, 0x3d, 0x10c, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x40, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
    0x43, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x47, 0xa, 0x2, 0xc, 0x2, 
    0xe, 0x2, 0x4a, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x59, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x5, 0x6, 0x5f, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x6, 0x9, 0x75, 0xa, 0x9, 0xd, 0x9, 0xe, 0x9, 
    0x76, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x7b, 0xa, 0x9, 0x5, 0x9, 0x7d, 
    0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x7, 0xc, 0x8c, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x8f, 0xb, 0xc, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x97, 0xa, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 
    0xe, 0x9f, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 
    0xa5, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xa8, 0xb, 0xf, 0x5, 0xf, 0xaa, 
    0xa, 0xf, 0x3, 0xf, 0x5, 0xf, 0xad, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xb5, 0xa, 0x10, 0xc, 
    0x10, 0xe, 0x10, 0xb8, 0xb, 0x10, 0x3, 0x10, 0x5, 0x10, 0xbb, 0xa, 0x10, 
    0x5, 0x10, 0xbd, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xc7, 0xa, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xcc, 0xa, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0xd3, 0xa, 0x14, 
    0xc, 0x14, 0xe, 0x14, 0xd6, 0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x7, 0x14, 0xdb, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0xde, 0xb, 0x14, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0xe3, 0xa, 0x15, 0xc, 0x15, 0xe, 
    0x15, 0xe6, 0xb, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x5, 0x18, 0xf3, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0xfd, 0xa, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x103, 0xa, 0x1c, 
    0xc, 0x1c, 0xe, 0x1c, 0x106, 0xb, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x2, 0x2, 0x1f, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x2, 
    0x7, 0x3, 0x2, 0x1b, 0x1c, 0x4, 0x2, 0x20, 0x20, 0x23, 0x25, 0x3, 0x2, 
    0x26, 0x27, 0x4, 0x2, 0x4, 0x4, 0x7, 0xe, 0x3, 0x2, 0x3, 0xf, 0x2, 0x10e, 
    0x2, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x4, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x6, 0x52, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x58, 0x3, 0x2, 0x2, 0x2, 0xa, 0x5a, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x62, 0x3, 0x2, 0x2, 0x2, 0xe, 0x67, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x74, 0x3, 0x2, 0x2, 0x2, 0x12, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x82, 0x3, 0x2, 0x2, 0x2, 0x16, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x18, 0x90, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xa0, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0xb0, 0x3, 0x2, 0x2, 0x2, 0x20, 0xc0, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0xc6, 0x3, 0x2, 0x2, 0x2, 0x24, 0xc8, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0xd4, 0x3, 0x2, 0x2, 0x2, 0x28, 0xdf, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xea, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0xf2, 0x3, 0x2, 0x2, 0x2, 0x30, 0xf4, 0x3, 0x2, 0x2, 0x2, 0x32, 0xf6, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x36, 0xfc, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x107, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x109, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x3d, 0x5, 0x4, 0x3, 0x2, 0x3d, 0x41, 0x5, 0x6, 0x4, 
    0x2, 0x3e, 0x40, 0x5, 0x8, 0x5, 0x2, 0x3f, 0x3e, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x43, 0x3, 0x2, 0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 
    0x42, 0x3, 0x2, 0x2, 0x2, 0x42, 0x48, 0x3, 0x2, 0x2, 0x2, 0x43, 0x41, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x47, 0x5, 0xe, 0x8, 0x2, 0x45, 0x47, 0x5, 
    0x14, 0xb, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0x47, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 
    0x2, 0x48, 0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4b, 0x3, 0x2, 0x2, 0x2, 
    0x4a, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x2, 0x2, 0x3, 0x4c, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0x1d, 0x2, 0x2, 0x4e, 0x4f, 
    0x7, 0x37, 0x2, 0x2, 0x4f, 0x50, 0x7, 0x3d, 0x2, 0x2, 0x50, 0x51, 0x7, 
    0x32, 0x2, 0x2, 0x51, 0x5, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x7, 0x19, 
    0x2, 0x2, 0x53, 0x54, 0x5, 0x28, 0x15, 0x2, 0x54, 0x55, 0x7, 0x32, 0x2, 
    0x2, 0x55, 0x7, 0x3, 0x2, 0x2, 0x2, 0x56, 0x59, 0x5, 0xa, 0x6, 0x2, 
    0x57, 0x59, 0x5, 0xc, 0x7, 0x2, 0x58, 0x56, 0x3, 0x2, 0x2, 0x2, 0x58, 
    0x57, 0x3, 0x2, 0x2, 0x2, 0x59, 0x9, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 
    0x7, 0x15, 0x2, 0x2, 0x5b, 0x5e, 0x5, 0x26, 0x14, 0x2, 0x5c, 0x5d, 0x7, 
    0x1e, 0x2, 0x2, 0x5d, 0x5f, 0x5, 0x2c, 0x17, 0x2, 0x5e, 0x5c, 0x3, 0x2, 
    0x2, 0x2, 0x5e, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x3, 0x2, 0x2, 
    0x2, 0x60, 0x61, 0x7, 0x32, 0x2, 0x2, 0x61, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x62, 0x63, 0x7, 0x15, 0x2, 0x2, 0x63, 0x64, 0x5, 0x26, 0x14, 0x2, 0x64, 
    0x65, 0x7, 0x36, 0x2, 0x2, 0x65, 0x66, 0x7, 0x32, 0x2, 0x2, 0x66, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x7, 0x12, 0x2, 0x2, 0x68, 0x69, 0x5, 
    0x2c, 0x17, 0x2, 0x69, 0x6a, 0x7, 0x33, 0x2, 0x2, 0x6a, 0x6b, 0x5, 0x38, 
    0x1d, 0x2, 0x6b, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0x2e, 0x2, 
    0x2, 0x6d, 0x6e, 0x5, 0x10, 0x9, 0x2, 0x6e, 0x6f, 0x7, 0x2f, 0x2, 0x2, 
    0x6f, 0x70, 0x7, 0x32, 0x2, 0x2, 0x70, 0xf, 0x3, 0x2, 0x2, 0x2, 0x71, 
    0x72, 0x5, 0x12, 0xa, 0x2, 0x72, 0x73, 0x7, 0x34, 0x2, 0x2, 0x73, 0x75, 
    0x3, 0x2, 0x2, 0x2, 0x74, 0x71, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x3, 
    0x2, 0x2, 0x2, 0x76, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 
    0x2, 0x2, 0x77, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x78, 0x7a, 0x5, 0x12, 0xa, 
    0x2, 0x79, 0x7b, 0x7, 0x34, 0x2, 0x2, 0x7a, 0x79, 0x3, 0x2, 0x2, 0x2, 
    0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7c, 
    0x78, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x5, 0x2c, 0x17, 0x2, 0x7f, 0x80, 0x7, 
    0x37, 0x2, 0x2, 0x80, 0x81, 0x5, 0x32, 0x1a, 0x2, 0x81, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x82, 0x83, 0x7, 0x18, 0x2, 0x2, 0x83, 0x84, 0x5, 0x2c, 0x17, 
    0x2, 0x84, 0x85, 0x7, 0x2e, 0x2, 0x2, 0x85, 0x86, 0x5, 0x16, 0xc, 0x2, 
    0x86, 0x87, 0x7, 0x2f, 0x2, 0x2, 0x87, 0x88, 0x7, 0x32, 0x2, 0x2, 0x88, 
    0x15, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8c, 0x5, 0x18, 0xd, 0x2, 0x8a, 0x8c, 
    0x5, 0xe, 0x8, 0x2, 0x8b, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8a, 0x3, 
    0x2, 0x2, 0x2, 0x8c, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8b, 0x3, 0x2, 
    0x2, 0x2, 0x8d, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x8f, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x5, 0x2c, 0x17, 0x2, 
    0x91, 0x92, 0x7, 0x33, 0x2, 0x2, 0x92, 0x93, 0x5, 0x22, 0x12, 0x2, 0x93, 
    0x96, 0x5, 0x2a, 0x16, 0x2, 0x94, 0x95, 0x7, 0x37, 0x2, 0x2, 0x95, 0x97, 
    0x5, 0x1a, 0xe, 0x2, 0x96, 0x94, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x3, 
    0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x7, 0x32, 
    0x2, 0x2, 0x99, 0x19, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9f, 0x5, 0x2e, 0x18, 
    0x2, 0x9b, 0x9f, 0x5, 0x1c, 0xf, 0x2, 0x9c, 0x9f, 0x5, 0x1e, 0x10, 0x2, 
    0x9d, 0x9f, 0x5, 0x2c, 0x17, 0x2, 0x9e, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9e, 
    0x9b, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9d, 
    0x3, 0x2, 0x2, 0x2, 0x9f, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa9, 0x7, 
    0x30, 0x2, 0x2, 0xa1, 0xa6, 0x5, 0x1a, 0xe, 0x2, 0xa2, 0xa3, 0x7, 0x34, 
    0x2, 0x2, 0xa3, 0xa5, 0x5, 0x1a, 0xe, 0x2, 0xa4, 0xa2, 0x3, 0x2, 0x2, 
    0x2, 0xa5, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa4, 0x3, 0x2, 0x2, 0x2, 
    0xa6, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xa8, 
    0xa6, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 
    0x3, 0x2, 0x2, 0x2, 0xaa, 0xac, 0x3, 0x2, 0x2, 0x2, 0xab, 0xad, 0x7, 
    0x34, 0x2, 0x2, 0xac, 0xab, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x3, 0x2, 
    0x2, 0x2, 0xad, 0xae, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x7, 0x31, 0x2, 
    0x2, 0xaf, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xbc, 0x7, 0x2e, 0x2, 0x2, 
    0xb1, 0xb6, 0x5, 0x20, 0x11, 0x2, 0xb2, 0xb3, 0x7, 0x34, 0x2, 0x2, 0xb3, 
    0xb5, 0x5, 0x20, 0x11, 0x2, 0xb4, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb8, 
    0x3, 0x2, 0x2, 0x2, 0xb6, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 
    0x2, 0x2, 0x2, 0xb7, 0xba, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb6, 0x3, 0x2, 
    0x2, 0x2, 0xb9, 0xbb, 0x7, 0x34, 0x2, 0x2, 0xba, 0xb9, 0x3, 0x2, 0x2, 
    0x2, 0xba, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbd, 0x3, 0x2, 0x2, 0x2, 
    0xbc, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbd, 
    0xbe, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x7, 0x2f, 0x2, 0x2, 0xbf, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x5, 0x2c, 0x17, 0x2, 0xc1, 0xc2, 0x7, 
    0x33, 0x2, 0x2, 0xc2, 0xc3, 0x5, 0x1a, 0xe, 0x2, 0xc3, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0xc4, 0xc7, 0x5, 0x24, 0x13, 0x2, 0xc5, 0xc7, 0x5, 0x36, 0x1c, 
    0x2, 0xc6, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc5, 0x3, 0x2, 0x2, 0x2, 
    0xc7, 0x23, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x5, 0x36, 0x1c, 0x2, 0xc9, 
    0xcb, 0x7, 0x30, 0x2, 0x2, 0xca, 0xcc, 0x5, 0x32, 0x1a, 0x2, 0xcb, 0xca, 
    0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x3, 
    0x2, 0x2, 0x2, 0xcd, 0xce, 0x7, 0x31, 0x2, 0x2, 0xce, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0xcf, 0xd0, 0x5, 0x28, 0x15, 0x2, 0xd0, 0xd1, 0x7, 0x39, 0x2, 
    0x2, 0xd1, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xcf, 0x3, 0x2, 0x2, 0x2, 
    0xd3, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 
    0xd5, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd4, 
    0x3, 0x2, 0x2, 0x2, 0xd7, 0xdc, 0x5, 0x2c, 0x17, 0x2, 0xd8, 0xd9, 0x7, 
    0x35, 0x2, 0x2, 0xd9, 0xdb, 0x5, 0x2c, 0x17, 0x2, 0xda, 0xd8, 0x3, 0x2, 
    0x2, 0x2, 0xdb, 0xde, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 
    0x2, 0xdc, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdd, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0xde, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe4, 0x5, 0x2c, 0x17, 0x2, 0xe0, 
    0xe1, 0x7, 0x39, 0x2, 0x2, 0xe1, 0xe3, 0x5, 0x2c, 0x17, 0x2, 0xe2, 0xe0, 
    0x3, 0x2, 0x2, 0x2, 0xe3, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe2, 0x3, 
    0x2, 0x2, 0x2, 0xe4, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe5, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0xe6, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x7, 0x38, 0x2, 
    0x2, 0xe8, 0xe9, 0x5, 0x32, 0x1a, 0x2, 0xe9, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0xea, 0xeb, 0x7, 0x3d, 0x2, 0x2, 0xeb, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xec, 
    0xf3, 0x5, 0x32, 0x1a, 0x2, 0xed, 0xf3, 0x5, 0x34, 0x1b, 0x2, 0xee, 
    0xf3, 0x7, 0x29, 0x2, 0x2, 0xef, 0xf3, 0x7, 0x2a, 0x2, 0x2, 0xf0, 0xf3, 
    0x5, 0x30, 0x19, 0x2, 0xf1, 0xf3, 0x7, 0x2b, 0x2, 0x2, 0xf2, 0xec, 0x3, 
    0x2, 0x2, 0x2, 0xf2, 0xed, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xee, 0x3, 0x2, 
    0x2, 0x2, 0xf2, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf0, 0x3, 0x2, 0x2, 
    0x2, 0xf2, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf3, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0xf4, 0xf5, 0x9, 0x2, 0x2, 0x2, 0xf5, 0x31, 0x3, 0x2, 0x2, 0x2, 0xf6, 
    0xf7, 0x9, 0x3, 0x2, 0x2, 0xf7, 0x33, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 
    0x9, 0x4, 0x2, 0x2, 0xf9, 0x35, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfd, 0x5, 
    0x2c, 0x17, 0x2, 0xfb, 0xfd, 0x5, 0x3a, 0x1e, 0x2, 0xfc, 0xfa, 0x3, 
    0x2, 0x2, 0x2, 0xfc, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfd, 0x104, 0x3, 0x2, 
    0x2, 0x2, 0xfe, 0xff, 0x7, 0x30, 0x2, 0x2, 0xff, 0x100, 0x5, 0x32, 0x1a, 
    0x2, 0x100, 0x101, 0x7, 0x31, 0x2, 0x2, 0x101, 0x103, 0x3, 0x2, 0x2, 
    0x2, 0x102, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x103, 0x106, 0x3, 0x2, 0x2, 0x2, 
    0x104, 0x102, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0x3, 0x2, 0x2, 0x2, 
    0x105, 0x37, 0x3, 0x2, 0x2, 0x2, 0x106, 0x104, 0x3, 0x2, 0x2, 0x2, 0x107, 
    0x108, 0x9, 0x5, 0x2, 0x2, 0x108, 0x39, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 
    0x9, 0x6, 0x2, 0x2, 0x10a, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x41, 0x46, 
    0x48, 0x58, 0x5e, 0x76, 0x7a, 0x7c, 0x8b, 0x8d, 0x96, 0x9e, 0xa6, 0xa9, 
    0xac, 0xb6, 0xba, 0xbc, 0xc6, 0xcb, 0xd4, 0xdc, 0xe4, 0xf2, 0xfc, 0x104, 
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
