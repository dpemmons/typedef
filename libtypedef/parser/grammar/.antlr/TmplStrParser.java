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
		OPEN=1, TEXT=2, CLOSE=3, SLASH=4, COMMA=5, LPAREN=6, RPAREN=7, PATHSEP=8, 
		KW_FOR=9, KW_IN=10, KW_IF=11, KW_ELSE=12, NON_KEYWORD_IDENTIFIER=13, RAW_ESCAPE=14, 
		WS=15;
	public static final int
		RULE_tmpl = 0, RULE_item = 1, RULE_insertion = 2, RULE_functionCall = 3, 
		RULE_forBlock = 4, RULE_forClose = 5, RULE_fullIIfBlock = 6, RULE_ifOpen = 7, 
		RULE_ifBlock = 8, RULE_elseIfStmt = 9, RULE_elseIfBlock = 10, RULE_elseStmt = 11, 
		RULE_elseBlock = 12, RULE_ifClose = 13, RULE_textItem = 14, RULE_identifier = 15;
	private static String[] makeRuleNames() {
		return new String[] {
			"tmpl", "item", "insertion", "functionCall", "forBlock", "forClose", 
			"fullIIfBlock", "ifOpen", "ifBlock", "elseIfStmt", "elseIfBlock", "elseStmt", 
			"elseBlock", "ifClose", "textItem", "identifier"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'<'", null, "'>'", "'/'", "','", "'('", "')'", "'::'", "'for'", 
			"'in'", "'if'", "'else'", null, "'r#'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "OPEN", "TEXT", "CLOSE", "SLASH", "COMMA", "LPAREN", "RPAREN", 
			"PATHSEP", "KW_FOR", "KW_IN", "KW_IF", "KW_ELSE", "NON_KEYWORD_IDENTIFIER", 
			"RAW_ESCAPE", "WS"
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
			setState(37);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==OPEN || _la==TEXT) {
				{
				{
				setState(32);
				((TmplContext)_localctx).item = item();
				_localctx.tbl->items.push_back(((TmplContext)_localctx).item->itm);
				}
				}
				setState(39);
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
		public FunctionCallContext functionCall;
		public ForBlockContext forBlock;
		public FullIIfBlockContext fullIIfBlock;
		public TextItemContext textItem() {
			return getRuleContext(TextItemContext.class,0);
		}
		public InsertionContext insertion() {
			return getRuleContext(InsertionContext.class,0);
		}
		public FunctionCallContext functionCall() {
			return getRuleContext(FunctionCallContext.class,0);
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
			setState(55);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(40);
				((ItemContext)_localctx).textItem = textItem();
				_localctx.itm->text = ((ItemContext)_localctx).textItem->txt;
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(43);
				((ItemContext)_localctx).insertion = insertion();
				_localctx.itm->insertion = ((ItemContext)_localctx).insertion->ins;
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(46);
				((ItemContext)_localctx).functionCall = functionCall();
				_localctx.itm->function_call = ((ItemContext)_localctx).functionCall->function_call;
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(49);
				((ItemContext)_localctx).forBlock = forBlock();
				_localctx.itm->for_block = ((ItemContext)_localctx).forBlock->for_block;
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(52);
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
			setState(57);
			match(OPEN);
			setState(58);
			((InsertionContext)_localctx).identifier = identifier();
			setState(59);
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

	public static class FunctionCallContext extends ParserRuleContext {
		public td::TmplStrTable::FunctionCallPtr function_call;
		public IdentifierContext identifier;
		public TerminalNode OPEN() { return getToken(TmplStrParser.OPEN, 0); }
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public TerminalNode LPAREN() { return getToken(TmplStrParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(TmplStrParser.RPAREN, 0); }
		public TerminalNode CLOSE() { return getToken(TmplStrParser.CLOSE, 0); }
		public List<TerminalNode> COMMA() { return getTokens(TmplStrParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(TmplStrParser.COMMA, i);
		}
		public FunctionCallContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionCall; }
	}

	public final FunctionCallContext functionCall() throws RecognitionException {
		FunctionCallContext _localctx = new FunctionCallContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_functionCall);
		((FunctionCallContext)_localctx).function_call =  std::make_shared<td::TmplStrTable::FunctionCall>();
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(62);
			match(OPEN);
			setState(63);
			((FunctionCallContext)_localctx).identifier = identifier();
			_localctx.function_call->identifier = ((FunctionCallContext)_localctx).identifier->id;
			setState(65);
			match(LPAREN);
			setState(69);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE) {
				{
				setState(66);
				((FunctionCallContext)_localctx).identifier = identifier();
				_localctx.function_call->args.push_back(((FunctionCallContext)_localctx).identifier->id);
				}
			}

			setState(77);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(71);
				match(COMMA);
				setState(72);
				((FunctionCallContext)_localctx).identifier = identifier();
				_localctx.function_call->args.push_back(((FunctionCallContext)_localctx).identifier->id);
				}
				}
				setState(79);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(80);
			match(RPAREN);
			setState(81);
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
		enterRule(_localctx, 8, RULE_forBlock);
		((ForBlockContext)_localctx).for_block =  std::make_shared<td::TmplStrTable::ForBlock>();
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(83);
			match(OPEN);
			setState(84);
			match(KW_FOR);
			setState(85);
			((ForBlockContext)_localctx).identifier = identifier();
			_localctx.for_block->loop_variable = ((ForBlockContext)_localctx).identifier->id;
			setState(91);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMA) {
				{
				setState(87);
				match(COMMA);
				setState(88);
				((ForBlockContext)_localctx).identifier = identifier();
				_localctx.for_block->loop_variable2 = ((ForBlockContext)_localctx).identifier->id;
				}
			}

			setState(93);
			match(KW_IN);
			setState(94);
			((ForBlockContext)_localctx).identifier = identifier();
			_localctx.for_block->iterable_identifier = ((ForBlockContext)_localctx).identifier->id;
					
			setState(96);
			match(CLOSE);
			}
			setState(103);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(98);
					((ForBlockContext)_localctx).item = item();
					_localctx.for_block->body_items.push_back(((ForBlockContext)_localctx).item->itm);
					}
					} 
				}
				setState(105);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			}
			setState(106);
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
		enterRule(_localctx, 10, RULE_forClose);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(108);
			match(OPEN);
			setState(109);
			match(SLASH);
			setState(110);
			match(KW_FOR);
			setState(111);
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
		enterRule(_localctx, 12, RULE_fullIIfBlock);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(113);
			((FullIIfBlockContext)_localctx).ifBlock = ifBlock();
			((FullIIfBlockContext)_localctx).if_block =  ((FullIIfBlockContext)_localctx).ifBlock->if_block;
			setState(120);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(115);
					((FullIIfBlockContext)_localctx).elseIfBlock = elseIfBlock();
					_localctx.if_block->else_ifs.push_back(((FullIIfBlockContext)_localctx).elseIfBlock->else_if_block);
					}
					} 
				}
				setState(122);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			}
			setState(126);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				{
				setState(123);
				((FullIIfBlockContext)_localctx).elseBlock = elseBlock();
				_localctx.if_block->else_body_items = ((FullIIfBlockContext)_localctx).elseBlock->else_body_items;
				}
				break;
			}
			setState(128);
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
		enterRule(_localctx, 14, RULE_ifOpen);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(130);
			match(OPEN);
			setState(131);
			match(KW_IF);
			setState(132);
			((IfOpenContext)_localctx).identifier = identifier();
			setState(133);
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
		enterRule(_localctx, 16, RULE_ifBlock);
		((IfBlockContext)_localctx).if_block =  std::make_shared<td::TmplStrTable::IfBlock>();
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(136);
			((IfBlockContext)_localctx).ifOpen = ifOpen();
			_localctx.if_block->conditional_identifier = ((IfBlockContext)_localctx).ifOpen->conditional;
			setState(143);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(138);
					((IfBlockContext)_localctx).item = item();
					_localctx.if_block->body_items.push_back(((IfBlockContext)_localctx).item->itm);
					}
					} 
				}
				setState(145);
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
		enterRule(_localctx, 18, RULE_elseIfStmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(146);
			match(OPEN);
			setState(147);
			match(KW_ELSE);
			setState(148);
			match(KW_IF);
			setState(149);
			((ElseIfStmtContext)_localctx).identifier = identifier();
			setState(150);
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
		enterRule(_localctx, 20, RULE_elseIfBlock);
		((ElseIfBlockContext)_localctx).else_if_block =  std::make_shared<td::TmplStrTable::ElseIfBlock>();
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(153);
			((ElseIfBlockContext)_localctx).elseIfStmt = elseIfStmt();
			_localctx.else_if_block->conditional_identifier = ((ElseIfBlockContext)_localctx).elseIfStmt->conditional;
			setState(160);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,9,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(155);
					((ElseIfBlockContext)_localctx).item = item();
					_localctx.else_if_block->body_items.push_back(((ElseIfBlockContext)_localctx).item->itm);
					}
					} 
				}
				setState(162);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,9,_ctx);
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
		enterRule(_localctx, 22, RULE_elseStmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(163);
			match(OPEN);
			setState(164);
			match(KW_ELSE);
			setState(165);
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
		enterRule(_localctx, 24, RULE_elseBlock);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(167);
			elseStmt();
			setState(173);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(168);
					((ElseBlockContext)_localctx).item = item();
					_localctx.else_body_items.push_back(((ElseBlockContext)_localctx).item->itm);
					}
					} 
				}
				setState(175);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
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
		enterRule(_localctx, 26, RULE_ifClose);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(176);
			match(OPEN);
			setState(177);
			match(SLASH);
			setState(178);
			match(KW_IF);
			setState(179);
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
		enterRule(_localctx, 28, RULE_textItem);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(181);
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
		enterRule(_localctx, 30, RULE_identifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(187);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NON_KEYWORD_IDENTIFIER:
				{
				setState(184);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			case RAW_ESCAPE:
				{
				setState(185);
				match(RAW_ESCAPE);
				setState(186);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\21\u00c2\4\2\t\2"+
		"\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\3\2\3\2"+
		"\3\2\7\2&\n\2\f\2\16\2)\13\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3"+
		"\3\3\3\3\3\3\3\3\3\5\3:\n\3\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3"+
		"\5\3\5\5\5H\n\5\3\5\3\5\3\5\3\5\7\5N\n\5\f\5\16\5Q\13\5\3\5\3\5\3\5\3"+
		"\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\5\6^\n\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3"+
		"\6\7\6h\n\6\f\6\16\6k\13\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\b\3\b"+
		"\3\b\7\by\n\b\f\b\16\b|\13\b\3\b\3\b\3\b\5\b\u0081\n\b\3\b\3\b\3\t\3\t"+
		"\3\t\3\t\3\t\3\t\3\n\3\n\3\n\3\n\3\n\7\n\u0090\n\n\f\n\16\n\u0093\13\n"+
		"\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\7\f\u00a1\n\f"+
		"\f\f\16\f\u00a4\13\f\3\r\3\r\3\r\3\r\3\16\3\16\3\16\3\16\7\16\u00ae\n"+
		"\16\f\16\16\16\u00b1\13\16\3\17\3\17\3\17\3\17\3\17\3\20\3\20\3\20\3\21"+
		"\3\21\3\21\5\21\u00be\n\21\3\21\3\21\3\21\2\2\22\2\4\6\b\n\f\16\20\22"+
		"\24\26\30\32\34\36 \2\2\2\u00c0\2\'\3\2\2\2\49\3\2\2\2\6;\3\2\2\2\b@\3"+
		"\2\2\2\nU\3\2\2\2\fn\3\2\2\2\16s\3\2\2\2\20\u0084\3\2\2\2\22\u008a\3\2"+
		"\2\2\24\u0094\3\2\2\2\26\u009b\3\2\2\2\30\u00a5\3\2\2\2\32\u00a9\3\2\2"+
		"\2\34\u00b2\3\2\2\2\36\u00b7\3\2\2\2 \u00bd\3\2\2\2\"#\5\4\3\2#$\b\2\1"+
		"\2$&\3\2\2\2%\"\3\2\2\2&)\3\2\2\2\'%\3\2\2\2\'(\3\2\2\2(\3\3\2\2\2)\'"+
		"\3\2\2\2*+\5\36\20\2+,\b\3\1\2,:\3\2\2\2-.\5\6\4\2./\b\3\1\2/:\3\2\2\2"+
		"\60\61\5\b\5\2\61\62\b\3\1\2\62:\3\2\2\2\63\64\5\n\6\2\64\65\b\3\1\2\65"+
		":\3\2\2\2\66\67\5\16\b\2\678\b\3\1\28:\3\2\2\29*\3\2\2\29-\3\2\2\29\60"+
		"\3\2\2\29\63\3\2\2\29\66\3\2\2\2:\5\3\2\2\2;<\7\3\2\2<=\5 \21\2=>\7\5"+
		"\2\2>?\b\4\1\2?\7\3\2\2\2@A\7\3\2\2AB\5 \21\2BC\b\5\1\2CG\7\b\2\2DE\5"+
		" \21\2EF\b\5\1\2FH\3\2\2\2GD\3\2\2\2GH\3\2\2\2HO\3\2\2\2IJ\7\7\2\2JK\5"+
		" \21\2KL\b\5\1\2LN\3\2\2\2MI\3\2\2\2NQ\3\2\2\2OM\3\2\2\2OP\3\2\2\2PR\3"+
		"\2\2\2QO\3\2\2\2RS\7\t\2\2ST\7\5\2\2T\t\3\2\2\2UV\7\3\2\2VW\7\13\2\2W"+
		"X\5 \21\2X]\b\6\1\2YZ\7\7\2\2Z[\5 \21\2[\\\b\6\1\2\\^\3\2\2\2]Y\3\2\2"+
		"\2]^\3\2\2\2^_\3\2\2\2_`\7\f\2\2`a\5 \21\2ab\b\6\1\2bc\7\5\2\2ci\3\2\2"+
		"\2de\5\4\3\2ef\b\6\1\2fh\3\2\2\2gd\3\2\2\2hk\3\2\2\2ig\3\2\2\2ij\3\2\2"+
		"\2jl\3\2\2\2ki\3\2\2\2lm\5\f\7\2m\13\3\2\2\2no\7\3\2\2op\7\6\2\2pq\7\13"+
		"\2\2qr\7\5\2\2r\r\3\2\2\2st\5\22\n\2tz\b\b\1\2uv\5\26\f\2vw\b\b\1\2wy"+
		"\3\2\2\2xu\3\2\2\2y|\3\2\2\2zx\3\2\2\2z{\3\2\2\2{\u0080\3\2\2\2|z\3\2"+
		"\2\2}~\5\32\16\2~\177\b\b\1\2\177\u0081\3\2\2\2\u0080}\3\2\2\2\u0080\u0081"+
		"\3\2\2\2\u0081\u0082\3\2\2\2\u0082\u0083\5\34\17\2\u0083\17\3\2\2\2\u0084"+
		"\u0085\7\3\2\2\u0085\u0086\7\r\2\2\u0086\u0087\5 \21\2\u0087\u0088\7\5"+
		"\2\2\u0088\u0089\b\t\1\2\u0089\21\3\2\2\2\u008a\u008b\5\20\t\2\u008b\u0091"+
		"\b\n\1\2\u008c\u008d\5\4\3\2\u008d\u008e\b\n\1\2\u008e\u0090\3\2\2\2\u008f"+
		"\u008c\3\2\2\2\u0090\u0093\3\2\2\2\u0091\u008f\3\2\2\2\u0091\u0092\3\2"+
		"\2\2\u0092\23\3\2\2\2\u0093\u0091\3\2\2\2\u0094\u0095\7\3\2\2\u0095\u0096"+
		"\7\16\2\2\u0096\u0097\7\r\2\2\u0097\u0098\5 \21\2\u0098\u0099\7\5\2\2"+
		"\u0099\u009a\b\13\1\2\u009a\25\3\2\2\2\u009b\u009c\5\24\13\2\u009c\u00a2"+
		"\b\f\1\2\u009d\u009e\5\4\3\2\u009e\u009f\b\f\1\2\u009f\u00a1\3\2\2\2\u00a0"+
		"\u009d\3\2\2\2\u00a1\u00a4\3\2\2\2\u00a2\u00a0\3\2\2\2\u00a2\u00a3\3\2"+
		"\2\2\u00a3\27\3\2\2\2\u00a4\u00a2\3\2\2\2\u00a5\u00a6\7\3\2\2\u00a6\u00a7"+
		"\7\16\2\2\u00a7\u00a8\7\5\2\2\u00a8\31\3\2\2\2\u00a9\u00af\5\30\r\2\u00aa"+
		"\u00ab\5\4\3\2\u00ab\u00ac\b\16\1\2\u00ac\u00ae\3\2\2\2\u00ad\u00aa\3"+
		"\2\2\2\u00ae\u00b1\3\2\2\2\u00af\u00ad\3\2\2\2\u00af\u00b0\3\2\2\2\u00b0"+
		"\33\3\2\2\2\u00b1\u00af\3\2\2\2\u00b2\u00b3\7\3\2\2\u00b3\u00b4\7\6\2"+
		"\2\u00b4\u00b5\7\r\2\2\u00b5\u00b6\7\5\2\2\u00b6\35\3\2\2\2\u00b7\u00b8"+
		"\7\4\2\2\u00b8\u00b9\b\20\1\2\u00b9\37\3\2\2\2\u00ba\u00be\7\17\2\2\u00bb"+
		"\u00bc\7\20\2\2\u00bc\u00be\7\17\2\2\u00bd\u00ba\3\2\2\2\u00bd\u00bb\3"+
		"\2\2\2\u00be\u00bf\3\2\2\2\u00bf\u00c0\b\21\1\2\u00c0!\3\2\2\2\16\'9G"+
		"O]iz\u0080\u0091\u00a2\u00af\u00bd";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}