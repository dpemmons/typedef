// Generated from /home/dpemmons/src/typedef/libtypedef/parser/grammar/TmplStrParser.g4 by ANTLR 4.9.2


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
		RULE_tmpl = 0, RULE_item = 1, RULE_replacement = 2, RULE_forBlock = 3, 
		RULE_forOpen = 4, RULE_forClose = 5, RULE_ifBlock = 6, RULE_ifOpen = 7, 
		RULE_elseIfStmt = 8, RULE_elseStmt = 9, RULE_ifClose = 10, RULE_text = 11, 
		RULE_identifier = 12;
	private static String[] makeRuleNames() {
		return new String[] {
			"tmpl", "item", "replacement", "forBlock", "forOpen", "forClose", "ifBlock", 
			"ifOpen", "elseIfStmt", "elseStmt", "ifClose", "text", "identifier"
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
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(29);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==OPEN || _la==TEXT) {
				{
				{
				setState(26);
				item();
				}
				}
				setState(31);
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
		public TextContext text() {
			return getRuleContext(TextContext.class,0);
		}
		public ReplacementContext replacement() {
			return getRuleContext(ReplacementContext.class,0);
		}
		public ForBlockContext forBlock() {
			return getRuleContext(ForBlockContext.class,0);
		}
		public IfBlockContext ifBlock() {
			return getRuleContext(IfBlockContext.class,0);
		}
		public ItemContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_item; }
	}

	public final ItemContext item() throws RecognitionException {
		ItemContext _localctx = new ItemContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_item);
		try {
			setState(36);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(32);
				text();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(33);
				replacement();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(34);
				forBlock();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(35);
				ifBlock();
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

	public static class ReplacementContext extends ParserRuleContext {
		public std::string id;
		public IdentifierContext identifier;
		public TerminalNode OPEN() { return getToken(TmplStrParser.OPEN, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode CLOSE() { return getToken(TmplStrParser.CLOSE, 0); }
		public ReplacementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_replacement; }
	}

	public final ReplacementContext replacement() throws RecognitionException {
		ReplacementContext _localctx = new ReplacementContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_replacement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(38);
			match(OPEN);
			setState(39);
			((ReplacementContext)_localctx).identifier = identifier();
			setState(40);
			match(CLOSE);
			((ReplacementContext)_localctx).id =  ((ReplacementContext)_localctx).identifier.id;
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
		public ForOpenContext forOpen() {
			return getRuleContext(ForOpenContext.class,0);
		}
		public ForCloseContext forClose() {
			return getRuleContext(ForCloseContext.class,0);
		}
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
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(43);
			forOpen();
			setState(47);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(44);
					item();
					}
					} 
				}
				setState(49);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
			}
			setState(50);
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

	public static class ForOpenContext extends ParserRuleContext {
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
		public ForOpenContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forOpen; }
	}

	public final ForOpenContext forOpen() throws RecognitionException {
		ForOpenContext _localctx = new ForOpenContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_forOpen);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(52);
			match(OPEN);
			setState(53);
			match(KW_FOR);
			setState(54);
			identifier();
			setState(55);
			match(KW_IN);
			setState(56);
			identifier();
			setState(57);
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
			setState(59);
			match(OPEN);
			setState(60);
			match(SLASH);
			setState(61);
			match(KW_FOR);
			setState(62);
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

	public static class IfBlockContext extends ParserRuleContext {
		public IfOpenContext ifOpen() {
			return getRuleContext(IfOpenContext.class,0);
		}
		public IfCloseContext ifClose() {
			return getRuleContext(IfCloseContext.class,0);
		}
		public List<ItemContext> item() {
			return getRuleContexts(ItemContext.class);
		}
		public ItemContext item(int i) {
			return getRuleContext(ItemContext.class,i);
		}
		public List<ElseIfStmtContext> elseIfStmt() {
			return getRuleContexts(ElseIfStmtContext.class);
		}
		public ElseIfStmtContext elseIfStmt(int i) {
			return getRuleContext(ElseIfStmtContext.class,i);
		}
		public ElseStmtContext elseStmt() {
			return getRuleContext(ElseStmtContext.class,0);
		}
		public IfBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifBlock; }
	}

	public final IfBlockContext ifBlock() throws RecognitionException {
		IfBlockContext _localctx = new IfBlockContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_ifBlock);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(64);
			ifOpen();
			setState(68);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(65);
					item();
					}
					} 
				}
				setState(70);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			}
			setState(80);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(71);
					elseIfStmt();
					setState(75);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
					while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
						if ( _alt==1 ) {
							{
							{
							setState(72);
							item();
							}
							} 
						}
						setState(77);
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
					}
					}
					} 
				}
				setState(82);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			}
			setState(90);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				{
				setState(83);
				elseStmt();
				setState(87);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(84);
						item();
						}
						} 
					}
					setState(89);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
				}
				}
				break;
			}
			setState(92);
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
			setState(94);
			match(OPEN);
			setState(95);
			match(KW_IF);
			setState(96);
			identifier();
			setState(97);
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

	public static class ElseIfStmtContext extends ParserRuleContext {
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
			setState(99);
			match(OPEN);
			setState(100);
			match(KW_ELSE);
			setState(101);
			match(KW_IF);
			setState(102);
			identifier();
			setState(103);
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
		enterRule(_localctx, 18, RULE_elseStmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(105);
			match(OPEN);
			setState(106);
			match(KW_ELSE);
			setState(107);
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
		enterRule(_localctx, 20, RULE_ifClose);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(109);
			match(OPEN);
			setState(110);
			match(SLASH);
			setState(111);
			match(KW_IF);
			setState(112);
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

	public static class TextContext extends ParserRuleContext {
		public std::string txt;
		public Token TEXT;
		public TerminalNode TEXT() { return getToken(TmplStrParser.TEXT, 0); }
		public TextContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_text; }
	}

	public final TextContext text() throws RecognitionException {
		TextContext _localctx = new TextContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_text);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(114);
			((TextContext)_localctx).TEXT = match(TEXT);
			 ((TextContext)_localctx).txt =  ((TextContext)_localctx).TEXT->getText(); 
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
		public std::string id;
		public Token nki;
		public TerminalNode NON_KEYWORD_IDENTIFIER() { return getToken(TmplStrParser.NON_KEYWORD_IDENTIFIER, 0); }
		public TerminalNode RAW_ESCAPE() { return getToken(TmplStrParser.RAW_ESCAPE, 0); }
		public IdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifier; }
	}

	public final IdentifierContext identifier() throws RecognitionException {
		IdentifierContext _localctx = new IdentifierContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_identifier);
		try {
			setState(120);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NON_KEYWORD_IDENTIFIER:
				enterOuterAlt(_localctx, 1);
				{
				setState(117);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(118);
				match(RAW_ESCAPE);
				setState(119);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);

					((IdentifierContext)_localctx).id =  ((IdentifierContext)_localctx).nki->getText();
			  
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\r}\4\2\t\2\4\3\t"+
		"\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t\13\4"+
		"\f\t\f\4\r\t\r\4\16\t\16\3\2\7\2\36\n\2\f\2\16\2!\13\2\3\3\3\3\3\3\3\3"+
		"\5\3\'\n\3\3\4\3\4\3\4\3\4\3\4\3\5\3\5\7\5\60\n\5\f\5\16\5\63\13\5\3\5"+
		"\3\5\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\b\3\b\7\bE\n\b"+
		"\f\b\16\bH\13\b\3\b\3\b\7\bL\n\b\f\b\16\bO\13\b\7\bQ\n\b\f\b\16\bT\13"+
		"\b\3\b\3\b\7\bX\n\b\f\b\16\b[\13\b\5\b]\n\b\3\b\3\b\3\t\3\t\3\t\3\t\3"+
		"\t\3\n\3\n\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\r"+
		"\3\r\3\r\3\16\3\16\3\16\5\16{\n\16\3\16\2\2\17\2\4\6\b\n\f\16\20\22\24"+
		"\26\30\32\2\2\2z\2\37\3\2\2\2\4&\3\2\2\2\6(\3\2\2\2\b-\3\2\2\2\n\66\3"+
		"\2\2\2\f=\3\2\2\2\16B\3\2\2\2\20`\3\2\2\2\22e\3\2\2\2\24k\3\2\2\2\26o"+
		"\3\2\2\2\30t\3\2\2\2\32z\3\2\2\2\34\36\5\4\3\2\35\34\3\2\2\2\36!\3\2\2"+
		"\2\37\35\3\2\2\2\37 \3\2\2\2 \3\3\2\2\2!\37\3\2\2\2\"\'\5\30\r\2#\'\5"+
		"\6\4\2$\'\5\b\5\2%\'\5\16\b\2&\"\3\2\2\2&#\3\2\2\2&$\3\2\2\2&%\3\2\2\2"+
		"\'\5\3\2\2\2()\7\3\2\2)*\5\32\16\2*+\7\5\2\2+,\b\4\1\2,\7\3\2\2\2-\61"+
		"\5\n\6\2.\60\5\4\3\2/.\3\2\2\2\60\63\3\2\2\2\61/\3\2\2\2\61\62\3\2\2\2"+
		"\62\64\3\2\2\2\63\61\3\2\2\2\64\65\5\f\7\2\65\t\3\2\2\2\66\67\7\3\2\2"+
		"\678\7\7\2\289\5\32\16\29:\7\b\2\2:;\5\32\16\2;<\7\5\2\2<\13\3\2\2\2="+
		">\7\3\2\2>?\7\6\2\2?@\7\7\2\2@A\7\5\2\2A\r\3\2\2\2BF\5\20\t\2CE\5\4\3"+
		"\2DC\3\2\2\2EH\3\2\2\2FD\3\2\2\2FG\3\2\2\2GR\3\2\2\2HF\3\2\2\2IM\5\22"+
		"\n\2JL\5\4\3\2KJ\3\2\2\2LO\3\2\2\2MK\3\2\2\2MN\3\2\2\2NQ\3\2\2\2OM\3\2"+
		"\2\2PI\3\2\2\2QT\3\2\2\2RP\3\2\2\2RS\3\2\2\2S\\\3\2\2\2TR\3\2\2\2UY\5"+
		"\24\13\2VX\5\4\3\2WV\3\2\2\2X[\3\2\2\2YW\3\2\2\2YZ\3\2\2\2Z]\3\2\2\2["+
		"Y\3\2\2\2\\U\3\2\2\2\\]\3\2\2\2]^\3\2\2\2^_\5\26\f\2_\17\3\2\2\2`a\7\3"+
		"\2\2ab\7\t\2\2bc\5\32\16\2cd\7\5\2\2d\21\3\2\2\2ef\7\3\2\2fg\7\n\2\2g"+
		"h\7\t\2\2hi\5\32\16\2ij\7\5\2\2j\23\3\2\2\2kl\7\3\2\2lm\7\n\2\2mn\7\5"+
		"\2\2n\25\3\2\2\2op\7\3\2\2pq\7\6\2\2qr\7\t\2\2rs\7\5\2\2s\27\3\2\2\2t"+
		"u\7\4\2\2uv\b\r\1\2v\31\3\2\2\2w{\7\13\2\2xy\7\f\2\2y{\7\13\2\2zw\3\2"+
		"\2\2zx\3\2\2\2{\33\3\2\2\2\13\37&\61FMRY\\z";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}