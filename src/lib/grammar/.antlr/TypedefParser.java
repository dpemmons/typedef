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
		std::string global_version;
		std::vector<std::string> global_module;

	public TypedefParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class CompilationUnitContext extends ParserRuleContext {
		public TypedefVersionDeclarationContext typedefVersionDeclaration;
		public ModuleDeclarationContext moduleDeclaration;
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
			((CompilationUnitContext)_localctx).typedefVersionDeclaration = typedefVersionDeclaration();
			global_version = ((CompilationUnitContext)_localctx).typedefVersionDeclaration->version; 
			setState(99);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(96);
					match(WS);
					}
					} 
				}
				setState(101);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			}
			setState(105);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==KW_MODULE) {
				{
				setState(102);
				((CompilationUnitContext)_localctx).moduleDeclaration = moduleDeclaration();
				 global_module = ((CompilationUnitContext)_localctx).moduleDeclaration->module; 
				}
			}

			setState(116);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(110);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==WS) {
						{
						{
						setState(107);
						match(WS);
						}
						}
						setState(112);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(113);
					useDeclaration();
					}
					} 
				}
				setState(118);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			}
			setState(128);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(122);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==WS) {
						{
						{
						setState(119);
						match(WS);
						}
						}
						setState(124);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(125);
					item();
					}
					} 
				}
				setState(130);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			}
			setState(134);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(131);
				match(WS);
				}
				}
				setState(136);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(137);
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
			setState(148);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(139);
				((ItemContext)_localctx).maybeValuedSymbolDeclaration = maybeValuedSymbolDeclaration();

						InsertField(global_symbol_table, this, ((ItemContext)_localctx).maybeValuedSymbolDeclaration);

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(142);
				((ItemContext)_localctx).structDeclaration = structDeclaration();

						InsertField(global_symbol_table, this, ((ItemContext)_localctx).structDeclaration);

				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(145);
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
			setState(150);
			maybeValuedSymbol();
			setState(154);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(151);
				match(WS);
				}
				}
				setState(156);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(157);
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
			setState(159);
			((VariantDeclarationContext)_localctx).identifier = identifier();
			setState(163);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(160);
				match(WS);
				}
				}
				setState(165);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(166);
			match(COLON);
			setState(170);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(167);
				match(WS);
				}
				}
				setState(172);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(173);
			match(KW_VARIANT);
			setState(177);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(174);
				match(WS);
				}
				}
				setState(179);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(180);
			match(LBRACE);
			setState(204);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 84)) & ~0x3f) == 0 && ((1L << (_la - 84)) & ((1L << (NON_KEYWORD_IDENTIFIER - 84)) | (1L << (WS - 84)) | (1L << (RAW_ESCAPE - 84)))) != 0)) {
				{
				{
				setState(184);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(181);
					match(WS);
					}
					}
					setState(186);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(187);
				((VariantDeclarationContext)_localctx).unvaluedSymbol = unvaluedSymbol();

								TryInsertSymbol(_localctx.v, this, ((VariantDeclarationContext)_localctx).unvaluedSymbol);
							
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
				setState(199);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(196);
						match(WS);
						}
						} 
					}
					setState(201);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
				}
				}
				}
				setState(206);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(207);
			match(RBRACE);
			setState(211);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(208);
				match(WS);
				}
				}
				setState(213);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(214);
			match(SEMI);
			}

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
			setState(218);
			((StructDeclarationContext)_localctx).identifier = identifier();
			setState(222);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(219);
				match(WS);
				}
				}
				setState(224);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(225);
			match(COLON);
			setState(229);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(226);
				match(WS);
				}
				}
				setState(231);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(232);
			match(KW_STRUCT);
			setState(236);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(233);
				match(WS);
				}
				}
				setState(238);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(239);
			match(LBRACE);
			setState(263);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 84)) & ~0x3f) == 0 && ((1L << (_la - 84)) & ((1L << (NON_KEYWORD_IDENTIFIER - 84)) | (1L << (WS - 84)) | (1L << (RAW_ESCAPE - 84)))) != 0)) {
				{
				{
				setState(243);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(240);
					match(WS);
					}
					}
					setState(245);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(246);
				((StructDeclarationContext)_localctx).maybeValuedSymbol = maybeValuedSymbol();

								TryInsertSymbol(_localctx.s, this, ((StructDeclarationContext)_localctx).maybeValuedSymbol);
							
				setState(251);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(248);
					match(WS);
					}
					}
					setState(253);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(254);
				match(SEMI);
				setState(258);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(255);
						match(WS);
						}
						} 
					}
					setState(260);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
				}
				}
				}
				setState(265);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(266);
			match(RBRACE);
			setState(270);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(267);
				match(WS);
				}
				}
				setState(272);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(273);
			match(SEMI);
			}

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
			setState(277);
			((MaybeValuedSymbolContext)_localctx).identifier = identifier();
			setState(281);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,25,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(278);
					match(WS);
					}
					} 
				}
				setState(283);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,25,_ctx);
			}
			setState(284);
			((MaybeValuedSymbolContext)_localctx).maybeValuedType = maybeValuedType();
			setState(288);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,26,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(285);
					match(WS);
					}
					} 
				}
				setState(290);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,26,_ctx);
			}

					if (((MaybeValuedSymbolContext)_localctx).maybeValuedType->maybe_val) {
						((MaybeValuedSymbolContext)_localctx).maybe_symbol =  std::make_pair(((MaybeValuedSymbolContext)_localctx).identifier->id, *((MaybeValuedSymbolContext)_localctx).maybeValuedType->maybe_val);
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

	public static class UnvaluedSymbolContext extends ParserRuleContext {
		public std::optional<td::SymbolTable::Symbol> maybe_symbol;
		public IdentifierContext identifier;
		public UnvaluedTypeContext unvaluedType;
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
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
			setState(293);
			((UnvaluedSymbolContext)_localctx).identifier = identifier();
			setState(297);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(294);
				match(WS);
				}
				}
				setState(299);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(300);
			match(COLON);
			setState(304);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(301);
				match(WS);
				}
				}
				setState(306);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(307);
			((UnvaluedSymbolContext)_localctx).unvaluedType = unvaluedType();
			setState(311);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,29,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(308);
					match(WS);
					}
					} 
				}
				setState(313);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,29,_ctx);
			}

					if (((UnvaluedSymbolContext)_localctx).unvaluedType->maybe_val) {
						((UnvaluedSymbolContext)_localctx).maybe_symbol =  std::make_pair(((UnvaluedSymbolContext)_localctx).identifier->id, *((UnvaluedSymbolContext)_localctx).unvaluedType->maybe_val);
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

	public static class MaybeValuedTypeContext extends ParserRuleContext {
		public std::optional<td::SymbolTable::Value> maybe_val;
		public ValuedTypeContext valuedType;
		public UnvaluedTypeContext unvaluedType;
		public ValuedTypeContext valuedType() {
			return getRuleContext(ValuedTypeContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public UnvaluedTypeContext unvaluedType() {
			return getRuleContext(UnvaluedTypeContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public MaybeValuedTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_maybeValuedType; }
	}

	public final MaybeValuedTypeContext maybeValuedType() throws RecognitionException {
		MaybeValuedTypeContext _localctx = new MaybeValuedTypeContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_maybeValuedType);
		int _la;
		try {
			setState(330);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,31,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(316);
				((MaybeValuedTypeContext)_localctx).valuedType = valuedType();
				((MaybeValuedTypeContext)_localctx).maybe_val =  ((MaybeValuedTypeContext)_localctx).valuedType->maybe_val;
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
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
				((MaybeValuedTypeContext)_localctx).unvaluedType = unvaluedType();
				}
				((MaybeValuedTypeContext)_localctx).maybe_val =  ((MaybeValuedTypeContext)_localctx).unvaluedType->maybe_val;
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
		public std::optional<td::SymbolTable::Value> maybe_val;
		public ValuedPrimitiveTypeContext valuedPrimitiveType;
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
			setState(332);
			((ValuedTypeContext)_localctx).valuedPrimitiveType = valuedPrimitiveType();
			((ValuedTypeContext)_localctx).maybe_val =  ((ValuedTypeContext)_localctx).valuedPrimitiveType->maybe_val;
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
		public std::optional<td::SymbolTable::Value> maybe_val;
		public PrimitiveTypeContext primitiveType;
		public VectorTypeContext vectorType;
		public MapTypeContext mapType;
		public IdentifierContext identifier;
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
		public UnvaluedTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unvaluedType; }
	}

	public final UnvaluedTypeContext unvaluedType() throws RecognitionException {
		UnvaluedTypeContext _localctx = new UnvaluedTypeContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_unvaluedType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(347);
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
				setState(335);
				((UnvaluedTypeContext)_localctx).primitiveType = primitiveType();
				((UnvaluedTypeContext)_localctx).maybe_val =  ((UnvaluedTypeContext)_localctx).primitiveType->maybe_val;
				}
				break;
			case KW_VECTOR:
				{
				setState(338);
				((UnvaluedTypeContext)_localctx).vectorType = vectorType();
				((UnvaluedTypeContext)_localctx).maybe_val =  ((UnvaluedTypeContext)_localctx).vectorType->maybe_val;
				}
				break;
			case KW_MAP:
				{
				setState(341);
				((UnvaluedTypeContext)_localctx).mapType = mapType();
				((UnvaluedTypeContext)_localctx).maybe_val =  ((UnvaluedTypeContext)_localctx).mapType->maybe_val;
				}
				break;
			case NON_KEYWORD_IDENTIFIER:
			case RAW_ESCAPE:
				{
				setState(344);
				((UnvaluedTypeContext)_localctx).identifier = identifier();
				((UnvaluedTypeContext)_localctx).maybe_val = 
						CheckIdentifierExists(this, global_symbol_table, ((UnvaluedTypeContext)_localctx).identifier);
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
		public std::optional<td::SymbolTable::Value> maybe_val;
		public UnvaluedTypeContext unvaluedType;
		public TerminalNode KW_VECTOR() { return getToken(TypedefParser.KW_VECTOR, 0); }
		public TerminalNode LT() { return getToken(TypedefParser.LT, 0); }
		public UnvaluedTypeContext unvaluedType() {
			return getRuleContext(UnvaluedTypeContext.class,0);
		}
		public TerminalNode GT() { return getToken(TypedefParser.GT, 0); }
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
			setState(349);
			match(KW_VECTOR);
			setState(353);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(350);
				match(WS);
				}
				}
				setState(355);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(356);
			match(LT);
			setState(360);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(357);
				match(WS);
				}
				}
				setState(362);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(363);
			((VectorTypeContext)_localctx).unvaluedType = unvaluedType();
			setState(367);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(364);
				match(WS);
				}
				}
				setState(369);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(370);
			match(GT);

					if (((VectorTypeContext)_localctx).unvaluedType->maybe_val) {
						((VectorTypeContext)_localctx).maybe_val =  std::make_shared<td::Vector>(*((VectorTypeContext)_localctx).unvaluedType->maybe_val);
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

	public static class MapTypeContext extends ParserRuleContext {
		public std::optional<td::SymbolTable::Value> maybe_val;
		public PrimitiveTypeContext primitiveType;
		public UnvaluedTypeContext unvaluedType;
		public TerminalNode KW_MAP() { return getToken(TypedefParser.KW_MAP, 0); }
		public TerminalNode LT() { return getToken(TypedefParser.LT, 0); }
		public PrimitiveTypeContext primitiveType() {
			return getRuleContext(PrimitiveTypeContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(TypedefParser.COMMA, 0); }
		public UnvaluedTypeContext unvaluedType() {
			return getRuleContext(UnvaluedTypeContext.class,0);
		}
		public TerminalNode GT() { return getToken(TypedefParser.GT, 0); }
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
			setState(373);
			match(KW_MAP);
			setState(377);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(374);
				match(WS);
				}
				}
				setState(379);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(380);
			match(LT);
			setState(384);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(381);
				match(WS);
				}
				}
				setState(386);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(387);
			((MapTypeContext)_localctx).primitiveType = primitiveType();
			setState(391);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(388);
				match(WS);
				}
				}
				setState(393);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(394);
			match(COMMA);
			setState(398);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(395);
				match(WS);
				}
				}
				setState(400);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(401);
			((MapTypeContext)_localctx).unvaluedType = unvaluedType();
			setState(405);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(402);
				match(WS);
				}
				}
				setState(407);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(408);
			match(GT);

					if (((MapTypeContext)_localctx).primitiveType->maybe_val && ((MapTypeContext)_localctx).unvaluedType->maybe_val) {
						((MapTypeContext)_localctx).maybe_val =  std::make_shared<td::Map>(*((MapTypeContext)_localctx).primitiveType->maybe_val, *((MapTypeContext)_localctx).unvaluedType->maybe_val);
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

	public static class PrimitiveTypeContext extends ParserRuleContext {
		public std::optional<td::SymbolTable::Value> maybe_val;
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
		try {
			setState(437);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case KW_BOOL:
				enterOuterAlt(_localctx, 1);
				{
				setState(411);
				match(KW_BOOL);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<bool>(); 
				}
				break;
			case KW_CHAR:
				enterOuterAlt(_localctx, 2);
				{
				setState(413);
				match(KW_CHAR);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<char32_t>(); 
				}
				break;
			case KW_STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(415);
				match(KW_STRING);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<std::string>(); 
				}
				break;
			case KW_F32:
				enterOuterAlt(_localctx, 4);
				{
				setState(417);
				match(KW_F32);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<float>(); 
				}
				break;
			case KW_F64:
				enterOuterAlt(_localctx, 5);
				{
				setState(419);
				match(KW_F64);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<double>(); 
				}
				break;
			case KW_U8:
				enterOuterAlt(_localctx, 6);
				{
				setState(421);
				match(KW_U8);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<uint8_t>(); 
				}
				break;
			case KW_U16:
				enterOuterAlt(_localctx, 7);
				{
				setState(423);
				match(KW_U16);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<uint16_t>(); 
				}
				break;
			case KW_U32:
				enterOuterAlt(_localctx, 8);
				{
				setState(425);
				match(KW_U32);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<uint32_t>(); 
				}
				break;
			case KW_U64:
				enterOuterAlt(_localctx, 9);
				{
				setState(427);
				match(KW_U64);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<uint64_t>(); 
				}
				break;
			case KW_I8:
				enterOuterAlt(_localctx, 10);
				{
				setState(429);
				match(KW_I8);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<int8_t>(); 
				}
				break;
			case KW_I16:
				enterOuterAlt(_localctx, 11);
				{
				setState(431);
				match(KW_I16);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<int16_t>(); 
				}
				break;
			case KW_I32:
				enterOuterAlt(_localctx, 12);
				{
				setState(433);
				match(KW_I32);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<int32_t>(); 
				}
				break;
			case KW_I64:
				enterOuterAlt(_localctx, 13);
				{
				setState(435);
				match(KW_I64);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<int64_t>(); 
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
			setState(478);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,42,_ctx) ) {
			case 1:
				{
				setState(439);
				((ValuedPrimitiveTypeContext)_localctx).valuedBoolFragment = valuedBoolFragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedBoolFragment->literal->maybe_val;
				}
				break;
			case 2:
				{
				setState(442);
				((ValuedPrimitiveTypeContext)_localctx).valuedCharFragment = valuedCharFragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedCharFragment->literal->maybe_val;
				}
				break;
			case 3:
				{
				setState(445);
				((ValuedPrimitiveTypeContext)_localctx).valuedStringFragment = valuedStringFragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedStringFragment->literal->maybe_val;
				}
				break;
			case 4:
				{
				setState(448);
				((ValuedPrimitiveTypeContext)_localctx).valuedF32Fragment = valuedF32Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedF32Fragment->literal->maybe_val;
				}
				break;
			case 5:
				{
				setState(451);
				((ValuedPrimitiveTypeContext)_localctx).valuedF64Fragment = valuedF64Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedF64Fragment->literal->maybe_val;
				}
				break;
			case 6:
				{
				setState(454);
				((ValuedPrimitiveTypeContext)_localctx).valuedU8Fragment = valuedU8Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU8Fragment->literal->maybe_val;
				}
				break;
			case 7:
				{
				setState(457);
				((ValuedPrimitiveTypeContext)_localctx).valuedU16Fragment = valuedU16Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU16Fragment->literal->maybe_val;
				}
				break;
			case 8:
				{
				setState(460);
				((ValuedPrimitiveTypeContext)_localctx).valuedU32Fragment = valuedU32Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU32Fragment->literal->maybe_val;
				}
				break;
			case 9:
				{
				setState(463);
				((ValuedPrimitiveTypeContext)_localctx).valuedU64Fragment = valuedU64Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU64Fragment->literal->maybe_val;
				}
				break;
			case 10:
				{
				setState(466);
				((ValuedPrimitiveTypeContext)_localctx).valuedI8Fragment = valuedI8Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedI8Fragment->literal->maybe_val;
				}
				break;
			case 11:
				{
				setState(469);
				((ValuedPrimitiveTypeContext)_localctx).valuedI16Fragment = valuedI16Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedI16Fragment->literal->maybe_val;
				}
				break;
			case 12:
				{
				setState(472);
				((ValuedPrimitiveTypeContext)_localctx).valuedI32Fragment = valuedI32Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedI32Fragment->literal->maybe_val;
				}
				break;
			case 13:
				{
				setState(475);
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
			setState(488);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(480);
				match(COLON);
				setState(484);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(481);
					match(WS);
					}
					}
					setState(486);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(487);
				match(KW_BOOL);
				}
			}

			setState(493);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(490);
				match(WS);
				}
				}
				setState(495);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(496);
			match(EQ);
			setState(500);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(497);
				match(WS);
				}
				}
				setState(502);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(503);
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
			setState(513);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(505);
				match(COLON);
				setState(509);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(506);
					match(WS);
					}
					}
					setState(511);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(512);
				match(KW_CHAR);
				}
			}

			setState(518);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(515);
				match(WS);
				}
				}
				setState(520);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(521);
			match(EQ);
			setState(525);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(522);
				match(WS);
				}
				}
				setState(527);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(528);
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
			setState(538);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
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
				match(KW_STRING);
				}
			}

			setState(543);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(540);
				match(WS);
				}
				}
				setState(545);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(546);
			match(EQ);
			setState(550);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(547);
				match(WS);
				}
				}
				setState(552);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(553);
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
			setState(591);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(555);
				match(COLON);
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
				match(KW_F32);
				setState(566);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(563);
					match(WS);
					}
					}
					setState(568);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(569);
				match(EQ);
				setState(573);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(570);
					match(WS);
					}
					}
					setState(575);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(576);
				((ValuedF32FragmentContext)_localctx).literal = f32Literal();
				setState(578);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F32) {
					{
					setState(577);
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
				setState(580);
				match(EQ);
				setState(584);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(581);
					match(WS);
					}
					}
					setState(586);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(587);
				((ValuedF32FragmentContext)_localctx).literal = f32Literal();
				setState(589);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F32) {
					{
					setState(588);
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
			setState(628);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(593);
				match(COLON);
				setState(597);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(594);
					match(WS);
					}
					}
					setState(599);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(600);
				match(KW_F64);
				setState(604);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(601);
					match(WS);
					}
					}
					setState(606);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(607);
				match(EQ);
				setState(611);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(608);
					match(WS);
					}
					}
					setState(613);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(614);
				((ValuedF64FragmentContext)_localctx).literal = f64Literal();
				setState(616);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F64) {
					{
					setState(615);
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
				((ValuedF64FragmentContext)_localctx).literal = f64Literal();
				setState(626);
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
			setState(665);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(630);
				match(COLON);
				setState(634);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(631);
					match(WS);
					}
					}
					setState(636);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(637);
				match(KW_U8);
				setState(641);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(638);
					match(WS);
					}
					}
					setState(643);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(644);
				match(EQ);
				setState(648);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(645);
					match(WS);
					}
					}
					setState(650);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(651);
				((ValuedU8FragmentContext)_localctx).literal = u8Literal();
				setState(653);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U8) {
					{
					setState(652);
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
				((ValuedU8FragmentContext)_localctx).literal = u8Literal();
				setState(663);
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
			setState(702);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(667);
				match(COLON);
				setState(671);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(668);
					match(WS);
					}
					}
					setState(673);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(674);
				match(KW_U16);
				setState(678);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(675);
					match(WS);
					}
					}
					setState(680);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(681);
				match(EQ);
				setState(685);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(682);
					match(WS);
					}
					}
					setState(687);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(688);
				((ValuedU16FragmentContext)_localctx).literal = u16Literal();
				setState(690);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U16) {
					{
					setState(689);
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
				setState(692);
				match(EQ);
				setState(696);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(693);
					match(WS);
					}
					}
					setState(698);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(699);
				((ValuedU16FragmentContext)_localctx).literal = u16Literal();
				setState(700);
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
			setState(739);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(704);
				match(COLON);
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
				match(KW_U32);
				setState(715);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(712);
					match(WS);
					}
					}
					setState(717);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(718);
				match(EQ);
				setState(722);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(719);
					match(WS);
					}
					}
					setState(724);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(725);
				((ValuedU32FragmentContext)_localctx).literal = u32Literal();
				setState(727);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U32) {
					{
					setState(726);
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
				setState(729);
				match(EQ);
				setState(733);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(730);
					match(WS);
					}
					}
					setState(735);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(736);
				((ValuedU32FragmentContext)_localctx).literal = u32Literal();
				setState(737);
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
			setState(776);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(741);
				match(COLON);
				setState(745);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(742);
					match(WS);
					}
					}
					setState(747);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(748);
				match(KW_U64);
				setState(752);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(749);
					match(WS);
					}
					}
					setState(754);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(755);
				match(EQ);
				setState(759);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(756);
					match(WS);
					}
					}
					setState(761);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(762);
				((ValuedU64FragmentContext)_localctx).literal = u64Literal();
				setState(764);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U64) {
					{
					setState(763);
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
				setState(766);
				match(EQ);
				setState(770);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(767);
					match(WS);
					}
					}
					setState(772);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(773);
				((ValuedU64FragmentContext)_localctx).literal = u64Literal();
				setState(774);
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
			setState(813);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(778);
				match(COLON);
				setState(782);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(779);
					match(WS);
					}
					}
					setState(784);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(785);
				match(KW_I8);
				setState(789);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(786);
					match(WS);
					}
					}
					setState(791);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(792);
				match(EQ);
				setState(796);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(793);
					match(WS);
					}
					}
					setState(798);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(799);
				((ValuedI8FragmentContext)_localctx).literal = i8Literal();
				setState(801);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I8) {
					{
					setState(800);
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
				setState(803);
				match(EQ);
				setState(807);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(804);
					match(WS);
					}
					}
					setState(809);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(810);
				((ValuedI8FragmentContext)_localctx).literal = i8Literal();
				setState(811);
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
			setState(850);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(815);
				match(COLON);
				setState(819);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(816);
					match(WS);
					}
					}
					setState(821);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(822);
				match(KW_I16);
				setState(826);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(823);
					match(WS);
					}
					}
					setState(828);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(829);
				match(EQ);
				setState(833);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(830);
					match(WS);
					}
					}
					setState(835);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(836);
				((ValuedI16FragmentContext)_localctx).literal = i16Literal();
				setState(838);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I16) {
					{
					setState(837);
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
				setState(840);
				match(EQ);
				setState(844);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(841);
					match(WS);
					}
					}
					setState(846);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(847);
				((ValuedI16FragmentContext)_localctx).literal = i16Literal();
				setState(848);
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
			setState(888);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(852);
				match(COLON);
				setState(856);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(853);
					match(WS);
					}
					}
					setState(858);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(859);
				match(KW_I32);
				setState(863);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(860);
					match(WS);
					}
					}
					setState(865);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(866);
				match(EQ);
				setState(870);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(867);
					match(WS);
					}
					}
					setState(872);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(873);
				((ValuedI32FragmentContext)_localctx).literal = i32Literal();
				setState(875);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I32) {
					{
					setState(874);
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
				setState(877);
				match(EQ);
				setState(881);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(878);
					match(WS);
					}
					}
					setState(883);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(884);
				((ValuedI32FragmentContext)_localctx).literal = i32Literal();
				setState(886);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I32) {
					{
					setState(885);
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
			setState(925);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(890);
				match(COLON);
				setState(894);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(891);
					match(WS);
					}
					}
					setState(896);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(897);
				match(KW_I64);
				setState(901);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(898);
					match(WS);
					}
					}
					setState(903);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(904);
				match(EQ);
				setState(908);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(905);
					match(WS);
					}
					}
					setState(910);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(911);
				((ValuedI64FragmentContext)_localctx).literal = i64Literal();
				setState(913);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I64) {
					{
					setState(912);
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
				setState(915);
				match(EQ);
				setState(919);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(916);
					match(WS);
					}
					}
					setState(921);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(922);
				((ValuedI64FragmentContext)_localctx).literal = i64Literal();
				setState(923);
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
		public std::string version;
		public IdentifierContext identifier;
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
			setState(927);
			match(KW_TYPEDEF);
			setState(931);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(928);
				match(WS);
				}
				}
				setState(933);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(934);
			match(EQ);
			setState(938);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(935);
				match(WS);
				}
				}
				setState(940);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(941);
			((TypedefVersionDeclarationContext)_localctx).identifier = identifier();
			setState(945);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(942);
				match(WS);
				}
				}
				setState(947);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(948);
			match(SEMI);
			 ((TypedefVersionDeclarationContext)_localctx).version =  ((TypedefVersionDeclarationContext)_localctx).identifier->id; 
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
		public std::vector<std::string> module;
		public SimplePathContext simplePath;
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
			setState(951);
			match(KW_MODULE);
			setState(952);
			((ModuleDeclarationContext)_localctx).simplePath = simplePath();
			setState(953);
			match(SEMI);
			 ((ModuleDeclarationContext)_localctx).module =  ((ModuleDeclarationContext)_localctx).simplePath->path; 
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
			setState(956);
			match(KW_USE);
			setState(957);
			useTree();
			setState(958);
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
			setState(989);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,127,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(964);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE || _la==PATHSEP) {
					{
					setState(961);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,120,_ctx) ) {
					case 1:
						{
						setState(960);
						simplePath();
						}
						break;
					}
					setState(963);
					match(PATHSEP);
					}
				}

				setState(982);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case STAR:
					{
					setState(966);
					match(STAR);
					}
					break;
				case LBRACE:
					{
					setState(967);
					match(LBRACE);
					setState(979);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (((((_la - 84)) & ~0x3f) == 0 && ((1L << (_la - 84)) & ((1L << (NON_KEYWORD_IDENTIFIER - 84)) | (1L << (RAW_ESCAPE - 84)) | (1L << (STAR - 84)))) != 0) || _la==PATHSEP || _la==LBRACE) {
						{
						setState(968);
						useTree();
						setState(973);
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,122,_ctx);
						while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
							if ( _alt==1 ) {
								{
								{
								setState(969);
								match(COMMA);
								setState(970);
								useTree();
								}
								} 
							}
							setState(975);
							_errHandler.sync(this);
							_alt = getInterpreter().adaptivePredict(_input,122,_ctx);
						}
						setState(977);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(976);
							match(COMMA);
							}
						}

						}
					}

					setState(981);
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
				setState(984);
				simplePath();
				setState(987);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_AS) {
					{
					setState(985);
					match(KW_AS);
					setState(986);
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
		public std::vector<std::string> path;
		public IdentifierContext identifier;
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
			setState(992);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PATHSEP) {
				{
				setState(991);
				match(PATHSEP);
				}
			}

			setState(994);
			((SimplePathContext)_localctx).identifier = identifier();
			_localctx.path.push_back(((SimplePathContext)_localctx).identifier->id);
			setState(1002);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,129,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(996);
					match(PATHSEP);
					setState(997);
					((SimplePathContext)_localctx).identifier = identifier();
					_localctx.path.push_back(((SimplePathContext)_localctx).identifier->id);
					}
					} 
				}
				setState(1004);
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
			setState(1005);
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
			setState(1007);
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
			setState(1010);
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
			setState(1013);
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
			setState(1026);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1017);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1016);
					match(MINUS);
					}
				}

				setState(1019);
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
				setState(1020);
				match(HEX_PREFIX);
				setState(1021);
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
				setState(1022);
				match(OCT_PREFIX);
				setState(1023);
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
				setState(1024);
				match(BIN_PREFIX);
				setState(1025);
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
			setState(1040);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1031);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1030);
					match(MINUS);
					}
				}

				setState(1033);
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
				setState(1034);
				match(HEX_PREFIX);
				setState(1035);
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
				setState(1036);
				match(OCT_PREFIX);
				setState(1037);
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
				setState(1038);
				match(BIN_PREFIX);
				setState(1039);
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
			setState(1054);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1045);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1044);
					match(MINUS);
					}
				}

				setState(1047);
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
				setState(1048);
				match(HEX_PREFIX);
				setState(1049);
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
				setState(1050);
				match(OCT_PREFIX);
				setState(1051);
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
				setState(1052);
				match(BIN_PREFIX);
				setState(1053);
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
			setState(1068);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1059);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1058);
					match(MINUS);
					}
				}

				setState(1061);
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
				setState(1062);
				match(HEX_PREFIX);
				setState(1063);
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
				setState(1064);
				match(OCT_PREFIX);
				setState(1065);
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
				setState(1066);
				match(BIN_PREFIX);
				setState(1067);
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
			setState(1082);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1073);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1072);
					match(MINUS);
					}
				}

				setState(1075);
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
				setState(1076);
				match(HEX_PREFIX);
				setState(1077);
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
				setState(1078);
				match(OCT_PREFIX);
				setState(1079);
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
				setState(1080);
				match(BIN_PREFIX);
				setState(1081);
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
			setState(1096);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1087);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1086);
					match(MINUS);
					}
				}

				setState(1089);
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
				setState(1090);
				match(HEX_PREFIX);
				setState(1091);
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
				setState(1092);
				match(OCT_PREFIX);
				setState(1093);
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
				setState(1094);
				match(BIN_PREFIX);
				setState(1095);
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
			setState(1110);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1101);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1100);
					match(MINUS);
					}
				}

				setState(1103);
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
				setState(1104);
				match(HEX_PREFIX);
				setState(1105);
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
				setState(1106);
				match(OCT_PREFIX);
				setState(1107);
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
				setState(1108);
				match(BIN_PREFIX);
				setState(1109);
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
			setState(1124);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1115);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1114);
					match(MINUS);
					}
				}

				setState(1117);
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
				setState(1118);
				match(HEX_PREFIX);
				setState(1119);
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
				setState(1120);
				match(OCT_PREFIX);
				setState(1121);
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
				setState(1122);
				match(BIN_PREFIX);
				setState(1123);
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
			setState(1132);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STRING_LITERAL:
				enterOuterAlt(_localctx, 1);
				{
				setState(1128);
				((StringLiteralContext)_localctx).STRING_LITERAL = match(STRING_LITERAL);

						((StringLiteralContext)_localctx).maybe_val =  GetStringValue(this, ((StringLiteralContext)_localctx).STRING_LITERAL);
					
				}
				break;
			case RAW_STRING_LITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(1130);
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
			setState(1137);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NON_KEYWORD_IDENTIFIER:
				enterOuterAlt(_localctx, 1);
				{
				setState(1134);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(1135);
				match(RAW_ESCAPE);
				setState(1136);
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
			setState(1139);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00a2\u0478\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\3\2\3\2\3\2\7\2d\n\2\f\2\16\2g\13\2\3"+
		"\2\3\2\3\2\5\2l\n\2\3\2\7\2o\n\2\f\2\16\2r\13\2\3\2\7\2u\n\2\f\2\16\2"+
		"x\13\2\3\2\7\2{\n\2\f\2\16\2~\13\2\3\2\7\2\u0081\n\2\f\2\16\2\u0084\13"+
		"\2\3\2\7\2\u0087\n\2\f\2\16\2\u008a\13\2\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3"+
		"\3\3\3\3\3\3\3\5\3\u0097\n\3\3\4\3\4\7\4\u009b\n\4\f\4\16\4\u009e\13\4"+
		"\3\4\3\4\3\5\3\5\7\5\u00a4\n\5\f\5\16\5\u00a7\13\5\3\5\3\5\7\5\u00ab\n"+
		"\5\f\5\16\5\u00ae\13\5\3\5\3\5\7\5\u00b2\n\5\f\5\16\5\u00b5\13\5\3\5\3"+
		"\5\7\5\u00b9\n\5\f\5\16\5\u00bc\13\5\3\5\3\5\3\5\7\5\u00c1\n\5\f\5\16"+
		"\5\u00c4\13\5\3\5\3\5\7\5\u00c8\n\5\f\5\16\5\u00cb\13\5\7\5\u00cd\n\5"+
		"\f\5\16\5\u00d0\13\5\3\5\3\5\7\5\u00d4\n\5\f\5\16\5\u00d7\13\5\3\5\3\5"+
		"\3\5\3\5\3\6\3\6\7\6\u00df\n\6\f\6\16\6\u00e2\13\6\3\6\3\6\7\6\u00e6\n"+
		"\6\f\6\16\6\u00e9\13\6\3\6\3\6\7\6\u00ed\n\6\f\6\16\6\u00f0\13\6\3\6\3"+
		"\6\7\6\u00f4\n\6\f\6\16\6\u00f7\13\6\3\6\3\6\3\6\7\6\u00fc\n\6\f\6\16"+
		"\6\u00ff\13\6\3\6\3\6\7\6\u0103\n\6\f\6\16\6\u0106\13\6\7\6\u0108\n\6"+
		"\f\6\16\6\u010b\13\6\3\6\3\6\7\6\u010f\n\6\f\6\16\6\u0112\13\6\3\6\3\6"+
		"\3\6\3\6\3\7\3\7\7\7\u011a\n\7\f\7\16\7\u011d\13\7\3\7\3\7\7\7\u0121\n"+
		"\7\f\7\16\7\u0124\13\7\3\7\3\7\3\b\3\b\7\b\u012a\n\b\f\b\16\b\u012d\13"+
		"\b\3\b\3\b\7\b\u0131\n\b\f\b\16\b\u0134\13\b\3\b\3\b\7\b\u0138\n\b\f\b"+
		"\16\b\u013b\13\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\7\t\u0144\n\t\f\t\16\t\u0147"+
		"\13\t\3\t\3\t\3\t\3\t\5\t\u014d\n\t\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3"+
		"\13\3\13\3\13\3\13\3\13\3\13\3\13\3\13\5\13\u015e\n\13\3\f\3\f\7\f\u0162"+
		"\n\f\f\f\16\f\u0165\13\f\3\f\3\f\7\f\u0169\n\f\f\f\16\f\u016c\13\f\3\f"+
		"\3\f\7\f\u0170\n\f\f\f\16\f\u0173\13\f\3\f\3\f\3\f\3\r\3\r\7\r\u017a\n"+
		"\r\f\r\16\r\u017d\13\r\3\r\3\r\7\r\u0181\n\r\f\r\16\r\u0184\13\r\3\r\3"+
		"\r\7\r\u0188\n\r\f\r\16\r\u018b\13\r\3\r\3\r\7\r\u018f\n\r\f\r\16\r\u0192"+
		"\13\r\3\r\3\r\7\r\u0196\n\r\f\r\16\r\u0199\13\r\3\r\3\r\3\r\3\16\3\16"+
		"\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16"+
		"\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\5\16\u01b8\n\16\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\5\17\u01e1\n\17\3\20"+
		"\3\20\7\20\u01e5\n\20\f\20\16\20\u01e8\13\20\3\20\5\20\u01eb\n\20\3\20"+
		"\7\20\u01ee\n\20\f\20\16\20\u01f1\13\20\3\20\3\20\7\20\u01f5\n\20\f\20"+
		"\16\20\u01f8\13\20\3\20\3\20\3\21\3\21\7\21\u01fe\n\21\f\21\16\21\u0201"+
		"\13\21\3\21\5\21\u0204\n\21\3\21\7\21\u0207\n\21\f\21\16\21\u020a\13\21"+
		"\3\21\3\21\7\21\u020e\n\21\f\21\16\21\u0211\13\21\3\21\3\21\3\22\3\22"+
		"\7\22\u0217\n\22\f\22\16\22\u021a\13\22\3\22\5\22\u021d\n\22\3\22\7\22"+
		"\u0220\n\22\f\22\16\22\u0223\13\22\3\22\3\22\7\22\u0227\n\22\f\22\16\22"+
		"\u022a\13\22\3\22\3\22\3\23\3\23\7\23\u0230\n\23\f\23\16\23\u0233\13\23"+
		"\3\23\3\23\7\23\u0237\n\23\f\23\16\23\u023a\13\23\3\23\3\23\7\23\u023e"+
		"\n\23\f\23\16\23\u0241\13\23\3\23\3\23\5\23\u0245\n\23\3\23\3\23\7\23"+
		"\u0249\n\23\f\23\16\23\u024c\13\23\3\23\3\23\5\23\u0250\n\23\5\23\u0252"+
		"\n\23\3\24\3\24\7\24\u0256\n\24\f\24\16\24\u0259\13\24\3\24\3\24\7\24"+
		"\u025d\n\24\f\24\16\24\u0260\13\24\3\24\3\24\7\24\u0264\n\24\f\24\16\24"+
		"\u0267\13\24\3\24\3\24\5\24\u026b\n\24\3\24\3\24\7\24\u026f\n\24\f\24"+
		"\16\24\u0272\13\24\3\24\3\24\3\24\5\24\u0277\n\24\3\25\3\25\7\25\u027b"+
		"\n\25\f\25\16\25\u027e\13\25\3\25\3\25\7\25\u0282\n\25\f\25\16\25\u0285"+
		"\13\25\3\25\3\25\7\25\u0289\n\25\f\25\16\25\u028c\13\25\3\25\3\25\5\25"+
		"\u0290\n\25\3\25\3\25\7\25\u0294\n\25\f\25\16\25\u0297\13\25\3\25\3\25"+
		"\3\25\5\25\u029c\n\25\3\26\3\26\7\26\u02a0\n\26\f\26\16\26\u02a3\13\26"+
		"\3\26\3\26\7\26\u02a7\n\26\f\26\16\26\u02aa\13\26\3\26\3\26\7\26\u02ae"+
		"\n\26\f\26\16\26\u02b1\13\26\3\26\3\26\5\26\u02b5\n\26\3\26\3\26\7\26"+
		"\u02b9\n\26\f\26\16\26\u02bc\13\26\3\26\3\26\3\26\5\26\u02c1\n\26\3\27"+
		"\3\27\7\27\u02c5\n\27\f\27\16\27\u02c8\13\27\3\27\3\27\7\27\u02cc\n\27"+
		"\f\27\16\27\u02cf\13\27\3\27\3\27\7\27\u02d3\n\27\f\27\16\27\u02d6\13"+
		"\27\3\27\3\27\5\27\u02da\n\27\3\27\3\27\7\27\u02de\n\27\f\27\16\27\u02e1"+
		"\13\27\3\27\3\27\3\27\5\27\u02e6\n\27\3\30\3\30\7\30\u02ea\n\30\f\30\16"+
		"\30\u02ed\13\30\3\30\3\30\7\30\u02f1\n\30\f\30\16\30\u02f4\13\30\3\30"+
		"\3\30\7\30\u02f8\n\30\f\30\16\30\u02fb\13\30\3\30\3\30\5\30\u02ff\n\30"+
		"\3\30\3\30\7\30\u0303\n\30\f\30\16\30\u0306\13\30\3\30\3\30\3\30\5\30"+
		"\u030b\n\30\3\31\3\31\7\31\u030f\n\31\f\31\16\31\u0312\13\31\3\31\3\31"+
		"\7\31\u0316\n\31\f\31\16\31\u0319\13\31\3\31\3\31\7\31\u031d\n\31\f\31"+
		"\16\31\u0320\13\31\3\31\3\31\5\31\u0324\n\31\3\31\3\31\7\31\u0328\n\31"+
		"\f\31\16\31\u032b\13\31\3\31\3\31\3\31\5\31\u0330\n\31\3\32\3\32\7\32"+
		"\u0334\n\32\f\32\16\32\u0337\13\32\3\32\3\32\7\32\u033b\n\32\f\32\16\32"+
		"\u033e\13\32\3\32\3\32\7\32\u0342\n\32\f\32\16\32\u0345\13\32\3\32\3\32"+
		"\5\32\u0349\n\32\3\32\3\32\7\32\u034d\n\32\f\32\16\32\u0350\13\32\3\32"+
		"\3\32\3\32\5\32\u0355\n\32\3\33\3\33\7\33\u0359\n\33\f\33\16\33\u035c"+
		"\13\33\3\33\3\33\7\33\u0360\n\33\f\33\16\33\u0363\13\33\3\33\3\33\7\33"+
		"\u0367\n\33\f\33\16\33\u036a\13\33\3\33\3\33\5\33\u036e\n\33\3\33\3\33"+
		"\7\33\u0372\n\33\f\33\16\33\u0375\13\33\3\33\3\33\5\33\u0379\n\33\5\33"+
		"\u037b\n\33\3\34\3\34\7\34\u037f\n\34\f\34\16\34\u0382\13\34\3\34\3\34"+
		"\7\34\u0386\n\34\f\34\16\34\u0389\13\34\3\34\3\34\7\34\u038d\n\34\f\34"+
		"\16\34\u0390\13\34\3\34\3\34\5\34\u0394\n\34\3\34\3\34\7\34\u0398\n\34"+
		"\f\34\16\34\u039b\13\34\3\34\3\34\3\34\5\34\u03a0\n\34\3\35\3\35\7\35"+
		"\u03a4\n\35\f\35\16\35\u03a7\13\35\3\35\3\35\7\35\u03ab\n\35\f\35\16\35"+
		"\u03ae\13\35\3\35\3\35\7\35\u03b2\n\35\f\35\16\35\u03b5\13\35\3\35\3\35"+
		"\3\35\3\36\3\36\3\36\3\36\3\36\3\37\3\37\3\37\3\37\3 \5 \u03c4\n \3 \5"+
		" \u03c7\n \3 \3 \3 \3 \3 \7 \u03ce\n \f \16 \u03d1\13 \3 \5 \u03d4\n "+
		"\5 \u03d6\n \3 \5 \u03d9\n \3 \3 \3 \5 \u03de\n \5 \u03e0\n \3!\5!\u03e3"+
		"\n!\3!\3!\3!\3!\3!\3!\7!\u03eb\n!\f!\16!\u03ee\13!\3\"\3\"\3#\3#\3#\3"+
		"$\3$\3$\3%\3%\3%\3&\5&\u03fc\n&\3&\3&\3&\3&\3&\3&\3&\5&\u0405\n&\3&\3"+
		"&\3\'\5\'\u040a\n\'\3\'\3\'\3\'\3\'\3\'\3\'\3\'\5\'\u0413\n\'\3\'\3\'"+
		"\3(\5(\u0418\n(\3(\3(\3(\3(\3(\3(\3(\5(\u0421\n(\3(\3(\3)\5)\u0426\n)"+
		"\3)\3)\3)\3)\3)\3)\3)\5)\u042f\n)\3)\3)\3*\5*\u0434\n*\3*\3*\3*\3*\3*"+
		"\3*\3*\5*\u043d\n*\3*\3*\3+\5+\u0442\n+\3+\3+\3+\3+\3+\3+\3+\5+\u044b"+
		"\n+\3+\3+\3,\5,\u0450\n,\3,\3,\3,\3,\3,\3,\3,\5,\u0459\n,\3,\3,\3-\5-"+
		"\u045e\n-\3-\3-\3-\3-\3-\3-\3-\5-\u0467\n-\3-\3-\3.\3.\3.\3.\5.\u046f"+
		"\n.\3/\3/\3/\5/\u0474\n/\3\60\3\60\3\60\2\2\61\2\4\6\b\n\f\16\20\22\24"+
		"\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPRTVXZ\\^\2\b\4\2\6\6"+
		"\f\f\3\2cd\3\2ef\3\2gh\3\2ij\4\2\4\b\nH\2\u0505\2`\3\2\2\2\4\u0096\3\2"+
		"\2\2\6\u0098\3\2\2\2\b\u00a1\3\2\2\2\n\u00dc\3\2\2\2\f\u0117\3\2\2\2\16"+
		"\u0127\3\2\2\2\20\u014c\3\2\2\2\22\u014e\3\2\2\2\24\u015d\3\2\2\2\26\u015f"+
		"\3\2\2\2\30\u0177\3\2\2\2\32\u01b7\3\2\2\2\34\u01e0\3\2\2\2\36\u01ea\3"+
		"\2\2\2 \u0203\3\2\2\2\"\u021c\3\2\2\2$\u0251\3\2\2\2&\u0276\3\2\2\2(\u029b"+
		"\3\2\2\2*\u02c0\3\2\2\2,\u02e5\3\2\2\2.\u030a\3\2\2\2\60\u032f\3\2\2\2"+
		"\62\u0354\3\2\2\2\64\u037a\3\2\2\2\66\u039f\3\2\2\28\u03a1\3\2\2\2:\u03b9"+
		"\3\2\2\2<\u03be\3\2\2\2>\u03df\3\2\2\2@\u03e2\3\2\2\2B\u03ef\3\2\2\2D"+
		"\u03f1\3\2\2\2F\u03f4\3\2\2\2H\u03f7\3\2\2\2J\u0404\3\2\2\2L\u0412\3\2"+
		"\2\2N\u0420\3\2\2\2P\u042e\3\2\2\2R\u043c\3\2\2\2T\u044a\3\2\2\2V\u0458"+
		"\3\2\2\2X\u0466\3\2\2\2Z\u046e\3\2\2\2\\\u0473\3\2\2\2^\u0475\3\2\2\2"+
		"`a\58\35\2ae\b\2\1\2bd\7_\2\2cb\3\2\2\2dg\3\2\2\2ec\3\2\2\2ef\3\2\2\2"+
		"fk\3\2\2\2ge\3\2\2\2hi\5:\36\2ij\b\2\1\2jl\3\2\2\2kh\3\2\2\2kl\3\2\2\2"+
		"lv\3\2\2\2mo\7_\2\2nm\3\2\2\2or\3\2\2\2pn\3\2\2\2pq\3\2\2\2qs\3\2\2\2"+
		"rp\3\2\2\2su\5<\37\2tp\3\2\2\2ux\3\2\2\2vt\3\2\2\2vw\3\2\2\2w\u0082\3"+
		"\2\2\2xv\3\2\2\2y{\7_\2\2zy\3\2\2\2{~\3\2\2\2|z\3\2\2\2|}\3\2\2\2}\177"+
		"\3\2\2\2~|\3\2\2\2\177\u0081\5\4\3\2\u0080|\3\2\2\2\u0081\u0084\3\2\2"+
		"\2\u0082\u0080\3\2\2\2\u0082\u0083\3\2\2\2\u0083\u0088\3\2\2\2\u0084\u0082"+
		"\3\2\2\2\u0085\u0087\7_\2\2\u0086\u0085\3\2\2\2\u0087\u008a\3\2\2\2\u0088"+
		"\u0086\3\2\2\2\u0088\u0089\3\2\2\2\u0089\u008b\3\2\2\2\u008a\u0088\3\2"+
		"\2\2\u008b\u008c\7\2\2\3\u008c\3\3\2\2\2\u008d\u008e\5\6\4\2\u008e\u008f"+
		"\b\3\1\2\u008f\u0097\3\2\2\2\u0090\u0091\5\n\6\2\u0091\u0092\b\3\1\2\u0092"+
		"\u0097\3\2\2\2\u0093\u0094\5\b\5\2\u0094\u0095\b\3\1\2\u0095\u0097\3\2"+
		"\2\2\u0096\u008d\3\2\2\2\u0096\u0090\3\2\2\2\u0096\u0093\3\2\2\2\u0097"+
		"\5\3\2\2\2\u0098\u009c\5\f\7\2\u0099\u009b\7_\2\2\u009a\u0099\3\2\2\2"+
		"\u009b\u009e\3\2\2\2\u009c\u009a\3\2\2\2\u009c\u009d\3\2\2\2\u009d\u009f"+
		"\3\2\2\2\u009e\u009c\3\2\2\2\u009f\u00a0\7\u0095\2\2\u00a0\7\3\2\2\2\u00a1"+
		"\u00a5\5\\/\2\u00a2\u00a4\7_\2\2\u00a3\u00a2\3\2\2\2\u00a4\u00a7\3\2\2"+
		"\2\u00a5\u00a3\3\2\2\2\u00a5\u00a6\3\2\2\2\u00a6\u00a8\3\2\2\2\u00a7\u00a5"+
		"\3\2\2\2\u00a8\u00ac\7\u0096\2\2\u00a9\u00ab\7_\2\2\u00aa\u00a9\3\2\2"+
		"\2\u00ab\u00ae\3\2\2\2\u00ac\u00aa\3\2\2\2\u00ac\u00ad\3\2\2\2\u00ad\u00af"+
		"\3\2\2\2\u00ae\u00ac\3\2\2\2\u00af\u00b3\7\20\2\2\u00b0\u00b2\7_\2\2\u00b1"+
		"\u00b0\3\2\2\2\u00b2\u00b5\3\2\2\2\u00b3\u00b1\3\2\2\2\u00b3\u00b4\3\2"+
		"\2\2\u00b4\u00b6\3\2\2\2\u00b5\u00b3\3\2\2\2\u00b6\u00ce\7\u009d\2\2\u00b7"+
		"\u00b9\7_\2\2\u00b8\u00b7\3\2\2\2\u00b9\u00bc\3\2\2\2\u00ba\u00b8\3\2"+
		"\2\2\u00ba\u00bb\3\2\2\2\u00bb\u00bd\3\2\2\2\u00bc\u00ba\3\2\2\2\u00bd"+
		"\u00be\5\16\b\2\u00be\u00c2\b\5\1\2\u00bf\u00c1\7_\2\2\u00c0\u00bf\3\2"+
		"\2\2\u00c1\u00c4\3\2\2\2\u00c2\u00c0\3\2\2\2\u00c2\u00c3\3\2\2\2\u00c3"+
		"\u00c5\3\2\2\2\u00c4\u00c2\3\2\2\2\u00c5\u00c9\7\u0095\2\2\u00c6\u00c8"+
		"\7_\2\2\u00c7\u00c6\3\2\2\2\u00c8\u00cb\3\2\2\2\u00c9\u00c7\3\2\2\2\u00c9"+
		"\u00ca\3\2\2\2\u00ca\u00cd\3\2\2\2\u00cb\u00c9\3\2\2\2\u00cc\u00ba\3\2"+
		"\2\2\u00cd\u00d0\3\2\2\2\u00ce\u00cc\3\2\2\2\u00ce\u00cf\3\2\2\2\u00cf"+
		"\u00d1\3\2\2\2\u00d0\u00ce\3\2\2\2\u00d1\u00d5\7\u009e\2\2\u00d2\u00d4"+
		"\7_\2\2\u00d3\u00d2\3\2\2\2\u00d4\u00d7\3\2\2\2\u00d5\u00d3\3\2\2\2\u00d5"+
		"\u00d6\3\2\2\2\u00d6\u00d8\3\2\2\2\u00d7\u00d5\3\2\2\2\u00d8\u00d9\7\u0095"+
		"\2\2\u00d9\u00da\3\2\2\2\u00da\u00db\b\5\1\2\u00db\t\3\2\2\2\u00dc\u00e0"+
		"\5\\/\2\u00dd\u00df\7_\2\2\u00de\u00dd\3\2\2\2\u00df\u00e2\3\2\2\2\u00e0"+
		"\u00de\3\2\2\2\u00e0\u00e1\3\2\2\2\u00e1\u00e3\3\2\2\2\u00e2\u00e0\3\2"+
		"\2\2\u00e3\u00e7\7\u0096\2\2\u00e4\u00e6\7_\2\2\u00e5\u00e4\3\2\2\2\u00e6"+
		"\u00e9\3\2\2\2\u00e7\u00e5\3\2\2\2\u00e7\u00e8\3\2\2\2\u00e8\u00ea\3\2"+
		"\2\2\u00e9\u00e7\3\2\2\2\u00ea\u00ee\7\13\2\2\u00eb\u00ed\7_\2\2\u00ec"+
		"\u00eb\3\2\2\2\u00ed\u00f0\3\2\2\2\u00ee\u00ec\3\2\2\2\u00ee\u00ef\3\2"+
		"\2\2\u00ef\u00f1\3\2\2\2\u00f0\u00ee\3\2\2\2\u00f1\u0109\7\u009d\2\2\u00f2"+
		"\u00f4\7_\2\2\u00f3\u00f2\3\2\2\2\u00f4\u00f7\3\2\2\2\u00f5\u00f3\3\2"+
		"\2\2\u00f5\u00f6\3\2\2\2\u00f6\u00f8\3\2\2\2\u00f7\u00f5\3\2\2\2\u00f8"+
		"\u00f9\5\f\7\2\u00f9\u00fd\b\6\1\2\u00fa\u00fc\7_\2\2\u00fb\u00fa\3\2"+
		"\2\2\u00fc\u00ff\3\2\2\2\u00fd\u00fb\3\2\2\2\u00fd\u00fe\3\2\2\2\u00fe"+
		"\u0100\3\2\2\2\u00ff\u00fd\3\2\2\2\u0100\u0104\7\u0095\2\2\u0101\u0103"+
		"\7_\2\2\u0102\u0101\3\2\2\2\u0103\u0106\3\2\2\2\u0104\u0102\3\2\2\2\u0104"+
		"\u0105\3\2\2\2\u0105\u0108\3\2\2\2\u0106\u0104\3\2\2\2\u0107\u00f5\3\2"+
		"\2\2\u0108\u010b\3\2\2\2\u0109\u0107\3\2\2\2\u0109\u010a\3\2\2\2\u010a"+
		"\u010c\3\2\2\2\u010b\u0109\3\2\2\2\u010c\u0110\7\u009e\2\2\u010d\u010f"+
		"\7_\2\2\u010e\u010d\3\2\2\2\u010f\u0112\3\2\2\2\u0110\u010e\3\2\2\2\u0110"+
		"\u0111\3\2\2\2\u0111\u0113\3\2\2\2\u0112\u0110\3\2\2\2\u0113\u0114\7\u0095"+
		"\2\2\u0114\u0115\3\2\2\2\u0115\u0116\b\6\1\2\u0116\13\3\2\2\2\u0117\u011b"+
		"\5\\/\2\u0118\u011a\7_\2\2\u0119\u0118\3\2\2\2\u011a\u011d\3\2\2\2\u011b"+
		"\u0119\3\2\2\2\u011b\u011c\3\2\2\2\u011c\u011e\3\2\2\2\u011d\u011b\3\2"+
		"\2\2\u011e\u0122\5\20\t\2\u011f\u0121\7_\2\2\u0120\u011f\3\2\2\2\u0121"+
		"\u0124\3\2\2\2\u0122\u0120\3\2\2\2\u0122\u0123\3\2\2\2\u0123\u0125\3\2"+
		"\2\2\u0124\u0122\3\2\2\2\u0125\u0126\b\7\1\2\u0126\r\3\2\2\2\u0127\u012b"+
		"\5\\/\2\u0128\u012a\7_\2\2\u0129\u0128\3\2\2\2\u012a\u012d\3\2\2\2\u012b"+
		"\u0129\3\2\2\2\u012b\u012c\3\2\2\2\u012c\u012e\3\2\2\2\u012d\u012b\3\2"+
		"\2\2\u012e\u0132\7\u0096\2\2\u012f\u0131\7_\2\2\u0130\u012f\3\2\2\2\u0131"+
		"\u0134\3\2\2\2\u0132\u0130\3\2\2\2\u0132\u0133\3\2\2\2\u0133\u0135\3\2"+
		"\2\2\u0134\u0132\3\2\2\2\u0135\u0139\5\24\13\2\u0136\u0138\7_\2\2\u0137"+
		"\u0136\3\2\2\2\u0138\u013b\3\2\2\2\u0139\u0137\3\2\2\2\u0139\u013a\3\2"+
		"\2\2\u013a\u013c\3\2\2\2\u013b\u0139\3\2\2\2\u013c\u013d\b\b\1\2\u013d"+
		"\17\3\2\2\2\u013e\u013f\5\22\n\2\u013f\u0140\b\t\1\2\u0140\u014d\3\2\2"+
		"\2\u0141\u0145\7\u0096\2\2\u0142\u0144\7_\2\2\u0143\u0142\3\2\2\2\u0144"+
		"\u0147\3\2\2\2\u0145\u0143\3\2\2\2\u0145\u0146\3\2\2\2\u0146\u0148\3\2"+
		"\2\2\u0147\u0145\3\2\2\2\u0148\u0149\5\24\13\2\u0149\u014a\3\2\2\2\u014a"+
		"\u014b\b\t\1\2\u014b\u014d\3\2\2\2\u014c\u013e\3\2\2\2\u014c\u0141\3\2"+
		"\2\2\u014d\21\3\2\2\2\u014e\u014f\5\34\17\2\u014f\u0150\b\n\1\2\u0150"+
		"\23\3\2\2\2\u0151\u0152\5\32\16\2\u0152\u0153\b\13\1\2\u0153\u015e\3\2"+
		"\2\2\u0154\u0155\5\26\f\2\u0155\u0156\b\13\1\2\u0156\u015e\3\2\2\2\u0157"+
		"\u0158\5\30\r\2\u0158\u0159\b\13\1\2\u0159\u015e\3\2\2\2\u015a\u015b\5"+
		"\\/\2\u015b\u015c\b\13\1\2\u015c\u015e\3\2\2\2\u015d\u0151\3\2\2\2\u015d"+
		"\u0154\3\2\2\2\u015d\u0157\3\2\2\2\u015d\u015a\3\2\2\2\u015e\25\3\2\2"+
		"\2\u015f\u0163\7\21\2\2\u0160\u0162\7_\2\2\u0161\u0160\3\2\2\2\u0162\u0165"+
		"\3\2\2\2\u0163\u0161\3\2\2\2\u0163\u0164\3\2\2\2\u0164\u0166\3\2\2\2\u0165"+
		"\u0163\3\2\2\2\u0166\u016a\7\u008c\2\2\u0167\u0169\7_\2\2\u0168\u0167"+
		"\3\2\2\2\u0169\u016c\3\2\2\2\u016a\u0168\3\2\2\2\u016a\u016b\3\2\2\2\u016b"+
		"\u016d\3\2\2\2\u016c\u016a\3\2\2\2\u016d\u0171\5\24\13\2\u016e\u0170\7"+
		"_\2\2\u016f\u016e\3\2\2\2\u0170\u0173\3\2\2\2\u0171\u016f\3\2\2\2\u0171"+
		"\u0172\3\2\2\2\u0172\u0174\3\2\2\2\u0173\u0171\3\2\2\2\u0174\u0175\7\u008b"+
		"\2\2\u0175\u0176\b\f\1\2\u0176\27\3\2\2\2\u0177\u017b\7\22\2\2\u0178\u017a"+
		"\7_\2\2\u0179\u0178\3\2\2\2\u017a\u017d\3\2\2\2\u017b\u0179\3\2\2\2\u017b"+
		"\u017c\3\2\2\2\u017c\u017e\3\2\2\2\u017d\u017b\3\2\2\2\u017e\u0182\7\u008c"+
		"\2\2\u017f\u0181\7_\2\2\u0180\u017f\3\2\2\2\u0181\u0184\3\2\2\2\u0182"+
		"\u0180\3\2\2\2\u0182\u0183\3\2\2\2\u0183\u0185\3\2\2\2\u0184\u0182\3\2"+
		"\2\2\u0185\u0189\5\32\16\2\u0186\u0188\7_\2\2\u0187\u0186\3\2\2\2\u0188"+
		"\u018b\3\2\2\2\u0189\u0187\3\2\2\2\u0189\u018a\3\2\2\2\u018a\u018c\3\2"+
		"\2\2\u018b\u0189\3\2\2\2\u018c\u0190\7\u0094\2\2\u018d\u018f\7_\2\2\u018e"+
		"\u018d\3\2\2\2\u018f\u0192\3\2\2\2\u0190\u018e\3\2\2\2\u0190\u0191\3\2"+
		"\2\2\u0191\u0193\3\2\2\2\u0192\u0190\3\2\2\2\u0193\u0197\5\24\13\2\u0194"+
		"\u0196\7_\2\2\u0195\u0194\3\2\2\2\u0196\u0199\3\2\2\2\u0197\u0195\3\2"+
		"\2\2\u0197\u0198\3\2\2\2\u0198\u019a\3\2\2\2\u0199\u0197\3\2\2\2\u019a"+
		"\u019b\7\u008b\2\2\u019b\u019c\b\r\1\2\u019c\31\3\2\2\2\u019d\u019e\7"+
		"I\2\2\u019e\u01b8\b\16\1\2\u019f\u01a0\7J\2\2\u01a0\u01b8\b\16\1\2\u01a1"+
		"\u01a2\7K\2\2\u01a2\u01b8\b\16\1\2\u01a3\u01a4\7L\2\2\u01a4\u01b8\b\16"+
		"\1\2\u01a5\u01a6\7M\2\2\u01a6\u01b8\b\16\1\2\u01a7\u01a8\7N\2\2\u01a8"+
		"\u01b8\b\16\1\2\u01a9\u01aa\7O\2\2\u01aa\u01b8\b\16\1\2\u01ab\u01ac\7"+
		"P\2\2\u01ac\u01b8\b\16\1\2\u01ad\u01ae\7Q\2\2\u01ae\u01b8\b\16\1\2\u01af"+
		"\u01b0\7R\2\2\u01b0\u01b8\b\16\1\2\u01b1\u01b2\7S\2\2\u01b2\u01b8\b\16"+
		"\1\2\u01b3\u01b4\7T\2\2\u01b4\u01b8\b\16\1\2\u01b5\u01b6\7U\2\2\u01b6"+
		"\u01b8\b\16\1\2\u01b7\u019d\3\2\2\2\u01b7\u019f\3\2\2\2\u01b7\u01a1\3"+
		"\2\2\2\u01b7\u01a3\3\2\2\2\u01b7\u01a5\3\2\2\2\u01b7\u01a7\3\2\2\2\u01b7"+
		"\u01a9\3\2\2\2\u01b7\u01ab\3\2\2\2\u01b7\u01ad\3\2\2\2\u01b7\u01af\3\2"+
		"\2\2\u01b7\u01b1\3\2\2\2\u01b7\u01b3\3\2\2\2\u01b7\u01b5\3\2\2\2\u01b8"+
		"\33\3\2\2\2\u01b9\u01ba\5\36\20\2\u01ba\u01bb\b\17\1\2\u01bb\u01e1\3\2"+
		"\2\2\u01bc\u01bd\5 \21\2\u01bd\u01be\b\17\1\2\u01be\u01e1\3\2\2\2\u01bf"+
		"\u01c0\5\"\22\2\u01c0\u01c1\b\17\1\2\u01c1\u01e1\3\2\2\2\u01c2\u01c3\5"+
		"$\23\2\u01c3\u01c4\b\17\1\2\u01c4\u01e1\3\2\2\2\u01c5\u01c6\5&\24\2\u01c6"+
		"\u01c7\b\17\1\2\u01c7\u01e1\3\2\2\2\u01c8\u01c9\5(\25\2\u01c9\u01ca\b"+
		"\17\1\2\u01ca\u01e1\3\2\2\2\u01cb\u01cc\5*\26\2\u01cc\u01cd\b\17\1\2\u01cd"+
		"\u01e1\3\2\2\2\u01ce\u01cf\5,\27\2\u01cf\u01d0\b\17\1\2\u01d0\u01e1\3"+
		"\2\2\2\u01d1\u01d2\5.\30\2\u01d2\u01d3\b\17\1\2\u01d3\u01e1\3\2\2\2\u01d4"+
		"\u01d5\5\60\31\2\u01d5\u01d6\b\17\1\2\u01d6\u01e1\3\2\2\2\u01d7\u01d8"+
		"\5\62\32\2\u01d8\u01d9\b\17\1\2\u01d9\u01e1\3\2\2\2\u01da\u01db\5\64\33"+
		"\2\u01db\u01dc\b\17\1\2\u01dc\u01e1\3\2\2\2\u01dd\u01de\5\66\34\2\u01de"+
		"\u01df\b\17\1\2\u01df\u01e1\3\2\2\2\u01e0\u01b9\3\2\2\2\u01e0\u01bc\3"+
		"\2\2\2\u01e0\u01bf\3\2\2\2\u01e0\u01c2\3\2\2\2\u01e0\u01c5\3\2\2\2\u01e0"+
		"\u01c8\3\2\2\2\u01e0\u01cb\3\2\2\2\u01e0\u01ce\3\2\2\2\u01e0\u01d1\3\2"+
		"\2\2\u01e0\u01d4\3\2\2\2\u01e0\u01d7\3\2\2\2\u01e0\u01da\3\2\2\2\u01e0"+
		"\u01dd\3\2\2\2\u01e1\35\3\2\2\2\u01e2\u01e6\7\u0096\2\2\u01e3\u01e5\7"+
		"_\2\2\u01e4\u01e3\3\2\2\2\u01e5\u01e8\3\2\2\2\u01e6\u01e4\3\2\2\2\u01e6"+
		"\u01e7\3\2\2\2\u01e7\u01e9\3\2\2\2\u01e8\u01e6\3\2\2\2\u01e9\u01eb\7I"+
		"\2\2\u01ea\u01e2\3\2\2\2\u01ea\u01eb\3\2\2\2\u01eb\u01ef\3\2\2\2\u01ec"+
		"\u01ee\7_\2\2\u01ed\u01ec\3\2\2\2\u01ee\u01f1\3\2\2\2\u01ef\u01ed\3\2"+
		"\2\2\u01ef\u01f0\3\2\2\2\u01f0\u01f2\3\2\2\2\u01f1\u01ef\3\2\2\2\u01f2"+
		"\u01f6\7\u0088\2\2\u01f3\u01f5\7_\2\2\u01f4\u01f3\3\2\2\2\u01f5\u01f8"+
		"\3\2\2\2\u01f6\u01f4\3\2\2\2\u01f6\u01f7\3\2\2\2\u01f7\u01f9\3\2\2\2\u01f8"+
		"\u01f6\3\2\2\2\u01f9\u01fa\5B\"\2\u01fa\37\3\2\2\2\u01fb\u01ff\7\u0096"+
		"\2\2\u01fc\u01fe\7_\2\2\u01fd\u01fc\3\2\2\2\u01fe\u0201\3\2\2\2\u01ff"+
		"\u01fd\3\2\2\2\u01ff\u0200\3\2\2\2\u0200\u0202\3\2\2\2\u0201\u01ff\3\2"+
		"\2\2\u0202\u0204\7J\2\2\u0203\u01fb\3\2\2\2\u0203\u0204\3\2\2\2\u0204"+
		"\u0208\3\2\2\2\u0205\u0207\7_\2\2\u0206\u0205\3\2\2\2\u0207\u020a\3\2"+
		"\2\2\u0208\u0206\3\2\2\2\u0208\u0209\3\2\2\2\u0209\u020b\3\2\2\2\u020a"+
		"\u0208\3\2\2\2\u020b\u020f\7\u0088\2\2\u020c\u020e\7_\2\2\u020d\u020c"+
		"\3\2\2\2\u020e\u0211\3\2\2\2\u020f\u020d\3\2\2\2\u020f\u0210\3\2\2\2\u0210"+
		"\u0212\3\2\2\2\u0211\u020f\3\2\2\2\u0212\u0213\5D#\2\u0213!\3\2\2\2\u0214"+
		"\u0218\7\u0096\2\2\u0215\u0217\7_\2\2\u0216\u0215\3\2\2\2\u0217\u021a"+
		"\3\2\2\2\u0218\u0216\3\2\2\2\u0218\u0219\3\2\2\2\u0219\u021b\3\2\2\2\u021a"+
		"\u0218\3\2\2\2\u021b\u021d\7K\2\2\u021c\u0214\3\2\2\2\u021c\u021d\3\2"+
		"\2\2\u021d\u0221\3\2\2\2\u021e\u0220\7_\2\2\u021f\u021e\3\2\2\2\u0220"+
		"\u0223\3\2\2\2\u0221\u021f\3\2\2\2\u0221\u0222\3\2\2\2\u0222\u0224\3\2"+
		"\2\2\u0223\u0221\3\2\2\2\u0224\u0228\7\u0088\2\2\u0225\u0227\7_\2\2\u0226"+
		"\u0225\3\2\2\2\u0227\u022a\3\2\2\2\u0228\u0226\3\2\2\2\u0228\u0229\3\2"+
		"\2\2\u0229\u022b\3\2\2\2\u022a\u0228\3\2\2\2\u022b\u022c\5Z.\2\u022c#"+
		"\3\2\2\2\u022d\u0231\7\u0096\2\2\u022e\u0230\7_\2\2\u022f\u022e\3\2\2"+
		"\2\u0230\u0233\3\2\2\2\u0231\u022f\3\2\2\2\u0231\u0232\3\2\2\2\u0232\u0234"+
		"\3\2\2\2\u0233\u0231\3\2\2\2\u0234\u0238\7L\2\2\u0235\u0237\7_\2\2\u0236"+
		"\u0235\3\2\2\2\u0237\u023a\3\2\2\2\u0238\u0236\3\2\2\2\u0238\u0239\3\2"+
		"\2\2\u0239\u023b\3\2\2\2\u023a\u0238\3\2\2\2\u023b\u023f\7\u0088\2\2\u023c"+
		"\u023e\7_\2\2\u023d\u023c\3\2\2\2\u023e\u0241\3\2\2\2\u023f\u023d\3\2"+
		"\2\2\u023f\u0240\3\2\2\2\u0240\u0242\3\2\2\2\u0241\u023f\3\2\2\2\u0242"+
		"\u0244\5F$\2\u0243\u0245\7L\2\2\u0244\u0243\3\2\2\2\u0244\u0245\3\2\2"+
		"\2\u0245\u0252\3\2\2\2\u0246\u024a\7\u0088\2\2\u0247\u0249\7_\2\2\u0248"+
		"\u0247\3\2\2\2\u0249\u024c\3\2\2\2\u024a\u0248\3\2\2\2\u024a\u024b\3\2"+
		"\2\2\u024b\u024d\3\2\2\2\u024c\u024a\3\2\2\2\u024d\u024f\5F$\2\u024e\u0250"+
		"\7L\2\2\u024f\u024e\3\2\2\2\u024f\u0250\3\2\2\2\u0250\u0252\3\2\2\2\u0251"+
		"\u022d\3\2\2\2\u0251\u0246\3\2\2\2\u0252%\3\2\2\2\u0253\u0257\7\u0096"+
		"\2\2\u0254\u0256\7_\2\2\u0255\u0254\3\2\2\2\u0256\u0259\3\2\2\2\u0257"+
		"\u0255\3\2\2\2\u0257\u0258\3\2\2\2\u0258\u025a\3\2\2\2\u0259\u0257\3\2"+
		"\2\2\u025a\u025e\7M\2\2\u025b\u025d\7_\2\2\u025c\u025b\3\2\2\2\u025d\u0260"+
		"\3\2\2\2\u025e\u025c\3\2\2\2\u025e\u025f\3\2\2\2\u025f\u0261\3\2\2\2\u0260"+
		"\u025e\3\2\2\2\u0261\u0265\7\u0088\2\2\u0262\u0264\7_\2\2\u0263\u0262"+
		"\3\2\2\2\u0264\u0267\3\2\2\2\u0265\u0263\3\2\2\2\u0265\u0266\3\2\2\2\u0266"+
		"\u0268\3\2\2\2\u0267\u0265\3\2\2\2\u0268\u026a\5H%\2\u0269\u026b\7M\2"+
		"\2\u026a\u0269\3\2\2\2\u026a\u026b\3\2\2\2\u026b\u0277\3\2\2\2\u026c\u0270"+
		"\7\u0088\2\2\u026d\u026f\7_\2\2\u026e\u026d\3\2\2\2\u026f\u0272\3\2\2"+
		"\2\u0270\u026e\3\2\2\2\u0270\u0271\3\2\2\2\u0271\u0273\3\2\2\2\u0272\u0270"+
		"\3\2\2\2\u0273\u0274\5H%\2\u0274\u0275\7M\2\2\u0275\u0277\3\2\2\2\u0276"+
		"\u0253\3\2\2\2\u0276\u026c\3\2\2\2\u0277\'\3\2\2\2\u0278\u027c\7\u0096"+
		"\2\2\u0279\u027b\7_\2\2\u027a\u0279\3\2\2\2\u027b\u027e\3\2\2\2\u027c"+
		"\u027a\3\2\2\2\u027c\u027d\3\2\2\2\u027d\u027f\3\2\2\2\u027e\u027c\3\2"+
		"\2\2\u027f\u0283\7N\2\2\u0280\u0282\7_\2\2\u0281\u0280\3\2\2\2\u0282\u0285"+
		"\3\2\2\2\u0283\u0281\3\2\2\2\u0283\u0284\3\2\2\2\u0284\u0286\3\2\2\2\u0285"+
		"\u0283\3\2\2\2\u0286\u028a\7\u0088\2\2\u0287\u0289\7_\2\2\u0288\u0287"+
		"\3\2\2\2\u0289\u028c\3\2\2\2\u028a\u0288\3\2\2\2\u028a\u028b\3\2\2\2\u028b"+
		"\u028d\3\2\2\2\u028c\u028a\3\2\2\2\u028d\u028f\5J&\2\u028e\u0290\7N\2"+
		"\2\u028f\u028e\3\2\2\2\u028f\u0290\3\2\2\2\u0290\u029c\3\2\2\2\u0291\u0295"+
		"\7\u0088\2\2\u0292\u0294\7_\2\2\u0293\u0292\3\2\2\2\u0294\u0297\3\2\2"+
		"\2\u0295\u0293\3\2\2\2\u0295\u0296\3\2\2\2\u0296\u0298\3\2\2\2\u0297\u0295"+
		"\3\2\2\2\u0298\u0299\5J&\2\u0299\u029a\7N\2\2\u029a\u029c\3\2\2\2\u029b"+
		"\u0278\3\2\2\2\u029b\u0291\3\2\2\2\u029c)\3\2\2\2\u029d\u02a1\7\u0096"+
		"\2\2\u029e\u02a0\7_\2\2\u029f\u029e\3\2\2\2\u02a0\u02a3\3\2\2\2\u02a1"+
		"\u029f\3\2\2\2\u02a1\u02a2\3\2\2\2\u02a2\u02a4\3\2\2\2\u02a3\u02a1\3\2"+
		"\2\2\u02a4\u02a8\7O\2\2\u02a5\u02a7\7_\2\2\u02a6\u02a5\3\2\2\2\u02a7\u02aa"+
		"\3\2\2\2\u02a8\u02a6\3\2\2\2\u02a8\u02a9\3\2\2\2\u02a9\u02ab\3\2\2\2\u02aa"+
		"\u02a8\3\2\2\2\u02ab\u02af\7\u0088\2\2\u02ac\u02ae\7_\2\2\u02ad\u02ac"+
		"\3\2\2\2\u02ae\u02b1\3\2\2\2\u02af\u02ad\3\2\2\2\u02af\u02b0\3\2\2\2\u02b0"+
		"\u02b2\3\2\2\2\u02b1\u02af\3\2\2\2\u02b2\u02b4\5L\'\2\u02b3\u02b5\7O\2"+
		"\2\u02b4\u02b3\3\2\2\2\u02b4\u02b5\3\2\2\2\u02b5\u02c1\3\2\2\2\u02b6\u02ba"+
		"\7\u0088\2\2\u02b7\u02b9\7_\2\2\u02b8\u02b7\3\2\2\2\u02b9\u02bc\3\2\2"+
		"\2\u02ba\u02b8\3\2\2\2\u02ba\u02bb\3\2\2\2\u02bb\u02bd\3\2\2\2\u02bc\u02ba"+
		"\3\2\2\2\u02bd\u02be\5L\'\2\u02be\u02bf\7O\2\2\u02bf\u02c1\3\2\2\2\u02c0"+
		"\u029d\3\2\2\2\u02c0\u02b6\3\2\2\2\u02c1+\3\2\2\2\u02c2\u02c6\7\u0096"+
		"\2\2\u02c3\u02c5\7_\2\2\u02c4\u02c3\3\2\2\2\u02c5\u02c8\3\2\2\2\u02c6"+
		"\u02c4\3\2\2\2\u02c6\u02c7\3\2\2\2\u02c7\u02c9\3\2\2\2\u02c8\u02c6\3\2"+
		"\2\2\u02c9\u02cd\7P\2\2\u02ca\u02cc\7_\2\2\u02cb\u02ca\3\2\2\2\u02cc\u02cf"+
		"\3\2\2\2\u02cd\u02cb\3\2\2\2\u02cd\u02ce\3\2\2\2\u02ce\u02d0\3\2\2\2\u02cf"+
		"\u02cd\3\2\2\2\u02d0\u02d4\7\u0088\2\2\u02d1\u02d3\7_\2\2\u02d2\u02d1"+
		"\3\2\2\2\u02d3\u02d6\3\2\2\2\u02d4\u02d2\3\2\2\2\u02d4\u02d5\3\2\2\2\u02d5"+
		"\u02d7\3\2\2\2\u02d6\u02d4\3\2\2\2\u02d7\u02d9\5N(\2\u02d8\u02da\7P\2"+
		"\2\u02d9\u02d8\3\2\2\2\u02d9\u02da\3\2\2\2\u02da\u02e6\3\2\2\2\u02db\u02df"+
		"\7\u0088\2\2\u02dc\u02de\7_\2\2\u02dd\u02dc\3\2\2\2\u02de\u02e1\3\2\2"+
		"\2\u02df\u02dd\3\2\2\2\u02df\u02e0\3\2\2\2\u02e0\u02e2\3\2\2\2\u02e1\u02df"+
		"\3\2\2\2\u02e2\u02e3\5N(\2\u02e3\u02e4\7P\2\2\u02e4\u02e6\3\2\2\2\u02e5"+
		"\u02c2\3\2\2\2\u02e5\u02db\3\2\2\2\u02e6-\3\2\2\2\u02e7\u02eb\7\u0096"+
		"\2\2\u02e8\u02ea\7_\2\2\u02e9\u02e8\3\2\2\2\u02ea\u02ed\3\2\2\2\u02eb"+
		"\u02e9\3\2\2\2\u02eb\u02ec\3\2\2\2\u02ec\u02ee\3\2\2\2\u02ed\u02eb\3\2"+
		"\2\2\u02ee\u02f2\7Q\2\2\u02ef\u02f1\7_\2\2\u02f0\u02ef\3\2\2\2\u02f1\u02f4"+
		"\3\2\2\2\u02f2\u02f0\3\2\2\2\u02f2\u02f3\3\2\2\2\u02f3\u02f5\3\2\2\2\u02f4"+
		"\u02f2\3\2\2\2\u02f5\u02f9\7\u0088\2\2\u02f6\u02f8\7_\2\2\u02f7\u02f6"+
		"\3\2\2\2\u02f8\u02fb\3\2\2\2\u02f9\u02f7\3\2\2\2\u02f9\u02fa\3\2\2\2\u02fa"+
		"\u02fc\3\2\2\2\u02fb\u02f9\3\2\2\2\u02fc\u02fe\5P)\2\u02fd\u02ff\7Q\2"+
		"\2\u02fe\u02fd\3\2\2\2\u02fe\u02ff\3\2\2\2\u02ff\u030b\3\2\2\2\u0300\u0304"+
		"\7\u0088\2\2\u0301\u0303\7_\2\2\u0302\u0301\3\2\2\2\u0303\u0306\3\2\2"+
		"\2\u0304\u0302\3\2\2\2\u0304\u0305\3\2\2\2\u0305\u0307\3\2\2\2\u0306\u0304"+
		"\3\2\2\2\u0307\u0308\5P)\2\u0308\u0309\7Q\2\2\u0309\u030b\3\2\2\2\u030a"+
		"\u02e7\3\2\2\2\u030a\u0300\3\2\2\2\u030b/\3\2\2\2\u030c\u0310\7\u0096"+
		"\2\2\u030d\u030f\7_\2\2\u030e\u030d\3\2\2\2\u030f\u0312\3\2\2\2\u0310"+
		"\u030e\3\2\2\2\u0310\u0311\3\2\2\2\u0311\u0313\3\2\2\2\u0312\u0310\3\2"+
		"\2\2\u0313\u0317\7R\2\2\u0314\u0316\7_\2\2\u0315\u0314\3\2\2\2\u0316\u0319"+
		"\3\2\2\2\u0317\u0315\3\2\2\2\u0317\u0318\3\2\2\2\u0318\u031a\3\2\2\2\u0319"+
		"\u0317\3\2\2\2\u031a\u031e\7\u0088\2\2\u031b\u031d\7_\2\2\u031c\u031b"+
		"\3\2\2\2\u031d\u0320\3\2\2\2\u031e\u031c\3\2\2\2\u031e\u031f\3\2\2\2\u031f"+
		"\u0321\3\2\2\2\u0320\u031e\3\2\2\2\u0321\u0323\5R*\2\u0322\u0324\7R\2"+
		"\2\u0323\u0322\3\2\2\2\u0323\u0324\3\2\2\2\u0324\u0330\3\2\2\2\u0325\u0329"+
		"\7\u0088\2\2\u0326\u0328\7_\2\2\u0327\u0326\3\2\2\2\u0328\u032b\3\2\2"+
		"\2\u0329\u0327\3\2\2\2\u0329\u032a\3\2\2\2\u032a\u032c\3\2\2\2\u032b\u0329"+
		"\3\2\2\2\u032c\u032d\5R*\2\u032d\u032e\7R\2\2\u032e\u0330\3\2\2\2\u032f"+
		"\u030c\3\2\2\2\u032f\u0325\3\2\2\2\u0330\61\3\2\2\2\u0331\u0335\7\u0096"+
		"\2\2\u0332\u0334\7_\2\2\u0333\u0332\3\2\2\2\u0334\u0337\3\2\2\2\u0335"+
		"\u0333\3\2\2\2\u0335\u0336\3\2\2\2\u0336\u0338\3\2\2\2\u0337\u0335\3\2"+
		"\2\2\u0338\u033c\7S\2\2\u0339\u033b\7_\2\2\u033a\u0339\3\2\2\2\u033b\u033e"+
		"\3\2\2\2\u033c\u033a\3\2\2\2\u033c\u033d\3\2\2\2\u033d\u033f\3\2\2\2\u033e"+
		"\u033c\3\2\2\2\u033f\u0343\7\u0088\2\2\u0340\u0342\7_\2\2\u0341\u0340"+
		"\3\2\2\2\u0342\u0345\3\2\2\2\u0343\u0341\3\2\2\2\u0343\u0344\3\2\2\2\u0344"+
		"\u0346\3\2\2\2\u0345\u0343\3\2\2\2\u0346\u0348\5T+\2\u0347\u0349\7S\2"+
		"\2\u0348\u0347\3\2\2\2\u0348\u0349\3\2\2\2\u0349\u0355\3\2\2\2\u034a\u034e"+
		"\7\u0088\2\2\u034b\u034d\7_\2\2\u034c\u034b\3\2\2\2\u034d\u0350\3\2\2"+
		"\2\u034e\u034c\3\2\2\2\u034e\u034f\3\2\2\2\u034f\u0351\3\2\2\2\u0350\u034e"+
		"\3\2\2\2\u0351\u0352\5T+\2\u0352\u0353\7S\2\2\u0353\u0355\3\2\2\2\u0354"+
		"\u0331\3\2\2\2\u0354\u034a\3\2\2\2\u0355\63\3\2\2\2\u0356\u035a\7\u0096"+
		"\2\2\u0357\u0359\7_\2\2\u0358\u0357\3\2\2\2\u0359\u035c\3\2\2\2\u035a"+
		"\u0358\3\2\2\2\u035a\u035b\3\2\2\2\u035b\u035d\3\2\2\2\u035c\u035a\3\2"+
		"\2\2\u035d\u0361\7T\2\2\u035e\u0360\7_\2\2\u035f\u035e\3\2\2\2\u0360\u0363"+
		"\3\2\2\2\u0361\u035f\3\2\2\2\u0361\u0362\3\2\2\2\u0362\u0364\3\2\2\2\u0363"+
		"\u0361\3\2\2\2\u0364\u0368\7\u0088\2\2\u0365\u0367\7_\2\2\u0366\u0365"+
		"\3\2\2\2\u0367\u036a\3\2\2\2\u0368\u0366\3\2\2\2\u0368\u0369\3\2\2\2\u0369"+
		"\u036b\3\2\2\2\u036a\u0368\3\2\2\2\u036b\u036d\5V,\2\u036c\u036e\7T\2"+
		"\2\u036d\u036c\3\2\2\2\u036d\u036e\3\2\2\2\u036e\u037b\3\2\2\2\u036f\u0373"+
		"\7\u0088\2\2\u0370\u0372\7_\2\2\u0371\u0370\3\2\2\2\u0372\u0375\3\2\2"+
		"\2\u0373\u0371\3\2\2\2\u0373\u0374\3\2\2\2\u0374\u0376\3\2\2\2\u0375\u0373"+
		"\3\2\2\2\u0376\u0378\5V,\2\u0377\u0379\7T\2\2\u0378\u0377\3\2\2\2\u0378"+
		"\u0379\3\2\2\2\u0379\u037b\3\2\2\2\u037a\u0356\3\2\2\2\u037a\u036f\3\2"+
		"\2\2\u037b\65\3\2\2\2\u037c\u0380\7\u0096\2\2\u037d\u037f\7_\2\2\u037e"+
		"\u037d\3\2\2\2\u037f\u0382\3\2\2\2\u0380\u037e\3\2\2\2\u0380\u0381\3\2"+
		"\2\2\u0381\u0383\3\2\2\2\u0382\u0380\3\2\2\2\u0383\u0387\7U\2\2\u0384"+
		"\u0386\7_\2\2\u0385\u0384\3\2\2\2\u0386\u0389\3\2\2\2\u0387\u0385\3\2"+
		"\2\2\u0387\u0388\3\2\2\2\u0388\u038a\3\2\2\2\u0389\u0387\3\2\2\2\u038a"+
		"\u038e\7\u0088\2\2\u038b\u038d\7_\2\2\u038c\u038b\3\2\2\2\u038d\u0390"+
		"\3\2\2\2\u038e\u038c\3\2\2\2\u038e\u038f\3\2\2\2\u038f\u0391\3\2\2\2\u0390"+
		"\u038e\3\2\2\2\u0391\u0393\5X-\2\u0392\u0394\7U\2\2\u0393\u0392\3\2\2"+
		"\2\u0393\u0394\3\2\2\2\u0394\u03a0\3\2\2\2\u0395\u0399\7\u0088\2\2\u0396"+
		"\u0398\7_\2\2\u0397\u0396\3\2\2\2\u0398\u039b\3\2\2\2\u0399\u0397\3\2"+
		"\2\2\u0399\u039a\3\2\2\2\u039a\u039c\3\2\2\2\u039b\u0399\3\2\2\2\u039c"+
		"\u039d\5X-\2\u039d\u039e\7U\2\2\u039e\u03a0\3\2\2\2\u039f\u037c\3\2\2"+
		"\2\u039f\u0395\3\2\2\2\u03a0\67\3\2\2\2\u03a1\u03a5\7\16\2\2\u03a2\u03a4"+
		"\7_\2\2\u03a3\u03a2\3\2\2\2\u03a4\u03a7\3\2\2\2\u03a5\u03a3\3\2\2\2\u03a5"+
		"\u03a6\3\2\2\2\u03a6\u03a8\3\2\2\2\u03a7\u03a5\3\2\2\2\u03a8\u03ac\7\u0088"+
		"\2\2\u03a9\u03ab\7_\2\2\u03aa\u03a9\3\2\2\2\u03ab\u03ae\3\2\2\2\u03ac"+
		"\u03aa\3\2\2\2\u03ac\u03ad\3\2\2\2\u03ad\u03af\3\2\2\2\u03ae\u03ac\3\2"+
		"\2\2\u03af\u03b3\5\\/\2\u03b0\u03b2\7_\2\2\u03b1\u03b0\3\2\2\2\u03b2\u03b5"+
		"\3\2\2\2\u03b3\u03b1\3\2\2\2\u03b3\u03b4\3\2\2\2\u03b4\u03b6\3\2\2\2\u03b5"+
		"\u03b3\3\2\2\2\u03b6\u03b7\7\u0095\2\2\u03b7\u03b8\b\35\1\2\u03b89\3\2"+
		"\2\2\u03b9\u03ba\7\n\2\2\u03ba\u03bb\5@!\2\u03bb\u03bc\7\u0095\2\2\u03bc"+
		"\u03bd\b\36\1\2\u03bd;\3\2\2\2\u03be\u03bf\7\17\2\2\u03bf\u03c0\5> \2"+
		"\u03c0\u03c1\7\u0095\2\2\u03c1=\3\2\2\2\u03c2\u03c4\5@!\2\u03c3\u03c2"+
		"\3\2\2\2\u03c3\u03c4\3\2\2\2\u03c4\u03c5\3\2\2\2\u03c5\u03c7\7\u0097\2"+
		"\2\u03c6\u03c3\3\2\2\2\u03c6\u03c7\3\2\2\2\u03c7\u03d8\3\2\2\2\u03c8\u03d9"+
		"\7u\2\2\u03c9\u03d5\7\u009d\2\2\u03ca\u03cf\5> \2\u03cb\u03cc\7\u0094"+
		"\2\2\u03cc\u03ce\5> \2\u03cd\u03cb\3\2\2\2\u03ce\u03d1\3\2\2\2\u03cf\u03cd"+
		"\3\2\2\2\u03cf\u03d0\3\2\2\2\u03d0\u03d3\3\2\2\2\u03d1\u03cf\3\2\2\2\u03d2"+
		"\u03d4\7\u0094\2\2\u03d3\u03d2\3\2\2\2\u03d3\u03d4\3\2\2\2\u03d4\u03d6"+
		"\3\2\2\2\u03d5\u03ca\3\2\2\2\u03d5\u03d6\3\2\2\2\u03d6\u03d7\3\2\2\2\u03d7"+
		"\u03d9\7\u009e\2\2\u03d8\u03c8\3\2\2\2\u03d8\u03c9\3\2\2\2\u03d9\u03e0"+
		"\3\2\2\2\u03da\u03dd\5@!\2\u03db\u03dc\7\4\2\2\u03dc\u03de\5\\/\2\u03dd"+
		"\u03db\3\2\2\2\u03dd\u03de\3\2\2\2\u03de\u03e0\3\2\2\2\u03df\u03c6\3\2"+
		"\2\2\u03df\u03da\3\2\2\2\u03e0?\3\2\2\2\u03e1\u03e3\7\u0097\2\2\u03e2"+
		"\u03e1\3\2\2\2\u03e2\u03e3\3\2\2\2\u03e3\u03e4\3\2\2\2\u03e4\u03e5\5\\"+
		"/\2\u03e5\u03ec\b!\1\2\u03e6\u03e7\7\u0097\2\2\u03e7\u03e8\5\\/\2\u03e8"+
		"\u03e9\b!\1\2\u03e9\u03eb\3\2\2\2\u03ea\u03e6\3\2\2\2\u03eb\u03ee\3\2"+
		"\2\2\u03ec\u03ea\3\2\2\2\u03ec\u03ed\3\2\2\2\u03edA\3\2\2\2\u03ee\u03ec"+
		"\3\2\2\2\u03ef\u03f0\t\2\2\2\u03f0C\3\2\2\2\u03f1\u03f2\7`\2\2\u03f2\u03f3"+
		"\b#\1\2\u03f3E\3\2\2\2\u03f4\u03f5\7k\2\2\u03f5\u03f6\b$\1\2\u03f6G\3"+
		"\2\2\2\u03f7\u03f8\7k\2\2\u03f8\u03f9\b%\1\2\u03f9I\3\2\2\2\u03fa\u03fc"+
		"\7t\2\2\u03fb\u03fa\3\2\2\2\u03fb\u03fc\3\2\2\2\u03fc\u03fd\3\2\2\2\u03fd"+
		"\u0405\t\3\2\2\u03fe\u03ff\7o\2\2\u03ff\u0405\t\4\2\2\u0400\u0401\7p\2"+
		"\2\u0401\u0405\t\5\2\2\u0402\u0403\7q\2\2\u0403\u0405\t\6\2\2\u0404\u03fb"+
		"\3\2\2\2\u0404\u03fe\3\2\2\2\u0404\u0400\3\2\2\2\u0404\u0402\3\2\2\2\u0405"+
		"\u0406\3\2\2\2\u0406\u0407\b&\1\2\u0407K\3\2\2\2\u0408\u040a\7t\2\2\u0409"+
		"\u0408\3\2\2\2\u0409\u040a\3\2\2\2\u040a\u040b\3\2\2\2\u040b\u0413\t\3"+
		"\2\2\u040c\u040d\7o\2\2\u040d\u0413\t\4\2\2\u040e\u040f\7p\2\2\u040f\u0413"+
		"\t\5\2\2\u0410\u0411\7q\2\2\u0411\u0413\t\6\2\2\u0412\u0409\3\2\2\2\u0412"+
		"\u040c\3\2\2\2\u0412\u040e\3\2\2\2\u0412\u0410\3\2\2\2\u0413\u0414\3\2"+
		"\2\2\u0414\u0415\b\'\1\2\u0415M\3\2\2\2\u0416\u0418\7t\2\2\u0417\u0416"+
		"\3\2\2\2\u0417\u0418\3\2\2\2\u0418\u0419\3\2\2\2\u0419\u0421\t\3\2\2\u041a"+
		"\u041b\7o\2\2\u041b\u0421\t\4\2\2\u041c\u041d\7p\2\2\u041d\u0421\t\5\2"+
		"\2\u041e\u041f\7q\2\2\u041f\u0421\t\6\2\2\u0420\u0417\3\2\2\2\u0420\u041a"+
		"\3\2\2\2\u0420\u041c\3\2\2\2\u0420\u041e\3\2\2\2\u0421\u0422\3\2\2\2\u0422"+
		"\u0423\b(\1\2\u0423O\3\2\2\2\u0424\u0426\7t\2\2\u0425\u0424\3\2\2\2\u0425"+
		"\u0426\3\2\2\2\u0426\u0427\3\2\2\2\u0427\u042f\t\3\2\2\u0428\u0429\7o"+
		"\2\2\u0429\u042f\t\4\2\2\u042a\u042b\7p\2\2\u042b\u042f\t\5\2\2\u042c"+
		"\u042d\7q\2\2\u042d\u042f\t\6\2\2\u042e\u0425\3\2\2\2\u042e\u0428\3\2"+
		"\2\2\u042e\u042a\3\2\2\2\u042e\u042c\3\2\2\2\u042f\u0430\3\2\2\2\u0430"+
		"\u0431\b)\1\2\u0431Q\3\2\2\2\u0432\u0434\7t\2\2\u0433\u0432\3\2\2\2\u0433"+
		"\u0434\3\2\2\2\u0434\u0435\3\2\2\2\u0435\u043d\t\3\2\2\u0436\u0437\7o"+
		"\2\2\u0437\u043d\t\4\2\2\u0438\u0439\7p\2\2\u0439\u043d\t\5\2\2\u043a"+
		"\u043b\7q\2\2\u043b\u043d\t\6\2\2\u043c\u0433\3\2\2\2\u043c\u0436\3\2"+
		"\2\2\u043c\u0438\3\2\2\2\u043c\u043a\3\2\2\2\u043d\u043e\3\2\2\2\u043e"+
		"\u043f\b*\1\2\u043fS\3\2\2\2\u0440\u0442\7t\2\2\u0441\u0440\3\2\2\2\u0441"+
		"\u0442\3\2\2\2\u0442\u0443\3\2\2\2\u0443\u044b\t\3\2\2\u0444\u0445\7o"+
		"\2\2\u0445\u044b\t\4\2\2\u0446\u0447\7p\2\2\u0447\u044b\t\5\2\2\u0448"+
		"\u0449\7q\2\2\u0449\u044b\t\6\2\2\u044a\u0441\3\2\2\2\u044a\u0444\3\2"+
		"\2\2\u044a\u0446\3\2\2\2\u044a\u0448\3\2\2\2\u044b\u044c\3\2\2\2\u044c"+
		"\u044d\b+\1\2\u044dU\3\2\2\2\u044e\u0450\7t\2\2\u044f\u044e\3\2\2\2\u044f"+
		"\u0450\3\2\2\2\u0450\u0451\3\2\2\2\u0451\u0459\t\3\2\2\u0452\u0453\7o"+
		"\2\2\u0453\u0459\t\4\2\2\u0454\u0455\7p\2\2\u0455\u0459\t\5\2\2\u0456"+
		"\u0457\7q\2\2\u0457\u0459\t\6\2\2\u0458\u044f\3\2\2\2\u0458\u0452\3\2"+
		"\2\2\u0458\u0454\3\2\2\2\u0458\u0456\3\2\2\2\u0459\u045a\3\2\2\2\u045a"+
		"\u045b\b,\1\2\u045bW\3\2\2\2\u045c\u045e\7t\2\2\u045d\u045c\3\2\2\2\u045d"+
		"\u045e\3\2\2\2\u045e\u045f\3\2\2\2\u045f\u0467\t\3\2\2\u0460\u0461\7o"+
		"\2\2\u0461\u0467\t\4\2\2\u0462\u0463\7p\2\2\u0463\u0467\t\5\2\2\u0464"+
		"\u0465\7q\2\2\u0465\u0467\t\6\2\2\u0466\u045d\3\2\2\2\u0466\u0460\3\2"+
		"\2\2\u0466\u0462\3\2\2\2\u0466\u0464\3\2\2\2\u0467\u0468\3\2\2\2\u0468"+
		"\u0469\b-\1\2\u0469Y\3\2\2\2\u046a\u046b\7a\2\2\u046b\u046f\b.\1\2\u046c"+
		"\u046d\7b\2\2\u046d\u046f\b.\1\2\u046e\u046a\3\2\2\2\u046e\u046c\3\2\2"+
		"\2\u046f[\3\2\2\2\u0470\u0474\7V\2\2\u0471\u0472\7r\2\2\u0472\u0474\7"+
		"V\2\2\u0473\u0470\3\2\2\2\u0473\u0471\3\2\2\2\u0474]\3\2\2\2\u0475\u0476"+
		"\t\7\2\2\u0476_\3\2\2\2\u0096ekpv|\u0082\u0088\u0096\u009c\u00a5\u00ac"+
		"\u00b3\u00ba\u00c2\u00c9\u00ce\u00d5\u00e0\u00e7\u00ee\u00f5\u00fd\u0104"+
		"\u0109\u0110\u011b\u0122\u012b\u0132\u0139\u0145\u014c\u015d\u0163\u016a"+
		"\u0171\u017b\u0182\u0189\u0190\u0197\u01b7\u01e0\u01e6\u01ea\u01ef\u01f6"+
		"\u01ff\u0203\u0208\u020f\u0218\u021c\u0221\u0228\u0231\u0238\u023f\u0244"+
		"\u024a\u024f\u0251\u0257\u025e\u0265\u026a\u0270\u0276\u027c\u0283\u028a"+
		"\u028f\u0295\u029b\u02a1\u02a8\u02af\u02b4\u02ba\u02c0\u02c6\u02cd\u02d4"+
		"\u02d9\u02df\u02e5\u02eb\u02f2\u02f9\u02fe\u0304\u030a\u0310\u0317\u031e"+
		"\u0323\u0329\u032f\u0335\u033c\u0343\u0348\u034e\u0354\u035a\u0361\u0368"+
		"\u036d\u0373\u0378\u037a\u0380\u0387\u038e\u0393\u0399\u039f\u03a5\u03ac"+
		"\u03b3\u03c3\u03c6\u03cf\u03d3\u03d5\u03d8\u03dd\u03df\u03e2\u03ec\u03fb"+
		"\u0404\u0409\u0412\u0417\u0420\u0425\u042e\u0433\u043c\u0441\u044a\u044f"+
		"\u0458\u045d\u0466\u046e\u0473";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}