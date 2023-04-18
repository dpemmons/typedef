// Generated from /home/dpemmons/src/typedef/src/lib/grammar/TypedefParser.g4 by ANTLR 4.9.2

#include "symbol_table.h"

import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class TypedefParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.9.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		KW_ARRAY=1, KW_AS=2, KW_ENUM=3, KW_FALSE=4, KW_FN=5, KW_IMPL=6, KW_MESSAGE=7, 
		KW_MODULE=8, KW_STRUCT=9, KW_TRUE=10, KW_TYPE=11, KW_TYPEDEF=12, KW_USE=13, 
		KW_VARIANT=14, KW_VECTOR=15, KW_AND=16, KW_IN=17, KW_LET=18, KW_NOT=19, 
		KW_OR=20, KW_SIZEOF=21, KW_THIS=22, KW_TRAIT=23, KW_WHERE=24, KW_XOR=25, 
		KW_BREAK=26, KW_CONTINUE=27, KW_DEFAULT=28, KW_DO=29, KW_ELSE=30, KW_FOR=31, 
		KW_GOTO=32, KW_IF=33, KW_LOOP=34, KW_MATCH=35, KW_MOVE=36, KW_RETURN=37, 
		KW_TRY=38, KW_WHILE=39, KW_YIELD=40, KW_ABSTRACT=41, KW_AUTO=42, KW_CONST=43, 
		KW_DOUBLE=44, KW_EXTERN=45, KW_FINAL=46, KW_FLOAT=47, KW_INT=48, KW_LONG=49, 
		KW_MACRO=50, KW_MUT=51, KW_OVERRIDE=52, KW_PRIVATE=53, KW_PUB=54, KW_REF=55, 
		KW_SELFTYPE=56, KW_SELFVALUE=57, KW_SIGNED=58, KW_STATIC=59, KW_SUPER=60, 
		KW_SWITCH=61, KW_TYPEOF=62, KW_UNION=63, KW_UNSAFE=64, KW_UNSIGNED=65, 
		KW_UNSIZED=66, KW_VIRTUAL=67, KW_VOID=68, KW_VOLATILE=69, KW_BOOL=70, 
		KW_CHAR=71, KW_STRING=72, KW_F32=73, KW_F64=74, KW_U8=75, KW_U16=76, KW_U32=77, 
		KW_U64=78, KW_I8=79, KW_I16=80, KW_I32=81, KW_I64=82, NON_KEYWORD_IDENTIFIER=83, 
		LINE_COMMENT=84, BLOCK_COMMENT=85, INNER_LINE_DOC=86, INNER_BLOCK_DOC=87, 
		OUTER_LINE_DOC=88, OUTER_BLOCK_DOC=89, BLOCK_COMMENT_OR_DOC=90, SHEBANG=91, 
		WS=92, CHAR_LITERAL=93, STRING_LITERAL=94, RAW_STRING_LITERAL=95, DEC_DIGITS=96, 
		DEC_DIGITS_UNDERSCORE=97, HEX_DIGITS=98, HEX_DIGITS_UNDERSCORE=99, OCT_DIGITS=100, 
		OCT_DIGITS_UNDERSCORE=101, BIN_DIGITS=102, BIN_DIGITS_UNDERSCORE=103, 
		FLOAT_LITERAL=104, OCT_DIGIT=105, DEC_DIGIT=106, HEX_DIGIT=107, HEX_PREFIX=108, 
		OCT_PREFIX=109, BIN_PREFIX=110, RAW_ESCAPE=111, PLUS=112, MINUS=113, STAR=114, 
		SLASH=115, PERCENT=116, CARET=117, NOT=118, AND=119, OR=120, ANDAND=121, 
		OROR=122, PLUSEQ=123, MINUSEQ=124, STAREQ=125, SLASHEQ=126, PERCENTEQ=127, 
		CARETEQ=128, ANDEQ=129, OREQ=130, SHLEQ=131, SHREQ=132, EQ=133, EQEQ=134, 
		NE=135, GT=136, LT=137, GE=138, LE=139, AT=140, UNDERSCORE=141, DOT=142, 
		DOTDOT=143, DOTDOTDOT=144, COMMA=145, SEMI=146, COLON=147, PATHSEP=148, 
		RARROW=149, FATARROW=150, POUND=151, DOLLAR=152, QUESTION=153, LBRACE=154, 
		RBRACE=155, LBRACK=156, RBRACK=157, LPAREN=158, RPAREN=159;
	public static final int
		RULE_compilationUnit = 0, RULE_item = 1, RULE_maybeValuedSymbolDeclaration = 2, 
		RULE_structDeclaration = 3, RULE_maybeValuedSymbol = 4, RULE_type_ = 5, 
		RULE_primitiveType = 6, RULE_valuedPrimitiveType = 7, RULE_valuedBoolFragment = 8, 
		RULE_valuedCharFragment = 9, RULE_valuedStringFragment = 10, RULE_valuedF32Fragment = 11, 
		RULE_valuedF64Fragment = 12, RULE_valuedU8Fragment = 13, RULE_valuedU16Fragment = 14, 
		RULE_valuedU32Fragment = 15, RULE_valuedU64Fragment = 16, RULE_valuedI8Fragment = 17, 
		RULE_valuedI16Fragment = 18, RULE_valuedI32Fragment = 19, RULE_valuedI64Fragment = 20, 
		RULE_typedefVersionDeclaration = 21, RULE_moduleDeclaration = 22, RULE_useDeclaration = 23, 
		RULE_useTree = 24, RULE_simplePath = 25, RULE_boolLiteral = 26, RULE_charLiteral = 27, 
		RULE_f32Literal = 28, RULE_f64Literal = 29, RULE_u8Literal = 30, RULE_u16Literal = 31, 
		RULE_u32Literal = 32, RULE_u64Literal = 33, RULE_i8Literal = 34, RULE_i16Literal = 35, 
		RULE_i32Literal = 36, RULE_i64Literal = 37, RULE_stringLiteral = 38, RULE_identifier = 39, 
		RULE_keyword = 40;
	private static String[] makeRuleNames() {
		return new String[] {
			"compilationUnit", "item", "maybeValuedSymbolDeclaration", "structDeclaration", 
			"maybeValuedSymbol", "type_", "primitiveType", "valuedPrimitiveType", 
			"valuedBoolFragment", "valuedCharFragment", "valuedStringFragment", "valuedF32Fragment", 
			"valuedF64Fragment", "valuedU8Fragment", "valuedU16Fragment", "valuedU32Fragment", 
			"valuedU64Fragment", "valuedI8Fragment", "valuedI16Fragment", "valuedI32Fragment", 
			"valuedI64Fragment", "typedefVersionDeclaration", "moduleDeclaration", 
			"useDeclaration", "useTree", "simplePath", "boolLiteral", "charLiteral", 
			"f32Literal", "f64Literal", "u8Literal", "u16Literal", "u32Literal", 
			"u64Literal", "i8Literal", "i16Literal", "i32Literal", "i64Literal", 
			"stringLiteral", "identifier", "keyword"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'array'", "'as'", "'enum'", "'false'", "'fn'", "'impl'", "'message'", 
			"'module'", "'struct'", "'true'", "'type'", "'typedef'", "'use'", "'variant'", 
			"'vector'", "'and'", "'in'", "'let'", "'not'", "'or'", "'sizeof'", "'this'", 
			"'trait'", "'where'", "'xor'", "'break'", "'continue'", "'default'", 
			"'do'", "'else'", "'for'", "'goto'", "'if'", "'loop'", "'match'", "'move'", 
			"'return'", "'try'", "'while'", "'yield'", "'abstract'", "'auto'", "'const'", 
			"'double'", "'extern'", "'final'", "'float'", "'int'", "'long'", "'macro'", 
			"'mut'", "'override'", "'private'", "'pub'", "'ref'", "'Self'", "'self'", 
			"'signed'", "'static'", "'super'", "'switch'", "'typeof'", "'union'", 
			"'unsafe'", "'unsigned'", "'unsized'", "'virtual'", "'void'", "'volatile'", 
			"'bool'", "'char'", "'str'", "'f32'", "'f64'", "'u8'", "'u16'", "'u32'", 
			"'u64'", "'i8'", "'i16'", "'i32'", "'i64'", null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, "'0x'", "'0o'", "'0b'", 
			"'r#'", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "'!'", "'&'", "'|'", 
			"'&&'", "'||'", "'+='", "'-='", "'*='", "'/='", "'%='", "'^='", "'&='", 
			"'|='", "'<<='", "'>>='", "'='", "'=='", "'!='", "'>'", "'<'", "'>='", 
			"'<='", "'@'", "'_'", "'.'", "'..'", "'...'", "','", "';'", "':'", "'::'", 
			"'->'", "'=>'", "'#'", "'$'", "'?'", "'{'", "'}'", "'['", "']'", "'('", 
			"')'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "KW_ARRAY", "KW_AS", "KW_ENUM", "KW_FALSE", "KW_FN", "KW_IMPL", 
			"KW_MESSAGE", "KW_MODULE", "KW_STRUCT", "KW_TRUE", "KW_TYPE", "KW_TYPEDEF", 
			"KW_USE", "KW_VARIANT", "KW_VECTOR", "KW_AND", "KW_IN", "KW_LET", "KW_NOT", 
			"KW_OR", "KW_SIZEOF", "KW_THIS", "KW_TRAIT", "KW_WHERE", "KW_XOR", "KW_BREAK", 
			"KW_CONTINUE", "KW_DEFAULT", "KW_DO", "KW_ELSE", "KW_FOR", "KW_GOTO", 
			"KW_IF", "KW_LOOP", "KW_MATCH", "KW_MOVE", "KW_RETURN", "KW_TRY", "KW_WHILE", 
			"KW_YIELD", "KW_ABSTRACT", "KW_AUTO", "KW_CONST", "KW_DOUBLE", "KW_EXTERN", 
			"KW_FINAL", "KW_FLOAT", "KW_INT", "KW_LONG", "KW_MACRO", "KW_MUT", "KW_OVERRIDE", 
			"KW_PRIVATE", "KW_PUB", "KW_REF", "KW_SELFTYPE", "KW_SELFVALUE", "KW_SIGNED", 
			"KW_STATIC", "KW_SUPER", "KW_SWITCH", "KW_TYPEOF", "KW_UNION", "KW_UNSAFE", 
			"KW_UNSIGNED", "KW_UNSIZED", "KW_VIRTUAL", "KW_VOID", "KW_VOLATILE", 
			"KW_BOOL", "KW_CHAR", "KW_STRING", "KW_F32", "KW_F64", "KW_U8", "KW_U16", 
			"KW_U32", "KW_U64", "KW_I8", "KW_I16", "KW_I32", "KW_I64", "NON_KEYWORD_IDENTIFIER", 
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
	public String getGrammarFileName() { return "TypedefParser.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }


		td::SymbolTable symbol_table;

	public TypedefParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class CompilationUnitContext extends ParserRuleContext {
		public TypedefVersionDeclarationContext typedefVersionDeclaration() {
			return getRuleContext(TypedefVersionDeclarationContext.class,0);
		}
		public TerminalNode EOF() { return getToken(TypedefParser.EOF, 0); }
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public ModuleDeclarationContext moduleDeclaration() {
			return getRuleContext(ModuleDeclarationContext.class,0);
		}
		public List<UseDeclarationContext> useDeclaration() {
			return getRuleContexts(UseDeclarationContext.class);
		}
		public UseDeclarationContext useDeclaration(int i) {
			return getRuleContext(UseDeclarationContext.class,i);
		}
		public List<ItemContext> item() {
			return getRuleContexts(ItemContext.class);
		}
		public ItemContext item(int i) {
			return getRuleContext(ItemContext.class,i);
		}
		public CompilationUnitContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compilationUnit; }
	}

	public final CompilationUnitContext compilationUnit() throws RecognitionException {
		CompilationUnitContext _localctx = new CompilationUnitContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_compilationUnit);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(82);
			typedefVersionDeclaration();
			setState(86);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(83);
					match(WS);
					}
					} 
				}
				setState(88);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			}
			setState(90);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==KW_MODULE) {
				{
				setState(89);
				moduleDeclaration();
				}
			}

			setState(101);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(95);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==WS) {
						{
						{
						setState(92);
						match(WS);
						}
						}
						setState(97);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(98);
					useDeclaration();
					}
					} 
				}
				setState(103);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			}
			setState(113);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(107);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==WS) {
						{
						{
						setState(104);
						match(WS);
						}
						}
						setState(109);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(110);
					item();
					}
					} 
				}
				setState(115);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			}
			setState(119);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(116);
				match(WS);
				}
				}
				setState(121);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(122);
			match(EOF);
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
		public MaybeValuedSymbolDeclarationContext maybeValuedSymbolDeclaration;
		public StructDeclarationContext structDeclaration;
		public MaybeValuedSymbolDeclarationContext maybeValuedSymbolDeclaration() {
			return getRuleContext(MaybeValuedSymbolDeclarationContext.class,0);
		}
		public StructDeclarationContext structDeclaration() {
			return getRuleContext(StructDeclarationContext.class,0);
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
			setState(130);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(124);
				((ItemContext)_localctx).maybeValuedSymbolDeclaration = maybeValuedSymbolDeclaration();

						InsertField(symbol_table, this, ((ItemContext)_localctx).maybeValuedSymbolDeclaration);

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(127);
				((ItemContext)_localctx).structDeclaration = structDeclaration();

						InsertField(symbol_table, this, ((ItemContext)_localctx).structDeclaration);

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

	public static class MaybeValuedSymbolDeclarationContext extends ParserRuleContext {
		public MaybeValuedSymbolContext maybeValuedSymbol() {
			return getRuleContext(MaybeValuedSymbolContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(TypedefParser.SEMI, 0); }
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public MaybeValuedSymbolDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_maybeValuedSymbolDeclaration; }
	}

	public final MaybeValuedSymbolDeclarationContext maybeValuedSymbolDeclaration() throws RecognitionException {
		MaybeValuedSymbolDeclarationContext _localctx = new MaybeValuedSymbolDeclarationContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_maybeValuedSymbolDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(132);
			maybeValuedSymbol();
			setState(136);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(133);
				match(WS);
				}
				}
				setState(138);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(139);
			match(SEMI);
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

	public static class StructDeclarationContext extends ParserRuleContext {
		public std::optional<td::SymbolTable::Field> maybe_field;
		public IdentifierContext identifier;
		public MaybeValuedSymbolContext maybeValuedSymbol;
		public List<MaybeValuedSymbolContext> fields = new ArrayList<MaybeValuedSymbolContext>();
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public TerminalNode KW_STRUCT() { return getToken(TypedefParser.KW_STRUCT, 0); }
		public TerminalNode LBRACE() { return getToken(TypedefParser.LBRACE, 0); }
		public TerminalNode RBRACE() { return getToken(TypedefParser.RBRACE, 0); }
		public List<TerminalNode> SEMI() { return getTokens(TypedefParser.SEMI); }
		public TerminalNode SEMI(int i) {
			return getToken(TypedefParser.SEMI, i);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public List<MaybeValuedSymbolContext> maybeValuedSymbol() {
			return getRuleContexts(MaybeValuedSymbolContext.class);
		}
		public MaybeValuedSymbolContext maybeValuedSymbol(int i) {
			return getRuleContext(MaybeValuedSymbolContext.class,i);
		}
		public StructDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_structDeclaration; }
	}

	public final StructDeclarationContext structDeclaration() throws RecognitionException {
		StructDeclarationContext _localctx = new StructDeclarationContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_structDeclaration);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(141);
			((StructDeclarationContext)_localctx).identifier = identifier();
			setState(145);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(142);
				match(WS);
				}
				}
				setState(147);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(148);
			match(COLON);
			setState(152);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(149);
				match(WS);
				}
				}
				setState(154);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(155);
			match(KW_STRUCT);
			setState(159);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(156);
				match(WS);
				}
				}
				setState(161);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(162);
			match(LBRACE);
			setState(185);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 83)) & ~0x3f) == 0 && ((1L << (_la - 83)) & ((1L << (NON_KEYWORD_IDENTIFIER - 83)) | (1L << (WS - 83)) | (1L << (RAW_ESCAPE - 83)))) != 0)) {
				{
				{
				setState(166);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(163);
					match(WS);
					}
					}
					setState(168);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				{
				setState(169);
				((StructDeclarationContext)_localctx).maybeValuedSymbol = maybeValuedSymbol();
				((StructDeclarationContext)_localctx).fields.add(((StructDeclarationContext)_localctx).maybeValuedSymbol);
				}
				setState(173);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(170);
					match(WS);
					}
					}
					setState(175);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(176);
				match(SEMI);
				setState(180);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(177);
						match(WS);
						}
						} 
					}
					setState(182);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
				}
				}
				}
				setState(187);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(188);
			match(RBRACE);
			setState(192);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(189);
				match(WS);
				}
				}
				setState(194);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(195);
			match(SEMI);
			}

					auto s = std::make_shared<td::SymbolTable::Struct>();
					for (auto field : ((StructDeclarationContext)_localctx).fields) {
						if (field->maybe_field) {
							s->table.insert(*field->maybe_field);
						}
					}
					((StructDeclarationContext)_localctx).maybe_field =  std::make_pair(((StructDeclarationContext)_localctx).identifier->id, s);
				
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

	public static class MaybeValuedSymbolContext extends ParserRuleContext {
		public std::optional<td::SymbolTable::Field> maybe_field;
		public IdentifierContext identifier;
		public Type_Context type_;
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public Type_Context type_() {
			return getRuleContext(Type_Context.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public MaybeValuedSymbolContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_maybeValuedSymbol; }
	}

	public final MaybeValuedSymbolContext maybeValuedSymbol() throws RecognitionException {
		MaybeValuedSymbolContext _localctx = new MaybeValuedSymbolContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_maybeValuedSymbol);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(199);
			((MaybeValuedSymbolContext)_localctx).identifier = identifier();
			setState(203);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,17,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(200);
					match(WS);
					}
					} 
				}
				setState(205);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,17,_ctx);
			}
			setState(206);
			((MaybeValuedSymbolContext)_localctx).type_ = type_();
			setState(210);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,18,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(207);
					match(WS);
					}
					} 
				}
				setState(212);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,18,_ctx);
			}

					((MaybeValuedSymbolContext)_localctx).maybe_field =  MakeField(((MaybeValuedSymbolContext)_localctx).identifier->id, ((MaybeValuedSymbolContext)_localctx).type_);

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

	public static class Type_Context extends ParserRuleContext {
		public PrimitiveTypeContext primitiveType() {
			return getRuleContext(PrimitiveTypeContext.class,0);
		}
		public ValuedPrimitiveTypeContext valuedPrimitiveType() {
			return getRuleContext(ValuedPrimitiveTypeContext.class,0);
		}
		public Type_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_; }
	}

	public final Type_Context type_() throws RecognitionException {
		Type_Context _localctx = new Type_Context(_ctx, getState());
		enterRule(_localctx, 10, RULE_type_);
		try {
			setState(217);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(215);
				primitiveType();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(216);
				valuedPrimitiveType();
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

	public static class PrimitiveTypeContext extends ParserRuleContext {
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public TerminalNode KW_BOOL() { return getToken(TypedefParser.KW_BOOL, 0); }
		public TerminalNode KW_CHAR() { return getToken(TypedefParser.KW_CHAR, 0); }
		public TerminalNode KW_STRING() { return getToken(TypedefParser.KW_STRING, 0); }
		public TerminalNode KW_F32() { return getToken(TypedefParser.KW_F32, 0); }
		public TerminalNode KW_F64() { return getToken(TypedefParser.KW_F64, 0); }
		public TerminalNode KW_U8() { return getToken(TypedefParser.KW_U8, 0); }
		public TerminalNode KW_U16() { return getToken(TypedefParser.KW_U16, 0); }
		public TerminalNode KW_U32() { return getToken(TypedefParser.KW_U32, 0); }
		public TerminalNode KW_U64() { return getToken(TypedefParser.KW_U64, 0); }
		public TerminalNode KW_I8() { return getToken(TypedefParser.KW_I8, 0); }
		public TerminalNode KW_I16() { return getToken(TypedefParser.KW_I16, 0); }
		public TerminalNode KW_I32() { return getToken(TypedefParser.KW_I32, 0); }
		public TerminalNode KW_I64() { return getToken(TypedefParser.KW_I64, 0); }
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public PrimitiveTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primitiveType; }
	}

	public final PrimitiveTypeContext primitiveType() throws RecognitionException {
		PrimitiveTypeContext _localctx = new PrimitiveTypeContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_primitiveType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(219);
			match(COLON);
			setState(223);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(220);
				match(WS);
				}
				}
				setState(225);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(226);
			_la = _input.LA(1);
			if ( !(((((_la - 70)) & ~0x3f) == 0 && ((1L << (_la - 70)) & ((1L << (KW_BOOL - 70)) | (1L << (KW_CHAR - 70)) | (1L << (KW_STRING - 70)) | (1L << (KW_F32 - 70)) | (1L << (KW_F64 - 70)) | (1L << (KW_U8 - 70)) | (1L << (KW_U16 - 70)) | (1L << (KW_U32 - 70)) | (1L << (KW_U64 - 70)) | (1L << (KW_I8 - 70)) | (1L << (KW_I16 - 70)) | (1L << (KW_I32 - 70)) | (1L << (KW_I64 - 70)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
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

	public static class ValuedPrimitiveTypeContext extends ParserRuleContext {
		public std::optional<td::SymbolTable::Value> maybe_val;
		public ValuedBoolFragmentContext valuedBoolFragment;
		public ValuedCharFragmentContext valuedCharFragment;
		public ValuedStringFragmentContext valuedStringFragment;
		public ValuedF32FragmentContext valuedF32Fragment;
		public ValuedF64FragmentContext valuedF64Fragment;
		public ValuedU8FragmentContext valuedU8Fragment;
		public ValuedU16FragmentContext valuedU16Fragment;
		public ValuedU32FragmentContext valuedU32Fragment;
		public ValuedU64FragmentContext valuedU64Fragment;
		public ValuedI8FragmentContext valuedI8Fragment;
		public ValuedI16FragmentContext valuedI16Fragment;
		public ValuedI32FragmentContext valuedI32Fragment;
		public ValuedI64FragmentContext valuedI64Fragment;
		public ValuedBoolFragmentContext valuedBoolFragment() {
			return getRuleContext(ValuedBoolFragmentContext.class,0);
		}
		public ValuedCharFragmentContext valuedCharFragment() {
			return getRuleContext(ValuedCharFragmentContext.class,0);
		}
		public ValuedStringFragmentContext valuedStringFragment() {
			return getRuleContext(ValuedStringFragmentContext.class,0);
		}
		public ValuedF32FragmentContext valuedF32Fragment() {
			return getRuleContext(ValuedF32FragmentContext.class,0);
		}
		public ValuedF64FragmentContext valuedF64Fragment() {
			return getRuleContext(ValuedF64FragmentContext.class,0);
		}
		public ValuedU8FragmentContext valuedU8Fragment() {
			return getRuleContext(ValuedU8FragmentContext.class,0);
		}
		public ValuedU16FragmentContext valuedU16Fragment() {
			return getRuleContext(ValuedU16FragmentContext.class,0);
		}
		public ValuedU32FragmentContext valuedU32Fragment() {
			return getRuleContext(ValuedU32FragmentContext.class,0);
		}
		public ValuedU64FragmentContext valuedU64Fragment() {
			return getRuleContext(ValuedU64FragmentContext.class,0);
		}
		public ValuedI8FragmentContext valuedI8Fragment() {
			return getRuleContext(ValuedI8FragmentContext.class,0);
		}
		public ValuedI16FragmentContext valuedI16Fragment() {
			return getRuleContext(ValuedI16FragmentContext.class,0);
		}
		public ValuedI32FragmentContext valuedI32Fragment() {
			return getRuleContext(ValuedI32FragmentContext.class,0);
		}
		public ValuedI64FragmentContext valuedI64Fragment() {
			return getRuleContext(ValuedI64FragmentContext.class,0);
		}
		public ValuedPrimitiveTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valuedPrimitiveType; }
	}

	public final ValuedPrimitiveTypeContext valuedPrimitiveType() throws RecognitionException {
		ValuedPrimitiveTypeContext _localctx = new ValuedPrimitiveTypeContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_valuedPrimitiveType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(267);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,21,_ctx) ) {
			case 1:
				{
				setState(228);
				((ValuedPrimitiveTypeContext)_localctx).valuedBoolFragment = valuedBoolFragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedBoolFragment->literal->maybe_val;
				}
				break;
			case 2:
				{
				setState(231);
				((ValuedPrimitiveTypeContext)_localctx).valuedCharFragment = valuedCharFragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedCharFragment->literal->maybe_val;
				}
				break;
			case 3:
				{
				setState(234);
				((ValuedPrimitiveTypeContext)_localctx).valuedStringFragment = valuedStringFragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedStringFragment->literal->maybe_val;
				}
				break;
			case 4:
				{
				setState(237);
				((ValuedPrimitiveTypeContext)_localctx).valuedF32Fragment = valuedF32Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedF32Fragment->literal->maybe_val;
				}
				break;
			case 5:
				{
				setState(240);
				((ValuedPrimitiveTypeContext)_localctx).valuedF64Fragment = valuedF64Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedF64Fragment->literal->maybe_val;
				}
				break;
			case 6:
				{
				setState(243);
				((ValuedPrimitiveTypeContext)_localctx).valuedU8Fragment = valuedU8Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU8Fragment->literal->maybe_val;
				}
				break;
			case 7:
				{
				setState(246);
				((ValuedPrimitiveTypeContext)_localctx).valuedU16Fragment = valuedU16Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU16Fragment->literal->maybe_val;
				}
				break;
			case 8:
				{
				setState(249);
				((ValuedPrimitiveTypeContext)_localctx).valuedU32Fragment = valuedU32Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU32Fragment->literal->maybe_val;
				}
				break;
			case 9:
				{
				setState(252);
				((ValuedPrimitiveTypeContext)_localctx).valuedU64Fragment = valuedU64Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU64Fragment->literal->maybe_val;
				}
				break;
			case 10:
				{
				setState(255);
				((ValuedPrimitiveTypeContext)_localctx).valuedI8Fragment = valuedI8Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedI8Fragment->literal->maybe_val;
				}
				break;
			case 11:
				{
				setState(258);
				((ValuedPrimitiveTypeContext)_localctx).valuedI16Fragment = valuedI16Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedI16Fragment->literal->maybe_val;
				}
				break;
			case 12:
				{
				setState(261);
				((ValuedPrimitiveTypeContext)_localctx).valuedI32Fragment = valuedI32Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedI32Fragment->literal->maybe_val;
				}
				break;
			case 13:
				{
				setState(264);
				((ValuedPrimitiveTypeContext)_localctx).valuedI64Fragment = valuedI64Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedI64Fragment->literal->maybe_val;
				}
				break;
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

	public static class ValuedBoolFragmentContext extends ParserRuleContext {
		public BoolLiteralContext literal;
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public BoolLiteralContext boolLiteral() {
			return getRuleContext(BoolLiteralContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public TerminalNode KW_BOOL() { return getToken(TypedefParser.KW_BOOL, 0); }
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public ValuedBoolFragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valuedBoolFragment; }
	}

	public final ValuedBoolFragmentContext valuedBoolFragment() throws RecognitionException {
		ValuedBoolFragmentContext _localctx = new ValuedBoolFragmentContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_valuedBoolFragment);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(277);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(269);
				match(COLON);
				setState(273);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(270);
					match(WS);
					}
					}
					setState(275);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(276);
				match(KW_BOOL);
				}
			}

			setState(282);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(279);
				match(WS);
				}
				}
				setState(284);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(285);
			match(EQ);
			setState(289);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(286);
				match(WS);
				}
				}
				setState(291);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(292);
			((ValuedBoolFragmentContext)_localctx).literal = boolLiteral();
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

	public static class ValuedCharFragmentContext extends ParserRuleContext {
		public CharLiteralContext literal;
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public CharLiteralContext charLiteral() {
			return getRuleContext(CharLiteralContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public TerminalNode KW_CHAR() { return getToken(TypedefParser.KW_CHAR, 0); }
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public ValuedCharFragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valuedCharFragment; }
	}

	public final ValuedCharFragmentContext valuedCharFragment() throws RecognitionException {
		ValuedCharFragmentContext _localctx = new ValuedCharFragmentContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_valuedCharFragment);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(302);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(294);
				match(COLON);
				setState(298);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(295);
					match(WS);
					}
					}
					setState(300);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(301);
				match(KW_CHAR);
				}
			}

			setState(307);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(304);
				match(WS);
				}
				}
				setState(309);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(310);
			match(EQ);
			setState(314);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(311);
				match(WS);
				}
				}
				setState(316);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(317);
			((ValuedCharFragmentContext)_localctx).literal = charLiteral();
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

	public static class ValuedStringFragmentContext extends ParserRuleContext {
		public StringLiteralContext literal;
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public StringLiteralContext stringLiteral() {
			return getRuleContext(StringLiteralContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public TerminalNode KW_STRING() { return getToken(TypedefParser.KW_STRING, 0); }
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public ValuedStringFragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valuedStringFragment; }
	}

	public final ValuedStringFragmentContext valuedStringFragment() throws RecognitionException {
		ValuedStringFragmentContext _localctx = new ValuedStringFragmentContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_valuedStringFragment);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(327);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(319);
				match(COLON);
				setState(323);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(320);
					match(WS);
					}
					}
					setState(325);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(326);
				match(KW_STRING);
				}
			}

			setState(332);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(329);
				match(WS);
				}
				}
				setState(334);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(335);
			match(EQ);
			setState(339);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(336);
				match(WS);
				}
				}
				setState(341);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(342);
			((ValuedStringFragmentContext)_localctx).literal = stringLiteral();
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

	public static class ValuedF32FragmentContext extends ParserRuleContext {
		public F32LiteralContext literal;
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public List<TerminalNode> KW_F32() { return getTokens(TypedefParser.KW_F32); }
		public TerminalNode KW_F32(int i) {
			return getToken(TypedefParser.KW_F32, i);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public F32LiteralContext f32Literal() {
			return getRuleContext(F32LiteralContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public ValuedF32FragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valuedF32Fragment; }
	}

	public final ValuedF32FragmentContext valuedF32Fragment() throws RecognitionException {
		ValuedF32FragmentContext _localctx = new ValuedF32FragmentContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_valuedF32Fragment);
		int _la;
		try {
			setState(380);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(344);
				match(COLON);
				setState(348);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(345);
					match(WS);
					}
					}
					setState(350);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(351);
				match(KW_F32);
				setState(355);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(352);
					match(WS);
					}
					}
					setState(357);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(358);
				match(EQ);
				setState(362);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(359);
					match(WS);
					}
					}
					setState(364);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(365);
				((ValuedF32FragmentContext)_localctx).literal = f32Literal();
				setState(367);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F32) {
					{
					setState(366);
					match(KW_F32);
					}
				}

				}
				}
				break;
			case EQ:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(369);
				match(EQ);
				setState(373);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(370);
					match(WS);
					}
					}
					setState(375);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(376);
				((ValuedF32FragmentContext)_localctx).literal = f32Literal();
				setState(378);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F32) {
					{
					setState(377);
					match(KW_F32);
					}
				}

				}
				}
				break;
			default:
				throw new NoViableAltException(this);
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

	public static class ValuedF64FragmentContext extends ParserRuleContext {
		public F64LiteralContext literal;
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public List<TerminalNode> KW_F64() { return getTokens(TypedefParser.KW_F64); }
		public TerminalNode KW_F64(int i) {
			return getToken(TypedefParser.KW_F64, i);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public F64LiteralContext f64Literal() {
			return getRuleContext(F64LiteralContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public ValuedF64FragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valuedF64Fragment; }
	}

	public final ValuedF64FragmentContext valuedF64Fragment() throws RecognitionException {
		ValuedF64FragmentContext _localctx = new ValuedF64FragmentContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_valuedF64Fragment);
		int _la;
		try {
			setState(417);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(382);
				match(COLON);
				setState(386);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(383);
					match(WS);
					}
					}
					setState(388);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(389);
				match(KW_F64);
				setState(393);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(390);
					match(WS);
					}
					}
					setState(395);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(396);
				match(EQ);
				setState(400);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(397);
					match(WS);
					}
					}
					setState(402);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(403);
				((ValuedF64FragmentContext)_localctx).literal = f64Literal();
				setState(405);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F64) {
					{
					setState(404);
					match(KW_F64);
					}
				}

				}
				}
				break;
			case EQ:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(407);
				match(EQ);
				setState(411);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(408);
					match(WS);
					}
					}
					setState(413);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(414);
				((ValuedF64FragmentContext)_localctx).literal = f64Literal();
				setState(415);
				match(KW_F64);
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
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

	public static class ValuedU8FragmentContext extends ParserRuleContext {
		public U8LiteralContext literal;
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public List<TerminalNode> KW_U8() { return getTokens(TypedefParser.KW_U8); }
		public TerminalNode KW_U8(int i) {
			return getToken(TypedefParser.KW_U8, i);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public U8LiteralContext u8Literal() {
			return getRuleContext(U8LiteralContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public ValuedU8FragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valuedU8Fragment; }
	}

	public final ValuedU8FragmentContext valuedU8Fragment() throws RecognitionException {
		ValuedU8FragmentContext _localctx = new ValuedU8FragmentContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_valuedU8Fragment);
		int _la;
		try {
			setState(454);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(419);
				match(COLON);
				setState(423);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(420);
					match(WS);
					}
					}
					setState(425);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(426);
				match(KW_U8);
				setState(430);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(427);
					match(WS);
					}
					}
					setState(432);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(433);
				match(EQ);
				setState(437);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(434);
					match(WS);
					}
					}
					setState(439);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(440);
				((ValuedU8FragmentContext)_localctx).literal = u8Literal();
				setState(442);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U8) {
					{
					setState(441);
					match(KW_U8);
					}
				}

				}
				}
				break;
			case EQ:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(444);
				match(EQ);
				setState(448);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(445);
					match(WS);
					}
					}
					setState(450);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(451);
				((ValuedU8FragmentContext)_localctx).literal = u8Literal();
				setState(452);
				match(KW_U8);
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
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

	public static class ValuedU16FragmentContext extends ParserRuleContext {
		public U16LiteralContext literal;
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public List<TerminalNode> KW_U16() { return getTokens(TypedefParser.KW_U16); }
		public TerminalNode KW_U16(int i) {
			return getToken(TypedefParser.KW_U16, i);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public U16LiteralContext u16Literal() {
			return getRuleContext(U16LiteralContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public ValuedU16FragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valuedU16Fragment; }
	}

	public final ValuedU16FragmentContext valuedU16Fragment() throws RecognitionException {
		ValuedU16FragmentContext _localctx = new ValuedU16FragmentContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_valuedU16Fragment);
		int _la;
		try {
			setState(491);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(456);
				match(COLON);
				setState(460);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(457);
					match(WS);
					}
					}
					setState(462);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(463);
				match(KW_U16);
				setState(467);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(464);
					match(WS);
					}
					}
					setState(469);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(470);
				match(EQ);
				setState(474);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(471);
					match(WS);
					}
					}
					setState(476);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(477);
				((ValuedU16FragmentContext)_localctx).literal = u16Literal();
				setState(479);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U16) {
					{
					setState(478);
					match(KW_U16);
					}
				}

				}
				}
				break;
			case EQ:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(481);
				match(EQ);
				setState(485);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(482);
					match(WS);
					}
					}
					setState(487);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(488);
				((ValuedU16FragmentContext)_localctx).literal = u16Literal();
				setState(489);
				match(KW_U16);
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
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

	public static class ValuedU32FragmentContext extends ParserRuleContext {
		public U32LiteralContext literal;
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public List<TerminalNode> KW_U32() { return getTokens(TypedefParser.KW_U32); }
		public TerminalNode KW_U32(int i) {
			return getToken(TypedefParser.KW_U32, i);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public U32LiteralContext u32Literal() {
			return getRuleContext(U32LiteralContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public ValuedU32FragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valuedU32Fragment; }
	}

	public final ValuedU32FragmentContext valuedU32Fragment() throws RecognitionException {
		ValuedU32FragmentContext _localctx = new ValuedU32FragmentContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_valuedU32Fragment);
		int _la;
		try {
			setState(528);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(493);
				match(COLON);
				setState(497);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(494);
					match(WS);
					}
					}
					setState(499);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(500);
				match(KW_U32);
				setState(504);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(501);
					match(WS);
					}
					}
					setState(506);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(507);
				match(EQ);
				setState(511);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(508);
					match(WS);
					}
					}
					setState(513);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(514);
				((ValuedU32FragmentContext)_localctx).literal = u32Literal();
				setState(516);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U32) {
					{
					setState(515);
					match(KW_U32);
					}
				}

				}
				}
				break;
			case EQ:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(518);
				match(EQ);
				setState(522);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(519);
					match(WS);
					}
					}
					setState(524);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(525);
				((ValuedU32FragmentContext)_localctx).literal = u32Literal();
				setState(526);
				match(KW_U32);
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
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

	public static class ValuedU64FragmentContext extends ParserRuleContext {
		public U64LiteralContext literal;
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public List<TerminalNode> KW_U64() { return getTokens(TypedefParser.KW_U64); }
		public TerminalNode KW_U64(int i) {
			return getToken(TypedefParser.KW_U64, i);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public U64LiteralContext u64Literal() {
			return getRuleContext(U64LiteralContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public ValuedU64FragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valuedU64Fragment; }
	}

	public final ValuedU64FragmentContext valuedU64Fragment() throws RecognitionException {
		ValuedU64FragmentContext _localctx = new ValuedU64FragmentContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_valuedU64Fragment);
		int _la;
		try {
			setState(565);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(530);
				match(COLON);
				setState(534);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(531);
					match(WS);
					}
					}
					setState(536);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(537);
				match(KW_U64);
				setState(541);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(538);
					match(WS);
					}
					}
					setState(543);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(544);
				match(EQ);
				setState(548);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(545);
					match(WS);
					}
					}
					setState(550);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(551);
				((ValuedU64FragmentContext)_localctx).literal = u64Literal();
				setState(553);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U64) {
					{
					setState(552);
					match(KW_U64);
					}
				}

				}
				}
				break;
			case EQ:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(555);
				match(EQ);
				setState(559);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(556);
					match(WS);
					}
					}
					setState(561);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(562);
				((ValuedU64FragmentContext)_localctx).literal = u64Literal();
				setState(563);
				match(KW_U64);
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
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

	public static class ValuedI8FragmentContext extends ParserRuleContext {
		public I8LiteralContext literal;
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public List<TerminalNode> KW_I8() { return getTokens(TypedefParser.KW_I8); }
		public TerminalNode KW_I8(int i) {
			return getToken(TypedefParser.KW_I8, i);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public I8LiteralContext i8Literal() {
			return getRuleContext(I8LiteralContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public ValuedI8FragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valuedI8Fragment; }
	}

	public final ValuedI8FragmentContext valuedI8Fragment() throws RecognitionException {
		ValuedI8FragmentContext _localctx = new ValuedI8FragmentContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_valuedI8Fragment);
		int _la;
		try {
			setState(602);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(567);
				match(COLON);
				setState(571);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(568);
					match(WS);
					}
					}
					setState(573);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(574);
				match(KW_I8);
				setState(578);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(575);
					match(WS);
					}
					}
					setState(580);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(581);
				match(EQ);
				setState(585);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(582);
					match(WS);
					}
					}
					setState(587);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(588);
				((ValuedI8FragmentContext)_localctx).literal = i8Literal();
				setState(590);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I8) {
					{
					setState(589);
					match(KW_I8);
					}
				}

				}
				}
				break;
			case EQ:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(592);
				match(EQ);
				setState(596);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(593);
					match(WS);
					}
					}
					setState(598);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(599);
				((ValuedI8FragmentContext)_localctx).literal = i8Literal();
				setState(600);
				match(KW_I8);
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
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

	public static class ValuedI16FragmentContext extends ParserRuleContext {
		public I16LiteralContext literal;
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public List<TerminalNode> KW_I16() { return getTokens(TypedefParser.KW_I16); }
		public TerminalNode KW_I16(int i) {
			return getToken(TypedefParser.KW_I16, i);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public I16LiteralContext i16Literal() {
			return getRuleContext(I16LiteralContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public ValuedI16FragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valuedI16Fragment; }
	}

	public final ValuedI16FragmentContext valuedI16Fragment() throws RecognitionException {
		ValuedI16FragmentContext _localctx = new ValuedI16FragmentContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_valuedI16Fragment);
		int _la;
		try {
			setState(639);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(604);
				match(COLON);
				setState(608);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(605);
					match(WS);
					}
					}
					setState(610);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(611);
				match(KW_I16);
				setState(615);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(612);
					match(WS);
					}
					}
					setState(617);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(618);
				match(EQ);
				setState(622);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(619);
					match(WS);
					}
					}
					setState(624);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(625);
				((ValuedI16FragmentContext)_localctx).literal = i16Literal();
				setState(627);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I16) {
					{
					setState(626);
					match(KW_I16);
					}
				}

				}
				}
				break;
			case EQ:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(629);
				match(EQ);
				setState(633);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(630);
					match(WS);
					}
					}
					setState(635);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(636);
				((ValuedI16FragmentContext)_localctx).literal = i16Literal();
				setState(637);
				match(KW_I16);
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
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

	public static class ValuedI32FragmentContext extends ParserRuleContext {
		public I32LiteralContext literal;
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public List<TerminalNode> KW_I32() { return getTokens(TypedefParser.KW_I32); }
		public TerminalNode KW_I32(int i) {
			return getToken(TypedefParser.KW_I32, i);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public I32LiteralContext i32Literal() {
			return getRuleContext(I32LiteralContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public ValuedI32FragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valuedI32Fragment; }
	}

	public final ValuedI32FragmentContext valuedI32Fragment() throws RecognitionException {
		ValuedI32FragmentContext _localctx = new ValuedI32FragmentContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_valuedI32Fragment);
		int _la;
		try {
			setState(677);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(641);
				match(COLON);
				setState(645);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(642);
					match(WS);
					}
					}
					setState(647);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(648);
				match(KW_I32);
				setState(652);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(649);
					match(WS);
					}
					}
					setState(654);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(655);
				match(EQ);
				setState(659);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(656);
					match(WS);
					}
					}
					setState(661);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(662);
				((ValuedI32FragmentContext)_localctx).literal = i32Literal();
				setState(664);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I32) {
					{
					setState(663);
					match(KW_I32);
					}
				}

				}
				}
				break;
			case EQ:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(666);
				match(EQ);
				setState(670);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(667);
					match(WS);
					}
					}
					setState(672);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(673);
				((ValuedI32FragmentContext)_localctx).literal = i32Literal();
				setState(675);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I32) {
					{
					setState(674);
					match(KW_I32);
					}
				}

				}
				}
				break;
			default:
				throw new NoViableAltException(this);
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

	public static class ValuedI64FragmentContext extends ParserRuleContext {
		public I64LiteralContext literal;
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public List<TerminalNode> KW_I64() { return getTokens(TypedefParser.KW_I64); }
		public TerminalNode KW_I64(int i) {
			return getToken(TypedefParser.KW_I64, i);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public I64LiteralContext i64Literal() {
			return getRuleContext(I64LiteralContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public ValuedI64FragmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valuedI64Fragment; }
	}

	public final ValuedI64FragmentContext valuedI64Fragment() throws RecognitionException {
		ValuedI64FragmentContext _localctx = new ValuedI64FragmentContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_valuedI64Fragment);
		int _la;
		try {
			setState(714);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(679);
				match(COLON);
				setState(683);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(680);
					match(WS);
					}
					}
					setState(685);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(686);
				match(KW_I64);
				setState(690);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(687);
					match(WS);
					}
					}
					setState(692);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(693);
				match(EQ);
				setState(697);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(694);
					match(WS);
					}
					}
					setState(699);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(700);
				((ValuedI64FragmentContext)_localctx).literal = i64Literal();
				setState(702);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I64) {
					{
					setState(701);
					match(KW_I64);
					}
				}

				}
				}
				break;
			case EQ:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(704);
				match(EQ);
				setState(708);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(705);
					match(WS);
					}
					}
					setState(710);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(711);
				((ValuedI64FragmentContext)_localctx).literal = i64Literal();
				setState(712);
				match(KW_I64);
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
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

	public static class TypedefVersionDeclarationContext extends ParserRuleContext {
		public TerminalNode KW_TYPEDEF() { return getToken(TypedefParser.KW_TYPEDEF, 0); }
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(TypedefParser.SEMI, 0); }
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public TypedefVersionDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typedefVersionDeclaration; }
	}

	public final TypedefVersionDeclarationContext typedefVersionDeclaration() throws RecognitionException {
		TypedefVersionDeclarationContext _localctx = new TypedefVersionDeclarationContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_typedefVersionDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(716);
			match(KW_TYPEDEF);
			setState(720);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(717);
				match(WS);
				}
				}
				setState(722);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(723);
			match(EQ);
			setState(727);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(724);
				match(WS);
				}
				}
				setState(729);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(730);
			identifier();
			setState(734);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(731);
				match(WS);
				}
				}
				setState(736);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(737);
			match(SEMI);
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

	public static class ModuleDeclarationContext extends ParserRuleContext {
		public TerminalNode KW_MODULE() { return getToken(TypedefParser.KW_MODULE, 0); }
		public SimplePathContext simplePath() {
			return getRuleContext(SimplePathContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(TypedefParser.SEMI, 0); }
		public ModuleDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_moduleDeclaration; }
	}

	public final ModuleDeclarationContext moduleDeclaration() throws RecognitionException {
		ModuleDeclarationContext _localctx = new ModuleDeclarationContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_moduleDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(739);
			match(KW_MODULE);
			setState(740);
			simplePath();
			setState(741);
			match(SEMI);
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

	public static class UseDeclarationContext extends ParserRuleContext {
		public TerminalNode KW_USE() { return getToken(TypedefParser.KW_USE, 0); }
		public UseTreeContext useTree() {
			return getRuleContext(UseTreeContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(TypedefParser.SEMI, 0); }
		public UseDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_useDeclaration; }
	}

	public final UseDeclarationContext useDeclaration() throws RecognitionException {
		UseDeclarationContext _localctx = new UseDeclarationContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_useDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(743);
			match(KW_USE);
			setState(744);
			useTree();
			setState(745);
			match(SEMI);
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

	public static class UseTreeContext extends ParserRuleContext {
		public TerminalNode STAR() { return getToken(TypedefParser.STAR, 0); }
		public TerminalNode LBRACE() { return getToken(TypedefParser.LBRACE, 0); }
		public TerminalNode RBRACE() { return getToken(TypedefParser.RBRACE, 0); }
		public TerminalNode PATHSEP() { return getToken(TypedefParser.PATHSEP, 0); }
		public List<UseTreeContext> useTree() {
			return getRuleContexts(UseTreeContext.class);
		}
		public UseTreeContext useTree(int i) {
			return getRuleContext(UseTreeContext.class,i);
		}
		public SimplePathContext simplePath() {
			return getRuleContext(SimplePathContext.class,0);
		}
		public List<TerminalNode> COMMA() { return getTokens(TypedefParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(TypedefParser.COMMA, i);
		}
		public TerminalNode KW_AS() { return getToken(TypedefParser.KW_AS, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public UseTreeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_useTree; }
	}

	public final UseTreeContext useTree() throws RecognitionException {
		UseTreeContext _localctx = new UseTreeContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_useTree);
		int _la;
		try {
			int _alt;
			setState(776);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,106,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(751);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE || _la==PATHSEP) {
					{
					setState(748);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,99,_ctx) ) {
					case 1:
						{
						setState(747);
						simplePath();
						}
						break;
					}
					setState(750);
					match(PATHSEP);
					}
				}

				setState(769);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case STAR:
					{
					setState(753);
					match(STAR);
					}
					break;
				case LBRACE:
					{
					setState(754);
					match(LBRACE);
					setState(766);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (((((_la - 83)) & ~0x3f) == 0 && ((1L << (_la - 83)) & ((1L << (NON_KEYWORD_IDENTIFIER - 83)) | (1L << (RAW_ESCAPE - 83)) | (1L << (STAR - 83)))) != 0) || _la==PATHSEP || _la==LBRACE) {
						{
						setState(755);
						useTree();
						setState(760);
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,101,_ctx);
						while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
							if ( _alt==1 ) {
								{
								{
								setState(756);
								match(COMMA);
								setState(757);
								useTree();
								}
								} 
							}
							setState(762);
							_errHandler.sync(this);
							_alt = getInterpreter().adaptivePredict(_input,101,_ctx);
						}
						setState(764);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(763);
							match(COMMA);
							}
						}

						}
					}

					setState(768);
					match(RBRACE);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(771);
				simplePath();
				setState(774);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_AS) {
					{
					setState(772);
					match(KW_AS);
					setState(773);
					identifier();
					}
				}

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

	public static class SimplePathContext extends ParserRuleContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public List<TerminalNode> PATHSEP() { return getTokens(TypedefParser.PATHSEP); }
		public TerminalNode PATHSEP(int i) {
			return getToken(TypedefParser.PATHSEP, i);
		}
		public SimplePathContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simplePath; }
	}

	public final SimplePathContext simplePath() throws RecognitionException {
		SimplePathContext _localctx = new SimplePathContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_simplePath);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(779);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PATHSEP) {
				{
				setState(778);
				match(PATHSEP);
				}
			}

			setState(781);
			identifier();
			setState(786);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,108,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(782);
					match(PATHSEP);
					setState(783);
					identifier();
					}
					} 
				}
				setState(788);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,108,_ctx);
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

	public static class BoolLiteralContext extends ParserRuleContext {
		public std::optional<bool> maybe_val;
		public TerminalNode KW_TRUE() { return getToken(TypedefParser.KW_TRUE, 0); }
		public TerminalNode KW_FALSE() { return getToken(TypedefParser.KW_FALSE, 0); }
		public BoolLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_boolLiteral; }
	}

	public final BoolLiteralContext boolLiteral() throws RecognitionException {
		BoolLiteralContext _localctx = new BoolLiteralContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_boolLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(789);
			_la = _input.LA(1);
			if ( !(_la==KW_FALSE || _la==KW_TRUE) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
			_ctx.stop = _input.LT(-1);

					// From boolLiteral grammar.
					if (_localctx->start->getType() == TypedefParser::KW_FALSE) {
						((BoolLiteralContext)_localctx).maybe_val =  false;
					} else if (_localctx->start->getType() == TypedefParser::KW_TRUE) {
						((BoolLiteralContext)_localctx).maybe_val =  true;
					} else {
						throw InputMismatchException(this);
					}
					// End from boolLiteral grammar.
			  
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

	public static class CharLiteralContext extends ParserRuleContext {
		public std::optional<char32_t> maybe_val;
		public TerminalNode CHAR_LITERAL() { return getToken(TypedefParser.CHAR_LITERAL, 0); }
		public CharLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_charLiteral; }
	}

	public final CharLiteralContext charLiteral() throws RecognitionException {
		CharLiteralContext _localctx = new CharLiteralContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_charLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(791);
			match(CHAR_LITERAL);

					((CharLiteralContext)_localctx).maybe_val =  GetCharValue(this, _localctx);
			  
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

	public static class F32LiteralContext extends ParserRuleContext {
		public std::optional<float> maybe_val;
		public TerminalNode FLOAT_LITERAL() { return getToken(TypedefParser.FLOAT_LITERAL, 0); }
		public F32LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_f32Literal; }
	}

	public final F32LiteralContext f32Literal() throws RecognitionException {
		F32LiteralContext _localctx = new F32LiteralContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_f32Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(794);
			match(FLOAT_LITERAL);

					((F32LiteralContext)_localctx).maybe_val =  GetFloatValue<float>(this, _localctx);
			  
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

	public static class F64LiteralContext extends ParserRuleContext {
		public std::optional<double> maybe_val;
		public TerminalNode FLOAT_LITERAL() { return getToken(TypedefParser.FLOAT_LITERAL, 0); }
		public F64LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_f64Literal; }
	}

	public final F64LiteralContext f64Literal() throws RecognitionException {
		F64LiteralContext _localctx = new F64LiteralContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_f64Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(797);
			match(FLOAT_LITERAL);

					((F64LiteralContext)_localctx).maybe_val =  GetFloatValue<double>(this, _localctx);
			  
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

	public static class U8LiteralContext extends ParserRuleContext {
		public std::optional<uint8_t> maybe_val;
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public U8LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u8Literal; }
	}

	public final U8LiteralContext u8Literal() throws RecognitionException {
		U8LiteralContext _localctx = new U8LiteralContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_u8Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(807);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(800);
				_la = _input.LA(1);
				if ( !(_la==DEC_DIGITS || _la==DEC_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(801);
				match(HEX_PREFIX);
				setState(802);
				_la = _input.LA(1);
				if ( !(_la==HEX_DIGITS || _la==HEX_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case OCT_PREFIX:
				{
				{
				setState(803);
				match(OCT_PREFIX);
				setState(804);
				_la = _input.LA(1);
				if ( !(_la==OCT_DIGITS || _la==OCT_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case BIN_PREFIX:
				{
				{
				setState(805);
				match(BIN_PREFIX);
				setState(806);
				_la = _input.LA(1);
				if ( !(_la==BIN_DIGITS || _la==BIN_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}

					((U8LiteralContext)_localctx).maybe_val =  GetIntValue<uint8_t>(this, _localctx);
			  
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

	public static class U16LiteralContext extends ParserRuleContext {
		public std::optional<uint16_t> maybe_val;
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public U16LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u16Literal; }
	}

	public final U16LiteralContext u16Literal() throws RecognitionException {
		U16LiteralContext _localctx = new U16LiteralContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_u16Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(818);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(811);
				_la = _input.LA(1);
				if ( !(_la==DEC_DIGITS || _la==DEC_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(812);
				match(HEX_PREFIX);
				setState(813);
				_la = _input.LA(1);
				if ( !(_la==HEX_DIGITS || _la==HEX_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case OCT_PREFIX:
				{
				{
				setState(814);
				match(OCT_PREFIX);
				setState(815);
				_la = _input.LA(1);
				if ( !(_la==OCT_DIGITS || _la==OCT_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case BIN_PREFIX:
				{
				{
				setState(816);
				match(BIN_PREFIX);
				setState(817);
				_la = _input.LA(1);
				if ( !(_la==BIN_DIGITS || _la==BIN_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}

					((U16LiteralContext)_localctx).maybe_val =  GetIntValue<uint16_t>(this, _localctx);
			  
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

	public static class U32LiteralContext extends ParserRuleContext {
		public std::optional<uint32_t> maybe_val;
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public U32LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u32Literal; }
	}

	public final U32LiteralContext u32Literal() throws RecognitionException {
		U32LiteralContext _localctx = new U32LiteralContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_u32Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(829);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(822);
				_la = _input.LA(1);
				if ( !(_la==DEC_DIGITS || _la==DEC_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(823);
				match(HEX_PREFIX);
				setState(824);
				_la = _input.LA(1);
				if ( !(_la==HEX_DIGITS || _la==HEX_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case OCT_PREFIX:
				{
				{
				setState(825);
				match(OCT_PREFIX);
				setState(826);
				_la = _input.LA(1);
				if ( !(_la==OCT_DIGITS || _la==OCT_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case BIN_PREFIX:
				{
				{
				setState(827);
				match(BIN_PREFIX);
				setState(828);
				_la = _input.LA(1);
				if ( !(_la==BIN_DIGITS || _la==BIN_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}

					((U32LiteralContext)_localctx).maybe_val =  GetIntValue<uint32_t>(this, _localctx);
			  
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

	public static class U64LiteralContext extends ParserRuleContext {
		public std::optional<uint64_t> maybe_val;
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public U64LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u64Literal; }
	}

	public final U64LiteralContext u64Literal() throws RecognitionException {
		U64LiteralContext _localctx = new U64LiteralContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_u64Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(840);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(833);
				_la = _input.LA(1);
				if ( !(_la==DEC_DIGITS || _la==DEC_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(834);
				match(HEX_PREFIX);
				setState(835);
				_la = _input.LA(1);
				if ( !(_la==HEX_DIGITS || _la==HEX_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case OCT_PREFIX:
				{
				{
				setState(836);
				match(OCT_PREFIX);
				setState(837);
				_la = _input.LA(1);
				if ( !(_la==OCT_DIGITS || _la==OCT_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case BIN_PREFIX:
				{
				{
				setState(838);
				match(BIN_PREFIX);
				setState(839);
				_la = _input.LA(1);
				if ( !(_la==BIN_DIGITS || _la==BIN_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}

					((U64LiteralContext)_localctx).maybe_val =  GetIntValue<uint64_t>(this, _localctx);
			  
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

	public static class I8LiteralContext extends ParserRuleContext {
		public std::optional<int8_t> maybe_val;
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public I8LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i8Literal; }
	}

	public final I8LiteralContext i8Literal() throws RecognitionException {
		I8LiteralContext _localctx = new I8LiteralContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_i8Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(851);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(844);
				_la = _input.LA(1);
				if ( !(_la==DEC_DIGITS || _la==DEC_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(845);
				match(HEX_PREFIX);
				setState(846);
				_la = _input.LA(1);
				if ( !(_la==HEX_DIGITS || _la==HEX_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case OCT_PREFIX:
				{
				{
				setState(847);
				match(OCT_PREFIX);
				setState(848);
				_la = _input.LA(1);
				if ( !(_la==OCT_DIGITS || _la==OCT_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case BIN_PREFIX:
				{
				{
				setState(849);
				match(BIN_PREFIX);
				setState(850);
				_la = _input.LA(1);
				if ( !(_la==BIN_DIGITS || _la==BIN_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}

					((I8LiteralContext)_localctx).maybe_val =  GetIntValue<int8_t>(this, _localctx);
			  
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

	public static class I16LiteralContext extends ParserRuleContext {
		public std::optional<int16_t> maybe_val;
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public I16LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i16Literal; }
	}

	public final I16LiteralContext i16Literal() throws RecognitionException {
		I16LiteralContext _localctx = new I16LiteralContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_i16Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(862);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(855);
				_la = _input.LA(1);
				if ( !(_la==DEC_DIGITS || _la==DEC_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(856);
				match(HEX_PREFIX);
				setState(857);
				_la = _input.LA(1);
				if ( !(_la==HEX_DIGITS || _la==HEX_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case OCT_PREFIX:
				{
				{
				setState(858);
				match(OCT_PREFIX);
				setState(859);
				_la = _input.LA(1);
				if ( !(_la==OCT_DIGITS || _la==OCT_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case BIN_PREFIX:
				{
				{
				setState(860);
				match(BIN_PREFIX);
				setState(861);
				_la = _input.LA(1);
				if ( !(_la==BIN_DIGITS || _la==BIN_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}

					((I16LiteralContext)_localctx).maybe_val =  GetIntValue<int16_t>(this, _localctx);
			  
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

	public static class I32LiteralContext extends ParserRuleContext {
		public std::optional<int32_t> maybe_val;
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public I32LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i32Literal; }
	}

	public final I32LiteralContext i32Literal() throws RecognitionException {
		I32LiteralContext _localctx = new I32LiteralContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_i32Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(873);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(866);
				_la = _input.LA(1);
				if ( !(_la==DEC_DIGITS || _la==DEC_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(867);
				match(HEX_PREFIX);
				setState(868);
				_la = _input.LA(1);
				if ( !(_la==HEX_DIGITS || _la==HEX_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case OCT_PREFIX:
				{
				{
				setState(869);
				match(OCT_PREFIX);
				setState(870);
				_la = _input.LA(1);
				if ( !(_la==OCT_DIGITS || _la==OCT_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case BIN_PREFIX:
				{
				{
				setState(871);
				match(BIN_PREFIX);
				setState(872);
				_la = _input.LA(1);
				if ( !(_la==BIN_DIGITS || _la==BIN_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}

					((I32LiteralContext)_localctx).maybe_val =  GetIntValue<int32_t>(this, _localctx);
			  
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

	public static class I64LiteralContext extends ParserRuleContext {
		public std::optional<int64_t> maybe_val;
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public I64LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i64Literal; }
	}

	public final I64LiteralContext i64Literal() throws RecognitionException {
		I64LiteralContext _localctx = new I64LiteralContext(_ctx, getState());
		enterRule(_localctx, 74, RULE_i64Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(884);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
				{
				setState(877);
				_la = _input.LA(1);
				if ( !(_la==DEC_DIGITS || _la==DEC_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(878);
				match(HEX_PREFIX);
				setState(879);
				_la = _input.LA(1);
				if ( !(_la==HEX_DIGITS || _la==HEX_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case OCT_PREFIX:
				{
				{
				setState(880);
				match(OCT_PREFIX);
				setState(881);
				_la = _input.LA(1);
				if ( !(_la==OCT_DIGITS || _la==OCT_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			case BIN_PREFIX:
				{
				{
				setState(882);
				match(BIN_PREFIX);
				setState(883);
				_la = _input.LA(1);
				if ( !(_la==BIN_DIGITS || _la==BIN_DIGITS_UNDERSCORE) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}

					((I64LiteralContext)_localctx).maybe_val =  GetIntValue<int64_t>(this, _localctx);
			  
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

	public static class StringLiteralContext extends ParserRuleContext {
		public std::optional<std::string> maybe_val;
		public Token STRING_LITERAL;
		public Token RAW_STRING_LITERAL;
		public TerminalNode STRING_LITERAL() { return getToken(TypedefParser.STRING_LITERAL, 0); }
		public TerminalNode RAW_STRING_LITERAL() { return getToken(TypedefParser.RAW_STRING_LITERAL, 0); }
		public StringLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stringLiteral; }
	}

	public final StringLiteralContext stringLiteral() throws RecognitionException {
		StringLiteralContext _localctx = new StringLiteralContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_stringLiteral);
		try {
			setState(892);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STRING_LITERAL:
				enterOuterAlt(_localctx, 1);
				{
				setState(888);
				((StringLiteralContext)_localctx).STRING_LITERAL = match(STRING_LITERAL);

						((StringLiteralContext)_localctx).maybe_val =  GetStringValue(this, ((StringLiteralContext)_localctx).STRING_LITERAL);
					
				}
				break;
			case RAW_STRING_LITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(890);
				((StringLiteralContext)_localctx).RAW_STRING_LITERAL = match(RAW_STRING_LITERAL);

						((StringLiteralContext)_localctx).maybe_val =  GetRawString(this, ((StringLiteralContext)_localctx).RAW_STRING_LITERAL);
					
				}
				break;
			default:
				throw new NoViableAltException(this);
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
		public TerminalNode NON_KEYWORD_IDENTIFIER() { return getToken(TypedefParser.NON_KEYWORD_IDENTIFIER, 0); }
		public TerminalNode RAW_ESCAPE() { return getToken(TypedefParser.RAW_ESCAPE, 0); }
		public IdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifier; }
	}

	public final IdentifierContext identifier() throws RecognitionException {
		IdentifierContext _localctx = new IdentifierContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_identifier);
		try {
			setState(897);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NON_KEYWORD_IDENTIFIER:
				enterOuterAlt(_localctx, 1);
				{
				setState(894);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(895);
				match(RAW_ESCAPE);
				setState(896);
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

	public static class KeywordContext extends ParserRuleContext {
		public TerminalNode KW_AS() { return getToken(TypedefParser.KW_AS, 0); }
		public TerminalNode KW_ENUM() { return getToken(TypedefParser.KW_ENUM, 0); }
		public TerminalNode KW_FALSE() { return getToken(TypedefParser.KW_FALSE, 0); }
		public TerminalNode KW_FN() { return getToken(TypedefParser.KW_FN, 0); }
		public TerminalNode KW_IMPL() { return getToken(TypedefParser.KW_IMPL, 0); }
		public TerminalNode KW_MODULE() { return getToken(TypedefParser.KW_MODULE, 0); }
		public TerminalNode KW_STRUCT() { return getToken(TypedefParser.KW_STRUCT, 0); }
		public TerminalNode KW_TRUE() { return getToken(TypedefParser.KW_TRUE, 0); }
		public TerminalNode KW_TYPE() { return getToken(TypedefParser.KW_TYPE, 0); }
		public TerminalNode KW_TYPEDEF() { return getToken(TypedefParser.KW_TYPEDEF, 0); }
		public TerminalNode KW_USE() { return getToken(TypedefParser.KW_USE, 0); }
		public TerminalNode KW_AND() { return getToken(TypedefParser.KW_AND, 0); }
		public TerminalNode KW_IN() { return getToken(TypedefParser.KW_IN, 0); }
		public TerminalNode KW_LET() { return getToken(TypedefParser.KW_LET, 0); }
		public TerminalNode KW_NOT() { return getToken(TypedefParser.KW_NOT, 0); }
		public TerminalNode KW_OR() { return getToken(TypedefParser.KW_OR, 0); }
		public TerminalNode KW_SIZEOF() { return getToken(TypedefParser.KW_SIZEOF, 0); }
		public TerminalNode KW_THIS() { return getToken(TypedefParser.KW_THIS, 0); }
		public TerminalNode KW_TRAIT() { return getToken(TypedefParser.KW_TRAIT, 0); }
		public TerminalNode KW_WHERE() { return getToken(TypedefParser.KW_WHERE, 0); }
		public TerminalNode KW_XOR() { return getToken(TypedefParser.KW_XOR, 0); }
		public TerminalNode KW_BREAK() { return getToken(TypedefParser.KW_BREAK, 0); }
		public TerminalNode KW_CONTINUE() { return getToken(TypedefParser.KW_CONTINUE, 0); }
		public TerminalNode KW_DEFAULT() { return getToken(TypedefParser.KW_DEFAULT, 0); }
		public TerminalNode KW_DO() { return getToken(TypedefParser.KW_DO, 0); }
		public TerminalNode KW_ELSE() { return getToken(TypedefParser.KW_ELSE, 0); }
		public TerminalNode KW_FOR() { return getToken(TypedefParser.KW_FOR, 0); }
		public TerminalNode KW_GOTO() { return getToken(TypedefParser.KW_GOTO, 0); }
		public TerminalNode KW_IF() { return getToken(TypedefParser.KW_IF, 0); }
		public TerminalNode KW_LOOP() { return getToken(TypedefParser.KW_LOOP, 0); }
		public TerminalNode KW_MATCH() { return getToken(TypedefParser.KW_MATCH, 0); }
		public TerminalNode KW_MOVE() { return getToken(TypedefParser.KW_MOVE, 0); }
		public TerminalNode KW_RETURN() { return getToken(TypedefParser.KW_RETURN, 0); }
		public TerminalNode KW_TRY() { return getToken(TypedefParser.KW_TRY, 0); }
		public TerminalNode KW_WHILE() { return getToken(TypedefParser.KW_WHILE, 0); }
		public TerminalNode KW_YIELD() { return getToken(TypedefParser.KW_YIELD, 0); }
		public TerminalNode KW_ABSTRACT() { return getToken(TypedefParser.KW_ABSTRACT, 0); }
		public TerminalNode KW_AUTO() { return getToken(TypedefParser.KW_AUTO, 0); }
		public TerminalNode KW_CONST() { return getToken(TypedefParser.KW_CONST, 0); }
		public TerminalNode KW_DOUBLE() { return getToken(TypedefParser.KW_DOUBLE, 0); }
		public TerminalNode KW_EXTERN() { return getToken(TypedefParser.KW_EXTERN, 0); }
		public TerminalNode KW_FINAL() { return getToken(TypedefParser.KW_FINAL, 0); }
		public TerminalNode KW_FLOAT() { return getToken(TypedefParser.KW_FLOAT, 0); }
		public TerminalNode KW_INT() { return getToken(TypedefParser.KW_INT, 0); }
		public TerminalNode KW_LONG() { return getToken(TypedefParser.KW_LONG, 0); }
		public TerminalNode KW_MACRO() { return getToken(TypedefParser.KW_MACRO, 0); }
		public TerminalNode KW_MUT() { return getToken(TypedefParser.KW_MUT, 0); }
		public TerminalNode KW_OVERRIDE() { return getToken(TypedefParser.KW_OVERRIDE, 0); }
		public TerminalNode KW_PRIVATE() { return getToken(TypedefParser.KW_PRIVATE, 0); }
		public TerminalNode KW_PUB() { return getToken(TypedefParser.KW_PUB, 0); }
		public TerminalNode KW_REF() { return getToken(TypedefParser.KW_REF, 0); }
		public TerminalNode KW_SELFTYPE() { return getToken(TypedefParser.KW_SELFTYPE, 0); }
		public TerminalNode KW_SELFVALUE() { return getToken(TypedefParser.KW_SELFVALUE, 0); }
		public TerminalNode KW_SIGNED() { return getToken(TypedefParser.KW_SIGNED, 0); }
		public TerminalNode KW_STATIC() { return getToken(TypedefParser.KW_STATIC, 0); }
		public TerminalNode KW_SUPER() { return getToken(TypedefParser.KW_SUPER, 0); }
		public TerminalNode KW_SWITCH() { return getToken(TypedefParser.KW_SWITCH, 0); }
		public TerminalNode KW_TYPEOF() { return getToken(TypedefParser.KW_TYPEOF, 0); }
		public TerminalNode KW_UNION() { return getToken(TypedefParser.KW_UNION, 0); }
		public TerminalNode KW_UNSAFE() { return getToken(TypedefParser.KW_UNSAFE, 0); }
		public TerminalNode KW_UNSIGNED() { return getToken(TypedefParser.KW_UNSIGNED, 0); }
		public TerminalNode KW_UNSIZED() { return getToken(TypedefParser.KW_UNSIZED, 0); }
		public TerminalNode KW_VIRTUAL() { return getToken(TypedefParser.KW_VIRTUAL, 0); }
		public TerminalNode KW_VOID() { return getToken(TypedefParser.KW_VOID, 0); }
		public TerminalNode KW_VOLATILE() { return getToken(TypedefParser.KW_VOLATILE, 0); }
		public KeywordContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_keyword; }
	}

	public final KeywordContext keyword() throws RecognitionException {
		KeywordContext _localctx = new KeywordContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_keyword);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(899);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << KW_AS) | (1L << KW_ENUM) | (1L << KW_FALSE) | (1L << KW_FN) | (1L << KW_IMPL) | (1L << KW_MODULE) | (1L << KW_STRUCT) | (1L << KW_TRUE) | (1L << KW_TYPE) | (1L << KW_TYPEDEF) | (1L << KW_USE) | (1L << KW_AND) | (1L << KW_IN) | (1L << KW_LET) | (1L << KW_NOT) | (1L << KW_OR) | (1L << KW_SIZEOF) | (1L << KW_THIS) | (1L << KW_TRAIT) | (1L << KW_WHERE) | (1L << KW_XOR) | (1L << KW_BREAK) | (1L << KW_CONTINUE) | (1L << KW_DEFAULT) | (1L << KW_DO) | (1L << KW_ELSE) | (1L << KW_FOR) | (1L << KW_GOTO) | (1L << KW_IF) | (1L << KW_LOOP) | (1L << KW_MATCH) | (1L << KW_MOVE) | (1L << KW_RETURN) | (1L << KW_TRY) | (1L << KW_WHILE) | (1L << KW_YIELD) | (1L << KW_ABSTRACT) | (1L << KW_AUTO) | (1L << KW_CONST) | (1L << KW_DOUBLE) | (1L << KW_EXTERN) | (1L << KW_FINAL) | (1L << KW_FLOAT) | (1L << KW_INT) | (1L << KW_LONG) | (1L << KW_MACRO) | (1L << KW_MUT) | (1L << KW_OVERRIDE) | (1L << KW_PRIVATE) | (1L << KW_PUB) | (1L << KW_REF) | (1L << KW_SELFTYPE) | (1L << KW_SELFVALUE) | (1L << KW_SIGNED) | (1L << KW_STATIC) | (1L << KW_SUPER) | (1L << KW_SWITCH) | (1L << KW_TYPEOF) | (1L << KW_UNION))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (KW_UNSAFE - 64)) | (1L << (KW_UNSIGNED - 64)) | (1L << (KW_UNSIZED - 64)) | (1L << (KW_VIRTUAL - 64)) | (1L << (KW_VOID - 64)) | (1L << (KW_VOLATILE - 64)))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
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

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00a1\u0388\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\3\2\3\2"+
		"\7\2W\n\2\f\2\16\2Z\13\2\3\2\5\2]\n\2\3\2\7\2`\n\2\f\2\16\2c\13\2\3\2"+
		"\7\2f\n\2\f\2\16\2i\13\2\3\2\7\2l\n\2\f\2\16\2o\13\2\3\2\7\2r\n\2\f\2"+
		"\16\2u\13\2\3\2\7\2x\n\2\f\2\16\2{\13\2\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3"+
		"\3\5\3\u0085\n\3\3\4\3\4\7\4\u0089\n\4\f\4\16\4\u008c\13\4\3\4\3\4\3\5"+
		"\3\5\7\5\u0092\n\5\f\5\16\5\u0095\13\5\3\5\3\5\7\5\u0099\n\5\f\5\16\5"+
		"\u009c\13\5\3\5\3\5\7\5\u00a0\n\5\f\5\16\5\u00a3\13\5\3\5\3\5\7\5\u00a7"+
		"\n\5\f\5\16\5\u00aa\13\5\3\5\3\5\7\5\u00ae\n\5\f\5\16\5\u00b1\13\5\3\5"+
		"\3\5\7\5\u00b5\n\5\f\5\16\5\u00b8\13\5\7\5\u00ba\n\5\f\5\16\5\u00bd\13"+
		"\5\3\5\3\5\7\5\u00c1\n\5\f\5\16\5\u00c4\13\5\3\5\3\5\3\5\3\5\3\6\3\6\7"+
		"\6\u00cc\n\6\f\6\16\6\u00cf\13\6\3\6\3\6\7\6\u00d3\n\6\f\6\16\6\u00d6"+
		"\13\6\3\6\3\6\3\7\3\7\5\7\u00dc\n\7\3\b\3\b\7\b\u00e0\n\b\f\b\16\b\u00e3"+
		"\13\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t"+
		"\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3"+
		"\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\5\t\u010e\n\t\3\n\3\n\7\n\u0112\n\n\f\n"+
		"\16\n\u0115\13\n\3\n\5\n\u0118\n\n\3\n\7\n\u011b\n\n\f\n\16\n\u011e\13"+
		"\n\3\n\3\n\7\n\u0122\n\n\f\n\16\n\u0125\13\n\3\n\3\n\3\13\3\13\7\13\u012b"+
		"\n\13\f\13\16\13\u012e\13\13\3\13\5\13\u0131\n\13\3\13\7\13\u0134\n\13"+
		"\f\13\16\13\u0137\13\13\3\13\3\13\7\13\u013b\n\13\f\13\16\13\u013e\13"+
		"\13\3\13\3\13\3\f\3\f\7\f\u0144\n\f\f\f\16\f\u0147\13\f\3\f\5\f\u014a"+
		"\n\f\3\f\7\f\u014d\n\f\f\f\16\f\u0150\13\f\3\f\3\f\7\f\u0154\n\f\f\f\16"+
		"\f\u0157\13\f\3\f\3\f\3\r\3\r\7\r\u015d\n\r\f\r\16\r\u0160\13\r\3\r\3"+
		"\r\7\r\u0164\n\r\f\r\16\r\u0167\13\r\3\r\3\r\7\r\u016b\n\r\f\r\16\r\u016e"+
		"\13\r\3\r\3\r\5\r\u0172\n\r\3\r\3\r\7\r\u0176\n\r\f\r\16\r\u0179\13\r"+
		"\3\r\3\r\5\r\u017d\n\r\5\r\u017f\n\r\3\16\3\16\7\16\u0183\n\16\f\16\16"+
		"\16\u0186\13\16\3\16\3\16\7\16\u018a\n\16\f\16\16\16\u018d\13\16\3\16"+
		"\3\16\7\16\u0191\n\16\f\16\16\16\u0194\13\16\3\16\3\16\5\16\u0198\n\16"+
		"\3\16\3\16\7\16\u019c\n\16\f\16\16\16\u019f\13\16\3\16\3\16\3\16\5\16"+
		"\u01a4\n\16\3\17\3\17\7\17\u01a8\n\17\f\17\16\17\u01ab\13\17\3\17\3\17"+
		"\7\17\u01af\n\17\f\17\16\17\u01b2\13\17\3\17\3\17\7\17\u01b6\n\17\f\17"+
		"\16\17\u01b9\13\17\3\17\3\17\5\17\u01bd\n\17\3\17\3\17\7\17\u01c1\n\17"+
		"\f\17\16\17\u01c4\13\17\3\17\3\17\3\17\5\17\u01c9\n\17\3\20\3\20\7\20"+
		"\u01cd\n\20\f\20\16\20\u01d0\13\20\3\20\3\20\7\20\u01d4\n\20\f\20\16\20"+
		"\u01d7\13\20\3\20\3\20\7\20\u01db\n\20\f\20\16\20\u01de\13\20\3\20\3\20"+
		"\5\20\u01e2\n\20\3\20\3\20\7\20\u01e6\n\20\f\20\16\20\u01e9\13\20\3\20"+
		"\3\20\3\20\5\20\u01ee\n\20\3\21\3\21\7\21\u01f2\n\21\f\21\16\21\u01f5"+
		"\13\21\3\21\3\21\7\21\u01f9\n\21\f\21\16\21\u01fc\13\21\3\21\3\21\7\21"+
		"\u0200\n\21\f\21\16\21\u0203\13\21\3\21\3\21\5\21\u0207\n\21\3\21\3\21"+
		"\7\21\u020b\n\21\f\21\16\21\u020e\13\21\3\21\3\21\3\21\5\21\u0213\n\21"+
		"\3\22\3\22\7\22\u0217\n\22\f\22\16\22\u021a\13\22\3\22\3\22\7\22\u021e"+
		"\n\22\f\22\16\22\u0221\13\22\3\22\3\22\7\22\u0225\n\22\f\22\16\22\u0228"+
		"\13\22\3\22\3\22\5\22\u022c\n\22\3\22\3\22\7\22\u0230\n\22\f\22\16\22"+
		"\u0233\13\22\3\22\3\22\3\22\5\22\u0238\n\22\3\23\3\23\7\23\u023c\n\23"+
		"\f\23\16\23\u023f\13\23\3\23\3\23\7\23\u0243\n\23\f\23\16\23\u0246\13"+
		"\23\3\23\3\23\7\23\u024a\n\23\f\23\16\23\u024d\13\23\3\23\3\23\5\23\u0251"+
		"\n\23\3\23\3\23\7\23\u0255\n\23\f\23\16\23\u0258\13\23\3\23\3\23\3\23"+
		"\5\23\u025d\n\23\3\24\3\24\7\24\u0261\n\24\f\24\16\24\u0264\13\24\3\24"+
		"\3\24\7\24\u0268\n\24\f\24\16\24\u026b\13\24\3\24\3\24\7\24\u026f\n\24"+
		"\f\24\16\24\u0272\13\24\3\24\3\24\5\24\u0276\n\24\3\24\3\24\7\24\u027a"+
		"\n\24\f\24\16\24\u027d\13\24\3\24\3\24\3\24\5\24\u0282\n\24\3\25\3\25"+
		"\7\25\u0286\n\25\f\25\16\25\u0289\13\25\3\25\3\25\7\25\u028d\n\25\f\25"+
		"\16\25\u0290\13\25\3\25\3\25\7\25\u0294\n\25\f\25\16\25\u0297\13\25\3"+
		"\25\3\25\5\25\u029b\n\25\3\25\3\25\7\25\u029f\n\25\f\25\16\25\u02a2\13"+
		"\25\3\25\3\25\5\25\u02a6\n\25\5\25\u02a8\n\25\3\26\3\26\7\26\u02ac\n\26"+
		"\f\26\16\26\u02af\13\26\3\26\3\26\7\26\u02b3\n\26\f\26\16\26\u02b6\13"+
		"\26\3\26\3\26\7\26\u02ba\n\26\f\26\16\26\u02bd\13\26\3\26\3\26\5\26\u02c1"+
		"\n\26\3\26\3\26\7\26\u02c5\n\26\f\26\16\26\u02c8\13\26\3\26\3\26\3\26"+
		"\5\26\u02cd\n\26\3\27\3\27\7\27\u02d1\n\27\f\27\16\27\u02d4\13\27\3\27"+
		"\3\27\7\27\u02d8\n\27\f\27\16\27\u02db\13\27\3\27\3\27\7\27\u02df\n\27"+
		"\f\27\16\27\u02e2\13\27\3\27\3\27\3\30\3\30\3\30\3\30\3\31\3\31\3\31\3"+
		"\31\3\32\5\32\u02ef\n\32\3\32\5\32\u02f2\n\32\3\32\3\32\3\32\3\32\3\32"+
		"\7\32\u02f9\n\32\f\32\16\32\u02fc\13\32\3\32\5\32\u02ff\n\32\5\32\u0301"+
		"\n\32\3\32\5\32\u0304\n\32\3\32\3\32\3\32\5\32\u0309\n\32\5\32\u030b\n"+
		"\32\3\33\5\33\u030e\n\33\3\33\3\33\3\33\7\33\u0313\n\33\f\33\16\33\u0316"+
		"\13\33\3\34\3\34\3\35\3\35\3\35\3\36\3\36\3\36\3\37\3\37\3\37\3 \3 \3"+
		" \3 \3 \3 \3 \5 \u032a\n \3 \3 \3!\3!\3!\3!\3!\3!\3!\5!\u0335\n!\3!\3"+
		"!\3\"\3\"\3\"\3\"\3\"\3\"\3\"\5\"\u0340\n\"\3\"\3\"\3#\3#\3#\3#\3#\3#"+
		"\3#\5#\u034b\n#\3#\3#\3$\3$\3$\3$\3$\3$\3$\5$\u0356\n$\3$\3$\3%\3%\3%"+
		"\3%\3%\3%\3%\5%\u0361\n%\3%\3%\3&\3&\3&\3&\3&\3&\3&\5&\u036c\n&\3&\3&"+
		"\3\'\3\'\3\'\3\'\3\'\3\'\3\'\5\'\u0377\n\'\3\'\3\'\3(\3(\3(\3(\5(\u037f"+
		"\n(\3)\3)\3)\5)\u0384\n)\3*\3*\3*\2\2+\2\4\6\b\n\f\16\20\22\24\26\30\32"+
		"\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPR\2\t\3\2HT\4\2\6\6\f\f\3\2bc"+
		"\3\2de\3\2fg\3\2hi\5\2\4\b\n\17\22G\2\u03f0\2T\3\2\2\2\4\u0084\3\2\2\2"+
		"\6\u0086\3\2\2\2\b\u008f\3\2\2\2\n\u00c9\3\2\2\2\f\u00db\3\2\2\2\16\u00dd"+
		"\3\2\2\2\20\u010d\3\2\2\2\22\u0117\3\2\2\2\24\u0130\3\2\2\2\26\u0149\3"+
		"\2\2\2\30\u017e\3\2\2\2\32\u01a3\3\2\2\2\34\u01c8\3\2\2\2\36\u01ed\3\2"+
		"\2\2 \u0212\3\2\2\2\"\u0237\3\2\2\2$\u025c\3\2\2\2&\u0281\3\2\2\2(\u02a7"+
		"\3\2\2\2*\u02cc\3\2\2\2,\u02ce\3\2\2\2.\u02e5\3\2\2\2\60\u02e9\3\2\2\2"+
		"\62\u030a\3\2\2\2\64\u030d\3\2\2\2\66\u0317\3\2\2\28\u0319\3\2\2\2:\u031c"+
		"\3\2\2\2<\u031f\3\2\2\2>\u0329\3\2\2\2@\u0334\3\2\2\2B\u033f\3\2\2\2D"+
		"\u034a\3\2\2\2F\u0355\3\2\2\2H\u0360\3\2\2\2J\u036b\3\2\2\2L\u0376\3\2"+
		"\2\2N\u037e\3\2\2\2P\u0383\3\2\2\2R\u0385\3\2\2\2TX\5,\27\2UW\7^\2\2V"+
		"U\3\2\2\2WZ\3\2\2\2XV\3\2\2\2XY\3\2\2\2Y\\\3\2\2\2ZX\3\2\2\2[]\5.\30\2"+
		"\\[\3\2\2\2\\]\3\2\2\2]g\3\2\2\2^`\7^\2\2_^\3\2\2\2`c\3\2\2\2a_\3\2\2"+
		"\2ab\3\2\2\2bd\3\2\2\2ca\3\2\2\2df\5\60\31\2ea\3\2\2\2fi\3\2\2\2ge\3\2"+
		"\2\2gh\3\2\2\2hs\3\2\2\2ig\3\2\2\2jl\7^\2\2kj\3\2\2\2lo\3\2\2\2mk\3\2"+
		"\2\2mn\3\2\2\2np\3\2\2\2om\3\2\2\2pr\5\4\3\2qm\3\2\2\2ru\3\2\2\2sq\3\2"+
		"\2\2st\3\2\2\2ty\3\2\2\2us\3\2\2\2vx\7^\2\2wv\3\2\2\2x{\3\2\2\2yw\3\2"+
		"\2\2yz\3\2\2\2z|\3\2\2\2{y\3\2\2\2|}\7\2\2\3}\3\3\2\2\2~\177\5\6\4\2\177"+
		"\u0080\b\3\1\2\u0080\u0085\3\2\2\2\u0081\u0082\5\b\5\2\u0082\u0083\b\3"+
		"\1\2\u0083\u0085\3\2\2\2\u0084~\3\2\2\2\u0084\u0081\3\2\2\2\u0085\5\3"+
		"\2\2\2\u0086\u008a\5\n\6\2\u0087\u0089\7^\2\2\u0088\u0087\3\2\2\2\u0089"+
		"\u008c\3\2\2\2\u008a\u0088\3\2\2\2\u008a\u008b\3\2\2\2\u008b\u008d\3\2"+
		"\2\2\u008c\u008a\3\2\2\2\u008d\u008e\7\u0094\2\2\u008e\7\3\2\2\2\u008f"+
		"\u0093\5P)\2\u0090\u0092\7^\2\2\u0091\u0090\3\2\2\2\u0092\u0095\3\2\2"+
		"\2\u0093\u0091\3\2\2\2\u0093\u0094\3\2\2\2\u0094\u0096\3\2\2\2\u0095\u0093"+
		"\3\2\2\2\u0096\u009a\7\u0095\2\2\u0097\u0099\7^\2\2\u0098\u0097\3\2\2"+
		"\2\u0099\u009c\3\2\2\2\u009a\u0098\3\2\2\2\u009a\u009b\3\2\2\2\u009b\u009d"+
		"\3\2\2\2\u009c\u009a\3\2\2\2\u009d\u00a1\7\13\2\2\u009e\u00a0\7^\2\2\u009f"+
		"\u009e\3\2\2\2\u00a0\u00a3\3\2\2\2\u00a1\u009f\3\2\2\2\u00a1\u00a2\3\2"+
		"\2\2\u00a2\u00a4\3\2\2\2\u00a3\u00a1\3\2\2\2\u00a4\u00bb\7\u009c\2\2\u00a5"+
		"\u00a7\7^\2\2\u00a6\u00a5\3\2\2\2\u00a7\u00aa\3\2\2\2\u00a8\u00a6\3\2"+
		"\2\2\u00a8\u00a9\3\2\2\2\u00a9\u00ab\3\2\2\2\u00aa\u00a8\3\2\2\2\u00ab"+
		"\u00af\5\n\6\2\u00ac\u00ae\7^\2\2\u00ad\u00ac\3\2\2\2\u00ae\u00b1\3\2"+
		"\2\2\u00af\u00ad\3\2\2\2\u00af\u00b0\3\2\2\2\u00b0\u00b2\3\2\2\2\u00b1"+
		"\u00af\3\2\2\2\u00b2\u00b6\7\u0094\2\2\u00b3\u00b5\7^\2\2\u00b4\u00b3"+
		"\3\2\2\2\u00b5\u00b8\3\2\2\2\u00b6\u00b4\3\2\2\2\u00b6\u00b7\3\2\2\2\u00b7"+
		"\u00ba\3\2\2\2\u00b8\u00b6\3\2\2\2\u00b9\u00a8\3\2\2\2\u00ba\u00bd\3\2"+
		"\2\2\u00bb\u00b9\3\2\2\2\u00bb\u00bc\3\2\2\2\u00bc\u00be\3\2\2\2\u00bd"+
		"\u00bb\3\2\2\2\u00be\u00c2\7\u009d\2\2\u00bf\u00c1\7^\2\2\u00c0\u00bf"+
		"\3\2\2\2\u00c1\u00c4\3\2\2\2\u00c2\u00c0\3\2\2\2\u00c2\u00c3\3\2\2\2\u00c3"+
		"\u00c5\3\2\2\2\u00c4\u00c2\3\2\2\2\u00c5\u00c6\7\u0094\2\2\u00c6\u00c7"+
		"\3\2\2\2\u00c7\u00c8\b\5\1\2\u00c8\t\3\2\2\2\u00c9\u00cd\5P)\2\u00ca\u00cc"+
		"\7^\2\2\u00cb\u00ca\3\2\2\2\u00cc\u00cf\3\2\2\2\u00cd\u00cb\3\2\2\2\u00cd"+
		"\u00ce\3\2\2\2\u00ce\u00d0\3\2\2\2\u00cf\u00cd\3\2\2\2\u00d0\u00d4\5\f"+
		"\7\2\u00d1\u00d3\7^\2\2\u00d2\u00d1\3\2\2\2\u00d3\u00d6\3\2\2\2\u00d4"+
		"\u00d2\3\2\2\2\u00d4\u00d5\3\2\2\2\u00d5\u00d7\3\2\2\2\u00d6\u00d4\3\2"+
		"\2\2\u00d7\u00d8\b\6\1\2\u00d8\13\3\2\2\2\u00d9\u00dc\5\16\b\2\u00da\u00dc"+
		"\5\20\t\2\u00db\u00d9\3\2\2\2\u00db\u00da\3\2\2\2\u00dc\r\3\2\2\2\u00dd"+
		"\u00e1\7\u0095\2\2\u00de\u00e0\7^\2\2\u00df\u00de\3\2\2\2\u00e0\u00e3"+
		"\3\2\2\2\u00e1\u00df\3\2\2\2\u00e1\u00e2\3\2\2\2\u00e2\u00e4\3\2\2\2\u00e3"+
		"\u00e1\3\2\2\2\u00e4\u00e5\t\2\2\2\u00e5\17\3\2\2\2\u00e6\u00e7\5\22\n"+
		"\2\u00e7\u00e8\b\t\1\2\u00e8\u010e\3\2\2\2\u00e9\u00ea\5\24\13\2\u00ea"+
		"\u00eb\b\t\1\2\u00eb\u010e\3\2\2\2\u00ec\u00ed\5\26\f\2\u00ed\u00ee\b"+
		"\t\1\2\u00ee\u010e\3\2\2\2\u00ef\u00f0\5\30\r\2\u00f0\u00f1\b\t\1\2\u00f1"+
		"\u010e\3\2\2\2\u00f2\u00f3\5\32\16\2\u00f3\u00f4\b\t\1\2\u00f4\u010e\3"+
		"\2\2\2\u00f5\u00f6\5\34\17\2\u00f6\u00f7\b\t\1\2\u00f7\u010e\3\2\2\2\u00f8"+
		"\u00f9\5\36\20\2\u00f9\u00fa\b\t\1\2\u00fa\u010e\3\2\2\2\u00fb\u00fc\5"+
		" \21\2\u00fc\u00fd\b\t\1\2\u00fd\u010e\3\2\2\2\u00fe\u00ff\5\"\22\2\u00ff"+
		"\u0100\b\t\1\2\u0100\u010e\3\2\2\2\u0101\u0102\5$\23\2\u0102\u0103\b\t"+
		"\1\2\u0103\u010e\3\2\2\2\u0104\u0105\5&\24\2\u0105\u0106\b\t\1\2\u0106"+
		"\u010e\3\2\2\2\u0107\u0108\5(\25\2\u0108\u0109\b\t\1\2\u0109\u010e\3\2"+
		"\2\2\u010a\u010b\5*\26\2\u010b\u010c\b\t\1\2\u010c\u010e\3\2\2\2\u010d"+
		"\u00e6\3\2\2\2\u010d\u00e9\3\2\2\2\u010d\u00ec\3\2\2\2\u010d\u00ef\3\2"+
		"\2\2\u010d\u00f2\3\2\2\2\u010d\u00f5\3\2\2\2\u010d\u00f8\3\2\2\2\u010d"+
		"\u00fb\3\2\2\2\u010d\u00fe\3\2\2\2\u010d\u0101\3\2\2\2\u010d\u0104\3\2"+
		"\2\2\u010d\u0107\3\2\2\2\u010d\u010a\3\2\2\2\u010e\21\3\2\2\2\u010f\u0113"+
		"\7\u0095\2\2\u0110\u0112\7^\2\2\u0111\u0110\3\2\2\2\u0112\u0115\3\2\2"+
		"\2\u0113\u0111\3\2\2\2\u0113\u0114\3\2\2\2\u0114\u0116\3\2\2\2\u0115\u0113"+
		"\3\2\2\2\u0116\u0118\7H\2\2\u0117\u010f\3\2\2\2\u0117\u0118\3\2\2\2\u0118"+
		"\u011c\3\2\2\2\u0119\u011b\7^\2\2\u011a\u0119\3\2\2\2\u011b\u011e\3\2"+
		"\2\2\u011c\u011a\3\2\2\2\u011c\u011d\3\2\2\2\u011d\u011f\3\2\2\2\u011e"+
		"\u011c\3\2\2\2\u011f\u0123\7\u0087\2\2\u0120\u0122\7^\2\2\u0121\u0120"+
		"\3\2\2\2\u0122\u0125\3\2\2\2\u0123\u0121\3\2\2\2\u0123\u0124\3\2\2\2\u0124"+
		"\u0126\3\2\2\2\u0125\u0123\3\2\2\2\u0126\u0127\5\66\34\2\u0127\23\3\2"+
		"\2\2\u0128\u012c\7\u0095\2\2\u0129\u012b\7^\2\2\u012a\u0129\3\2\2\2\u012b"+
		"\u012e\3\2\2\2\u012c\u012a\3\2\2\2\u012c\u012d\3\2\2\2\u012d\u012f\3\2"+
		"\2\2\u012e\u012c\3\2\2\2\u012f\u0131\7I\2\2\u0130\u0128\3\2\2\2\u0130"+
		"\u0131\3\2\2\2\u0131\u0135\3\2\2\2\u0132\u0134\7^\2\2\u0133\u0132\3\2"+
		"\2\2\u0134\u0137\3\2\2\2\u0135\u0133\3\2\2\2\u0135\u0136\3\2\2\2\u0136"+
		"\u0138\3\2\2\2\u0137\u0135\3\2\2\2\u0138\u013c\7\u0087\2\2\u0139\u013b"+
		"\7^\2\2\u013a\u0139\3\2\2\2\u013b\u013e\3\2\2\2\u013c\u013a\3\2\2\2\u013c"+
		"\u013d\3\2\2\2\u013d\u013f\3\2\2\2\u013e\u013c\3\2\2\2\u013f\u0140\58"+
		"\35\2\u0140\25\3\2\2\2\u0141\u0145\7\u0095\2\2\u0142\u0144\7^\2\2\u0143"+
		"\u0142\3\2\2\2\u0144\u0147\3\2\2\2\u0145\u0143\3\2\2\2\u0145\u0146\3\2"+
		"\2\2\u0146\u0148\3\2\2\2\u0147\u0145\3\2\2\2\u0148\u014a\7J\2\2\u0149"+
		"\u0141\3\2\2\2\u0149\u014a\3\2\2\2\u014a\u014e\3\2\2\2\u014b\u014d\7^"+
		"\2\2\u014c\u014b\3\2\2\2\u014d\u0150\3\2\2\2\u014e\u014c\3\2\2\2\u014e"+
		"\u014f\3\2\2\2\u014f\u0151\3\2\2\2\u0150\u014e\3\2\2\2\u0151\u0155\7\u0087"+
		"\2\2\u0152\u0154\7^\2\2\u0153\u0152\3\2\2\2\u0154\u0157\3\2\2\2\u0155"+
		"\u0153\3\2\2\2\u0155\u0156\3\2\2\2\u0156\u0158\3\2\2\2\u0157\u0155\3\2"+
		"\2\2\u0158\u0159\5N(\2\u0159\27\3\2\2\2\u015a\u015e\7\u0095\2\2\u015b"+
		"\u015d\7^\2\2\u015c\u015b\3\2\2\2\u015d\u0160\3\2\2\2\u015e\u015c\3\2"+
		"\2\2\u015e\u015f\3\2\2\2\u015f\u0161\3\2\2\2\u0160\u015e\3\2\2\2\u0161"+
		"\u0165\7K\2\2\u0162\u0164\7^\2\2\u0163\u0162\3\2\2\2\u0164\u0167\3\2\2"+
		"\2\u0165\u0163\3\2\2\2\u0165\u0166\3\2\2\2\u0166\u0168\3\2\2\2\u0167\u0165"+
		"\3\2\2\2\u0168\u016c\7\u0087\2\2\u0169\u016b\7^\2\2\u016a\u0169\3\2\2"+
		"\2\u016b\u016e\3\2\2\2\u016c\u016a\3\2\2\2\u016c\u016d\3\2\2\2\u016d\u016f"+
		"\3\2\2\2\u016e\u016c\3\2\2\2\u016f\u0171\5:\36\2\u0170\u0172\7K\2\2\u0171"+
		"\u0170\3\2\2\2\u0171\u0172\3\2\2\2\u0172\u017f\3\2\2\2\u0173\u0177\7\u0087"+
		"\2\2\u0174\u0176\7^\2\2\u0175\u0174\3\2\2\2\u0176\u0179\3\2\2\2\u0177"+
		"\u0175\3\2\2\2\u0177\u0178\3\2\2\2\u0178\u017a\3\2\2\2\u0179\u0177\3\2"+
		"\2\2\u017a\u017c\5:\36\2\u017b\u017d\7K\2\2\u017c\u017b\3\2\2\2\u017c"+
		"\u017d\3\2\2\2\u017d\u017f\3\2\2\2\u017e\u015a\3\2\2\2\u017e\u0173\3\2"+
		"\2\2\u017f\31\3\2\2\2\u0180\u0184\7\u0095\2\2\u0181\u0183\7^\2\2\u0182"+
		"\u0181\3\2\2\2\u0183\u0186\3\2\2\2\u0184\u0182\3\2\2\2\u0184\u0185\3\2"+
		"\2\2\u0185\u0187\3\2\2\2\u0186\u0184\3\2\2\2\u0187\u018b\7L\2\2\u0188"+
		"\u018a\7^\2\2\u0189\u0188\3\2\2\2\u018a\u018d\3\2\2\2\u018b\u0189\3\2"+
		"\2\2\u018b\u018c\3\2\2\2\u018c\u018e\3\2\2\2\u018d\u018b\3\2\2\2\u018e"+
		"\u0192\7\u0087\2\2\u018f\u0191\7^\2\2\u0190\u018f\3\2\2\2\u0191\u0194"+
		"\3\2\2\2\u0192\u0190\3\2\2\2\u0192\u0193\3\2\2\2\u0193\u0195\3\2\2\2\u0194"+
		"\u0192\3\2\2\2\u0195\u0197\5<\37\2\u0196\u0198\7L\2\2\u0197\u0196\3\2"+
		"\2\2\u0197\u0198\3\2\2\2\u0198\u01a4\3\2\2\2\u0199\u019d\7\u0087\2\2\u019a"+
		"\u019c\7^\2\2\u019b\u019a\3\2\2\2\u019c\u019f\3\2\2\2\u019d\u019b\3\2"+
		"\2\2\u019d\u019e\3\2\2\2\u019e\u01a0\3\2\2\2\u019f\u019d\3\2\2\2\u01a0"+
		"\u01a1\5<\37\2\u01a1\u01a2\7L\2\2\u01a2\u01a4\3\2\2\2\u01a3\u0180\3\2"+
		"\2\2\u01a3\u0199\3\2\2\2\u01a4\33\3\2\2\2\u01a5\u01a9\7\u0095\2\2\u01a6"+
		"\u01a8\7^\2\2\u01a7\u01a6\3\2\2\2\u01a8\u01ab\3\2\2\2\u01a9\u01a7\3\2"+
		"\2\2\u01a9\u01aa\3\2\2\2\u01aa\u01ac\3\2\2\2\u01ab\u01a9\3\2\2\2\u01ac"+
		"\u01b0\7M\2\2\u01ad\u01af\7^\2\2\u01ae\u01ad\3\2\2\2\u01af\u01b2\3\2\2"+
		"\2\u01b0\u01ae\3\2\2\2\u01b0\u01b1\3\2\2\2\u01b1\u01b3\3\2\2\2\u01b2\u01b0"+
		"\3\2\2\2\u01b3\u01b7\7\u0087\2\2\u01b4\u01b6\7^\2\2\u01b5\u01b4\3\2\2"+
		"\2\u01b6\u01b9\3\2\2\2\u01b7\u01b5\3\2\2\2\u01b7\u01b8\3\2\2\2\u01b8\u01ba"+
		"\3\2\2\2\u01b9\u01b7\3\2\2\2\u01ba\u01bc\5> \2\u01bb\u01bd\7M\2\2\u01bc"+
		"\u01bb\3\2\2\2\u01bc\u01bd\3\2\2\2\u01bd\u01c9\3\2\2\2\u01be\u01c2\7\u0087"+
		"\2\2\u01bf\u01c1\7^\2\2\u01c0\u01bf\3\2\2\2\u01c1\u01c4\3\2\2\2\u01c2"+
		"\u01c0\3\2\2\2\u01c2\u01c3\3\2\2\2\u01c3\u01c5\3\2\2\2\u01c4\u01c2\3\2"+
		"\2\2\u01c5\u01c6\5> \2\u01c6\u01c7\7M\2\2\u01c7\u01c9\3\2\2\2\u01c8\u01a5"+
		"\3\2\2\2\u01c8\u01be\3\2\2\2\u01c9\35\3\2\2\2\u01ca\u01ce\7\u0095\2\2"+
		"\u01cb\u01cd\7^\2\2\u01cc\u01cb\3\2\2\2\u01cd\u01d0\3\2\2\2\u01ce\u01cc"+
		"\3\2\2\2\u01ce\u01cf\3\2\2\2\u01cf\u01d1\3\2\2\2\u01d0\u01ce\3\2\2\2\u01d1"+
		"\u01d5\7N\2\2\u01d2\u01d4\7^\2\2\u01d3\u01d2\3\2\2\2\u01d4\u01d7\3\2\2"+
		"\2\u01d5\u01d3\3\2\2\2\u01d5\u01d6\3\2\2\2\u01d6\u01d8\3\2\2\2\u01d7\u01d5"+
		"\3\2\2\2\u01d8\u01dc\7\u0087\2\2\u01d9\u01db\7^\2\2\u01da\u01d9\3\2\2"+
		"\2\u01db\u01de\3\2\2\2\u01dc\u01da\3\2\2\2\u01dc\u01dd\3\2\2\2\u01dd\u01df"+
		"\3\2\2\2\u01de\u01dc\3\2\2\2\u01df\u01e1\5@!\2\u01e0\u01e2\7N\2\2\u01e1"+
		"\u01e0\3\2\2\2\u01e1\u01e2\3\2\2\2\u01e2\u01ee\3\2\2\2\u01e3\u01e7\7\u0087"+
		"\2\2\u01e4\u01e6\7^\2\2\u01e5\u01e4\3\2\2\2\u01e6\u01e9\3\2\2\2\u01e7"+
		"\u01e5\3\2\2\2\u01e7\u01e8\3\2\2\2\u01e8\u01ea\3\2\2\2\u01e9\u01e7\3\2"+
		"\2\2\u01ea\u01eb\5@!\2\u01eb\u01ec\7N\2\2\u01ec\u01ee\3\2\2\2\u01ed\u01ca"+
		"\3\2\2\2\u01ed\u01e3\3\2\2\2\u01ee\37\3\2\2\2\u01ef\u01f3\7\u0095\2\2"+
		"\u01f0\u01f2\7^\2\2\u01f1\u01f0\3\2\2\2\u01f2\u01f5\3\2\2\2\u01f3\u01f1"+
		"\3\2\2\2\u01f3\u01f4\3\2\2\2\u01f4\u01f6\3\2\2\2\u01f5\u01f3\3\2\2\2\u01f6"+
		"\u01fa\7O\2\2\u01f7\u01f9\7^\2\2\u01f8\u01f7\3\2\2\2\u01f9\u01fc\3\2\2"+
		"\2\u01fa\u01f8\3\2\2\2\u01fa\u01fb\3\2\2\2\u01fb\u01fd\3\2\2\2\u01fc\u01fa"+
		"\3\2\2\2\u01fd\u0201\7\u0087\2\2\u01fe\u0200\7^\2\2\u01ff\u01fe\3\2\2"+
		"\2\u0200\u0203\3\2\2\2\u0201\u01ff\3\2\2\2\u0201\u0202\3\2\2\2\u0202\u0204"+
		"\3\2\2\2\u0203\u0201\3\2\2\2\u0204\u0206\5B\"\2\u0205\u0207\7O\2\2\u0206"+
		"\u0205\3\2\2\2\u0206\u0207\3\2\2\2\u0207\u0213\3\2\2\2\u0208\u020c\7\u0087"+
		"\2\2\u0209\u020b\7^\2\2\u020a\u0209\3\2\2\2\u020b\u020e\3\2\2\2\u020c"+
		"\u020a\3\2\2\2\u020c\u020d\3\2\2\2\u020d\u020f\3\2\2\2\u020e\u020c\3\2"+
		"\2\2\u020f\u0210\5B\"\2\u0210\u0211\7O\2\2\u0211\u0213\3\2\2\2\u0212\u01ef"+
		"\3\2\2\2\u0212\u0208\3\2\2\2\u0213!\3\2\2\2\u0214\u0218\7\u0095\2\2\u0215"+
		"\u0217\7^\2\2\u0216\u0215\3\2\2\2\u0217\u021a\3\2\2\2\u0218\u0216\3\2"+
		"\2\2\u0218\u0219\3\2\2\2\u0219\u021b\3\2\2\2\u021a\u0218\3\2\2\2\u021b"+
		"\u021f\7P\2\2\u021c\u021e\7^\2\2\u021d\u021c\3\2\2\2\u021e\u0221\3\2\2"+
		"\2\u021f\u021d\3\2\2\2\u021f\u0220\3\2\2\2\u0220\u0222\3\2\2\2\u0221\u021f"+
		"\3\2\2\2\u0222\u0226\7\u0087\2\2\u0223\u0225\7^\2\2\u0224\u0223\3\2\2"+
		"\2\u0225\u0228\3\2\2\2\u0226\u0224\3\2\2\2\u0226\u0227\3\2\2\2\u0227\u0229"+
		"\3\2\2\2\u0228\u0226\3\2\2\2\u0229\u022b\5D#\2\u022a\u022c\7P\2\2\u022b"+
		"\u022a\3\2\2\2\u022b\u022c\3\2\2\2\u022c\u0238\3\2\2\2\u022d\u0231\7\u0087"+
		"\2\2\u022e\u0230\7^\2\2\u022f\u022e\3\2\2\2\u0230\u0233\3\2\2\2\u0231"+
		"\u022f\3\2\2\2\u0231\u0232\3\2\2\2\u0232\u0234\3\2\2\2\u0233\u0231\3\2"+
		"\2\2\u0234\u0235\5D#\2\u0235\u0236\7P\2\2\u0236\u0238\3\2\2\2\u0237\u0214"+
		"\3\2\2\2\u0237\u022d\3\2\2\2\u0238#\3\2\2\2\u0239\u023d\7\u0095\2\2\u023a"+
		"\u023c\7^\2\2\u023b\u023a\3\2\2\2\u023c\u023f\3\2\2\2\u023d\u023b\3\2"+
		"\2\2\u023d\u023e\3\2\2\2\u023e\u0240\3\2\2\2\u023f\u023d\3\2\2\2\u0240"+
		"\u0244\7Q\2\2\u0241\u0243\7^\2\2\u0242\u0241\3\2\2\2\u0243\u0246\3\2\2"+
		"\2\u0244\u0242\3\2\2\2\u0244\u0245\3\2\2\2\u0245\u0247\3\2\2\2\u0246\u0244"+
		"\3\2\2\2\u0247\u024b\7\u0087\2\2\u0248\u024a\7^\2\2\u0249\u0248\3\2\2"+
		"\2\u024a\u024d\3\2\2\2\u024b\u0249\3\2\2\2\u024b\u024c\3\2\2\2\u024c\u024e"+
		"\3\2\2\2\u024d\u024b\3\2\2\2\u024e\u0250\5F$\2\u024f\u0251\7Q\2\2\u0250"+
		"\u024f\3\2\2\2\u0250\u0251\3\2\2\2\u0251\u025d\3\2\2\2\u0252\u0256\7\u0087"+
		"\2\2\u0253\u0255\7^\2\2\u0254\u0253\3\2\2\2\u0255\u0258\3\2\2\2\u0256"+
		"\u0254\3\2\2\2\u0256\u0257\3\2\2\2\u0257\u0259\3\2\2\2\u0258\u0256\3\2"+
		"\2\2\u0259\u025a\5F$\2\u025a\u025b\7Q\2\2\u025b\u025d\3\2\2\2\u025c\u0239"+
		"\3\2\2\2\u025c\u0252\3\2\2\2\u025d%\3\2\2\2\u025e\u0262\7\u0095\2\2\u025f"+
		"\u0261\7^\2\2\u0260\u025f\3\2\2\2\u0261\u0264\3\2\2\2\u0262\u0260\3\2"+
		"\2\2\u0262\u0263\3\2\2\2\u0263\u0265\3\2\2\2\u0264\u0262\3\2\2\2\u0265"+
		"\u0269\7R\2\2\u0266\u0268\7^\2\2\u0267\u0266\3\2\2\2\u0268\u026b\3\2\2"+
		"\2\u0269\u0267\3\2\2\2\u0269\u026a\3\2\2\2\u026a\u026c\3\2\2\2\u026b\u0269"+
		"\3\2\2\2\u026c\u0270\7\u0087\2\2\u026d\u026f\7^\2\2\u026e\u026d\3\2\2"+
		"\2\u026f\u0272\3\2\2\2\u0270\u026e\3\2\2\2\u0270\u0271\3\2\2\2\u0271\u0273"+
		"\3\2\2\2\u0272\u0270\3\2\2\2\u0273\u0275\5H%\2\u0274\u0276\7R\2\2\u0275"+
		"\u0274\3\2\2\2\u0275\u0276\3\2\2\2\u0276\u0282\3\2\2\2\u0277\u027b\7\u0087"+
		"\2\2\u0278\u027a\7^\2\2\u0279\u0278\3\2\2\2\u027a\u027d\3\2\2\2\u027b"+
		"\u0279\3\2\2\2\u027b\u027c\3\2\2\2\u027c\u027e\3\2\2\2\u027d\u027b\3\2"+
		"\2\2\u027e\u027f\5H%\2\u027f\u0280\7R\2\2\u0280\u0282\3\2\2\2\u0281\u025e"+
		"\3\2\2\2\u0281\u0277\3\2\2\2\u0282\'\3\2\2\2\u0283\u0287\7\u0095\2\2\u0284"+
		"\u0286\7^\2\2\u0285\u0284\3\2\2\2\u0286\u0289\3\2\2\2\u0287\u0285\3\2"+
		"\2\2\u0287\u0288\3\2\2\2\u0288\u028a\3\2\2\2\u0289\u0287\3\2\2\2\u028a"+
		"\u028e\7S\2\2\u028b\u028d\7^\2\2\u028c\u028b\3\2\2\2\u028d\u0290\3\2\2"+
		"\2\u028e\u028c\3\2\2\2\u028e\u028f\3\2\2\2\u028f\u0291\3\2\2\2\u0290\u028e"+
		"\3\2\2\2\u0291\u0295\7\u0087\2\2\u0292\u0294\7^\2\2\u0293\u0292\3\2\2"+
		"\2\u0294\u0297\3\2\2\2\u0295\u0293\3\2\2\2\u0295\u0296\3\2\2\2\u0296\u0298"+
		"\3\2\2\2\u0297\u0295\3\2\2\2\u0298\u029a\5J&\2\u0299\u029b\7S\2\2\u029a"+
		"\u0299\3\2\2\2\u029a\u029b\3\2\2\2\u029b\u02a8\3\2\2\2\u029c\u02a0\7\u0087"+
		"\2\2\u029d\u029f\7^\2\2\u029e\u029d\3\2\2\2\u029f\u02a2\3\2\2\2\u02a0"+
		"\u029e\3\2\2\2\u02a0\u02a1\3\2\2\2\u02a1\u02a3\3\2\2\2\u02a2\u02a0\3\2"+
		"\2\2\u02a3\u02a5\5J&\2\u02a4\u02a6\7S\2\2\u02a5\u02a4\3\2\2\2\u02a5\u02a6"+
		"\3\2\2\2\u02a6\u02a8\3\2\2\2\u02a7\u0283\3\2\2\2\u02a7\u029c\3\2\2\2\u02a8"+
		")\3\2\2\2\u02a9\u02ad\7\u0095\2\2\u02aa\u02ac\7^\2\2\u02ab\u02aa\3\2\2"+
		"\2\u02ac\u02af\3\2\2\2\u02ad\u02ab\3\2\2\2\u02ad\u02ae\3\2\2\2\u02ae\u02b0"+
		"\3\2\2\2\u02af\u02ad\3\2\2\2\u02b0\u02b4\7T\2\2\u02b1\u02b3\7^\2\2\u02b2"+
		"\u02b1\3\2\2\2\u02b3\u02b6\3\2\2\2\u02b4\u02b2\3\2\2\2\u02b4\u02b5\3\2"+
		"\2\2\u02b5\u02b7\3\2\2\2\u02b6\u02b4\3\2\2\2\u02b7\u02bb\7\u0087\2\2\u02b8"+
		"\u02ba\7^\2\2\u02b9\u02b8\3\2\2\2\u02ba\u02bd\3\2\2\2\u02bb\u02b9\3\2"+
		"\2\2\u02bb\u02bc\3\2\2\2\u02bc\u02be\3\2\2\2\u02bd\u02bb\3\2\2\2\u02be"+
		"\u02c0\5L\'\2\u02bf\u02c1\7T\2\2\u02c0\u02bf\3\2\2\2\u02c0\u02c1\3\2\2"+
		"\2\u02c1\u02cd\3\2\2\2\u02c2\u02c6\7\u0087\2\2\u02c3\u02c5\7^\2\2\u02c4"+
		"\u02c3\3\2\2\2\u02c5\u02c8\3\2\2\2\u02c6\u02c4\3\2\2\2\u02c6\u02c7\3\2"+
		"\2\2\u02c7\u02c9\3\2\2\2\u02c8\u02c6\3\2\2\2\u02c9\u02ca\5L\'\2\u02ca"+
		"\u02cb\7T\2\2\u02cb\u02cd\3\2\2\2\u02cc\u02a9\3\2\2\2\u02cc\u02c2\3\2"+
		"\2\2\u02cd+\3\2\2\2\u02ce\u02d2\7\16\2\2\u02cf\u02d1\7^\2\2\u02d0\u02cf"+
		"\3\2\2\2\u02d1\u02d4\3\2\2\2\u02d2\u02d0\3\2\2\2\u02d2\u02d3\3\2\2\2\u02d3"+
		"\u02d5\3\2\2\2\u02d4\u02d2\3\2\2\2\u02d5\u02d9\7\u0087\2\2\u02d6\u02d8"+
		"\7^\2\2\u02d7\u02d6\3\2\2\2\u02d8\u02db\3\2\2\2\u02d9\u02d7\3\2\2\2\u02d9"+
		"\u02da\3\2\2\2\u02da\u02dc\3\2\2\2\u02db\u02d9\3\2\2\2\u02dc\u02e0\5P"+
		")\2\u02dd\u02df\7^\2\2\u02de\u02dd\3\2\2\2\u02df\u02e2\3\2\2\2\u02e0\u02de"+
		"\3\2\2\2\u02e0\u02e1\3\2\2\2\u02e1\u02e3\3\2\2\2\u02e2\u02e0\3\2\2\2\u02e3"+
		"\u02e4\7\u0094\2\2\u02e4-\3\2\2\2\u02e5\u02e6\7\n\2\2\u02e6\u02e7\5\64"+
		"\33\2\u02e7\u02e8\7\u0094\2\2\u02e8/\3\2\2\2\u02e9\u02ea\7\17\2\2\u02ea"+
		"\u02eb\5\62\32\2\u02eb\u02ec\7\u0094\2\2\u02ec\61\3\2\2\2\u02ed\u02ef"+
		"\5\64\33\2\u02ee\u02ed\3\2\2\2\u02ee\u02ef\3\2\2\2\u02ef\u02f0\3\2\2\2"+
		"\u02f0\u02f2\7\u0096\2\2\u02f1\u02ee\3\2\2\2\u02f1\u02f2\3\2\2\2\u02f2"+
		"\u0303\3\2\2\2\u02f3\u0304\7t\2\2\u02f4\u0300\7\u009c\2\2\u02f5\u02fa"+
		"\5\62\32\2\u02f6\u02f7\7\u0093\2\2\u02f7\u02f9\5\62\32\2\u02f8\u02f6\3"+
		"\2\2\2\u02f9\u02fc\3\2\2\2\u02fa\u02f8\3\2\2\2\u02fa\u02fb\3\2\2\2\u02fb"+
		"\u02fe\3\2\2\2\u02fc\u02fa\3\2\2\2\u02fd\u02ff\7\u0093\2\2\u02fe\u02fd"+
		"\3\2\2\2\u02fe\u02ff\3\2\2\2\u02ff\u0301\3\2\2\2\u0300\u02f5\3\2\2\2\u0300"+
		"\u0301\3\2\2\2\u0301\u0302\3\2\2\2\u0302\u0304\7\u009d\2\2\u0303\u02f3"+
		"\3\2\2\2\u0303\u02f4\3\2\2\2\u0304\u030b\3\2\2\2\u0305\u0308\5\64\33\2"+
		"\u0306\u0307\7\4\2\2\u0307\u0309\5P)\2\u0308\u0306\3\2\2\2\u0308\u0309"+
		"\3\2\2\2\u0309\u030b\3\2\2\2\u030a\u02f1\3\2\2\2\u030a\u0305\3\2\2\2\u030b"+
		"\63\3\2\2\2\u030c\u030e\7\u0096\2\2\u030d\u030c\3\2\2\2\u030d\u030e\3"+
		"\2\2\2\u030e\u030f\3\2\2\2\u030f\u0314\5P)\2\u0310\u0311\7\u0096\2\2\u0311"+
		"\u0313\5P)\2\u0312\u0310\3\2\2\2\u0313\u0316\3\2\2\2\u0314\u0312\3\2\2"+
		"\2\u0314\u0315\3\2\2\2\u0315\65\3\2\2\2\u0316\u0314\3\2\2\2\u0317\u0318"+
		"\t\3\2\2\u0318\67\3\2\2\2\u0319\u031a\7_\2\2\u031a\u031b\b\35\1\2\u031b"+
		"9\3\2\2\2\u031c\u031d\7j\2\2\u031d\u031e\b\36\1\2\u031e;\3\2\2\2\u031f"+
		"\u0320\7j\2\2\u0320\u0321\b\37\1\2\u0321=\3\2\2\2\u0322\u032a\t\4\2\2"+
		"\u0323\u0324\7n\2\2\u0324\u032a\t\5\2\2\u0325\u0326\7o\2\2\u0326\u032a"+
		"\t\6\2\2\u0327\u0328\7p\2\2\u0328\u032a\t\7\2\2\u0329\u0322\3\2\2\2\u0329"+
		"\u0323\3\2\2\2\u0329\u0325\3\2\2\2\u0329\u0327\3\2\2\2\u032a\u032b\3\2"+
		"\2\2\u032b\u032c\b \1\2\u032c?\3\2\2\2\u032d\u0335\t\4\2\2\u032e\u032f"+
		"\7n\2\2\u032f\u0335\t\5\2\2\u0330\u0331\7o\2\2\u0331\u0335\t\6\2\2\u0332"+
		"\u0333\7p\2\2\u0333\u0335\t\7\2\2\u0334\u032d\3\2\2\2\u0334\u032e\3\2"+
		"\2\2\u0334\u0330\3\2\2\2\u0334\u0332\3\2\2\2\u0335\u0336\3\2\2\2\u0336"+
		"\u0337\b!\1\2\u0337A\3\2\2\2\u0338\u0340\t\4\2\2\u0339\u033a\7n\2\2\u033a"+
		"\u0340\t\5\2\2\u033b\u033c\7o\2\2\u033c\u0340\t\6\2\2\u033d\u033e\7p\2"+
		"\2\u033e\u0340\t\7\2\2\u033f\u0338\3\2\2\2\u033f\u0339\3\2\2\2\u033f\u033b"+
		"\3\2\2\2\u033f\u033d\3\2\2\2\u0340\u0341\3\2\2\2\u0341\u0342\b\"\1\2\u0342"+
		"C\3\2\2\2\u0343\u034b\t\4\2\2\u0344\u0345\7n\2\2\u0345\u034b\t\5\2\2\u0346"+
		"\u0347\7o\2\2\u0347\u034b\t\6\2\2\u0348\u0349\7p\2\2\u0349\u034b\t\7\2"+
		"\2\u034a\u0343\3\2\2\2\u034a\u0344\3\2\2\2\u034a\u0346\3\2\2\2\u034a\u0348"+
		"\3\2\2\2\u034b\u034c\3\2\2\2\u034c\u034d\b#\1\2\u034dE\3\2\2\2\u034e\u0356"+
		"\t\4\2\2\u034f\u0350\7n\2\2\u0350\u0356\t\5\2\2\u0351\u0352\7o\2\2\u0352"+
		"\u0356\t\6\2\2\u0353\u0354\7p\2\2\u0354\u0356\t\7\2\2\u0355\u034e\3\2"+
		"\2\2\u0355\u034f\3\2\2\2\u0355\u0351\3\2\2\2\u0355\u0353\3\2\2\2\u0356"+
		"\u0357\3\2\2\2\u0357\u0358\b$\1\2\u0358G\3\2\2\2\u0359\u0361\t\4\2\2\u035a"+
		"\u035b\7n\2\2\u035b\u0361\t\5\2\2\u035c\u035d\7o\2\2\u035d\u0361\t\6\2"+
		"\2\u035e\u035f\7p\2\2\u035f\u0361\t\7\2\2\u0360\u0359\3\2\2\2\u0360\u035a"+
		"\3\2\2\2\u0360\u035c\3\2\2\2\u0360\u035e\3\2\2\2\u0361\u0362\3\2\2\2\u0362"+
		"\u0363\b%\1\2\u0363I\3\2\2\2\u0364\u036c\t\4\2\2\u0365\u0366\7n\2\2\u0366"+
		"\u036c\t\5\2\2\u0367\u0368\7o\2\2\u0368\u036c\t\6\2\2\u0369\u036a\7p\2"+
		"\2\u036a\u036c\t\7\2\2\u036b\u0364\3\2\2\2\u036b\u0365\3\2\2\2\u036b\u0367"+
		"\3\2\2\2\u036b\u0369\3\2\2\2\u036c\u036d\3\2\2\2\u036d\u036e\b&\1\2\u036e"+
		"K\3\2\2\2\u036f\u0377\t\4\2\2\u0370\u0371\7n\2\2\u0371\u0377\t\5\2\2\u0372"+
		"\u0373\7o\2\2\u0373\u0377\t\6\2\2\u0374\u0375\7p\2\2\u0375\u0377\t\7\2"+
		"\2\u0376\u036f\3\2\2\2\u0376\u0370\3\2\2\2\u0376\u0372\3\2\2\2\u0376\u0374"+
		"\3\2\2\2\u0377\u0378\3\2\2\2\u0378\u0379\b\'\1\2\u0379M\3\2\2\2\u037a"+
		"\u037b\7`\2\2\u037b\u037f\b(\1\2\u037c\u037d\7a\2\2\u037d\u037f\b(\1\2"+
		"\u037e\u037a\3\2\2\2\u037e\u037c\3\2\2\2\u037fO\3\2\2\2\u0380\u0384\7"+
		"U\2\2\u0381\u0382\7q\2\2\u0382\u0384\7U\2\2\u0383\u0380\3\2\2\2\u0383"+
		"\u0381\3\2\2\2\u0384Q\3\2\2\2\u0385\u0386\t\b\2\2\u0386S\3\2\2\2yX\\a"+
		"gmsy\u0084\u008a\u0093\u009a\u00a1\u00a8\u00af\u00b6\u00bb\u00c2\u00cd"+
		"\u00d4\u00db\u00e1\u010d\u0113\u0117\u011c\u0123\u012c\u0130\u0135\u013c"+
		"\u0145\u0149\u014e\u0155\u015e\u0165\u016c\u0171\u0177\u017c\u017e\u0184"+
		"\u018b\u0192\u0197\u019d\u01a3\u01a9\u01b0\u01b7\u01bc\u01c2\u01c8\u01ce"+
		"\u01d5\u01dc\u01e1\u01e7\u01ed\u01f3\u01fa\u0201\u0206\u020c\u0212\u0218"+
		"\u021f\u0226\u022b\u0231\u0237\u023d\u0244\u024b\u0250\u0256\u025c\u0262"+
		"\u0269\u0270\u0275\u027b\u0281\u0287\u028e\u0295\u029a\u02a0\u02a5\u02a7"+
		"\u02ad\u02b4\u02bb\u02c0\u02c6\u02cc\u02d2\u02d9\u02e0\u02ee\u02f1\u02fa"+
		"\u02fe\u0300\u0303\u0308\u030a\u030d\u0314\u0329\u0334\u033f\u034a\u0355"+
		"\u0360\u036b\u0376\u037e\u0383";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}