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
		NON_KEYWORD_IDENTIFIER=9, RAW_ESCAPE=10, WS=11;
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
			"NON_KEYWORD_IDENTIFIER", "RAW_ESCAPE", "WS"
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
		public ForBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forBlock; }
	}

	public final ForBlockContext forBlock() throws RecognitionException {
		ForBlockContext _localctx = new ForBlockContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_forBlock);
		((ForBlockContext)_localctx).for_block =  std::make_shared<td::TmplStrTable::ForBlock>();
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
			setState(61);
			match(KW_IN);
			setState(62);
			((ForBlockContext)_localctx).identifier = identifier();
			_localctx.for_block->iterable_identifier = ((ForBlockContext)_localctx).identifier->id;
					
			setState(64);
			match(CLOSE);
			}
			setState(71);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(66);
					((ForBlockContext)_localctx).item = item();
					_localctx.for_block->body_items.push_back(((ForBlockContext)_localctx).item->itm);
					}
					} 
				}
				setState(73);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
			}
			setState(74);
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
			setState(76);
			match(OPEN);
			setState(77);
			match(SLASH);
			setState(78);
			match(KW_FOR);
			setState(79);
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
			setState(81);
			((FullIIfBlockContext)_localctx).ifBlock = ifBlock();
			((FullIIfBlockContext)_localctx).if_block =  ((FullIIfBlockContext)_localctx).ifBlock->if_block;
			setState(88);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(83);
					((FullIIfBlockContext)_localctx).elseIfBlock = elseIfBlock();
					_localctx.if_block->else_ifs.push_back(((FullIIfBlockContext)_localctx).elseIfBlock->else_if_block);
					}
					} 
				}
				setState(90);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			}
			setState(94);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				{
				setState(91);
				((FullIIfBlockContext)_localctx).elseBlock = elseBlock();
				_localctx.if_block->else_body_items = ((FullIIfBlockContext)_localctx).elseBlock->else_body_items;
				}
				break;
			}
			setState(96);
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
			setState(98);
			match(OPEN);
			setState(99);
			match(KW_IF);
			setState(100);
			((IfOpenContext)_localctx).identifier = identifier();
			setState(101);
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
			setState(104);
			ifOpen();
			setState(110);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(105);
					((IfBlockContext)_localctx).item = item();
					_localctx.if_block->body_items.push_back(((IfBlockContext)_localctx).item->itm);
					}
					} 
				}
				setState(112);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
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
			setState(113);
			match(OPEN);
			setState(114);
			match(KW_ELSE);
			setState(115);
			match(KW_IF);
			setState(116);
			((ElseIfStmtContext)_localctx).identifier = identifier();
			setState(117);
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
			setState(120);
			elseIfStmt();
			setState(126);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(121);
					((ElseIfBlockContext)_localctx).item = item();
					_localctx.else_if_block->body_items.push_back(((ElseIfBlockContext)_localctx).item->itm);
					}
					} 
				}
				setState(128);
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
			setState(129);
			match(OPEN);
			setState(130);
			match(KW_ELSE);
			setState(131);
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
			setState(133);
			elseStmt();
			setState(139);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(134);
					((ElseBlockContext)_localctx).item = item();
					_localctx.else_body_items.push_back(((ElseBlockContext)_localctx).item->itm);
					}
					} 
				}
				setState(141);
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
			setState(142);
			match(OPEN);
			setState(143);
			match(SLASH);
			setState(144);
			match(KW_IF);
			setState(145);
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
			setState(147);
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
			setState(153);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NON_KEYWORD_IDENTIFIER:
				{
				setState(150);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			case RAW_ESCAPE:
				{
				setState(151);
				match(RAW_ESCAPE);
				setState(152);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\r\u00a0\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\3\2\3\2\3\2\7\2$\n\2"+
		"\f\2\16\2\'\13\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\5\3\65"+
		"\n\3\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3"+
		"\5\7\5H\n\5\f\5\16\5K\13\5\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\7\3\7\3\7\3\7"+
		"\3\7\7\7Y\n\7\f\7\16\7\\\13\7\3\7\3\7\3\7\5\7a\n\7\3\7\3\7\3\b\3\b\3\b"+
		"\3\b\3\b\3\b\3\t\3\t\3\t\3\t\7\to\n\t\f\t\16\tr\13\t\3\n\3\n\3\n\3\n\3"+
		"\n\3\n\3\n\3\13\3\13\3\13\3\13\7\13\177\n\13\f\13\16\13\u0082\13\13\3"+
		"\f\3\f\3\f\3\f\3\r\3\r\3\r\3\r\7\r\u008c\n\r\f\r\16\r\u008f\13\r\3\16"+
		"\3\16\3\16\3\16\3\16\3\17\3\17\3\17\3\20\3\20\3\20\5\20\u009c\n\20\3\20"+
		"\3\20\3\20\2\2\21\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36\2\2\2\u009b\2"+
		"%\3\2\2\2\4\64\3\2\2\2\6\66\3\2\2\2\b;\3\2\2\2\nN\3\2\2\2\fS\3\2\2\2\16"+
		"d\3\2\2\2\20j\3\2\2\2\22s\3\2\2\2\24z\3\2\2\2\26\u0083\3\2\2\2\30\u0087"+
		"\3\2\2\2\32\u0090\3\2\2\2\34\u0095\3\2\2\2\36\u009b\3\2\2\2 !\5\4\3\2"+
		"!\"\b\2\1\2\"$\3\2\2\2# \3\2\2\2$\'\3\2\2\2%#\3\2\2\2%&\3\2\2\2&\3\3\2"+
		"\2\2\'%\3\2\2\2()\5\34\17\2)*\b\3\1\2*\65\3\2\2\2+,\5\6\4\2,-\b\3\1\2"+
		"-\65\3\2\2\2./\5\b\5\2/\60\b\3\1\2\60\65\3\2\2\2\61\62\5\f\7\2\62\63\b"+
		"\3\1\2\63\65\3\2\2\2\64(\3\2\2\2\64+\3\2\2\2\64.\3\2\2\2\64\61\3\2\2\2"+
		"\65\5\3\2\2\2\66\67\7\3\2\2\678\5\36\20\289\7\5\2\29:\b\4\1\2:\7\3\2\2"+
		"\2;<\7\3\2\2<=\7\7\2\2=>\5\36\20\2>?\b\5\1\2?@\7\b\2\2@A\5\36\20\2AB\b"+
		"\5\1\2BC\7\5\2\2CI\3\2\2\2DE\5\4\3\2EF\b\5\1\2FH\3\2\2\2GD\3\2\2\2HK\3"+
		"\2\2\2IG\3\2\2\2IJ\3\2\2\2JL\3\2\2\2KI\3\2\2\2LM\5\n\6\2M\t\3\2\2\2NO"+
		"\7\3\2\2OP\7\6\2\2PQ\7\7\2\2QR\7\5\2\2R\13\3\2\2\2ST\5\20\t\2TZ\b\7\1"+
		"\2UV\5\24\13\2VW\b\7\1\2WY\3\2\2\2XU\3\2\2\2Y\\\3\2\2\2ZX\3\2\2\2Z[\3"+
		"\2\2\2[`\3\2\2\2\\Z\3\2\2\2]^\5\30\r\2^_\b\7\1\2_a\3\2\2\2`]\3\2\2\2`"+
		"a\3\2\2\2ab\3\2\2\2bc\5\32\16\2c\r\3\2\2\2de\7\3\2\2ef\7\t\2\2fg\5\36"+
		"\20\2gh\7\5\2\2hi\b\b\1\2i\17\3\2\2\2jp\5\16\b\2kl\5\4\3\2lm\b\t\1\2m"+
		"o\3\2\2\2nk\3\2\2\2or\3\2\2\2pn\3\2\2\2pq\3\2\2\2q\21\3\2\2\2rp\3\2\2"+
		"\2st\7\3\2\2tu\7\n\2\2uv\7\t\2\2vw\5\36\20\2wx\7\5\2\2xy\b\n\1\2y\23\3"+
		"\2\2\2z\u0080\5\22\n\2{|\5\4\3\2|}\b\13\1\2}\177\3\2\2\2~{\3\2\2\2\177"+
		"\u0082\3\2\2\2\u0080~\3\2\2\2\u0080\u0081\3\2\2\2\u0081\25\3\2\2\2\u0082"+
		"\u0080\3\2\2\2\u0083\u0084\7\3\2\2\u0084\u0085\7\n\2\2\u0085\u0086\7\5"+
		"\2\2\u0086\27\3\2\2\2\u0087\u008d\5\26\f\2\u0088\u0089\5\4\3\2\u0089\u008a"+
		"\b\r\1\2\u008a\u008c\3\2\2\2\u008b\u0088\3\2\2\2\u008c\u008f\3\2\2\2\u008d"+
		"\u008b\3\2\2\2\u008d\u008e\3\2\2\2\u008e\31\3\2\2\2\u008f\u008d\3\2\2"+
		"\2\u0090\u0091\7\3\2\2\u0091\u0092\7\6\2\2\u0092\u0093\7\t\2\2\u0093\u0094"+
		"\7\5\2\2\u0094\33\3\2\2\2\u0095\u0096\7\4\2\2\u0096\u0097\b\17\1\2\u0097"+
		"\35\3\2\2\2\u0098\u009c\7\13\2\2\u0099\u009a\7\f\2\2\u009a\u009c\7\13"+
		"\2\2\u009b\u0098\3\2\2\2\u009b\u0099\3\2\2\2\u009c\u009d\3\2\2\2\u009d"+
		"\u009e\b\20\1\2\u009e\37\3\2\2\2\13%\64IZ`p\u0080\u008d\u009b";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}