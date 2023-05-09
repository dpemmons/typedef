
#include "libtypedef/parser/symbol_table.h"


// Generated from ./libtypedef/parser/grammar/TypedefParser.g4 by ANTLR 4.7.2


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
#include "libtypedef/parser/parser_helpers.h"


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

std::vector<TypedefParser::TypeDeclarationContext *> TypedefParser::CompilationUnitContext::typeDeclaration() {
  return getRuleContexts<TypedefParser::TypeDeclarationContext>();
}

TypedefParser::TypeDeclarationContext* TypedefParser::CompilationUnitContext::typeDeclaration(size_t i) {
  return getRuleContext<TypedefParser::TypeDeclarationContext>(i);
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
    setState(104);
    dynamic_cast<CompilationUnitContext *>(_localctx)->typedefVersionDeclarationContext = typedefVersionDeclaration();
     dynamic_cast<CompilationUnitContext *>(_localctx)->version =  dynamic_cast<CompilationUnitContext *>(_localctx)->typedefVersionDeclarationContext->version; 
    setState(109);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(106);
        match(TypedefParser::WS); 
      }
      setState(111);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(115);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::KW_MODULE) {
      setState(112);
      dynamic_cast<CompilationUnitContext *>(_localctx)->moduleDeclarationContext = moduleDeclaration();
       dynamic_cast<CompilationUnitContext *>(_localctx)->module =  dynamic_cast<CompilationUnitContext *>(_localctx)->moduleDeclarationContext->module; 
    }
    setState(126);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(120);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(117);
          match(TypedefParser::WS);
          setState(122);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(123);
        useDeclaration(); 
      }
      setState(128);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
    setState(140);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(132);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(129);
          match(TypedefParser::WS);
          setState(134);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(135);
        dynamic_cast<CompilationUnitContext *>(_localctx)->typeDeclarationContext = typeDeclaration();

        		TryInsert(_localctx->symbol_table, dynamic_cast<CompilationUnitContext *>(_localctx)->typeDeclarationContext, this);
        	 
      }
      setState(142);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
    setState(146);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(143);
      match(TypedefParser::WS);
      setState(148);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(149);
    match(TypedefParser::EOF);
   
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
  enterRule(_localctx, 2, TypedefParser::RuleMaybeValuedSymbolDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(151);
    maybeValuedSymbol();
    setState(155);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(152);
      match(TypedefParser::WS);
      setState(157);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(158);
    match(TypedefParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDeclarationContext ------------------------------------------------------------------

TypedefParser::TypeDeclarationContext::TypeDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::TypeDeclarationContext::SEMI() {
  return getToken(TypedefParser::SEMI, 0);
}

TypedefParser::StructDeclarationContext* TypedefParser::TypeDeclarationContext::structDeclaration() {
  return getRuleContext<TypedefParser::StructDeclarationContext>(0);
}

TypedefParser::VariantDeclarationContext* TypedefParser::TypeDeclarationContext::variantDeclaration() {
  return getRuleContext<TypedefParser::VariantDeclarationContext>(0);
}

TypedefParser::VectorDeclarationContext* TypedefParser::TypeDeclarationContext::vectorDeclaration() {
  return getRuleContext<TypedefParser::VectorDeclarationContext>(0);
}

TypedefParser::MapDeclarationContext* TypedefParser::TypeDeclarationContext::mapDeclaration() {
  return getRuleContext<TypedefParser::MapDeclarationContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::TypeDeclarationContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::TypeDeclarationContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::TypeDeclarationContext::getRuleIndex() const {
  return TypedefParser::RuleTypeDeclaration;
}

void TypedefParser::TypeDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDeclaration(this);
}

void TypedefParser::TypeDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDeclaration(this);
}


antlrcpp::Any TypedefParser::TypeDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitTypeDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::TypeDeclarationContext* TypedefParser::typeDeclaration() {
  TypeDeclarationContext *_localctx = _tracker.createInstance<TypeDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, TypedefParser::RuleTypeDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(172);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::KW_STRUCT: {
        setState(160);
        dynamic_cast<TypeDeclarationContext *>(_localctx)->structDeclarationContext = structDeclaration();
         dynamic_cast<TypeDeclarationContext *>(_localctx)->maybe_symbol =  dynamic_cast<TypeDeclarationContext *>(_localctx)->structDeclarationContext->maybe_symbol; 
        break;
      }

      case TypedefParser::KW_VARIANT: {
        setState(163);
        dynamic_cast<TypeDeclarationContext *>(_localctx)->variantDeclarationContext = variantDeclaration();
         dynamic_cast<TypeDeclarationContext *>(_localctx)->maybe_symbol =  dynamic_cast<TypeDeclarationContext *>(_localctx)->variantDeclarationContext->maybe_symbol; 
        break;
      }

      case TypedefParser::KW_VECTOR: {
        setState(166);
        dynamic_cast<TypeDeclarationContext *>(_localctx)->vectorDeclarationContext = vectorDeclaration();
         dynamic_cast<TypeDeclarationContext *>(_localctx)->maybe_symbol =  dynamic_cast<TypeDeclarationContext *>(_localctx)->vectorDeclarationContext->maybe_symbol; 
        break;
      }

      case TypedefParser::KW_MAP: {
        setState(169);
        dynamic_cast<TypeDeclarationContext *>(_localctx)->mapDeclarationContext = mapDeclaration();
         dynamic_cast<TypeDeclarationContext *>(_localctx)->maybe_symbol =  dynamic_cast<TypeDeclarationContext *>(_localctx)->mapDeclarationContext->maybe_symbol; 
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(177);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(174);
      match(TypedefParser::WS);
      setState(179);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(180);
    match(TypedefParser::SEMI);
   
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

tree::TerminalNode* TypedefParser::StructDeclarationContext::KW_STRUCT() {
  return getToken(TypedefParser::KW_STRUCT, 0);
}

TypedefParser::IdentifierContext* TypedefParser::StructDeclarationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::StructDeclarationContext::LBRACE() {
  return getToken(TypedefParser::LBRACE, 0);
}

tree::TerminalNode* TypedefParser::StructDeclarationContext::RBRACE() {
  return getToken(TypedefParser::RBRACE, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::StructDeclarationContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::StructDeclarationContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}

std::vector<tree::TerminalNode *> TypedefParser::StructDeclarationContext::SEMI() {
  return getTokens(TypedefParser::SEMI);
}

tree::TerminalNode* TypedefParser::StructDeclarationContext::SEMI(size_t i) {
  return getToken(TypedefParser::SEMI, i);
}

std::vector<TypedefParser::MaybeValuedSymbolContext *> TypedefParser::StructDeclarationContext::maybeValuedSymbol() {
  return getRuleContexts<TypedefParser::MaybeValuedSymbolContext>();
}

TypedefParser::MaybeValuedSymbolContext* TypedefParser::StructDeclarationContext::maybeValuedSymbol(size_t i) {
  return getRuleContext<TypedefParser::MaybeValuedSymbolContext>(i);
}

std::vector<TypedefParser::StructDeclarationContext *> TypedefParser::StructDeclarationContext::structDeclaration() {
  return getRuleContexts<TypedefParser::StructDeclarationContext>();
}

TypedefParser::StructDeclarationContext* TypedefParser::StructDeclarationContext::structDeclaration(size_t i) {
  return getRuleContext<TypedefParser::StructDeclarationContext>(i);
}

std::vector<TypedefParser::VariantDeclarationContext *> TypedefParser::StructDeclarationContext::variantDeclaration() {
  return getRuleContexts<TypedefParser::VariantDeclarationContext>();
}

TypedefParser::VariantDeclarationContext* TypedefParser::StructDeclarationContext::variantDeclaration(size_t i) {
  return getRuleContext<TypedefParser::VariantDeclarationContext>(i);
}

std::vector<TypedefParser::VectorDeclarationContext *> TypedefParser::StructDeclarationContext::vectorDeclaration() {
  return getRuleContexts<TypedefParser::VectorDeclarationContext>();
}

TypedefParser::VectorDeclarationContext* TypedefParser::StructDeclarationContext::vectorDeclaration(size_t i) {
  return getRuleContext<TypedefParser::VectorDeclarationContext>(i);
}

std::vector<TypedefParser::MapDeclarationContext *> TypedefParser::StructDeclarationContext::mapDeclaration() {
  return getRuleContexts<TypedefParser::MapDeclarationContext>();
}

TypedefParser::MapDeclarationContext* TypedefParser::StructDeclarationContext::mapDeclaration(size_t i) {
  return getRuleContext<TypedefParser::MapDeclarationContext>(i);
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
  enterRule(_localctx, 6, TypedefParser::RuleStructDeclaration);

  		dynamic_cast<StructDeclarationContext *>(_localctx)->s =  std::make_shared<td::Struct>();
  	
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(182);
    match(TypedefParser::KW_STRUCT);
    setState(186);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(183);
      match(TypedefParser::WS);
      setState(188);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(189);
    dynamic_cast<StructDeclarationContext *>(_localctx)->identifierContext = identifier();
    setState(193);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(190);
      match(TypedefParser::WS);
      setState(195);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(196);
    match(TypedefParser::LBRACE);
    setState(200);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(197);
        match(TypedefParser::WS); 
      }
      setState(202);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
    setState(235);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypedefParser::KW_STRUCT)
      | (1ULL << TypedefParser::KW_VARIANT)
      | (1ULL << TypedefParser::KW_VECTOR)
      | (1ULL << TypedefParser::KW_MAP))) != 0) || _la == TypedefParser::NON_KEYWORD_IDENTIFIER

    || _la == TypedefParser::RAW_ESCAPE) {
      setState(218);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypedefParser::NON_KEYWORD_IDENTIFIER:
        case TypedefParser::RAW_ESCAPE: {
          setState(203);
          dynamic_cast<StructDeclarationContext *>(_localctx)->maybeValuedSymbolContext = maybeValuedSymbol();

          				TryInsertSymbol(_localctx->s, this, dynamic_cast<StructDeclarationContext *>(_localctx)->maybeValuedSymbolContext);
          			
          break;
        }

        case TypedefParser::KW_STRUCT: {
          setState(206);
          dynamic_cast<StructDeclarationContext *>(_localctx)->structDeclarationContext = structDeclaration();

          				TryInsertNested(_localctx->s, this, dynamic_cast<StructDeclarationContext *>(_localctx)->structDeclarationContext);
          			
          break;
        }

        case TypedefParser::KW_VARIANT: {
          setState(209);
          dynamic_cast<StructDeclarationContext *>(_localctx)->variantDeclarationContext = variantDeclaration();

          				TryInsertNested(_localctx->s, this, dynamic_cast<StructDeclarationContext *>(_localctx)->variantDeclarationContext);
          			
          break;
        }

        case TypedefParser::KW_VECTOR: {
          setState(212);
          dynamic_cast<StructDeclarationContext *>(_localctx)->vectorDeclarationContext = vectorDeclaration();

          				TryInsertNested(_localctx->s, this, dynamic_cast<StructDeclarationContext *>(_localctx)->vectorDeclarationContext);
          			
          break;
        }

        case TypedefParser::KW_MAP: {
          setState(215);
          dynamic_cast<StructDeclarationContext *>(_localctx)->mapDeclarationContext = mapDeclaration();

          				TryInsertNested(_localctx->s, this, dynamic_cast<StructDeclarationContext *>(_localctx)->mapDeclarationContext);
          			
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(223);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(220);
        match(TypedefParser::WS);
        setState(225);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(226);
      match(TypedefParser::SEMI);
      setState(230);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(227);
          match(TypedefParser::WS); 
        }
        setState(232);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
      }
      setState(237);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(241);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(238);
      match(TypedefParser::WS);
      setState(243);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(244);
    match(TypedefParser::RBRACE);

    		dynamic_cast<StructDeclarationContext *>(_localctx)->maybe_symbol =  std::make_pair(
    			td::Identifier::TypeIdentifier(dynamic_cast<StructDeclarationContext *>(_localctx)->identifierContext->id), _localctx->s);
    	
   
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

tree::TerminalNode* TypedefParser::VariantDeclarationContext::KW_VARIANT() {
  return getToken(TypedefParser::KW_VARIANT, 0);
}

TypedefParser::IdentifierContext* TypedefParser::VariantDeclarationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::VariantDeclarationContext::LBRACE() {
  return getToken(TypedefParser::LBRACE, 0);
}

tree::TerminalNode* TypedefParser::VariantDeclarationContext::RBRACE() {
  return getToken(TypedefParser::RBRACE, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::VariantDeclarationContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::VariantDeclarationContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}

std::vector<tree::TerminalNode *> TypedefParser::VariantDeclarationContext::SEMI() {
  return getTokens(TypedefParser::SEMI);
}

tree::TerminalNode* TypedefParser::VariantDeclarationContext::SEMI(size_t i) {
  return getToken(TypedefParser::SEMI, i);
}

std::vector<TypedefParser::UnvaluedSymbolContext *> TypedefParser::VariantDeclarationContext::unvaluedSymbol() {
  return getRuleContexts<TypedefParser::UnvaluedSymbolContext>();
}

TypedefParser::UnvaluedSymbolContext* TypedefParser::VariantDeclarationContext::unvaluedSymbol(size_t i) {
  return getRuleContext<TypedefParser::UnvaluedSymbolContext>(i);
}

std::vector<TypedefParser::StructDeclarationContext *> TypedefParser::VariantDeclarationContext::structDeclaration() {
  return getRuleContexts<TypedefParser::StructDeclarationContext>();
}

TypedefParser::StructDeclarationContext* TypedefParser::VariantDeclarationContext::structDeclaration(size_t i) {
  return getRuleContext<TypedefParser::StructDeclarationContext>(i);
}

std::vector<TypedefParser::VariantDeclarationContext *> TypedefParser::VariantDeclarationContext::variantDeclaration() {
  return getRuleContexts<TypedefParser::VariantDeclarationContext>();
}

TypedefParser::VariantDeclarationContext* TypedefParser::VariantDeclarationContext::variantDeclaration(size_t i) {
  return getRuleContext<TypedefParser::VariantDeclarationContext>(i);
}

std::vector<TypedefParser::VectorDeclarationContext *> TypedefParser::VariantDeclarationContext::vectorDeclaration() {
  return getRuleContexts<TypedefParser::VectorDeclarationContext>();
}

TypedefParser::VectorDeclarationContext* TypedefParser::VariantDeclarationContext::vectorDeclaration(size_t i) {
  return getRuleContext<TypedefParser::VectorDeclarationContext>(i);
}

std::vector<TypedefParser::MapDeclarationContext *> TypedefParser::VariantDeclarationContext::mapDeclaration() {
  return getRuleContexts<TypedefParser::MapDeclarationContext>();
}

TypedefParser::MapDeclarationContext* TypedefParser::VariantDeclarationContext::mapDeclaration(size_t i) {
  return getRuleContext<TypedefParser::MapDeclarationContext>(i);
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
  enterRule(_localctx, 8, TypedefParser::RuleVariantDeclaration);

  		dynamic_cast<VariantDeclarationContext *>(_localctx)->v =  std::make_shared<td::Variant>();
  	
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(247);
    match(TypedefParser::KW_VARIANT);
    setState(251);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(248);
      match(TypedefParser::WS);
      setState(253);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(254);
    dynamic_cast<VariantDeclarationContext *>(_localctx)->identifierContext = identifier();
    setState(258);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(255);
      match(TypedefParser::WS);
      setState(260);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(261);
    match(TypedefParser::LBRACE);
    setState(300);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TypedefParser::KW_STRUCT)
      | (1ULL << TypedefParser::KW_VARIANT)
      | (1ULL << TypedefParser::KW_VECTOR)
      | (1ULL << TypedefParser::KW_MAP))) != 0) || ((((_la - 84) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 84)) & ((1ULL << (TypedefParser::NON_KEYWORD_IDENTIFIER - 84))
      | (1ULL << (TypedefParser::WS - 84))
      | (1ULL << (TypedefParser::RAW_ESCAPE - 84)))) != 0)) {
      setState(265);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(262);
        match(TypedefParser::WS);
        setState(267);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(283);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypedefParser::NON_KEYWORD_IDENTIFIER:
        case TypedefParser::RAW_ESCAPE: {
          setState(268);
          dynamic_cast<VariantDeclarationContext *>(_localctx)->unvaluedSymbolContext = unvaluedSymbol();

          				TryInsertSymbol(_localctx->v, this, dynamic_cast<VariantDeclarationContext *>(_localctx)->unvaluedSymbolContext);
          			
          break;
        }

        case TypedefParser::KW_STRUCT: {
          setState(271);
          dynamic_cast<VariantDeclarationContext *>(_localctx)->structDeclarationContext = structDeclaration();

          				TryInsertNested(_localctx->v, this, dynamic_cast<VariantDeclarationContext *>(_localctx)->structDeclarationContext);
          			
          break;
        }

        case TypedefParser::KW_VARIANT: {
          setState(274);
          dynamic_cast<VariantDeclarationContext *>(_localctx)->variantDeclarationContext = variantDeclaration();

          				TryInsertNested(_localctx->v, this, dynamic_cast<VariantDeclarationContext *>(_localctx)->variantDeclarationContext);
          			
          break;
        }

        case TypedefParser::KW_VECTOR: {
          setState(277);
          dynamic_cast<VariantDeclarationContext *>(_localctx)->vectorDeclarationContext = vectorDeclaration();

          				TryInsertNested(_localctx->v, this, dynamic_cast<VariantDeclarationContext *>(_localctx)->vectorDeclarationContext);
          			
          break;
        }

        case TypedefParser::KW_MAP: {
          setState(280);
          dynamic_cast<VariantDeclarationContext *>(_localctx)->mapDeclarationContext = mapDeclaration();

          				TryInsertNested(_localctx->v, this, dynamic_cast<VariantDeclarationContext *>(_localctx)->mapDeclarationContext);
          			
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(288);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(285);
        match(TypedefParser::WS);
        setState(290);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(291);
      match(TypedefParser::SEMI);
      setState(295);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(292);
          match(TypedefParser::WS); 
        }
        setState(297);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
      }
      setState(302);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(303);
    match(TypedefParser::RBRACE);

    		dynamic_cast<VariantDeclarationContext *>(_localctx)->maybe_symbol =  std::make_pair(
    			td::Identifier::TypeIdentifier(dynamic_cast<VariantDeclarationContext *>(_localctx)->identifierContext->id), _localctx->v);
    	
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VectorDeclarationContext ------------------------------------------------------------------

TypedefParser::VectorDeclarationContext::VectorDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::VectorDeclarationContext::KW_VECTOR() {
  return getToken(TypedefParser::KW_VECTOR, 0);
}

TypedefParser::IdentifierContext* TypedefParser::VectorDeclarationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::VectorDeclarationContext::LT() {
  return getToken(TypedefParser::LT, 0);
}

tree::TerminalNode* TypedefParser::VectorDeclarationContext::GT() {
  return getToken(TypedefParser::GT, 0);
}

TypedefParser::UnvaluedTypeContext* TypedefParser::VectorDeclarationContext::unvaluedType() {
  return getRuleContext<TypedefParser::UnvaluedTypeContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::VectorDeclarationContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::VectorDeclarationContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::VectorDeclarationContext::getRuleIndex() const {
  return TypedefParser::RuleVectorDeclaration;
}

void TypedefParser::VectorDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVectorDeclaration(this);
}

void TypedefParser::VectorDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVectorDeclaration(this);
}


antlrcpp::Any TypedefParser::VectorDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitVectorDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::VectorDeclarationContext* TypedefParser::vectorDeclaration() {
  VectorDeclarationContext *_localctx = _tracker.createInstance<VectorDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 10, TypedefParser::RuleVectorDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(306);
    match(TypedefParser::KW_VECTOR);
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
    dynamic_cast<VectorDeclarationContext *>(_localctx)->identifierContext = identifier();
    setState(317);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(314);
      match(TypedefParser::WS);
      setState(319);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(320);
    match(TypedefParser::LT);
    setState(324);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(321);
      match(TypedefParser::WS);
      setState(326);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(327);
    dynamic_cast<VectorDeclarationContext *>(_localctx)->val = dynamic_cast<VectorDeclarationContext *>(_localctx)->unvaluedTypeContext = unvaluedType();
    setState(331);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(328);
      match(TypedefParser::WS);
      setState(333);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(334);
    match(TypedefParser::GT);

    		if (dynamic_cast<VectorDeclarationContext *>(_localctx)->unvaluedTypeContext->maybe_val) {
    			dynamic_cast<VectorDeclarationContext *>(_localctx)->maybe_symbol =  std::make_pair(
    				td::Identifier::TypeIdentifier(dynamic_cast<VectorDeclarationContext *>(_localctx)->identifierContext->id),
    			  std::make_shared<td::Vector>(*dynamic_cast<VectorDeclarationContext *>(_localctx)->val->maybe_val));
    		}
    	
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MapDeclarationContext ------------------------------------------------------------------

TypedefParser::MapDeclarationContext::MapDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TypedefParser::MapDeclarationContext::KW_MAP() {
  return getToken(TypedefParser::KW_MAP, 0);
}

TypedefParser::IdentifierContext* TypedefParser::MapDeclarationContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::MapDeclarationContext::LT() {
  return getToken(TypedefParser::LT, 0);
}

tree::TerminalNode* TypedefParser::MapDeclarationContext::COMMA() {
  return getToken(TypedefParser::COMMA, 0);
}

tree::TerminalNode* TypedefParser::MapDeclarationContext::GT() {
  return getToken(TypedefParser::GT, 0);
}

TypedefParser::PrimitiveTypeContext* TypedefParser::MapDeclarationContext::primitiveType() {
  return getRuleContext<TypedefParser::PrimitiveTypeContext>(0);
}

TypedefParser::UnvaluedTypeContext* TypedefParser::MapDeclarationContext::unvaluedType() {
  return getRuleContext<TypedefParser::UnvaluedTypeContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::MapDeclarationContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::MapDeclarationContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}


size_t TypedefParser::MapDeclarationContext::getRuleIndex() const {
  return TypedefParser::RuleMapDeclaration;
}

void TypedefParser::MapDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMapDeclaration(this);
}

void TypedefParser::MapDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMapDeclaration(this);
}


antlrcpp::Any TypedefParser::MapDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitMapDeclaration(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::MapDeclarationContext* TypedefParser::mapDeclaration() {
  MapDeclarationContext *_localctx = _tracker.createInstance<MapDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 12, TypedefParser::RuleMapDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(337);
    match(TypedefParser::KW_MAP);
    setState(341);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(338);
      match(TypedefParser::WS);
      setState(343);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(344);
    dynamic_cast<MapDeclarationContext *>(_localctx)->identifierContext = identifier();
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
    match(TypedefParser::LT);
    setState(355);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(352);
      match(TypedefParser::WS);
      setState(357);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(358);
    dynamic_cast<MapDeclarationContext *>(_localctx)->key = primitiveType();
    setState(362);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(359);
      match(TypedefParser::WS);
      setState(364);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(365);
    match(TypedefParser::COMMA);
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
    dynamic_cast<MapDeclarationContext *>(_localctx)->val = unvaluedType();
    setState(376);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(373);
      match(TypedefParser::WS);
      setState(378);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(379);
    match(TypedefParser::GT);

    		// Map Declaration
    		if (dynamic_cast<MapDeclarationContext *>(_localctx)->key->maybe_val && dynamic_cast<MapDeclarationContext *>(_localctx)->val->maybe_val) {
    			dynamic_cast<MapDeclarationContext *>(_localctx)->maybe_symbol =  std::make_pair(
    				td::Identifier::ValueIdentifier(dynamic_cast<MapDeclarationContext *>(_localctx)->identifierContext->id),
    			  std::make_shared<td::Map>(
    					*dynamic_cast<MapDeclarationContext *>(_localctx)->key->maybe_val, *dynamic_cast<MapDeclarationContext *>(_localctx)->val->maybe_val));
    		}
    	
   
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

TypedefParser::UnvaluedSymbolContext* TypedefParser::MaybeValuedSymbolContext::unvaluedSymbol() {
  return getRuleContext<TypedefParser::UnvaluedSymbolContext>(0);
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
  enterRule(_localctx, 14, TypedefParser::RuleMaybeValuedSymbol);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(401);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(382);
      dynamic_cast<MaybeValuedSymbolContext *>(_localctx)->identifierContext = identifier();
      setState(386);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(383);
          match(TypedefParser::WS); 
        }
        setState(388);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
      }
      setState(389);
      dynamic_cast<MaybeValuedSymbolContext *>(_localctx)->maybeValuedTypeContext = maybeValuedType();
      setState(393);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(390);
          match(TypedefParser::WS); 
        }
        setState(395);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
      }

      		if (dynamic_cast<MaybeValuedSymbolContext *>(_localctx)->maybeValuedTypeContext->maybe_val) {
      			dynamic_cast<MaybeValuedSymbolContext *>(_localctx)->maybe_symbol =  std::make_pair(
      				td::Identifier::ValueIdentifier(dynamic_cast<MaybeValuedSymbolContext *>(_localctx)->identifierContext->id),
      				*dynamic_cast<MaybeValuedSymbolContext *>(_localctx)->maybeValuedTypeContext->maybe_val);
      		}
      	
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(398);
      dynamic_cast<MaybeValuedSymbolContext *>(_localctx)->unvaluedSymbolContext = unvaluedSymbol();
      dynamic_cast<MaybeValuedSymbolContext *>(_localctx)->maybe_symbol =  dynamic_cast<MaybeValuedSymbolContext *>(_localctx)->unvaluedSymbolContext->maybe_symbol; 
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

//----------------- UnvaluedSymbolContext ------------------------------------------------------------------

TypedefParser::UnvaluedSymbolContext::UnvaluedSymbolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::InlineStructContext* TypedefParser::UnvaluedSymbolContext::inlineStruct() {
  return getRuleContext<TypedefParser::InlineStructContext>(0);
}

TypedefParser::InlineVariantContext* TypedefParser::UnvaluedSymbolContext::inlineVariant() {
  return getRuleContext<TypedefParser::InlineVariantContext>(0);
}

TypedefParser::InlineVectorContext* TypedefParser::UnvaluedSymbolContext::inlineVector() {
  return getRuleContext<TypedefParser::InlineVectorContext>(0);
}

TypedefParser::InlineMapContext* TypedefParser::UnvaluedSymbolContext::inlineMap() {
  return getRuleContext<TypedefParser::InlineMapContext>(0);
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

tree::TerminalNode* TypedefParser::UnvaluedSymbolContext::QUESTION() {
  return getToken(TypedefParser::QUESTION, 0);
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
  enterRule(_localctx, 16, TypedefParser::RuleUnvaluedSymbol);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(441);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(403);
      dynamic_cast<UnvaluedSymbolContext *>(_localctx)->inlineStructContext = inlineStruct();
      dynamic_cast<UnvaluedSymbolContext *>(_localctx)->maybe_symbol =  dynamic_cast<UnvaluedSymbolContext *>(_localctx)->inlineStructContext->maybe_symbol; 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(406);
      dynamic_cast<UnvaluedSymbolContext *>(_localctx)->inlineVariantContext = inlineVariant();
      dynamic_cast<UnvaluedSymbolContext *>(_localctx)->maybe_symbol =  dynamic_cast<UnvaluedSymbolContext *>(_localctx)->inlineVariantContext->maybe_symbol; 
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(409);
      dynamic_cast<UnvaluedSymbolContext *>(_localctx)->inlineVectorContext = inlineVector();
      dynamic_cast<UnvaluedSymbolContext *>(_localctx)->maybe_symbol =  dynamic_cast<UnvaluedSymbolContext *>(_localctx)->inlineVectorContext->maybe_symbol; 
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(412);
      dynamic_cast<UnvaluedSymbolContext *>(_localctx)->inlineMapContext = inlineMap();
      dynamic_cast<UnvaluedSymbolContext *>(_localctx)->maybe_symbol =  dynamic_cast<UnvaluedSymbolContext *>(_localctx)->inlineMapContext->maybe_symbol; 
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(415);
      dynamic_cast<UnvaluedSymbolContext *>(_localctx)->identifierContext = identifier();
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
      match(TypedefParser::COLON);
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
      dynamic_cast<UnvaluedSymbolContext *>(_localctx)->unvaluedTypeContext = unvaluedType();
      setState(437);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
      case 1: {
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
        dynamic_cast<UnvaluedSymbolContext *>(_localctx)->optional = match(TypedefParser::QUESTION);
        break;
      }

      }

      		if (dynamic_cast<UnvaluedSymbolContext *>(_localctx)->unvaluedTypeContext->maybe_val) {
      			dynamic_cast<UnvaluedSymbolContext *>(_localctx)->maybe_symbol =  std::make_pair(
      				td::Identifier::ValueIdentifier(dynamic_cast<UnvaluedSymbolContext *>(_localctx)->identifierContext->id),
      				*dynamic_cast<UnvaluedSymbolContext *>(_localctx)->unvaluedTypeContext->maybe_val);
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

//----------------- InlineStructContext ------------------------------------------------------------------

TypedefParser::InlineStructContext::InlineStructContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::InlineStructContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::InlineStructContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

tree::TerminalNode* TypedefParser::InlineStructContext::KW_STRUCT() {
  return getToken(TypedefParser::KW_STRUCT, 0);
}

tree::TerminalNode* TypedefParser::InlineStructContext::LBRACE() {
  return getToken(TypedefParser::LBRACE, 0);
}

tree::TerminalNode* TypedefParser::InlineStructContext::RBRACE() {
  return getToken(TypedefParser::RBRACE, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::InlineStructContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::InlineStructContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}

std::vector<TypedefParser::MaybeValuedSymbolContext *> TypedefParser::InlineStructContext::maybeValuedSymbol() {
  return getRuleContexts<TypedefParser::MaybeValuedSymbolContext>();
}

TypedefParser::MaybeValuedSymbolContext* TypedefParser::InlineStructContext::maybeValuedSymbol(size_t i) {
  return getRuleContext<TypedefParser::MaybeValuedSymbolContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::InlineStructContext::SEMI() {
  return getTokens(TypedefParser::SEMI);
}

tree::TerminalNode* TypedefParser::InlineStructContext::SEMI(size_t i) {
  return getToken(TypedefParser::SEMI, i);
}

tree::TerminalNode* TypedefParser::InlineStructContext::QUESTION() {
  return getToken(TypedefParser::QUESTION, 0);
}


size_t TypedefParser::InlineStructContext::getRuleIndex() const {
  return TypedefParser::RuleInlineStruct;
}

void TypedefParser::InlineStructContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineStruct(this);
}

void TypedefParser::InlineStructContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineStruct(this);
}


antlrcpp::Any TypedefParser::InlineStructContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitInlineStruct(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::InlineStructContext* TypedefParser::inlineStruct() {
  InlineStructContext *_localctx = _tracker.createInstance<InlineStructContext>(_ctx, getState());
  enterRule(_localctx, 18, TypedefParser::RuleInlineStruct);

  		dynamic_cast<InlineStructContext *>(_localctx)->s =  std::make_shared<td::Struct>();
  	
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(443);
    dynamic_cast<InlineStructContext *>(_localctx)->identifierContext = identifier();
    setState(447);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(444);
      match(TypedefParser::WS);
      setState(449);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(450);
    match(TypedefParser::COLON);
    setState(454);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(451);
      match(TypedefParser::WS);
      setState(456);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(457);
    match(TypedefParser::KW_STRUCT);
    setState(461);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(458);
      match(TypedefParser::WS);
      setState(463);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(471);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::QUESTION) {
      setState(464);
      dynamic_cast<InlineStructContext *>(_localctx)->optional = match(TypedefParser::QUESTION);
      setState(468);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(465);
        match(TypedefParser::WS);
        setState(470);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(473);
    match(TypedefParser::LBRACE);
    setState(477);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(474);
        match(TypedefParser::WS); 
      }
      setState(479);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    }
    setState(497);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::NON_KEYWORD_IDENTIFIER

    || _la == TypedefParser::RAW_ESCAPE) {
      setState(480);
      dynamic_cast<InlineStructContext *>(_localctx)->maybeValuedSymbolContext = maybeValuedSymbol();

      				TryInsertSymbol(_localctx->s, this, dynamic_cast<InlineStructContext *>(_localctx)->maybeValuedSymbolContext);
      			
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
      match(TypedefParser::SEMI);
      setState(492);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(489);
          match(TypedefParser::WS); 
        }
        setState(494);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
      }
      setState(499);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(503);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(500);
      match(TypedefParser::WS);
      setState(505);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(506);
    match(TypedefParser::RBRACE);

    		dynamic_cast<InlineStructContext *>(_localctx)->maybe_symbol =  std::make_pair(
    			td::Identifier::ValueIdentifier(dynamic_cast<InlineStructContext *>(_localctx)->identifierContext->id), _localctx->s);
    	
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InlineVariantContext ------------------------------------------------------------------

TypedefParser::InlineVariantContext::InlineVariantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::InlineVariantContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::InlineVariantContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

tree::TerminalNode* TypedefParser::InlineVariantContext::KW_VARIANT() {
  return getToken(TypedefParser::KW_VARIANT, 0);
}

tree::TerminalNode* TypedefParser::InlineVariantContext::LBRACE() {
  return getToken(TypedefParser::LBRACE, 0);
}

tree::TerminalNode* TypedefParser::InlineVariantContext::RBRACE() {
  return getToken(TypedefParser::RBRACE, 0);
}

std::vector<tree::TerminalNode *> TypedefParser::InlineVariantContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::InlineVariantContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}

std::vector<TypedefParser::UnvaluedSymbolContext *> TypedefParser::InlineVariantContext::unvaluedSymbol() {
  return getRuleContexts<TypedefParser::UnvaluedSymbolContext>();
}

TypedefParser::UnvaluedSymbolContext* TypedefParser::InlineVariantContext::unvaluedSymbol(size_t i) {
  return getRuleContext<TypedefParser::UnvaluedSymbolContext>(i);
}

std::vector<tree::TerminalNode *> TypedefParser::InlineVariantContext::SEMI() {
  return getTokens(TypedefParser::SEMI);
}

tree::TerminalNode* TypedefParser::InlineVariantContext::SEMI(size_t i) {
  return getToken(TypedefParser::SEMI, i);
}

tree::TerminalNode* TypedefParser::InlineVariantContext::QUESTION() {
  return getToken(TypedefParser::QUESTION, 0);
}


size_t TypedefParser::InlineVariantContext::getRuleIndex() const {
  return TypedefParser::RuleInlineVariant;
}

void TypedefParser::InlineVariantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineVariant(this);
}

void TypedefParser::InlineVariantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineVariant(this);
}


antlrcpp::Any TypedefParser::InlineVariantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitInlineVariant(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::InlineVariantContext* TypedefParser::inlineVariant() {
  InlineVariantContext *_localctx = _tracker.createInstance<InlineVariantContext>(_ctx, getState());
  enterRule(_localctx, 20, TypedefParser::RuleInlineVariant);

  		dynamic_cast<InlineVariantContext *>(_localctx)->v =  std::make_shared<td::Variant>();
  	
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(509);
    dynamic_cast<InlineVariantContext *>(_localctx)->identifierContext = identifier();
    setState(513);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(510);
      match(TypedefParser::WS);
      setState(515);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(516);
    match(TypedefParser::COLON);
    setState(520);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(517);
      match(TypedefParser::WS);
      setState(522);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(523);
    match(TypedefParser::KW_VARIANT);
    setState(527);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(524);
        match(TypedefParser::WS); 
      }
      setState(529);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
    }
    setState(537);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::WS

    || _la == TypedefParser::QUESTION) {
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
      dynamic_cast<InlineVariantContext *>(_localctx)->optional = match(TypedefParser::QUESTION);
    }
    setState(539);
    match(TypedefParser::LBRACE);
    setState(563);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 84) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 84)) & ((1ULL << (TypedefParser::NON_KEYWORD_IDENTIFIER - 84))
      | (1ULL << (TypedefParser::WS - 84))
      | (1ULL << (TypedefParser::RAW_ESCAPE - 84)))) != 0)) {
      setState(543);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(540);
        match(TypedefParser::WS);
        setState(545);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(546);
      dynamic_cast<InlineVariantContext *>(_localctx)->unvaluedSymbolContext = unvaluedSymbol();

      				TryInsertSymbol(_localctx->v, this, dynamic_cast<InlineVariantContext *>(_localctx)->unvaluedSymbolContext);
      			
      setState(551);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(548);
        match(TypedefParser::WS);
        setState(553);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(554);
      match(TypedefParser::SEMI);
      setState(558);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(555);
          match(TypedefParser::WS); 
        }
        setState(560);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
      }
      setState(565);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(566);
    match(TypedefParser::RBRACE);

    		dynamic_cast<InlineVariantContext *>(_localctx)->maybe_symbol =  std::make_pair(
    			td::Identifier::ValueIdentifier(dynamic_cast<InlineVariantContext *>(_localctx)->identifierContext->id), _localctx->v);
    	
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InlineVectorContext ------------------------------------------------------------------

TypedefParser::InlineVectorContext::InlineVectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::InlineVectorContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::InlineVectorContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

tree::TerminalNode* TypedefParser::InlineVectorContext::KW_VECTOR() {
  return getToken(TypedefParser::KW_VECTOR, 0);
}

tree::TerminalNode* TypedefParser::InlineVectorContext::LT() {
  return getToken(TypedefParser::LT, 0);
}

tree::TerminalNode* TypedefParser::InlineVectorContext::GT() {
  return getToken(TypedefParser::GT, 0);
}

TypedefParser::UnvaluedTypeContext* TypedefParser::InlineVectorContext::unvaluedType() {
  return getRuleContext<TypedefParser::UnvaluedTypeContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::InlineVectorContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::InlineVectorContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}

tree::TerminalNode* TypedefParser::InlineVectorContext::QUESTION() {
  return getToken(TypedefParser::QUESTION, 0);
}


size_t TypedefParser::InlineVectorContext::getRuleIndex() const {
  return TypedefParser::RuleInlineVector;
}

void TypedefParser::InlineVectorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineVector(this);
}

void TypedefParser::InlineVectorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineVector(this);
}


antlrcpp::Any TypedefParser::InlineVectorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitInlineVector(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::InlineVectorContext* TypedefParser::inlineVector() {
  InlineVectorContext *_localctx = _tracker.createInstance<InlineVectorContext>(_ctx, getState());
  enterRule(_localctx, 22, TypedefParser::RuleInlineVector);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(569);
    dynamic_cast<InlineVectorContext *>(_localctx)->identifierContext = identifier();
    setState(573);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(570);
      match(TypedefParser::WS);
      setState(575);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(576);
    match(TypedefParser::COLON);
    setState(580);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(577);
      match(TypedefParser::WS);
      setState(582);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(583);
    match(TypedefParser::KW_VECTOR);
    setState(587);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(584);
      match(TypedefParser::WS);
      setState(589);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(590);
    match(TypedefParser::LT);
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
    dynamic_cast<InlineVectorContext *>(_localctx)->val = dynamic_cast<InlineVectorContext *>(_localctx)->unvaluedTypeContext = unvaluedType();
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
    match(TypedefParser::GT);
    setState(612);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
    case 1: {
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
      dynamic_cast<InlineVectorContext *>(_localctx)->optional = match(TypedefParser::QUESTION);
      break;
    }

    }

    		if (dynamic_cast<InlineVectorContext *>(_localctx)->unvaluedTypeContext->maybe_val) {
    			dynamic_cast<InlineVectorContext *>(_localctx)->maybe_symbol =  std::make_pair(
    				td::Identifier::ValueIdentifier(dynamic_cast<InlineVectorContext *>(_localctx)->identifierContext->id),
    			  std::make_shared<td::Vector>(*dynamic_cast<InlineVectorContext *>(_localctx)->val->maybe_val));
    		}
    	
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InlineMapContext ------------------------------------------------------------------

TypedefParser::InlineMapContext::InlineMapContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::InlineMapContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}

tree::TerminalNode* TypedefParser::InlineMapContext::COLON() {
  return getToken(TypedefParser::COLON, 0);
}

tree::TerminalNode* TypedefParser::InlineMapContext::KW_MAP() {
  return getToken(TypedefParser::KW_MAP, 0);
}

tree::TerminalNode* TypedefParser::InlineMapContext::LT() {
  return getToken(TypedefParser::LT, 0);
}

tree::TerminalNode* TypedefParser::InlineMapContext::COMMA() {
  return getToken(TypedefParser::COMMA, 0);
}

tree::TerminalNode* TypedefParser::InlineMapContext::GT() {
  return getToken(TypedefParser::GT, 0);
}

TypedefParser::PrimitiveTypeContext* TypedefParser::InlineMapContext::primitiveType() {
  return getRuleContext<TypedefParser::PrimitiveTypeContext>(0);
}

TypedefParser::UnvaluedTypeContext* TypedefParser::InlineMapContext::unvaluedType() {
  return getRuleContext<TypedefParser::UnvaluedTypeContext>(0);
}

std::vector<tree::TerminalNode *> TypedefParser::InlineMapContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::InlineMapContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
}

tree::TerminalNode* TypedefParser::InlineMapContext::QUESTION() {
  return getToken(TypedefParser::QUESTION, 0);
}


size_t TypedefParser::InlineMapContext::getRuleIndex() const {
  return TypedefParser::RuleInlineMap;
}

void TypedefParser::InlineMapContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineMap(this);
}

void TypedefParser::InlineMapContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineMap(this);
}


antlrcpp::Any TypedefParser::InlineMapContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitInlineMap(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::InlineMapContext* TypedefParser::inlineMap() {
  InlineMapContext *_localctx = _tracker.createInstance<InlineMapContext>(_ctx, getState());
  enterRule(_localctx, 24, TypedefParser::RuleInlineMap);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(616);
    dynamic_cast<InlineMapContext *>(_localctx)->identifierContext = identifier();
    setState(620);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(617);
      match(TypedefParser::WS);
      setState(622);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(623);
    match(TypedefParser::COLON);
    setState(627);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(624);
      match(TypedefParser::WS);
      setState(629);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(630);
    match(TypedefParser::KW_MAP);
    setState(634);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(631);
      match(TypedefParser::WS);
      setState(636);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(637);
    match(TypedefParser::LT);
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
    dynamic_cast<InlineMapContext *>(_localctx)->key = primitiveType();
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
    match(TypedefParser::COMMA);
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
    dynamic_cast<InlineMapContext *>(_localctx)->val = unvaluedType();
    setState(662);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(659);
      match(TypedefParser::WS);
      setState(664);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(665);
    match(TypedefParser::GT);
    setState(673);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
    case 1: {
      setState(669);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(666);
        match(TypedefParser::WS);
        setState(671);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(672);
      dynamic_cast<InlineMapContext *>(_localctx)->optional = match(TypedefParser::QUESTION);
      break;
    }

    }

    		// Map Declaration
    		if (dynamic_cast<InlineMapContext *>(_localctx)->key->maybe_val && dynamic_cast<InlineMapContext *>(_localctx)->val->maybe_val) {
    			dynamic_cast<InlineMapContext *>(_localctx)->maybe_symbol =  std::make_pair(
    				td::Identifier::ValueIdentifier(dynamic_cast<InlineMapContext *>(_localctx)->identifierContext->id),
    			  std::make_shared<td::Map>(
    					*dynamic_cast<InlineMapContext *>(_localctx)->key->maybe_val, *dynamic_cast<InlineMapContext *>(_localctx)->val->maybe_val));
    		}
    	
   
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
  enterRule(_localctx, 26, TypedefParser::RuleMaybeValuedType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(691);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(677);
      dynamic_cast<MaybeValuedTypeContext *>(_localctx)->valuedTypeContext = valuedType();
      dynamic_cast<MaybeValuedTypeContext *>(_localctx)->maybe_val =  dynamic_cast<MaybeValuedTypeContext *>(_localctx)->valuedTypeContext->maybe_val;
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(680);
      match(TypedefParser::COLON);
      setState(684);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(681);
        match(TypedefParser::WS);
        setState(686);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(687);
      dynamic_cast<MaybeValuedTypeContext *>(_localctx)->unvaluedTypeContext = unvaluedType();
      dynamic_cast<MaybeValuedTypeContext *>(_localctx)->maybe_val =  dynamic_cast<MaybeValuedTypeContext *>(_localctx)->unvaluedTypeContext->maybe_val;
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
  enterRule(_localctx, 28, TypedefParser::RuleValuedType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(693);
    dynamic_cast<ValuedTypeContext *>(_localctx)->valuedPrimitiveTypeContext = valuedPrimitiveType();
    dynamic_cast<ValuedTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedTypeContext *>(_localctx)->valuedPrimitiveTypeContext->maybe_val;
   
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

TypedefParser::SymbolReferenceContext* TypedefParser::UnvaluedTypeContext::symbolReference() {
  return getRuleContext<TypedefParser::SymbolReferenceContext>(0);
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
  enterRule(_localctx, 30, TypedefParser::RuleUnvaluedType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(702);
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
        setState(696);
        dynamic_cast<UnvaluedTypeContext *>(_localctx)->primitiveTypeContext = primitiveType();
        dynamic_cast<UnvaluedTypeContext *>(_localctx)->maybe_val =  dynamic_cast<UnvaluedTypeContext *>(_localctx)->primitiveTypeContext->maybe_val;
        break;
      }

      case TypedefParser::NON_KEYWORD_IDENTIFIER:
      case TypedefParser::RAW_ESCAPE: {
        setState(699);
        dynamic_cast<UnvaluedTypeContext *>(_localctx)->symbolReferenceContext = symbolReference();
        dynamic_cast<UnvaluedTypeContext *>(_localctx)->maybe_val =  dynamic_cast<UnvaluedTypeContext *>(_localctx)->symbolReferenceContext->maybe_symref; 
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

//----------------- SymbolReferenceContext ------------------------------------------------------------------

TypedefParser::SymbolReferenceContext::SymbolReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TypedefParser::IdentifierContext* TypedefParser::SymbolReferenceContext::identifier() {
  return getRuleContext<TypedefParser::IdentifierContext>(0);
}


size_t TypedefParser::SymbolReferenceContext::getRuleIndex() const {
  return TypedefParser::RuleSymbolReference;
}

void TypedefParser::SymbolReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSymbolReference(this);
}

void TypedefParser::SymbolReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TypedefParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSymbolReference(this);
}


antlrcpp::Any TypedefParser::SymbolReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TypedefParserVisitor*>(visitor))
    return parserVisitor->visitSymbolReference(this);
  else
    return visitor->visitChildren(this);
}

TypedefParser::SymbolReferenceContext* TypedefParser::symbolReference() {
  SymbolReferenceContext *_localctx = _tracker.createInstance<SymbolReferenceContext>(_ctx, getState());
  enterRule(_localctx, 32, TypedefParser::RuleSymbolReference);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(704);
    dynamic_cast<SymbolReferenceContext *>(_localctx)->identifierContext = identifier();
    dynamic_cast<SymbolReferenceContext *>(_localctx)->maybe_symref =  td::SymbolRef(dynamic_cast<SymbolReferenceContext *>(_localctx)->identifierContext->id); 
   
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
  enterRule(_localctx, 34, TypedefParser::RulePrimitiveType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(733);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::KW_BOOL: {
        enterOuterAlt(_localctx, 1);
        setState(707);
        match(TypedefParser::KW_BOOL);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<bool>(); 
        break;
      }

      case TypedefParser::KW_CHAR: {
        enterOuterAlt(_localctx, 2);
        setState(709);
        match(TypedefParser::KW_CHAR);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<char32_t>(); 
        break;
      }

      case TypedefParser::KW_STRING: {
        enterOuterAlt(_localctx, 3);
        setState(711);
        match(TypedefParser::KW_STRING);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<std::string>(); 
        break;
      }

      case TypedefParser::KW_F32: {
        enterOuterAlt(_localctx, 4);
        setState(713);
        match(TypedefParser::KW_F32);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<float>(); 
        break;
      }

      case TypedefParser::KW_F64: {
        enterOuterAlt(_localctx, 5);
        setState(715);
        match(TypedefParser::KW_F64);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<double>(); 
        break;
      }

      case TypedefParser::KW_U8: {
        enterOuterAlt(_localctx, 6);
        setState(717);
        match(TypedefParser::KW_U8);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<uint8_t>(); 
        break;
      }

      case TypedefParser::KW_U16: {
        enterOuterAlt(_localctx, 7);
        setState(719);
        match(TypedefParser::KW_U16);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<uint16_t>(); 
        break;
      }

      case TypedefParser::KW_U32: {
        enterOuterAlt(_localctx, 8);
        setState(721);
        match(TypedefParser::KW_U32);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<uint32_t>(); 
        break;
      }

      case TypedefParser::KW_U64: {
        enterOuterAlt(_localctx, 9);
        setState(723);
        match(TypedefParser::KW_U64);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<uint64_t>(); 
        break;
      }

      case TypedefParser::KW_I8: {
        enterOuterAlt(_localctx, 10);
        setState(725);
        match(TypedefParser::KW_I8);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<int8_t>(); 
        break;
      }

      case TypedefParser::KW_I16: {
        enterOuterAlt(_localctx, 11);
        setState(727);
        match(TypedefParser::KW_I16);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<int16_t>(); 
        break;
      }

      case TypedefParser::KW_I32: {
        enterOuterAlt(_localctx, 12);
        setState(729);
        match(TypedefParser::KW_I32);
         dynamic_cast<PrimitiveTypeContext *>(_localctx)->maybe_val =  std::optional<int32_t>(); 
        break;
      }

      case TypedefParser::KW_I64: {
        enterOuterAlt(_localctx, 13);
        setState(731);
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
  enterRule(_localctx, 36, TypedefParser::RuleValuedPrimitiveType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(774);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx)) {
    case 1: {
      setState(735);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedBoolFragmentContext = valuedBoolFragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedBoolFragmentContext->literal->maybe_val;
      break;
    }

    case 2: {
      setState(738);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedCharFragmentContext = valuedCharFragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedCharFragmentContext->literal->maybe_val;
      break;
    }

    case 3: {
      setState(741);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedStringFragmentContext = valuedStringFragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedStringFragmentContext->literal->maybe_val;
      break;
    }

    case 4: {
      setState(744);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedF32FragmentContext = valuedF32Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedF32FragmentContext->literal->maybe_val;
      break;
    }

    case 5: {
      setState(747);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedF64FragmentContext = valuedF64Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedF64FragmentContext->literal->maybe_val;
      break;
    }

    case 6: {
      setState(750);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU8FragmentContext = valuedU8Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU8FragmentContext->literal->maybe_val;
      break;
    }

    case 7: {
      setState(753);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU16FragmentContext = valuedU16Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU16FragmentContext->literal->maybe_val;
      break;
    }

    case 8: {
      setState(756);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU32FragmentContext = valuedU32Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU32FragmentContext->literal->maybe_val;
      break;
    }

    case 9: {
      setState(759);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU64FragmentContext = valuedU64Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedU64FragmentContext->literal->maybe_val;
      break;
    }

    case 10: {
      setState(762);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedI8FragmentContext = valuedI8Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedI8FragmentContext->literal->maybe_val;
      break;
    }

    case 11: {
      setState(765);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedI16FragmentContext = valuedI16Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedI16FragmentContext->literal->maybe_val;
      break;
    }

    case 12: {
      setState(768);
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedI32FragmentContext = valuedI32Fragment();
      dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->maybe_val =  dynamic_cast<ValuedPrimitiveTypeContext *>(_localctx)->valuedI32FragmentContext->literal->maybe_val;
      break;
    }

    case 13: {
      setState(771);
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
  enterRule(_localctx, 38, TypedefParser::RuleValuedBoolFragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(784);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::COLON) {
      setState(776);
      match(TypedefParser::COLON);
      setState(780);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(777);
        match(TypedefParser::WS);
        setState(782);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(783);
      match(TypedefParser::KW_BOOL);
    }
    setState(789);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(786);
      match(TypedefParser::WS);
      setState(791);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(792);
    match(TypedefParser::EQ);
    setState(796);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(793);
      match(TypedefParser::WS);
      setState(798);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(799);
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
  enterRule(_localctx, 40, TypedefParser::RuleValuedCharFragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(809);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::COLON) {
      setState(801);
      match(TypedefParser::COLON);
      setState(805);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TypedefParser::WS) {
        setState(802);
        match(TypedefParser::WS);
        setState(807);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(808);
      match(TypedefParser::KW_CHAR);
    }
    setState(814);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(811);
      match(TypedefParser::WS);
      setState(816);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(817);
    match(TypedefParser::EQ);
    setState(821);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(818);
      match(TypedefParser::WS);
      setState(823);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(824);
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
  enterRule(_localctx, 42, TypedefParser::RuleValuedStringFragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(834);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::COLON) {
      setState(826);
      match(TypedefParser::COLON);
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
      match(TypedefParser::KW_STRING);
    }
    setState(839);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(836);
      match(TypedefParser::WS);
      setState(841);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(842);
    match(TypedefParser::EQ);
    setState(846);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(843);
      match(TypedefParser::WS);
      setState(848);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(849);
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
  enterRule(_localctx, 44, TypedefParser::RuleValuedF32Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(887);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(851);
        match(TypedefParser::COLON);
        setState(855);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(852);
          match(TypedefParser::WS);
          setState(857);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(858);
        match(TypedefParser::KW_F32);
        setState(862);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(859);
          match(TypedefParser::WS);
          setState(864);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(865);
        match(TypedefParser::EQ);
        setState(869);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(866);
          match(TypedefParser::WS);
          setState(871);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(872);
        dynamic_cast<ValuedF32FragmentContext *>(_localctx)->literal = f32Literal();
        setState(874);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_F32) {
          setState(873);
          match(TypedefParser::KW_F32);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(876);
        match(TypedefParser::EQ);
        setState(880);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(877);
          match(TypedefParser::WS);
          setState(882);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(883);
        dynamic_cast<ValuedF32FragmentContext *>(_localctx)->literal = f32Literal();
        setState(885);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_F32) {
          setState(884);
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
  enterRule(_localctx, 46, TypedefParser::RuleValuedF64Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(924);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(889);
        match(TypedefParser::COLON);
        setState(893);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(890);
          match(TypedefParser::WS);
          setState(895);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(896);
        match(TypedefParser::KW_F64);
        setState(900);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(897);
          match(TypedefParser::WS);
          setState(902);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(903);
        match(TypedefParser::EQ);
        setState(907);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(904);
          match(TypedefParser::WS);
          setState(909);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(910);
        dynamic_cast<ValuedF64FragmentContext *>(_localctx)->literal = f64Literal();
        setState(912);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_F64) {
          setState(911);
          match(TypedefParser::KW_F64);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(914);
        match(TypedefParser::EQ);
        setState(918);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(915);
          match(TypedefParser::WS);
          setState(920);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(921);
        dynamic_cast<ValuedF64FragmentContext *>(_localctx)->literal = f64Literal();
        setState(922);
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
  enterRule(_localctx, 48, TypedefParser::RuleValuedU8Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(961);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(926);
        match(TypedefParser::COLON);
        setState(930);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(927);
          match(TypedefParser::WS);
          setState(932);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(933);
        match(TypedefParser::KW_U8);
        setState(937);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(934);
          match(TypedefParser::WS);
          setState(939);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(940);
        match(TypedefParser::EQ);
        setState(944);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(941);
          match(TypedefParser::WS);
          setState(946);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(947);
        dynamic_cast<ValuedU8FragmentContext *>(_localctx)->literal = u8Literal();
        setState(949);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_U8) {
          setState(948);
          match(TypedefParser::KW_U8);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(951);
        match(TypedefParser::EQ);
        setState(955);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(952);
          match(TypedefParser::WS);
          setState(957);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(958);
        dynamic_cast<ValuedU8FragmentContext *>(_localctx)->literal = u8Literal();
        setState(959);
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
  enterRule(_localctx, 50, TypedefParser::RuleValuedU16Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(998);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(963);
        match(TypedefParser::COLON);
        setState(967);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(964);
          match(TypedefParser::WS);
          setState(969);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(970);
        match(TypedefParser::KW_U16);
        setState(974);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(971);
          match(TypedefParser::WS);
          setState(976);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(977);
        match(TypedefParser::EQ);
        setState(981);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(978);
          match(TypedefParser::WS);
          setState(983);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(984);
        dynamic_cast<ValuedU16FragmentContext *>(_localctx)->literal = u16Literal();
        setState(986);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_U16) {
          setState(985);
          match(TypedefParser::KW_U16);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(988);
        match(TypedefParser::EQ);
        setState(992);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(989);
          match(TypedefParser::WS);
          setState(994);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(995);
        dynamic_cast<ValuedU16FragmentContext *>(_localctx)->literal = u16Literal();
        setState(996);
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
  enterRule(_localctx, 52, TypedefParser::RuleValuedU32Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1035);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(1000);
        match(TypedefParser::COLON);
        setState(1004);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1001);
          match(TypedefParser::WS);
          setState(1006);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1007);
        match(TypedefParser::KW_U32);
        setState(1011);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1008);
          match(TypedefParser::WS);
          setState(1013);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1014);
        match(TypedefParser::EQ);
        setState(1018);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1015);
          match(TypedefParser::WS);
          setState(1020);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1021);
        dynamic_cast<ValuedU32FragmentContext *>(_localctx)->literal = u32Literal();
        setState(1023);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_U32) {
          setState(1022);
          match(TypedefParser::KW_U32);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(1025);
        match(TypedefParser::EQ);
        setState(1029);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1026);
          match(TypedefParser::WS);
          setState(1031);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1032);
        dynamic_cast<ValuedU32FragmentContext *>(_localctx)->literal = u32Literal();
        setState(1033);
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
  enterRule(_localctx, 54, TypedefParser::RuleValuedU64Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1072);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(1037);
        match(TypedefParser::COLON);
        setState(1041);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1038);
          match(TypedefParser::WS);
          setState(1043);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1044);
        match(TypedefParser::KW_U64);
        setState(1048);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1045);
          match(TypedefParser::WS);
          setState(1050);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1051);
        match(TypedefParser::EQ);
        setState(1055);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1052);
          match(TypedefParser::WS);
          setState(1057);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1058);
        dynamic_cast<ValuedU64FragmentContext *>(_localctx)->literal = u64Literal();
        setState(1060);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_U64) {
          setState(1059);
          match(TypedefParser::KW_U64);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(1062);
        match(TypedefParser::EQ);
        setState(1066);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1063);
          match(TypedefParser::WS);
          setState(1068);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1069);
        dynamic_cast<ValuedU64FragmentContext *>(_localctx)->literal = u64Literal();
        setState(1070);
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
  enterRule(_localctx, 56, TypedefParser::RuleValuedI8Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1109);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(1074);
        match(TypedefParser::COLON);
        setState(1078);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1075);
          match(TypedefParser::WS);
          setState(1080);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1081);
        match(TypedefParser::KW_I8);
        setState(1085);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1082);
          match(TypedefParser::WS);
          setState(1087);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1088);
        match(TypedefParser::EQ);
        setState(1092);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1089);
          match(TypedefParser::WS);
          setState(1094);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1095);
        dynamic_cast<ValuedI8FragmentContext *>(_localctx)->literal = i8Literal();
        setState(1097);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I8) {
          setState(1096);
          match(TypedefParser::KW_I8);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(1099);
        match(TypedefParser::EQ);
        setState(1103);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1100);
          match(TypedefParser::WS);
          setState(1105);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1106);
        dynamic_cast<ValuedI8FragmentContext *>(_localctx)->literal = i8Literal();
        setState(1107);
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
  enterRule(_localctx, 58, TypedefParser::RuleValuedI16Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1146);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(1111);
        match(TypedefParser::COLON);
        setState(1115);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1112);
          match(TypedefParser::WS);
          setState(1117);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1118);
        match(TypedefParser::KW_I16);
        setState(1122);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1119);
          match(TypedefParser::WS);
          setState(1124);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1125);
        match(TypedefParser::EQ);
        setState(1129);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1126);
          match(TypedefParser::WS);
          setState(1131);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1132);
        dynamic_cast<ValuedI16FragmentContext *>(_localctx)->literal = i16Literal();
        setState(1134);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I16) {
          setState(1133);
          match(TypedefParser::KW_I16);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(1136);
        match(TypedefParser::EQ);
        setState(1140);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1137);
          match(TypedefParser::WS);
          setState(1142);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1143);
        dynamic_cast<ValuedI16FragmentContext *>(_localctx)->literal = i16Literal();
        setState(1144);
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
  enterRule(_localctx, 60, TypedefParser::RuleValuedI32Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1184);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(1148);
        match(TypedefParser::COLON);
        setState(1152);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1149);
          match(TypedefParser::WS);
          setState(1154);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1155);
        match(TypedefParser::KW_I32);
        setState(1159);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1156);
          match(TypedefParser::WS);
          setState(1161);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1162);
        match(TypedefParser::EQ);
        setState(1166);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1163);
          match(TypedefParser::WS);
          setState(1168);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1169);
        dynamic_cast<ValuedI32FragmentContext *>(_localctx)->literal = i32Literal();
        setState(1171);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I32) {
          setState(1170);
          match(TypedefParser::KW_I32);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(1173);
        match(TypedefParser::EQ);
        setState(1177);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1174);
          match(TypedefParser::WS);
          setState(1179);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1180);
        dynamic_cast<ValuedI32FragmentContext *>(_localctx)->literal = i32Literal();
        setState(1182);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I32) {
          setState(1181);
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
  enterRule(_localctx, 62, TypedefParser::RuleValuedI64Fragment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1221);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::COLON: {
        enterOuterAlt(_localctx, 1);
        setState(1186);
        match(TypedefParser::COLON);
        setState(1190);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1187);
          match(TypedefParser::WS);
          setState(1192);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1193);
        match(TypedefParser::KW_I64);
        setState(1197);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1194);
          match(TypedefParser::WS);
          setState(1199);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1200);
        match(TypedefParser::EQ);
        setState(1204);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1201);
          match(TypedefParser::WS);
          setState(1206);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1207);
        dynamic_cast<ValuedI64FragmentContext *>(_localctx)->literal = i64Literal();
        setState(1209);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::KW_I64) {
          setState(1208);
          match(TypedefParser::KW_I64);
        }
        break;
      }

      case TypedefParser::EQ: {
        enterOuterAlt(_localctx, 2);
        setState(1211);
        match(TypedefParser::EQ);
        setState(1215);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TypedefParser::WS) {
          setState(1212);
          match(TypedefParser::WS);
          setState(1217);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(1218);
        dynamic_cast<ValuedI64FragmentContext *>(_localctx)->literal = i64Literal();
        setState(1219);
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
  enterRule(_localctx, 64, TypedefParser::RuleTypedefVersionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1223);
    match(TypedefParser::KW_TYPEDEF);
    setState(1227);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(1224);
      match(TypedefParser::WS);
      setState(1229);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1230);
    match(TypedefParser::EQ);
    setState(1234);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(1231);
      match(TypedefParser::WS);
      setState(1236);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1237);
    dynamic_cast<TypedefVersionDeclarationContext *>(_localctx)->identifierContext = identifier();
    setState(1241);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(1238);
      match(TypedefParser::WS);
      setState(1243);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1244);
    match(TypedefParser::SEMI);
     dynamic_cast<TypedefVersionDeclarationContext *>(_localctx)->version =  dynamic_cast<TypedefVersionDeclarationContext *>(_localctx)->identifierContext->id; 
   
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

std::vector<tree::TerminalNode *> TypedefParser::ModuleDeclarationContext::WS() {
  return getTokens(TypedefParser::WS);
}

tree::TerminalNode* TypedefParser::ModuleDeclarationContext::WS(size_t i) {
  return getToken(TypedefParser::WS, i);
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
  enterRule(_localctx, 66, TypedefParser::RuleModuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1247);
    match(TypedefParser::KW_MODULE);
    setState(1249); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1248);
      match(TypedefParser::WS);
      setState(1251); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == TypedefParser::WS);
    setState(1253);
    dynamic_cast<ModuleDeclarationContext *>(_localctx)->simplePathContext = simplePath();
    setState(1257);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TypedefParser::WS) {
      setState(1254);
      match(TypedefParser::WS);
      setState(1259);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1260);
    match(TypedefParser::SEMI);
     dynamic_cast<ModuleDeclarationContext *>(_localctx)->module =  dynamic_cast<ModuleDeclarationContext *>(_localctx)->simplePathContext->path; 
   
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
  enterRule(_localctx, 68, TypedefParser::RuleUseDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1263);
    match(TypedefParser::KW_USE);
    setState(1264);
    useTree();
    setState(1265);
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
  enterRule(_localctx, 70, TypedefParser::RuleUseTree);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(1296);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 169, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1271);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypedefParser::NON_KEYWORD_IDENTIFIER

      || _la == TypedefParser::RAW_ESCAPE || _la == TypedefParser::PATHSEP) {
        setState(1268);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 162, _ctx)) {
        case 1: {
          setState(1267);
          simplePath();
          break;
        }

        }
        setState(1270);
        match(TypedefParser::PATHSEP);
      }
      setState(1289);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TypedefParser::STAR: {
          setState(1273);
          match(TypedefParser::STAR);
          break;
        }

        case TypedefParser::LBRACE: {
          setState(1274);
          match(TypedefParser::LBRACE);
          setState(1286);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (((((_la - 84) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 84)) & ((1ULL << (TypedefParser::NON_KEYWORD_IDENTIFIER - 84))
            | (1ULL << (TypedefParser::RAW_ESCAPE - 84))
            | (1ULL << (TypedefParser::STAR - 84)))) != 0) || _la == TypedefParser::PATHSEP

          || _la == TypedefParser::LBRACE) {
            setState(1275);
            useTree();
            setState(1280);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 164, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
              if (alt == 1) {
                setState(1276);
                match(TypedefParser::COMMA);
                setState(1277);
                useTree(); 
              }
              setState(1282);
              _errHandler->sync(this);
              alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 164, _ctx);
            }
            setState(1284);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == TypedefParser::COMMA) {
              setState(1283);
              match(TypedefParser::COMMA);
            }
          }
          setState(1288);
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
      setState(1291);
      simplePath();
      setState(1294);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TypedefParser::KW_AS) {
        setState(1292);
        match(TypedefParser::KW_AS);
        setState(1293);
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
  enterRule(_localctx, 72, TypedefParser::RuleSimplePath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1299);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TypedefParser::PATHSEP) {
      setState(1298);
      match(TypedefParser::PATHSEP);
    }
    setState(1301);
    dynamic_cast<SimplePathContext *>(_localctx)->identifierContext = identifier();
    _localctx->path.push_back(dynamic_cast<SimplePathContext *>(_localctx)->identifierContext->id);
    setState(1309);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 171, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(1303);
        match(TypedefParser::PATHSEP);
        setState(1304);
        dynamic_cast<SimplePathContext *>(_localctx)->identifierContext = identifier();
        _localctx->path.push_back(dynamic_cast<SimplePathContext *>(_localctx)->identifierContext->id); 
      }
      setState(1311);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 171, _ctx);
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
  enterRule(_localctx, 74, TypedefParser::RuleBoolLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1312);
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
  enterRule(_localctx, 76, TypedefParser::RuleCharLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1314);
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
  enterRule(_localctx, 78, TypedefParser::RuleF32Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1317);
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
  enterRule(_localctx, 80, TypedefParser::RuleF64Literal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1320);
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
  enterRule(_localctx, 82, TypedefParser::RuleU8Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1333);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1324);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1323);
          match(TypedefParser::MINUS);
        }
        setState(1326);
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
        setState(1327);
        match(TypedefParser::HEX_PREFIX);
        setState(1328);
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
        setState(1329);
        match(TypedefParser::OCT_PREFIX);
        setState(1330);
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
        setState(1331);
        match(TypedefParser::BIN_PREFIX);
        setState(1332);
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
  enterRule(_localctx, 84, TypedefParser::RuleU16Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1347);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1338);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1337);
          match(TypedefParser::MINUS);
        }
        setState(1340);
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
        setState(1341);
        match(TypedefParser::HEX_PREFIX);
        setState(1342);
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
        setState(1343);
        match(TypedefParser::OCT_PREFIX);
        setState(1344);
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
        setState(1345);
        match(TypedefParser::BIN_PREFIX);
        setState(1346);
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
  enterRule(_localctx, 86, TypedefParser::RuleU32Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1361);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1352);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1351);
          match(TypedefParser::MINUS);
        }
        setState(1354);
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
        setState(1355);
        match(TypedefParser::HEX_PREFIX);
        setState(1356);
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
        setState(1357);
        match(TypedefParser::OCT_PREFIX);
        setState(1358);
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
        setState(1359);
        match(TypedefParser::BIN_PREFIX);
        setState(1360);
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
  enterRule(_localctx, 88, TypedefParser::RuleU64Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1375);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1366);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1365);
          match(TypedefParser::MINUS);
        }
        setState(1368);
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
        setState(1369);
        match(TypedefParser::HEX_PREFIX);
        setState(1370);
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
        setState(1371);
        match(TypedefParser::OCT_PREFIX);
        setState(1372);
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
        setState(1373);
        match(TypedefParser::BIN_PREFIX);
        setState(1374);
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
  enterRule(_localctx, 90, TypedefParser::RuleI8Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1389);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1380);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1379);
          match(TypedefParser::MINUS);
        }
        setState(1382);
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
        setState(1383);
        match(TypedefParser::HEX_PREFIX);
        setState(1384);
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
        setState(1385);
        match(TypedefParser::OCT_PREFIX);
        setState(1386);
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
        setState(1387);
        match(TypedefParser::BIN_PREFIX);
        setState(1388);
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
  enterRule(_localctx, 92, TypedefParser::RuleI16Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1403);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1394);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1393);
          match(TypedefParser::MINUS);
        }
        setState(1396);
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
        setState(1397);
        match(TypedefParser::HEX_PREFIX);
        setState(1398);
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
        setState(1399);
        match(TypedefParser::OCT_PREFIX);
        setState(1400);
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
        setState(1401);
        match(TypedefParser::BIN_PREFIX);
        setState(1402);
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
  enterRule(_localctx, 94, TypedefParser::RuleI32Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1417);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1408);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1407);
          match(TypedefParser::MINUS);
        }
        setState(1410);
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
        setState(1411);
        match(TypedefParser::HEX_PREFIX);
        setState(1412);
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
        setState(1413);
        match(TypedefParser::OCT_PREFIX);
        setState(1414);
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
        setState(1415);
        match(TypedefParser::BIN_PREFIX);
        setState(1416);
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
  enterRule(_localctx, 96, TypedefParser::RuleI64Literal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1431);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::DEC_DIGITS:
      case TypedefParser::DEC_DIGITS_UNDERSCORE:
      case TypedefParser::MINUS: {
        setState(1422);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TypedefParser::MINUS) {
          setState(1421);
          match(TypedefParser::MINUS);
        }
        setState(1424);
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
        setState(1425);
        match(TypedefParser::HEX_PREFIX);
        setState(1426);
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
        setState(1427);
        match(TypedefParser::OCT_PREFIX);
        setState(1428);
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
        setState(1429);
        match(TypedefParser::BIN_PREFIX);
        setState(1430);
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
  enterRule(_localctx, 98, TypedefParser::RuleStringLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1439);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(1435);
        dynamic_cast<StringLiteralContext *>(_localctx)->string_literalToken = match(TypedefParser::STRING_LITERAL);

        		dynamic_cast<StringLiteralContext *>(_localctx)->maybe_val =  GetStringValue(this, dynamic_cast<StringLiteralContext *>(_localctx)->string_literalToken);
        	
        break;
      }

      case TypedefParser::RAW_STRING_LITERAL: {
        enterOuterAlt(_localctx, 2);
        setState(1437);
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
  enterRule(_localctx, 100, TypedefParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1444);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TypedefParser::NON_KEYWORD_IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(1441);
        dynamic_cast<IdentifierContext *>(_localctx)->nki = match(TypedefParser::NON_KEYWORD_IDENTIFIER);
        break;
      }

      case TypedefParser::RAW_ESCAPE: {
        enterOuterAlt(_localctx, 2);
        setState(1442);
        match(TypedefParser::RAW_ESCAPE);
        setState(1443);
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
  enterRule(_localctx, 102, TypedefParser::RuleKeyword);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1446);
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
  "compilationUnit", "maybeValuedSymbolDeclaration", "typeDeclaration", 
  "structDeclaration", "variantDeclaration", "vectorDeclaration", "mapDeclaration", 
  "maybeValuedSymbol", "unvaluedSymbol", "inlineStruct", "inlineVariant", 
  "inlineVector", "inlineMap", "maybeValuedType", "valuedType", "unvaluedType", 
  "symbolReference", "primitiveType", "valuedPrimitiveType", "valuedBoolFragment", 
  "valuedCharFragment", "valuedStringFragment", "valuedF32Fragment", "valuedF64Fragment", 
  "valuedU8Fragment", "valuedU16Fragment", "valuedU32Fragment", "valuedU64Fragment", 
  "valuedI8Fragment", "valuedI16Fragment", "valuedI32Fragment", "valuedI64Fragment", 
  "typedefVersionDeclaration", "moduleDeclaration", "useDeclaration", "useTree", 
  "simplePath", "boolLiteral", "charLiteral", "f32Literal", "f64Literal", 
  "u8Literal", "u16Literal", "u32Literal", "u64Literal", "i8Literal", "i16Literal", 
  "i32Literal", "i64Literal", "stringLiteral", "identifier", "keyword"
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
    0x3, 0xa2, 0x5ab, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x6e, 0xa, 0x2, 0xc, 0x2, 0xe, 
    0x2, 0x71, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x76, 0xa, 
    0x2, 0x3, 0x2, 0x7, 0x2, 0x79, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x7c, 0xb, 
    0x2, 0x3, 0x2, 0x7, 0x2, 0x7f, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x82, 0xb, 
    0x2, 0x3, 0x2, 0x7, 0x2, 0x85, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x88, 0xb, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x8d, 0xa, 0x2, 0xc, 0x2, 
    0xe, 0x2, 0x90, 0xb, 0x2, 0x3, 0x2, 0x7, 0x2, 0x93, 0xa, 0x2, 0xc, 0x2, 
    0xe, 0x2, 0x96, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x7, 
    0x3, 0x9c, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x9f, 0xb, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0xaf, 
    0xa, 0x4, 0x3, 0x4, 0x7, 0x4, 0xb2, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0xb5, 
    0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xbb, 0xa, 
    0x5, 0xc, 0x5, 0xe, 0x5, 0xbe, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 
    0xc2, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xc5, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x7, 0x5, 0xc9, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xcc, 0xb, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x5, 0x5, 0xdd, 0xa, 0x5, 0x3, 0x5, 0x7, 0x5, 0xe0, 0xa, 0x5, 0xc, 0x5, 
    0xe, 0x5, 0xe3, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xe7, 0xa, 0x5, 
    0xc, 0x5, 0xe, 0x5, 0xea, 0xb, 0x5, 0x7, 0x5, 0xec, 0xa, 0x5, 0xc, 0x5, 
    0xe, 0x5, 0xef, 0xb, 0x5, 0x3, 0x5, 0x7, 0x5, 0xf2, 0xa, 0x5, 0xc, 0x5, 
    0xe, 0x5, 0xf5, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x7, 0x6, 0xfc, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0xff, 0xb, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x7, 0x6, 0x103, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x106, 
    0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x10a, 0xa, 0x6, 0xc, 0x6, 0xe, 
    0x6, 0x10d, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x11e, 0xa, 0x6, 0x3, 0x6, 0x7, 
    0x6, 0x121, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x124, 0xb, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x7, 0x6, 0x128, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x12b, 0xb, 
    0x6, 0x7, 0x6, 0x12d, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x130, 0xb, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x137, 0xa, 
    0x7, 0xc, 0x7, 0xe, 0x7, 0x13a, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 
    0x13e, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x141, 0xb, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x7, 0x7, 0x145, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x148, 0xb, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x14c, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x14f, 
    0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 
    0x156, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x159, 0xb, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x7, 0x8, 0x15d, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x160, 0xb, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x164, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x167, 
    0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x16b, 0xa, 0x8, 0xc, 0x8, 0xe, 
    0x8, 0x16e, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x172, 0xa, 0x8, 
    0xc, 0x8, 0xe, 0x8, 0x175, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x179, 
    0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x17c, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x183, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 
    0x186, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x18a, 0xa, 0x9, 0xc, 
    0x9, 0xe, 0x9, 0x18d, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x5, 0x9, 0x194, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x1a4, 0xa, 0xa, 0xc, 0xa, 
    0xe, 0xa, 0x1a7, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x1ab, 0xa, 
    0xa, 0xc, 0xa, 0xe, 0xa, 0x1ae, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 
    0x1b2, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x1b5, 0xb, 0xa, 0x3, 0xa, 0x5, 
    0xa, 0x1b8, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x1bc, 0xa, 0xa, 
    0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x1c0, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x1c3, 
    0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x1c7, 0xa, 0xb, 0xc, 0xb, 0xe, 
    0xb, 0x1ca, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x1ce, 0xa, 0xb, 
    0xc, 0xb, 0xe, 0xb, 0x1d1, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x1d5, 
    0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x1d8, 0xb, 0xb, 0x5, 0xb, 0x1da, 0xa, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x1de, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 
    0x1e1, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x1e6, 0xa, 
    0xb, 0xc, 0xb, 0xe, 0xb, 0x1e9, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 
    0x1ed, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x1f0, 0xb, 0xb, 0x7, 0xb, 0x1f2, 
    0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x1f5, 0xb, 0xb, 0x3, 0xb, 0x7, 0xb, 0x1f8, 
    0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x1fb, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x202, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 
    0x205, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x209, 0xa, 0xc, 0xc, 
    0xc, 0xe, 0xc, 0x20c, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x210, 
    0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x213, 0xb, 0xc, 0x3, 0xc, 0x7, 0xc, 0x216, 
    0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x219, 0xb, 0xc, 0x3, 0xc, 0x5, 0xc, 0x21c, 
    0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x220, 0xa, 0xc, 0xc, 0xc, 0xe, 
    0xc, 0x223, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x228, 
    0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x22b, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 
    0xc, 0x22f, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x232, 0xb, 0xc, 0x7, 0xc, 
    0x234, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x237, 0xb, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x23e, 0xa, 0xd, 0xc, 0xd, 
    0xe, 0xd, 0x241, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x245, 0xa, 
    0xd, 0xc, 0xd, 0xe, 0xd, 0x248, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 
    0x24c, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x24f, 0xb, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x7, 0xd, 0x253, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x256, 0xb, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x25a, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x25d, 
    0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x261, 0xa, 0xd, 0xc, 0xd, 0xe, 
    0xd, 0x264, 0xb, 0xd, 0x3, 0xd, 0x5, 0xd, 0x267, 0xa, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x26d, 0xa, 0xe, 0xc, 0xe, 0xe, 
    0xe, 0x270, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x274, 0xa, 0xe, 
    0xc, 0xe, 0xe, 0xe, 0x277, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x27b, 
    0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x27e, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 
    0xe, 0x282, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x285, 0xb, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x7, 0xe, 0x289, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x28c, 0xb, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x290, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 
    0x293, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x297, 0xa, 0xe, 0xc, 
    0xe, 0xe, 0xe, 0x29a, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x29e, 
    0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x2a1, 0xb, 0xe, 0x3, 0xe, 0x5, 0xe, 0x2a4, 
    0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x7, 0xf, 0x2ad, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x2b0, 0xb, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x2b6, 0xa, 0xf, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x2c1, 0xa, 0x11, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x2e0, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x309, 
    0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x30d, 0xa, 0x15, 0xc, 0x15, 
    0xe, 0x15, 0x310, 0xb, 0x15, 0x3, 0x15, 0x5, 0x15, 0x313, 0xa, 0x15, 
    0x3, 0x15, 0x7, 0x15, 0x316, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x319, 
    0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x31d, 0xa, 0x15, 0xc, 0x15, 
    0xe, 0x15, 0x320, 0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 
    0x7, 0x16, 0x326, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x329, 0xb, 0x16, 
    0x3, 0x16, 0x5, 0x16, 0x32c, 0xa, 0x16, 0x3, 0x16, 0x7, 0x16, 0x32f, 
    0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x332, 0xb, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x7, 0x16, 0x336, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x339, 0xb, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x33f, 0xa, 0x17, 
    0xc, 0x17, 0xe, 0x17, 0x342, 0xb, 0x17, 0x3, 0x17, 0x5, 0x17, 0x345, 
    0xa, 0x17, 0x3, 0x17, 0x7, 0x17, 0x348, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 
    0x34b, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x34f, 0xa, 0x17, 
    0xc, 0x17, 0xe, 0x17, 0x352, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x7, 0x18, 0x358, 0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x35b, 
    0xb, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x35f, 0xa, 0x18, 0xc, 0x18, 
    0xe, 0x18, 0x362, 0xb, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x366, 
    0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x369, 0xb, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x5, 0x18, 0x36d, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0x371, 
    0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0x374, 0xb, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x5, 0x18, 0x378, 0xa, 0x18, 0x5, 0x18, 0x37a, 0xa, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x7, 0x19, 0x37e, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x381, 
    0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x385, 0xa, 0x19, 0xc, 0x19, 
    0xe, 0x19, 0x388, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x38c, 
    0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x38f, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x5, 0x19, 0x393, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x397, 
    0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x39a, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x5, 0x19, 0x39f, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 
    0x3a3, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x3a6, 0xb, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x7, 0x1a, 0x3aa, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x3ad, 
    0xb, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x3b1, 0xa, 0x1a, 0xc, 0x1a, 
    0xe, 0x1a, 0x3b4, 0xb, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x3b8, 
    0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x3bc, 0xa, 0x1a, 0xc, 0x1a, 
    0xe, 0x1a, 0x3bf, 0xb, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 
    0x3c4, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x3c8, 0xa, 0x1b, 
    0xc, 0x1b, 0xe, 0x1b, 0x3cb, 0xb, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 
    0x3cf, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x3d2, 0xb, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x7, 0x1b, 0x3d6, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x3d9, 
    0xb, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x3dd, 0xa, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x7, 0x1b, 0x3e1, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x3e4, 
    0xb, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x3e9, 0xa, 0x1b, 
    0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x3ed, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 
    0x3f0, 0xb, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x3f4, 0xa, 0x1c, 
    0xc, 0x1c, 0xe, 0x1c, 0x3f7, 0xb, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 
    0x3fb, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x3fe, 0xb, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x5, 0x1c, 0x402, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 
    0x406, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x409, 0xb, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x40e, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x7, 0x1d, 0x412, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x415, 0xb, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x419, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 
    0x41c, 0xb, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x420, 0xa, 0x1d, 
    0xc, 0x1d, 0xe, 0x1d, 0x423, 0xb, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 
    0x427, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x42b, 0xa, 0x1d, 
    0xc, 0x1d, 0xe, 0x1d, 0x42e, 0xb, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x5, 0x1d, 0x433, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x437, 
    0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x43a, 0xb, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x7, 0x1e, 0x43e, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x441, 0xb, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x445, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 
    0x448, 0xb, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x44c, 0xa, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x450, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 
    0x453, 0xb, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x458, 
    0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x45c, 0xa, 0x1f, 0xc, 0x1f, 
    0xe, 0x1f, 0x45f, 0xb, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x463, 
    0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x466, 0xb, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x7, 0x1f, 0x46a, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x46d, 0xb, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x471, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x7, 0x1f, 0x475, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x478, 0xb, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x47d, 0xa, 0x1f, 0x3, 0x20, 
    0x3, 0x20, 0x7, 0x20, 0x481, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x484, 
    0xb, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x488, 0xa, 0x20, 0xc, 0x20, 
    0xe, 0x20, 0x48b, 0xb, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x48f, 
    0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x492, 0xb, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x5, 0x20, 0x496, 0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x49a, 
    0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x49d, 0xb, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x5, 0x20, 0x4a1, 0xa, 0x20, 0x5, 0x20, 0x4a3, 0xa, 0x20, 0x3, 0x21, 
    0x3, 0x21, 0x7, 0x21, 0x4a7, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x4aa, 
    0xb, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x4ae, 0xa, 0x21, 0xc, 0x21, 
    0xe, 0x21, 0x4b1, 0xb, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x4b5, 
    0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x4b8, 0xb, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x5, 0x21, 0x4bc, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x7, 0x21, 0x4c0, 
    0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x4c3, 0xb, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x5, 0x21, 0x4c8, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 
    0x4cc, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x4cf, 0xb, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x7, 0x22, 0x4d3, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x4d6, 
    0xb, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x4da, 0xa, 0x22, 0xc, 0x22, 
    0xe, 0x22, 0x4dd, 0xb, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 
    0x3, 0x23, 0x6, 0x23, 0x4e4, 0xa, 0x23, 0xd, 0x23, 0xe, 0x23, 0x4e5, 
    0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x4ea, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 
    0x4ed, 0xb, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x5, 0x25, 0x4f7, 0xa, 0x25, 0x3, 0x25, 
    0x5, 0x25, 0x4fa, 0xa, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x7, 0x25, 0x501, 0xa, 0x25, 0xc, 0x25, 0xe, 0x25, 0x504, 
    0xb, 0x25, 0x3, 0x25, 0x5, 0x25, 0x507, 0xa, 0x25, 0x5, 0x25, 0x509, 
    0xa, 0x25, 0x3, 0x25, 0x5, 0x25, 0x50c, 0xa, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x5, 0x25, 0x511, 0xa, 0x25, 0x5, 0x25, 0x513, 0xa, 0x25, 
    0x3, 0x26, 0x5, 0x26, 0x516, 0xa, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x7, 0x26, 0x51e, 0xa, 0x26, 0xc, 0x26, 
    0xe, 0x26, 0x521, 0xb, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
    0x2a, 0x3, 0x2b, 0x5, 0x2b, 0x52f, 0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x538, 
    0xa, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x5, 0x2c, 0x53d, 0xa, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 
    0x2c, 0x5, 0x2c, 0x546, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 
    0x5, 0x2d, 0x54b, 0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x554, 0xa, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2e, 0x5, 0x2e, 0x559, 0xa, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x562, 
    0xa, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x5, 0x2f, 0x567, 0xa, 0x2f, 
    0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
    0x2f, 0x5, 0x2f, 0x570, 0xa, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 
    0x5, 0x30, 0x575, 0xa, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x57e, 0xa, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x31, 0x5, 0x31, 0x583, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x58c, 
    0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x5, 0x32, 0x591, 0xa, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x32, 0x5, 0x32, 0x59a, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x5a2, 0xa, 0x33, 0x3, 0x34, 
    0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x5a7, 0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x35, 0x2, 0x2, 0x36, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
    0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 
    0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x2, 0x8, 0x4, 0x2, 
    0x6, 0x6, 0xc, 0xc, 0x3, 0x2, 0x63, 0x64, 0x3, 0x2, 0x65, 0x66, 0x3, 
    0x2, 0x67, 0x68, 0x3, 0x2, 0x69, 0x6a, 0x4, 0x2, 0x4, 0x8, 0xa, 0x48, 
    0x2, 0x665, 0x2, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x4, 0x99, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0xae, 0x3, 0x2, 0x2, 0x2, 0x8, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0xf9, 0x3, 0x2, 0x2, 0x2, 0xc, 0x134, 0x3, 0x2, 0x2, 0x2, 0xe, 0x153, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x193, 0x3, 0x2, 0x2, 0x2, 0x12, 0x1bb, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x16, 0x1ff, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x26a, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x2b7, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x22, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x2df, 0x3, 0x2, 0x2, 0x2, 0x26, 0x308, 0x3, 0x2, 0x2, 0x2, 0x28, 0x312, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x344, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x379, 0x3, 0x2, 0x2, 0x2, 0x30, 0x39e, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x3c3, 0x3, 0x2, 0x2, 0x2, 0x34, 0x3e8, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x40d, 0x3, 0x2, 0x2, 0x2, 0x38, 0x432, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x457, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x47c, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x4a2, 0x3, 0x2, 0x2, 0x2, 0x40, 0x4c7, 0x3, 0x2, 0x2, 0x2, 0x42, 0x4c9, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x4e1, 0x3, 0x2, 0x2, 0x2, 0x46, 0x4f1, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x512, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x515, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x522, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x524, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x527, 0x3, 0x2, 0x2, 0x2, 0x52, 0x52a, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x537, 0x3, 0x2, 0x2, 0x2, 0x56, 0x545, 0x3, 0x2, 0x2, 0x2, 0x58, 
    0x553, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x561, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x56f, 
    0x3, 0x2, 0x2, 0x2, 0x5e, 0x57d, 0x3, 0x2, 0x2, 0x2, 0x60, 0x58b, 0x3, 
    0x2, 0x2, 0x2, 0x62, 0x599, 0x3, 0x2, 0x2, 0x2, 0x64, 0x5a1, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x5a6, 0x3, 0x2, 0x2, 0x2, 0x68, 0x5a8, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x6b, 0x5, 0x42, 0x22, 0x2, 0x6b, 0x6f, 0x8, 0x2, 0x1, 0x2, 
    0x6c, 0x6e, 0x7, 0x5f, 0x2, 0x2, 0x6d, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6e, 
    0x71, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 
    0x3, 0x2, 0x2, 0x2, 0x70, 0x75, 0x3, 0x2, 0x2, 0x2, 0x71, 0x6f, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x73, 0x5, 0x44, 0x23, 0x2, 0x73, 0x74, 0x8, 0x2, 
    0x1, 0x2, 0x74, 0x76, 0x3, 0x2, 0x2, 0x2, 0x75, 0x72, 0x3, 0x2, 0x2, 
    0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 0x80, 0x3, 0x2, 0x2, 0x2, 
    0x77, 0x79, 0x7, 0x5f, 0x2, 0x2, 0x78, 0x77, 0x3, 0x2, 0x2, 0x2, 0x79, 
    0x7c, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 
    0x3, 0x2, 0x2, 0x2, 0x7b, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7a, 0x3, 
    0x2, 0x2, 0x2, 0x7d, 0x7f, 0x5, 0x46, 0x24, 0x2, 0x7e, 0x7a, 0x3, 0x2, 
    0x2, 0x2, 0x7f, 0x82, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7e, 0x3, 0x2, 0x2, 
    0x2, 0x80, 0x81, 0x3, 0x2, 0x2, 0x2, 0x81, 0x8e, 0x3, 0x2, 0x2, 0x2, 
    0x82, 0x80, 0x3, 0x2, 0x2, 0x2, 0x83, 0x85, 0x7, 0x5f, 0x2, 0x2, 0x84, 
    0x83, 0x3, 0x2, 0x2, 0x2, 0x85, 0x88, 0x3, 0x2, 0x2, 0x2, 0x86, 0x84, 
    0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x89, 0x3, 
    0x2, 0x2, 0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x5, 0x6, 
    0x4, 0x2, 0x8a, 0x8b, 0x8, 0x2, 0x1, 0x2, 0x8b, 0x8d, 0x3, 0x2, 0x2, 
    0x2, 0x8c, 0x86, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x90, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8f, 
    0x94, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x91, 0x93, 
    0x7, 0x5f, 0x2, 0x2, 0x92, 0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 0x96, 0x3, 
    0x2, 0x2, 0x2, 0x94, 0x92, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x3, 0x2, 
    0x2, 0x2, 0x95, 0x97, 0x3, 0x2, 0x2, 0x2, 0x96, 0x94, 0x3, 0x2, 0x2, 
    0x2, 0x97, 0x98, 0x7, 0x2, 0x2, 0x3, 0x98, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x99, 0x9d, 0x5, 0x10, 0x9, 0x2, 0x9a, 0x9c, 0x7, 0x5f, 0x2, 0x2, 0x9b, 
    0x9a, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9b, 
    0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa0, 0x3, 
    0x2, 0x2, 0x2, 0x9f, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x7, 0x95, 
    0x2, 0x2, 0xa1, 0x5, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x5, 0x8, 0x5, 
    0x2, 0xa3, 0xa4, 0x8, 0x4, 0x1, 0x2, 0xa4, 0xaf, 0x3, 0x2, 0x2, 0x2, 
    0xa5, 0xa6, 0x5, 0xa, 0x6, 0x2, 0xa6, 0xa7, 0x8, 0x4, 0x1, 0x2, 0xa7, 
    0xaf, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x5, 0xc, 0x7, 0x2, 0xa9, 0xaa, 
    0x8, 0x4, 0x1, 0x2, 0xaa, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x5, 
    0xe, 0x8, 0x2, 0xac, 0xad, 0x8, 0x4, 0x1, 0x2, 0xad, 0xaf, 0x3, 0x2, 
    0x2, 0x2, 0xae, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xae, 0xa5, 0x3, 0x2, 0x2, 
    0x2, 0xae, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xae, 0xab, 0x3, 0x2, 0x2, 0x2, 
    0xaf, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb2, 0x7, 0x5f, 0x2, 0x2, 0xb1, 
    0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb1, 
    0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb6, 0x3, 
    0x2, 0x2, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x7, 0x95, 
    0x2, 0x2, 0xb7, 0x7, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xbc, 0x7, 0xb, 0x2, 
    0x2, 0xb9, 0xbb, 0x7, 0x5f, 0x2, 0x2, 0xba, 0xb9, 0x3, 0x2, 0x2, 0x2, 
    0xbb, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbc, 
    0xbd, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbc, 
    0x3, 0x2, 0x2, 0x2, 0xbf, 0xc3, 0x5, 0x66, 0x34, 0x2, 0xc0, 0xc2, 0x7, 
    0x5f, 0x2, 0x2, 0xc1, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc5, 0x3, 0x2, 
    0x2, 0x2, 0xc3, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x3, 0x2, 0x2, 
    0x2, 0xc4, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc3, 0x3, 0x2, 0x2, 0x2, 
    0xc6, 0xca, 0x7, 0x9d, 0x2, 0x2, 0xc7, 0xc9, 0x7, 0x5f, 0x2, 0x2, 0xc8, 
    0xc7, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xca, 0xc8, 
    0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xed, 0x3, 
    0x2, 0x2, 0x2, 0xcc, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x5, 0x10, 
    0x9, 0x2, 0xce, 0xcf, 0x8, 0x5, 0x1, 0x2, 0xcf, 0xdd, 0x3, 0x2, 0x2, 
    0x2, 0xd0, 0xd1, 0x5, 0x8, 0x5, 0x2, 0xd1, 0xd2, 0x8, 0x5, 0x1, 0x2, 
    0xd2, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x5, 0xa, 0x6, 0x2, 0xd4, 
    0xd5, 0x8, 0x5, 0x1, 0x2, 0xd5, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 
    0x5, 0xc, 0x7, 0x2, 0xd7, 0xd8, 0x8, 0x5, 0x1, 0x2, 0xd8, 0xdd, 0x3, 
    0x2, 0x2, 0x2, 0xd9, 0xda, 0x5, 0xe, 0x8, 0x2, 0xda, 0xdb, 0x8, 0x5, 
    0x1, 0x2, 0xdb, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xcd, 0x3, 0x2, 0x2, 
    0x2, 0xdc, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xd3, 0x3, 0x2, 0x2, 0x2, 
    0xdc, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdd, 
    0xe1, 0x3, 0x2, 0x2, 0x2, 0xde, 0xe0, 0x7, 0x5f, 0x2, 0x2, 0xdf, 0xde, 
    0x3, 0x2, 0x2, 0x2, 0xe0, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xdf, 0x3, 
    0x2, 0x2, 0x2, 0xe1, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe4, 0x3, 0x2, 
    0x2, 0x2, 0xe3, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe8, 0x7, 0x95, 0x2, 
    0x2, 0xe5, 0xe7, 0x7, 0x5f, 0x2, 0x2, 0xe6, 0xe5, 0x3, 0x2, 0x2, 0x2, 
    0xe7, 0xea, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe8, 
    0xe9, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xec, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe8, 
    0x3, 0x2, 0x2, 0x2, 0xeb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xec, 0xef, 0x3, 
    0x2, 0x2, 0x2, 0xed, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 0x3, 0x2, 
    0x2, 0x2, 0xee, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 
    0x2, 0xf0, 0xf2, 0x7, 0x5f, 0x2, 0x2, 0xf1, 0xf0, 0x3, 0x2, 0x2, 0x2, 
    0xf2, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf3, 
    0xf4, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf3, 
    0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x9e, 0x2, 0x2, 0xf7, 0xf8, 0x8, 
    0x5, 0x1, 0x2, 0xf8, 0x9, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfd, 0x7, 0x10, 
    0x2, 0x2, 0xfa, 0xfc, 0x7, 0x5f, 0x2, 0x2, 0xfb, 0xfa, 0x3, 0x2, 0x2, 
    0x2, 0xfc, 0xff, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfb, 0x3, 0x2, 0x2, 0x2, 
    0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x100, 0x3, 0x2, 0x2, 0x2, 0xff, 
    0xfd, 0x3, 0x2, 0x2, 0x2, 0x100, 0x104, 0x5, 0x66, 0x34, 0x2, 0x101, 
    0x103, 0x7, 0x5f, 0x2, 0x2, 0x102, 0x101, 0x3, 0x2, 0x2, 0x2, 0x103, 
    0x106, 0x3, 0x2, 0x2, 0x2, 0x104, 0x102, 0x3, 0x2, 0x2, 0x2, 0x104, 
    0x105, 0x3, 0x2, 0x2, 0x2, 0x105, 0x107, 0x3, 0x2, 0x2, 0x2, 0x106, 
    0x104, 0x3, 0x2, 0x2, 0x2, 0x107, 0x12e, 0x7, 0x9d, 0x2, 0x2, 0x108, 
    0x10a, 0x7, 0x5f, 0x2, 0x2, 0x109, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10a, 
    0x10d, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x109, 0x3, 0x2, 0x2, 0x2, 0x10b, 
    0x10c, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x10d, 
    0x10b, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x5, 0x12, 0xa, 0x2, 0x10f, 
    0x110, 0x8, 0x6, 0x1, 0x2, 0x110, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x111, 
    0x112, 0x5, 0x8, 0x5, 0x2, 0x112, 0x113, 0x8, 0x6, 0x1, 0x2, 0x113, 
    0x11e, 0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x5, 0xa, 0x6, 0x2, 0x115, 
    0x116, 0x8, 0x6, 0x1, 0x2, 0x116, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x117, 
    0x118, 0x5, 0xc, 0x7, 0x2, 0x118, 0x119, 0x8, 0x6, 0x1, 0x2, 0x119, 
    0x11e, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 0x5, 0xe, 0x8, 0x2, 0x11b, 
    0x11c, 0x8, 0x6, 0x1, 0x2, 0x11c, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11d, 
    0x10e, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x111, 0x3, 0x2, 0x2, 0x2, 0x11d, 
    0x114, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x117, 0x3, 0x2, 0x2, 0x2, 0x11d, 
    0x11a, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x122, 0x3, 0x2, 0x2, 0x2, 0x11f, 
    0x121, 0x7, 0x5f, 0x2, 0x2, 0x120, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x121, 
    0x124, 0x3, 0x2, 0x2, 0x2, 0x122, 0x120, 0x3, 0x2, 0x2, 0x2, 0x122, 
    0x123, 0x3, 0x2, 0x2, 0x2, 0x123, 0x125, 0x3, 0x2, 0x2, 0x2, 0x124, 
    0x122, 0x3, 0x2, 0x2, 0x2, 0x125, 0x129, 0x7, 0x95, 0x2, 0x2, 0x126, 
    0x128, 0x7, 0x5f, 0x2, 0x2, 0x127, 0x126, 0x3, 0x2, 0x2, 0x2, 0x128, 
    0x12b, 0x3, 0x2, 0x2, 0x2, 0x129, 0x127, 0x3, 0x2, 0x2, 0x2, 0x129, 
    0x12a, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12b, 
    0x129, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x12d, 
    0x130, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12e, 
    0x12f, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x131, 0x3, 0x2, 0x2, 0x2, 0x130, 
    0x12e, 0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 0x7, 0x9e, 0x2, 0x2, 0x132, 
    0x133, 0x8, 0x6, 0x1, 0x2, 0x133, 0xb, 0x3, 0x2, 0x2, 0x2, 0x134, 0x138, 
    0x7, 0x11, 0x2, 0x2, 0x135, 0x137, 0x7, 0x5f, 0x2, 0x2, 0x136, 0x135, 
    0x3, 0x2, 0x2, 0x2, 0x137, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x138, 0x136, 
    0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13b, 
    0x3, 0x2, 0x2, 0x2, 0x13a, 0x138, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13f, 
    0x5, 0x66, 0x34, 0x2, 0x13c, 0x13e, 0x7, 0x5f, 0x2, 0x2, 0x13d, 0x13c, 
    0x3, 0x2, 0x2, 0x2, 0x13e, 0x141, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x13d, 
    0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 0x3, 0x2, 0x2, 0x2, 0x140, 0x142, 
    0x3, 0x2, 0x2, 0x2, 0x141, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x142, 0x146, 
    0x7, 0x8c, 0x2, 0x2, 0x143, 0x145, 0x7, 0x5f, 0x2, 0x2, 0x144, 0x143, 
    0x3, 0x2, 0x2, 0x2, 0x145, 0x148, 0x3, 0x2, 0x2, 0x2, 0x146, 0x144, 
    0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 0x3, 0x2, 0x2, 0x2, 0x147, 0x149, 
    0x3, 0x2, 0x2, 0x2, 0x148, 0x146, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14d, 
    0x5, 0x20, 0x11, 0x2, 0x14a, 0x14c, 0x7, 0x5f, 0x2, 0x2, 0x14b, 0x14a, 
    0x3, 0x2, 0x2, 0x2, 0x14c, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14b, 
    0x3, 0x2, 0x2, 0x2, 0x14d, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x150, 
    0x3, 0x2, 0x2, 0x2, 0x14f, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 
    0x7, 0x8b, 0x2, 0x2, 0x151, 0x152, 0x8, 0x7, 0x1, 0x2, 0x152, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x153, 0x157, 0x7, 0x12, 0x2, 0x2, 0x154, 0x156, 0x7, 
    0x5f, 0x2, 0x2, 0x155, 0x154, 0x3, 0x2, 0x2, 0x2, 0x156, 0x159, 0x3, 
    0x2, 0x2, 0x2, 0x157, 0x155, 0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 0x3, 
    0x2, 0x2, 0x2, 0x158, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x159, 0x157, 0x3, 
    0x2, 0x2, 0x2, 0x15a, 0x15e, 0x5, 0x66, 0x34, 0x2, 0x15b, 0x15d, 0x7, 
    0x5f, 0x2, 0x2, 0x15c, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x160, 0x3, 
    0x2, 0x2, 0x2, 0x15e, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 0x3, 
    0x2, 0x2, 0x2, 0x15f, 0x161, 0x3, 0x2, 0x2, 0x2, 0x160, 0x15e, 0x3, 
    0x2, 0x2, 0x2, 0x161, 0x165, 0x7, 0x8c, 0x2, 0x2, 0x162, 0x164, 0x7, 
    0x5f, 0x2, 0x2, 0x163, 0x162, 0x3, 0x2, 0x2, 0x2, 0x164, 0x167, 0x3, 
    0x2, 0x2, 0x2, 0x165, 0x163, 0x3, 0x2, 0x2, 0x2, 0x165, 0x166, 0x3, 
    0x2, 0x2, 0x2, 0x166, 0x168, 0x3, 0x2, 0x2, 0x2, 0x167, 0x165, 0x3, 
    0x2, 0x2, 0x2, 0x168, 0x16c, 0x5, 0x24, 0x13, 0x2, 0x169, 0x16b, 0x7, 
    0x5f, 0x2, 0x2, 0x16a, 0x169, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16e, 0x3, 
    0x2, 0x2, 0x2, 0x16c, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16d, 0x3, 
    0x2, 0x2, 0x2, 0x16d, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16c, 0x3, 
    0x2, 0x2, 0x2, 0x16f, 0x173, 0x7, 0x94, 0x2, 0x2, 0x170, 0x172, 0x7, 
    0x5f, 0x2, 0x2, 0x171, 0x170, 0x3, 0x2, 0x2, 0x2, 0x172, 0x175, 0x3, 
    0x2, 0x2, 0x2, 0x173, 0x171, 0x3, 0x2, 0x2, 0x2, 0x173, 0x174, 0x3, 
    0x2, 0x2, 0x2, 0x174, 0x176, 0x3, 0x2, 0x2, 0x2, 0x175, 0x173, 0x3, 
    0x2, 0x2, 0x2, 0x176, 0x17a, 0x5, 0x20, 0x11, 0x2, 0x177, 0x179, 0x7, 
    0x5f, 0x2, 0x2, 0x178, 0x177, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17c, 0x3, 
    0x2, 0x2, 0x2, 0x17a, 0x178, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17b, 0x3, 
    0x2, 0x2, 0x2, 0x17b, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17a, 0x3, 
    0x2, 0x2, 0x2, 0x17d, 0x17e, 0x7, 0x8b, 0x2, 0x2, 0x17e, 0x17f, 0x8, 
    0x8, 0x1, 0x2, 0x17f, 0xf, 0x3, 0x2, 0x2, 0x2, 0x180, 0x184, 0x5, 0x66, 
    0x34, 0x2, 0x181, 0x183, 0x7, 0x5f, 0x2, 0x2, 0x182, 0x181, 0x3, 0x2, 
    0x2, 0x2, 0x183, 0x186, 0x3, 0x2, 0x2, 0x2, 0x184, 0x182, 0x3, 0x2, 
    0x2, 0x2, 0x184, 0x185, 0x3, 0x2, 0x2, 0x2, 0x185, 0x187, 0x3, 0x2, 
    0x2, 0x2, 0x186, 0x184, 0x3, 0x2, 0x2, 0x2, 0x187, 0x18b, 0x5, 0x1c, 
    0xf, 0x2, 0x188, 0x18a, 0x7, 0x5f, 0x2, 0x2, 0x189, 0x188, 0x3, 0x2, 
    0x2, 0x2, 0x18a, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x189, 0x3, 0x2, 
    0x2, 0x2, 0x18b, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18e, 0x3, 0x2, 
    0x2, 0x2, 0x18d, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18f, 0x8, 0x9, 
    0x1, 0x2, 0x18f, 0x194, 0x3, 0x2, 0x2, 0x2, 0x190, 0x191, 0x5, 0x12, 
    0xa, 0x2, 0x191, 0x192, 0x8, 0x9, 0x1, 0x2, 0x192, 0x194, 0x3, 0x2, 
    0x2, 0x2, 0x193, 0x180, 0x3, 0x2, 0x2, 0x2, 0x193, 0x190, 0x3, 0x2, 
    0x2, 0x2, 0x194, 0x11, 0x3, 0x2, 0x2, 0x2, 0x195, 0x196, 0x5, 0x14, 
    0xb, 0x2, 0x196, 0x197, 0x8, 0xa, 0x1, 0x2, 0x197, 0x1bc, 0x3, 0x2, 
    0x2, 0x2, 0x198, 0x199, 0x5, 0x16, 0xc, 0x2, 0x199, 0x19a, 0x8, 0xa, 
    0x1, 0x2, 0x19a, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x19c, 0x5, 0x18, 
    0xd, 0x2, 0x19c, 0x19d, 0x8, 0xa, 0x1, 0x2, 0x19d, 0x1bc, 0x3, 0x2, 
    0x2, 0x2, 0x19e, 0x19f, 0x5, 0x1a, 0xe, 0x2, 0x19f, 0x1a0, 0x8, 0xa, 
    0x1, 0x2, 0x1a0, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a5, 0x5, 0x66, 
    0x34, 0x2, 0x1a2, 0x1a4, 0x7, 0x5f, 0x2, 0x2, 0x1a3, 0x1a2, 0x3, 0x2, 
    0x2, 0x2, 0x1a4, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a3, 0x3, 0x2, 
    0x2, 0x2, 0x1a5, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a8, 0x3, 0x2, 
    0x2, 0x2, 0x1a7, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1ac, 0x7, 0x96, 
    0x2, 0x2, 0x1a9, 0x1ab, 0x7, 0x5f, 0x2, 0x2, 0x1aa, 0x1a9, 0x3, 0x2, 
    0x2, 0x2, 0x1ab, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1aa, 0x3, 0x2, 
    0x2, 0x2, 0x1ac, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1af, 0x3, 0x2, 
    0x2, 0x2, 0x1ae, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b7, 0x5, 0x20, 
    0x11, 0x2, 0x1b0, 0x1b2, 0x7, 0x5f, 0x2, 0x2, 0x1b1, 0x1b0, 0x3, 0x2, 
    0x2, 0x2, 0x1b2, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b1, 0x3, 0x2, 
    0x2, 0x2, 0x1b3, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b6, 0x3, 0x2, 
    0x2, 0x2, 0x1b5, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b8, 0x7, 0x9c, 
    0x2, 0x2, 0x1b7, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b8, 0x3, 0x2, 
    0x2, 0x2, 0x1b8, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1ba, 0x8, 0xa, 
    0x1, 0x2, 0x1ba, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x195, 0x3, 0x2, 
    0x2, 0x2, 0x1bb, 0x198, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x19b, 0x3, 0x2, 
    0x2, 0x2, 0x1bb, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1a1, 0x3, 0x2, 
    0x2, 0x2, 0x1bc, 0x13, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1c1, 0x5, 0x66, 
    0x34, 0x2, 0x1be, 0x1c0, 0x7, 0x5f, 0x2, 0x2, 0x1bf, 0x1be, 0x3, 0x2, 
    0x2, 0x2, 0x1c0, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1bf, 0x3, 0x2, 
    0x2, 0x2, 0x1c1, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c4, 0x3, 0x2, 
    0x2, 0x2, 0x1c3, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c8, 0x7, 0x96, 
    0x2, 0x2, 0x1c5, 0x1c7, 0x7, 0x5f, 0x2, 0x2, 0x1c6, 0x1c5, 0x3, 0x2, 
    0x2, 0x2, 0x1c7, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c6, 0x3, 0x2, 
    0x2, 0x2, 0x1c8, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1cb, 0x3, 0x2, 
    0x2, 0x2, 0x1ca, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1cf, 0x7, 0xb, 
    0x2, 0x2, 0x1cc, 0x1ce, 0x7, 0x5f, 0x2, 0x2, 0x1cd, 0x1cc, 0x3, 0x2, 
    0x2, 0x2, 0x1ce, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1cd, 0x3, 0x2, 
    0x2, 0x2, 0x1cf, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d9, 0x3, 0x2, 
    0x2, 0x2, 0x1d1, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d6, 0x7, 0x9c, 
    0x2, 0x2, 0x1d3, 0x1d5, 0x7, 0x5f, 0x2, 0x2, 0x1d4, 0x1d3, 0x3, 0x2, 
    0x2, 0x2, 0x1d5, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d4, 0x3, 0x2, 
    0x2, 0x2, 0x1d6, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1da, 0x3, 0x2, 
    0x2, 0x2, 0x1d8, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1d2, 0x3, 0x2, 
    0x2, 0x2, 0x1d9, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1db, 0x3, 0x2, 
    0x2, 0x2, 0x1db, 0x1df, 0x7, 0x9d, 0x2, 0x2, 0x1dc, 0x1de, 0x7, 0x5f, 
    0x2, 0x2, 0x1dd, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1e1, 0x3, 0x2, 
    0x2, 0x2, 0x1df, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e0, 0x3, 0x2, 
    0x2, 0x2, 0x1e0, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1df, 0x3, 0x2, 
    0x2, 0x2, 0x1e2, 0x1e3, 0x5, 0x10, 0x9, 0x2, 0x1e3, 0x1e7, 0x8, 0xb, 
    0x1, 0x2, 0x1e4, 0x1e6, 0x7, 0x5f, 0x2, 0x2, 0x1e5, 0x1e4, 0x3, 0x2, 
    0x2, 0x2, 0x1e6, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e5, 0x3, 0x2, 
    0x2, 0x2, 0x1e7, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1ea, 0x3, 0x2, 
    0x2, 0x2, 0x1e9, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1ee, 0x7, 0x95, 
    0x2, 0x2, 0x1eb, 0x1ed, 0x7, 0x5f, 0x2, 0x2, 0x1ec, 0x1eb, 0x3, 0x2, 
    0x2, 0x2, 0x1ed, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ec, 0x3, 0x2, 
    0x2, 0x2, 0x1ee, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f2, 0x3, 0x2, 
    0x2, 0x2, 0x1f0, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1e2, 0x3, 0x2, 
    0x2, 0x2, 0x1f2, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f1, 0x3, 0x2, 
    0x2, 0x2, 0x1f3, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f9, 0x3, 0x2, 
    0x2, 0x2, 0x1f5, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f8, 0x7, 0x5f, 
    0x2, 0x2, 0x1f7, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1fb, 0x3, 0x2, 
    0x2, 0x2, 0x1f9, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fa, 0x3, 0x2, 
    0x2, 0x2, 0x1fa, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1f9, 0x3, 0x2, 
    0x2, 0x2, 0x1fc, 0x1fd, 0x7, 0x9e, 0x2, 0x2, 0x1fd, 0x1fe, 0x8, 0xb, 
    0x1, 0x2, 0x1fe, 0x15, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x203, 0x5, 0x66, 
    0x34, 0x2, 0x200, 0x202, 0x7, 0x5f, 0x2, 0x2, 0x201, 0x200, 0x3, 0x2, 
    0x2, 0x2, 0x202, 0x205, 0x3, 0x2, 0x2, 0x2, 0x203, 0x201, 0x3, 0x2, 
    0x2, 0x2, 0x203, 0x204, 0x3, 0x2, 0x2, 0x2, 0x204, 0x206, 0x3, 0x2, 
    0x2, 0x2, 0x205, 0x203, 0x3, 0x2, 0x2, 0x2, 0x206, 0x20a, 0x7, 0x96, 
    0x2, 0x2, 0x207, 0x209, 0x7, 0x5f, 0x2, 0x2, 0x208, 0x207, 0x3, 0x2, 
    0x2, 0x2, 0x209, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x208, 0x3, 0x2, 
    0x2, 0x2, 0x20a, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x20d, 0x3, 0x2, 
    0x2, 0x2, 0x20c, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x211, 0x7, 0x10, 
    0x2, 0x2, 0x20e, 0x210, 0x7, 0x5f, 0x2, 0x2, 0x20f, 0x20e, 0x3, 0x2, 
    0x2, 0x2, 0x210, 0x213, 0x3, 0x2, 0x2, 0x2, 0x211, 0x20f, 0x3, 0x2, 
    0x2, 0x2, 0x211, 0x212, 0x3, 0x2, 0x2, 0x2, 0x212, 0x21b, 0x3, 0x2, 
    0x2, 0x2, 0x213, 0x211, 0x3, 0x2, 0x2, 0x2, 0x214, 0x216, 0x7, 0x5f, 
    0x2, 0x2, 0x215, 0x214, 0x3, 0x2, 0x2, 0x2, 0x216, 0x219, 0x3, 0x2, 
    0x2, 0x2, 0x217, 0x215, 0x3, 0x2, 0x2, 0x2, 0x217, 0x218, 0x3, 0x2, 
    0x2, 0x2, 0x218, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x219, 0x217, 0x3, 0x2, 
    0x2, 0x2, 0x21a, 0x21c, 0x7, 0x9c, 0x2, 0x2, 0x21b, 0x217, 0x3, 0x2, 
    0x2, 0x2, 0x21b, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21d, 0x3, 0x2, 
    0x2, 0x2, 0x21d, 0x235, 0x7, 0x9d, 0x2, 0x2, 0x21e, 0x220, 0x7, 0x5f, 
    0x2, 0x2, 0x21f, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x220, 0x223, 0x3, 0x2, 
    0x2, 0x2, 0x221, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x221, 0x222, 0x3, 0x2, 
    0x2, 0x2, 0x222, 0x224, 0x3, 0x2, 0x2, 0x2, 0x223, 0x221, 0x3, 0x2, 
    0x2, 0x2, 0x224, 0x225, 0x5, 0x12, 0xa, 0x2, 0x225, 0x229, 0x8, 0xc, 
    0x1, 0x2, 0x226, 0x228, 0x7, 0x5f, 0x2, 0x2, 0x227, 0x226, 0x3, 0x2, 
    0x2, 0x2, 0x228, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x229, 0x227, 0x3, 0x2, 
    0x2, 0x2, 0x229, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x22c, 0x3, 0x2, 
    0x2, 0x2, 0x22b, 0x229, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x230, 0x7, 0x95, 
    0x2, 0x2, 0x22d, 0x22f, 0x7, 0x5f, 0x2, 0x2, 0x22e, 0x22d, 0x3, 0x2, 
    0x2, 0x2, 0x22f, 0x232, 0x3, 0x2, 0x2, 0x2, 0x230, 0x22e, 0x3, 0x2, 
    0x2, 0x2, 0x230, 0x231, 0x3, 0x2, 0x2, 0x2, 0x231, 0x234, 0x3, 0x2, 
    0x2, 0x2, 0x232, 0x230, 0x3, 0x2, 0x2, 0x2, 0x233, 0x221, 0x3, 0x2, 
    0x2, 0x2, 0x234, 0x237, 0x3, 0x2, 0x2, 0x2, 0x235, 0x233, 0x3, 0x2, 
    0x2, 0x2, 0x235, 0x236, 0x3, 0x2, 0x2, 0x2, 0x236, 0x238, 0x3, 0x2, 
    0x2, 0x2, 0x237, 0x235, 0x3, 0x2, 0x2, 0x2, 0x238, 0x239, 0x7, 0x9e, 
    0x2, 0x2, 0x239, 0x23a, 0x8, 0xc, 0x1, 0x2, 0x23a, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x23b, 0x23f, 0x5, 0x66, 0x34, 0x2, 0x23c, 0x23e, 0x7, 0x5f, 0x2, 
    0x2, 0x23d, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x241, 0x3, 0x2, 0x2, 
    0x2, 0x23f, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x240, 0x3, 0x2, 0x2, 
    0x2, 0x240, 0x242, 0x3, 0x2, 0x2, 0x2, 0x241, 0x23f, 0x3, 0x2, 0x2, 
    0x2, 0x242, 0x246, 0x7, 0x96, 0x2, 0x2, 0x243, 0x245, 0x7, 0x5f, 0x2, 
    0x2, 0x244, 0x243, 0x3, 0x2, 0x2, 0x2, 0x245, 0x248, 0x3, 0x2, 0x2, 
    0x2, 0x246, 0x244, 0x3, 0x2, 0x2, 0x2, 0x246, 0x247, 0x3, 0x2, 0x2, 
    0x2, 0x247, 0x249, 0x3, 0x2, 0x2, 0x2, 0x248, 0x246, 0x3, 0x2, 0x2, 
    0x2, 0x249, 0x24d, 0x7, 0x11, 0x2, 0x2, 0x24a, 0x24c, 0x7, 0x5f, 0x2, 
    0x2, 0x24b, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24f, 0x3, 0x2, 0x2, 
    0x2, 0x24d, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x24e, 0x3, 0x2, 0x2, 
    0x2, 0x24e, 0x250, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x24d, 0x3, 0x2, 0x2, 
    0x2, 0x250, 0x254, 0x7, 0x8c, 0x2, 0x2, 0x251, 0x253, 0x7, 0x5f, 0x2, 
    0x2, 0x252, 0x251, 0x3, 0x2, 0x2, 0x2, 0x253, 0x256, 0x3, 0x2, 0x2, 
    0x2, 0x254, 0x252, 0x3, 0x2, 0x2, 0x2, 0x254, 0x255, 0x3, 0x2, 0x2, 
    0x2, 0x255, 0x257, 0x3, 0x2, 0x2, 0x2, 0x256, 0x254, 0x3, 0x2, 0x2, 
    0x2, 0x257, 0x25b, 0x5, 0x20, 0x11, 0x2, 0x258, 0x25a, 0x7, 0x5f, 0x2, 
    0x2, 0x259, 0x258, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25d, 0x3, 0x2, 0x2, 
    0x2, 0x25b, 0x259, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x25c, 0x3, 0x2, 0x2, 
    0x2, 0x25c, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x25b, 0x3, 0x2, 0x2, 
    0x2, 0x25e, 0x266, 0x7, 0x8b, 0x2, 0x2, 0x25f, 0x261, 0x7, 0x5f, 0x2, 
    0x2, 0x260, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x261, 0x264, 0x3, 0x2, 0x2, 
    0x2, 0x262, 0x260, 0x3, 0x2, 0x2, 0x2, 0x262, 0x263, 0x3, 0x2, 0x2, 
    0x2, 0x263, 0x265, 0x3, 0x2, 0x2, 0x2, 0x264, 0x262, 0x3, 0x2, 0x2, 
    0x2, 0x265, 0x267, 0x7, 0x9c, 0x2, 0x2, 0x266, 0x262, 0x3, 0x2, 0x2, 
    0x2, 0x266, 0x267, 0x3, 0x2, 0x2, 0x2, 0x267, 0x268, 0x3, 0x2, 0x2, 
    0x2, 0x268, 0x269, 0x8, 0xd, 0x1, 0x2, 0x269, 0x19, 0x3, 0x2, 0x2, 0x2, 
    0x26a, 0x26e, 0x5, 0x66, 0x34, 0x2, 0x26b, 0x26d, 0x7, 0x5f, 0x2, 0x2, 
    0x26c, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x270, 0x3, 0x2, 0x2, 0x2, 
    0x26e, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x26f, 0x3, 0x2, 0x2, 0x2, 
    0x26f, 0x271, 0x3, 0x2, 0x2, 0x2, 0x270, 0x26e, 0x3, 0x2, 0x2, 0x2, 
    0x271, 0x275, 0x7, 0x96, 0x2, 0x2, 0x272, 0x274, 0x7, 0x5f, 0x2, 0x2, 
    0x273, 0x272, 0x3, 0x2, 0x2, 0x2, 0x274, 0x277, 0x3, 0x2, 0x2, 0x2, 
    0x275, 0x273, 0x3, 0x2, 0x2, 0x2, 0x275, 0x276, 0x3, 0x2, 0x2, 0x2, 
    0x276, 0x278, 0x3, 0x2, 0x2, 0x2, 0x277, 0x275, 0x3, 0x2, 0x2, 0x2, 
    0x278, 0x27c, 0x7, 0x12, 0x2, 0x2, 0x279, 0x27b, 0x7, 0x5f, 0x2, 0x2, 
    0x27a, 0x279, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x27e, 0x3, 0x2, 0x2, 0x2, 
    0x27c, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x27d, 0x3, 0x2, 0x2, 0x2, 
    0x27d, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x27c, 0x3, 0x2, 0x2, 0x2, 
    0x27f, 0x283, 0x7, 0x8c, 0x2, 0x2, 0x280, 0x282, 0x7, 0x5f, 0x2, 0x2, 
    0x281, 0x280, 0x3, 0x2, 0x2, 0x2, 0x282, 0x285, 0x3, 0x2, 0x2, 0x2, 
    0x283, 0x281, 0x3, 0x2, 0x2, 0x2, 0x283, 0x284, 0x3, 0x2, 0x2, 0x2, 
    0x284, 0x286, 0x3, 0x2, 0x2, 0x2, 0x285, 0x283, 0x3, 0x2, 0x2, 0x2, 
    0x286, 0x28a, 0x5, 0x24, 0x13, 0x2, 0x287, 0x289, 0x7, 0x5f, 0x2, 0x2, 
    0x288, 0x287, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28c, 0x3, 0x2, 0x2, 0x2, 
    0x28a, 0x288, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x28b, 0x3, 0x2, 0x2, 0x2, 
    0x28b, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28a, 0x3, 0x2, 0x2, 0x2, 
    0x28d, 0x291, 0x7, 0x94, 0x2, 0x2, 0x28e, 0x290, 0x7, 0x5f, 0x2, 0x2, 
    0x28f, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x290, 0x293, 0x3, 0x2, 0x2, 0x2, 
    0x291, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x291, 0x292, 0x3, 0x2, 0x2, 0x2, 
    0x292, 0x294, 0x3, 0x2, 0x2, 0x2, 0x293, 0x291, 0x3, 0x2, 0x2, 0x2, 
    0x294, 0x298, 0x5, 0x20, 0x11, 0x2, 0x295, 0x297, 0x7, 0x5f, 0x2, 0x2, 
    0x296, 0x295, 0x3, 0x2, 0x2, 0x2, 0x297, 0x29a, 0x3, 0x2, 0x2, 0x2, 
    0x298, 0x296, 0x3, 0x2, 0x2, 0x2, 0x298, 0x299, 0x3, 0x2, 0x2, 0x2, 
    0x299, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x29a, 0x298, 0x3, 0x2, 0x2, 0x2, 
    0x29b, 0x2a3, 0x7, 0x8b, 0x2, 0x2, 0x29c, 0x29e, 0x7, 0x5f, 0x2, 0x2, 
    0x29d, 0x29c, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x2a1, 0x3, 0x2, 0x2, 0x2, 
    0x29f, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x29f, 0x2a0, 0x3, 0x2, 0x2, 0x2, 
    0x2a0, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x29f, 0x3, 0x2, 0x2, 0x2, 
    0x2a2, 0x2a4, 0x7, 0x9c, 0x2, 0x2, 0x2a3, 0x29f, 0x3, 0x2, 0x2, 0x2, 
    0x2a3, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a5, 0x3, 0x2, 0x2, 0x2, 
    0x2a5, 0x2a6, 0x8, 0xe, 0x1, 0x2, 0x2a6, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x2a7, 
    0x2a8, 0x5, 0x1e, 0x10, 0x2, 0x2a8, 0x2a9, 0x8, 0xf, 0x1, 0x2, 0x2a9, 
    0x2b6, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2ae, 0x7, 0x96, 0x2, 0x2, 0x2ab, 
    0x2ad, 0x7, 0x5f, 0x2, 0x2, 0x2ac, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2ad, 
    0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2ae, 
    0x2af, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0x2b0, 
    0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2b2, 0x5, 0x20, 0x11, 0x2, 0x2b2, 
    0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b4, 0x8, 0xf, 0x1, 0x2, 0x2b4, 
    0x2b6, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2b5, 
    0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2b6, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b8, 
    0x5, 0x26, 0x14, 0x2, 0x2b8, 0x2b9, 0x8, 0x10, 0x1, 0x2, 0x2b9, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2bb, 0x5, 0x24, 0x13, 0x2, 0x2bb, 0x2bc, 
    0x8, 0x11, 0x1, 0x2, 0x2bc, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2be, 
    0x5, 0x22, 0x12, 0x2, 0x2be, 0x2bf, 0x8, 0x11, 0x1, 0x2, 0x2bf, 0x2c1, 
    0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2bd, 
    0x3, 0x2, 0x2, 0x2, 0x2c1, 0x21, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c3, 0x5, 
    0x66, 0x34, 0x2, 0x2c3, 0x2c4, 0x8, 0x12, 0x1, 0x2, 0x2c4, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0x2c5, 0x2c6, 0x7, 0x49, 0x2, 0x2, 0x2c6, 0x2e0, 0x8, 
    0x13, 0x1, 0x2, 0x2c7, 0x2c8, 0x7, 0x4a, 0x2, 0x2, 0x2c8, 0x2e0, 0x8, 
    0x13, 0x1, 0x2, 0x2c9, 0x2ca, 0x7, 0x4b, 0x2, 0x2, 0x2ca, 0x2e0, 0x8, 
    0x13, 0x1, 0x2, 0x2cb, 0x2cc, 0x7, 0x4c, 0x2, 0x2, 0x2cc, 0x2e0, 0x8, 
    0x13, 0x1, 0x2, 0x2cd, 0x2ce, 0x7, 0x4d, 0x2, 0x2, 0x2ce, 0x2e0, 0x8, 
    0x13, 0x1, 0x2, 0x2cf, 0x2d0, 0x7, 0x4e, 0x2, 0x2, 0x2d0, 0x2e0, 0x8, 
    0x13, 0x1, 0x2, 0x2d1, 0x2d2, 0x7, 0x4f, 0x2, 0x2, 0x2d2, 0x2e0, 0x8, 
    0x13, 0x1, 0x2, 0x2d3, 0x2d4, 0x7, 0x50, 0x2, 0x2, 0x2d4, 0x2e0, 0x8, 
    0x13, 0x1, 0x2, 0x2d5, 0x2d6, 0x7, 0x51, 0x2, 0x2, 0x2d6, 0x2e0, 0x8, 
    0x13, 0x1, 0x2, 0x2d7, 0x2d8, 0x7, 0x52, 0x2, 0x2, 0x2d8, 0x2e0, 0x8, 
    0x13, 0x1, 0x2, 0x2d9, 0x2da, 0x7, 0x53, 0x2, 0x2, 0x2da, 0x2e0, 0x8, 
    0x13, 0x1, 0x2, 0x2db, 0x2dc, 0x7, 0x54, 0x2, 0x2, 0x2dc, 0x2e0, 0x8, 
    0x13, 0x1, 0x2, 0x2dd, 0x2de, 0x7, 0x55, 0x2, 0x2, 0x2de, 0x2e0, 0x8, 
    0x13, 0x1, 0x2, 0x2df, 0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2c7, 0x3, 
    0x2, 0x2, 0x2, 0x2df, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2cb, 0x3, 
    0x2, 0x2, 0x2, 0x2df, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2cf, 0x3, 
    0x2, 0x2, 0x2, 0x2df, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2d3, 0x3, 
    0x2, 0x2, 0x2, 0x2df, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2d7, 0x3, 
    0x2, 0x2, 0x2, 0x2df, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2db, 0x3, 
    0x2, 0x2, 0x2, 0x2df, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0x2e1, 0x2e2, 0x5, 0x28, 0x15, 0x2, 0x2e2, 0x2e3, 0x8, 0x14, 
    0x1, 0x2, 0x2e3, 0x309, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e5, 0x5, 0x2a, 
    0x16, 0x2, 0x2e5, 0x2e6, 0x8, 0x14, 0x1, 0x2, 0x2e6, 0x309, 0x3, 0x2, 
    0x2, 0x2, 0x2e7, 0x2e8, 0x5, 0x2c, 0x17, 0x2, 0x2e8, 0x2e9, 0x8, 0x14, 
    0x1, 0x2, 0x2e9, 0x309, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2eb, 0x5, 0x2e, 
    0x18, 0x2, 0x2eb, 0x2ec, 0x8, 0x14, 0x1, 0x2, 0x2ec, 0x309, 0x3, 0x2, 
    0x2, 0x2, 0x2ed, 0x2ee, 0x5, 0x30, 0x19, 0x2, 0x2ee, 0x2ef, 0x8, 0x14, 
    0x1, 0x2, 0x2ef, 0x309, 0x3, 0x2, 0x2, 0x2, 0x2f0, 0x2f1, 0x5, 0x32, 
    0x1a, 0x2, 0x2f1, 0x2f2, 0x8, 0x14, 0x1, 0x2, 0x2f2, 0x309, 0x3, 0x2, 
    0x2, 0x2, 0x2f3, 0x2f4, 0x5, 0x34, 0x1b, 0x2, 0x2f4, 0x2f5, 0x8, 0x14, 
    0x1, 0x2, 0x2f5, 0x309, 0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f7, 0x5, 0x36, 
    0x1c, 0x2, 0x2f7, 0x2f8, 0x8, 0x14, 0x1, 0x2, 0x2f8, 0x309, 0x3, 0x2, 
    0x2, 0x2, 0x2f9, 0x2fa, 0x5, 0x38, 0x1d, 0x2, 0x2fa, 0x2fb, 0x8, 0x14, 
    0x1, 0x2, 0x2fb, 0x309, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2fd, 0x5, 0x3a, 
    0x1e, 0x2, 0x2fd, 0x2fe, 0x8, 0x14, 0x1, 0x2, 0x2fe, 0x309, 0x3, 0x2, 
    0x2, 0x2, 0x2ff, 0x300, 0x5, 0x3c, 0x1f, 0x2, 0x300, 0x301, 0x8, 0x14, 
    0x1, 0x2, 0x301, 0x309, 0x3, 0x2, 0x2, 0x2, 0x302, 0x303, 0x5, 0x3e, 
    0x20, 0x2, 0x303, 0x304, 0x8, 0x14, 0x1, 0x2, 0x304, 0x309, 0x3, 0x2, 
    0x2, 0x2, 0x305, 0x306, 0x5, 0x40, 0x21, 0x2, 0x306, 0x307, 0x8, 0x14, 
    0x1, 0x2, 0x307, 0x309, 0x3, 0x2, 0x2, 0x2, 0x308, 0x2e1, 0x3, 0x2, 
    0x2, 0x2, 0x308, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x308, 0x2e7, 0x3, 0x2, 
    0x2, 0x2, 0x308, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x308, 0x2ed, 0x3, 0x2, 
    0x2, 0x2, 0x308, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x308, 0x2f3, 0x3, 0x2, 
    0x2, 0x2, 0x308, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x308, 0x2f9, 0x3, 0x2, 
    0x2, 0x2, 0x308, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x308, 0x2ff, 0x3, 0x2, 
    0x2, 0x2, 0x308, 0x302, 0x3, 0x2, 0x2, 0x2, 0x308, 0x305, 0x3, 0x2, 
    0x2, 0x2, 0x309, 0x27, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x30e, 0x7, 0x96, 
    0x2, 0x2, 0x30b, 0x30d, 0x7, 0x5f, 0x2, 0x2, 0x30c, 0x30b, 0x3, 0x2, 
    0x2, 0x2, 0x30d, 0x310, 0x3, 0x2, 0x2, 0x2, 0x30e, 0x30c, 0x3, 0x2, 
    0x2, 0x2, 0x30e, 0x30f, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x311, 0x3, 0x2, 
    0x2, 0x2, 0x310, 0x30e, 0x3, 0x2, 0x2, 0x2, 0x311, 0x313, 0x7, 0x49, 
    0x2, 0x2, 0x312, 0x30a, 0x3, 0x2, 0x2, 0x2, 0x312, 0x313, 0x3, 0x2, 
    0x2, 0x2, 0x313, 0x317, 0x3, 0x2, 0x2, 0x2, 0x314, 0x316, 0x7, 0x5f, 
    0x2, 0x2, 0x315, 0x314, 0x3, 0x2, 0x2, 0x2, 0x316, 0x319, 0x3, 0x2, 
    0x2, 0x2, 0x317, 0x315, 0x3, 0x2, 0x2, 0x2, 0x317, 0x318, 0x3, 0x2, 
    0x2, 0x2, 0x318, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x319, 0x317, 0x3, 0x2, 
    0x2, 0x2, 0x31a, 0x31e, 0x7, 0x88, 0x2, 0x2, 0x31b, 0x31d, 0x7, 0x5f, 
    0x2, 0x2, 0x31c, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x31d, 0x320, 0x3, 0x2, 
    0x2, 0x2, 0x31e, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x31e, 0x31f, 0x3, 0x2, 
    0x2, 0x2, 0x31f, 0x321, 0x3, 0x2, 0x2, 0x2, 0x320, 0x31e, 0x3, 0x2, 
    0x2, 0x2, 0x321, 0x322, 0x5, 0x4c, 0x27, 0x2, 0x322, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0x323, 0x327, 0x7, 0x96, 0x2, 0x2, 0x324, 0x326, 0x7, 0x5f, 
    0x2, 0x2, 0x325, 0x324, 0x3, 0x2, 0x2, 0x2, 0x326, 0x329, 0x3, 0x2, 
    0x2, 0x2, 0x327, 0x325, 0x3, 0x2, 0x2, 0x2, 0x327, 0x328, 0x3, 0x2, 
    0x2, 0x2, 0x328, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x329, 0x327, 0x3, 0x2, 
    0x2, 0x2, 0x32a, 0x32c, 0x7, 0x4a, 0x2, 0x2, 0x32b, 0x323, 0x3, 0x2, 
    0x2, 0x2, 0x32b, 0x32c, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x330, 0x3, 0x2, 
    0x2, 0x2, 0x32d, 0x32f, 0x7, 0x5f, 0x2, 0x2, 0x32e, 0x32d, 0x3, 0x2, 
    0x2, 0x2, 0x32f, 0x332, 0x3, 0x2, 0x2, 0x2, 0x330, 0x32e, 0x3, 0x2, 
    0x2, 0x2, 0x330, 0x331, 0x3, 0x2, 0x2, 0x2, 0x331, 0x333, 0x3, 0x2, 
    0x2, 0x2, 0x332, 0x330, 0x3, 0x2, 0x2, 0x2, 0x333, 0x337, 0x7, 0x88, 
    0x2, 0x2, 0x334, 0x336, 0x7, 0x5f, 0x2, 0x2, 0x335, 0x334, 0x3, 0x2, 
    0x2, 0x2, 0x336, 0x339, 0x3, 0x2, 0x2, 0x2, 0x337, 0x335, 0x3, 0x2, 
    0x2, 0x2, 0x337, 0x338, 0x3, 0x2, 0x2, 0x2, 0x338, 0x33a, 0x3, 0x2, 
    0x2, 0x2, 0x339, 0x337, 0x3, 0x2, 0x2, 0x2, 0x33a, 0x33b, 0x5, 0x4e, 
    0x28, 0x2, 0x33b, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x340, 0x7, 0x96, 
    0x2, 0x2, 0x33d, 0x33f, 0x7, 0x5f, 0x2, 0x2, 0x33e, 0x33d, 0x3, 0x2, 
    0x2, 0x2, 0x33f, 0x342, 0x3, 0x2, 0x2, 0x2, 0x340, 0x33e, 0x3, 0x2, 
    0x2, 0x2, 0x340, 0x341, 0x3, 0x2, 0x2, 0x2, 0x341, 0x343, 0x3, 0x2, 
    0x2, 0x2, 0x342, 0x340, 0x3, 0x2, 0x2, 0x2, 0x343, 0x345, 0x7, 0x4b, 
    0x2, 0x2, 0x344, 0x33c, 0x3, 0x2, 0x2, 0x2, 0x344, 0x345, 0x3, 0x2, 
    0x2, 0x2, 0x345, 0x349, 0x3, 0x2, 0x2, 0x2, 0x346, 0x348, 0x7, 0x5f, 
    0x2, 0x2, 0x347, 0x346, 0x3, 0x2, 0x2, 0x2, 0x348, 0x34b, 0x3, 0x2, 
    0x2, 0x2, 0x349, 0x347, 0x3, 0x2, 0x2, 0x2, 0x349, 0x34a, 0x3, 0x2, 
    0x2, 0x2, 0x34a, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x34b, 0x349, 0x3, 0x2, 
    0x2, 0x2, 0x34c, 0x350, 0x7, 0x88, 0x2, 0x2, 0x34d, 0x34f, 0x7, 0x5f, 
    0x2, 0x2, 0x34e, 0x34d, 0x3, 0x2, 0x2, 0x2, 0x34f, 0x352, 0x3, 0x2, 
    0x2, 0x2, 0x350, 0x34e, 0x3, 0x2, 0x2, 0x2, 0x350, 0x351, 0x3, 0x2, 
    0x2, 0x2, 0x351, 0x353, 0x3, 0x2, 0x2, 0x2, 0x352, 0x350, 0x3, 0x2, 
    0x2, 0x2, 0x353, 0x354, 0x5, 0x64, 0x33, 0x2, 0x354, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0x355, 0x359, 0x7, 0x96, 0x2, 0x2, 0x356, 0x358, 0x7, 0x5f, 
    0x2, 0x2, 0x357, 0x356, 0x3, 0x2, 0x2, 0x2, 0x358, 0x35b, 0x3, 0x2, 
    0x2, 0x2, 0x359, 0x357, 0x3, 0x2, 0x2, 0x2, 0x359, 0x35a, 0x3, 0x2, 
    0x2, 0x2, 0x35a, 0x35c, 0x3, 0x2, 0x2, 0x2, 0x35b, 0x359, 0x3, 0x2, 
    0x2, 0x2, 0x35c, 0x360, 0x7, 0x4c, 0x2, 0x2, 0x35d, 0x35f, 0x7, 0x5f, 
    0x2, 0x2, 0x35e, 0x35d, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x362, 0x3, 0x2, 
    0x2, 0x2, 0x360, 0x35e, 0x3, 0x2, 0x2, 0x2, 0x360, 0x361, 0x3, 0x2, 
    0x2, 0x2, 0x361, 0x363, 0x3, 0x2, 0x2, 0x2, 0x362, 0x360, 0x3, 0x2, 
    0x2, 0x2, 0x363, 0x367, 0x7, 0x88, 0x2, 0x2, 0x364, 0x366, 0x7, 0x5f, 
    0x2, 0x2, 0x365, 0x364, 0x3, 0x2, 0x2, 0x2, 0x366, 0x369, 0x3, 0x2, 
    0x2, 0x2, 0x367, 0x365, 0x3, 0x2, 0x2, 0x2, 0x367, 0x368, 0x3, 0x2, 
    0x2, 0x2, 0x368, 0x36a, 0x3, 0x2, 0x2, 0x2, 0x369, 0x367, 0x3, 0x2, 
    0x2, 0x2, 0x36a, 0x36c, 0x5, 0x50, 0x29, 0x2, 0x36b, 0x36d, 0x7, 0x4c, 
    0x2, 0x2, 0x36c, 0x36b, 0x3, 0x2, 0x2, 0x2, 0x36c, 0x36d, 0x3, 0x2, 
    0x2, 0x2, 0x36d, 0x37a, 0x3, 0x2, 0x2, 0x2, 0x36e, 0x372, 0x7, 0x88, 
    0x2, 0x2, 0x36f, 0x371, 0x7, 0x5f, 0x2, 0x2, 0x370, 0x36f, 0x3, 0x2, 
    0x2, 0x2, 0x371, 0x374, 0x3, 0x2, 0x2, 0x2, 0x372, 0x370, 0x3, 0x2, 
    0x2, 0x2, 0x372, 0x373, 0x3, 0x2, 0x2, 0x2, 0x373, 0x375, 0x3, 0x2, 
    0x2, 0x2, 0x374, 0x372, 0x3, 0x2, 0x2, 0x2, 0x375, 0x377, 0x5, 0x50, 
    0x29, 0x2, 0x376, 0x378, 0x7, 0x4c, 0x2, 0x2, 0x377, 0x376, 0x3, 0x2, 
    0x2, 0x2, 0x377, 0x378, 0x3, 0x2, 0x2, 0x2, 0x378, 0x37a, 0x3, 0x2, 
    0x2, 0x2, 0x379, 0x355, 0x3, 0x2, 0x2, 0x2, 0x379, 0x36e, 0x3, 0x2, 
    0x2, 0x2, 0x37a, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x37f, 0x7, 0x96, 
    0x2, 0x2, 0x37c, 0x37e, 0x7, 0x5f, 0x2, 0x2, 0x37d, 0x37c, 0x3, 0x2, 
    0x2, 0x2, 0x37e, 0x381, 0x3, 0x2, 0x2, 0x2, 0x37f, 0x37d, 0x3, 0x2, 
    0x2, 0x2, 0x37f, 0x380, 0x3, 0x2, 0x2, 0x2, 0x380, 0x382, 0x3, 0x2, 
    0x2, 0x2, 0x381, 0x37f, 0x3, 0x2, 0x2, 0x2, 0x382, 0x386, 0x7, 0x4d, 
    0x2, 0x2, 0x383, 0x385, 0x7, 0x5f, 0x2, 0x2, 0x384, 0x383, 0x3, 0x2, 
    0x2, 0x2, 0x385, 0x388, 0x3, 0x2, 0x2, 0x2, 0x386, 0x384, 0x3, 0x2, 
    0x2, 0x2, 0x386, 0x387, 0x3, 0x2, 0x2, 0x2, 0x387, 0x389, 0x3, 0x2, 
    0x2, 0x2, 0x388, 0x386, 0x3, 0x2, 0x2, 0x2, 0x389, 0x38d, 0x7, 0x88, 
    0x2, 0x2, 0x38a, 0x38c, 0x7, 0x5f, 0x2, 0x2, 0x38b, 0x38a, 0x3, 0x2, 
    0x2, 0x2, 0x38c, 0x38f, 0x3, 0x2, 0x2, 0x2, 0x38d, 0x38b, 0x3, 0x2, 
    0x2, 0x2, 0x38d, 0x38e, 0x3, 0x2, 0x2, 0x2, 0x38e, 0x390, 0x3, 0x2, 
    0x2, 0x2, 0x38f, 0x38d, 0x3, 0x2, 0x2, 0x2, 0x390, 0x392, 0x5, 0x52, 
    0x2a, 0x2, 0x391, 0x393, 0x7, 0x4d, 0x2, 0x2, 0x392, 0x391, 0x3, 0x2, 
    0x2, 0x2, 0x392, 0x393, 0x3, 0x2, 0x2, 0x2, 0x393, 0x39f, 0x3, 0x2, 
    0x2, 0x2, 0x394, 0x398, 0x7, 0x88, 0x2, 0x2, 0x395, 0x397, 0x7, 0x5f, 
    0x2, 0x2, 0x396, 0x395, 0x3, 0x2, 0x2, 0x2, 0x397, 0x39a, 0x3, 0x2, 
    0x2, 0x2, 0x398, 0x396, 0x3, 0x2, 0x2, 0x2, 0x398, 0x399, 0x3, 0x2, 
    0x2, 0x2, 0x399, 0x39b, 0x3, 0x2, 0x2, 0x2, 0x39a, 0x398, 0x3, 0x2, 
    0x2, 0x2, 0x39b, 0x39c, 0x5, 0x52, 0x2a, 0x2, 0x39c, 0x39d, 0x7, 0x4d, 
    0x2, 0x2, 0x39d, 0x39f, 0x3, 0x2, 0x2, 0x2, 0x39e, 0x37b, 0x3, 0x2, 
    0x2, 0x2, 0x39e, 0x394, 0x3, 0x2, 0x2, 0x2, 0x39f, 0x31, 0x3, 0x2, 0x2, 
    0x2, 0x3a0, 0x3a4, 0x7, 0x96, 0x2, 0x2, 0x3a1, 0x3a3, 0x7, 0x5f, 0x2, 
    0x2, 0x3a2, 0x3a1, 0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3a6, 0x3, 0x2, 0x2, 
    0x2, 0x3a4, 0x3a2, 0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a5, 0x3, 0x2, 0x2, 
    0x2, 0x3a5, 0x3a7, 0x3, 0x2, 0x2, 0x2, 0x3a6, 0x3a4, 0x3, 0x2, 0x2, 
    0x2, 0x3a7, 0x3ab, 0x7, 0x4e, 0x2, 0x2, 0x3a8, 0x3aa, 0x7, 0x5f, 0x2, 
    0x2, 0x3a9, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3ad, 0x3, 0x2, 0x2, 
    0x2, 0x3ab, 0x3a9, 0x3, 0x2, 0x2, 0x2, 0x3ab, 0x3ac, 0x3, 0x2, 0x2, 
    0x2, 0x3ac, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3ad, 0x3ab, 0x3, 0x2, 0x2, 
    0x2, 0x3ae, 0x3b2, 0x7, 0x88, 0x2, 0x2, 0x3af, 0x3b1, 0x7, 0x5f, 0x2, 
    0x2, 0x3b0, 0x3af, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b4, 0x3, 0x2, 0x2, 
    0x2, 0x3b2, 0x3b0, 0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3b3, 0x3, 0x2, 0x2, 
    0x2, 0x3b3, 0x3b5, 0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3b2, 0x3, 0x2, 0x2, 
    0x2, 0x3b5, 0x3b7, 0x5, 0x54, 0x2b, 0x2, 0x3b6, 0x3b8, 0x7, 0x4e, 0x2, 
    0x2, 0x3b7, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3b7, 0x3b8, 0x3, 0x2, 0x2, 
    0x2, 0x3b8, 0x3c4, 0x3, 0x2, 0x2, 0x2, 0x3b9, 0x3bd, 0x7, 0x88, 0x2, 
    0x2, 0x3ba, 0x3bc, 0x7, 0x5f, 0x2, 0x2, 0x3bb, 0x3ba, 0x3, 0x2, 0x2, 
    0x2, 0x3bc, 0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3bd, 0x3bb, 0x3, 0x2, 0x2, 
    0x2, 0x3bd, 0x3be, 0x3, 0x2, 0x2, 0x2, 0x3be, 0x3c0, 0x3, 0x2, 0x2, 
    0x2, 0x3bf, 0x3bd, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3c1, 0x5, 0x54, 0x2b, 
    0x2, 0x3c1, 0x3c2, 0x7, 0x4e, 0x2, 0x2, 0x3c2, 0x3c4, 0x3, 0x2, 0x2, 
    0x2, 0x3c3, 0x3a0, 0x3, 0x2, 0x2, 0x2, 0x3c3, 0x3b9, 0x3, 0x2, 0x2, 
    0x2, 0x3c4, 0x33, 0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3c9, 0x7, 0x96, 0x2, 
    0x2, 0x3c6, 0x3c8, 0x7, 0x5f, 0x2, 0x2, 0x3c7, 0x3c6, 0x3, 0x2, 0x2, 
    0x2, 0x3c8, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x3c9, 0x3c7, 0x3, 0x2, 0x2, 
    0x2, 0x3c9, 0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3cc, 0x3, 0x2, 0x2, 
    0x2, 0x3cb, 0x3c9, 0x3, 0x2, 0x2, 0x2, 0x3cc, 0x3d0, 0x7, 0x4f, 0x2, 
    0x2, 0x3cd, 0x3cf, 0x7, 0x5f, 0x2, 0x2, 0x3ce, 0x3cd, 0x3, 0x2, 0x2, 
    0x2, 0x3cf, 0x3d2, 0x3, 0x2, 0x2, 0x2, 0x3d0, 0x3ce, 0x3, 0x2, 0x2, 
    0x2, 0x3d0, 0x3d1, 0x3, 0x2, 0x2, 0x2, 0x3d1, 0x3d3, 0x3, 0x2, 0x2, 
    0x2, 0x3d2, 0x3d0, 0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3d7, 0x7, 0x88, 0x2, 
    0x2, 0x3d4, 0x3d6, 0x7, 0x5f, 0x2, 0x2, 0x3d5, 0x3d4, 0x3, 0x2, 0x2, 
    0x2, 0x3d6, 0x3d9, 0x3, 0x2, 0x2, 0x2, 0x3d7, 0x3d5, 0x3, 0x2, 0x2, 
    0x2, 0x3d7, 0x3d8, 0x3, 0x2, 0x2, 0x2, 0x3d8, 0x3da, 0x3, 0x2, 0x2, 
    0x2, 0x3d9, 0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3da, 0x3dc, 0x5, 0x56, 0x2c, 
    0x2, 0x3db, 0x3dd, 0x7, 0x4f, 0x2, 0x2, 0x3dc, 0x3db, 0x3, 0x2, 0x2, 
    0x2, 0x3dc, 0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3dd, 0x3e9, 0x3, 0x2, 0x2, 
    0x2, 0x3de, 0x3e2, 0x7, 0x88, 0x2, 0x2, 0x3df, 0x3e1, 0x7, 0x5f, 0x2, 
    0x2, 0x3e0, 0x3df, 0x3, 0x2, 0x2, 0x2, 0x3e1, 0x3e4, 0x3, 0x2, 0x2, 
    0x2, 0x3e2, 0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e3, 0x3, 0x2, 0x2, 
    0x2, 0x3e3, 0x3e5, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3e2, 0x3, 0x2, 0x2, 
    0x2, 0x3e5, 0x3e6, 0x5, 0x56, 0x2c, 0x2, 0x3e6, 0x3e7, 0x7, 0x4f, 0x2, 
    0x2, 0x3e7, 0x3e9, 0x3, 0x2, 0x2, 0x2, 0x3e8, 0x3c5, 0x3, 0x2, 0x2, 
    0x2, 0x3e8, 0x3de, 0x3, 0x2, 0x2, 0x2, 0x3e9, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0x3ea, 0x3ee, 0x7, 0x96, 0x2, 0x2, 0x3eb, 0x3ed, 0x7, 0x5f, 0x2, 0x2, 
    0x3ec, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3ed, 0x3f0, 0x3, 0x2, 0x2, 0x2, 
    0x3ee, 0x3ec, 0x3, 0x2, 0x2, 0x2, 0x3ee, 0x3ef, 0x3, 0x2, 0x2, 0x2, 
    0x3ef, 0x3f1, 0x3, 0x2, 0x2, 0x2, 0x3f0, 0x3ee, 0x3, 0x2, 0x2, 0x2, 
    0x3f1, 0x3f5, 0x7, 0x50, 0x2, 0x2, 0x3f2, 0x3f4, 0x7, 0x5f, 0x2, 0x2, 
    0x3f3, 0x3f2, 0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3f7, 0x3, 0x2, 0x2, 0x2, 
    0x3f5, 0x3f3, 0x3, 0x2, 0x2, 0x2, 0x3f5, 0x3f6, 0x3, 0x2, 0x2, 0x2, 
    0x3f6, 0x3f8, 0x3, 0x2, 0x2, 0x2, 0x3f7, 0x3f5, 0x3, 0x2, 0x2, 0x2, 
    0x3f8, 0x3fc, 0x7, 0x88, 0x2, 0x2, 0x3f9, 0x3fb, 0x7, 0x5f, 0x2, 0x2, 
    0x3fa, 0x3f9, 0x3, 0x2, 0x2, 0x2, 0x3fb, 0x3fe, 0x3, 0x2, 0x2, 0x2, 
    0x3fc, 0x3fa, 0x3, 0x2, 0x2, 0x2, 0x3fc, 0x3fd, 0x3, 0x2, 0x2, 0x2, 
    0x3fd, 0x3ff, 0x3, 0x2, 0x2, 0x2, 0x3fe, 0x3fc, 0x3, 0x2, 0x2, 0x2, 
    0x3ff, 0x401, 0x5, 0x58, 0x2d, 0x2, 0x400, 0x402, 0x7, 0x50, 0x2, 0x2, 
    0x401, 0x400, 0x3, 0x2, 0x2, 0x2, 0x401, 0x402, 0x3, 0x2, 0x2, 0x2, 
    0x402, 0x40e, 0x3, 0x2, 0x2, 0x2, 0x403, 0x407, 0x7, 0x88, 0x2, 0x2, 
    0x404, 0x406, 0x7, 0x5f, 0x2, 0x2, 0x405, 0x404, 0x3, 0x2, 0x2, 0x2, 
    0x406, 0x409, 0x3, 0x2, 0x2, 0x2, 0x407, 0x405, 0x3, 0x2, 0x2, 0x2, 
    0x407, 0x408, 0x3, 0x2, 0x2, 0x2, 0x408, 0x40a, 0x3, 0x2, 0x2, 0x2, 
    0x409, 0x407, 0x3, 0x2, 0x2, 0x2, 0x40a, 0x40b, 0x5, 0x58, 0x2d, 0x2, 
    0x40b, 0x40c, 0x7, 0x50, 0x2, 0x2, 0x40c, 0x40e, 0x3, 0x2, 0x2, 0x2, 
    0x40d, 0x3ea, 0x3, 0x2, 0x2, 0x2, 0x40d, 0x403, 0x3, 0x2, 0x2, 0x2, 
    0x40e, 0x37, 0x3, 0x2, 0x2, 0x2, 0x40f, 0x413, 0x7, 0x96, 0x2, 0x2, 
    0x410, 0x412, 0x7, 0x5f, 0x2, 0x2, 0x411, 0x410, 0x3, 0x2, 0x2, 0x2, 
    0x412, 0x415, 0x3, 0x2, 0x2, 0x2, 0x413, 0x411, 0x3, 0x2, 0x2, 0x2, 
    0x413, 0x414, 0x3, 0x2, 0x2, 0x2, 0x414, 0x416, 0x3, 0x2, 0x2, 0x2, 
    0x415, 0x413, 0x3, 0x2, 0x2, 0x2, 0x416, 0x41a, 0x7, 0x51, 0x2, 0x2, 
    0x417, 0x419, 0x7, 0x5f, 0x2, 0x2, 0x418, 0x417, 0x3, 0x2, 0x2, 0x2, 
    0x419, 0x41c, 0x3, 0x2, 0x2, 0x2, 0x41a, 0x418, 0x3, 0x2, 0x2, 0x2, 
    0x41a, 0x41b, 0x3, 0x2, 0x2, 0x2, 0x41b, 0x41d, 0x3, 0x2, 0x2, 0x2, 
    0x41c, 0x41a, 0x3, 0x2, 0x2, 0x2, 0x41d, 0x421, 0x7, 0x88, 0x2, 0x2, 
    0x41e, 0x420, 0x7, 0x5f, 0x2, 0x2, 0x41f, 0x41e, 0x3, 0x2, 0x2, 0x2, 
    0x420, 0x423, 0x3, 0x2, 0x2, 0x2, 0x421, 0x41f, 0x3, 0x2, 0x2, 0x2, 
    0x421, 0x422, 0x3, 0x2, 0x2, 0x2, 0x422, 0x424, 0x3, 0x2, 0x2, 0x2, 
    0x423, 0x421, 0x3, 0x2, 0x2, 0x2, 0x424, 0x426, 0x5, 0x5a, 0x2e, 0x2, 
    0x425, 0x427, 0x7, 0x51, 0x2, 0x2, 0x426, 0x425, 0x3, 0x2, 0x2, 0x2, 
    0x426, 0x427, 0x3, 0x2, 0x2, 0x2, 0x427, 0x433, 0x3, 0x2, 0x2, 0x2, 
    0x428, 0x42c, 0x7, 0x88, 0x2, 0x2, 0x429, 0x42b, 0x7, 0x5f, 0x2, 0x2, 
    0x42a, 0x429, 0x3, 0x2, 0x2, 0x2, 0x42b, 0x42e, 0x3, 0x2, 0x2, 0x2, 
    0x42c, 0x42a, 0x3, 0x2, 0x2, 0x2, 0x42c, 0x42d, 0x3, 0x2, 0x2, 0x2, 
    0x42d, 0x42f, 0x3, 0x2, 0x2, 0x2, 0x42e, 0x42c, 0x3, 0x2, 0x2, 0x2, 
    0x42f, 0x430, 0x5, 0x5a, 0x2e, 0x2, 0x430, 0x431, 0x7, 0x51, 0x2, 0x2, 
    0x431, 0x433, 0x3, 0x2, 0x2, 0x2, 0x432, 0x40f, 0x3, 0x2, 0x2, 0x2, 
    0x432, 0x428, 0x3, 0x2, 0x2, 0x2, 0x433, 0x39, 0x3, 0x2, 0x2, 0x2, 0x434, 
    0x438, 0x7, 0x96, 0x2, 0x2, 0x435, 0x437, 0x7, 0x5f, 0x2, 0x2, 0x436, 
    0x435, 0x3, 0x2, 0x2, 0x2, 0x437, 0x43a, 0x3, 0x2, 0x2, 0x2, 0x438, 
    0x436, 0x3, 0x2, 0x2, 0x2, 0x438, 0x439, 0x3, 0x2, 0x2, 0x2, 0x439, 
    0x43b, 0x3, 0x2, 0x2, 0x2, 0x43a, 0x438, 0x3, 0x2, 0x2, 0x2, 0x43b, 
    0x43f, 0x7, 0x52, 0x2, 0x2, 0x43c, 0x43e, 0x7, 0x5f, 0x2, 0x2, 0x43d, 
    0x43c, 0x3, 0x2, 0x2, 0x2, 0x43e, 0x441, 0x3, 0x2, 0x2, 0x2, 0x43f, 
    0x43d, 0x3, 0x2, 0x2, 0x2, 0x43f, 0x440, 0x3, 0x2, 0x2, 0x2, 0x440, 
    0x442, 0x3, 0x2, 0x2, 0x2, 0x441, 0x43f, 0x3, 0x2, 0x2, 0x2, 0x442, 
    0x446, 0x7, 0x88, 0x2, 0x2, 0x443, 0x445, 0x7, 0x5f, 0x2, 0x2, 0x444, 
    0x443, 0x3, 0x2, 0x2, 0x2, 0x445, 0x448, 0x3, 0x2, 0x2, 0x2, 0x446, 
    0x444, 0x3, 0x2, 0x2, 0x2, 0x446, 0x447, 0x3, 0x2, 0x2, 0x2, 0x447, 
    0x449, 0x3, 0x2, 0x2, 0x2, 0x448, 0x446, 0x3, 0x2, 0x2, 0x2, 0x449, 
    0x44b, 0x5, 0x5c, 0x2f, 0x2, 0x44a, 0x44c, 0x7, 0x52, 0x2, 0x2, 0x44b, 
    0x44a, 0x3, 0x2, 0x2, 0x2, 0x44b, 0x44c, 0x3, 0x2, 0x2, 0x2, 0x44c, 
    0x458, 0x3, 0x2, 0x2, 0x2, 0x44d, 0x451, 0x7, 0x88, 0x2, 0x2, 0x44e, 
    0x450, 0x7, 0x5f, 0x2, 0x2, 0x44f, 0x44e, 0x3, 0x2, 0x2, 0x2, 0x450, 
    0x453, 0x3, 0x2, 0x2, 0x2, 0x451, 0x44f, 0x3, 0x2, 0x2, 0x2, 0x451, 
    0x452, 0x3, 0x2, 0x2, 0x2, 0x452, 0x454, 0x3, 0x2, 0x2, 0x2, 0x453, 
    0x451, 0x3, 0x2, 0x2, 0x2, 0x454, 0x455, 0x5, 0x5c, 0x2f, 0x2, 0x455, 
    0x456, 0x7, 0x52, 0x2, 0x2, 0x456, 0x458, 0x3, 0x2, 0x2, 0x2, 0x457, 
    0x434, 0x3, 0x2, 0x2, 0x2, 0x457, 0x44d, 0x3, 0x2, 0x2, 0x2, 0x458, 
    0x3b, 0x3, 0x2, 0x2, 0x2, 0x459, 0x45d, 0x7, 0x96, 0x2, 0x2, 0x45a, 
    0x45c, 0x7, 0x5f, 0x2, 0x2, 0x45b, 0x45a, 0x3, 0x2, 0x2, 0x2, 0x45c, 
    0x45f, 0x3, 0x2, 0x2, 0x2, 0x45d, 0x45b, 0x3, 0x2, 0x2, 0x2, 0x45d, 
    0x45e, 0x3, 0x2, 0x2, 0x2, 0x45e, 0x460, 0x3, 0x2, 0x2, 0x2, 0x45f, 
    0x45d, 0x3, 0x2, 0x2, 0x2, 0x460, 0x464, 0x7, 0x53, 0x2, 0x2, 0x461, 
    0x463, 0x7, 0x5f, 0x2, 0x2, 0x462, 0x461, 0x3, 0x2, 0x2, 0x2, 0x463, 
    0x466, 0x3, 0x2, 0x2, 0x2, 0x464, 0x462, 0x3, 0x2, 0x2, 0x2, 0x464, 
    0x465, 0x3, 0x2, 0x2, 0x2, 0x465, 0x467, 0x3, 0x2, 0x2, 0x2, 0x466, 
    0x464, 0x3, 0x2, 0x2, 0x2, 0x467, 0x46b, 0x7, 0x88, 0x2, 0x2, 0x468, 
    0x46a, 0x7, 0x5f, 0x2, 0x2, 0x469, 0x468, 0x3, 0x2, 0x2, 0x2, 0x46a, 
    0x46d, 0x3, 0x2, 0x2, 0x2, 0x46b, 0x469, 0x3, 0x2, 0x2, 0x2, 0x46b, 
    0x46c, 0x3, 0x2, 0x2, 0x2, 0x46c, 0x46e, 0x3, 0x2, 0x2, 0x2, 0x46d, 
    0x46b, 0x3, 0x2, 0x2, 0x2, 0x46e, 0x470, 0x5, 0x5e, 0x30, 0x2, 0x46f, 
    0x471, 0x7, 0x53, 0x2, 0x2, 0x470, 0x46f, 0x3, 0x2, 0x2, 0x2, 0x470, 
    0x471, 0x3, 0x2, 0x2, 0x2, 0x471, 0x47d, 0x3, 0x2, 0x2, 0x2, 0x472, 
    0x476, 0x7, 0x88, 0x2, 0x2, 0x473, 0x475, 0x7, 0x5f, 0x2, 0x2, 0x474, 
    0x473, 0x3, 0x2, 0x2, 0x2, 0x475, 0x478, 0x3, 0x2, 0x2, 0x2, 0x476, 
    0x474, 0x3, 0x2, 0x2, 0x2, 0x476, 0x477, 0x3, 0x2, 0x2, 0x2, 0x477, 
    0x479, 0x3, 0x2, 0x2, 0x2, 0x478, 0x476, 0x3, 0x2, 0x2, 0x2, 0x479, 
    0x47a, 0x5, 0x5e, 0x30, 0x2, 0x47a, 0x47b, 0x7, 0x53, 0x2, 0x2, 0x47b, 
    0x47d, 0x3, 0x2, 0x2, 0x2, 0x47c, 0x459, 0x3, 0x2, 0x2, 0x2, 0x47c, 
    0x472, 0x3, 0x2, 0x2, 0x2, 0x47d, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x47e, 0x482, 
    0x7, 0x96, 0x2, 0x2, 0x47f, 0x481, 0x7, 0x5f, 0x2, 0x2, 0x480, 0x47f, 
    0x3, 0x2, 0x2, 0x2, 0x481, 0x484, 0x3, 0x2, 0x2, 0x2, 0x482, 0x480, 
    0x3, 0x2, 0x2, 0x2, 0x482, 0x483, 0x3, 0x2, 0x2, 0x2, 0x483, 0x485, 
    0x3, 0x2, 0x2, 0x2, 0x484, 0x482, 0x3, 0x2, 0x2, 0x2, 0x485, 0x489, 
    0x7, 0x54, 0x2, 0x2, 0x486, 0x488, 0x7, 0x5f, 0x2, 0x2, 0x487, 0x486, 
    0x3, 0x2, 0x2, 0x2, 0x488, 0x48b, 0x3, 0x2, 0x2, 0x2, 0x489, 0x487, 
    0x3, 0x2, 0x2, 0x2, 0x489, 0x48a, 0x3, 0x2, 0x2, 0x2, 0x48a, 0x48c, 
    0x3, 0x2, 0x2, 0x2, 0x48b, 0x489, 0x3, 0x2, 0x2, 0x2, 0x48c, 0x490, 
    0x7, 0x88, 0x2, 0x2, 0x48d, 0x48f, 0x7, 0x5f, 0x2, 0x2, 0x48e, 0x48d, 
    0x3, 0x2, 0x2, 0x2, 0x48f, 0x492, 0x3, 0x2, 0x2, 0x2, 0x490, 0x48e, 
    0x3, 0x2, 0x2, 0x2, 0x490, 0x491, 0x3, 0x2, 0x2, 0x2, 0x491, 0x493, 
    0x3, 0x2, 0x2, 0x2, 0x492, 0x490, 0x3, 0x2, 0x2, 0x2, 0x493, 0x495, 
    0x5, 0x60, 0x31, 0x2, 0x494, 0x496, 0x7, 0x54, 0x2, 0x2, 0x495, 0x494, 
    0x3, 0x2, 0x2, 0x2, 0x495, 0x496, 0x3, 0x2, 0x2, 0x2, 0x496, 0x4a3, 
    0x3, 0x2, 0x2, 0x2, 0x497, 0x49b, 0x7, 0x88, 0x2, 0x2, 0x498, 0x49a, 
    0x7, 0x5f, 0x2, 0x2, 0x499, 0x498, 0x3, 0x2, 0x2, 0x2, 0x49a, 0x49d, 
    0x3, 0x2, 0x2, 0x2, 0x49b, 0x499, 0x3, 0x2, 0x2, 0x2, 0x49b, 0x49c, 
    0x3, 0x2, 0x2, 0x2, 0x49c, 0x49e, 0x3, 0x2, 0x2, 0x2, 0x49d, 0x49b, 
    0x3, 0x2, 0x2, 0x2, 0x49e, 0x4a0, 0x5, 0x60, 0x31, 0x2, 0x49f, 0x4a1, 
    0x7, 0x54, 0x2, 0x2, 0x4a0, 0x49f, 0x3, 0x2, 0x2, 0x2, 0x4a0, 0x4a1, 
    0x3, 0x2, 0x2, 0x2, 0x4a1, 0x4a3, 0x3, 0x2, 0x2, 0x2, 0x4a2, 0x47e, 
    0x3, 0x2, 0x2, 0x2, 0x4a2, 0x497, 0x3, 0x2, 0x2, 0x2, 0x4a3, 0x3f, 0x3, 
    0x2, 0x2, 0x2, 0x4a4, 0x4a8, 0x7, 0x96, 0x2, 0x2, 0x4a5, 0x4a7, 0x7, 
    0x5f, 0x2, 0x2, 0x4a6, 0x4a5, 0x3, 0x2, 0x2, 0x2, 0x4a7, 0x4aa, 0x3, 
    0x2, 0x2, 0x2, 0x4a8, 0x4a6, 0x3, 0x2, 0x2, 0x2, 0x4a8, 0x4a9, 0x3, 
    0x2, 0x2, 0x2, 0x4a9, 0x4ab, 0x3, 0x2, 0x2, 0x2, 0x4aa, 0x4a8, 0x3, 
    0x2, 0x2, 0x2, 0x4ab, 0x4af, 0x7, 0x55, 0x2, 0x2, 0x4ac, 0x4ae, 0x7, 
    0x5f, 0x2, 0x2, 0x4ad, 0x4ac, 0x3, 0x2, 0x2, 0x2, 0x4ae, 0x4b1, 0x3, 
    0x2, 0x2, 0x2, 0x4af, 0x4ad, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4b0, 0x3, 
    0x2, 0x2, 0x2, 0x4b0, 0x4b2, 0x3, 0x2, 0x2, 0x2, 0x4b1, 0x4af, 0x3, 
    0x2, 0x2, 0x2, 0x4b2, 0x4b6, 0x7, 0x88, 0x2, 0x2, 0x4b3, 0x4b5, 0x7, 
    0x5f, 0x2, 0x2, 0x4b4, 0x4b3, 0x3, 0x2, 0x2, 0x2, 0x4b5, 0x4b8, 0x3, 
    0x2, 0x2, 0x2, 0x4b6, 0x4b4, 0x3, 0x2, 0x2, 0x2, 0x4b6, 0x4b7, 0x3, 
    0x2, 0x2, 0x2, 0x4b7, 0x4b9, 0x3, 0x2, 0x2, 0x2, 0x4b8, 0x4b6, 0x3, 
    0x2, 0x2, 0x2, 0x4b9, 0x4bb, 0x5, 0x62, 0x32, 0x2, 0x4ba, 0x4bc, 0x7, 
    0x55, 0x2, 0x2, 0x4bb, 0x4ba, 0x3, 0x2, 0x2, 0x2, 0x4bb, 0x4bc, 0x3, 
    0x2, 0x2, 0x2, 0x4bc, 0x4c8, 0x3, 0x2, 0x2, 0x2, 0x4bd, 0x4c1, 0x7, 
    0x88, 0x2, 0x2, 0x4be, 0x4c0, 0x7, 0x5f, 0x2, 0x2, 0x4bf, 0x4be, 0x3, 
    0x2, 0x2, 0x2, 0x4c0, 0x4c3, 0x3, 0x2, 0x2, 0x2, 0x4c1, 0x4bf, 0x3, 
    0x2, 0x2, 0x2, 0x4c1, 0x4c2, 0x3, 0x2, 0x2, 0x2, 0x4c2, 0x4c4, 0x3, 
    0x2, 0x2, 0x2, 0x4c3, 0x4c1, 0x3, 0x2, 0x2, 0x2, 0x4c4, 0x4c5, 0x5, 
    0x62, 0x32, 0x2, 0x4c5, 0x4c6, 0x7, 0x55, 0x2, 0x2, 0x4c6, 0x4c8, 0x3, 
    0x2, 0x2, 0x2, 0x4c7, 0x4a4, 0x3, 0x2, 0x2, 0x2, 0x4c7, 0x4bd, 0x3, 
    0x2, 0x2, 0x2, 0x4c8, 0x41, 0x3, 0x2, 0x2, 0x2, 0x4c9, 0x4cd, 0x7, 0xe, 
    0x2, 0x2, 0x4ca, 0x4cc, 0x7, 0x5f, 0x2, 0x2, 0x4cb, 0x4ca, 0x3, 0x2, 
    0x2, 0x2, 0x4cc, 0x4cf, 0x3, 0x2, 0x2, 0x2, 0x4cd, 0x4cb, 0x3, 0x2, 
    0x2, 0x2, 0x4cd, 0x4ce, 0x3, 0x2, 0x2, 0x2, 0x4ce, 0x4d0, 0x3, 0x2, 
    0x2, 0x2, 0x4cf, 0x4cd, 0x3, 0x2, 0x2, 0x2, 0x4d0, 0x4d4, 0x7, 0x88, 
    0x2, 0x2, 0x4d1, 0x4d3, 0x7, 0x5f, 0x2, 0x2, 0x4d2, 0x4d1, 0x3, 0x2, 
    0x2, 0x2, 0x4d3, 0x4d6, 0x3, 0x2, 0x2, 0x2, 0x4d4, 0x4d2, 0x3, 0x2, 
    0x2, 0x2, 0x4d4, 0x4d5, 0x3, 0x2, 0x2, 0x2, 0x4d5, 0x4d7, 0x3, 0x2, 
    0x2, 0x2, 0x4d6, 0x4d4, 0x3, 0x2, 0x2, 0x2, 0x4d7, 0x4db, 0x5, 0x66, 
    0x34, 0x2, 0x4d8, 0x4da, 0x7, 0x5f, 0x2, 0x2, 0x4d9, 0x4d8, 0x3, 0x2, 
    0x2, 0x2, 0x4da, 0x4dd, 0x3, 0x2, 0x2, 0x2, 0x4db, 0x4d9, 0x3, 0x2, 
    0x2, 0x2, 0x4db, 0x4dc, 0x3, 0x2, 0x2, 0x2, 0x4dc, 0x4de, 0x3, 0x2, 
    0x2, 0x2, 0x4dd, 0x4db, 0x3, 0x2, 0x2, 0x2, 0x4de, 0x4df, 0x7, 0x95, 
    0x2, 0x2, 0x4df, 0x4e0, 0x8, 0x22, 0x1, 0x2, 0x4e0, 0x43, 0x3, 0x2, 
    0x2, 0x2, 0x4e1, 0x4e3, 0x7, 0xa, 0x2, 0x2, 0x4e2, 0x4e4, 0x7, 0x5f, 
    0x2, 0x2, 0x4e3, 0x4e2, 0x3, 0x2, 0x2, 0x2, 0x4e4, 0x4e5, 0x3, 0x2, 
    0x2, 0x2, 0x4e5, 0x4e3, 0x3, 0x2, 0x2, 0x2, 0x4e5, 0x4e6, 0x3, 0x2, 
    0x2, 0x2, 0x4e6, 0x4e7, 0x3, 0x2, 0x2, 0x2, 0x4e7, 0x4eb, 0x5, 0x4a, 
    0x26, 0x2, 0x4e8, 0x4ea, 0x7, 0x5f, 0x2, 0x2, 0x4e9, 0x4e8, 0x3, 0x2, 
    0x2, 0x2, 0x4ea, 0x4ed, 0x3, 0x2, 0x2, 0x2, 0x4eb, 0x4e9, 0x3, 0x2, 
    0x2, 0x2, 0x4eb, 0x4ec, 0x3, 0x2, 0x2, 0x2, 0x4ec, 0x4ee, 0x3, 0x2, 
    0x2, 0x2, 0x4ed, 0x4eb, 0x3, 0x2, 0x2, 0x2, 0x4ee, 0x4ef, 0x7, 0x95, 
    0x2, 0x2, 0x4ef, 0x4f0, 0x8, 0x23, 0x1, 0x2, 0x4f0, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0x4f1, 0x4f2, 0x7, 0xf, 0x2, 0x2, 0x4f2, 0x4f3, 0x5, 0x48, 
    0x25, 0x2, 0x4f3, 0x4f4, 0x7, 0x95, 0x2, 0x2, 0x4f4, 0x47, 0x3, 0x2, 
    0x2, 0x2, 0x4f5, 0x4f7, 0x5, 0x4a, 0x26, 0x2, 0x4f6, 0x4f5, 0x3, 0x2, 
    0x2, 0x2, 0x4f6, 0x4f7, 0x3, 0x2, 0x2, 0x2, 0x4f7, 0x4f8, 0x3, 0x2, 
    0x2, 0x2, 0x4f8, 0x4fa, 0x7, 0x97, 0x2, 0x2, 0x4f9, 0x4f6, 0x3, 0x2, 
    0x2, 0x2, 0x4f9, 0x4fa, 0x3, 0x2, 0x2, 0x2, 0x4fa, 0x50b, 0x3, 0x2, 
    0x2, 0x2, 0x4fb, 0x50c, 0x7, 0x75, 0x2, 0x2, 0x4fc, 0x508, 0x7, 0x9d, 
    0x2, 0x2, 0x4fd, 0x502, 0x5, 0x48, 0x25, 0x2, 0x4fe, 0x4ff, 0x7, 0x94, 
    0x2, 0x2, 0x4ff, 0x501, 0x5, 0x48, 0x25, 0x2, 0x500, 0x4fe, 0x3, 0x2, 
    0x2, 0x2, 0x501, 0x504, 0x3, 0x2, 0x2, 0x2, 0x502, 0x500, 0x3, 0x2, 
    0x2, 0x2, 0x502, 0x503, 0x3, 0x2, 0x2, 0x2, 0x503, 0x506, 0x3, 0x2, 
    0x2, 0x2, 0x504, 0x502, 0x3, 0x2, 0x2, 0x2, 0x505, 0x507, 0x7, 0x94, 
    0x2, 0x2, 0x506, 0x505, 0x3, 0x2, 0x2, 0x2, 0x506, 0x507, 0x3, 0x2, 
    0x2, 0x2, 0x507, 0x509, 0x3, 0x2, 0x2, 0x2, 0x508, 0x4fd, 0x3, 0x2, 
    0x2, 0x2, 0x508, 0x509, 0x3, 0x2, 0x2, 0x2, 0x509, 0x50a, 0x3, 0x2, 
    0x2, 0x2, 0x50a, 0x50c, 0x7, 0x9e, 0x2, 0x2, 0x50b, 0x4fb, 0x3, 0x2, 
    0x2, 0x2, 0x50b, 0x4fc, 0x3, 0x2, 0x2, 0x2, 0x50c, 0x513, 0x3, 0x2, 
    0x2, 0x2, 0x50d, 0x510, 0x5, 0x4a, 0x26, 0x2, 0x50e, 0x50f, 0x7, 0x4, 
    0x2, 0x2, 0x50f, 0x511, 0x5, 0x66, 0x34, 0x2, 0x510, 0x50e, 0x3, 0x2, 
    0x2, 0x2, 0x510, 0x511, 0x3, 0x2, 0x2, 0x2, 0x511, 0x513, 0x3, 0x2, 
    0x2, 0x2, 0x512, 0x4f9, 0x3, 0x2, 0x2, 0x2, 0x512, 0x50d, 0x3, 0x2, 
    0x2, 0x2, 0x513, 0x49, 0x3, 0x2, 0x2, 0x2, 0x514, 0x516, 0x7, 0x97, 
    0x2, 0x2, 0x515, 0x514, 0x3, 0x2, 0x2, 0x2, 0x515, 0x516, 0x3, 0x2, 
    0x2, 0x2, 0x516, 0x517, 0x3, 0x2, 0x2, 0x2, 0x517, 0x518, 0x5, 0x66, 
    0x34, 0x2, 0x518, 0x51f, 0x8, 0x26, 0x1, 0x2, 0x519, 0x51a, 0x7, 0x97, 
    0x2, 0x2, 0x51a, 0x51b, 0x5, 0x66, 0x34, 0x2, 0x51b, 0x51c, 0x8, 0x26, 
    0x1, 0x2, 0x51c, 0x51e, 0x3, 0x2, 0x2, 0x2, 0x51d, 0x519, 0x3, 0x2, 
    0x2, 0x2, 0x51e, 0x521, 0x3, 0x2, 0x2, 0x2, 0x51f, 0x51d, 0x3, 0x2, 
    0x2, 0x2, 0x51f, 0x520, 0x3, 0x2, 0x2, 0x2, 0x520, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x521, 0x51f, 0x3, 0x2, 0x2, 0x2, 0x522, 0x523, 0x9, 0x2, 0x2, 
    0x2, 0x523, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x524, 0x525, 0x7, 0x60, 0x2, 
    0x2, 0x525, 0x526, 0x8, 0x28, 0x1, 0x2, 0x526, 0x4f, 0x3, 0x2, 0x2, 
    0x2, 0x527, 0x528, 0x7, 0x6b, 0x2, 0x2, 0x528, 0x529, 0x8, 0x29, 0x1, 
    0x2, 0x529, 0x51, 0x3, 0x2, 0x2, 0x2, 0x52a, 0x52b, 0x7, 0x6b, 0x2, 
    0x2, 0x52b, 0x52c, 0x8, 0x2a, 0x1, 0x2, 0x52c, 0x53, 0x3, 0x2, 0x2, 
    0x2, 0x52d, 0x52f, 0x7, 0x74, 0x2, 0x2, 0x52e, 0x52d, 0x3, 0x2, 0x2, 
    0x2, 0x52e, 0x52f, 0x3, 0x2, 0x2, 0x2, 0x52f, 0x530, 0x3, 0x2, 0x2, 
    0x2, 0x530, 0x538, 0x9, 0x3, 0x2, 0x2, 0x531, 0x532, 0x7, 0x6f, 0x2, 
    0x2, 0x532, 0x538, 0x9, 0x4, 0x2, 0x2, 0x533, 0x534, 0x7, 0x70, 0x2, 
    0x2, 0x534, 0x538, 0x9, 0x5, 0x2, 0x2, 0x535, 0x536, 0x7, 0x71, 0x2, 
    0x2, 0x536, 0x538, 0x9, 0x6, 0x2, 0x2, 0x537, 0x52e, 0x3, 0x2, 0x2, 
    0x2, 0x537, 0x531, 0x3, 0x2, 0x2, 0x2, 0x537, 0x533, 0x3, 0x2, 0x2, 
    0x2, 0x537, 0x535, 0x3, 0x2, 0x2, 0x2, 0x538, 0x539, 0x3, 0x2, 0x2, 
    0x2, 0x539, 0x53a, 0x8, 0x2b, 0x1, 0x2, 0x53a, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x53b, 0x53d, 0x7, 0x74, 0x2, 0x2, 0x53c, 0x53b, 0x3, 0x2, 0x2, 
    0x2, 0x53c, 0x53d, 0x3, 0x2, 0x2, 0x2, 0x53d, 0x53e, 0x3, 0x2, 0x2, 
    0x2, 0x53e, 0x546, 0x9, 0x3, 0x2, 0x2, 0x53f, 0x540, 0x7, 0x6f, 0x2, 
    0x2, 0x540, 0x546, 0x9, 0x4, 0x2, 0x2, 0x541, 0x542, 0x7, 0x70, 0x2, 
    0x2, 0x542, 0x546, 0x9, 0x5, 0x2, 0x2, 0x543, 0x544, 0x7, 0x71, 0x2, 
    0x2, 0x544, 0x546, 0x9, 0x6, 0x2, 0x2, 0x545, 0x53c, 0x3, 0x2, 0x2, 
    0x2, 0x545, 0x53f, 0x3, 0x2, 0x2, 0x2, 0x545, 0x541, 0x3, 0x2, 0x2, 
    0x2, 0x545, 0x543, 0x3, 0x2, 0x2, 0x2, 0x546, 0x547, 0x3, 0x2, 0x2, 
    0x2, 0x547, 0x548, 0x8, 0x2c, 0x1, 0x2, 0x548, 0x57, 0x3, 0x2, 0x2, 
    0x2, 0x549, 0x54b, 0x7, 0x74, 0x2, 0x2, 0x54a, 0x549, 0x3, 0x2, 0x2, 
    0x2, 0x54a, 0x54b, 0x3, 0x2, 0x2, 0x2, 0x54b, 0x54c, 0x3, 0x2, 0x2, 
    0x2, 0x54c, 0x554, 0x9, 0x3, 0x2, 0x2, 0x54d, 0x54e, 0x7, 0x6f, 0x2, 
    0x2, 0x54e, 0x554, 0x9, 0x4, 0x2, 0x2, 0x54f, 0x550, 0x7, 0x70, 0x2, 
    0x2, 0x550, 0x554, 0x9, 0x5, 0x2, 0x2, 0x551, 0x552, 0x7, 0x71, 0x2, 
    0x2, 0x552, 0x554, 0x9, 0x6, 0x2, 0x2, 0x553, 0x54a, 0x3, 0x2, 0x2, 
    0x2, 0x553, 0x54d, 0x3, 0x2, 0x2, 0x2, 0x553, 0x54f, 0x3, 0x2, 0x2, 
    0x2, 0x553, 0x551, 0x3, 0x2, 0x2, 0x2, 0x554, 0x555, 0x3, 0x2, 0x2, 
    0x2, 0x555, 0x556, 0x8, 0x2d, 0x1, 0x2, 0x556, 0x59, 0x3, 0x2, 0x2, 
    0x2, 0x557, 0x559, 0x7, 0x74, 0x2, 0x2, 0x558, 0x557, 0x3, 0x2, 0x2, 
    0x2, 0x558, 0x559, 0x3, 0x2, 0x2, 0x2, 0x559, 0x55a, 0x3, 0x2, 0x2, 
    0x2, 0x55a, 0x562, 0x9, 0x3, 0x2, 0x2, 0x55b, 0x55c, 0x7, 0x6f, 0x2, 
    0x2, 0x55c, 0x562, 0x9, 0x4, 0x2, 0x2, 0x55d, 0x55e, 0x7, 0x70, 0x2, 
    0x2, 0x55e, 0x562, 0x9, 0x5, 0x2, 0x2, 0x55f, 0x560, 0x7, 0x71, 0x2, 
    0x2, 0x560, 0x562, 0x9, 0x6, 0x2, 0x2, 0x561, 0x558, 0x3, 0x2, 0x2, 
    0x2, 0x561, 0x55b, 0x3, 0x2, 0x2, 0x2, 0x561, 0x55d, 0x3, 0x2, 0x2, 
    0x2, 0x561, 0x55f, 0x3, 0x2, 0x2, 0x2, 0x562, 0x563, 0x3, 0x2, 0x2, 
    0x2, 0x563, 0x564, 0x8, 0x2e, 0x1, 0x2, 0x564, 0x5b, 0x3, 0x2, 0x2, 
    0x2, 0x565, 0x567, 0x7, 0x74, 0x2, 0x2, 0x566, 0x565, 0x3, 0x2, 0x2, 
    0x2, 0x566, 0x567, 0x3, 0x2, 0x2, 0x2, 0x567, 0x568, 0x3, 0x2, 0x2, 
    0x2, 0x568, 0x570, 0x9, 0x3, 0x2, 0x2, 0x569, 0x56a, 0x7, 0x6f, 0x2, 
    0x2, 0x56a, 0x570, 0x9, 0x4, 0x2, 0x2, 0x56b, 0x56c, 0x7, 0x70, 0x2, 
    0x2, 0x56c, 0x570, 0x9, 0x5, 0x2, 0x2, 0x56d, 0x56e, 0x7, 0x71, 0x2, 
    0x2, 0x56e, 0x570, 0x9, 0x6, 0x2, 0x2, 0x56f, 0x566, 0x3, 0x2, 0x2, 
    0x2, 0x56f, 0x569, 0x3, 0x2, 0x2, 0x2, 0x56f, 0x56b, 0x3, 0x2, 0x2, 
    0x2, 0x56f, 0x56d, 0x3, 0x2, 0x2, 0x2, 0x570, 0x571, 0x3, 0x2, 0x2, 
    0x2, 0x571, 0x572, 0x8, 0x2f, 0x1, 0x2, 0x572, 0x5d, 0x3, 0x2, 0x2, 
    0x2, 0x573, 0x575, 0x7, 0x74, 0x2, 0x2, 0x574, 0x573, 0x3, 0x2, 0x2, 
    0x2, 0x574, 0x575, 0x3, 0x2, 0x2, 0x2, 0x575, 0x576, 0x3, 0x2, 0x2, 
    0x2, 0x576, 0x57e, 0x9, 0x3, 0x2, 0x2, 0x577, 0x578, 0x7, 0x6f, 0x2, 
    0x2, 0x578, 0x57e, 0x9, 0x4, 0x2, 0x2, 0x579, 0x57a, 0x7, 0x70, 0x2, 
    0x2, 0x57a, 0x57e, 0x9, 0x5, 0x2, 0x2, 0x57b, 0x57c, 0x7, 0x71, 0x2, 
    0x2, 0x57c, 0x57e, 0x9, 0x6, 0x2, 0x2, 0x57d, 0x574, 0x3, 0x2, 0x2, 
    0x2, 0x57d, 0x577, 0x3, 0x2, 0x2, 0x2, 0x57d, 0x579, 0x3, 0x2, 0x2, 
    0x2, 0x57d, 0x57b, 0x3, 0x2, 0x2, 0x2, 0x57e, 0x57f, 0x3, 0x2, 0x2, 
    0x2, 0x57f, 0x580, 0x8, 0x30, 0x1, 0x2, 0x580, 0x5f, 0x3, 0x2, 0x2, 
    0x2, 0x581, 0x583, 0x7, 0x74, 0x2, 0x2, 0x582, 0x581, 0x3, 0x2, 0x2, 
    0x2, 0x582, 0x583, 0x3, 0x2, 0x2, 0x2, 0x583, 0x584, 0x3, 0x2, 0x2, 
    0x2, 0x584, 0x58c, 0x9, 0x3, 0x2, 0x2, 0x585, 0x586, 0x7, 0x6f, 0x2, 
    0x2, 0x586, 0x58c, 0x9, 0x4, 0x2, 0x2, 0x587, 0x588, 0x7, 0x70, 0x2, 
    0x2, 0x588, 0x58c, 0x9, 0x5, 0x2, 0x2, 0x589, 0x58a, 0x7, 0x71, 0x2, 
    0x2, 0x58a, 0x58c, 0x9, 0x6, 0x2, 0x2, 0x58b, 0x582, 0x3, 0x2, 0x2, 
    0x2, 0x58b, 0x585, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x587, 0x3, 0x2, 0x2, 
    0x2, 0x58b, 0x589, 0x3, 0x2, 0x2, 0x2, 0x58c, 0x58d, 0x3, 0x2, 0x2, 
    0x2, 0x58d, 0x58e, 0x8, 0x31, 0x1, 0x2, 0x58e, 0x61, 0x3, 0x2, 0x2, 
    0x2, 0x58f, 0x591, 0x7, 0x74, 0x2, 0x2, 0x590, 0x58f, 0x3, 0x2, 0x2, 
    0x2, 0x590, 0x591, 0x3, 0x2, 0x2, 0x2, 0x591, 0x592, 0x3, 0x2, 0x2, 
    0x2, 0x592, 0x59a, 0x9, 0x3, 0x2, 0x2, 0x593, 0x594, 0x7, 0x6f, 0x2, 
    0x2, 0x594, 0x59a, 0x9, 0x4, 0x2, 0x2, 0x595, 0x596, 0x7, 0x70, 0x2, 
    0x2, 0x596, 0x59a, 0x9, 0x5, 0x2, 0x2, 0x597, 0x598, 0x7, 0x71, 0x2, 
    0x2, 0x598, 0x59a, 0x9, 0x6, 0x2, 0x2, 0x599, 0x590, 0x3, 0x2, 0x2, 
    0x2, 0x599, 0x593, 0x3, 0x2, 0x2, 0x2, 0x599, 0x595, 0x3, 0x2, 0x2, 
    0x2, 0x599, 0x597, 0x3, 0x2, 0x2, 0x2, 0x59a, 0x59b, 0x3, 0x2, 0x2, 
    0x2, 0x59b, 0x59c, 0x8, 0x32, 0x1, 0x2, 0x59c, 0x63, 0x3, 0x2, 0x2, 
    0x2, 0x59d, 0x59e, 0x7, 0x61, 0x2, 0x2, 0x59e, 0x5a2, 0x8, 0x33, 0x1, 
    0x2, 0x59f, 0x5a0, 0x7, 0x62, 0x2, 0x2, 0x5a0, 0x5a2, 0x8, 0x33, 0x1, 
    0x2, 0x5a1, 0x59d, 0x3, 0x2, 0x2, 0x2, 0x5a1, 0x59f, 0x3, 0x2, 0x2, 
    0x2, 0x5a2, 0x65, 0x3, 0x2, 0x2, 0x2, 0x5a3, 0x5a7, 0x7, 0x56, 0x2, 
    0x2, 0x5a4, 0x5a5, 0x7, 0x72, 0x2, 0x2, 0x5a5, 0x5a7, 0x7, 0x56, 0x2, 
    0x2, 0x5a6, 0x5a3, 0x3, 0x2, 0x2, 0x2, 0x5a6, 0x5a4, 0x3, 0x2, 0x2, 
    0x2, 0x5a7, 0x67, 0x3, 0x2, 0x2, 0x2, 0x5a8, 0x5a9, 0x9, 0x7, 0x2, 0x2, 
    0x5a9, 0x69, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x6f, 0x75, 0x7a, 0x80, 0x86, 
    0x8e, 0x94, 0x9d, 0xae, 0xb3, 0xbc, 0xc3, 0xca, 0xdc, 0xe1, 0xe8, 0xed, 
    0xf3, 0xfd, 0x104, 0x10b, 0x11d, 0x122, 0x129, 0x12e, 0x138, 0x13f, 
    0x146, 0x14d, 0x157, 0x15e, 0x165, 0x16c, 0x173, 0x17a, 0x184, 0x18b, 
    0x193, 0x1a5, 0x1ac, 0x1b3, 0x1b7, 0x1bb, 0x1c1, 0x1c8, 0x1cf, 0x1d6, 
    0x1d9, 0x1df, 0x1e7, 0x1ee, 0x1f3, 0x1f9, 0x203, 0x20a, 0x211, 0x217, 
    0x21b, 0x221, 0x229, 0x230, 0x235, 0x23f, 0x246, 0x24d, 0x254, 0x25b, 
    0x262, 0x266, 0x26e, 0x275, 0x27c, 0x283, 0x28a, 0x291, 0x298, 0x29f, 
    0x2a3, 0x2ae, 0x2b5, 0x2c0, 0x2df, 0x308, 0x30e, 0x312, 0x317, 0x31e, 
    0x327, 0x32b, 0x330, 0x337, 0x340, 0x344, 0x349, 0x350, 0x359, 0x360, 
    0x367, 0x36c, 0x372, 0x377, 0x379, 0x37f, 0x386, 0x38d, 0x392, 0x398, 
    0x39e, 0x3a4, 0x3ab, 0x3b2, 0x3b7, 0x3bd, 0x3c3, 0x3c9, 0x3d0, 0x3d7, 
    0x3dc, 0x3e2, 0x3e8, 0x3ee, 0x3f5, 0x3fc, 0x401, 0x407, 0x40d, 0x413, 
    0x41a, 0x421, 0x426, 0x42c, 0x432, 0x438, 0x43f, 0x446, 0x44b, 0x451, 
    0x457, 0x45d, 0x464, 0x46b, 0x470, 0x476, 0x47c, 0x482, 0x489, 0x490, 
    0x495, 0x49b, 0x4a0, 0x4a2, 0x4a8, 0x4af, 0x4b6, 0x4bb, 0x4c1, 0x4c7, 
    0x4cd, 0x4d4, 0x4db, 0x4e5, 0x4eb, 0x4f6, 0x4f9, 0x502, 0x506, 0x508, 
    0x50b, 0x510, 0x512, 0x515, 0x51f, 0x52e, 0x537, 0x53c, 0x545, 0x54a, 
    0x553, 0x558, 0x561, 0x566, 0x56f, 0x574, 0x57d, 0x582, 0x58b, 0x590, 
    0x599, 0x5a1, 0x5a6, 
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
