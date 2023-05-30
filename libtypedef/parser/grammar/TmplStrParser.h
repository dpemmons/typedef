
#include "libtypedef/parser/tmpl_str_table.h"


// Generated from ./libtypedef/parser/grammar/TmplStrParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TmplStrParser : public antlr4::Parser {
public:
  enum {
    OPEN = 1, TEXT = 2, CLOSE = 3, SLASH = 4, KW_FOR = 5, KW_IN = 6, KW_IF = 7, 
    KW_ELSE = 8, NON_KEYWORD_IDENTIFIER = 9, RAW_ESCAPE = 10, WS = 11
  };

  enum {
    RuleTmpl = 0, RuleItem = 1, RuleInsertion = 2, RuleForBlock = 3, RuleForClose = 4, 
    RuleFullIIfBlock = 5, RuleIfOpen = 6, RuleIfBlock = 7, RuleElseIfStmt = 8, 
    RuleElseIfBlock = 9, RuleElseStmt = 10, RuleElseBlock = 11, RuleIfClose = 12, 
    RuleTextItem = 13, RuleIdentifier = 14
  };

  TmplStrParser(antlr4::TokenStream *input);
  ~TmplStrParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class TmplContext;
  class ItemContext;
  class InsertionContext;
  class ForBlockContext;
  class ForCloseContext;
  class FullIIfBlockContext;
  class IfOpenContext;
  class IfBlockContext;
  class ElseIfStmtContext;
  class ElseIfBlockContext;
  class ElseStmtContext;
  class ElseBlockContext;
  class IfCloseContext;
  class TextItemContext;
  class IdentifierContext; 

  class  TmplContext : public antlr4::ParserRuleContext {
  public:
    td::TmplStrTablePtr tbl;
    TmplStrParser::ItemContext *itemContext = nullptr;;
    TmplContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ItemContext *> item();
    ItemContext* item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TmplContext* tmpl();

  class  ItemContext : public antlr4::ParserRuleContext {
  public:
    td::TmplStrTable::ItemPtr itm;
    TmplStrParser::TextItemContext *textItemContext = nullptr;;
    TmplStrParser::InsertionContext *insertionContext = nullptr;;
    TmplStrParser::ForBlockContext *forBlockContext = nullptr;;
    TmplStrParser::FullIIfBlockContext *fullIIfBlockContext = nullptr;;
    ItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TextItemContext *textItem();
    InsertionContext *insertion();
    ForBlockContext *forBlock();
    FullIIfBlockContext *fullIIfBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ItemContext* item();

  class  InsertionContext : public antlr4::ParserRuleContext {
  public:
    td::TmplStrTable::InsertionPtr ins;
    TmplStrParser::IdentifierContext *identifierContext = nullptr;;
    InsertionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *CLOSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertionContext* insertion();

  class  ForBlockContext : public antlr4::ParserRuleContext {
  public:
    td::TmplStrTable::ForBlockPtr for_block;
    TmplStrParser::IdentifierContext *identifierContext = nullptr;;
    TmplStrParser::ItemContext *itemContext = nullptr;;
    ForBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ForCloseContext *forClose();
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *KW_FOR();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *KW_IN();
    antlr4::tree::TerminalNode *CLOSE();
    std::vector<ItemContext *> item();
    ItemContext* item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForBlockContext* forBlock();

  class  ForCloseContext : public antlr4::ParserRuleContext {
  public:
    ForCloseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *KW_FOR();
    antlr4::tree::TerminalNode *CLOSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForCloseContext* forClose();

  class  FullIIfBlockContext : public antlr4::ParserRuleContext {
  public:
    td::TmplStrTable::IfBlockPtr if_block;
    TmplStrParser::IfBlockContext *ifBlockContext = nullptr;;
    TmplStrParser::ElseIfBlockContext *elseIfBlockContext = nullptr;;
    TmplStrParser::ElseBlockContext *elseBlockContext = nullptr;;
    FullIIfBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfBlockContext *ifBlock();
    IfCloseContext *ifClose();
    std::vector<ElseIfBlockContext *> elseIfBlock();
    ElseIfBlockContext* elseIfBlock(size_t i);
    ElseBlockContext *elseBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FullIIfBlockContext* fullIIfBlock();

  class  IfOpenContext : public antlr4::ParserRuleContext {
  public:
    td::TmplStrTable::StrPtr conditional;
    TmplStrParser::IdentifierContext *identifierContext = nullptr;;
    IfOpenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *KW_IF();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *CLOSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfOpenContext* ifOpen();

  class  IfBlockContext : public antlr4::ParserRuleContext {
  public:
    td::TmplStrTable::IfBlockPtr if_block;
    TmplStrParser::IfOpenContext *ifOpenContext = nullptr;;
    TmplStrParser::ItemContext *itemContext = nullptr;;
    IfBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfOpenContext *ifOpen();
    std::vector<ItemContext *> item();
    ItemContext* item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfBlockContext* ifBlock();

  class  ElseIfStmtContext : public antlr4::ParserRuleContext {
  public:
    td::TmplStrTable::StrPtr conditional;
    TmplStrParser::IdentifierContext *identifierContext = nullptr;;
    ElseIfStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *KW_ELSE();
    antlr4::tree::TerminalNode *KW_IF();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *CLOSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseIfStmtContext* elseIfStmt();

  class  ElseIfBlockContext : public antlr4::ParserRuleContext {
  public:
    td::TmplStrTable::ElseIfBlockPtr else_if_block;
    TmplStrParser::ElseIfStmtContext *elseIfStmtContext = nullptr;;
    TmplStrParser::ItemContext *itemContext = nullptr;;
    ElseIfBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElseIfStmtContext *elseIfStmt();
    std::vector<ItemContext *> item();
    ItemContext* item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseIfBlockContext* elseIfBlock();

  class  ElseStmtContext : public antlr4::ParserRuleContext {
  public:
    ElseStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *KW_ELSE();
    antlr4::tree::TerminalNode *CLOSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseStmtContext* elseStmt();

  class  ElseBlockContext : public antlr4::ParserRuleContext {
  public:
    std::vector<td::TmplStrTable::ItemPtr> else_body_items;
    TmplStrParser::ItemContext *itemContext = nullptr;;
    ElseBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElseStmtContext *elseStmt();
    std::vector<ItemContext *> item();
    ItemContext* item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseBlockContext* elseBlock();

  class  IfCloseContext : public antlr4::ParserRuleContext {
  public:
    IfCloseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *KW_IF();
    antlr4::tree::TerminalNode *CLOSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfCloseContext* ifClose();

  class  TextItemContext : public antlr4::ParserRuleContext {
  public:
    td::TmplStrTable::StrPtr txt;
    antlr4::Token *textToken = nullptr;;
    TextItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TextItemContext* textItem();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    td::TmplStrTable::StrPtr id;
    antlr4::Token *nki = nullptr;;
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RAW_ESCAPE();
    antlr4::tree::TerminalNode *NON_KEYWORD_IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

