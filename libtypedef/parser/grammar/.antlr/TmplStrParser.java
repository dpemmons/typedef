// Generated from /home/dpemmons/src/typedef/libtypedef/parser/grammar/TmplStrParser.g4 by ANTLR 4.9.2

#include "libtypedef/parser/tmpl_str_table.h"

import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class TmplStrParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.9.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		OPEN=1, TEXT=2, CLOSE=3, SLASH=4, KW_FOR=5, KW_IN=6, KW_IF=7, KW_ELSE=8, 
		NON_KEYWORD_IDENTIFIER=9, RAW_ESCAPE=10, WS=11, COMMA=12;
	public static final int
		RULE_tmpl = 0, RULE_item = 1, RULE_insertion = 2, RULE_forBlock = 3, RULE_forClose = 4, 
		RULE_fullIIfBlock = 5, RULE_ifOpen = 6, RULE_ifBlock = 7, RULE_elseIfStmt = 8, 
		RULE_elseIfBlock = 9, RULE_elseStmt = 10, RULE_elseBlock = 11, RULE_ifClose = 12, 
		RULE_textItem = 13, RULE_identifier = 14;
	private static String[] makeRuleNames() {
		return new String[] {
			"tmpl", "item", "insertion", "forBlock", "forClose", "fullIIfBlock", 
			"ifOpen", "ifBlock", "elseIfStmt", "elseIfBlock", "elseStmt", "elseBlock", 
			"ifClose", "textItem", "identifier"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'<'", null, "'>'", "'/'", "'for'", "'in'", "'if'", "'else'", null, 
			"'r#'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "OPEN", "TEXT", "CLOSE", "SLASH", "KW_FOR", "KW_IN", "KW_IF", "KW_ELSE", 
			"NON_KEYWORD_IDENTIFIER", "RAW_ESCAPE", "WS", "COMMA"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "TmplStrParser.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public TmplStrParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class TmplContext extends ParserRuleContext {
		public td::TmplStrTablePtr tbl;
		public ItemContext item;
		public List<ItemContext> item() {
			return getRuleContexts(ItemContext.class);
		}
		public ItemContext item(int i) {
			return getRuleContext(ItemContext.class,i);
		}
		public TmplContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmpl; }
	}

	public final TmplContext tmpl() throws RecognitionException {
		TmplContext _localctx = new TmplContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_tmpl);
		((TmplContext)_localctx).tbl =  std::make_shared<td::TmplStrTable>();
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(35);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==OPEN || _la==TEXT) {
				{
				{
				setState(30);
				((TmplContext)_localctx).item = item();
				_localctx.tbl->items.push_back(((TmplContext)_localctx).item->itm);
				}
				}
				setState(37);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ItemContext extends ParserRuleContext {
		public td::TmplStrTable::ItemPtr itm;
		public TextItemContext textItem;
		public InsertionContext insertion;
		public ForBlockContext forBlock;
		public FullIIfBlockContext fullIIfBlock;
		public TextItemContext textItem() {
			return getRuleContext(TextItemContext.class,0);
		}
		public InsertionContext insertion() {
			return getRuleContext(InsertionContext.class,0);
		}
		public ForBlockContext forBlock() {
			return getRuleContext(ForBlockContext.class,0);
		}
		public FullIIfBlockContext fullIIfBlock() {
			return getRuleContext(FullIIfBlockContext.class,0);
		}
		public ItemContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_item; }
	}

	public final ItemContext item() throws RecognitionException {
		ItemContext _localctx = new ItemContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_item);
		((ItemContext)_localctx).itm =  std::make_shared<td::TmplStrTable::Item>();
		try {
			setState(50);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(38);
				((ItemContext)_localctx).textItem = textItem();
				_localctx.itm->text = ((ItemContext)_localctx).textItem->txt;
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(41);
				((ItemContext)_localctx).insertion = insertion();
				_localctx.itm->insertion = ((ItemContext)_localctx).insertion->ins;
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(44);
				((ItemContext)_localctx).forBlock = forBlock();
				_localctx.itm->for_block = ((ItemContext)_localctx).forBlock->for_block;
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(47);
				((ItemContext)_localctx).fullIIfBlock = fullIIfBlock();
				_localctx.itm->if_block  = ((ItemContext)_localctx).fullIIfBlock->if_block;
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InsertionContext extends ParserRuleContext {
		public td::TmplStrTable::InsertionPtr ins;
		public IdentifierContext identifier;
		public TerminalNode OPEN() { return getToken(TmplStrParser.OPEN, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode CLOSE() { return getToken(TmplStrParser.CLOSE, 0); }
		public InsertionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_insertion; }
	}

	public final InsertionContext insertion() throws RecognitionException {
		InsertionContext _localctx = new InsertionContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_insertion);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(52);
			match(OPEN);
			setState(53);
			((InsertionContext)_localctx).identifier = identifier();
			setState(54);
			match(CLOSE);

					((InsertionContext)_localctx).ins =  std::make_shared<td::TmplStrTable::Insertion>();
					_localctx.ins->identifier = ((InsertionContext)_localctx).identifier.id;
				
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ForBlockContext extends ParserRuleContext {
		public td::TmplStrTable::ForBlockPtr for_block;
		public IdentifierContext identifier;
		public ItemContext item;
		public ForCloseContext forClose() {
			return getRuleContext(ForCloseContext.class,0);
		}
		public TerminalNode OPEN() { return getToken(TmplStrParser.OPEN, 0); }
		public TerminalNode KW_FOR() { return getToken(TmplStrParser.KW_FOR, 0); }
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public TerminalNode KW_IN() { return getToken(TmplStrParser.KW_IN, 0); }
		public TerminalNode CLOSE() { return getToken(TmplStrParser.CLOSE, 0); }
		public List<ItemContext> item() {
			return getRuleContexts(ItemContext.class);
		}
		public ItemContext item(int i) {
			return getRuleContext(ItemContext.class,i);
		}
		public TerminalNode COMMA() { return getToken(TmplStrParser.COMMA, 0); }
		public ForBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forBlock; }
	}

	public final ForBlockContext forBlock() throws RecognitionException {
		ForBlockContext _localctx = new ForBlockContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_forBlock);
		((ForBlockContext)_localctx).for_block =  std::make_shared<td::TmplStrTable::ForBlock>();
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(57);
			match(OPEN);
			setState(58);
			match(KW_FOR);
			setState(59);
			((ForBlockContext)_localctx).identifier = identifier();
			_localctx.for_block->loop_variable = ((ForBlockContext)_localctx).identifier->id;
			setState(65);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMA) {
				{
				setState(61);
				match(COMMA);
				setState(62);
				((ForBlockContext)_localctx).identifier = identifier();
				_localctx.for_block->loop_variable2 = ((ForBlockContext)_localctx).identifier->id;
				}
			}

			setState(67);
			match(KW_IN);
			setState(68);
			((ForBlockContext)_localctx).identifier = identifier();
			_localctx.for_block->iterable_identifier = ((ForBlockContext)_localctx).identifier->id;
					
			setState(70);
			match(CLOSE);
			}
			setState(77);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(72);
					((ForBlockContext)_localctx).item = item();
					_localctx.for_block->body_items.push_back(((ForBlockContext)_localctx).item->itm);
					}
					} 
				}
				setState(79);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			}
			setState(80);
			forClose();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ForCloseContext extends ParserRuleContext {
		public TerminalNode OPEN() { return getToken(TmplStrParser.OPEN, 0); }
		public TerminalNode SLASH() { return getToken(TmplStrParser.SLASH, 0); }
		public TerminalNode KW_FOR() { return getToken(TmplStrParser.KW_FOR, 0); }
		public TerminalNode CLOSE() { return getToken(TmplStrParser.CLOSE, 0); }
		public ForCloseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forClose; }
	}

	public final ForCloseContext forClose() throws RecognitionException {
		ForCloseContext _localctx = new ForCloseContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_forClose);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(82);
			match(OPEN);
			setState(83);
			match(SLASH);
			setState(84);
			match(KW_FOR);
			setState(85);
			match(CLOSE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FullIIfBlockContext extends ParserRuleContext {
		public td::TmplStrTable::IfBlockPtr if_block;
		public IfBlockContext ifBlock;
		public ElseIfBlockContext elseIfBlock;
		public ElseBlockContext elseBlock;
		public IfBlockContext ifBlock() {
			return getRuleContext(IfBlockContext.class,0);
		}
		public IfCloseContext ifClose() {
			return getRuleContext(IfCloseContext.class,0);
		}
		public List<ElseIfBlockContext> elseIfBlock() {
			return getRuleContexts(ElseIfBlockContext.class);
		}
		public ElseIfBlockContext elseIfBlock(int i) {
			return getRuleContext(ElseIfBlockContext.class,i);
		}
		public ElseBlockContext elseBlock() {
			return getRuleContext(ElseBlockContext.class,0);
		}
		public FullIIfBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fullIIfBlock; }
	}

	public final FullIIfBlockContext fullIIfBlock() throws RecognitionException {
		FullIIfBlockContext _localctx = new FullIIfBlockContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_fullIIfBlock);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(87);
			((FullIIfBlockContext)_localctx).ifBlock = ifBlock();
			((FullIIfBlockContext)_localctx).if_block =  ((FullIIfBlockContext)_localctx).ifBlock->if_block;
			setState(94);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(89);
					((FullIIfBlockContext)_localctx).elseIfBlock = elseIfBlock();
					_localctx.if_block->else_ifs.push_back(((FullIIfBlockContext)_localctx).elseIfBlock->else_if_block);
					}
					} 
				}
				setState(96);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			}
			setState(100);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				{
				setState(97);
				((FullIIfBlockContext)_localctx).elseBlock = elseBlock();
				_localctx.if_block->else_body_items = ((FullIIfBlockContext)_localctx).elseBlock->else_body_items;
				}
				break;
			}
			setState(102);
			ifClose();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IfOpenContext extends ParserRuleContext {
		public td::TmplStrTable::StrPtr conditional;
		public IdentifierContext identifier;
		public TerminalNode OPEN() { return getToken(TmplStrParser.OPEN, 0); }
		public TerminalNode KW_IF() { return getToken(TmplStrParser.KW_IF, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode CLOSE() { return getToken(TmplStrParser.CLOSE, 0); }
		public IfOpenContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifOpen; }
	}

	public final IfOpenContext ifOpen() throws RecognitionException {
		IfOpenContext _localctx = new IfOpenContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_ifOpen);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(104);
			match(OPEN);
			setState(105);
			match(KW_IF);
			setState(106);
			((IfOpenContext)_localctx).identifier = identifier();
			setState(107);
			match(CLOSE);
			((IfOpenContext)_localctx).conditional =  ((IfOpenContext)_localctx).identifier->id;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IfBlockContext extends ParserRuleContext {
		public td::TmplStrTable::IfBlockPtr if_block;
		public IfOpenContext ifOpen;
		public ItemContext item;
		public IfOpenContext ifOpen() {
			return getRuleContext(IfOpenContext.class,0);
		}
		public List<ItemContext> item() {
			return getRuleContexts(ItemContext.class);
		}
		public ItemContext item(int i) {
			return getRuleContext(ItemContext.class,i);
		}
		public IfBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifBlock; }
	}

	public final IfBlockContext ifBlock() throws RecognitionException {
		IfBlockContext _localctx = new IfBlockContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_ifBlock);
		((IfBlockContext)_localctx).if_block =  std::make_shared<td::TmplStrTable::IfBlock>();
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(110);
			((IfBlockContext)_localctx).ifOpen = ifOpen();
			_localctx.if_block->conditional_identifier = ((IfBlockContext)_localctx).ifOpen->conditional;
			setState(117);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(112);
					((IfBlockContext)_localctx).item = item();
					_localctx.if_block->body_items.push_back(((IfBlockContext)_localctx).item->itm);
					}
					} 
				}
				setState(119);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ElseIfStmtContext extends ParserRuleContext {
		public td::TmplStrTable::StrPtr conditional;
		public IdentifierContext identifier;
		public TerminalNode OPEN() { return getToken(TmplStrParser.OPEN, 0); }
		public TerminalNode KW_ELSE() { return getToken(TmplStrParser.KW_ELSE, 0); }
		public TerminalNode KW_IF() { return getToken(TmplStrParser.KW_IF, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode CLOSE() { return getToken(TmplStrParser.CLOSE, 0); }
		public ElseIfStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elseIfStmt; }
	}

	public final ElseIfStmtContext elseIfStmt() throws RecognitionException {
		ElseIfStmtContext _localctx = new ElseIfStmtContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_elseIfStmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(120);
			match(OPEN);
			setState(121);
			match(KW_ELSE);
			setState(122);
			match(KW_IF);
			setState(123);
			((ElseIfStmtContext)_localctx).identifier = identifier();
			setState(124);
			match(CLOSE);
			((ElseIfStmtContext)_localctx).conditional =  ((ElseIfStmtContext)_localctx).identifier->id;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ElseIfBlockContext extends ParserRuleContext {
		public td::TmplStrTable::ElseIfBlockPtr else_if_block;
		public ElseIfStmtContext elseIfStmt;
		public ItemContext item;
		public ElseIfStmtContext elseIfStmt() {
			return getRuleContext(ElseIfStmtContext.class,0);
		}
		public List<ItemContext> item() {
			return getRuleContexts(ItemContext.class);
		}
		public ItemContext item(int i) {
			return getRuleContext(ItemContext.class,i);
		}
		public ElseIfBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elseIfBlock; }
	}

	public final ElseIfBlockContext elseIfBlock() throws RecognitionException {
		ElseIfBlockContext _localctx = new ElseIfBlockContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_elseIfBlock);
		((ElseIfBlockContext)_localctx).else_if_block =  std::make_shared<td::TmplStrTable::ElseIfBlock>();
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(127);
			((ElseIfBlockContext)_localctx).elseIfStmt = elseIfStmt();
			_localctx.else_if_block->conditional_identifier = ((ElseIfBlockContext)_localctx).elseIfStmt->conditional;
			setState(134);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(129);
					((ElseIfBlockContext)_localctx).item = item();
					_localctx.else_if_block->body_items.push_back(((ElseIfBlockContext)_localctx).item->itm);
					}
					} 
				}
				setState(136);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ElseStmtContext extends ParserRuleContext {
		public TerminalNode OPEN() { return getToken(TmplStrParser.OPEN, 0); }
		public TerminalNode KW_ELSE() { return getToken(TmplStrParser.KW_ELSE, 0); }
		public TerminalNode CLOSE() { return getToken(TmplStrParser.CLOSE, 0); }
		public ElseStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elseStmt; }
	}

	public final ElseStmtContext elseStmt() throws RecognitionException {
		ElseStmtContext _localctx = new ElseStmtContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_elseStmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(137);
			match(OPEN);
			setState(138);
			match(KW_ELSE);
			setState(139);
			match(CLOSE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ElseBlockContext extends ParserRuleContext {
		public std::vector<td::TmplStrTable::ItemPtr> else_body_items;
		public ItemContext item;
		public ElseStmtContext elseStmt() {
			return getRuleContext(ElseStmtContext.class,0);
		}
		public List<ItemContext> item() {
			return getRuleContexts(ItemContext.class);
		}
		public ItemContext item(int i) {
			return getRuleContext(ItemContext.class,i);
		}
		public ElseBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_elseBlock; }
	}

	public final ElseBlockContext elseBlock() throws RecognitionException {
		ElseBlockContext _localctx = new ElseBlockContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_elseBlock);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(141);
			elseStmt();
			setState(147);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(142);
					((ElseBlockContext)_localctx).item = item();
					_localctx.else_body_items.push_back(((ElseBlockContext)_localctx).item->itm);
					}
					} 
				}
				setState(149);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IfCloseContext extends ParserRuleContext {
		public TerminalNode OPEN() { return getToken(TmplStrParser.OPEN, 0); }
		public TerminalNode SLASH() { return getToken(TmplStrParser.SLASH, 0); }
		public TerminalNode KW_IF() { return getToken(TmplStrParser.KW_IF, 0); }
		public TerminalNode CLOSE() { return getToken(TmplStrParser.CLOSE, 0); }
		public IfCloseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifClose; }
	}

	public final IfCloseContext ifClose() throws RecognitionException {
		IfCloseContext _localctx = new IfCloseContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_ifClose);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(150);
			match(OPEN);
			setState(151);
			match(SLASH);
			setState(152);
			match(KW_IF);
			setState(153);
			match(CLOSE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TextItemContext extends ParserRuleContext {
		public td::TmplStrTable::StrPtr txt;
		public Token TEXT;
		public TerminalNode TEXT() { return getToken(TmplStrParser.TEXT, 0); }
		public TextItemContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_textItem; }
	}

	public final TextItemContext textItem() throws RecognitionException {
		TextItemContext _localctx = new TextItemContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_textItem);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(155);
			((TextItemContext)_localctx).TEXT = match(TEXT);
			((TextItemContext)_localctx).txt =  std::make_shared<std::string>(((TextItemContext)_localctx).TEXT->getText());
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdentifierContext extends ParserRuleContext {
		public td::TmplStrTable::StrPtr id;
		public Token nki;
		public TerminalNode RAW_ESCAPE() { return getToken(TmplStrParser.RAW_ESCAPE, 0); }
		public TerminalNode NON_KEYWORD_IDENTIFIER() { return getToken(TmplStrParser.NON_KEYWORD_IDENTIFIER, 0); }
		public IdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifier; }
	}

	public final IdentifierContext identifier() throws RecognitionException {
		IdentifierContext _localctx = new IdentifierContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_identifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(161);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NON_KEYWORD_IDENTIFIER:
				{
				setState(158);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			case RAW_ESCAPE:
				{
				setState(159);
				match(RAW_ESCAPE);
				setState(160);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			((IdentifierContext)_localctx).id =  std::make_shared<std::string>(((IdentifierContext)_localctx).nki->getText());
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\16\u00a8\4\2\t\2"+
		"\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\3\2\3\2\3\2\7\2$\n"+
		"\2\f\2\16\2\'\13\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\5\3"+
		"\65\n\3\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\5\5D\n\5\3"+
		"\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\7\5N\n\5\f\5\16\5Q\13\5\3\5\3\5\3\6\3\6"+
		"\3\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7\7\7_\n\7\f\7\16\7b\13\7\3\7\3\7\3\7\5"+
		"\7g\n\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\7\tv\n\t\f"+
		"\t\16\ty\13\t\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\7\13"+
		"\u0087\n\13\f\13\16\13\u008a\13\13\3\f\3\f\3\f\3\f\3\r\3\r\3\r\3\r\7\r"+
		"\u0094\n\r\f\r\16\r\u0097\13\r\3\16\3\16\3\16\3\16\3\16\3\17\3\17\3\17"+
		"\3\20\3\20\3\20\5\20\u00a4\n\20\3\20\3\20\3\20\2\2\21\2\4\6\b\n\f\16\20"+
		"\22\24\26\30\32\34\36\2\2\2\u00a4\2%\3\2\2\2\4\64\3\2\2\2\6\66\3\2\2\2"+
		"\b;\3\2\2\2\nT\3\2\2\2\fY\3\2\2\2\16j\3\2\2\2\20p\3\2\2\2\22z\3\2\2\2"+
		"\24\u0081\3\2\2\2\26\u008b\3\2\2\2\30\u008f\3\2\2\2\32\u0098\3\2\2\2\34"+
		"\u009d\3\2\2\2\36\u00a3\3\2\2\2 !\5\4\3\2!\"\b\2\1\2\"$\3\2\2\2# \3\2"+
		"\2\2$\'\3\2\2\2%#\3\2\2\2%&\3\2\2\2&\3\3\2\2\2\'%\3\2\2\2()\5\34\17\2"+
		")*\b\3\1\2*\65\3\2\2\2+,\5\6\4\2,-\b\3\1\2-\65\3\2\2\2./\5\b\5\2/\60\b"+
		"\3\1\2\60\65\3\2\2\2\61\62\5\f\7\2\62\63\b\3\1\2\63\65\3\2\2\2\64(\3\2"+
		"\2\2\64+\3\2\2\2\64.\3\2\2\2\64\61\3\2\2\2\65\5\3\2\2\2\66\67\7\3\2\2"+
		"\678\5\36\20\289\7\5\2\29:\b\4\1\2:\7\3\2\2\2;<\7\3\2\2<=\7\7\2\2=>\5"+
		"\36\20\2>C\b\5\1\2?@\7\16\2\2@A\5\36\20\2AB\b\5\1\2BD\3\2\2\2C?\3\2\2"+
		"\2CD\3\2\2\2DE\3\2\2\2EF\7\b\2\2FG\5\36\20\2GH\b\5\1\2HI\7\5\2\2IO\3\2"+
		"\2\2JK\5\4\3\2KL\b\5\1\2LN\3\2\2\2MJ\3\2\2\2NQ\3\2\2\2OM\3\2\2\2OP\3\2"+
		"\2\2PR\3\2\2\2QO\3\2\2\2RS\5\n\6\2S\t\3\2\2\2TU\7\3\2\2UV\7\6\2\2VW\7"+
		"\7\2\2WX\7\5\2\2X\13\3\2\2\2YZ\5\20\t\2Z`\b\7\1\2[\\\5\24\13\2\\]\b\7"+
		"\1\2]_\3\2\2\2^[\3\2\2\2_b\3\2\2\2`^\3\2\2\2`a\3\2\2\2af\3\2\2\2b`\3\2"+
		"\2\2cd\5\30\r\2de\b\7\1\2eg\3\2\2\2fc\3\2\2\2fg\3\2\2\2gh\3\2\2\2hi\5"+
		"\32\16\2i\r\3\2\2\2jk\7\3\2\2kl\7\t\2\2lm\5\36\20\2mn\7\5\2\2no\b\b\1"+
		"\2o\17\3\2\2\2pq\5\16\b\2qw\b\t\1\2rs\5\4\3\2st\b\t\1\2tv\3\2\2\2ur\3"+
		"\2\2\2vy\3\2\2\2wu\3\2\2\2wx\3\2\2\2x\21\3\2\2\2yw\3\2\2\2z{\7\3\2\2{"+
		"|\7\n\2\2|}\7\t\2\2}~\5\36\20\2~\177\7\5\2\2\177\u0080\b\n\1\2\u0080\23"+
		"\3\2\2\2\u0081\u0082\5\22\n\2\u0082\u0088\b\13\1\2\u0083\u0084\5\4\3\2"+
		"\u0084\u0085\b\13\1\2\u0085\u0087\3\2\2\2\u0086\u0083\3\2\2\2\u0087\u008a"+
		"\3\2\2\2\u0088\u0086\3\2\2\2\u0088\u0089\3\2\2\2\u0089\25\3\2\2\2\u008a"+
		"\u0088\3\2\2\2\u008b\u008c\7\3\2\2\u008c\u008d\7\n\2\2\u008d\u008e\7\5"+
		"\2\2\u008e\27\3\2\2\2\u008f\u0095\5\26\f\2\u0090\u0091\5\4\3\2\u0091\u0092"+
		"\b\r\1\2\u0092\u0094\3\2\2\2\u0093\u0090\3\2\2\2\u0094\u0097\3\2\2\2\u0095"+
		"\u0093\3\2\2\2\u0095\u0096\3\2\2\2\u0096\31\3\2\2\2\u0097\u0095\3\2\2"+
		"\2\u0098\u0099\7\3\2\2\u0099\u009a\7\6\2\2\u009a\u009b\7\t\2\2\u009b\u009c"+
		"\7\5\2\2\u009c\33\3\2\2\2\u009d\u009e\7\4\2\2\u009e\u009f\b\17\1\2\u009f"+
		"\35\3\2\2\2\u00a0\u00a4\7\13\2\2\u00a1\u00a2\7\f\2\2\u00a2\u00a4\7\13"+
		"\2\2\u00a3\u00a0\3\2\2\2\u00a3\u00a1\3\2\2\2\u00a4\u00a5\3\2\2\2\u00a5"+
		"\u00a6\b\20\1\2\u00a6\37\3\2\2\2\f%\64CO`fw\u0088\u0095\u00a3";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}