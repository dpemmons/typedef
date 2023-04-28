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
		KW_VARIANT=14, KW_VECTOR=15, KW_MAP=16, KW_AND=17, KW_IN=18, KW_LET=19, 
		KW_NOT=20, KW_OR=21, KW_SIZEOF=22, KW_THIS=23, KW_TRAIT=24, KW_WHERE=25, 
		KW_XOR=26, KW_BREAK=27, KW_CONTINUE=28, KW_DEFAULT=29, KW_DO=30, KW_ELSE=31, 
		KW_FOR=32, KW_GOTO=33, KW_IF=34, KW_LOOP=35, KW_MATCH=36, KW_MOVE=37, 
		KW_RETURN=38, KW_TRY=39, KW_WHILE=40, KW_YIELD=41, KW_ABSTRACT=42, KW_AUTO=43, 
		KW_CONST=44, KW_DOUBLE=45, KW_EXTERN=46, KW_FINAL=47, KW_FLOAT=48, KW_INT=49, 
		KW_LONG=50, KW_MACRO=51, KW_MUT=52, KW_OVERRIDE=53, KW_PRIVATE=54, KW_PUB=55, 
		KW_REF=56, KW_SELFTYPE=57, KW_SELFVALUE=58, KW_SIGNED=59, KW_STATIC=60, 
		KW_SUPER=61, KW_SWITCH=62, KW_TYPEOF=63, KW_UNION=64, KW_UNSAFE=65, KW_UNSIGNED=66, 
		KW_UNSIZED=67, KW_VIRTUAL=68, KW_VOID=69, KW_VOLATILE=70, KW_BOOL=71, 
		KW_CHAR=72, KW_STRING=73, KW_F32=74, KW_F64=75, KW_U8=76, KW_U16=77, KW_U32=78, 
		KW_U64=79, KW_I8=80, KW_I16=81, KW_I32=82, KW_I64=83, NON_KEYWORD_IDENTIFIER=84, 
		LINE_COMMENT=85, BLOCK_COMMENT=86, INNER_LINE_DOC=87, INNER_BLOCK_DOC=88, 
		OUTER_LINE_DOC=89, OUTER_BLOCK_DOC=90, BLOCK_COMMENT_OR_DOC=91, SHEBANG=92, 
		WS=93, CHAR_LITERAL=94, STRING_LITERAL=95, RAW_STRING_LITERAL=96, DEC_DIGITS=97, 
		DEC_DIGITS_UNDERSCORE=98, HEX_DIGITS=99, HEX_DIGITS_UNDERSCORE=100, OCT_DIGITS=101, 
		OCT_DIGITS_UNDERSCORE=102, BIN_DIGITS=103, BIN_DIGITS_UNDERSCORE=104, 
		FLOAT_LITERAL=105, OCT_DIGIT=106, DEC_DIGIT=107, HEX_DIGIT=108, HEX_PREFIX=109, 
		OCT_PREFIX=110, BIN_PREFIX=111, RAW_ESCAPE=112, PLUS=113, MINUS=114, STAR=115, 
		SLASH=116, PERCENT=117, CARET=118, NOT=119, AND=120, OR=121, ANDAND=122, 
		OROR=123, PLUSEQ=124, MINUSEQ=125, STAREQ=126, SLASHEQ=127, PERCENTEQ=128, 
		CARETEQ=129, ANDEQ=130, OREQ=131, SHLEQ=132, SHREQ=133, EQ=134, EQEQ=135, 
		NE=136, GT=137, LT=138, GE=139, LE=140, AT=141, UNDERSCORE=142, DOT=143, 
		DOTDOT=144, DOTDOTDOT=145, COMMA=146, SEMI=147, COLON=148, PATHSEP=149, 
		RARROW=150, FATARROW=151, POUND=152, DOLLAR=153, QUESTION=154, LBRACE=155, 
		RBRACE=156, LBRACK=157, RBRACK=158, LPAREN=159, RPAREN=160;
	public static final int
		RULE_compilationUnit = 0, RULE_item = 1, RULE_maybeValuedSymbolDeclaration = 2, 
		RULE_variantDeclaration = 3, RULE_structDeclaration = 4, RULE_maybeValuedSymbol = 5, 
		RULE_unvaluedSymbol = 6, RULE_maybeValuedType = 7, RULE_valuedType = 8, 
		RULE_unvaluedType = 9, RULE_vectorType = 10, RULE_mapType = 11, RULE_primitiveType = 12, 
		RULE_valuedPrimitiveType = 13, RULE_valuedBoolFragment = 14, RULE_valuedCharFragment = 15, 
		RULE_valuedStringFragment = 16, RULE_valuedF32Fragment = 17, RULE_valuedF64Fragment = 18, 
		RULE_valuedU8Fragment = 19, RULE_valuedU16Fragment = 20, RULE_valuedU32Fragment = 21, 
		RULE_valuedU64Fragment = 22, RULE_valuedI8Fragment = 23, RULE_valuedI16Fragment = 24, 
		RULE_valuedI32Fragment = 25, RULE_valuedI64Fragment = 26, RULE_typedefVersionDeclaration = 27, 
		RULE_moduleDeclaration = 28, RULE_useDeclaration = 29, RULE_useTree = 30, 
		RULE_simplePath = 31, RULE_boolLiteral = 32, RULE_charLiteral = 33, RULE_f32Literal = 34, 
		RULE_f64Literal = 35, RULE_u8Literal = 36, RULE_u16Literal = 37, RULE_u32Literal = 38, 
		RULE_u64Literal = 39, RULE_i8Literal = 40, RULE_i16Literal = 41, RULE_i32Literal = 42, 
		RULE_i64Literal = 43, RULE_stringLiteral = 44, RULE_identifier = 45, RULE_keyword = 46;
	private static String[] makeRuleNames() {
		return new String[] {
			"compilationUnit", "item", "maybeValuedSymbolDeclaration", "variantDeclaration", 
			"structDeclaration", "maybeValuedSymbol", "unvaluedSymbol", "maybeValuedType", 
			"valuedType", "unvaluedType", "vectorType", "mapType", "primitiveType", 
			"valuedPrimitiveType", "valuedBoolFragment", "valuedCharFragment", "valuedStringFragment", 
			"valuedF32Fragment", "valuedF64Fragment", "valuedU8Fragment", "valuedU16Fragment", 
			"valuedU32Fragment", "valuedU64Fragment", "valuedI8Fragment", "valuedI16Fragment", 
			"valuedI32Fragment", "valuedI64Fragment", "typedefVersionDeclaration", 
			"moduleDeclaration", "useDeclaration", "useTree", "simplePath", "boolLiteral", 
			"charLiteral", "f32Literal", "f64Literal", "u8Literal", "u16Literal", 
			"u32Literal", "u64Literal", "i8Literal", "i16Literal", "i32Literal", 
			"i64Literal", "stringLiteral", "identifier", "keyword"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'array'", "'as'", "'enum'", "'false'", "'fn'", "'impl'", "'message'", 
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
			"KW_USE", "KW_VARIANT", "KW_VECTOR", "KW_MAP", "KW_AND", "KW_IN", "KW_LET", 
			"KW_NOT", "KW_OR", "KW_SIZEOF", "KW_THIS", "KW_TRAIT", "KW_WHERE", "KW_XOR", 
			"KW_BREAK", "KW_CONTINUE", "KW_DEFAULT", "KW_DO", "KW_ELSE", "KW_FOR", 
			"KW_GOTO", "KW_IF", "KW_LOOP", "KW_MATCH", "KW_MOVE", "KW_RETURN", "KW_TRY", 
			"KW_WHILE", "KW_YIELD", "KW_ABSTRACT", "KW_AUTO", "KW_CONST", "KW_DOUBLE", 
			"KW_EXTERN", "KW_FINAL", "KW_FLOAT", "KW_INT", "KW_LONG", "KW_MACRO", 
			"KW_MUT", "KW_OVERRIDE", "KW_PRIVATE", "KW_PUB", "KW_REF", "KW_SELFTYPE", 
			"KW_SELFVALUE", "KW_SIGNED", "KW_STATIC", "KW_SUPER", "KW_SWITCH", "KW_TYPEOF", 
			"KW_UNION", "KW_UNSAFE", "KW_UNSIGNED", "KW_UNSIZED", "KW_VIRTUAL", "KW_VOID", 
			"KW_VOLATILE", "KW_BOOL", "KW_CHAR", "KW_STRING", "KW_F32", "KW_F64", 
			"KW_U8", "KW_U16", "KW_U32", "KW_U64", "KW_I8", "KW_I16", "KW_I32", "KW_I64", 
			"NON_KEYWORD_IDENTIFIER", "LINE_COMMENT", "BLOCK_COMMENT", "INNER_LINE_DOC", 
			"INNER_BLOCK_DOC", "OUTER_LINE_DOC", "OUTER_BLOCK_DOC", "BLOCK_COMMENT_OR_DOC", 
			"SHEBANG", "WS", "CHAR_LITERAL", "STRING_LITERAL", "RAW_STRING_LITERAL", 
			"DEC_DIGITS", "DEC_DIGITS_UNDERSCORE", "HEX_DIGITS", "HEX_DIGITS_UNDERSCORE", 
			"OCT_DIGITS", "OCT_DIGITS_UNDERSCORE", "BIN_DIGITS", "BIN_DIGITS_UNDERSCORE", 
			"FLOAT_LITERAL", "OCT_DIGIT", "DEC_DIGIT", "HEX_DIGIT", "HEX_PREFIX", 
			"OCT_PREFIX", "BIN_PREFIX", "RAW_ESCAPE", "PLUS", "MINUS", "STAR", "SLASH", 
			"PERCENT", "CARET", "NOT", "AND", "OR", "ANDAND", "OROR", "PLUSEQ", "MINUSEQ", 
			"STAREQ", "SLASHEQ", "PERCENTEQ", "CARETEQ", "ANDEQ", "OREQ", "SHLEQ", 
			"SHREQ", "EQ", "EQEQ", "NE", "GT", "LT", "GE", "LE", "AT", "UNDERSCORE", 
			"DOT", "DOTDOT", "DOTDOTDOT", "COMMA", "SEMI", "COLON", "PATHSEP", "RARROW", 
			"FATARROW", "POUND", "DOLLAR", "QUESTION", "LBRACE", "RBRACE", "LBRACK", 
			"RBRACK", "LPAREN", "RPAREN"
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


		td::SymbolTable global_symbol_table;

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
			setState(94);
			typedefVersionDeclaration();
			setState(98);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(95);
					match(WS);
					}
					} 
				}
				setState(100);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			}
			setState(102);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==KW_MODULE) {
				{
				setState(101);
				moduleDeclaration();
				}
			}

			setState(113);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
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
					useDeclaration();
					}
					} 
				}
				setState(115);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			}
			setState(125);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
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
					item();
					}
					} 
				}
				setState(127);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			}
			setState(131);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(128);
				match(WS);
				}
				}
				setState(133);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(134);
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
		public VariantDeclarationContext variantDeclaration;
		public MaybeValuedSymbolDeclarationContext maybeValuedSymbolDeclaration() {
			return getRuleContext(MaybeValuedSymbolDeclarationContext.class,0);
		}
		public StructDeclarationContext structDeclaration() {
			return getRuleContext(StructDeclarationContext.class,0);
		}
		public VariantDeclarationContext variantDeclaration() {
			return getRuleContext(VariantDeclarationContext.class,0);
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
			setState(145);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(136);
				((ItemContext)_localctx).maybeValuedSymbolDeclaration = maybeValuedSymbolDeclaration();

						InsertField(global_symbol_table, this, ((ItemContext)_localctx).maybeValuedSymbolDeclaration);

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(139);
				((ItemContext)_localctx).structDeclaration = structDeclaration();

						InsertField(global_symbol_table, this, ((ItemContext)_localctx).structDeclaration);

				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(142);
				((ItemContext)_localctx).variantDeclaration = variantDeclaration();

						InsertField(global_symbol_table, this, ((ItemContext)_localctx).variantDeclaration);

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
			setState(147);
			maybeValuedSymbol();
			setState(151);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(148);
				match(WS);
				}
				}
				setState(153);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(154);
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

	public static class VariantDeclarationContext extends ParserRuleContext {
		public std::optional<td::SymbolTable::Symbol> maybe_symbol;
		public std::shared_ptr<td::Variant> v;
		public IdentifierContext identifier;
		public UnvaluedSymbolContext unvaluedSymbol;
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public TerminalNode KW_VARIANT() { return getToken(TypedefParser.KW_VARIANT, 0); }
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
		public List<UnvaluedSymbolContext> unvaluedSymbol() {
			return getRuleContexts(UnvaluedSymbolContext.class);
		}
		public UnvaluedSymbolContext unvaluedSymbol(int i) {
			return getRuleContext(UnvaluedSymbolContext.class,i);
		}
		public VariantDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variantDeclaration; }
	}

	public final VariantDeclarationContext variantDeclaration() throws RecognitionException {
		VariantDeclarationContext _localctx = new VariantDeclarationContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_variantDeclaration);

				((VariantDeclarationContext)_localctx).v =  std::make_shared<td::Variant>();
			
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(156);
			((VariantDeclarationContext)_localctx).identifier = identifier();
			setState(160);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(157);
				match(WS);
				}
				}
				setState(162);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(163);
			match(COLON);
			setState(167);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(164);
				match(WS);
				}
				}
				setState(169);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(170);
			match(KW_VARIANT);
			setState(174);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(171);
				match(WS);
				}
				}
				setState(176);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(177);
			match(LBRACE);
			setState(201);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 84)) & ~0x3f) == 0 && ((1L << (_la - 84)) & ((1L << (NON_KEYWORD_IDENTIFIER - 84)) | (1L << (WS - 84)) | (1L << (RAW_ESCAPE - 84)))) != 0)) {
				{
				{
				setState(181);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(178);
					match(WS);
					}
					}
					setState(183);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(184);
				((VariantDeclarationContext)_localctx).unvaluedSymbol = unvaluedSymbol();

								TryInsertSymbol(_localctx.v, this, ((VariantDeclarationContext)_localctx).unvaluedSymbol);
							
				setState(189);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(186);
					match(WS);
					}
					}
					setState(191);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(192);
				match(SEMI);
				setState(196);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(193);
						match(WS);
						}
						} 
					}
					setState(198);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
				}
				}
				}
				setState(203);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(204);
			match(RBRACE);
			setState(208);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(205);
				match(WS);
				}
				}
				setState(210);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(211);
			match(SEMI);
			}

					_localctx.v->identifier = ((VariantDeclarationContext)_localctx).identifier->id;
					((VariantDeclarationContext)_localctx).maybe_symbol =  std::make_pair(((VariantDeclarationContext)_localctx).identifier->id, _localctx.v);
				
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
		public std::optional<td::SymbolTable::Symbol> maybe_symbol;
		public std::shared_ptr<td::Struct> s;
		public IdentifierContext identifier;
		public MaybeValuedSymbolContext maybeValuedSymbol;
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
		enterRule(_localctx, 8, RULE_structDeclaration);

				((StructDeclarationContext)_localctx).s =  std::make_shared<td::Struct>();
			
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(215);
			((StructDeclarationContext)_localctx).identifier = identifier();
			setState(219);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(216);
				match(WS);
				}
				}
				setState(221);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(222);
			match(COLON);
			setState(226);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(223);
				match(WS);
				}
				}
				setState(228);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(229);
			match(KW_STRUCT);
			setState(233);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(230);
				match(WS);
				}
				}
				setState(235);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(236);
			match(LBRACE);
			setState(260);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 84)) & ~0x3f) == 0 && ((1L << (_la - 84)) & ((1L << (NON_KEYWORD_IDENTIFIER - 84)) | (1L << (WS - 84)) | (1L << (RAW_ESCAPE - 84)))) != 0)) {
				{
				{
				setState(240);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(237);
					match(WS);
					}
					}
					setState(242);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(243);
				((StructDeclarationContext)_localctx).maybeValuedSymbol = maybeValuedSymbol();

								TryInsertSymbol(_localctx.s, this, ((StructDeclarationContext)_localctx).maybeValuedSymbol);
							
				setState(248);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(245);
					match(WS);
					}
					}
					setState(250);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(251);
				match(SEMI);
				setState(255);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(252);
						match(WS);
						}
						} 
					}
					setState(257);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
				}
				}
				}
				setState(262);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(263);
			match(RBRACE);
			setState(267);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(264);
				match(WS);
				}
				}
				setState(269);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(270);
			match(SEMI);
			}

					_localctx.s->identifier = ((StructDeclarationContext)_localctx).identifier->id;
					((StructDeclarationContext)_localctx).maybe_symbol =  std::make_pair(((StructDeclarationContext)_localctx).identifier->id, _localctx.s);
				
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
		public std::optional<td::SymbolTable::Symbol> maybe_symbol;
		public IdentifierContext identifier;
		public MaybeValuedTypeContext maybeValuedType;
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public MaybeValuedTypeContext maybeValuedType() {
			return getRuleContext(MaybeValuedTypeContext.class,0);
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
		enterRule(_localctx, 10, RULE_maybeValuedSymbol);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(274);
			((MaybeValuedSymbolContext)_localctx).identifier = identifier();
			setState(278);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,25,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(275);
					match(WS);
					}
					} 
				}
				setState(280);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,25,_ctx);
			}
			setState(281);
			((MaybeValuedSymbolContext)_localctx).maybeValuedType = maybeValuedType();
			setState(285);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,26,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(282);
					match(WS);
					}
					} 
				}
				setState(287);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,26,_ctx);
			}

					((MaybeValuedSymbolContext)_localctx).maybe_symbol =  MakeSymbol(this, global_symbol_table,
						((MaybeValuedSymbolContext)_localctx).identifier->id, ((MaybeValuedSymbolContext)_localctx).maybeValuedType);

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

	public static class UnvaluedSymbolContext extends ParserRuleContext {
		public std::optional<td::SymbolTable::Symbol> maybe_symbol;
		public IdentifierContext identifier;
		public UnvaluedTypeContext unvaluedType;
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public UnvaluedTypeContext unvaluedType() {
			return getRuleContext(UnvaluedTypeContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public UnvaluedSymbolContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unvaluedSymbol; }
	}

	public final UnvaluedSymbolContext unvaluedSymbol() throws RecognitionException {
		UnvaluedSymbolContext _localctx = new UnvaluedSymbolContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_unvaluedSymbol);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(290);
			((UnvaluedSymbolContext)_localctx).identifier = identifier();
			setState(294);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(291);
				match(WS);
				}
				}
				setState(296);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(297);
			((UnvaluedSymbolContext)_localctx).unvaluedType = unvaluedType();
			setState(301);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,28,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(298);
					match(WS);
					}
					} 
				}
				setState(303);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,28,_ctx);
			}

					((UnvaluedSymbolContext)_localctx).maybe_symbol =  MakeSymbol(this, global_symbol_table,
						((UnvaluedSymbolContext)_localctx).identifier->id, ((UnvaluedSymbolContext)_localctx).unvaluedType);

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

	public static class MaybeValuedTypeContext extends ParserRuleContext {
		public ValuedTypeContext valuedType() {
			return getRuleContext(ValuedTypeContext.class,0);
		}
		public UnvaluedTypeContext unvaluedType() {
			return getRuleContext(UnvaluedTypeContext.class,0);
		}
		public MaybeValuedTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_maybeValuedType; }
	}

	public final MaybeValuedTypeContext maybeValuedType() throws RecognitionException {
		MaybeValuedTypeContext _localctx = new MaybeValuedTypeContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_maybeValuedType);
		try {
			setState(308);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,29,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(306);
				valuedType();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(307);
				unvaluedType();
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

	public static class ValuedTypeContext extends ParserRuleContext {
		public ValuedPrimitiveTypeContext valuedPrimitiveType() {
			return getRuleContext(ValuedPrimitiveTypeContext.class,0);
		}
		public ValuedTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valuedType; }
	}

	public final ValuedTypeContext valuedType() throws RecognitionException {
		ValuedTypeContext _localctx = new ValuedTypeContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_valuedType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(310);
			valuedPrimitiveType();
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

	public static class UnvaluedTypeContext extends ParserRuleContext {
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public PrimitiveTypeContext primitiveType() {
			return getRuleContext(PrimitiveTypeContext.class,0);
		}
		public VectorTypeContext vectorType() {
			return getRuleContext(VectorTypeContext.class,0);
		}
		public MapTypeContext mapType() {
			return getRuleContext(MapTypeContext.class,0);
		}
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public UnvaluedTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unvaluedType; }
	}

	public final UnvaluedTypeContext unvaluedType() throws RecognitionException {
		UnvaluedTypeContext _localctx = new UnvaluedTypeContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_unvaluedType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(312);
			match(COLON);
			setState(316);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(313);
				match(WS);
				}
				}
				setState(318);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(323);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case KW_BOOL:
			case KW_CHAR:
			case KW_STRING:
			case KW_F32:
			case KW_F64:
			case KW_U8:
			case KW_U16:
			case KW_U32:
			case KW_U64:
			case KW_I8:
			case KW_I16:
			case KW_I32:
			case KW_I64:
				{
				setState(319);
				primitiveType();
				}
				break;
			case KW_VECTOR:
				{
				setState(320);
				vectorType();
				}
				break;
			case KW_MAP:
				{
				setState(321);
				mapType();
				}
				break;
			case NON_KEYWORD_IDENTIFIER:
			case RAW_ESCAPE:
				{
				setState(322);
				identifier();
				}
				break;
			default:
				throw new NoViableAltException(this);
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

	public static class VectorTypeContext extends ParserRuleContext {
		public TerminalNode KW_VECTOR() { return getToken(TypedefParser.KW_VECTOR, 0); }
		public TerminalNode LT() { return getToken(TypedefParser.LT, 0); }
		public TerminalNode GT() { return getToken(TypedefParser.GT, 0); }
		public PrimitiveTypeContext primitiveType() {
			return getRuleContext(PrimitiveTypeContext.class,0);
		}
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public VectorTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_vectorType; }
	}

	public final VectorTypeContext vectorType() throws RecognitionException {
		VectorTypeContext _localctx = new VectorTypeContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_vectorType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(325);
			match(KW_VECTOR);
			setState(329);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(326);
				match(WS);
				}
				}
				setState(331);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(332);
			match(LT);
			setState(336);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(333);
				match(WS);
				}
				}
				setState(338);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(341);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case KW_BOOL:
			case KW_CHAR:
			case KW_STRING:
			case KW_F32:
			case KW_F64:
			case KW_U8:
			case KW_U16:
			case KW_U32:
			case KW_U64:
			case KW_I8:
			case KW_I16:
			case KW_I32:
			case KW_I64:
				{
				setState(339);
				primitiveType();
				}
				break;
			case NON_KEYWORD_IDENTIFIER:
			case RAW_ESCAPE:
				{
				setState(340);
				identifier();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(346);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(343);
				match(WS);
				}
				}
				setState(348);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(349);
			match(GT);
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

	public static class MapTypeContext extends ParserRuleContext {
		public TerminalNode KW_MAP() { return getToken(TypedefParser.KW_MAP, 0); }
		public TerminalNode LT() { return getToken(TypedefParser.LT, 0); }
		public List<PrimitiveTypeContext> primitiveType() {
			return getRuleContexts(PrimitiveTypeContext.class);
		}
		public PrimitiveTypeContext primitiveType(int i) {
			return getRuleContext(PrimitiveTypeContext.class,i);
		}
		public TerminalNode COMMA() { return getToken(TypedefParser.COMMA, 0); }
		public TerminalNode GT() { return getToken(TypedefParser.GT, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public MapTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mapType; }
	}

	public final MapTypeContext mapType() throws RecognitionException {
		MapTypeContext _localctx = new MapTypeContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_mapType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(351);
			match(KW_MAP);
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
			match(LT);
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
			primitiveType();
			setState(369);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(366);
				match(WS);
				}
				}
				setState(371);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(372);
			match(COMMA);
			setState(376);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(373);
				match(WS);
				}
				}
				setState(378);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(381);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case KW_BOOL:
			case KW_CHAR:
			case KW_STRING:
			case KW_F32:
			case KW_F64:
			case KW_U8:
			case KW_U16:
			case KW_U32:
			case KW_U64:
			case KW_I8:
			case KW_I16:
			case KW_I32:
			case KW_I64:
				{
				setState(379);
				primitiveType();
				}
				break;
			case NON_KEYWORD_IDENTIFIER:
			case RAW_ESCAPE:
				{
				setState(380);
				identifier();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
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
			match(GT);
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
		public PrimitiveTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primitiveType; }
	}

	public final PrimitiveTypeContext primitiveType() throws RecognitionException {
		PrimitiveTypeContext _localctx = new PrimitiveTypeContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_primitiveType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(391);
			_la = _input.LA(1);
			if ( !(((((_la - 71)) & ~0x3f) == 0 && ((1L << (_la - 71)) & ((1L << (KW_BOOL - 71)) | (1L << (KW_CHAR - 71)) | (1L << (KW_STRING - 71)) | (1L << (KW_F32 - 71)) | (1L << (KW_F64 - 71)) | (1L << (KW_U8 - 71)) | (1L << (KW_U16 - 71)) | (1L << (KW_U32 - 71)) | (1L << (KW_U64 - 71)) | (1L << (KW_I8 - 71)) | (1L << (KW_I16 - 71)) | (1L << (KW_I32 - 71)) | (1L << (KW_I64 - 71)))) != 0)) ) {
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
		enterRule(_localctx, 26, RULE_valuedPrimitiveType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(432);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,42,_ctx) ) {
			case 1:
				{
				setState(393);
				((ValuedPrimitiveTypeContext)_localctx).valuedBoolFragment = valuedBoolFragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedBoolFragment->literal->maybe_val;
				}
				break;
			case 2:
				{
				setState(396);
				((ValuedPrimitiveTypeContext)_localctx).valuedCharFragment = valuedCharFragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedCharFragment->literal->maybe_val;
				}
				break;
			case 3:
				{
				setState(399);
				((ValuedPrimitiveTypeContext)_localctx).valuedStringFragment = valuedStringFragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedStringFragment->literal->maybe_val;
				}
				break;
			case 4:
				{
				setState(402);
				((ValuedPrimitiveTypeContext)_localctx).valuedF32Fragment = valuedF32Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedF32Fragment->literal->maybe_val;
				}
				break;
			case 5:
				{
				setState(405);
				((ValuedPrimitiveTypeContext)_localctx).valuedF64Fragment = valuedF64Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedF64Fragment->literal->maybe_val;
				}
				break;
			case 6:
				{
				setState(408);
				((ValuedPrimitiveTypeContext)_localctx).valuedU8Fragment = valuedU8Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU8Fragment->literal->maybe_val;
				}
				break;
			case 7:
				{
				setState(411);
				((ValuedPrimitiveTypeContext)_localctx).valuedU16Fragment = valuedU16Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU16Fragment->literal->maybe_val;
				}
				break;
			case 8:
				{
				setState(414);
				((ValuedPrimitiveTypeContext)_localctx).valuedU32Fragment = valuedU32Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU32Fragment->literal->maybe_val;
				}
				break;
			case 9:
				{
				setState(417);
				((ValuedPrimitiveTypeContext)_localctx).valuedU64Fragment = valuedU64Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU64Fragment->literal->maybe_val;
				}
				break;
			case 10:
				{
				setState(420);
				((ValuedPrimitiveTypeContext)_localctx).valuedI8Fragment = valuedI8Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedI8Fragment->literal->maybe_val;
				}
				break;
			case 11:
				{
				setState(423);
				((ValuedPrimitiveTypeContext)_localctx).valuedI16Fragment = valuedI16Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedI16Fragment->literal->maybe_val;
				}
				break;
			case 12:
				{
				setState(426);
				((ValuedPrimitiveTypeContext)_localctx).valuedI32Fragment = valuedI32Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedI32Fragment->literal->maybe_val;
				}
				break;
			case 13:
				{
				setState(429);
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
		enterRule(_localctx, 28, RULE_valuedBoolFragment);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(442);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(434);
				match(COLON);
				setState(438);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(435);
					match(WS);
					}
					}
					setState(440);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(441);
				match(KW_BOOL);
				}
			}

			setState(447);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(444);
				match(WS);
				}
				}
				setState(449);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(450);
			match(EQ);
			setState(454);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(451);
				match(WS);
				}
				}
				setState(456);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(457);
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
		enterRule(_localctx, 30, RULE_valuedCharFragment);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(467);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(459);
				match(COLON);
				setState(463);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(460);
					match(WS);
					}
					}
					setState(465);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(466);
				match(KW_CHAR);
				}
			}

			setState(472);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(469);
				match(WS);
				}
				}
				setState(474);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(475);
			match(EQ);
			setState(479);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(476);
				match(WS);
				}
				}
				setState(481);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(482);
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
		enterRule(_localctx, 32, RULE_valuedStringFragment);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(492);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(484);
				match(COLON);
				setState(488);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(485);
					match(WS);
					}
					}
					setState(490);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(491);
				match(KW_STRING);
				}
			}

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
			match(EQ);
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
		enterRule(_localctx, 34, RULE_valuedF32Fragment);
		int _la;
		try {
			setState(545);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(509);
				match(COLON);
				setState(513);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(510);
					match(WS);
					}
					}
					setState(515);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(516);
				match(KW_F32);
				setState(520);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(517);
					match(WS);
					}
					}
					setState(522);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(523);
				match(EQ);
				setState(527);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(524);
					match(WS);
					}
					}
					setState(529);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(530);
				((ValuedF32FragmentContext)_localctx).literal = f32Literal();
				setState(532);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F32) {
					{
					setState(531);
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
				setState(534);
				match(EQ);
				setState(538);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(535);
					match(WS);
					}
					}
					setState(540);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(541);
				((ValuedF32FragmentContext)_localctx).literal = f32Literal();
				setState(543);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F32) {
					{
					setState(542);
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
		enterRule(_localctx, 36, RULE_valuedF64Fragment);
		int _la;
		try {
			setState(582);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(547);
				match(COLON);
				setState(551);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(548);
					match(WS);
					}
					}
					setState(553);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(554);
				match(KW_F64);
				setState(558);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(555);
					match(WS);
					}
					}
					setState(560);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(561);
				match(EQ);
				setState(565);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(562);
					match(WS);
					}
					}
					setState(567);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(568);
				((ValuedF64FragmentContext)_localctx).literal = f64Literal();
				setState(570);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F64) {
					{
					setState(569);
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
				setState(572);
				match(EQ);
				setState(576);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(573);
					match(WS);
					}
					}
					setState(578);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(579);
				((ValuedF64FragmentContext)_localctx).literal = f64Literal();
				setState(580);
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
		enterRule(_localctx, 38, RULE_valuedU8Fragment);
		int _la;
		try {
			setState(619);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(584);
				match(COLON);
				setState(588);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(585);
					match(WS);
					}
					}
					setState(590);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(591);
				match(KW_U8);
				setState(595);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(592);
					match(WS);
					}
					}
					setState(597);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(598);
				match(EQ);
				setState(602);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(599);
					match(WS);
					}
					}
					setState(604);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(605);
				((ValuedU8FragmentContext)_localctx).literal = u8Literal();
				setState(607);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U8) {
					{
					setState(606);
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
				setState(609);
				match(EQ);
				setState(613);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(610);
					match(WS);
					}
					}
					setState(615);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(616);
				((ValuedU8FragmentContext)_localctx).literal = u8Literal();
				setState(617);
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
		enterRule(_localctx, 40, RULE_valuedU16Fragment);
		int _la;
		try {
			setState(656);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(621);
				match(COLON);
				setState(625);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(622);
					match(WS);
					}
					}
					setState(627);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(628);
				match(KW_U16);
				setState(632);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(629);
					match(WS);
					}
					}
					setState(634);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(635);
				match(EQ);
				setState(639);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(636);
					match(WS);
					}
					}
					setState(641);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(642);
				((ValuedU16FragmentContext)_localctx).literal = u16Literal();
				setState(644);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U16) {
					{
					setState(643);
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
				setState(646);
				match(EQ);
				setState(650);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(647);
					match(WS);
					}
					}
					setState(652);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(653);
				((ValuedU16FragmentContext)_localctx).literal = u16Literal();
				setState(654);
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
		enterRule(_localctx, 42, RULE_valuedU32Fragment);
		int _la;
		try {
			setState(693);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(658);
				match(COLON);
				setState(662);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(659);
					match(WS);
					}
					}
					setState(664);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(665);
				match(KW_U32);
				setState(669);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(666);
					match(WS);
					}
					}
					setState(671);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(672);
				match(EQ);
				setState(676);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(673);
					match(WS);
					}
					}
					setState(678);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(679);
				((ValuedU32FragmentContext)_localctx).literal = u32Literal();
				setState(681);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U32) {
					{
					setState(680);
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
				setState(683);
				match(EQ);
				setState(687);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(684);
					match(WS);
					}
					}
					setState(689);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(690);
				((ValuedU32FragmentContext)_localctx).literal = u32Literal();
				setState(691);
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
		enterRule(_localctx, 44, RULE_valuedU64Fragment);
		int _la;
		try {
			setState(730);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(695);
				match(COLON);
				setState(699);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(696);
					match(WS);
					}
					}
					setState(701);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(702);
				match(KW_U64);
				setState(706);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(703);
					match(WS);
					}
					}
					setState(708);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(709);
				match(EQ);
				setState(713);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(710);
					match(WS);
					}
					}
					setState(715);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(716);
				((ValuedU64FragmentContext)_localctx).literal = u64Literal();
				setState(718);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U64) {
					{
					setState(717);
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
				setState(720);
				match(EQ);
				setState(724);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(721);
					match(WS);
					}
					}
					setState(726);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(727);
				((ValuedU64FragmentContext)_localctx).literal = u64Literal();
				setState(728);
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
		enterRule(_localctx, 46, RULE_valuedI8Fragment);
		int _la;
		try {
			setState(767);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(732);
				match(COLON);
				setState(736);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(733);
					match(WS);
					}
					}
					setState(738);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(739);
				match(KW_I8);
				setState(743);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(740);
					match(WS);
					}
					}
					setState(745);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(746);
				match(EQ);
				setState(750);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(747);
					match(WS);
					}
					}
					setState(752);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(753);
				((ValuedI8FragmentContext)_localctx).literal = i8Literal();
				setState(755);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I8) {
					{
					setState(754);
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
				setState(757);
				match(EQ);
				setState(761);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(758);
					match(WS);
					}
					}
					setState(763);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(764);
				((ValuedI8FragmentContext)_localctx).literal = i8Literal();
				setState(765);
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
		enterRule(_localctx, 48, RULE_valuedI16Fragment);
		int _la;
		try {
			setState(804);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(769);
				match(COLON);
				setState(773);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(770);
					match(WS);
					}
					}
					setState(775);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(776);
				match(KW_I16);
				setState(780);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(777);
					match(WS);
					}
					}
					setState(782);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(783);
				match(EQ);
				setState(787);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(784);
					match(WS);
					}
					}
					setState(789);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(790);
				((ValuedI16FragmentContext)_localctx).literal = i16Literal();
				setState(792);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I16) {
					{
					setState(791);
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
				setState(794);
				match(EQ);
				setState(798);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(795);
					match(WS);
					}
					}
					setState(800);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(801);
				((ValuedI16FragmentContext)_localctx).literal = i16Literal();
				setState(802);
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
		enterRule(_localctx, 50, RULE_valuedI32Fragment);
		int _la;
		try {
			setState(842);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(806);
				match(COLON);
				setState(810);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(807);
					match(WS);
					}
					}
					setState(812);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(813);
				match(KW_I32);
				setState(817);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(814);
					match(WS);
					}
					}
					setState(819);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(820);
				match(EQ);
				setState(824);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(821);
					match(WS);
					}
					}
					setState(826);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(827);
				((ValuedI32FragmentContext)_localctx).literal = i32Literal();
				setState(829);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I32) {
					{
					setState(828);
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
				setState(831);
				match(EQ);
				setState(835);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(832);
					match(WS);
					}
					}
					setState(837);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(838);
				((ValuedI32FragmentContext)_localctx).literal = i32Literal();
				setState(840);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I32) {
					{
					setState(839);
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
		enterRule(_localctx, 52, RULE_valuedI64Fragment);
		int _la;
		try {
			setState(879);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(844);
				match(COLON);
				setState(848);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(845);
					match(WS);
					}
					}
					setState(850);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(851);
				match(KW_I64);
				setState(855);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(852);
					match(WS);
					}
					}
					setState(857);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(858);
				match(EQ);
				setState(862);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(859);
					match(WS);
					}
					}
					setState(864);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(865);
				((ValuedI64FragmentContext)_localctx).literal = i64Literal();
				setState(867);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I64) {
					{
					setState(866);
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
				setState(869);
				match(EQ);
				setState(873);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(870);
					match(WS);
					}
					}
					setState(875);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(876);
				((ValuedI64FragmentContext)_localctx).literal = i64Literal();
				setState(877);
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
		enterRule(_localctx, 54, RULE_typedefVersionDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(881);
			match(KW_TYPEDEF);
			setState(885);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(882);
				match(WS);
				}
				}
				setState(887);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(888);
			match(EQ);
			setState(892);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(889);
				match(WS);
				}
				}
				setState(894);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(895);
			identifier();
			setState(899);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(896);
				match(WS);
				}
				}
				setState(901);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(902);
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
		enterRule(_localctx, 56, RULE_moduleDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(904);
			match(KW_MODULE);
			setState(905);
			simplePath();
			setState(906);
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
		enterRule(_localctx, 58, RULE_useDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(908);
			match(KW_USE);
			setState(909);
			useTree();
			setState(910);
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
		enterRule(_localctx, 60, RULE_useTree);
		int _la;
		try {
			int _alt;
			setState(941);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,127,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(916);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE || _la==PATHSEP) {
					{
					setState(913);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,120,_ctx) ) {
					case 1:
						{
						setState(912);
						simplePath();
						}
						break;
					}
					setState(915);
					match(PATHSEP);
					}
				}

				setState(934);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case STAR:
					{
					setState(918);
					match(STAR);
					}
					break;
				case LBRACE:
					{
					setState(919);
					match(LBRACE);
					setState(931);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (((((_la - 84)) & ~0x3f) == 0 && ((1L << (_la - 84)) & ((1L << (NON_KEYWORD_IDENTIFIER - 84)) | (1L << (RAW_ESCAPE - 84)) | (1L << (STAR - 84)))) != 0) || _la==PATHSEP || _la==LBRACE) {
						{
						setState(920);
						useTree();
						setState(925);
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,122,_ctx);
						while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
							if ( _alt==1 ) {
								{
								{
								setState(921);
								match(COMMA);
								setState(922);
								useTree();
								}
								} 
							}
							setState(927);
							_errHandler.sync(this);
							_alt = getInterpreter().adaptivePredict(_input,122,_ctx);
						}
						setState(929);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(928);
							match(COMMA);
							}
						}

						}
					}

					setState(933);
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
				setState(936);
				simplePath();
				setState(939);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_AS) {
					{
					setState(937);
					match(KW_AS);
					setState(938);
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
		enterRule(_localctx, 62, RULE_simplePath);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(944);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PATHSEP) {
				{
				setState(943);
				match(PATHSEP);
				}
			}

			setState(946);
			identifier();
			setState(951);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,129,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(947);
					match(PATHSEP);
					setState(948);
					identifier();
					}
					} 
				}
				setState(953);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,129,_ctx);
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
		enterRule(_localctx, 64, RULE_boolLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(954);
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
		enterRule(_localctx, 66, RULE_charLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(956);
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
		enterRule(_localctx, 68, RULE_f32Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(959);
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
		enterRule(_localctx, 70, RULE_f64Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(962);
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
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public TerminalNode MINUS() { return getToken(TypedefParser.MINUS, 0); }
		public U8LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u8Literal; }
	}

	public final U8LiteralContext u8Literal() throws RecognitionException {
		U8LiteralContext _localctx = new U8LiteralContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_u8Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(975);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(966);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(965);
					match(MINUS);
					}
				}

				setState(968);
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
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(969);
				match(HEX_PREFIX);
				setState(970);
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
				setState(971);
				match(OCT_PREFIX);
				setState(972);
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
				setState(973);
				match(BIN_PREFIX);
				setState(974);
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
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public TerminalNode MINUS() { return getToken(TypedefParser.MINUS, 0); }
		public U16LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u16Literal; }
	}

	public final U16LiteralContext u16Literal() throws RecognitionException {
		U16LiteralContext _localctx = new U16LiteralContext(_ctx, getState());
		enterRule(_localctx, 74, RULE_u16Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(989);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(980);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(979);
					match(MINUS);
					}
				}

				setState(982);
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
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(983);
				match(HEX_PREFIX);
				setState(984);
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
				setState(985);
				match(OCT_PREFIX);
				setState(986);
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
				setState(987);
				match(BIN_PREFIX);
				setState(988);
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
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public TerminalNode MINUS() { return getToken(TypedefParser.MINUS, 0); }
		public U32LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u32Literal; }
	}

	public final U32LiteralContext u32Literal() throws RecognitionException {
		U32LiteralContext _localctx = new U32LiteralContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_u32Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1003);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(994);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(993);
					match(MINUS);
					}
				}

				setState(996);
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
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(997);
				match(HEX_PREFIX);
				setState(998);
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
				setState(999);
				match(OCT_PREFIX);
				setState(1000);
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
				setState(1001);
				match(BIN_PREFIX);
				setState(1002);
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
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public TerminalNode MINUS() { return getToken(TypedefParser.MINUS, 0); }
		public U64LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u64Literal; }
	}

	public final U64LiteralContext u64Literal() throws RecognitionException {
		U64LiteralContext _localctx = new U64LiteralContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_u64Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1017);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1008);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1007);
					match(MINUS);
					}
				}

				setState(1010);
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
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(1011);
				match(HEX_PREFIX);
				setState(1012);
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
				setState(1013);
				match(OCT_PREFIX);
				setState(1014);
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
				setState(1015);
				match(BIN_PREFIX);
				setState(1016);
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
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public TerminalNode MINUS() { return getToken(TypedefParser.MINUS, 0); }
		public I8LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i8Literal; }
	}

	public final I8LiteralContext i8Literal() throws RecognitionException {
		I8LiteralContext _localctx = new I8LiteralContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_i8Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1031);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1022);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1021);
					match(MINUS);
					}
				}

				setState(1024);
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
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(1025);
				match(HEX_PREFIX);
				setState(1026);
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
				setState(1027);
				match(OCT_PREFIX);
				setState(1028);
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
				setState(1029);
				match(BIN_PREFIX);
				setState(1030);
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
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public TerminalNode MINUS() { return getToken(TypedefParser.MINUS, 0); }
		public I16LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i16Literal; }
	}

	public final I16LiteralContext i16Literal() throws RecognitionException {
		I16LiteralContext _localctx = new I16LiteralContext(_ctx, getState());
		enterRule(_localctx, 82, RULE_i16Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1045);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1036);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1035);
					match(MINUS);
					}
				}

				setState(1038);
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
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(1039);
				match(HEX_PREFIX);
				setState(1040);
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
				setState(1041);
				match(OCT_PREFIX);
				setState(1042);
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
				setState(1043);
				match(BIN_PREFIX);
				setState(1044);
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
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public TerminalNode MINUS() { return getToken(TypedefParser.MINUS, 0); }
		public I32LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i32Literal; }
	}

	public final I32LiteralContext i32Literal() throws RecognitionException {
		I32LiteralContext _localctx = new I32LiteralContext(_ctx, getState());
		enterRule(_localctx, 84, RULE_i32Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1059);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1050);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1049);
					match(MINUS);
					}
				}

				setState(1052);
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
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(1053);
				match(HEX_PREFIX);
				setState(1054);
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
				setState(1055);
				match(OCT_PREFIX);
				setState(1056);
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
				setState(1057);
				match(BIN_PREFIX);
				setState(1058);
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
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public TerminalNode MINUS() { return getToken(TypedefParser.MINUS, 0); }
		public I64LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i64Literal; }
	}

	public final I64LiteralContext i64Literal() throws RecognitionException {
		I64LiteralContext _localctx = new I64LiteralContext(_ctx, getState());
		enterRule(_localctx, 86, RULE_i64Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1073);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1064);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1063);
					match(MINUS);
					}
				}

				setState(1066);
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
				}
				break;
			case HEX_PREFIX:
				{
				{
				setState(1067);
				match(HEX_PREFIX);
				setState(1068);
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
				setState(1069);
				match(OCT_PREFIX);
				setState(1070);
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
				setState(1071);
				match(BIN_PREFIX);
				setState(1072);
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
		enterRule(_localctx, 88, RULE_stringLiteral);
		try {
			setState(1081);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STRING_LITERAL:
				enterOuterAlt(_localctx, 1);
				{
				setState(1077);
				((StringLiteralContext)_localctx).STRING_LITERAL = match(STRING_LITERAL);

						((StringLiteralContext)_localctx).maybe_val =  GetStringValue(this, ((StringLiteralContext)_localctx).STRING_LITERAL);
					
				}
				break;
			case RAW_STRING_LITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(1079);
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
		enterRule(_localctx, 90, RULE_identifier);
		try {
			setState(1086);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NON_KEYWORD_IDENTIFIER:
				enterOuterAlt(_localctx, 1);
				{
				setState(1083);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(1084);
				match(RAW_ESCAPE);
				setState(1085);
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
		public TerminalNode KW_VARIANT() { return getToken(TypedefParser.KW_VARIANT, 0); }
		public TerminalNode KW_VECTOR() { return getToken(TypedefParser.KW_VECTOR, 0); }
		public TerminalNode KW_MAP() { return getToken(TypedefParser.KW_MAP, 0); }
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
		enterRule(_localctx, 92, RULE_keyword);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1088);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << KW_AS) | (1L << KW_ENUM) | (1L << KW_FALSE) | (1L << KW_FN) | (1L << KW_IMPL) | (1L << KW_MODULE) | (1L << KW_STRUCT) | (1L << KW_TRUE) | (1L << KW_TYPE) | (1L << KW_TYPEDEF) | (1L << KW_USE) | (1L << KW_VARIANT) | (1L << KW_VECTOR) | (1L << KW_MAP) | (1L << KW_AND) | (1L << KW_IN) | (1L << KW_LET) | (1L << KW_NOT) | (1L << KW_OR) | (1L << KW_SIZEOF) | (1L << KW_THIS) | (1L << KW_TRAIT) | (1L << KW_WHERE) | (1L << KW_XOR) | (1L << KW_BREAK) | (1L << KW_CONTINUE) | (1L << KW_DEFAULT) | (1L << KW_DO) | (1L << KW_ELSE) | (1L << KW_FOR) | (1L << KW_GOTO) | (1L << KW_IF) | (1L << KW_LOOP) | (1L << KW_MATCH) | (1L << KW_MOVE) | (1L << KW_RETURN) | (1L << KW_TRY) | (1L << KW_WHILE) | (1L << KW_YIELD) | (1L << KW_ABSTRACT) | (1L << KW_AUTO) | (1L << KW_CONST) | (1L << KW_DOUBLE) | (1L << KW_EXTERN) | (1L << KW_FINAL) | (1L << KW_FLOAT) | (1L << KW_INT) | (1L << KW_LONG) | (1L << KW_MACRO) | (1L << KW_MUT) | (1L << KW_OVERRIDE) | (1L << KW_PRIVATE) | (1L << KW_PUB) | (1L << KW_REF) | (1L << KW_SELFTYPE) | (1L << KW_SELFVALUE) | (1L << KW_SIGNED) | (1L << KW_STATIC) | (1L << KW_SUPER) | (1L << KW_SWITCH) | (1L << KW_TYPEOF))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (KW_UNION - 64)) | (1L << (KW_UNSAFE - 64)) | (1L << (KW_UNSIGNED - 64)) | (1L << (KW_UNSIZED - 64)) | (1L << (KW_VIRTUAL - 64)) | (1L << (KW_VOID - 64)) | (1L << (KW_VOLATILE - 64)))) != 0)) ) {
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00a2\u0445\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\3\2\3\2\7\2c\n\2\f\2\16\2f\13\2\3\2\5"+
		"\2i\n\2\3\2\7\2l\n\2\f\2\16\2o\13\2\3\2\7\2r\n\2\f\2\16\2u\13\2\3\2\7"+
		"\2x\n\2\f\2\16\2{\13\2\3\2\7\2~\n\2\f\2\16\2\u0081\13\2\3\2\7\2\u0084"+
		"\n\2\f\2\16\2\u0087\13\2\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\5"+
		"\3\u0094\n\3\3\4\3\4\7\4\u0098\n\4\f\4\16\4\u009b\13\4\3\4\3\4\3\5\3\5"+
		"\7\5\u00a1\n\5\f\5\16\5\u00a4\13\5\3\5\3\5\7\5\u00a8\n\5\f\5\16\5\u00ab"+
		"\13\5\3\5\3\5\7\5\u00af\n\5\f\5\16\5\u00b2\13\5\3\5\3\5\7\5\u00b6\n\5"+
		"\f\5\16\5\u00b9\13\5\3\5\3\5\3\5\7\5\u00be\n\5\f\5\16\5\u00c1\13\5\3\5"+
		"\3\5\7\5\u00c5\n\5\f\5\16\5\u00c8\13\5\7\5\u00ca\n\5\f\5\16\5\u00cd\13"+
		"\5\3\5\3\5\7\5\u00d1\n\5\f\5\16\5\u00d4\13\5\3\5\3\5\3\5\3\5\3\6\3\6\7"+
		"\6\u00dc\n\6\f\6\16\6\u00df\13\6\3\6\3\6\7\6\u00e3\n\6\f\6\16\6\u00e6"+
		"\13\6\3\6\3\6\7\6\u00ea\n\6\f\6\16\6\u00ed\13\6\3\6\3\6\7\6\u00f1\n\6"+
		"\f\6\16\6\u00f4\13\6\3\6\3\6\3\6\7\6\u00f9\n\6\f\6\16\6\u00fc\13\6\3\6"+
		"\3\6\7\6\u0100\n\6\f\6\16\6\u0103\13\6\7\6\u0105\n\6\f\6\16\6\u0108\13"+
		"\6\3\6\3\6\7\6\u010c\n\6\f\6\16\6\u010f\13\6\3\6\3\6\3\6\3\6\3\7\3\7\7"+
		"\7\u0117\n\7\f\7\16\7\u011a\13\7\3\7\3\7\7\7\u011e\n\7\f\7\16\7\u0121"+
		"\13\7\3\7\3\7\3\b\3\b\7\b\u0127\n\b\f\b\16\b\u012a\13\b\3\b\3\b\7\b\u012e"+
		"\n\b\f\b\16\b\u0131\13\b\3\b\3\b\3\t\3\t\5\t\u0137\n\t\3\n\3\n\3\13\3"+
		"\13\7\13\u013d\n\13\f\13\16\13\u0140\13\13\3\13\3\13\3\13\3\13\5\13\u0146"+
		"\n\13\3\f\3\f\7\f\u014a\n\f\f\f\16\f\u014d\13\f\3\f\3\f\7\f\u0151\n\f"+
		"\f\f\16\f\u0154\13\f\3\f\3\f\5\f\u0158\n\f\3\f\7\f\u015b\n\f\f\f\16\f"+
		"\u015e\13\f\3\f\3\f\3\r\3\r\7\r\u0164\n\r\f\r\16\r\u0167\13\r\3\r\3\r"+
		"\7\r\u016b\n\r\f\r\16\r\u016e\13\r\3\r\3\r\7\r\u0172\n\r\f\r\16\r\u0175"+
		"\13\r\3\r\3\r\7\r\u0179\n\r\f\r\16\r\u017c\13\r\3\r\3\r\5\r\u0180\n\r"+
		"\3\r\7\r\u0183\n\r\f\r\16\r\u0186\13\r\3\r\3\r\3\16\3\16\3\17\3\17\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\5\17\u01b3\n\17\3\20\3\20\7\20"+
		"\u01b7\n\20\f\20\16\20\u01ba\13\20\3\20\5\20\u01bd\n\20\3\20\7\20\u01c0"+
		"\n\20\f\20\16\20\u01c3\13\20\3\20\3\20\7\20\u01c7\n\20\f\20\16\20\u01ca"+
		"\13\20\3\20\3\20\3\21\3\21\7\21\u01d0\n\21\f\21\16\21\u01d3\13\21\3\21"+
		"\5\21\u01d6\n\21\3\21\7\21\u01d9\n\21\f\21\16\21\u01dc\13\21\3\21\3\21"+
		"\7\21\u01e0\n\21\f\21\16\21\u01e3\13\21\3\21\3\21\3\22\3\22\7\22\u01e9"+
		"\n\22\f\22\16\22\u01ec\13\22\3\22\5\22\u01ef\n\22\3\22\7\22\u01f2\n\22"+
		"\f\22\16\22\u01f5\13\22\3\22\3\22\7\22\u01f9\n\22\f\22\16\22\u01fc\13"+
		"\22\3\22\3\22\3\23\3\23\7\23\u0202\n\23\f\23\16\23\u0205\13\23\3\23\3"+
		"\23\7\23\u0209\n\23\f\23\16\23\u020c\13\23\3\23\3\23\7\23\u0210\n\23\f"+
		"\23\16\23\u0213\13\23\3\23\3\23\5\23\u0217\n\23\3\23\3\23\7\23\u021b\n"+
		"\23\f\23\16\23\u021e\13\23\3\23\3\23\5\23\u0222\n\23\5\23\u0224\n\23\3"+
		"\24\3\24\7\24\u0228\n\24\f\24\16\24\u022b\13\24\3\24\3\24\7\24\u022f\n"+
		"\24\f\24\16\24\u0232\13\24\3\24\3\24\7\24\u0236\n\24\f\24\16\24\u0239"+
		"\13\24\3\24\3\24\5\24\u023d\n\24\3\24\3\24\7\24\u0241\n\24\f\24\16\24"+
		"\u0244\13\24\3\24\3\24\3\24\5\24\u0249\n\24\3\25\3\25\7\25\u024d\n\25"+
		"\f\25\16\25\u0250\13\25\3\25\3\25\7\25\u0254\n\25\f\25\16\25\u0257\13"+
		"\25\3\25\3\25\7\25\u025b\n\25\f\25\16\25\u025e\13\25\3\25\3\25\5\25\u0262"+
		"\n\25\3\25\3\25\7\25\u0266\n\25\f\25\16\25\u0269\13\25\3\25\3\25\3\25"+
		"\5\25\u026e\n\25\3\26\3\26\7\26\u0272\n\26\f\26\16\26\u0275\13\26\3\26"+
		"\3\26\7\26\u0279\n\26\f\26\16\26\u027c\13\26\3\26\3\26\7\26\u0280\n\26"+
		"\f\26\16\26\u0283\13\26\3\26\3\26\5\26\u0287\n\26\3\26\3\26\7\26\u028b"+
		"\n\26\f\26\16\26\u028e\13\26\3\26\3\26\3\26\5\26\u0293\n\26\3\27\3\27"+
		"\7\27\u0297\n\27\f\27\16\27\u029a\13\27\3\27\3\27\7\27\u029e\n\27\f\27"+
		"\16\27\u02a1\13\27\3\27\3\27\7\27\u02a5\n\27\f\27\16\27\u02a8\13\27\3"+
		"\27\3\27\5\27\u02ac\n\27\3\27\3\27\7\27\u02b0\n\27\f\27\16\27\u02b3\13"+
		"\27\3\27\3\27\3\27\5\27\u02b8\n\27\3\30\3\30\7\30\u02bc\n\30\f\30\16\30"+
		"\u02bf\13\30\3\30\3\30\7\30\u02c3\n\30\f\30\16\30\u02c6\13\30\3\30\3\30"+
		"\7\30\u02ca\n\30\f\30\16\30\u02cd\13\30\3\30\3\30\5\30\u02d1\n\30\3\30"+
		"\3\30\7\30\u02d5\n\30\f\30\16\30\u02d8\13\30\3\30\3\30\3\30\5\30\u02dd"+
		"\n\30\3\31\3\31\7\31\u02e1\n\31\f\31\16\31\u02e4\13\31\3\31\3\31\7\31"+
		"\u02e8\n\31\f\31\16\31\u02eb\13\31\3\31\3\31\7\31\u02ef\n\31\f\31\16\31"+
		"\u02f2\13\31\3\31\3\31\5\31\u02f6\n\31\3\31\3\31\7\31\u02fa\n\31\f\31"+
		"\16\31\u02fd\13\31\3\31\3\31\3\31\5\31\u0302\n\31\3\32\3\32\7\32\u0306"+
		"\n\32\f\32\16\32\u0309\13\32\3\32\3\32\7\32\u030d\n\32\f\32\16\32\u0310"+
		"\13\32\3\32\3\32\7\32\u0314\n\32\f\32\16\32\u0317\13\32\3\32\3\32\5\32"+
		"\u031b\n\32\3\32\3\32\7\32\u031f\n\32\f\32\16\32\u0322\13\32\3\32\3\32"+
		"\3\32\5\32\u0327\n\32\3\33\3\33\7\33\u032b\n\33\f\33\16\33\u032e\13\33"+
		"\3\33\3\33\7\33\u0332\n\33\f\33\16\33\u0335\13\33\3\33\3\33\7\33\u0339"+
		"\n\33\f\33\16\33\u033c\13\33\3\33\3\33\5\33\u0340\n\33\3\33\3\33\7\33"+
		"\u0344\n\33\f\33\16\33\u0347\13\33\3\33\3\33\5\33\u034b\n\33\5\33\u034d"+
		"\n\33\3\34\3\34\7\34\u0351\n\34\f\34\16\34\u0354\13\34\3\34\3\34\7\34"+
		"\u0358\n\34\f\34\16\34\u035b\13\34\3\34\3\34\7\34\u035f\n\34\f\34\16\34"+
		"\u0362\13\34\3\34\3\34\5\34\u0366\n\34\3\34\3\34\7\34\u036a\n\34\f\34"+
		"\16\34\u036d\13\34\3\34\3\34\3\34\5\34\u0372\n\34\3\35\3\35\7\35\u0376"+
		"\n\35\f\35\16\35\u0379\13\35\3\35\3\35\7\35\u037d\n\35\f\35\16\35\u0380"+
		"\13\35\3\35\3\35\7\35\u0384\n\35\f\35\16\35\u0387\13\35\3\35\3\35\3\36"+
		"\3\36\3\36\3\36\3\37\3\37\3\37\3\37\3 \5 \u0394\n \3 \5 \u0397\n \3 \3"+
		" \3 \3 \3 \7 \u039e\n \f \16 \u03a1\13 \3 \5 \u03a4\n \5 \u03a6\n \3 "+
		"\5 \u03a9\n \3 \3 \3 \5 \u03ae\n \5 \u03b0\n \3!\5!\u03b3\n!\3!\3!\3!"+
		"\7!\u03b8\n!\f!\16!\u03bb\13!\3\"\3\"\3#\3#\3#\3$\3$\3$\3%\3%\3%\3&\5"+
		"&\u03c9\n&\3&\3&\3&\3&\3&\3&\3&\5&\u03d2\n&\3&\3&\3\'\5\'\u03d7\n\'\3"+
		"\'\3\'\3\'\3\'\3\'\3\'\3\'\5\'\u03e0\n\'\3\'\3\'\3(\5(\u03e5\n(\3(\3("+
		"\3(\3(\3(\3(\3(\5(\u03ee\n(\3(\3(\3)\5)\u03f3\n)\3)\3)\3)\3)\3)\3)\3)"+
		"\5)\u03fc\n)\3)\3)\3*\5*\u0401\n*\3*\3*\3*\3*\3*\3*\3*\5*\u040a\n*\3*"+
		"\3*\3+\5+\u040f\n+\3+\3+\3+\3+\3+\3+\3+\5+\u0418\n+\3+\3+\3,\5,\u041d"+
		"\n,\3,\3,\3,\3,\3,\3,\3,\5,\u0426\n,\3,\3,\3-\5-\u042b\n-\3-\3-\3-\3-"+
		"\3-\3-\3-\5-\u0434\n-\3-\3-\3.\3.\3.\3.\5.\u043c\n.\3/\3/\3/\5/\u0441"+
		"\n/\3\60\3\60\3\60\2\2\61\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&"+
		"(*,.\60\62\64\668:<>@BDFHJLNPRTVXZ\\^\2\t\3\2IU\4\2\6\6\f\f\3\2cd\3\2"+
		"ef\3\2gh\3\2ij\4\2\4\b\nH\2\u04c7\2`\3\2\2\2\4\u0093\3\2\2\2\6\u0095\3"+
		"\2\2\2\b\u009e\3\2\2\2\n\u00d9\3\2\2\2\f\u0114\3\2\2\2\16\u0124\3\2\2"+
		"\2\20\u0136\3\2\2\2\22\u0138\3\2\2\2\24\u013a\3\2\2\2\26\u0147\3\2\2\2"+
		"\30\u0161\3\2\2\2\32\u0189\3\2\2\2\34\u01b2\3\2\2\2\36\u01bc\3\2\2\2 "+
		"\u01d5\3\2\2\2\"\u01ee\3\2\2\2$\u0223\3\2\2\2&\u0248\3\2\2\2(\u026d\3"+
		"\2\2\2*\u0292\3\2\2\2,\u02b7\3\2\2\2.\u02dc\3\2\2\2\60\u0301\3\2\2\2\62"+
		"\u0326\3\2\2\2\64\u034c\3\2\2\2\66\u0371\3\2\2\28\u0373\3\2\2\2:\u038a"+
		"\3\2\2\2<\u038e\3\2\2\2>\u03af\3\2\2\2@\u03b2\3\2\2\2B\u03bc\3\2\2\2D"+
		"\u03be\3\2\2\2F\u03c1\3\2\2\2H\u03c4\3\2\2\2J\u03d1\3\2\2\2L\u03df\3\2"+
		"\2\2N\u03ed\3\2\2\2P\u03fb\3\2\2\2R\u0409\3\2\2\2T\u0417\3\2\2\2V\u0425"+
		"\3\2\2\2X\u0433\3\2\2\2Z\u043b\3\2\2\2\\\u0440\3\2\2\2^\u0442\3\2\2\2"+
		"`d\58\35\2ac\7_\2\2ba\3\2\2\2cf\3\2\2\2db\3\2\2\2de\3\2\2\2eh\3\2\2\2"+
		"fd\3\2\2\2gi\5:\36\2hg\3\2\2\2hi\3\2\2\2is\3\2\2\2jl\7_\2\2kj\3\2\2\2"+
		"lo\3\2\2\2mk\3\2\2\2mn\3\2\2\2np\3\2\2\2om\3\2\2\2pr\5<\37\2qm\3\2\2\2"+
		"ru\3\2\2\2sq\3\2\2\2st\3\2\2\2t\177\3\2\2\2us\3\2\2\2vx\7_\2\2wv\3\2\2"+
		"\2x{\3\2\2\2yw\3\2\2\2yz\3\2\2\2z|\3\2\2\2{y\3\2\2\2|~\5\4\3\2}y\3\2\2"+
		"\2~\u0081\3\2\2\2\177}\3\2\2\2\177\u0080\3\2\2\2\u0080\u0085\3\2\2\2\u0081"+
		"\177\3\2\2\2\u0082\u0084\7_\2\2\u0083\u0082\3\2\2\2\u0084\u0087\3\2\2"+
		"\2\u0085\u0083\3\2\2\2\u0085\u0086\3\2\2\2\u0086\u0088\3\2\2\2\u0087\u0085"+
		"\3\2\2\2\u0088\u0089\7\2\2\3\u0089\3\3\2\2\2\u008a\u008b\5\6\4\2\u008b"+
		"\u008c\b\3\1\2\u008c\u0094\3\2\2\2\u008d\u008e\5\n\6\2\u008e\u008f\b\3"+
		"\1\2\u008f\u0094\3\2\2\2\u0090\u0091\5\b\5\2\u0091\u0092\b\3\1\2\u0092"+
		"\u0094\3\2\2\2\u0093\u008a\3\2\2\2\u0093\u008d\3\2\2\2\u0093\u0090\3\2"+
		"\2\2\u0094\5\3\2\2\2\u0095\u0099\5\f\7\2\u0096\u0098\7_\2\2\u0097\u0096"+
		"\3\2\2\2\u0098\u009b\3\2\2\2\u0099\u0097\3\2\2\2\u0099\u009a\3\2\2\2\u009a"+
		"\u009c\3\2\2\2\u009b\u0099\3\2\2\2\u009c\u009d\7\u0095\2\2\u009d\7\3\2"+
		"\2\2\u009e\u00a2\5\\/\2\u009f\u00a1\7_\2\2\u00a0\u009f\3\2\2\2\u00a1\u00a4"+
		"\3\2\2\2\u00a2\u00a0\3\2\2\2\u00a2\u00a3\3\2\2\2\u00a3\u00a5\3\2\2\2\u00a4"+
		"\u00a2\3\2\2\2\u00a5\u00a9\7\u0096\2\2\u00a6\u00a8\7_\2\2\u00a7\u00a6"+
		"\3\2\2\2\u00a8\u00ab\3\2\2\2\u00a9\u00a7\3\2\2\2\u00a9\u00aa\3\2\2\2\u00aa"+
		"\u00ac\3\2\2\2\u00ab\u00a9\3\2\2\2\u00ac\u00b0\7\20\2\2\u00ad\u00af\7"+
		"_\2\2\u00ae\u00ad\3\2\2\2\u00af\u00b2\3\2\2\2\u00b0\u00ae\3\2\2\2\u00b0"+
		"\u00b1\3\2\2\2\u00b1\u00b3\3\2\2\2\u00b2\u00b0\3\2\2\2\u00b3\u00cb\7\u009d"+
		"\2\2\u00b4\u00b6\7_\2\2\u00b5\u00b4\3\2\2\2\u00b6\u00b9\3\2\2\2\u00b7"+
		"\u00b5\3\2\2\2\u00b7\u00b8\3\2\2\2\u00b8\u00ba\3\2\2\2\u00b9\u00b7\3\2"+
		"\2\2\u00ba\u00bb\5\16\b\2\u00bb\u00bf\b\5\1\2\u00bc\u00be\7_\2\2\u00bd"+
		"\u00bc\3\2\2\2\u00be\u00c1\3\2\2\2\u00bf\u00bd\3\2\2\2\u00bf\u00c0\3\2"+
		"\2\2\u00c0\u00c2\3\2\2\2\u00c1\u00bf\3\2\2\2\u00c2\u00c6\7\u0095\2\2\u00c3"+
		"\u00c5\7_\2\2\u00c4\u00c3\3\2\2\2\u00c5\u00c8\3\2\2\2\u00c6\u00c4\3\2"+
		"\2\2\u00c6\u00c7\3\2\2\2\u00c7\u00ca\3\2\2\2\u00c8\u00c6\3\2\2\2\u00c9"+
		"\u00b7\3\2\2\2\u00ca\u00cd\3\2\2\2\u00cb\u00c9\3\2\2\2\u00cb\u00cc\3\2"+
		"\2\2\u00cc\u00ce\3\2\2\2\u00cd\u00cb\3\2\2\2\u00ce\u00d2\7\u009e\2\2\u00cf"+
		"\u00d1\7_\2\2\u00d0\u00cf\3\2\2\2\u00d1\u00d4\3\2\2\2\u00d2\u00d0\3\2"+
		"\2\2\u00d2\u00d3\3\2\2\2\u00d3\u00d5\3\2\2\2\u00d4\u00d2\3\2\2\2\u00d5"+
		"\u00d6\7\u0095\2\2\u00d6\u00d7\3\2\2\2\u00d7\u00d8\b\5\1\2\u00d8\t\3\2"+
		"\2\2\u00d9\u00dd\5\\/\2\u00da\u00dc\7_\2\2\u00db\u00da\3\2\2\2\u00dc\u00df"+
		"\3\2\2\2\u00dd\u00db\3\2\2\2\u00dd\u00de\3\2\2\2\u00de\u00e0\3\2\2\2\u00df"+
		"\u00dd\3\2\2\2\u00e0\u00e4\7\u0096\2\2\u00e1\u00e3\7_\2\2\u00e2\u00e1"+
		"\3\2\2\2\u00e3\u00e6\3\2\2\2\u00e4\u00e2\3\2\2\2\u00e4\u00e5\3\2\2\2\u00e5"+
		"\u00e7\3\2\2\2\u00e6\u00e4\3\2\2\2\u00e7\u00eb\7\13\2\2\u00e8\u00ea\7"+
		"_\2\2\u00e9\u00e8\3\2\2\2\u00ea\u00ed\3\2\2\2\u00eb\u00e9\3\2\2\2\u00eb"+
		"\u00ec\3\2\2\2\u00ec\u00ee\3\2\2\2\u00ed\u00eb\3\2\2\2\u00ee\u0106\7\u009d"+
		"\2\2\u00ef\u00f1\7_\2\2\u00f0\u00ef\3\2\2\2\u00f1\u00f4\3\2\2\2\u00f2"+
		"\u00f0\3\2\2\2\u00f2\u00f3\3\2\2\2\u00f3\u00f5\3\2\2\2\u00f4\u00f2\3\2"+
		"\2\2\u00f5\u00f6\5\f\7\2\u00f6\u00fa\b\6\1\2\u00f7\u00f9\7_\2\2\u00f8"+
		"\u00f7\3\2\2\2\u00f9\u00fc\3\2\2\2\u00fa\u00f8\3\2\2\2\u00fa\u00fb\3\2"+
		"\2\2\u00fb\u00fd\3\2\2\2\u00fc\u00fa\3\2\2\2\u00fd\u0101\7\u0095\2\2\u00fe"+
		"\u0100\7_\2\2\u00ff\u00fe\3\2\2\2\u0100\u0103\3\2\2\2\u0101\u00ff\3\2"+
		"\2\2\u0101\u0102\3\2\2\2\u0102\u0105\3\2\2\2\u0103\u0101\3\2\2\2\u0104"+
		"\u00f2\3\2\2\2\u0105\u0108\3\2\2\2\u0106\u0104\3\2\2\2\u0106\u0107\3\2"+
		"\2\2\u0107\u0109\3\2\2\2\u0108\u0106\3\2\2\2\u0109\u010d\7\u009e\2\2\u010a"+
		"\u010c\7_\2\2\u010b\u010a\3\2\2\2\u010c\u010f\3\2\2\2\u010d\u010b\3\2"+
		"\2\2\u010d\u010e\3\2\2\2\u010e\u0110\3\2\2\2\u010f\u010d\3\2\2\2\u0110"+
		"\u0111\7\u0095\2\2\u0111\u0112\3\2\2\2\u0112\u0113\b\6\1\2\u0113\13\3"+
		"\2\2\2\u0114\u0118\5\\/\2\u0115\u0117\7_\2\2\u0116\u0115\3\2\2\2\u0117"+
		"\u011a\3\2\2\2\u0118\u0116\3\2\2\2\u0118\u0119\3\2\2\2\u0119\u011b\3\2"+
		"\2\2\u011a\u0118\3\2\2\2\u011b\u011f\5\20\t\2\u011c\u011e\7_\2\2\u011d"+
		"\u011c\3\2\2\2\u011e\u0121\3\2\2\2\u011f\u011d\3\2\2\2\u011f\u0120\3\2"+
		"\2\2\u0120\u0122\3\2\2\2\u0121\u011f\3\2\2\2\u0122\u0123\b\7\1\2\u0123"+
		"\r\3\2\2\2\u0124\u0128\5\\/\2\u0125\u0127\7_\2\2\u0126\u0125\3\2\2\2\u0127"+
		"\u012a\3\2\2\2\u0128\u0126\3\2\2\2\u0128\u0129\3\2\2\2\u0129\u012b\3\2"+
		"\2\2\u012a\u0128\3\2\2\2\u012b\u012f\5\24\13\2\u012c\u012e\7_\2\2\u012d"+
		"\u012c\3\2\2\2\u012e\u0131\3\2\2\2\u012f\u012d\3\2\2\2\u012f\u0130\3\2"+
		"\2\2\u0130\u0132\3\2\2\2\u0131\u012f\3\2\2\2\u0132\u0133\b\b\1\2\u0133"+
		"\17\3\2\2\2\u0134\u0137\5\22\n\2\u0135\u0137\5\24\13\2\u0136\u0134\3\2"+
		"\2\2\u0136\u0135\3\2\2\2\u0137\21\3\2\2\2\u0138\u0139\5\34\17\2\u0139"+
		"\23\3\2\2\2\u013a\u013e\7\u0096\2\2\u013b\u013d\7_\2\2\u013c\u013b\3\2"+
		"\2\2\u013d\u0140\3\2\2\2\u013e\u013c\3\2\2\2\u013e\u013f\3\2\2\2\u013f"+
		"\u0145\3\2\2\2\u0140\u013e\3\2\2\2\u0141\u0146\5\32\16\2\u0142\u0146\5"+
		"\26\f\2\u0143\u0146\5\30\r\2\u0144\u0146\5\\/\2\u0145\u0141\3\2\2\2\u0145"+
		"\u0142\3\2\2\2\u0145\u0143\3\2\2\2\u0145\u0144\3\2\2\2\u0146\25\3\2\2"+
		"\2\u0147\u014b\7\21\2\2\u0148\u014a\7_\2\2\u0149\u0148\3\2\2\2\u014a\u014d"+
		"\3\2\2\2\u014b\u0149\3\2\2\2\u014b\u014c\3\2\2\2\u014c\u014e\3\2\2\2\u014d"+
		"\u014b\3\2\2\2\u014e\u0152\7\u008c\2\2\u014f\u0151\7_\2\2\u0150\u014f"+
		"\3\2\2\2\u0151\u0154\3\2\2\2\u0152\u0150\3\2\2\2\u0152\u0153\3\2\2\2\u0153"+
		"\u0157\3\2\2\2\u0154\u0152\3\2\2\2\u0155\u0158\5\32\16\2\u0156\u0158\5"+
		"\\/\2\u0157\u0155\3\2\2\2\u0157\u0156\3\2\2\2\u0158\u015c\3\2\2\2\u0159"+
		"\u015b\7_\2\2\u015a\u0159\3\2\2\2\u015b\u015e\3\2\2\2\u015c\u015a\3\2"+
		"\2\2\u015c\u015d\3\2\2\2\u015d\u015f\3\2\2\2\u015e\u015c\3\2\2\2\u015f"+
		"\u0160\7\u008b\2\2\u0160\27\3\2\2\2\u0161\u0165\7\22\2\2\u0162\u0164\7"+
		"_\2\2\u0163\u0162\3\2\2\2\u0164\u0167\3\2\2\2\u0165\u0163\3\2\2\2\u0165"+
		"\u0166\3\2\2\2\u0166\u0168\3\2\2\2\u0167\u0165\3\2\2\2\u0168\u016c\7\u008c"+
		"\2\2\u0169\u016b\7_\2\2\u016a\u0169\3\2\2\2\u016b\u016e\3\2\2\2\u016c"+
		"\u016a\3\2\2\2\u016c\u016d\3\2\2\2\u016d\u016f\3\2\2\2\u016e\u016c\3\2"+
		"\2\2\u016f\u0173\5\32\16\2\u0170\u0172\7_\2\2\u0171\u0170\3\2\2\2\u0172"+
		"\u0175\3\2\2\2\u0173\u0171\3\2\2\2\u0173\u0174\3\2\2\2\u0174\u0176\3\2"+
		"\2\2\u0175\u0173\3\2\2\2\u0176\u017a\7\u0094\2\2\u0177\u0179\7_\2\2\u0178"+
		"\u0177\3\2\2\2\u0179\u017c\3\2\2\2\u017a\u0178\3\2\2\2\u017a\u017b\3\2"+
		"\2\2\u017b\u017f\3\2\2\2\u017c\u017a\3\2\2\2\u017d\u0180\5\32\16\2\u017e"+
		"\u0180\5\\/\2\u017f\u017d\3\2\2\2\u017f\u017e\3\2\2\2\u0180\u0184\3\2"+
		"\2\2\u0181\u0183\7_\2\2\u0182\u0181\3\2\2\2\u0183\u0186\3\2\2\2\u0184"+
		"\u0182\3\2\2\2\u0184\u0185\3\2\2\2\u0185\u0187\3\2\2\2\u0186\u0184\3\2"+
		"\2\2\u0187\u0188\7\u008b\2\2\u0188\31\3\2\2\2\u0189\u018a\t\2\2\2\u018a"+
		"\33\3\2\2\2\u018b\u018c\5\36\20\2\u018c\u018d\b\17\1\2\u018d\u01b3\3\2"+
		"\2\2\u018e\u018f\5 \21\2\u018f\u0190\b\17\1\2\u0190\u01b3\3\2\2\2\u0191"+
		"\u0192\5\"\22\2\u0192\u0193\b\17\1\2\u0193\u01b3\3\2\2\2\u0194\u0195\5"+
		"$\23\2\u0195\u0196\b\17\1\2\u0196\u01b3\3\2\2\2\u0197\u0198\5&\24\2\u0198"+
		"\u0199\b\17\1\2\u0199\u01b3\3\2\2\2\u019a\u019b\5(\25\2\u019b\u019c\b"+
		"\17\1\2\u019c\u01b3\3\2\2\2\u019d\u019e\5*\26\2\u019e\u019f\b\17\1\2\u019f"+
		"\u01b3\3\2\2\2\u01a0\u01a1\5,\27\2\u01a1\u01a2\b\17\1\2\u01a2\u01b3\3"+
		"\2\2\2\u01a3\u01a4\5.\30\2\u01a4\u01a5\b\17\1\2\u01a5\u01b3\3\2\2\2\u01a6"+
		"\u01a7\5\60\31\2\u01a7\u01a8\b\17\1\2\u01a8\u01b3\3\2\2\2\u01a9\u01aa"+
		"\5\62\32\2\u01aa\u01ab\b\17\1\2\u01ab\u01b3\3\2\2\2\u01ac\u01ad\5\64\33"+
		"\2\u01ad\u01ae\b\17\1\2\u01ae\u01b3\3\2\2\2\u01af\u01b0\5\66\34\2\u01b0"+
		"\u01b1\b\17\1\2\u01b1\u01b3\3\2\2\2\u01b2\u018b\3\2\2\2\u01b2\u018e\3"+
		"\2\2\2\u01b2\u0191\3\2\2\2\u01b2\u0194\3\2\2\2\u01b2\u0197\3\2\2\2\u01b2"+
		"\u019a\3\2\2\2\u01b2\u019d\3\2\2\2\u01b2\u01a0\3\2\2\2\u01b2\u01a3\3\2"+
		"\2\2\u01b2\u01a6\3\2\2\2\u01b2\u01a9\3\2\2\2\u01b2\u01ac\3\2\2\2\u01b2"+
		"\u01af\3\2\2\2\u01b3\35\3\2\2\2\u01b4\u01b8\7\u0096\2\2\u01b5\u01b7\7"+
		"_\2\2\u01b6\u01b5\3\2\2\2\u01b7\u01ba\3\2\2\2\u01b8\u01b6\3\2\2\2\u01b8"+
		"\u01b9\3\2\2\2\u01b9\u01bb\3\2\2\2\u01ba\u01b8\3\2\2\2\u01bb\u01bd\7I"+
		"\2\2\u01bc\u01b4\3\2\2\2\u01bc\u01bd\3\2\2\2\u01bd\u01c1\3\2\2\2\u01be"+
		"\u01c0\7_\2\2\u01bf\u01be\3\2\2\2\u01c0\u01c3\3\2\2\2\u01c1\u01bf\3\2"+
		"\2\2\u01c1\u01c2\3\2\2\2\u01c2\u01c4\3\2\2\2\u01c3\u01c1\3\2\2\2\u01c4"+
		"\u01c8\7\u0088\2\2\u01c5\u01c7\7_\2\2\u01c6\u01c5\3\2\2\2\u01c7\u01ca"+
		"\3\2\2\2\u01c8\u01c6\3\2\2\2\u01c8\u01c9\3\2\2\2\u01c9\u01cb\3\2\2\2\u01ca"+
		"\u01c8\3\2\2\2\u01cb\u01cc\5B\"\2\u01cc\37\3\2\2\2\u01cd\u01d1\7\u0096"+
		"\2\2\u01ce\u01d0\7_\2\2\u01cf\u01ce\3\2\2\2\u01d0\u01d3\3\2\2\2\u01d1"+
		"\u01cf\3\2\2\2\u01d1\u01d2\3\2\2\2\u01d2\u01d4\3\2\2\2\u01d3\u01d1\3\2"+
		"\2\2\u01d4\u01d6\7J\2\2\u01d5\u01cd\3\2\2\2\u01d5\u01d6\3\2\2\2\u01d6"+
		"\u01da\3\2\2\2\u01d7\u01d9\7_\2\2\u01d8\u01d7\3\2\2\2\u01d9\u01dc\3\2"+
		"\2\2\u01da\u01d8\3\2\2\2\u01da\u01db\3\2\2\2\u01db\u01dd\3\2\2\2\u01dc"+
		"\u01da\3\2\2\2\u01dd\u01e1\7\u0088\2\2\u01de\u01e0\7_\2\2\u01df\u01de"+
		"\3\2\2\2\u01e0\u01e3\3\2\2\2\u01e1\u01df\3\2\2\2\u01e1\u01e2\3\2\2\2\u01e2"+
		"\u01e4\3\2\2\2\u01e3\u01e1\3\2\2\2\u01e4\u01e5\5D#\2\u01e5!\3\2\2\2\u01e6"+
		"\u01ea\7\u0096\2\2\u01e7\u01e9\7_\2\2\u01e8\u01e7\3\2\2\2\u01e9\u01ec"+
		"\3\2\2\2\u01ea\u01e8\3\2\2\2\u01ea\u01eb\3\2\2\2\u01eb\u01ed\3\2\2\2\u01ec"+
		"\u01ea\3\2\2\2\u01ed\u01ef\7K\2\2\u01ee\u01e6\3\2\2\2\u01ee\u01ef\3\2"+
		"\2\2\u01ef\u01f3\3\2\2\2\u01f0\u01f2\7_\2\2\u01f1\u01f0\3\2\2\2\u01f2"+
		"\u01f5\3\2\2\2\u01f3\u01f1\3\2\2\2\u01f3\u01f4\3\2\2\2\u01f4\u01f6\3\2"+
		"\2\2\u01f5\u01f3\3\2\2\2\u01f6\u01fa\7\u0088\2\2\u01f7\u01f9\7_\2\2\u01f8"+
		"\u01f7\3\2\2\2\u01f9\u01fc\3\2\2\2\u01fa\u01f8\3\2\2\2\u01fa\u01fb\3\2"+
		"\2\2\u01fb\u01fd\3\2\2\2\u01fc\u01fa\3\2\2\2\u01fd\u01fe\5Z.\2\u01fe#"+
		"\3\2\2\2\u01ff\u0203\7\u0096\2\2\u0200\u0202\7_\2\2\u0201\u0200\3\2\2"+
		"\2\u0202\u0205\3\2\2\2\u0203\u0201\3\2\2\2\u0203\u0204\3\2\2\2\u0204\u0206"+
		"\3\2\2\2\u0205\u0203\3\2\2\2\u0206\u020a\7L\2\2\u0207\u0209\7_\2\2\u0208"+
		"\u0207\3\2\2\2\u0209\u020c\3\2\2\2\u020a\u0208\3\2\2\2\u020a\u020b\3\2"+
		"\2\2\u020b\u020d\3\2\2\2\u020c\u020a\3\2\2\2\u020d\u0211\7\u0088\2\2\u020e"+
		"\u0210\7_\2\2\u020f\u020e\3\2\2\2\u0210\u0213\3\2\2\2\u0211\u020f\3\2"+
		"\2\2\u0211\u0212\3\2\2\2\u0212\u0214\3\2\2\2\u0213\u0211\3\2\2\2\u0214"+
		"\u0216\5F$\2\u0215\u0217\7L\2\2\u0216\u0215\3\2\2\2\u0216\u0217\3\2\2"+
		"\2\u0217\u0224\3\2\2\2\u0218\u021c\7\u0088\2\2\u0219\u021b\7_\2\2\u021a"+
		"\u0219\3\2\2\2\u021b\u021e\3\2\2\2\u021c\u021a\3\2\2\2\u021c\u021d\3\2"+
		"\2\2\u021d\u021f\3\2\2\2\u021e\u021c\3\2\2\2\u021f\u0221\5F$\2\u0220\u0222"+
		"\7L\2\2\u0221\u0220\3\2\2\2\u0221\u0222\3\2\2\2\u0222\u0224\3\2\2\2\u0223"+
		"\u01ff\3\2\2\2\u0223\u0218\3\2\2\2\u0224%\3\2\2\2\u0225\u0229\7\u0096"+
		"\2\2\u0226\u0228\7_\2\2\u0227\u0226\3\2\2\2\u0228\u022b\3\2\2\2\u0229"+
		"\u0227\3\2\2\2\u0229\u022a\3\2\2\2\u022a\u022c\3\2\2\2\u022b\u0229\3\2"+
		"\2\2\u022c\u0230\7M\2\2\u022d\u022f\7_\2\2\u022e\u022d\3\2\2\2\u022f\u0232"+
		"\3\2\2\2\u0230\u022e\3\2\2\2\u0230\u0231\3\2\2\2\u0231\u0233\3\2\2\2\u0232"+
		"\u0230\3\2\2\2\u0233\u0237\7\u0088\2\2\u0234\u0236\7_\2\2\u0235\u0234"+
		"\3\2\2\2\u0236\u0239\3\2\2\2\u0237\u0235\3\2\2\2\u0237\u0238\3\2\2\2\u0238"+
		"\u023a\3\2\2\2\u0239\u0237\3\2\2\2\u023a\u023c\5H%\2\u023b\u023d\7M\2"+
		"\2\u023c\u023b\3\2\2\2\u023c\u023d\3\2\2\2\u023d\u0249\3\2\2\2\u023e\u0242"+
		"\7\u0088\2\2\u023f\u0241\7_\2\2\u0240\u023f\3\2\2\2\u0241\u0244\3\2\2"+
		"\2\u0242\u0240\3\2\2\2\u0242\u0243\3\2\2\2\u0243\u0245\3\2\2\2\u0244\u0242"+
		"\3\2\2\2\u0245\u0246\5H%\2\u0246\u0247\7M\2\2\u0247\u0249\3\2\2\2\u0248"+
		"\u0225\3\2\2\2\u0248\u023e\3\2\2\2\u0249\'\3\2\2\2\u024a\u024e\7\u0096"+
		"\2\2\u024b\u024d\7_\2\2\u024c\u024b\3\2\2\2\u024d\u0250\3\2\2\2\u024e"+
		"\u024c\3\2\2\2\u024e\u024f\3\2\2\2\u024f\u0251\3\2\2\2\u0250\u024e\3\2"+
		"\2\2\u0251\u0255\7N\2\2\u0252\u0254\7_\2\2\u0253\u0252\3\2\2\2\u0254\u0257"+
		"\3\2\2\2\u0255\u0253\3\2\2\2\u0255\u0256\3\2\2\2\u0256\u0258\3\2\2\2\u0257"+
		"\u0255\3\2\2\2\u0258\u025c\7\u0088\2\2\u0259\u025b\7_\2\2\u025a\u0259"+
		"\3\2\2\2\u025b\u025e\3\2\2\2\u025c\u025a\3\2\2\2\u025c\u025d\3\2\2\2\u025d"+
		"\u025f\3\2\2\2\u025e\u025c\3\2\2\2\u025f\u0261\5J&\2\u0260\u0262\7N\2"+
		"\2\u0261\u0260\3\2\2\2\u0261\u0262\3\2\2\2\u0262\u026e\3\2\2\2\u0263\u0267"+
		"\7\u0088\2\2\u0264\u0266\7_\2\2\u0265\u0264\3\2\2\2\u0266\u0269\3\2\2"+
		"\2\u0267\u0265\3\2\2\2\u0267\u0268\3\2\2\2\u0268\u026a\3\2\2\2\u0269\u0267"+
		"\3\2\2\2\u026a\u026b\5J&\2\u026b\u026c\7N\2\2\u026c\u026e\3\2\2\2\u026d"+
		"\u024a\3\2\2\2\u026d\u0263\3\2\2\2\u026e)\3\2\2\2\u026f\u0273\7\u0096"+
		"\2\2\u0270\u0272\7_\2\2\u0271\u0270\3\2\2\2\u0272\u0275\3\2\2\2\u0273"+
		"\u0271\3\2\2\2\u0273\u0274\3\2\2\2\u0274\u0276\3\2\2\2\u0275\u0273\3\2"+
		"\2\2\u0276\u027a\7O\2\2\u0277\u0279\7_\2\2\u0278\u0277\3\2\2\2\u0279\u027c"+
		"\3\2\2\2\u027a\u0278\3\2\2\2\u027a\u027b\3\2\2\2\u027b\u027d\3\2\2\2\u027c"+
		"\u027a\3\2\2\2\u027d\u0281\7\u0088\2\2\u027e\u0280\7_\2\2\u027f\u027e"+
		"\3\2\2\2\u0280\u0283\3\2\2\2\u0281\u027f\3\2\2\2\u0281\u0282\3\2\2\2\u0282"+
		"\u0284\3\2\2\2\u0283\u0281\3\2\2\2\u0284\u0286\5L\'\2\u0285\u0287\7O\2"+
		"\2\u0286\u0285\3\2\2\2\u0286\u0287\3\2\2\2\u0287\u0293\3\2\2\2\u0288\u028c"+
		"\7\u0088\2\2\u0289\u028b\7_\2\2\u028a\u0289\3\2\2\2\u028b\u028e\3\2\2"+
		"\2\u028c\u028a\3\2\2\2\u028c\u028d\3\2\2\2\u028d\u028f\3\2\2\2\u028e\u028c"+
		"\3\2\2\2\u028f\u0290\5L\'\2\u0290\u0291\7O\2\2\u0291\u0293\3\2\2\2\u0292"+
		"\u026f\3\2\2\2\u0292\u0288\3\2\2\2\u0293+\3\2\2\2\u0294\u0298\7\u0096"+
		"\2\2\u0295\u0297\7_\2\2\u0296\u0295\3\2\2\2\u0297\u029a\3\2\2\2\u0298"+
		"\u0296\3\2\2\2\u0298\u0299\3\2\2\2\u0299\u029b\3\2\2\2\u029a\u0298\3\2"+
		"\2\2\u029b\u029f\7P\2\2\u029c\u029e\7_\2\2\u029d\u029c\3\2\2\2\u029e\u02a1"+
		"\3\2\2\2\u029f\u029d\3\2\2\2\u029f\u02a0\3\2\2\2\u02a0\u02a2\3\2\2\2\u02a1"+
		"\u029f\3\2\2\2\u02a2\u02a6\7\u0088\2\2\u02a3\u02a5\7_\2\2\u02a4\u02a3"+
		"\3\2\2\2\u02a5\u02a8\3\2\2\2\u02a6\u02a4\3\2\2\2\u02a6\u02a7\3\2\2\2\u02a7"+
		"\u02a9\3\2\2\2\u02a8\u02a6\3\2\2\2\u02a9\u02ab\5N(\2\u02aa\u02ac\7P\2"+
		"\2\u02ab\u02aa\3\2\2\2\u02ab\u02ac\3\2\2\2\u02ac\u02b8\3\2\2\2\u02ad\u02b1"+
		"\7\u0088\2\2\u02ae\u02b0\7_\2\2\u02af\u02ae\3\2\2\2\u02b0\u02b3\3\2\2"+
		"\2\u02b1\u02af\3\2\2\2\u02b1\u02b2\3\2\2\2\u02b2\u02b4\3\2\2\2\u02b3\u02b1"+
		"\3\2\2\2\u02b4\u02b5\5N(\2\u02b5\u02b6\7P\2\2\u02b6\u02b8\3\2\2\2\u02b7"+
		"\u0294\3\2\2\2\u02b7\u02ad\3\2\2\2\u02b8-\3\2\2\2\u02b9\u02bd\7\u0096"+
		"\2\2\u02ba\u02bc\7_\2\2\u02bb\u02ba\3\2\2\2\u02bc\u02bf\3\2\2\2\u02bd"+
		"\u02bb\3\2\2\2\u02bd\u02be\3\2\2\2\u02be\u02c0\3\2\2\2\u02bf\u02bd\3\2"+
		"\2\2\u02c0\u02c4\7Q\2\2\u02c1\u02c3\7_\2\2\u02c2\u02c1\3\2\2\2\u02c3\u02c6"+
		"\3\2\2\2\u02c4\u02c2\3\2\2\2\u02c4\u02c5\3\2\2\2\u02c5\u02c7\3\2\2\2\u02c6"+
		"\u02c4\3\2\2\2\u02c7\u02cb\7\u0088\2\2\u02c8\u02ca\7_\2\2\u02c9\u02c8"+
		"\3\2\2\2\u02ca\u02cd\3\2\2\2\u02cb\u02c9\3\2\2\2\u02cb\u02cc\3\2\2\2\u02cc"+
		"\u02ce\3\2\2\2\u02cd\u02cb\3\2\2\2\u02ce\u02d0\5P)\2\u02cf\u02d1\7Q\2"+
		"\2\u02d0\u02cf\3\2\2\2\u02d0\u02d1\3\2\2\2\u02d1\u02dd\3\2\2\2\u02d2\u02d6"+
		"\7\u0088\2\2\u02d3\u02d5\7_\2\2\u02d4\u02d3\3\2\2\2\u02d5\u02d8\3\2\2"+
		"\2\u02d6\u02d4\3\2\2\2\u02d6\u02d7\3\2\2\2\u02d7\u02d9\3\2\2\2\u02d8\u02d6"+
		"\3\2\2\2\u02d9\u02da\5P)\2\u02da\u02db\7Q\2\2\u02db\u02dd\3\2\2\2\u02dc"+
		"\u02b9\3\2\2\2\u02dc\u02d2\3\2\2\2\u02dd/\3\2\2\2\u02de\u02e2\7\u0096"+
		"\2\2\u02df\u02e1\7_\2\2\u02e0\u02df\3\2\2\2\u02e1\u02e4\3\2\2\2\u02e2"+
		"\u02e0\3\2\2\2\u02e2\u02e3\3\2\2\2\u02e3\u02e5\3\2\2\2\u02e4\u02e2\3\2"+
		"\2\2\u02e5\u02e9\7R\2\2\u02e6\u02e8\7_\2\2\u02e7\u02e6\3\2\2\2\u02e8\u02eb"+
		"\3\2\2\2\u02e9\u02e7\3\2\2\2\u02e9\u02ea\3\2\2\2\u02ea\u02ec\3\2\2\2\u02eb"+
		"\u02e9\3\2\2\2\u02ec\u02f0\7\u0088\2\2\u02ed\u02ef\7_\2\2\u02ee\u02ed"+
		"\3\2\2\2\u02ef\u02f2\3\2\2\2\u02f0\u02ee\3\2\2\2\u02f0\u02f1\3\2\2\2\u02f1"+
		"\u02f3\3\2\2\2\u02f2\u02f0\3\2\2\2\u02f3\u02f5\5R*\2\u02f4\u02f6\7R\2"+
		"\2\u02f5\u02f4\3\2\2\2\u02f5\u02f6\3\2\2\2\u02f6\u0302\3\2\2\2\u02f7\u02fb"+
		"\7\u0088\2\2\u02f8\u02fa\7_\2\2\u02f9\u02f8\3\2\2\2\u02fa\u02fd\3\2\2"+
		"\2\u02fb\u02f9\3\2\2\2\u02fb\u02fc\3\2\2\2\u02fc\u02fe\3\2\2\2\u02fd\u02fb"+
		"\3\2\2\2\u02fe\u02ff\5R*\2\u02ff\u0300\7R\2\2\u0300\u0302\3\2\2\2\u0301"+
		"\u02de\3\2\2\2\u0301\u02f7\3\2\2\2\u0302\61\3\2\2\2\u0303\u0307\7\u0096"+
		"\2\2\u0304\u0306\7_\2\2\u0305\u0304\3\2\2\2\u0306\u0309\3\2\2\2\u0307"+
		"\u0305\3\2\2\2\u0307\u0308\3\2\2\2\u0308\u030a\3\2\2\2\u0309\u0307\3\2"+
		"\2\2\u030a\u030e\7S\2\2\u030b\u030d\7_\2\2\u030c\u030b\3\2\2\2\u030d\u0310"+
		"\3\2\2\2\u030e\u030c\3\2\2\2\u030e\u030f\3\2\2\2\u030f\u0311\3\2\2\2\u0310"+
		"\u030e\3\2\2\2\u0311\u0315\7\u0088\2\2\u0312\u0314\7_\2\2\u0313\u0312"+
		"\3\2\2\2\u0314\u0317\3\2\2\2\u0315\u0313\3\2\2\2\u0315\u0316\3\2\2\2\u0316"+
		"\u0318\3\2\2\2\u0317\u0315\3\2\2\2\u0318\u031a\5T+\2\u0319\u031b\7S\2"+
		"\2\u031a\u0319\3\2\2\2\u031a\u031b\3\2\2\2\u031b\u0327\3\2\2\2\u031c\u0320"+
		"\7\u0088\2\2\u031d\u031f\7_\2\2\u031e\u031d\3\2\2\2\u031f\u0322\3\2\2"+
		"\2\u0320\u031e\3\2\2\2\u0320\u0321\3\2\2\2\u0321\u0323\3\2\2\2\u0322\u0320"+
		"\3\2\2\2\u0323\u0324\5T+\2\u0324\u0325\7S\2\2\u0325\u0327\3\2\2\2\u0326"+
		"\u0303\3\2\2\2\u0326\u031c\3\2\2\2\u0327\63\3\2\2\2\u0328\u032c\7\u0096"+
		"\2\2\u0329\u032b\7_\2\2\u032a\u0329\3\2\2\2\u032b\u032e\3\2\2\2\u032c"+
		"\u032a\3\2\2\2\u032c\u032d\3\2\2\2\u032d\u032f\3\2\2\2\u032e\u032c\3\2"+
		"\2\2\u032f\u0333\7T\2\2\u0330\u0332\7_\2\2\u0331\u0330\3\2\2\2\u0332\u0335"+
		"\3\2\2\2\u0333\u0331\3\2\2\2\u0333\u0334\3\2\2\2\u0334\u0336\3\2\2\2\u0335"+
		"\u0333\3\2\2\2\u0336\u033a\7\u0088\2\2\u0337\u0339\7_\2\2\u0338\u0337"+
		"\3\2\2\2\u0339\u033c\3\2\2\2\u033a\u0338\3\2\2\2\u033a\u033b\3\2\2\2\u033b"+
		"\u033d\3\2\2\2\u033c\u033a\3\2\2\2\u033d\u033f\5V,\2\u033e\u0340\7T\2"+
		"\2\u033f\u033e\3\2\2\2\u033f\u0340\3\2\2\2\u0340\u034d\3\2\2\2\u0341\u0345"+
		"\7\u0088\2\2\u0342\u0344\7_\2\2\u0343\u0342\3\2\2\2\u0344\u0347\3\2\2"+
		"\2\u0345\u0343\3\2\2\2\u0345\u0346\3\2\2\2\u0346\u0348\3\2\2\2\u0347\u0345"+
		"\3\2\2\2\u0348\u034a\5V,\2\u0349\u034b\7T\2\2\u034a\u0349\3\2\2\2\u034a"+
		"\u034b\3\2\2\2\u034b\u034d\3\2\2\2\u034c\u0328\3\2\2\2\u034c\u0341\3\2"+
		"\2\2\u034d\65\3\2\2\2\u034e\u0352\7\u0096\2\2\u034f\u0351\7_\2\2\u0350"+
		"\u034f\3\2\2\2\u0351\u0354\3\2\2\2\u0352\u0350\3\2\2\2\u0352\u0353\3\2"+
		"\2\2\u0353\u0355\3\2\2\2\u0354\u0352\3\2\2\2\u0355\u0359\7U\2\2\u0356"+
		"\u0358\7_\2\2\u0357\u0356\3\2\2\2\u0358\u035b\3\2\2\2\u0359\u0357\3\2"+
		"\2\2\u0359\u035a\3\2\2\2\u035a\u035c\3\2\2\2\u035b\u0359\3\2\2\2\u035c"+
		"\u0360\7\u0088\2\2\u035d\u035f\7_\2\2\u035e\u035d\3\2\2\2\u035f\u0362"+
		"\3\2\2\2\u0360\u035e\3\2\2\2\u0360\u0361\3\2\2\2\u0361\u0363\3\2\2\2\u0362"+
		"\u0360\3\2\2\2\u0363\u0365\5X-\2\u0364\u0366\7U\2\2\u0365\u0364\3\2\2"+
		"\2\u0365\u0366\3\2\2\2\u0366\u0372\3\2\2\2\u0367\u036b\7\u0088\2\2\u0368"+
		"\u036a\7_\2\2\u0369\u0368\3\2\2\2\u036a\u036d\3\2\2\2\u036b\u0369\3\2"+
		"\2\2\u036b\u036c\3\2\2\2\u036c\u036e\3\2\2\2\u036d\u036b\3\2\2\2\u036e"+
		"\u036f\5X-\2\u036f\u0370\7U\2\2\u0370\u0372\3\2\2\2\u0371\u034e\3\2\2"+
		"\2\u0371\u0367\3\2\2\2\u0372\67\3\2\2\2\u0373\u0377\7\16\2\2\u0374\u0376"+
		"\7_\2\2\u0375\u0374\3\2\2\2\u0376\u0379\3\2\2\2\u0377\u0375\3\2\2\2\u0377"+
		"\u0378\3\2\2\2\u0378\u037a\3\2\2\2\u0379\u0377\3\2\2\2\u037a\u037e\7\u0088"+
		"\2\2\u037b\u037d\7_\2\2\u037c\u037b\3\2\2\2\u037d\u0380\3\2\2\2\u037e"+
		"\u037c\3\2\2\2\u037e\u037f\3\2\2\2\u037f\u0381\3\2\2\2\u0380\u037e\3\2"+
		"\2\2\u0381\u0385\5\\/\2\u0382\u0384\7_\2\2\u0383\u0382\3\2\2\2\u0384\u0387"+
		"\3\2\2\2\u0385\u0383\3\2\2\2\u0385\u0386\3\2\2\2\u0386\u0388\3\2\2\2\u0387"+
		"\u0385\3\2\2\2\u0388\u0389\7\u0095\2\2\u03899\3\2\2\2\u038a\u038b\7\n"+
		"\2\2\u038b\u038c\5@!\2\u038c\u038d\7\u0095\2\2\u038d;\3\2\2\2\u038e\u038f"+
		"\7\17\2\2\u038f\u0390\5> \2\u0390\u0391\7\u0095\2\2\u0391=\3\2\2\2\u0392"+
		"\u0394\5@!\2\u0393\u0392\3\2\2\2\u0393\u0394\3\2\2\2\u0394\u0395\3\2\2"+
		"\2\u0395\u0397\7\u0097\2\2\u0396\u0393\3\2\2\2\u0396\u0397\3\2\2\2\u0397"+
		"\u03a8\3\2\2\2\u0398\u03a9\7u\2\2\u0399\u03a5\7\u009d\2\2\u039a\u039f"+
		"\5> \2\u039b\u039c\7\u0094\2\2\u039c\u039e\5> \2\u039d\u039b\3\2\2\2\u039e"+
		"\u03a1\3\2\2\2\u039f\u039d\3\2\2\2\u039f\u03a0\3\2\2\2\u03a0\u03a3\3\2"+
		"\2\2\u03a1\u039f\3\2\2\2\u03a2\u03a4\7\u0094\2\2\u03a3\u03a2\3\2\2\2\u03a3"+
		"\u03a4\3\2\2\2\u03a4\u03a6\3\2\2\2\u03a5\u039a\3\2\2\2\u03a5\u03a6\3\2"+
		"\2\2\u03a6\u03a7\3\2\2\2\u03a7\u03a9\7\u009e\2\2\u03a8\u0398\3\2\2\2\u03a8"+
		"\u0399\3\2\2\2\u03a9\u03b0\3\2\2\2\u03aa\u03ad\5@!\2\u03ab\u03ac\7\4\2"+
		"\2\u03ac\u03ae\5\\/\2\u03ad\u03ab\3\2\2\2\u03ad\u03ae\3\2\2\2\u03ae\u03b0"+
		"\3\2\2\2\u03af\u0396\3\2\2\2\u03af\u03aa\3\2\2\2\u03b0?\3\2\2\2\u03b1"+
		"\u03b3\7\u0097\2\2\u03b2\u03b1\3\2\2\2\u03b2\u03b3\3\2\2\2\u03b3\u03b4"+
		"\3\2\2\2\u03b4\u03b9\5\\/\2\u03b5\u03b6\7\u0097\2\2\u03b6\u03b8\5\\/\2"+
		"\u03b7\u03b5\3\2\2\2\u03b8\u03bb\3\2\2\2\u03b9\u03b7\3\2\2\2\u03b9\u03ba"+
		"\3\2\2\2\u03baA\3\2\2\2\u03bb\u03b9\3\2\2\2\u03bc\u03bd\t\3\2\2\u03bd"+
		"C\3\2\2\2\u03be\u03bf\7`\2\2\u03bf\u03c0\b#\1\2\u03c0E\3\2\2\2\u03c1\u03c2"+
		"\7k\2\2\u03c2\u03c3\b$\1\2\u03c3G\3\2\2\2\u03c4\u03c5\7k\2\2\u03c5\u03c6"+
		"\b%\1\2\u03c6I\3\2\2\2\u03c7\u03c9\7t\2\2\u03c8\u03c7\3\2\2\2\u03c8\u03c9"+
		"\3\2\2\2\u03c9\u03ca\3\2\2\2\u03ca\u03d2\t\4\2\2\u03cb\u03cc\7o\2\2\u03cc"+
		"\u03d2\t\5\2\2\u03cd\u03ce\7p\2\2\u03ce\u03d2\t\6\2\2\u03cf\u03d0\7q\2"+
		"\2\u03d0\u03d2\t\7\2\2\u03d1\u03c8\3\2\2\2\u03d1\u03cb\3\2\2\2\u03d1\u03cd"+
		"\3\2\2\2\u03d1\u03cf\3\2\2\2\u03d2\u03d3\3\2\2\2\u03d3\u03d4\b&\1\2\u03d4"+
		"K\3\2\2\2\u03d5\u03d7\7t\2\2\u03d6\u03d5\3\2\2\2\u03d6\u03d7\3\2\2\2\u03d7"+
		"\u03d8\3\2\2\2\u03d8\u03e0\t\4\2\2\u03d9\u03da\7o\2\2\u03da\u03e0\t\5"+
		"\2\2\u03db\u03dc\7p\2\2\u03dc\u03e0\t\6\2\2\u03dd\u03de\7q\2\2\u03de\u03e0"+
		"\t\7\2\2\u03df\u03d6\3\2\2\2\u03df\u03d9\3\2\2\2\u03df\u03db\3\2\2\2\u03df"+
		"\u03dd\3\2\2\2\u03e0\u03e1\3\2\2\2\u03e1\u03e2\b\'\1\2\u03e2M\3\2\2\2"+
		"\u03e3\u03e5\7t\2\2\u03e4\u03e3\3\2\2\2\u03e4\u03e5\3\2\2\2\u03e5\u03e6"+
		"\3\2\2\2\u03e6\u03ee\t\4\2\2\u03e7\u03e8\7o\2\2\u03e8\u03ee\t\5\2\2\u03e9"+
		"\u03ea\7p\2\2\u03ea\u03ee\t\6\2\2\u03eb\u03ec\7q\2\2\u03ec\u03ee\t\7\2"+
		"\2\u03ed\u03e4\3\2\2\2\u03ed\u03e7\3\2\2\2\u03ed\u03e9\3\2\2\2\u03ed\u03eb"+
		"\3\2\2\2\u03ee\u03ef\3\2\2\2\u03ef\u03f0\b(\1\2\u03f0O\3\2\2\2\u03f1\u03f3"+
		"\7t\2\2\u03f2\u03f1\3\2\2\2\u03f2\u03f3\3\2\2\2\u03f3\u03f4\3\2\2\2\u03f4"+
		"\u03fc\t\4\2\2\u03f5\u03f6\7o\2\2\u03f6\u03fc\t\5\2\2\u03f7\u03f8\7p\2"+
		"\2\u03f8\u03fc\t\6\2\2\u03f9\u03fa\7q\2\2\u03fa\u03fc\t\7\2\2\u03fb\u03f2"+
		"\3\2\2\2\u03fb\u03f5\3\2\2\2\u03fb\u03f7\3\2\2\2\u03fb\u03f9\3\2\2\2\u03fc"+
		"\u03fd\3\2\2\2\u03fd\u03fe\b)\1\2\u03feQ\3\2\2\2\u03ff\u0401\7t\2\2\u0400"+
		"\u03ff\3\2\2\2\u0400\u0401\3\2\2\2\u0401\u0402\3\2\2\2\u0402\u040a\t\4"+
		"\2\2\u0403\u0404\7o\2\2\u0404\u040a\t\5\2\2\u0405\u0406\7p\2\2\u0406\u040a"+
		"\t\6\2\2\u0407\u0408\7q\2\2\u0408\u040a\t\7\2\2\u0409\u0400\3\2\2\2\u0409"+
		"\u0403\3\2\2\2\u0409\u0405\3\2\2\2\u0409\u0407\3\2\2\2\u040a\u040b\3\2"+
		"\2\2\u040b\u040c\b*\1\2\u040cS\3\2\2\2\u040d\u040f\7t\2\2\u040e\u040d"+
		"\3\2\2\2\u040e\u040f\3\2\2\2\u040f\u0410\3\2\2\2\u0410\u0418\t\4\2\2\u0411"+
		"\u0412\7o\2\2\u0412\u0418\t\5\2\2\u0413\u0414\7p\2\2\u0414\u0418\t\6\2"+
		"\2\u0415\u0416\7q\2\2\u0416\u0418\t\7\2\2\u0417\u040e\3\2\2\2\u0417\u0411"+
		"\3\2\2\2\u0417\u0413\3\2\2\2\u0417\u0415\3\2\2\2\u0418\u0419\3\2\2\2\u0419"+
		"\u041a\b+\1\2\u041aU\3\2\2\2\u041b\u041d\7t\2\2\u041c\u041b\3\2\2\2\u041c"+
		"\u041d\3\2\2\2\u041d\u041e\3\2\2\2\u041e\u0426\t\4\2\2\u041f\u0420\7o"+
		"\2\2\u0420\u0426\t\5\2\2\u0421\u0422\7p\2\2\u0422\u0426\t\6\2\2\u0423"+
		"\u0424\7q\2\2\u0424\u0426\t\7\2\2\u0425\u041c\3\2\2\2\u0425\u041f\3\2"+
		"\2\2\u0425\u0421\3\2\2\2\u0425\u0423\3\2\2\2\u0426\u0427\3\2\2\2\u0427"+
		"\u0428\b,\1\2\u0428W\3\2\2\2\u0429\u042b\7t\2\2\u042a\u0429\3\2\2\2\u042a"+
		"\u042b\3\2\2\2\u042b\u042c\3\2\2\2\u042c\u0434\t\4\2\2\u042d\u042e\7o"+
		"\2\2\u042e\u0434\t\5\2\2\u042f\u0430\7p\2\2\u0430\u0434\t\6\2\2\u0431"+
		"\u0432\7q\2\2\u0432\u0434\t\7\2\2\u0433\u042a\3\2\2\2\u0433\u042d\3\2"+
		"\2\2\u0433\u042f\3\2\2\2\u0433\u0431\3\2\2\2\u0434\u0435\3\2\2\2\u0435"+
		"\u0436\b-\1\2\u0436Y\3\2\2\2\u0437\u0438\7a\2\2\u0438\u043c\b.\1\2\u0439"+
		"\u043a\7b\2\2\u043a\u043c\b.\1\2\u043b\u0437\3\2\2\2\u043b\u0439\3\2\2"+
		"\2\u043c[\3\2\2\2\u043d\u0441\7V\2\2\u043e\u043f\7r\2\2\u043f\u0441\7"+
		"V\2\2\u0440\u043d\3\2\2\2\u0440\u043e\3\2\2\2\u0441]\3\2\2\2\u0442\u0443"+
		"\t\b\2\2\u0443_\3\2\2\2\u0096dhmsy\177\u0085\u0093\u0099\u00a2\u00a9\u00b0"+
		"\u00b7\u00bf\u00c6\u00cb\u00d2\u00dd\u00e4\u00eb\u00f2\u00fa\u0101\u0106"+
		"\u010d\u0118\u011f\u0128\u012f\u0136\u013e\u0145\u014b\u0152\u0157\u015c"+
		"\u0165\u016c\u0173\u017a\u017f\u0184\u01b2\u01b8\u01bc\u01c1\u01c8\u01d1"+
		"\u01d5\u01da\u01e1\u01ea\u01ee\u01f3\u01fa\u0203\u020a\u0211\u0216\u021c"+
		"\u0221\u0223\u0229\u0230\u0237\u023c\u0242\u0248\u024e\u0255\u025c\u0261"+
		"\u0267\u026d\u0273\u027a\u0281\u0286\u028c\u0292\u0298\u029f\u02a6\u02ab"+
		"\u02b1\u02b7\u02bd\u02c4\u02cb\u02d0\u02d6\u02dc\u02e2\u02e9\u02f0\u02f5"+
		"\u02fb\u0301\u0307\u030e\u0315\u031a\u0320\u0326\u032c\u0333\u033a\u033f"+
		"\u0345\u034a\u034c\u0352\u0359\u0360\u0365\u036b\u0371\u0377\u037e\u0385"+
		"\u0393\u0396\u039f\u03a3\u03a5\u03a8\u03ad\u03af\u03b2\u03b9\u03c8\u03d1"+
		"\u03d6\u03df\u03e4\u03ed\u03f2\u03fb\u0400\u0409\u040e\u0417\u041c\u0425"+
		"\u042a\u0433\u043b\u0440";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}