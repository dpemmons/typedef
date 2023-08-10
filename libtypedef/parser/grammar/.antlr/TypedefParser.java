// Generated from /home/dpemmons/src/typedef/libtypedef/parser/grammar/TypedefParser.g4 by ANTLR 4.9.2

#include "libtypedef/parser/symbol_table.h"
#include "libtypedef/parser/table.h"

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
		KW_VARIANT=14, KW_VECTOR=15, KW_MAP=16, KW_TEMPLATESTRING=17, KW_AND=18, 
		KW_IN=19, KW_LET=20, KW_NOT=21, KW_OR=22, KW_SIZEOF=23, KW_THIS=24, KW_TRAIT=25, 
		KW_WHERE=26, KW_XOR=27, KW_BREAK=28, KW_CONTINUE=29, KW_DEFAULT=30, KW_DO=31, 
		KW_ELSE=32, KW_FOR=33, KW_GOTO=34, KW_IF=35, KW_LOOP=36, KW_MATCH=37, 
		KW_MOVE=38, KW_RETURN=39, KW_TRY=40, KW_WHILE=41, KW_YIELD=42, KW_ABSTRACT=43, 
		KW_AUTO=44, KW_CONST=45, KW_DOUBLE=46, KW_EXTERN=47, KW_FINAL=48, KW_FLOAT=49, 
		KW_INT=50, KW_LONG=51, KW_MACRO=52, KW_MUT=53, KW_OVERRIDE=54, KW_PRIVATE=55, 
		KW_PUB=56, KW_REF=57, KW_SELFTYPE=58, KW_SELFVALUE=59, KW_SIGNED=60, KW_STATIC=61, 
		KW_SUPER=62, KW_SWITCH=63, KW_TYPEOF=64, KW_UNION=65, KW_UNSAFE=66, KW_UNSIGNED=67, 
		KW_UNSIZED=68, KW_VIRTUAL=69, KW_VOID=70, KW_VOLATILE=71, KW_BOOL=72, 
		KW_CHAR=73, KW_STRING=74, KW_F32=75, KW_F64=76, KW_U8=77, KW_U16=78, KW_U32=79, 
		KW_U64=80, KW_I8=81, KW_I16=82, KW_I32=83, KW_I64=84, NON_KEYWORD_IDENTIFIER=85, 
		LINE_COMMENT=86, BLOCK_COMMENT=87, INNER_LINE_DOC=88, INNER_BLOCK_DOC=89, 
		OUTER_LINE_DOC=90, OUTER_BLOCK_DOC=91, BLOCK_COMMENT_OR_DOC=92, SHEBANG=93, 
		WS=94, CHAR_LITERAL=95, STRING_LITERAL=96, RAW_STRING_LITERAL=97, DEC_DIGITS=98, 
		DEC_DIGITS_UNDERSCORE=99, HEX_DIGITS=100, HEX_DIGITS_UNDERSCORE=101, OCT_DIGITS=102, 
		OCT_DIGITS_UNDERSCORE=103, BIN_DIGITS=104, BIN_DIGITS_UNDERSCORE=105, 
		FLOAT_LITERAL=106, OCT_DIGIT=107, DEC_DIGIT=108, HEX_DIGIT=109, HEX_PREFIX=110, 
		OCT_PREFIX=111, BIN_PREFIX=112, RAW_ESCAPE=113, PLUS=114, MINUS=115, STAR=116, 
		SLASH=117, PERCENT=118, CARET=119, NOT=120, AND=121, OR=122, ANDAND=123, 
		OROR=124, PLUSEQ=125, MINUSEQ=126, STAREQ=127, SLASHEQ=128, PERCENTEQ=129, 
		CARETEQ=130, ANDEQ=131, OREQ=132, SHLEQ=133, SHREQ=134, EQ=135, EQEQ=136, 
		NE=137, GT=138, LT=139, GE=140, LE=141, AT=142, UNDERSCORE=143, DOT=144, 
		DOTDOT=145, DOTDOTDOT=146, COMMA=147, SEMI=148, COLON=149, PATHSEP=150, 
		RARROW=151, FATARROW=152, POUND=153, DOLLAR=154, QUESTION=155, LBRACE=156, 
		RBRACE=157, LBRACK=158, RBRACK=159, LPAREN=160, RPAREN=161;
	public static final int
		RULE_compilationUnit = 0, RULE_maybeValuedSymbolDeclaration = 1, RULE_typeDeclaration = 2, 
		RULE_structDeclaration = 3, RULE_variantDeclaration = 4, RULE_vectorDeclaration = 5, 
		RULE_mapDeclaration = 6, RULE_maybeValuedSymbol = 7, RULE_unvaluedSymbol = 8, 
		RULE_inlineStruct = 9, RULE_inlineVariant = 10, RULE_inlineVector = 11, 
		RULE_inlineMap = 12, RULE_maybeValuedType = 13, RULE_valuedType = 14, 
		RULE_unvaluedType = 15, RULE_symbolReference = 16, RULE_primitiveType = 17, 
		RULE_valuedTemplateStringType = 18, RULE_valuedPrimitiveType = 19, RULE_valuedBoolFragment = 20, 
		RULE_valuedCharFragment = 21, RULE_valuedStringFragment = 22, RULE_valuedF32Fragment = 23, 
		RULE_valuedF64Fragment = 24, RULE_valuedU8Fragment = 25, RULE_valuedU16Fragment = 26, 
		RULE_valuedU32Fragment = 27, RULE_valuedU64Fragment = 28, RULE_valuedI8Fragment = 29, 
		RULE_valuedI16Fragment = 30, RULE_valuedI32Fragment = 31, RULE_valuedI64Fragment = 32, 
		RULE_typedefVersionDeclaration = 33, RULE_moduleDeclaration = 34, RULE_useDeclaration = 35, 
		RULE_useTree = 36, RULE_simplePath = 37, RULE_boolLiteral = 38, RULE_charLiteral = 39, 
		RULE_f32Literal = 40, RULE_f64Literal = 41, RULE_u8Literal = 42, RULE_u16Literal = 43, 
		RULE_u32Literal = 44, RULE_u64Literal = 45, RULE_i8Literal = 46, RULE_i16Literal = 47, 
		RULE_i32Literal = 48, RULE_i64Literal = 49, RULE_stringLiteral = 50, RULE_identifier = 51, 
		RULE_keyword = 52;
	private static String[] makeRuleNames() {
		return new String[] {
			"compilationUnit", "maybeValuedSymbolDeclaration", "typeDeclaration", 
			"structDeclaration", "variantDeclaration", "vectorDeclaration", "mapDeclaration", 
			"maybeValuedSymbol", "unvaluedSymbol", "inlineStruct", "inlineVariant", 
			"inlineVector", "inlineMap", "maybeValuedType", "valuedType", "unvaluedType", 
			"symbolReference", "primitiveType", "valuedTemplateStringType", "valuedPrimitiveType", 
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
			"'vector'", "'map'", "'tmpl_str'", "'and'", "'in'", "'let'", "'not'", 
			"'or'", "'sizeof'", "'this'", "'trait'", "'where'", "'xor'", "'break'", 
			"'continue'", "'default'", "'do'", "'else'", "'for'", "'goto'", "'if'", 
			"'loop'", "'match'", "'move'", "'return'", "'try'", "'while'", "'yield'", 
			"'abstract'", "'auto'", "'const'", "'double'", "'extern'", "'final'", 
			"'float'", "'int'", "'long'", "'macro'", "'mut'", "'override'", "'private'", 
			"'pub'", "'ref'", "'Self'", "'self'", "'signed'", "'static'", "'super'", 
			"'switch'", "'typeof'", "'union'", "'unsafe'", "'unsigned'", "'unsized'", 
			"'virtual'", "'void'", "'volatile'", "'bool'", "'char'", "'str'", "'f32'", 
			"'f64'", "'u8'", "'u16'", "'u32'", "'u64'", "'i8'", "'i16'", "'i32'", 
			"'i64'", null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, "'0x'", "'0o'", "'0b'", "'r#'", "'+'", "'-'", "'*'", 
			"'/'", "'%'", "'^'", "'!'", "'&'", "'|'", "'&&'", "'||'", "'+='", "'-='", 
			"'*='", "'/='", "'%='", "'^='", "'&='", "'|='", "'<<='", "'>>='", "'='", 
			"'=='", "'!='", "'>'", "'<'", "'>='", "'<='", "'@'", "'_'", "'.'", "'..'", 
			"'...'", "','", "';'", "':'", "'::'", "'->'", "'=>'", "'#'", "'$'", "'?'", 
			"'{'", "'}'", "'['", "']'", "'('", "')'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "KW_ARRAY", "KW_AS", "KW_ENUM", "KW_FALSE", "KW_FN", "KW_IMPL", 
			"KW_MESSAGE", "KW_MODULE", "KW_STRUCT", "KW_TRUE", "KW_TYPE", "KW_TYPEDEF", 
			"KW_USE", "KW_VARIANT", "KW_VECTOR", "KW_MAP", "KW_TEMPLATESTRING", "KW_AND", 
			"KW_IN", "KW_LET", "KW_NOT", "KW_OR", "KW_SIZEOF", "KW_THIS", "KW_TRAIT", 
			"KW_WHERE", "KW_XOR", "KW_BREAK", "KW_CONTINUE", "KW_DEFAULT", "KW_DO", 
			"KW_ELSE", "KW_FOR", "KW_GOTO", "KW_IF", "KW_LOOP", "KW_MATCH", "KW_MOVE", 
			"KW_RETURN", "KW_TRY", "KW_WHILE", "KW_YIELD", "KW_ABSTRACT", "KW_AUTO", 
			"KW_CONST", "KW_DOUBLE", "KW_EXTERN", "KW_FINAL", "KW_FLOAT", "KW_INT", 
			"KW_LONG", "KW_MACRO", "KW_MUT", "KW_OVERRIDE", "KW_PRIVATE", "KW_PUB", 
			"KW_REF", "KW_SELFTYPE", "KW_SELFVALUE", "KW_SIGNED", "KW_STATIC", "KW_SUPER", 
			"KW_SWITCH", "KW_TYPEOF", "KW_UNION", "KW_UNSAFE", "KW_UNSIGNED", "KW_UNSIZED", 
			"KW_VIRTUAL", "KW_VOID", "KW_VOLATILE", "KW_BOOL", "KW_CHAR", "KW_STRING", 
			"KW_F32", "KW_F64", "KW_U8", "KW_U16", "KW_U32", "KW_U64", "KW_I8", "KW_I16", 
			"KW_I32", "KW_I64", "NON_KEYWORD_IDENTIFIER", "LINE_COMMENT", "BLOCK_COMMENT", 
			"INNER_LINE_DOC", "INNER_BLOCK_DOC", "OUTER_LINE_DOC", "OUTER_BLOCK_DOC", 
			"BLOCK_COMMENT_OR_DOC", "SHEBANG", "WS", "CHAR_LITERAL", "STRING_LITERAL", 
			"RAW_STRING_LITERAL", "DEC_DIGITS", "DEC_DIGITS_UNDERSCORE", "HEX_DIGITS", 
			"HEX_DIGITS_UNDERSCORE", "OCT_DIGITS", "OCT_DIGITS_UNDERSCORE", "BIN_DIGITS", 
			"BIN_DIGITS_UNDERSCORE", "FLOAT_LITERAL", "OCT_DIGIT", "DEC_DIGIT", "HEX_DIGIT", 
			"HEX_PREFIX", "OCT_PREFIX", "BIN_PREFIX", "RAW_ESCAPE", "PLUS", "MINUS", 
			"STAR", "SLASH", "PERCENT", "CARET", "NOT", "AND", "OR", "ANDAND", "OROR", 
			"PLUSEQ", "MINUSEQ", "STAREQ", "SLASHEQ", "PERCENTEQ", "CARETEQ", "ANDEQ", 
			"OREQ", "SHLEQ", "SHREQ", "EQ", "EQEQ", "NE", "GT", "LT", "GE", "LE", 
			"AT", "UNDERSCORE", "DOT", "DOTDOT", "DOTDOTDOT", "COMMA", "SEMI", "COLON", 
			"PATHSEP", "RARROW", "FATARROW", "POUND", "DOLLAR", "QUESTION", "LBRACE", 
			"RBRACE", "LBRACK", "RBRACK", "LPAREN", "RPAREN"
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

	public TypedefParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class CompilationUnitContext extends ParserRuleContext {
		public td::SymbolTable symbol_table;
		public std::string version;
		public std::filesystem::path module;
		public TypedefVersionDeclarationContext typedefVersionDeclaration;
		public ModuleDeclarationContext moduleDeclaration;
		public TypeDeclarationContext typeDeclaration;
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
		public List<TypeDeclarationContext> typeDeclaration() {
			return getRuleContexts(TypeDeclarationContext.class);
		}
		public TypeDeclarationContext typeDeclaration(int i) {
			return getRuleContext(TypeDeclarationContext.class,i);
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
			setState(109);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(106);
				match(WS);
				}
				}
				setState(111);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(112);
			((CompilationUnitContext)_localctx).typedefVersionDeclaration = typedefVersionDeclaration();
			 ((CompilationUnitContext)_localctx).version =  ((CompilationUnitContext)_localctx).typedefVersionDeclaration->version; 
			setState(117);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(114);
					match(WS);
					}
					} 
				}
				setState(119);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
			}
			setState(123);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==KW_MODULE) {
				{
				setState(120);
				((CompilationUnitContext)_localctx).moduleDeclaration = moduleDeclaration();
				 ((CompilationUnitContext)_localctx).module =  ((CompilationUnitContext)_localctx).moduleDeclaration->module; 
				}
			}

			setState(134);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(128);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==WS) {
						{
						{
						setState(125);
						match(WS);
						}
						}
						setState(130);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(131);
					useDeclaration();
					}
					} 
				}
				setState(136);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			}
			setState(148);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(140);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==WS) {
						{
						{
						setState(137);
						match(WS);
						}
						}
						setState(142);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(143);
					((CompilationUnitContext)_localctx).typeDeclaration = typeDeclaration();

							TryInsert(_localctx.symbol_table, ((CompilationUnitContext)_localctx).typeDeclaration, this);
						
					}
					} 
				}
				setState(150);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			}
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
		enterRule(_localctx, 2, RULE_maybeValuedSymbolDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(159);
			maybeValuedSymbol();
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

	public static class TypeDeclarationContext extends ParserRuleContext {
		public std::optional<td::SymbolTable::Symbol> maybe_symbol;
		public StructDeclarationContext structDeclaration;
		public VariantDeclarationContext variantDeclaration;
		public VectorDeclarationContext vectorDeclaration;
		public MapDeclarationContext mapDeclaration;
		public TerminalNode SEMI() { return getToken(TypedefParser.SEMI, 0); }
		public StructDeclarationContext structDeclaration() {
			return getRuleContext(StructDeclarationContext.class,0);
		}
		public VariantDeclarationContext variantDeclaration() {
			return getRuleContext(VariantDeclarationContext.class,0);
		}
		public VectorDeclarationContext vectorDeclaration() {
			return getRuleContext(VectorDeclarationContext.class,0);
		}
		public MapDeclarationContext mapDeclaration() {
			return getRuleContext(MapDeclarationContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public TypeDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeDeclaration; }
	}

	public final TypeDeclarationContext typeDeclaration() throws RecognitionException {
		TypeDeclarationContext _localctx = new TypeDeclarationContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_typeDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(180);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case KW_STRUCT:
				{
				setState(168);
				((TypeDeclarationContext)_localctx).structDeclaration = structDeclaration();
				 ((TypeDeclarationContext)_localctx).maybe_symbol =  ((TypeDeclarationContext)_localctx).structDeclaration->maybe_symbol; 
				}
				break;
			case KW_VARIANT:
				{
				setState(171);
				((TypeDeclarationContext)_localctx).variantDeclaration = variantDeclaration();
				 ((TypeDeclarationContext)_localctx).maybe_symbol =  ((TypeDeclarationContext)_localctx).variantDeclaration->maybe_symbol; 
				}
				break;
			case KW_VECTOR:
				{
				setState(174);
				((TypeDeclarationContext)_localctx).vectorDeclaration = vectorDeclaration();
				 ((TypeDeclarationContext)_localctx).maybe_symbol =  ((TypeDeclarationContext)_localctx).vectorDeclaration->maybe_symbol; 
				}
				break;
			case KW_MAP:
				{
				setState(177);
				((TypeDeclarationContext)_localctx).mapDeclaration = mapDeclaration();
				 ((TypeDeclarationContext)_localctx).maybe_symbol =  ((TypeDeclarationContext)_localctx).mapDeclaration->maybe_symbol; 
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(185);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(182);
				match(WS);
				}
				}
				setState(187);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(188);
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
		public std::optional<td::SymbolTable::Symbol> maybe_symbol;
		public std::shared_ptr<td::Struct> s;
		public IdentifierContext identifier;
		public MaybeValuedSymbolContext maybeValuedSymbol;
		public StructDeclarationContext structDeclaration;
		public VariantDeclarationContext variantDeclaration;
		public VectorDeclarationContext vectorDeclaration;
		public MapDeclarationContext mapDeclaration;
		public TerminalNode KW_STRUCT() { return getToken(TypedefParser.KW_STRUCT, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode LBRACE() { return getToken(TypedefParser.LBRACE, 0); }
		public TerminalNode RBRACE() { return getToken(TypedefParser.RBRACE, 0); }
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public List<TerminalNode> SEMI() { return getTokens(TypedefParser.SEMI); }
		public TerminalNode SEMI(int i) {
			return getToken(TypedefParser.SEMI, i);
		}
		public List<MaybeValuedSymbolContext> maybeValuedSymbol() {
			return getRuleContexts(MaybeValuedSymbolContext.class);
		}
		public MaybeValuedSymbolContext maybeValuedSymbol(int i) {
			return getRuleContext(MaybeValuedSymbolContext.class,i);
		}
		public List<StructDeclarationContext> structDeclaration() {
			return getRuleContexts(StructDeclarationContext.class);
		}
		public StructDeclarationContext structDeclaration(int i) {
			return getRuleContext(StructDeclarationContext.class,i);
		}
		public List<VariantDeclarationContext> variantDeclaration() {
			return getRuleContexts(VariantDeclarationContext.class);
		}
		public VariantDeclarationContext variantDeclaration(int i) {
			return getRuleContext(VariantDeclarationContext.class,i);
		}
		public List<VectorDeclarationContext> vectorDeclaration() {
			return getRuleContexts(VectorDeclarationContext.class);
		}
		public VectorDeclarationContext vectorDeclaration(int i) {
			return getRuleContext(VectorDeclarationContext.class,i);
		}
		public List<MapDeclarationContext> mapDeclaration() {
			return getRuleContexts(MapDeclarationContext.class);
		}
		public MapDeclarationContext mapDeclaration(int i) {
			return getRuleContext(MapDeclarationContext.class,i);
		}
		public StructDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_structDeclaration; }
	}

	public final StructDeclarationContext structDeclaration() throws RecognitionException {
		StructDeclarationContext _localctx = new StructDeclarationContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_structDeclaration);

				((StructDeclarationContext)_localctx).s =  std::make_shared<td::Struct>();
			
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(190);
			match(KW_STRUCT);
			setState(194);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(191);
				match(WS);
				}
				}
				setState(196);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(197);
			((StructDeclarationContext)_localctx).identifier = identifier();
			setState(201);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(198);
				match(WS);
				}
				}
				setState(203);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(204);
			match(LBRACE);
			setState(208);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(205);
					match(WS);
					}
					} 
				}
				setState(210);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
			}
			setState(243);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << KW_STRUCT) | (1L << KW_VARIANT) | (1L << KW_VECTOR) | (1L << KW_MAP))) != 0) || _la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE) {
				{
				{
				setState(226);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case NON_KEYWORD_IDENTIFIER:
				case RAW_ESCAPE:
					{
					setState(211);
					((StructDeclarationContext)_localctx).maybeValuedSymbol = maybeValuedSymbol();

									TryInsertSymbol(_localctx.s, this, ((StructDeclarationContext)_localctx).maybeValuedSymbol);
								
					}
					break;
				case KW_STRUCT:
					{
					setState(214);
					((StructDeclarationContext)_localctx).structDeclaration = structDeclaration();

									TryInsertNested(_localctx.s, this, ((StructDeclarationContext)_localctx).structDeclaration);
								
					}
					break;
				case KW_VARIANT:
					{
					setState(217);
					((StructDeclarationContext)_localctx).variantDeclaration = variantDeclaration();

									TryInsertNested(_localctx.s, this, ((StructDeclarationContext)_localctx).variantDeclaration);
								
					}
					break;
				case KW_VECTOR:
					{
					setState(220);
					((StructDeclarationContext)_localctx).vectorDeclaration = vectorDeclaration();

									TryInsertNested(_localctx.s, this, ((StructDeclarationContext)_localctx).vectorDeclaration);
								
					}
					break;
				case KW_MAP:
					{
					setState(223);
					((StructDeclarationContext)_localctx).mapDeclaration = mapDeclaration();

									TryInsertNested(_localctx.s, this, ((StructDeclarationContext)_localctx).mapDeclaration);
								
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(231);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(228);
					match(WS);
					}
					}
					setState(233);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(234);
				match(SEMI);
				setState(238);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(235);
						match(WS);
						}
						} 
					}
					setState(240);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
				}
				}
				}
				setState(245);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(249);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(246);
				match(WS);
				}
				}
				setState(251);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(252);
			match(RBRACE);

					((StructDeclarationContext)_localctx).maybe_symbol =  std::make_pair(
						td::Identifier::TypeIdentifier(((StructDeclarationContext)_localctx).identifier->id), _localctx.s);
				
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
		public StructDeclarationContext structDeclaration;
		public VariantDeclarationContext variantDeclaration;
		public VectorDeclarationContext vectorDeclaration;
		public MapDeclarationContext mapDeclaration;
		public TerminalNode KW_VARIANT() { return getToken(TypedefParser.KW_VARIANT, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode LBRACE() { return getToken(TypedefParser.LBRACE, 0); }
		public TerminalNode RBRACE() { return getToken(TypedefParser.RBRACE, 0); }
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public List<TerminalNode> SEMI() { return getTokens(TypedefParser.SEMI); }
		public TerminalNode SEMI(int i) {
			return getToken(TypedefParser.SEMI, i);
		}
		public List<UnvaluedSymbolContext> unvaluedSymbol() {
			return getRuleContexts(UnvaluedSymbolContext.class);
		}
		public UnvaluedSymbolContext unvaluedSymbol(int i) {
			return getRuleContext(UnvaluedSymbolContext.class,i);
		}
		public List<StructDeclarationContext> structDeclaration() {
			return getRuleContexts(StructDeclarationContext.class);
		}
		public StructDeclarationContext structDeclaration(int i) {
			return getRuleContext(StructDeclarationContext.class,i);
		}
		public List<VariantDeclarationContext> variantDeclaration() {
			return getRuleContexts(VariantDeclarationContext.class);
		}
		public VariantDeclarationContext variantDeclaration(int i) {
			return getRuleContext(VariantDeclarationContext.class,i);
		}
		public List<VectorDeclarationContext> vectorDeclaration() {
			return getRuleContexts(VectorDeclarationContext.class);
		}
		public VectorDeclarationContext vectorDeclaration(int i) {
			return getRuleContext(VectorDeclarationContext.class,i);
		}
		public List<MapDeclarationContext> mapDeclaration() {
			return getRuleContexts(MapDeclarationContext.class);
		}
		public MapDeclarationContext mapDeclaration(int i) {
			return getRuleContext(MapDeclarationContext.class,i);
		}
		public VariantDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variantDeclaration; }
	}

	public final VariantDeclarationContext variantDeclaration() throws RecognitionException {
		VariantDeclarationContext _localctx = new VariantDeclarationContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_variantDeclaration);

				((VariantDeclarationContext)_localctx).v =  std::make_shared<td::Variant>();
			
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(255);
			match(KW_VARIANT);
			setState(259);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(256);
				match(WS);
				}
				}
				setState(261);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(262);
			((VariantDeclarationContext)_localctx).identifier = identifier();
			setState(266);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(263);
				match(WS);
				}
				}
				setState(268);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(269);
			match(LBRACE);
			setState(308);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << KW_STRUCT) | (1L << KW_VARIANT) | (1L << KW_VECTOR) | (1L << KW_MAP))) != 0) || ((((_la - 85)) & ~0x3f) == 0 && ((1L << (_la - 85)) & ((1L << (NON_KEYWORD_IDENTIFIER - 85)) | (1L << (WS - 85)) | (1L << (RAW_ESCAPE - 85)))) != 0)) {
				{
				{
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
				setState(291);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case NON_KEYWORD_IDENTIFIER:
				case RAW_ESCAPE:
					{
					setState(276);
					((VariantDeclarationContext)_localctx).unvaluedSymbol = unvaluedSymbol();

									TryInsertSymbol(_localctx.v, this, ((VariantDeclarationContext)_localctx).unvaluedSymbol);
								
					}
					break;
				case KW_STRUCT:
					{
					setState(279);
					((VariantDeclarationContext)_localctx).structDeclaration = structDeclaration();

									TryInsertNested(_localctx.v, this, ((VariantDeclarationContext)_localctx).structDeclaration);
								
					}
					break;
				case KW_VARIANT:
					{
					setState(282);
					((VariantDeclarationContext)_localctx).variantDeclaration = variantDeclaration();

									TryInsertNested(_localctx.v, this, ((VariantDeclarationContext)_localctx).variantDeclaration);
								
					}
					break;
				case KW_VECTOR:
					{
					setState(285);
					((VariantDeclarationContext)_localctx).vectorDeclaration = vectorDeclaration();

									TryInsertNested(_localctx.v, this, ((VariantDeclarationContext)_localctx).vectorDeclaration);
								
					}
					break;
				case KW_MAP:
					{
					setState(288);
					((VariantDeclarationContext)_localctx).mapDeclaration = mapDeclaration();

									TryInsertNested(_localctx.v, this, ((VariantDeclarationContext)_localctx).mapDeclaration);
								
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(296);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(293);
					match(WS);
					}
					}
					setState(298);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(299);
				match(SEMI);
				setState(303);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,24,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(300);
						match(WS);
						}
						} 
					}
					setState(305);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,24,_ctx);
				}
				}
				}
				setState(310);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(311);
			match(RBRACE);

					((VariantDeclarationContext)_localctx).maybe_symbol =  std::make_pair(
						td::Identifier::TypeIdentifier(((VariantDeclarationContext)_localctx).identifier->id), _localctx.v);
				
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

	public static class VectorDeclarationContext extends ParserRuleContext {
		public std::optional<td::SymbolTable::Symbol> maybe_symbol;
		public IdentifierContext identifier;
		public UnvaluedTypeContext val;
		public UnvaluedTypeContext unvaluedType;
		public TerminalNode KW_VECTOR() { return getToken(TypedefParser.KW_VECTOR, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode LT() { return getToken(TypedefParser.LT, 0); }
		public TerminalNode GT() { return getToken(TypedefParser.GT, 0); }
		public UnvaluedTypeContext unvaluedType() {
			return getRuleContext(UnvaluedTypeContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public VectorDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_vectorDeclaration; }
	}

	public final VectorDeclarationContext vectorDeclaration() throws RecognitionException {
		VectorDeclarationContext _localctx = new VectorDeclarationContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_vectorDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(314);
			match(KW_VECTOR);
			setState(318);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(315);
				match(WS);
				}
				}
				setState(320);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(321);
			((VectorDeclarationContext)_localctx).identifier = identifier();
			setState(325);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(322);
				match(WS);
				}
				}
				setState(327);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(328);
			match(LT);
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
			((VectorDeclarationContext)_localctx).val = ((VectorDeclarationContext)_localctx).unvaluedType = unvaluedType();
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
			match(GT);

					if (((VectorDeclarationContext)_localctx).unvaluedType->maybe_val) {
						((VectorDeclarationContext)_localctx).maybe_symbol =  std::make_pair(
							td::Identifier::TypeIdentifier(((VectorDeclarationContext)_localctx).identifier->id),
						  std::make_shared<td::Vector>(*((VectorDeclarationContext)_localctx).val->maybe_val));
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

	public static class MapDeclarationContext extends ParserRuleContext {
		public std::optional<td::SymbolTable::Symbol> maybe_symbol;
		public IdentifierContext identifier;
		public PrimitiveTypeContext key;
		public UnvaluedTypeContext val;
		public TerminalNode KW_MAP() { return getToken(TypedefParser.KW_MAP, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode LT() { return getToken(TypedefParser.LT, 0); }
		public TerminalNode COMMA() { return getToken(TypedefParser.COMMA, 0); }
		public TerminalNode GT() { return getToken(TypedefParser.GT, 0); }
		public PrimitiveTypeContext primitiveType() {
			return getRuleContext(PrimitiveTypeContext.class,0);
		}
		public UnvaluedTypeContext unvaluedType() {
			return getRuleContext(UnvaluedTypeContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public MapDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mapDeclaration; }
	}

	public final MapDeclarationContext mapDeclaration() throws RecognitionException {
		MapDeclarationContext _localctx = new MapDeclarationContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_mapDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(345);
			match(KW_MAP);
			setState(349);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(346);
				match(WS);
				}
				}
				setState(351);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(352);
			((MapDeclarationContext)_localctx).identifier = identifier();
			setState(356);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(353);
				match(WS);
				}
				}
				setState(358);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(359);
			match(LT);
			setState(363);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(360);
				match(WS);
				}
				}
				setState(365);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(366);
			((MapDeclarationContext)_localctx).key = primitiveType();
			setState(370);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(367);
				match(WS);
				}
				}
				setState(372);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(373);
			match(COMMA);
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
			((MapDeclarationContext)_localctx).val = unvaluedType();
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
			match(GT);

					// Map Declaration
					if (((MapDeclarationContext)_localctx).key->maybe_val && ((MapDeclarationContext)_localctx).val->maybe_val) {
						((MapDeclarationContext)_localctx).maybe_symbol =  std::make_pair(
							td::Identifier::TypeIdentifier(((MapDeclarationContext)_localctx).identifier->id),
						  std::make_shared<td::Map>(
								*((MapDeclarationContext)_localctx).key->maybe_val, *((MapDeclarationContext)_localctx).val->maybe_val));
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

	public static class MaybeValuedSymbolContext extends ParserRuleContext {
		public std::optional<td::SymbolTable::Symbol> maybe_symbol;
		public IdentifierContext identifier;
		public MaybeValuedTypeContext maybeValuedType;
		public UnvaluedSymbolContext unvaluedSymbol;
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
		public UnvaluedSymbolContext unvaluedSymbol() {
			return getRuleContext(UnvaluedSymbolContext.class,0);
		}
		public MaybeValuedSymbolContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_maybeValuedSymbol; }
	}

	public final MaybeValuedSymbolContext maybeValuedSymbol() throws RecognitionException {
		MaybeValuedSymbolContext _localctx = new MaybeValuedSymbolContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_maybeValuedSymbol);
		try {
			int _alt;
			setState(409);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(390);
				((MaybeValuedSymbolContext)_localctx).identifier = identifier();
				setState(394);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,36,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(391);
						match(WS);
						}
						} 
					}
					setState(396);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,36,_ctx);
				}
				setState(397);
				((MaybeValuedSymbolContext)_localctx).maybeValuedType = maybeValuedType();
				setState(401);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,37,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(398);
						match(WS);
						}
						} 
					}
					setState(403);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,37,_ctx);
				}

						if (((MaybeValuedSymbolContext)_localctx).maybeValuedType->maybe_val) {
							((MaybeValuedSymbolContext)_localctx).maybe_symbol =  std::make_pair(
								td::Identifier::ValueIdentifier(((MaybeValuedSymbolContext)_localctx).identifier->id),
								*((MaybeValuedSymbolContext)_localctx).maybeValuedType->maybe_val);
						}
					
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(406);
				((MaybeValuedSymbolContext)_localctx).unvaluedSymbol = unvaluedSymbol();
				((MaybeValuedSymbolContext)_localctx).maybe_symbol =  ((MaybeValuedSymbolContext)_localctx).unvaluedSymbol->maybe_symbol; 
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

	public static class UnvaluedSymbolContext extends ParserRuleContext {
		public std::optional<td::SymbolTable::Symbol> maybe_symbol;
		public InlineStructContext inlineStruct;
		public InlineVariantContext inlineVariant;
		public InlineVectorContext inlineVector;
		public InlineMapContext inlineMap;
		public IdentifierContext identifier;
		public UnvaluedTypeContext unvaluedType;
		public Token optional;
		public InlineStructContext inlineStruct() {
			return getRuleContext(InlineStructContext.class,0);
		}
		public InlineVariantContext inlineVariant() {
			return getRuleContext(InlineVariantContext.class,0);
		}
		public InlineVectorContext inlineVector() {
			return getRuleContext(InlineVectorContext.class,0);
		}
		public InlineMapContext inlineMap() {
			return getRuleContext(InlineMapContext.class,0);
		}
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
		public TerminalNode QUESTION() { return getToken(TypedefParser.QUESTION, 0); }
		public UnvaluedSymbolContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unvaluedSymbol; }
	}

	public final UnvaluedSymbolContext unvaluedSymbol() throws RecognitionException {
		UnvaluedSymbolContext _localctx = new UnvaluedSymbolContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_unvaluedSymbol);
		int _la;
		try {
			setState(449);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,43,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(411);
				((UnvaluedSymbolContext)_localctx).inlineStruct = inlineStruct();
				((UnvaluedSymbolContext)_localctx).maybe_symbol =  ((UnvaluedSymbolContext)_localctx).inlineStruct->maybe_symbol; 
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(414);
				((UnvaluedSymbolContext)_localctx).inlineVariant = inlineVariant();
				((UnvaluedSymbolContext)_localctx).maybe_symbol =  ((UnvaluedSymbolContext)_localctx).inlineVariant->maybe_symbol; 
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(417);
				((UnvaluedSymbolContext)_localctx).inlineVector = inlineVector();
				((UnvaluedSymbolContext)_localctx).maybe_symbol =  ((UnvaluedSymbolContext)_localctx).inlineVector->maybe_symbol; 
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(420);
				((UnvaluedSymbolContext)_localctx).inlineMap = inlineMap();
				((UnvaluedSymbolContext)_localctx).maybe_symbol =  ((UnvaluedSymbolContext)_localctx).inlineMap->maybe_symbol; 
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				{
				setState(423);
				((UnvaluedSymbolContext)_localctx).identifier = identifier();
				setState(427);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(424);
					match(WS);
					}
					}
					setState(429);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(430);
				match(COLON);
				setState(434);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(431);
					match(WS);
					}
					}
					setState(436);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(437);
				((UnvaluedSymbolContext)_localctx).unvaluedType = unvaluedType();
				setState(445);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,42,_ctx) ) {
				case 1:
					{
					setState(441);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==WS) {
						{
						{
						setState(438);
						match(WS);
						}
						}
						setState(443);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(444);
					((UnvaluedSymbolContext)_localctx).optional = match(QUESTION);
					}
					break;
				}

						if (((UnvaluedSymbolContext)_localctx).unvaluedType->maybe_val) {
							((UnvaluedSymbolContext)_localctx).maybe_symbol =  std::make_pair(
								td::Identifier::ValueIdentifier(((UnvaluedSymbolContext)_localctx).identifier->id),
								*((UnvaluedSymbolContext)_localctx).unvaluedType->maybe_val);
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

	public static class InlineStructContext extends ParserRuleContext {
		public std::optional<td::SymbolTable::Symbol> maybe_symbol;
		public std::shared_ptr<td::Struct> s;
		public IdentifierContext identifier;
		public Token optional;
		public MaybeValuedSymbolContext maybeValuedSymbol;
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public TerminalNode KW_STRUCT() { return getToken(TypedefParser.KW_STRUCT, 0); }
		public TerminalNode LBRACE() { return getToken(TypedefParser.LBRACE, 0); }
		public TerminalNode RBRACE() { return getToken(TypedefParser.RBRACE, 0); }
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
		public List<TerminalNode> SEMI() { return getTokens(TypedefParser.SEMI); }
		public TerminalNode SEMI(int i) {
			return getToken(TypedefParser.SEMI, i);
		}
		public TerminalNode QUESTION() { return getToken(TypedefParser.QUESTION, 0); }
		public InlineStructContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inlineStruct; }
	}

	public final InlineStructContext inlineStruct() throws RecognitionException {
		InlineStructContext _localctx = new InlineStructContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_inlineStruct);

				((InlineStructContext)_localctx).s =  std::make_shared<td::Struct>();
			
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(451);
			((InlineStructContext)_localctx).identifier = identifier();
			setState(455);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(452);
				match(WS);
				}
				}
				setState(457);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(458);
			match(COLON);
			setState(462);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(459);
				match(WS);
				}
				}
				setState(464);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(465);
			match(KW_STRUCT);
			setState(469);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(466);
				match(WS);
				}
				}
				setState(471);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(479);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==QUESTION) {
				{
				setState(472);
				((InlineStructContext)_localctx).optional = match(QUESTION);
				setState(476);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(473);
					match(WS);
					}
					}
					setState(478);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(481);
			match(LBRACE);
			setState(485);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,49,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(482);
					match(WS);
					}
					} 
				}
				setState(487);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,49,_ctx);
			}
			setState(505);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE) {
				{
				{
				setState(488);
				((InlineStructContext)_localctx).maybeValuedSymbol = maybeValuedSymbol();

								TryInsertSymbol(_localctx.s, this, ((InlineStructContext)_localctx).maybeValuedSymbol);
							
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
				match(SEMI);
				setState(500);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,51,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(497);
						match(WS);
						}
						} 
					}
					setState(502);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,51,_ctx);
				}
				}
				}
				setState(507);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
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
			match(RBRACE);

					((InlineStructContext)_localctx).maybe_symbol =  std::make_pair(
						td::Identifier::ValueIdentifier(((InlineStructContext)_localctx).identifier->id), _localctx.s);
				
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

	public static class InlineVariantContext extends ParserRuleContext {
		public std::optional<td::SymbolTable::Symbol> maybe_symbol;
		public std::shared_ptr<td::Variant> v;
		public IdentifierContext identifier;
		public Token optional;
		public UnvaluedSymbolContext unvaluedSymbol;
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public TerminalNode KW_VARIANT() { return getToken(TypedefParser.KW_VARIANT, 0); }
		public TerminalNode LBRACE() { return getToken(TypedefParser.LBRACE, 0); }
		public TerminalNode RBRACE() { return getToken(TypedefParser.RBRACE, 0); }
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
		public List<TerminalNode> SEMI() { return getTokens(TypedefParser.SEMI); }
		public TerminalNode SEMI(int i) {
			return getToken(TypedefParser.SEMI, i);
		}
		public TerminalNode QUESTION() { return getToken(TypedefParser.QUESTION, 0); }
		public InlineVariantContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inlineVariant; }
	}

	public final InlineVariantContext inlineVariant() throws RecognitionException {
		InlineVariantContext _localctx = new InlineVariantContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_inlineVariant);

				((InlineVariantContext)_localctx).v =  std::make_shared<td::Variant>();
			
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(517);
			((InlineVariantContext)_localctx).identifier = identifier();
			setState(521);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(518);
				match(WS);
				}
				}
				setState(523);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(524);
			match(COLON);
			setState(528);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(525);
				match(WS);
				}
				}
				setState(530);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(531);
			match(KW_VARIANT);
			setState(535);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,56,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(532);
					match(WS);
					}
					} 
				}
				setState(537);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,56,_ctx);
			}
			setState(545);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WS || _la==QUESTION) {
				{
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
				((InlineVariantContext)_localctx).optional = match(QUESTION);
				}
			}

			setState(547);
			match(LBRACE);
			setState(571);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 85)) & ~0x3f) == 0 && ((1L << (_la - 85)) & ((1L << (NON_KEYWORD_IDENTIFIER - 85)) | (1L << (WS - 85)) | (1L << (RAW_ESCAPE - 85)))) != 0)) {
				{
				{
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
				((InlineVariantContext)_localctx).unvaluedSymbol = unvaluedSymbol();

								TryInsertSymbol(_localctx.v, this, ((InlineVariantContext)_localctx).unvaluedSymbol);
							
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
				match(SEMI);
				setState(566);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,61,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(563);
						match(WS);
						}
						} 
					}
					setState(568);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,61,_ctx);
				}
				}
				}
				setState(573);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(574);
			match(RBRACE);

					((InlineVariantContext)_localctx).maybe_symbol =  std::make_pair(
						td::Identifier::ValueIdentifier(((InlineVariantContext)_localctx).identifier->id), _localctx.v);
				
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

	public static class InlineVectorContext extends ParserRuleContext {
		public std::optional<td::SymbolTable::Symbol> maybe_symbol;
		public IdentifierContext identifier;
		public UnvaluedTypeContext val;
		public UnvaluedTypeContext unvaluedType;
		public Token optional;
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public TerminalNode KW_VECTOR() { return getToken(TypedefParser.KW_VECTOR, 0); }
		public TerminalNode LT() { return getToken(TypedefParser.LT, 0); }
		public TerminalNode GT() { return getToken(TypedefParser.GT, 0); }
		public UnvaluedTypeContext unvaluedType() {
			return getRuleContext(UnvaluedTypeContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public TerminalNode QUESTION() { return getToken(TypedefParser.QUESTION, 0); }
		public InlineVectorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inlineVector; }
	}

	public final InlineVectorContext inlineVector() throws RecognitionException {
		InlineVectorContext _localctx = new InlineVectorContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_inlineVector);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(577);
			((InlineVectorContext)_localctx).identifier = identifier();
			setState(581);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(578);
				match(WS);
				}
				}
				setState(583);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
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
			match(KW_VECTOR);
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
			match(LT);
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
			((InlineVectorContext)_localctx).val = ((InlineVectorContext)_localctx).unvaluedType = unvaluedType();
			setState(609);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(606);
				match(WS);
				}
				}
				setState(611);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(612);
			match(GT);
			setState(620);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,69,_ctx) ) {
			case 1:
				{
				setState(616);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(613);
					match(WS);
					}
					}
					setState(618);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(619);
				((InlineVectorContext)_localctx).optional = match(QUESTION);
				}
				break;
			}

					if (((InlineVectorContext)_localctx).unvaluedType->maybe_val) {
						((InlineVectorContext)_localctx).maybe_symbol =  std::make_pair(
							td::Identifier::ValueIdentifier(((InlineVectorContext)_localctx).identifier->id),
						  std::make_shared<td::Vector>(*((InlineVectorContext)_localctx).val->maybe_val));
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

	public static class InlineMapContext extends ParserRuleContext {
		public std::optional<td::SymbolTable::Symbol> maybe_symbol;
		public IdentifierContext identifier;
		public PrimitiveTypeContext key;
		public UnvaluedTypeContext val;
		public Token optional;
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public TerminalNode KW_MAP() { return getToken(TypedefParser.KW_MAP, 0); }
		public TerminalNode LT() { return getToken(TypedefParser.LT, 0); }
		public TerminalNode COMMA() { return getToken(TypedefParser.COMMA, 0); }
		public TerminalNode GT() { return getToken(TypedefParser.GT, 0); }
		public PrimitiveTypeContext primitiveType() {
			return getRuleContext(PrimitiveTypeContext.class,0);
		}
		public UnvaluedTypeContext unvaluedType() {
			return getRuleContext(UnvaluedTypeContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public TerminalNode QUESTION() { return getToken(TypedefParser.QUESTION, 0); }
		public InlineMapContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inlineMap; }
	}

	public final InlineMapContext inlineMap() throws RecognitionException {
		InlineMapContext _localctx = new InlineMapContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_inlineMap);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(624);
			((InlineMapContext)_localctx).identifier = identifier();
			setState(628);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(625);
				match(WS);
				}
				}
				setState(630);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(631);
			match(COLON);
			setState(635);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(632);
				match(WS);
				}
				}
				setState(637);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(638);
			match(KW_MAP);
			setState(642);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(639);
				match(WS);
				}
				}
				setState(644);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(645);
			match(LT);
			setState(649);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(646);
				match(WS);
				}
				}
				setState(651);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(652);
			((InlineMapContext)_localctx).key = primitiveType();
			setState(656);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(653);
				match(WS);
				}
				}
				setState(658);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(659);
			match(COMMA);
			setState(663);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(660);
				match(WS);
				}
				}
				setState(665);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(666);
			((InlineMapContext)_localctx).val = unvaluedType();
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
			match(GT);
			setState(681);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,78,_ctx) ) {
			case 1:
				{
				setState(677);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(674);
					match(WS);
					}
					}
					setState(679);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(680);
				((InlineMapContext)_localctx).optional = match(QUESTION);
				}
				break;
			}

					// Map Declaration
					if (((InlineMapContext)_localctx).key->maybe_val && ((InlineMapContext)_localctx).val->maybe_val) {
						((InlineMapContext)_localctx).maybe_symbol =  std::make_pair(
							td::Identifier::ValueIdentifier(((InlineMapContext)_localctx).identifier->id),
						  std::make_shared<td::Map>(
								*((InlineMapContext)_localctx).key->maybe_val, *((InlineMapContext)_localctx).val->maybe_val));
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
		enterRule(_localctx, 26, RULE_maybeValuedType);
		int _la;
		try {
			setState(699);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,80,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(685);
				((MaybeValuedTypeContext)_localctx).valuedType = valuedType();
				((MaybeValuedTypeContext)_localctx).maybe_val =  ((MaybeValuedTypeContext)_localctx).valuedType->maybe_val;
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(688);
				match(COLON);
				setState(692);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(689);
					match(WS);
					}
					}
					setState(694);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(695);
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
		public ValuedTemplateStringTypeContext valuedTemplateStringType;
		public ValuedPrimitiveTypeContext valuedPrimitiveType() {
			return getRuleContext(ValuedPrimitiveTypeContext.class,0);
		}
		public ValuedTemplateStringTypeContext valuedTemplateStringType() {
			return getRuleContext(ValuedTemplateStringTypeContext.class,0);
		}
		public ValuedTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valuedType; }
	}

	public final ValuedTypeContext valuedType() throws RecognitionException {
		ValuedTypeContext _localctx = new ValuedTypeContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_valuedType);
		try {
			setState(707);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,81,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(701);
				((ValuedTypeContext)_localctx).valuedPrimitiveType = valuedPrimitiveType();
				((ValuedTypeContext)_localctx).maybe_val =  ((ValuedTypeContext)_localctx).valuedPrimitiveType->maybe_val;
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(704);
				((ValuedTypeContext)_localctx).valuedTemplateStringType = valuedTemplateStringType();
				((ValuedTypeContext)_localctx).maybe_val =  ((ValuedTypeContext)_localctx).valuedTemplateStringType->maybe_val;
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

	public static class UnvaluedTypeContext extends ParserRuleContext {
		public std::optional<td::SymbolTable::Value> maybe_val;
		public PrimitiveTypeContext primitiveType;
		public SymbolReferenceContext symbolReference;
		public PrimitiveTypeContext primitiveType() {
			return getRuleContext(PrimitiveTypeContext.class,0);
		}
		public SymbolReferenceContext symbolReference() {
			return getRuleContext(SymbolReferenceContext.class,0);
		}
		public UnvaluedTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unvaluedType; }
	}

	public final UnvaluedTypeContext unvaluedType() throws RecognitionException {
		UnvaluedTypeContext _localctx = new UnvaluedTypeContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_unvaluedType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(715);
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
				setState(709);
				((UnvaluedTypeContext)_localctx).primitiveType = primitiveType();
				((UnvaluedTypeContext)_localctx).maybe_val =  ((UnvaluedTypeContext)_localctx).primitiveType->maybe_val;
				}
				break;
			case NON_KEYWORD_IDENTIFIER:
			case RAW_ESCAPE:
				{
				setState(712);
				((UnvaluedTypeContext)_localctx).symbolReference = symbolReference();
				((UnvaluedTypeContext)_localctx).maybe_val =  ((UnvaluedTypeContext)_localctx).symbolReference->maybe_symref; 
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

	public static class SymbolReferenceContext extends ParserRuleContext {
		public std::optional<td::SymbolRef> maybe_symref;
		public IdentifierContext identifier;
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public SymbolReferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_symbolReference; }
	}

	public final SymbolReferenceContext symbolReference() throws RecognitionException {
		SymbolReferenceContext _localctx = new SymbolReferenceContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_symbolReference);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(717);
			((SymbolReferenceContext)_localctx).identifier = identifier();
			((SymbolReferenceContext)_localctx).maybe_symref =  td::SymbolRef(((SymbolReferenceContext)_localctx).identifier->id); 
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
		enterRule(_localctx, 34, RULE_primitiveType);
		try {
			setState(746);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case KW_BOOL:
				enterOuterAlt(_localctx, 1);
				{
				setState(720);
				match(KW_BOOL);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<bool>(); 
				}
				break;
			case KW_CHAR:
				enterOuterAlt(_localctx, 2);
				{
				setState(722);
				match(KW_CHAR);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<char32_t>(); 
				}
				break;
			case KW_STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(724);
				match(KW_STRING);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<std::string>(); 
				}
				break;
			case KW_F32:
				enterOuterAlt(_localctx, 4);
				{
				setState(726);
				match(KW_F32);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<float>(); 
				}
				break;
			case KW_F64:
				enterOuterAlt(_localctx, 5);
				{
				setState(728);
				match(KW_F64);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<double>(); 
				}
				break;
			case KW_U8:
				enterOuterAlt(_localctx, 6);
				{
				setState(730);
				match(KW_U8);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<uint8_t>(); 
				}
				break;
			case KW_U16:
				enterOuterAlt(_localctx, 7);
				{
				setState(732);
				match(KW_U16);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<uint16_t>(); 
				}
				break;
			case KW_U32:
				enterOuterAlt(_localctx, 8);
				{
				setState(734);
				match(KW_U32);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<uint32_t>(); 
				}
				break;
			case KW_U64:
				enterOuterAlt(_localctx, 9);
				{
				setState(736);
				match(KW_U64);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<uint64_t>(); 
				}
				break;
			case KW_I8:
				enterOuterAlt(_localctx, 10);
				{
				setState(738);
				match(KW_I8);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<int8_t>(); 
				}
				break;
			case KW_I16:
				enterOuterAlt(_localctx, 11);
				{
				setState(740);
				match(KW_I16);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<int16_t>(); 
				}
				break;
			case KW_I32:
				enterOuterAlt(_localctx, 12);
				{
				setState(742);
				match(KW_I32);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<int32_t>(); 
				}
				break;
			case KW_I64:
				enterOuterAlt(_localctx, 13);
				{
				setState(744);
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

	public static class ValuedTemplateStringTypeContext extends ParserRuleContext {
		public std::optional<td::SymbolTable::Value> maybe_val;
		public std::shared_ptr<td::TmplStr> s;
		public UnvaluedSymbolContext unvaluedSymbol;
		public StringLiteralContext stringLiteral;
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public TerminalNode KW_TEMPLATESTRING() { return getToken(TypedefParser.KW_TEMPLATESTRING, 0); }
		public TerminalNode LT() { return getToken(TypedefParser.LT, 0); }
		public TerminalNode GT() { return getToken(TypedefParser.GT, 0); }
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public StringLiteralContext stringLiteral() {
			return getRuleContext(StringLiteralContext.class,0);
		}
		public List<UnvaluedSymbolContext> unvaluedSymbol() {
			return getRuleContexts(UnvaluedSymbolContext.class);
		}
		public UnvaluedSymbolContext unvaluedSymbol(int i) {
			return getRuleContext(UnvaluedSymbolContext.class,i);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public List<TerminalNode> COMMA() { return getTokens(TypedefParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(TypedefParser.COMMA, i);
		}
		public ValuedTemplateStringTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valuedTemplateStringType; }
	}

	public final ValuedTemplateStringTypeContext valuedTemplateStringType() throws RecognitionException {
		ValuedTemplateStringTypeContext _localctx = new ValuedTemplateStringTypeContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_valuedTemplateStringType);

				((ValuedTemplateStringTypeContext)_localctx).s =  std::make_shared<td::TmplStr>();
			
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(748);
			match(COLON);
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
			match(KW_TEMPLATESTRING);
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
			match(LT);
			setState(766);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(763);
				match(WS);
				}
				}
				setState(768);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			{
			setState(769);
			((ValuedTemplateStringTypeContext)_localctx).unvaluedSymbol = unvaluedSymbol();

							TryInsertArgSymbol(_localctx.s, this, ((ValuedTemplateStringTypeContext)_localctx).unvaluedSymbol);
						
			setState(789);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,89,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(774);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==WS) {
						{
						{
						setState(771);
						match(WS);
						}
						}
						setState(776);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(777);
					match(COMMA);
					setState(781);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==WS) {
						{
						{
						setState(778);
						match(WS);
						}
						}
						setState(783);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(784);
					((ValuedTemplateStringTypeContext)_localctx).unvaluedSymbol = unvaluedSymbol();

									TryInsertArgSymbol(_localctx.s, this, ((ValuedTemplateStringTypeContext)_localctx).unvaluedSymbol);
								
					}
					} 
				}
				setState(791);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,89,_ctx);
			}
			}
			setState(795);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(792);
				match(WS);
				}
				}
				setState(797);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(798);
			match(GT);
			setState(802);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(799);
				match(WS);
				}
				}
				setState(804);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(805);
			match(EQ);
			setState(809);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(806);
				match(WS);
				}
				}
				setState(811);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(812);
			((ValuedTemplateStringTypeContext)_localctx).stringLiteral = stringLiteral();

				  _localctx.s->str = ((ValuedTemplateStringTypeContext)_localctx).stringLiteral->maybe_val;
					((ValuedTemplateStringTypeContext)_localctx).maybe_val =  _localctx.s;
				
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
		enterRule(_localctx, 38, RULE_valuedPrimitiveType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(854);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,93,_ctx) ) {
			case 1:
				{
				setState(815);
				((ValuedPrimitiveTypeContext)_localctx).valuedBoolFragment = valuedBoolFragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedBoolFragment->literal->maybe_val;
				}
				break;
			case 2:
				{
				setState(818);
				((ValuedPrimitiveTypeContext)_localctx).valuedCharFragment = valuedCharFragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedCharFragment->literal->maybe_val;
				}
				break;
			case 3:
				{
				setState(821);
				((ValuedPrimitiveTypeContext)_localctx).valuedStringFragment = valuedStringFragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedStringFragment->literal->maybe_val;
				}
				break;
			case 4:
				{
				setState(824);
				((ValuedPrimitiveTypeContext)_localctx).valuedF32Fragment = valuedF32Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedF32Fragment->literal->maybe_val;
				}
				break;
			case 5:
				{
				setState(827);
				((ValuedPrimitiveTypeContext)_localctx).valuedF64Fragment = valuedF64Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedF64Fragment->literal->maybe_val;
				}
				break;
			case 6:
				{
				setState(830);
				((ValuedPrimitiveTypeContext)_localctx).valuedU8Fragment = valuedU8Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU8Fragment->literal->maybe_val;
				}
				break;
			case 7:
				{
				setState(833);
				((ValuedPrimitiveTypeContext)_localctx).valuedU16Fragment = valuedU16Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU16Fragment->literal->maybe_val;
				}
				break;
			case 8:
				{
				setState(836);
				((ValuedPrimitiveTypeContext)_localctx).valuedU32Fragment = valuedU32Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU32Fragment->literal->maybe_val;
				}
				break;
			case 9:
				{
				setState(839);
				((ValuedPrimitiveTypeContext)_localctx).valuedU64Fragment = valuedU64Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU64Fragment->literal->maybe_val;
				}
				break;
			case 10:
				{
				setState(842);
				((ValuedPrimitiveTypeContext)_localctx).valuedI8Fragment = valuedI8Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedI8Fragment->literal->maybe_val;
				}
				break;
			case 11:
				{
				setState(845);
				((ValuedPrimitiveTypeContext)_localctx).valuedI16Fragment = valuedI16Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedI16Fragment->literal->maybe_val;
				}
				break;
			case 12:
				{
				setState(848);
				((ValuedPrimitiveTypeContext)_localctx).valuedI32Fragment = valuedI32Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedI32Fragment->literal->maybe_val;
				}
				break;
			case 13:
				{
				setState(851);
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
		enterRule(_localctx, 40, RULE_valuedBoolFragment);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(864);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(856);
				match(COLON);
				setState(860);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(857);
					match(WS);
					}
					}
					setState(862);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(863);
				match(KW_BOOL);
				}
			}

			setState(869);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(866);
				match(WS);
				}
				}
				setState(871);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(872);
			match(EQ);
			setState(876);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(873);
				match(WS);
				}
				}
				setState(878);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(879);
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
		enterRule(_localctx, 42, RULE_valuedCharFragment);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(889);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(881);
				match(COLON);
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
				match(KW_CHAR);
				}
			}

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
			match(EQ);
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
		enterRule(_localctx, 44, RULE_valuedStringFragment);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(914);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(906);
				match(COLON);
				setState(910);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(907);
					match(WS);
					}
					}
					setState(912);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(913);
				match(KW_STRING);
				}
			}

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
			match(EQ);
			setState(926);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(923);
				match(WS);
				}
				}
				setState(928);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(929);
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
		enterRule(_localctx, 46, RULE_valuedF32Fragment);
		int _la;
		try {
			setState(967);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(931);
				match(COLON);
				setState(935);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(932);
					match(WS);
					}
					}
					setState(937);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(938);
				match(KW_F32);
				setState(942);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(939);
					match(WS);
					}
					}
					setState(944);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(945);
				match(EQ);
				setState(949);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(946);
					match(WS);
					}
					}
					setState(951);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(952);
				((ValuedF32FragmentContext)_localctx).literal = f32Literal();
				setState(954);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F32) {
					{
					setState(953);
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
				setState(956);
				match(EQ);
				setState(960);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(957);
					match(WS);
					}
					}
					setState(962);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(963);
				((ValuedF32FragmentContext)_localctx).literal = f32Literal();
				setState(965);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F32) {
					{
					setState(964);
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
		enterRule(_localctx, 48, RULE_valuedF64Fragment);
		int _la;
		try {
			setState(1004);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(969);
				match(COLON);
				setState(973);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(970);
					match(WS);
					}
					}
					setState(975);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(976);
				match(KW_F64);
				setState(980);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(977);
					match(WS);
					}
					}
					setState(982);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(983);
				match(EQ);
				setState(987);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(984);
					match(WS);
					}
					}
					setState(989);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(990);
				((ValuedF64FragmentContext)_localctx).literal = f64Literal();
				setState(992);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F64) {
					{
					setState(991);
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
				setState(994);
				match(EQ);
				setState(998);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(995);
					match(WS);
					}
					}
					setState(1000);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1001);
				((ValuedF64FragmentContext)_localctx).literal = f64Literal();
				setState(1002);
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
		enterRule(_localctx, 50, RULE_valuedU8Fragment);
		int _la;
		try {
			setState(1041);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(1006);
				match(COLON);
				setState(1010);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1007);
					match(WS);
					}
					}
					setState(1012);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1013);
				match(KW_U8);
				setState(1017);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1014);
					match(WS);
					}
					}
					setState(1019);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1020);
				match(EQ);
				setState(1024);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1021);
					match(WS);
					}
					}
					setState(1026);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1027);
				((ValuedU8FragmentContext)_localctx).literal = u8Literal();
				setState(1029);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U8) {
					{
					setState(1028);
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
				setState(1031);
				match(EQ);
				setState(1035);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1032);
					match(WS);
					}
					}
					setState(1037);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1038);
				((ValuedU8FragmentContext)_localctx).literal = u8Literal();
				setState(1039);
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
		enterRule(_localctx, 52, RULE_valuedU16Fragment);
		int _la;
		try {
			setState(1078);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(1043);
				match(COLON);
				setState(1047);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1044);
					match(WS);
					}
					}
					setState(1049);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1050);
				match(KW_U16);
				setState(1054);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1051);
					match(WS);
					}
					}
					setState(1056);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1057);
				match(EQ);
				setState(1061);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1058);
					match(WS);
					}
					}
					setState(1063);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1064);
				((ValuedU16FragmentContext)_localctx).literal = u16Literal();
				setState(1066);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U16) {
					{
					setState(1065);
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
				setState(1068);
				match(EQ);
				setState(1072);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1069);
					match(WS);
					}
					}
					setState(1074);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1075);
				((ValuedU16FragmentContext)_localctx).literal = u16Literal();
				setState(1076);
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
		enterRule(_localctx, 54, RULE_valuedU32Fragment);
		int _la;
		try {
			setState(1115);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(1080);
				match(COLON);
				setState(1084);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1081);
					match(WS);
					}
					}
					setState(1086);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1087);
				match(KW_U32);
				setState(1091);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1088);
					match(WS);
					}
					}
					setState(1093);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1094);
				match(EQ);
				setState(1098);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1095);
					match(WS);
					}
					}
					setState(1100);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1101);
				((ValuedU32FragmentContext)_localctx).literal = u32Literal();
				setState(1103);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U32) {
					{
					setState(1102);
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
				setState(1105);
				match(EQ);
				setState(1109);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1106);
					match(WS);
					}
					}
					setState(1111);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1112);
				((ValuedU32FragmentContext)_localctx).literal = u32Literal();
				setState(1113);
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
		enterRule(_localctx, 56, RULE_valuedU64Fragment);
		int _la;
		try {
			setState(1152);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(1117);
				match(COLON);
				setState(1121);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1118);
					match(WS);
					}
					}
					setState(1123);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1124);
				match(KW_U64);
				setState(1128);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1125);
					match(WS);
					}
					}
					setState(1130);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1131);
				match(EQ);
				setState(1135);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1132);
					match(WS);
					}
					}
					setState(1137);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1138);
				((ValuedU64FragmentContext)_localctx).literal = u64Literal();
				setState(1140);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U64) {
					{
					setState(1139);
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
				setState(1142);
				match(EQ);
				setState(1146);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1143);
					match(WS);
					}
					}
					setState(1148);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1149);
				((ValuedU64FragmentContext)_localctx).literal = u64Literal();
				setState(1150);
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
		enterRule(_localctx, 58, RULE_valuedI8Fragment);
		int _la;
		try {
			setState(1189);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(1154);
				match(COLON);
				setState(1158);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1155);
					match(WS);
					}
					}
					setState(1160);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1161);
				match(KW_I8);
				setState(1165);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1162);
					match(WS);
					}
					}
					setState(1167);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1168);
				match(EQ);
				setState(1172);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1169);
					match(WS);
					}
					}
					setState(1174);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1175);
				((ValuedI8FragmentContext)_localctx).literal = i8Literal();
				setState(1177);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I8) {
					{
					setState(1176);
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
				setState(1179);
				match(EQ);
				setState(1183);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1180);
					match(WS);
					}
					}
					setState(1185);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1186);
				((ValuedI8FragmentContext)_localctx).literal = i8Literal();
				setState(1187);
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
		enterRule(_localctx, 60, RULE_valuedI16Fragment);
		int _la;
		try {
			setState(1226);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(1191);
				match(COLON);
				setState(1195);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1192);
					match(WS);
					}
					}
					setState(1197);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1198);
				match(KW_I16);
				setState(1202);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1199);
					match(WS);
					}
					}
					setState(1204);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1205);
				match(EQ);
				setState(1209);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1206);
					match(WS);
					}
					}
					setState(1211);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1212);
				((ValuedI16FragmentContext)_localctx).literal = i16Literal();
				setState(1214);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I16) {
					{
					setState(1213);
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
				setState(1216);
				match(EQ);
				setState(1220);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1217);
					match(WS);
					}
					}
					setState(1222);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1223);
				((ValuedI16FragmentContext)_localctx).literal = i16Literal();
				setState(1224);
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
		enterRule(_localctx, 62, RULE_valuedI32Fragment);
		int _la;
		try {
			setState(1264);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(1228);
				match(COLON);
				setState(1232);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1229);
					match(WS);
					}
					}
					setState(1234);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1235);
				match(KW_I32);
				setState(1239);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1236);
					match(WS);
					}
					}
					setState(1241);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1242);
				match(EQ);
				setState(1246);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1243);
					match(WS);
					}
					}
					setState(1248);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1249);
				((ValuedI32FragmentContext)_localctx).literal = i32Literal();
				setState(1251);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I32) {
					{
					setState(1250);
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
				setState(1253);
				match(EQ);
				setState(1257);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1254);
					match(WS);
					}
					}
					setState(1259);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1260);
				((ValuedI32FragmentContext)_localctx).literal = i32Literal();
				setState(1262);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I32) {
					{
					setState(1261);
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
		enterRule(_localctx, 64, RULE_valuedI64Fragment);
		int _la;
		try {
			setState(1301);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(1266);
				match(COLON);
				setState(1270);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1267);
					match(WS);
					}
					}
					setState(1272);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1273);
				match(KW_I64);
				setState(1277);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1274);
					match(WS);
					}
					}
					setState(1279);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1280);
				match(EQ);
				setState(1284);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1281);
					match(WS);
					}
					}
					setState(1286);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1287);
				((ValuedI64FragmentContext)_localctx).literal = i64Literal();
				setState(1289);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I64) {
					{
					setState(1288);
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
				setState(1291);
				match(EQ);
				setState(1295);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1292);
					match(WS);
					}
					}
					setState(1297);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1298);
				((ValuedI64FragmentContext)_localctx).literal = i64Literal();
				setState(1299);
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
		public std::shared_ptr<std::string> version;
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
		enterRule(_localctx, 66, RULE_typedefVersionDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1303);
			match(KW_TYPEDEF);
			setState(1307);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(1304);
				match(WS);
				}
				}
				setState(1309);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1310);
			match(EQ);
			setState(1314);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(1311);
				match(WS);
				}
				}
				setState(1316);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1317);
			identifier();
			setState(1321);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(1318);
				match(WS);
				}
				}
				setState(1323);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1324);
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
		public std::shared_ptr<td::SymbolPath> path;
		public TerminalNode KW_MODULE() { return getToken(TypedefParser.KW_MODULE, 0); }
		public SimplePathContext simplePath() {
			return getRuleContext(SimplePathContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(TypedefParser.SEMI, 0); }
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public ModuleDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_moduleDeclaration; }
	}

	public final ModuleDeclarationContext moduleDeclaration() throws RecognitionException {
		ModuleDeclarationContext _localctx = new ModuleDeclarationContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_moduleDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1326);
			match(KW_MODULE);
			setState(1328); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(1327);
				match(WS);
				}
				}
				setState(1330); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==WS );
			setState(1332);
			simplePath();
			setState(1336);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(1333);
				match(WS);
				}
				}
				setState(1338);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1339);
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
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public UseDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_useDeclaration; }
	}

	public final UseDeclarationContext useDeclaration() throws RecognitionException {
		UseDeclarationContext _localctx = new UseDeclarationContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_useDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1341);
			match(KW_USE);
			setState(1343); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(1342);
				match(WS);
				}
				}
				setState(1345); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==WS );
			setState(1347);
			useTree();
			setState(1351);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(1348);
				match(WS);
				}
				}
				setState(1353);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1354);
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
		enterRule(_localctx, 72, RULE_useTree);
		int _la;
		try {
			int _alt;
			setState(1385);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,182,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1360);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE || _la==PATHSEP) {
					{
					setState(1357);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,175,_ctx) ) {
					case 1:
						{
						setState(1356);
						simplePath();
						}
						break;
					}
					setState(1359);
					match(PATHSEP);
					}
				}

				setState(1378);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case STAR:
					{
					setState(1362);
					match(STAR);
					}
					break;
				case LBRACE:
					{
					setState(1363);
					match(LBRACE);
					setState(1375);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (((((_la - 85)) & ~0x3f) == 0 && ((1L << (_la - 85)) & ((1L << (NON_KEYWORD_IDENTIFIER - 85)) | (1L << (RAW_ESCAPE - 85)) | (1L << (STAR - 85)))) != 0) || _la==PATHSEP || _la==LBRACE) {
						{
						setState(1364);
						useTree();
						setState(1369);
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,177,_ctx);
						while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
							if ( _alt==1 ) {
								{
								{
								setState(1365);
								match(COMMA);
								setState(1366);
								useTree();
								}
								} 
							}
							setState(1371);
							_errHandler.sync(this);
							_alt = getInterpreter().adaptivePredict(_input,177,_ctx);
						}
						setState(1373);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(1372);
							match(COMMA);
							}
						}

						}
					}

					setState(1377);
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
				setState(1380);
				simplePath();
				setState(1383);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_AS) {
					{
					setState(1381);
					match(KW_AS);
					setState(1382);
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
		public std::shared_ptr<td::SymbolPath> path;
		public Token leading_pathsep;
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
		enterRule(_localctx, 74, RULE_simplePath);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1388);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PATHSEP) {
				{
				setState(1387);
				((SimplePathContext)_localctx).leading_pathsep = match(PATHSEP);
				}
			}

			setState(1390);
			identifier();
			setState(1395);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,184,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1391);
					match(PATHSEP);
					setState(1392);
					identifier();
					}
					} 
				}
				setState(1397);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,184,_ctx);
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
		enterRule(_localctx, 76, RULE_boolLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1398);
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
		enterRule(_localctx, 78, RULE_charLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1400);
			match(CHAR_LITERAL);
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
		enterRule(_localctx, 80, RULE_f32Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1402);
			match(FLOAT_LITERAL);
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
		enterRule(_localctx, 82, RULE_f64Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1404);
			match(FLOAT_LITERAL);
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
		enterRule(_localctx, 84, RULE_u8Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1416);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1407);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1406);
					match(MINUS);
					}
				}

				setState(1409);
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
				setState(1410);
				match(HEX_PREFIX);
				setState(1411);
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
				setState(1412);
				match(OCT_PREFIX);
				setState(1413);
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
				setState(1414);
				match(BIN_PREFIX);
				setState(1415);
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
		enterRule(_localctx, 86, RULE_u16Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1428);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1419);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1418);
					match(MINUS);
					}
				}

				setState(1421);
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
				setState(1422);
				match(HEX_PREFIX);
				setState(1423);
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
				setState(1424);
				match(OCT_PREFIX);
				setState(1425);
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
				setState(1426);
				match(BIN_PREFIX);
				setState(1427);
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
		enterRule(_localctx, 88, RULE_u32Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1440);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1431);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1430);
					match(MINUS);
					}
				}

				setState(1433);
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
				setState(1434);
				match(HEX_PREFIX);
				setState(1435);
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
				setState(1436);
				match(OCT_PREFIX);
				setState(1437);
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
				setState(1438);
				match(BIN_PREFIX);
				setState(1439);
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
		enterRule(_localctx, 90, RULE_u64Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1452);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1443);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1442);
					match(MINUS);
					}
				}

				setState(1445);
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
				setState(1446);
				match(HEX_PREFIX);
				setState(1447);
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
				setState(1448);
				match(OCT_PREFIX);
				setState(1449);
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
				setState(1450);
				match(BIN_PREFIX);
				setState(1451);
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
		enterRule(_localctx, 92, RULE_i8Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1464);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1455);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1454);
					match(MINUS);
					}
				}

				setState(1457);
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
				setState(1458);
				match(HEX_PREFIX);
				setState(1459);
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
				setState(1460);
				match(OCT_PREFIX);
				setState(1461);
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
				setState(1462);
				match(BIN_PREFIX);
				setState(1463);
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
		enterRule(_localctx, 94, RULE_i16Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1476);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1467);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1466);
					match(MINUS);
					}
				}

				setState(1469);
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
				setState(1470);
				match(HEX_PREFIX);
				setState(1471);
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
				setState(1472);
				match(OCT_PREFIX);
				setState(1473);
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
				setState(1474);
				match(BIN_PREFIX);
				setState(1475);
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
		enterRule(_localctx, 96, RULE_i32Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1488);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1479);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1478);
					match(MINUS);
					}
				}

				setState(1481);
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
				setState(1482);
				match(HEX_PREFIX);
				setState(1483);
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
				setState(1484);
				match(OCT_PREFIX);
				setState(1485);
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
				setState(1486);
				match(BIN_PREFIX);
				setState(1487);
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
		enterRule(_localctx, 98, RULE_i64Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1500);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1491);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1490);
					match(MINUS);
					}
				}

				setState(1493);
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
				setState(1494);
				match(HEX_PREFIX);
				setState(1495);
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
				setState(1496);
				match(OCT_PREFIX);
				setState(1497);
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
				setState(1498);
				match(BIN_PREFIX);
				setState(1499);
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
		public std::shared_ptr<std::string> str;
		public TerminalNode STRING_LITERAL() { return getToken(TypedefParser.STRING_LITERAL, 0); }
		public TerminalNode RAW_STRING_LITERAL() { return getToken(TypedefParser.RAW_STRING_LITERAL, 0); }
		public StringLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stringLiteral; }
	}

	public final StringLiteralContext stringLiteral() throws RecognitionException {
		StringLiteralContext _localctx = new StringLiteralContext(_ctx, getState());
		enterRule(_localctx, 100, RULE_stringLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1502);
			_la = _input.LA(1);
			if ( !(_la==STRING_LITERAL || _la==RAW_STRING_LITERAL) ) {
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

	public static class IdentifierContext extends ParserRuleContext {
		public std::shared_ptr<std::string> id;
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
		enterRule(_localctx, 102, RULE_identifier);
		try {
			setState(1507);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NON_KEYWORD_IDENTIFIER:
				enterOuterAlt(_localctx, 1);
				{
				setState(1504);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(1505);
				match(RAW_ESCAPE);
				setState(1506);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
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
		enterRule(_localctx, 104, RULE_keyword);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1509);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << KW_AS) | (1L << KW_ENUM) | (1L << KW_FALSE) | (1L << KW_FN) | (1L << KW_IMPL) | (1L << KW_MODULE) | (1L << KW_STRUCT) | (1L << KW_TRUE) | (1L << KW_TYPE) | (1L << KW_TYPEDEF) | (1L << KW_USE) | (1L << KW_VARIANT) | (1L << KW_VECTOR) | (1L << KW_MAP) | (1L << KW_AND) | (1L << KW_IN) | (1L << KW_LET) | (1L << KW_NOT) | (1L << KW_OR) | (1L << KW_SIZEOF) | (1L << KW_THIS) | (1L << KW_TRAIT) | (1L << KW_WHERE) | (1L << KW_XOR) | (1L << KW_BREAK) | (1L << KW_CONTINUE) | (1L << KW_DEFAULT) | (1L << KW_DO) | (1L << KW_ELSE) | (1L << KW_FOR) | (1L << KW_GOTO) | (1L << KW_IF) | (1L << KW_LOOP) | (1L << KW_MATCH) | (1L << KW_MOVE) | (1L << KW_RETURN) | (1L << KW_TRY) | (1L << KW_WHILE) | (1L << KW_YIELD) | (1L << KW_ABSTRACT) | (1L << KW_AUTO) | (1L << KW_CONST) | (1L << KW_DOUBLE) | (1L << KW_EXTERN) | (1L << KW_FINAL) | (1L << KW_FLOAT) | (1L << KW_INT) | (1L << KW_LONG) | (1L << KW_MACRO) | (1L << KW_MUT) | (1L << KW_OVERRIDE) | (1L << KW_PRIVATE) | (1L << KW_PUB) | (1L << KW_REF) | (1L << KW_SELFTYPE) | (1L << KW_SELFVALUE) | (1L << KW_SIGNED) | (1L << KW_STATIC) | (1L << KW_SUPER) | (1L << KW_SWITCH))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (KW_TYPEOF - 64)) | (1L << (KW_UNION - 64)) | (1L << (KW_UNSAFE - 64)) | (1L << (KW_UNSIGNED - 64)) | (1L << (KW_UNSIZED - 64)) | (1L << (KW_VIRTUAL - 64)) | (1L << (KW_VOID - 64)) | (1L << (KW_VOLATILE - 64)))) != 0)) ) {
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00a3\u05ea\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\3\2\7\2n\n\2\f\2\16\2q\13\2\3\2\3\2\3\2\7\2v\n"+
		"\2\f\2\16\2y\13\2\3\2\3\2\3\2\5\2~\n\2\3\2\7\2\u0081\n\2\f\2\16\2\u0084"+
		"\13\2\3\2\7\2\u0087\n\2\f\2\16\2\u008a\13\2\3\2\7\2\u008d\n\2\f\2\16\2"+
		"\u0090\13\2\3\2\3\2\3\2\7\2\u0095\n\2\f\2\16\2\u0098\13\2\3\2\7\2\u009b"+
		"\n\2\f\2\16\2\u009e\13\2\3\2\3\2\3\3\3\3\7\3\u00a4\n\3\f\3\16\3\u00a7"+
		"\13\3\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\5\4\u00b7"+
		"\n\4\3\4\7\4\u00ba\n\4\f\4\16\4\u00bd\13\4\3\4\3\4\3\5\3\5\7\5\u00c3\n"+
		"\5\f\5\16\5\u00c6\13\5\3\5\3\5\7\5\u00ca\n\5\f\5\16\5\u00cd\13\5\3\5\3"+
		"\5\7\5\u00d1\n\5\f\5\16\5\u00d4\13\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3"+
		"\5\3\5\3\5\3\5\3\5\3\5\3\5\5\5\u00e5\n\5\3\5\7\5\u00e8\n\5\f\5\16\5\u00eb"+
		"\13\5\3\5\3\5\7\5\u00ef\n\5\f\5\16\5\u00f2\13\5\7\5\u00f4\n\5\f\5\16\5"+
		"\u00f7\13\5\3\5\7\5\u00fa\n\5\f\5\16\5\u00fd\13\5\3\5\3\5\3\5\3\6\3\6"+
		"\7\6\u0104\n\6\f\6\16\6\u0107\13\6\3\6\3\6\7\6\u010b\n\6\f\6\16\6\u010e"+
		"\13\6\3\6\3\6\7\6\u0112\n\6\f\6\16\6\u0115\13\6\3\6\3\6\3\6\3\6\3\6\3"+
		"\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\5\6\u0126\n\6\3\6\7\6\u0129\n\6"+
		"\f\6\16\6\u012c\13\6\3\6\3\6\7\6\u0130\n\6\f\6\16\6\u0133\13\6\7\6\u0135"+
		"\n\6\f\6\16\6\u0138\13\6\3\6\3\6\3\6\3\7\3\7\7\7\u013f\n\7\f\7\16\7\u0142"+
		"\13\7\3\7\3\7\7\7\u0146\n\7\f\7\16\7\u0149\13\7\3\7\3\7\7\7\u014d\n\7"+
		"\f\7\16\7\u0150\13\7\3\7\3\7\7\7\u0154\n\7\f\7\16\7\u0157\13\7\3\7\3\7"+
		"\3\7\3\b\3\b\7\b\u015e\n\b\f\b\16\b\u0161\13\b\3\b\3\b\7\b\u0165\n\b\f"+
		"\b\16\b\u0168\13\b\3\b\3\b\7\b\u016c\n\b\f\b\16\b\u016f\13\b\3\b\3\b\7"+
		"\b\u0173\n\b\f\b\16\b\u0176\13\b\3\b\3\b\7\b\u017a\n\b\f\b\16\b\u017d"+
		"\13\b\3\b\3\b\7\b\u0181\n\b\f\b\16\b\u0184\13\b\3\b\3\b\3\b\3\t\3\t\7"+
		"\t\u018b\n\t\f\t\16\t\u018e\13\t\3\t\3\t\7\t\u0192\n\t\f\t\16\t\u0195"+
		"\13\t\3\t\3\t\3\t\3\t\3\t\5\t\u019c\n\t\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3"+
		"\n\3\n\3\n\3\n\3\n\3\n\3\n\7\n\u01ac\n\n\f\n\16\n\u01af\13\n\3\n\3\n\7"+
		"\n\u01b3\n\n\f\n\16\n\u01b6\13\n\3\n\3\n\7\n\u01ba\n\n\f\n\16\n\u01bd"+
		"\13\n\3\n\5\n\u01c0\n\n\3\n\3\n\5\n\u01c4\n\n\3\13\3\13\7\13\u01c8\n\13"+
		"\f\13\16\13\u01cb\13\13\3\13\3\13\7\13\u01cf\n\13\f\13\16\13\u01d2\13"+
		"\13\3\13\3\13\7\13\u01d6\n\13\f\13\16\13\u01d9\13\13\3\13\3\13\7\13\u01dd"+
		"\n\13\f\13\16\13\u01e0\13\13\5\13\u01e2\n\13\3\13\3\13\7\13\u01e6\n\13"+
		"\f\13\16\13\u01e9\13\13\3\13\3\13\3\13\7\13\u01ee\n\13\f\13\16\13\u01f1"+
		"\13\13\3\13\3\13\7\13\u01f5\n\13\f\13\16\13\u01f8\13\13\7\13\u01fa\n\13"+
		"\f\13\16\13\u01fd\13\13\3\13\7\13\u0200\n\13\f\13\16\13\u0203\13\13\3"+
		"\13\3\13\3\13\3\f\3\f\7\f\u020a\n\f\f\f\16\f\u020d\13\f\3\f\3\f\7\f\u0211"+
		"\n\f\f\f\16\f\u0214\13\f\3\f\3\f\7\f\u0218\n\f\f\f\16\f\u021b\13\f\3\f"+
		"\7\f\u021e\n\f\f\f\16\f\u0221\13\f\3\f\5\f\u0224\n\f\3\f\3\f\7\f\u0228"+
		"\n\f\f\f\16\f\u022b\13\f\3\f\3\f\3\f\7\f\u0230\n\f\f\f\16\f\u0233\13\f"+
		"\3\f\3\f\7\f\u0237\n\f\f\f\16\f\u023a\13\f\7\f\u023c\n\f\f\f\16\f\u023f"+
		"\13\f\3\f\3\f\3\f\3\r\3\r\7\r\u0246\n\r\f\r\16\r\u0249\13\r\3\r\3\r\7"+
		"\r\u024d\n\r\f\r\16\r\u0250\13\r\3\r\3\r\7\r\u0254\n\r\f\r\16\r\u0257"+
		"\13\r\3\r\3\r\7\r\u025b\n\r\f\r\16\r\u025e\13\r\3\r\3\r\7\r\u0262\n\r"+
		"\f\r\16\r\u0265\13\r\3\r\3\r\7\r\u0269\n\r\f\r\16\r\u026c\13\r\3\r\5\r"+
		"\u026f\n\r\3\r\3\r\3\16\3\16\7\16\u0275\n\16\f\16\16\16\u0278\13\16\3"+
		"\16\3\16\7\16\u027c\n\16\f\16\16\16\u027f\13\16\3\16\3\16\7\16\u0283\n"+
		"\16\f\16\16\16\u0286\13\16\3\16\3\16\7\16\u028a\n\16\f\16\16\16\u028d"+
		"\13\16\3\16\3\16\7\16\u0291\n\16\f\16\16\16\u0294\13\16\3\16\3\16\7\16"+
		"\u0298\n\16\f\16\16\16\u029b\13\16\3\16\3\16\7\16\u029f\n\16\f\16\16\16"+
		"\u02a2\13\16\3\16\3\16\7\16\u02a6\n\16\f\16\16\16\u02a9\13\16\3\16\5\16"+
		"\u02ac\n\16\3\16\3\16\3\17\3\17\3\17\3\17\3\17\7\17\u02b5\n\17\f\17\16"+
		"\17\u02b8\13\17\3\17\3\17\3\17\3\17\5\17\u02be\n\17\3\20\3\20\3\20\3\20"+
		"\3\20\3\20\5\20\u02c6\n\20\3\21\3\21\3\21\3\21\3\21\3\21\5\21\u02ce\n"+
		"\21\3\22\3\22\3\22\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3"+
		"\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3"+
		"\23\3\23\5\23\u02ed\n\23\3\24\3\24\7\24\u02f1\n\24\f\24\16\24\u02f4\13"+
		"\24\3\24\3\24\7\24\u02f8\n\24\f\24\16\24\u02fb\13\24\3\24\3\24\7\24\u02ff"+
		"\n\24\f\24\16\24\u0302\13\24\3\24\3\24\3\24\7\24\u0307\n\24\f\24\16\24"+
		"\u030a\13\24\3\24\3\24\7\24\u030e\n\24\f\24\16\24\u0311\13\24\3\24\3\24"+
		"\3\24\7\24\u0316\n\24\f\24\16\24\u0319\13\24\3\24\7\24\u031c\n\24\f\24"+
		"\16\24\u031f\13\24\3\24\3\24\7\24\u0323\n\24\f\24\16\24\u0326\13\24\3"+
		"\24\3\24\7\24\u032a\n\24\f\24\16\24\u032d\13\24\3\24\3\24\3\24\3\25\3"+
		"\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3"+
		"\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3"+
		"\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\5\25\u0359\n\25\3\26"+
		"\3\26\7\26\u035d\n\26\f\26\16\26\u0360\13\26\3\26\5\26\u0363\n\26\3\26"+
		"\7\26\u0366\n\26\f\26\16\26\u0369\13\26\3\26\3\26\7\26\u036d\n\26\f\26"+
		"\16\26\u0370\13\26\3\26\3\26\3\27\3\27\7\27\u0376\n\27\f\27\16\27\u0379"+
		"\13\27\3\27\5\27\u037c\n\27\3\27\7\27\u037f\n\27\f\27\16\27\u0382\13\27"+
		"\3\27\3\27\7\27\u0386\n\27\f\27\16\27\u0389\13\27\3\27\3\27\3\30\3\30"+
		"\7\30\u038f\n\30\f\30\16\30\u0392\13\30\3\30\5\30\u0395\n\30\3\30\7\30"+
		"\u0398\n\30\f\30\16\30\u039b\13\30\3\30\3\30\7\30\u039f\n\30\f\30\16\30"+
		"\u03a2\13\30\3\30\3\30\3\31\3\31\7\31\u03a8\n\31\f\31\16\31\u03ab\13\31"+
		"\3\31\3\31\7\31\u03af\n\31\f\31\16\31\u03b2\13\31\3\31\3\31\7\31\u03b6"+
		"\n\31\f\31\16\31\u03b9\13\31\3\31\3\31\5\31\u03bd\n\31\3\31\3\31\7\31"+
		"\u03c1\n\31\f\31\16\31\u03c4\13\31\3\31\3\31\5\31\u03c8\n\31\5\31\u03ca"+
		"\n\31\3\32\3\32\7\32\u03ce\n\32\f\32\16\32\u03d1\13\32\3\32\3\32\7\32"+
		"\u03d5\n\32\f\32\16\32\u03d8\13\32\3\32\3\32\7\32\u03dc\n\32\f\32\16\32"+
		"\u03df\13\32\3\32\3\32\5\32\u03e3\n\32\3\32\3\32\7\32\u03e7\n\32\f\32"+
		"\16\32\u03ea\13\32\3\32\3\32\3\32\5\32\u03ef\n\32\3\33\3\33\7\33\u03f3"+
		"\n\33\f\33\16\33\u03f6\13\33\3\33\3\33\7\33\u03fa\n\33\f\33\16\33\u03fd"+
		"\13\33\3\33\3\33\7\33\u0401\n\33\f\33\16\33\u0404\13\33\3\33\3\33\5\33"+
		"\u0408\n\33\3\33\3\33\7\33\u040c\n\33\f\33\16\33\u040f\13\33\3\33\3\33"+
		"\3\33\5\33\u0414\n\33\3\34\3\34\7\34\u0418\n\34\f\34\16\34\u041b\13\34"+
		"\3\34\3\34\7\34\u041f\n\34\f\34\16\34\u0422\13\34\3\34\3\34\7\34\u0426"+
		"\n\34\f\34\16\34\u0429\13\34\3\34\3\34\5\34\u042d\n\34\3\34\3\34\7\34"+
		"\u0431\n\34\f\34\16\34\u0434\13\34\3\34\3\34\3\34\5\34\u0439\n\34\3\35"+
		"\3\35\7\35\u043d\n\35\f\35\16\35\u0440\13\35\3\35\3\35\7\35\u0444\n\35"+
		"\f\35\16\35\u0447\13\35\3\35\3\35\7\35\u044b\n\35\f\35\16\35\u044e\13"+
		"\35\3\35\3\35\5\35\u0452\n\35\3\35\3\35\7\35\u0456\n\35\f\35\16\35\u0459"+
		"\13\35\3\35\3\35\3\35\5\35\u045e\n\35\3\36\3\36\7\36\u0462\n\36\f\36\16"+
		"\36\u0465\13\36\3\36\3\36\7\36\u0469\n\36\f\36\16\36\u046c\13\36\3\36"+
		"\3\36\7\36\u0470\n\36\f\36\16\36\u0473\13\36\3\36\3\36\5\36\u0477\n\36"+
		"\3\36\3\36\7\36\u047b\n\36\f\36\16\36\u047e\13\36\3\36\3\36\3\36\5\36"+
		"\u0483\n\36\3\37\3\37\7\37\u0487\n\37\f\37\16\37\u048a\13\37\3\37\3\37"+
		"\7\37\u048e\n\37\f\37\16\37\u0491\13\37\3\37\3\37\7\37\u0495\n\37\f\37"+
		"\16\37\u0498\13\37\3\37\3\37\5\37\u049c\n\37\3\37\3\37\7\37\u04a0\n\37"+
		"\f\37\16\37\u04a3\13\37\3\37\3\37\3\37\5\37\u04a8\n\37\3 \3 \7 \u04ac"+
		"\n \f \16 \u04af\13 \3 \3 \7 \u04b3\n \f \16 \u04b6\13 \3 \3 \7 \u04ba"+
		"\n \f \16 \u04bd\13 \3 \3 \5 \u04c1\n \3 \3 \7 \u04c5\n \f \16 \u04c8"+
		"\13 \3 \3 \3 \5 \u04cd\n \3!\3!\7!\u04d1\n!\f!\16!\u04d4\13!\3!\3!\7!"+
		"\u04d8\n!\f!\16!\u04db\13!\3!\3!\7!\u04df\n!\f!\16!\u04e2\13!\3!\3!\5"+
		"!\u04e6\n!\3!\3!\7!\u04ea\n!\f!\16!\u04ed\13!\3!\3!\5!\u04f1\n!\5!\u04f3"+
		"\n!\3\"\3\"\7\"\u04f7\n\"\f\"\16\"\u04fa\13\"\3\"\3\"\7\"\u04fe\n\"\f"+
		"\"\16\"\u0501\13\"\3\"\3\"\7\"\u0505\n\"\f\"\16\"\u0508\13\"\3\"\3\"\5"+
		"\"\u050c\n\"\3\"\3\"\7\"\u0510\n\"\f\"\16\"\u0513\13\"\3\"\3\"\3\"\5\""+
		"\u0518\n\"\3#\3#\7#\u051c\n#\f#\16#\u051f\13#\3#\3#\7#\u0523\n#\f#\16"+
		"#\u0526\13#\3#\3#\7#\u052a\n#\f#\16#\u052d\13#\3#\3#\3$\3$\6$\u0533\n"+
		"$\r$\16$\u0534\3$\3$\7$\u0539\n$\f$\16$\u053c\13$\3$\3$\3%\3%\6%\u0542"+
		"\n%\r%\16%\u0543\3%\3%\7%\u0548\n%\f%\16%\u054b\13%\3%\3%\3&\5&\u0550"+
		"\n&\3&\5&\u0553\n&\3&\3&\3&\3&\3&\7&\u055a\n&\f&\16&\u055d\13&\3&\5&\u0560"+
		"\n&\5&\u0562\n&\3&\5&\u0565\n&\3&\3&\3&\5&\u056a\n&\5&\u056c\n&\3\'\5"+
		"\'\u056f\n\'\3\'\3\'\3\'\7\'\u0574\n\'\f\'\16\'\u0577\13\'\3(\3(\3)\3"+
		")\3*\3*\3+\3+\3,\5,\u0582\n,\3,\3,\3,\3,\3,\3,\3,\5,\u058b\n,\3-\5-\u058e"+
		"\n-\3-\3-\3-\3-\3-\3-\3-\5-\u0597\n-\3.\5.\u059a\n.\3.\3.\3.\3.\3.\3."+
		"\3.\5.\u05a3\n.\3/\5/\u05a6\n/\3/\3/\3/\3/\3/\3/\3/\5/\u05af\n/\3\60\5"+
		"\60\u05b2\n\60\3\60\3\60\3\60\3\60\3\60\3\60\3\60\5\60\u05bb\n\60\3\61"+
		"\5\61\u05be\n\61\3\61\3\61\3\61\3\61\3\61\3\61\3\61\5\61\u05c7\n\61\3"+
		"\62\5\62\u05ca\n\62\3\62\3\62\3\62\3\62\3\62\3\62\3\62\5\62\u05d3\n\62"+
		"\3\63\5\63\u05d6\n\63\3\63\3\63\3\63\3\63\3\63\3\63\3\63\5\63\u05df\n"+
		"\63\3\64\3\64\3\65\3\65\3\65\5\65\u05e6\n\65\3\66\3\66\3\66\2\2\67\2\4"+
		"\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNP"+
		"RTVXZ\\^`bdfhj\2\t\4\2\6\6\f\f\3\2de\3\2fg\3\2hi\3\2jk\3\2bc\5\2\4\b\n"+
		"\22\24I\2\u06af\2o\3\2\2\2\4\u00a1\3\2\2\2\6\u00b6\3\2\2\2\b\u00c0\3\2"+
		"\2\2\n\u0101\3\2\2\2\f\u013c\3\2\2\2\16\u015b\3\2\2\2\20\u019b\3\2\2\2"+
		"\22\u01c3\3\2\2\2\24\u01c5\3\2\2\2\26\u0207\3\2\2\2\30\u0243\3\2\2\2\32"+
		"\u0272\3\2\2\2\34\u02bd\3\2\2\2\36\u02c5\3\2\2\2 \u02cd\3\2\2\2\"\u02cf"+
		"\3\2\2\2$\u02ec\3\2\2\2&\u02ee\3\2\2\2(\u0358\3\2\2\2*\u0362\3\2\2\2,"+
		"\u037b\3\2\2\2.\u0394\3\2\2\2\60\u03c9\3\2\2\2\62\u03ee\3\2\2\2\64\u0413"+
		"\3\2\2\2\66\u0438\3\2\2\28\u045d\3\2\2\2:\u0482\3\2\2\2<\u04a7\3\2\2\2"+
		">\u04cc\3\2\2\2@\u04f2\3\2\2\2B\u0517\3\2\2\2D\u0519\3\2\2\2F\u0530\3"+
		"\2\2\2H\u053f\3\2\2\2J\u056b\3\2\2\2L\u056e\3\2\2\2N\u0578\3\2\2\2P\u057a"+
		"\3\2\2\2R\u057c\3\2\2\2T\u057e\3\2\2\2V\u058a\3\2\2\2X\u0596\3\2\2\2Z"+
		"\u05a2\3\2\2\2\\\u05ae\3\2\2\2^\u05ba\3\2\2\2`\u05c6\3\2\2\2b\u05d2\3"+
		"\2\2\2d\u05de\3\2\2\2f\u05e0\3\2\2\2h\u05e5\3\2\2\2j\u05e7\3\2\2\2ln\7"+
		"`\2\2ml\3\2\2\2nq\3\2\2\2om\3\2\2\2op\3\2\2\2pr\3\2\2\2qo\3\2\2\2rs\5"+
		"D#\2sw\b\2\1\2tv\7`\2\2ut\3\2\2\2vy\3\2\2\2wu\3\2\2\2wx\3\2\2\2x}\3\2"+
		"\2\2yw\3\2\2\2z{\5F$\2{|\b\2\1\2|~\3\2\2\2}z\3\2\2\2}~\3\2\2\2~\u0088"+
		"\3\2\2\2\177\u0081\7`\2\2\u0080\177\3\2\2\2\u0081\u0084\3\2\2\2\u0082"+
		"\u0080\3\2\2\2\u0082\u0083\3\2\2\2\u0083\u0085\3\2\2\2\u0084\u0082\3\2"+
		"\2\2\u0085\u0087\5H%\2\u0086\u0082\3\2\2\2\u0087\u008a\3\2\2\2\u0088\u0086"+
		"\3\2\2\2\u0088\u0089\3\2\2\2\u0089\u0096\3\2\2\2\u008a\u0088\3\2\2\2\u008b"+
		"\u008d\7`\2\2\u008c\u008b\3\2\2\2\u008d\u0090\3\2\2\2\u008e\u008c\3\2"+
		"\2\2\u008e\u008f\3\2\2\2\u008f\u0091\3\2\2\2\u0090\u008e\3\2\2\2\u0091"+
		"\u0092\5\6\4\2\u0092\u0093\b\2\1\2\u0093\u0095\3\2\2\2\u0094\u008e\3\2"+
		"\2\2\u0095\u0098\3\2\2\2\u0096\u0094\3\2\2\2\u0096\u0097\3\2\2\2\u0097"+
		"\u009c\3\2\2\2\u0098\u0096\3\2\2\2\u0099\u009b\7`\2\2\u009a\u0099\3\2"+
		"\2\2\u009b\u009e\3\2\2\2\u009c\u009a\3\2\2\2\u009c\u009d\3\2\2\2\u009d"+
		"\u009f\3\2\2\2\u009e\u009c\3\2\2\2\u009f\u00a0\7\2\2\3\u00a0\3\3\2\2\2"+
		"\u00a1\u00a5\5\20\t\2\u00a2\u00a4\7`\2\2\u00a3\u00a2\3\2\2\2\u00a4\u00a7"+
		"\3\2\2\2\u00a5\u00a3\3\2\2\2\u00a5\u00a6\3\2\2\2\u00a6\u00a8\3\2\2\2\u00a7"+
		"\u00a5\3\2\2\2\u00a8\u00a9\7\u0096\2\2\u00a9\5\3\2\2\2\u00aa\u00ab\5\b"+
		"\5\2\u00ab\u00ac\b\4\1\2\u00ac\u00b7\3\2\2\2\u00ad\u00ae\5\n\6\2\u00ae"+
		"\u00af\b\4\1\2\u00af\u00b7\3\2\2\2\u00b0\u00b1\5\f\7\2\u00b1\u00b2\b\4"+
		"\1\2\u00b2\u00b7\3\2\2\2\u00b3\u00b4\5\16\b\2\u00b4\u00b5\b\4\1\2\u00b5"+
		"\u00b7\3\2\2\2\u00b6\u00aa\3\2\2\2\u00b6\u00ad\3\2\2\2\u00b6\u00b0\3\2"+
		"\2\2\u00b6\u00b3\3\2\2\2\u00b7\u00bb\3\2\2\2\u00b8\u00ba\7`\2\2\u00b9"+
		"\u00b8\3\2\2\2\u00ba\u00bd\3\2\2\2\u00bb\u00b9\3\2\2\2\u00bb\u00bc\3\2"+
		"\2\2\u00bc\u00be\3\2\2\2\u00bd\u00bb\3\2\2\2\u00be\u00bf\7\u0096\2\2\u00bf"+
		"\7\3\2\2\2\u00c0\u00c4\7\13\2\2\u00c1\u00c3\7`\2\2\u00c2\u00c1\3\2\2\2"+
		"\u00c3\u00c6\3\2\2\2\u00c4\u00c2\3\2\2\2\u00c4\u00c5\3\2\2\2\u00c5\u00c7"+
		"\3\2\2\2\u00c6\u00c4\3\2\2\2\u00c7\u00cb\5h\65\2\u00c8\u00ca\7`\2\2\u00c9"+
		"\u00c8\3\2\2\2\u00ca\u00cd\3\2\2\2\u00cb\u00c9\3\2\2\2\u00cb\u00cc\3\2"+
		"\2\2\u00cc\u00ce\3\2\2\2\u00cd\u00cb\3\2\2\2\u00ce\u00d2\7\u009e\2\2\u00cf"+
		"\u00d1\7`\2\2\u00d0\u00cf\3\2\2\2\u00d1\u00d4\3\2\2\2\u00d2\u00d0\3\2"+
		"\2\2\u00d2\u00d3\3\2\2\2\u00d3\u00f5\3\2\2\2\u00d4\u00d2\3\2\2\2\u00d5"+
		"\u00d6\5\20\t\2\u00d6\u00d7\b\5\1\2\u00d7\u00e5\3\2\2\2\u00d8\u00d9\5"+
		"\b\5\2\u00d9\u00da\b\5\1\2\u00da\u00e5\3\2\2\2\u00db\u00dc\5\n\6\2\u00dc"+
		"\u00dd\b\5\1\2\u00dd\u00e5\3\2\2\2\u00de\u00df\5\f\7\2\u00df\u00e0\b\5"+
		"\1\2\u00e0\u00e5\3\2\2\2\u00e1\u00e2\5\16\b\2\u00e2\u00e3\b\5\1\2\u00e3"+
		"\u00e5\3\2\2\2\u00e4\u00d5\3\2\2\2\u00e4\u00d8\3\2\2\2\u00e4\u00db\3\2"+
		"\2\2\u00e4\u00de\3\2\2\2\u00e4\u00e1\3\2\2\2\u00e5\u00e9\3\2\2\2\u00e6"+
		"\u00e8\7`\2\2\u00e7\u00e6\3\2\2\2\u00e8\u00eb\3\2\2\2\u00e9\u00e7\3\2"+
		"\2\2\u00e9\u00ea\3\2\2\2\u00ea\u00ec\3\2\2\2\u00eb\u00e9\3\2\2\2\u00ec"+
		"\u00f0\7\u0096\2\2\u00ed\u00ef\7`\2\2\u00ee\u00ed\3\2\2\2\u00ef\u00f2"+
		"\3\2\2\2\u00f0\u00ee\3\2\2\2\u00f0\u00f1\3\2\2\2\u00f1\u00f4\3\2\2\2\u00f2"+
		"\u00f0\3\2\2\2\u00f3\u00e4\3\2\2\2\u00f4\u00f7\3\2\2\2\u00f5\u00f3\3\2"+
		"\2\2\u00f5\u00f6\3\2\2\2\u00f6\u00fb\3\2\2\2\u00f7\u00f5\3\2\2\2\u00f8"+
		"\u00fa\7`\2\2\u00f9\u00f8\3\2\2\2\u00fa\u00fd\3\2\2\2\u00fb\u00f9\3\2"+
		"\2\2\u00fb\u00fc\3\2\2\2\u00fc\u00fe\3\2\2\2\u00fd\u00fb\3\2\2\2\u00fe"+
		"\u00ff\7\u009f\2\2\u00ff\u0100\b\5\1\2\u0100\t\3\2\2\2\u0101\u0105\7\20"+
		"\2\2\u0102\u0104\7`\2\2\u0103\u0102\3\2\2\2\u0104\u0107\3\2\2\2\u0105"+
		"\u0103\3\2\2\2\u0105\u0106\3\2\2\2\u0106\u0108\3\2\2\2\u0107\u0105\3\2"+
		"\2\2\u0108\u010c\5h\65\2\u0109\u010b\7`\2\2\u010a\u0109\3\2\2\2\u010b"+
		"\u010e\3\2\2\2\u010c\u010a\3\2\2\2\u010c\u010d\3\2\2\2\u010d\u010f\3\2"+
		"\2\2\u010e\u010c\3\2\2\2\u010f\u0136\7\u009e\2\2\u0110\u0112\7`\2\2\u0111"+
		"\u0110\3\2\2\2\u0112\u0115\3\2\2\2\u0113\u0111\3\2\2\2\u0113\u0114\3\2"+
		"\2\2\u0114\u0125\3\2\2\2\u0115\u0113\3\2\2\2\u0116\u0117\5\22\n\2\u0117"+
		"\u0118\b\6\1\2\u0118\u0126\3\2\2\2\u0119\u011a\5\b\5\2\u011a\u011b\b\6"+
		"\1\2\u011b\u0126\3\2\2\2\u011c\u011d\5\n\6\2\u011d\u011e\b\6\1\2\u011e"+
		"\u0126\3\2\2\2\u011f\u0120\5\f\7\2\u0120\u0121\b\6\1\2\u0121\u0126\3\2"+
		"\2\2\u0122\u0123\5\16\b\2\u0123\u0124\b\6\1\2\u0124\u0126\3\2\2\2\u0125"+
		"\u0116\3\2\2\2\u0125\u0119\3\2\2\2\u0125\u011c\3\2\2\2\u0125\u011f\3\2"+
		"\2\2\u0125\u0122\3\2\2\2\u0126\u012a\3\2\2\2\u0127\u0129\7`\2\2\u0128"+
		"\u0127\3\2\2\2\u0129\u012c\3\2\2\2\u012a\u0128\3\2\2\2\u012a\u012b\3\2"+
		"\2\2\u012b\u012d\3\2\2\2\u012c\u012a\3\2\2\2\u012d\u0131\7\u0096\2\2\u012e"+
		"\u0130\7`\2\2\u012f\u012e\3\2\2\2\u0130\u0133\3\2\2\2\u0131\u012f\3\2"+
		"\2\2\u0131\u0132\3\2\2\2\u0132\u0135\3\2\2\2\u0133\u0131\3\2\2\2\u0134"+
		"\u0113\3\2\2\2\u0135\u0138\3\2\2\2\u0136\u0134\3\2\2\2\u0136\u0137\3\2"+
		"\2\2\u0137\u0139\3\2\2\2\u0138\u0136\3\2\2\2\u0139\u013a\7\u009f\2\2\u013a"+
		"\u013b\b\6\1\2\u013b\13\3\2\2\2\u013c\u0140\7\21\2\2\u013d\u013f\7`\2"+
		"\2\u013e\u013d\3\2\2\2\u013f\u0142\3\2\2\2\u0140\u013e\3\2\2\2\u0140\u0141"+
		"\3\2\2\2\u0141\u0143\3\2\2\2\u0142\u0140\3\2\2\2\u0143\u0147\5h\65\2\u0144"+
		"\u0146\7`\2\2\u0145\u0144\3\2\2\2\u0146\u0149\3\2\2\2\u0147\u0145\3\2"+
		"\2\2\u0147\u0148\3\2\2\2\u0148\u014a\3\2\2\2\u0149\u0147\3\2\2\2\u014a"+
		"\u014e\7\u008d\2\2\u014b\u014d\7`\2\2\u014c\u014b\3\2\2\2\u014d\u0150"+
		"\3\2\2\2\u014e\u014c\3\2\2\2\u014e\u014f\3\2\2\2\u014f\u0151\3\2\2\2\u0150"+
		"\u014e\3\2\2\2\u0151\u0155\5 \21\2\u0152\u0154\7`\2\2\u0153\u0152\3\2"+
		"\2\2\u0154\u0157\3\2\2\2\u0155\u0153\3\2\2\2\u0155\u0156\3\2\2\2\u0156"+
		"\u0158\3\2\2\2\u0157\u0155\3\2\2\2\u0158\u0159\7\u008c\2\2\u0159\u015a"+
		"\b\7\1\2\u015a\r\3\2\2\2\u015b\u015f\7\22\2\2\u015c\u015e\7`\2\2\u015d"+
		"\u015c\3\2\2\2\u015e\u0161\3\2\2\2\u015f\u015d\3\2\2\2\u015f\u0160\3\2"+
		"\2\2\u0160\u0162\3\2\2\2\u0161\u015f\3\2\2\2\u0162\u0166\5h\65\2\u0163"+
		"\u0165\7`\2\2\u0164\u0163\3\2\2\2\u0165\u0168\3\2\2\2\u0166\u0164\3\2"+
		"\2\2\u0166\u0167\3\2\2\2\u0167\u0169\3\2\2\2\u0168\u0166\3\2\2\2\u0169"+
		"\u016d\7\u008d\2\2\u016a\u016c\7`\2\2\u016b\u016a\3\2\2\2\u016c\u016f"+
		"\3\2\2\2\u016d\u016b\3\2\2\2\u016d\u016e\3\2\2\2\u016e\u0170\3\2\2\2\u016f"+
		"\u016d\3\2\2\2\u0170\u0174\5$\23\2\u0171\u0173\7`\2\2\u0172\u0171\3\2"+
		"\2\2\u0173\u0176\3\2\2\2\u0174\u0172\3\2\2\2\u0174\u0175\3\2\2\2\u0175"+
		"\u0177\3\2\2\2\u0176\u0174\3\2\2\2\u0177\u017b\7\u0095\2\2\u0178\u017a"+
		"\7`\2\2\u0179\u0178\3\2\2\2\u017a\u017d\3\2\2\2\u017b\u0179\3\2\2\2\u017b"+
		"\u017c\3\2\2\2\u017c\u017e\3\2\2\2\u017d\u017b\3\2\2\2\u017e\u0182\5 "+
		"\21\2\u017f\u0181\7`\2\2\u0180\u017f\3\2\2\2\u0181\u0184\3\2\2\2\u0182"+
		"\u0180\3\2\2\2\u0182\u0183\3\2\2\2\u0183\u0185\3\2\2\2\u0184\u0182\3\2"+
		"\2\2\u0185\u0186\7\u008c\2\2\u0186\u0187\b\b\1\2\u0187\17\3\2\2\2\u0188"+
		"\u018c\5h\65\2\u0189\u018b\7`\2\2\u018a\u0189\3\2\2\2\u018b\u018e\3\2"+
		"\2\2\u018c\u018a\3\2\2\2\u018c\u018d\3\2\2\2\u018d\u018f\3\2\2\2\u018e"+
		"\u018c\3\2\2\2\u018f\u0193\5\34\17\2\u0190\u0192\7`\2\2\u0191\u0190\3"+
		"\2\2\2\u0192\u0195\3\2\2\2\u0193\u0191\3\2\2\2\u0193\u0194\3\2\2\2\u0194"+
		"\u0196\3\2\2\2\u0195\u0193\3\2\2\2\u0196\u0197\b\t\1\2\u0197\u019c\3\2"+
		"\2\2\u0198\u0199\5\22\n\2\u0199\u019a\b\t\1\2\u019a\u019c\3\2\2\2\u019b"+
		"\u0188\3\2\2\2\u019b\u0198\3\2\2\2\u019c\21\3\2\2\2\u019d\u019e\5\24\13"+
		"\2\u019e\u019f\b\n\1\2\u019f\u01c4\3\2\2\2\u01a0\u01a1\5\26\f\2\u01a1"+
		"\u01a2\b\n\1\2\u01a2\u01c4\3\2\2\2\u01a3\u01a4\5\30\r\2\u01a4\u01a5\b"+
		"\n\1\2\u01a5\u01c4\3\2\2\2\u01a6\u01a7\5\32\16\2\u01a7\u01a8\b\n\1\2\u01a8"+
		"\u01c4\3\2\2\2\u01a9\u01ad\5h\65\2\u01aa\u01ac\7`\2\2\u01ab\u01aa\3\2"+
		"\2\2\u01ac\u01af\3\2\2\2\u01ad\u01ab\3\2\2\2\u01ad\u01ae\3\2\2\2\u01ae"+
		"\u01b0\3\2\2\2\u01af\u01ad\3\2\2\2\u01b0\u01b4\7\u0097\2\2\u01b1\u01b3"+
		"\7`\2\2\u01b2\u01b1\3\2\2\2\u01b3\u01b6\3\2\2\2\u01b4\u01b2\3\2\2\2\u01b4"+
		"\u01b5\3\2\2\2\u01b5\u01b7\3\2\2\2\u01b6\u01b4\3\2\2\2\u01b7\u01bf\5 "+
		"\21\2\u01b8\u01ba\7`\2\2\u01b9\u01b8\3\2\2\2\u01ba\u01bd\3\2\2\2\u01bb"+
		"\u01b9\3\2\2\2\u01bb\u01bc\3\2\2\2\u01bc\u01be\3\2\2\2\u01bd\u01bb\3\2"+
		"\2\2\u01be\u01c0\7\u009d\2\2\u01bf\u01bb\3\2\2\2\u01bf\u01c0\3\2\2\2\u01c0"+
		"\u01c1\3\2\2\2\u01c1\u01c2\b\n\1\2\u01c2\u01c4\3\2\2\2\u01c3\u019d\3\2"+
		"\2\2\u01c3\u01a0\3\2\2\2\u01c3\u01a3\3\2\2\2\u01c3\u01a6\3\2\2\2\u01c3"+
		"\u01a9\3\2\2\2\u01c4\23\3\2\2\2\u01c5\u01c9\5h\65\2\u01c6\u01c8\7`\2\2"+
		"\u01c7\u01c6\3\2\2\2\u01c8\u01cb\3\2\2\2\u01c9\u01c7\3\2\2\2\u01c9\u01ca"+
		"\3\2\2\2\u01ca\u01cc\3\2\2\2\u01cb\u01c9\3\2\2\2\u01cc\u01d0\7\u0097\2"+
		"\2\u01cd\u01cf\7`\2\2\u01ce\u01cd\3\2\2\2\u01cf\u01d2\3\2\2\2\u01d0\u01ce"+
		"\3\2\2\2\u01d0\u01d1\3\2\2\2\u01d1\u01d3\3\2\2\2\u01d2\u01d0\3\2\2\2\u01d3"+
		"\u01d7\7\13\2\2\u01d4\u01d6\7`\2\2\u01d5\u01d4\3\2\2\2\u01d6\u01d9\3\2"+
		"\2\2\u01d7\u01d5\3\2\2\2\u01d7\u01d8\3\2\2\2\u01d8\u01e1\3\2\2\2\u01d9"+
		"\u01d7\3\2\2\2\u01da\u01de\7\u009d\2\2\u01db\u01dd\7`\2\2\u01dc\u01db"+
		"\3\2\2\2\u01dd\u01e0\3\2\2\2\u01de\u01dc\3\2\2\2\u01de\u01df\3\2\2\2\u01df"+
		"\u01e2\3\2\2\2\u01e0\u01de\3\2\2\2\u01e1\u01da\3\2\2\2\u01e1\u01e2\3\2"+
		"\2\2\u01e2\u01e3\3\2\2\2\u01e3\u01e7\7\u009e\2\2\u01e4\u01e6\7`\2\2\u01e5"+
		"\u01e4\3\2\2\2\u01e6\u01e9\3\2\2\2\u01e7\u01e5\3\2\2\2\u01e7\u01e8\3\2"+
		"\2\2\u01e8\u01fb\3\2\2\2\u01e9\u01e7\3\2\2\2\u01ea\u01eb\5\20\t\2\u01eb"+
		"\u01ef\b\13\1\2\u01ec\u01ee\7`\2\2\u01ed\u01ec\3\2\2\2\u01ee\u01f1\3\2"+
		"\2\2\u01ef\u01ed\3\2\2\2\u01ef\u01f0\3\2\2\2\u01f0\u01f2\3\2\2\2\u01f1"+
		"\u01ef\3\2\2\2\u01f2\u01f6\7\u0096\2\2\u01f3\u01f5\7`\2\2\u01f4\u01f3"+
		"\3\2\2\2\u01f5\u01f8\3\2\2\2\u01f6\u01f4\3\2\2\2\u01f6\u01f7\3\2\2\2\u01f7"+
		"\u01fa\3\2\2\2\u01f8\u01f6\3\2\2\2\u01f9\u01ea\3\2\2\2\u01fa\u01fd\3\2"+
		"\2\2\u01fb\u01f9\3\2\2\2\u01fb\u01fc\3\2\2\2\u01fc\u0201\3\2\2\2\u01fd"+
		"\u01fb\3\2\2\2\u01fe\u0200\7`\2\2\u01ff\u01fe\3\2\2\2\u0200\u0203\3\2"+
		"\2\2\u0201\u01ff\3\2\2\2\u0201\u0202\3\2\2\2\u0202\u0204\3\2\2\2\u0203"+
		"\u0201\3\2\2\2\u0204\u0205\7\u009f\2\2\u0205\u0206\b\13\1\2\u0206\25\3"+
		"\2\2\2\u0207\u020b\5h\65\2\u0208\u020a\7`\2\2\u0209\u0208\3\2\2\2\u020a"+
		"\u020d\3\2\2\2\u020b\u0209\3\2\2\2\u020b\u020c\3\2\2\2\u020c\u020e\3\2"+
		"\2\2\u020d\u020b\3\2\2\2\u020e\u0212\7\u0097\2\2\u020f\u0211\7`\2\2\u0210"+
		"\u020f\3\2\2\2\u0211\u0214\3\2\2\2\u0212\u0210\3\2\2\2\u0212\u0213\3\2"+
		"\2\2\u0213\u0215\3\2\2\2\u0214\u0212\3\2\2\2\u0215\u0219\7\20\2\2\u0216"+
		"\u0218\7`\2\2\u0217\u0216\3\2\2\2\u0218\u021b\3\2\2\2\u0219\u0217\3\2"+
		"\2\2\u0219\u021a\3\2\2\2\u021a\u0223\3\2\2\2\u021b\u0219\3\2\2\2\u021c"+
		"\u021e\7`\2\2\u021d\u021c\3\2\2\2\u021e\u0221\3\2\2\2\u021f\u021d\3\2"+
		"\2\2\u021f\u0220\3\2\2\2\u0220\u0222\3\2\2\2\u0221\u021f\3\2\2\2\u0222"+
		"\u0224\7\u009d\2\2\u0223\u021f\3\2\2\2\u0223\u0224\3\2\2\2\u0224\u0225"+
		"\3\2\2\2\u0225\u023d\7\u009e\2\2\u0226\u0228\7`\2\2\u0227\u0226\3\2\2"+
		"\2\u0228\u022b\3\2\2\2\u0229\u0227\3\2\2\2\u0229\u022a\3\2\2\2\u022a\u022c"+
		"\3\2\2\2\u022b\u0229\3\2\2\2\u022c\u022d\5\22\n\2\u022d\u0231\b\f\1\2"+
		"\u022e\u0230\7`\2\2\u022f\u022e\3\2\2\2\u0230\u0233\3\2\2\2\u0231\u022f"+
		"\3\2\2\2\u0231\u0232\3\2\2\2\u0232\u0234\3\2\2\2\u0233\u0231\3\2\2\2\u0234"+
		"\u0238\7\u0096\2\2\u0235\u0237\7`\2\2\u0236\u0235\3\2\2\2\u0237\u023a"+
		"\3\2\2\2\u0238\u0236\3\2\2\2\u0238\u0239\3\2\2\2\u0239\u023c\3\2\2\2\u023a"+
		"\u0238\3\2\2\2\u023b\u0229\3\2\2\2\u023c\u023f\3\2\2\2\u023d\u023b\3\2"+
		"\2\2\u023d\u023e\3\2\2\2\u023e\u0240\3\2\2\2\u023f\u023d\3\2\2\2\u0240"+
		"\u0241\7\u009f\2\2\u0241\u0242\b\f\1\2\u0242\27\3\2\2\2\u0243\u0247\5"+
		"h\65\2\u0244\u0246\7`\2\2\u0245\u0244\3\2\2\2\u0246\u0249\3\2\2\2\u0247"+
		"\u0245\3\2\2\2\u0247\u0248\3\2\2\2\u0248\u024a\3\2\2\2\u0249\u0247\3\2"+
		"\2\2\u024a\u024e\7\u0097\2\2\u024b\u024d\7`\2\2\u024c\u024b\3\2\2\2\u024d"+
		"\u0250\3\2\2\2\u024e\u024c\3\2\2\2\u024e\u024f\3\2\2\2\u024f\u0251\3\2"+
		"\2\2\u0250\u024e\3\2\2\2\u0251\u0255\7\21\2\2\u0252\u0254\7`\2\2\u0253"+
		"\u0252\3\2\2\2\u0254\u0257\3\2\2\2\u0255\u0253\3\2\2\2\u0255\u0256\3\2"+
		"\2\2\u0256\u0258\3\2\2\2\u0257\u0255\3\2\2\2\u0258\u025c\7\u008d\2\2\u0259"+
		"\u025b\7`\2\2\u025a\u0259\3\2\2\2\u025b\u025e\3\2\2\2\u025c\u025a\3\2"+
		"\2\2\u025c\u025d\3\2\2\2\u025d\u025f\3\2\2\2\u025e\u025c\3\2\2\2\u025f"+
		"\u0263\5 \21\2\u0260\u0262\7`\2\2\u0261\u0260\3\2\2\2\u0262\u0265\3\2"+
		"\2\2\u0263\u0261\3\2\2\2\u0263\u0264\3\2\2\2\u0264\u0266\3\2\2\2\u0265"+
		"\u0263\3\2\2\2\u0266\u026e\7\u008c\2\2\u0267\u0269\7`\2\2\u0268\u0267"+
		"\3\2\2\2\u0269\u026c\3\2\2\2\u026a\u0268\3\2\2\2\u026a\u026b\3\2\2\2\u026b"+
		"\u026d\3\2\2\2\u026c\u026a\3\2\2\2\u026d\u026f\7\u009d\2\2\u026e\u026a"+
		"\3\2\2\2\u026e\u026f\3\2\2\2\u026f\u0270\3\2\2\2\u0270\u0271\b\r\1\2\u0271"+
		"\31\3\2\2\2\u0272\u0276\5h\65\2\u0273\u0275\7`\2\2\u0274\u0273\3\2\2\2"+
		"\u0275\u0278\3\2\2\2\u0276\u0274\3\2\2\2\u0276\u0277\3\2\2\2\u0277\u0279"+
		"\3\2\2\2\u0278\u0276\3\2\2\2\u0279\u027d\7\u0097\2\2\u027a\u027c\7`\2"+
		"\2\u027b\u027a\3\2\2\2\u027c\u027f\3\2\2\2\u027d\u027b\3\2\2\2\u027d\u027e"+
		"\3\2\2\2\u027e\u0280\3\2\2\2\u027f\u027d\3\2\2\2\u0280\u0284\7\22\2\2"+
		"\u0281\u0283\7`\2\2\u0282\u0281\3\2\2\2\u0283\u0286\3\2\2\2\u0284\u0282"+
		"\3\2\2\2\u0284\u0285\3\2\2\2\u0285\u0287\3\2\2\2\u0286\u0284\3\2\2\2\u0287"+
		"\u028b\7\u008d\2\2\u0288\u028a\7`\2\2\u0289\u0288\3\2\2\2\u028a\u028d"+
		"\3\2\2\2\u028b\u0289\3\2\2\2\u028b\u028c\3\2\2\2\u028c\u028e\3\2\2\2\u028d"+
		"\u028b\3\2\2\2\u028e\u0292\5$\23\2\u028f\u0291\7`\2\2\u0290\u028f\3\2"+
		"\2\2\u0291\u0294\3\2\2\2\u0292\u0290\3\2\2\2\u0292\u0293\3\2\2\2\u0293"+
		"\u0295\3\2\2\2\u0294\u0292\3\2\2\2\u0295\u0299\7\u0095\2\2\u0296\u0298"+
		"\7`\2\2\u0297\u0296\3\2\2\2\u0298\u029b\3\2\2\2\u0299\u0297\3\2\2\2\u0299"+
		"\u029a\3\2\2\2\u029a\u029c\3\2\2\2\u029b\u0299\3\2\2\2\u029c\u02a0\5 "+
		"\21\2\u029d\u029f\7`\2\2\u029e\u029d\3\2\2\2\u029f\u02a2\3\2\2\2\u02a0"+
		"\u029e\3\2\2\2\u02a0\u02a1\3\2\2\2\u02a1\u02a3\3\2\2\2\u02a2\u02a0\3\2"+
		"\2\2\u02a3\u02ab\7\u008c\2\2\u02a4\u02a6\7`\2\2\u02a5\u02a4\3\2\2\2\u02a6"+
		"\u02a9\3\2\2\2\u02a7\u02a5\3\2\2\2\u02a7\u02a8\3\2\2\2\u02a8\u02aa\3\2"+
		"\2\2\u02a9\u02a7\3\2\2\2\u02aa\u02ac\7\u009d\2\2\u02ab\u02a7\3\2\2\2\u02ab"+
		"\u02ac\3\2\2\2\u02ac\u02ad\3\2\2\2\u02ad\u02ae\b\16\1\2\u02ae\33\3\2\2"+
		"\2\u02af\u02b0\5\36\20\2\u02b0\u02b1\b\17\1\2\u02b1\u02be\3\2\2\2\u02b2"+
		"\u02b6\7\u0097\2\2\u02b3\u02b5\7`\2\2\u02b4\u02b3\3\2\2\2\u02b5\u02b8"+
		"\3\2\2\2\u02b6\u02b4\3\2\2\2\u02b6\u02b7\3\2\2\2\u02b7\u02b9\3\2\2\2\u02b8"+
		"\u02b6\3\2\2\2\u02b9\u02ba\5 \21\2\u02ba\u02bb\3\2\2\2\u02bb\u02bc\b\17"+
		"\1\2\u02bc\u02be\3\2\2\2\u02bd\u02af\3\2\2\2\u02bd\u02b2\3\2\2\2\u02be"+
		"\35\3\2\2\2\u02bf\u02c0\5(\25\2\u02c0\u02c1\b\20\1\2\u02c1\u02c6\3\2\2"+
		"\2\u02c2\u02c3\5&\24\2\u02c3\u02c4\b\20\1\2\u02c4\u02c6\3\2\2\2\u02c5"+
		"\u02bf\3\2\2\2\u02c5\u02c2\3\2\2\2\u02c6\37\3\2\2\2\u02c7\u02c8\5$\23"+
		"\2\u02c8\u02c9\b\21\1\2\u02c9\u02ce\3\2\2\2\u02ca\u02cb\5\"\22\2\u02cb"+
		"\u02cc\b\21\1\2\u02cc\u02ce\3\2\2\2\u02cd\u02c7\3\2\2\2\u02cd\u02ca\3"+
		"\2\2\2\u02ce!\3\2\2\2\u02cf\u02d0\5h\65\2\u02d0\u02d1\b\22\1\2\u02d1#"+
		"\3\2\2\2\u02d2\u02d3\7J\2\2\u02d3\u02ed\b\23\1\2\u02d4\u02d5\7K\2\2\u02d5"+
		"\u02ed\b\23\1\2\u02d6\u02d7\7L\2\2\u02d7\u02ed\b\23\1\2\u02d8\u02d9\7"+
		"M\2\2\u02d9\u02ed\b\23\1\2\u02da\u02db\7N\2\2\u02db\u02ed\b\23\1\2\u02dc"+
		"\u02dd\7O\2\2\u02dd\u02ed\b\23\1\2\u02de\u02df\7P\2\2\u02df\u02ed\b\23"+
		"\1\2\u02e0\u02e1\7Q\2\2\u02e1\u02ed\b\23\1\2\u02e2\u02e3\7R\2\2\u02e3"+
		"\u02ed\b\23\1\2\u02e4\u02e5\7S\2\2\u02e5\u02ed\b\23\1\2\u02e6\u02e7\7"+
		"T\2\2\u02e7\u02ed\b\23\1\2\u02e8\u02e9\7U\2\2\u02e9\u02ed\b\23\1\2\u02ea"+
		"\u02eb\7V\2\2\u02eb\u02ed\b\23\1\2\u02ec\u02d2\3\2\2\2\u02ec\u02d4\3\2"+
		"\2\2\u02ec\u02d6\3\2\2\2\u02ec\u02d8\3\2\2\2\u02ec\u02da\3\2\2\2\u02ec"+
		"\u02dc\3\2\2\2\u02ec\u02de\3\2\2\2\u02ec\u02e0\3\2\2\2\u02ec\u02e2\3\2"+
		"\2\2\u02ec\u02e4\3\2\2\2\u02ec\u02e6\3\2\2\2\u02ec\u02e8\3\2\2\2\u02ec"+
		"\u02ea\3\2\2\2\u02ed%\3\2\2\2\u02ee\u02f2\7\u0097\2\2\u02ef\u02f1\7`\2"+
		"\2\u02f0\u02ef\3\2\2\2\u02f1\u02f4\3\2\2\2\u02f2\u02f0\3\2\2\2\u02f2\u02f3"+
		"\3\2\2\2\u02f3\u02f5\3\2\2\2\u02f4\u02f2\3\2\2\2\u02f5\u02f9\7\23\2\2"+
		"\u02f6\u02f8\7`\2\2\u02f7\u02f6\3\2\2\2\u02f8\u02fb\3\2\2\2\u02f9\u02f7"+
		"\3\2\2\2\u02f9\u02fa\3\2\2\2\u02fa\u02fc\3\2\2\2\u02fb\u02f9\3\2\2\2\u02fc"+
		"\u0300\7\u008d\2\2\u02fd\u02ff\7`\2\2\u02fe\u02fd\3\2\2\2\u02ff\u0302"+
		"\3\2\2\2\u0300\u02fe\3\2\2\2\u0300\u0301\3\2\2\2\u0301\u0303\3\2\2\2\u0302"+
		"\u0300\3\2\2\2\u0303\u0304\5\22\n\2\u0304\u0317\b\24\1\2\u0305\u0307\7"+
		"`\2\2\u0306\u0305\3\2\2\2\u0307\u030a\3\2\2\2\u0308\u0306\3\2\2\2\u0308"+
		"\u0309\3\2\2\2\u0309\u030b\3\2\2\2\u030a\u0308\3\2\2\2\u030b\u030f\7\u0095"+
		"\2\2\u030c\u030e\7`\2\2\u030d\u030c\3\2\2\2\u030e\u0311\3\2\2\2\u030f"+
		"\u030d\3\2\2\2\u030f\u0310\3\2\2\2\u0310\u0312\3\2\2\2\u0311\u030f\3\2"+
		"\2\2\u0312\u0313\5\22\n\2\u0313\u0314\b\24\1\2\u0314\u0316\3\2\2\2\u0315"+
		"\u0308\3\2\2\2\u0316\u0319\3\2\2\2\u0317\u0315\3\2\2\2\u0317\u0318\3\2"+
		"\2\2\u0318\u031d\3\2\2\2\u0319\u0317\3\2\2\2\u031a\u031c\7`\2\2\u031b"+
		"\u031a\3\2\2\2\u031c\u031f\3\2\2\2\u031d\u031b\3\2\2\2\u031d\u031e\3\2"+
		"\2\2\u031e\u0320\3\2\2\2\u031f\u031d\3\2\2\2\u0320\u0324\7\u008c\2\2\u0321"+
		"\u0323\7`\2\2\u0322\u0321\3\2\2\2\u0323\u0326\3\2\2\2\u0324\u0322\3\2"+
		"\2\2\u0324\u0325\3\2\2\2\u0325\u0327\3\2\2\2\u0326\u0324\3\2\2\2\u0327"+
		"\u032b\7\u0089\2\2\u0328\u032a\7`\2\2\u0329\u0328\3\2\2\2\u032a\u032d"+
		"\3\2\2\2\u032b\u0329\3\2\2\2\u032b\u032c\3\2\2\2\u032c\u032e\3\2\2\2\u032d"+
		"\u032b\3\2\2\2\u032e\u032f\5f\64\2\u032f\u0330\b\24\1\2\u0330\'\3\2\2"+
		"\2\u0331\u0332\5*\26\2\u0332\u0333\b\25\1\2\u0333\u0359\3\2\2\2\u0334"+
		"\u0335\5,\27\2\u0335\u0336\b\25\1\2\u0336\u0359\3\2\2\2\u0337\u0338\5"+
		".\30\2\u0338\u0339\b\25\1\2\u0339\u0359\3\2\2\2\u033a\u033b\5\60\31\2"+
		"\u033b\u033c\b\25\1\2\u033c\u0359\3\2\2\2\u033d\u033e\5\62\32\2\u033e"+
		"\u033f\b\25\1\2\u033f\u0359\3\2\2\2\u0340\u0341\5\64\33\2\u0341\u0342"+
		"\b\25\1\2\u0342\u0359\3\2\2\2\u0343\u0344\5\66\34\2\u0344\u0345\b\25\1"+
		"\2\u0345\u0359\3\2\2\2\u0346\u0347\58\35\2\u0347\u0348\b\25\1\2\u0348"+
		"\u0359\3\2\2\2\u0349\u034a\5:\36\2\u034a\u034b\b\25\1\2\u034b\u0359\3"+
		"\2\2\2\u034c\u034d\5<\37\2\u034d\u034e\b\25\1\2\u034e\u0359\3\2\2\2\u034f"+
		"\u0350\5> \2\u0350\u0351\b\25\1\2\u0351\u0359\3\2\2\2\u0352\u0353\5@!"+
		"\2\u0353\u0354\b\25\1\2\u0354\u0359\3\2\2\2\u0355\u0356\5B\"\2\u0356\u0357"+
		"\b\25\1\2\u0357\u0359\3\2\2\2\u0358\u0331\3\2\2\2\u0358\u0334\3\2\2\2"+
		"\u0358\u0337\3\2\2\2\u0358\u033a\3\2\2\2\u0358\u033d\3\2\2\2\u0358\u0340"+
		"\3\2\2\2\u0358\u0343\3\2\2\2\u0358\u0346\3\2\2\2\u0358\u0349\3\2\2\2\u0358"+
		"\u034c\3\2\2\2\u0358\u034f\3\2\2\2\u0358\u0352\3\2\2\2\u0358\u0355\3\2"+
		"\2\2\u0359)\3\2\2\2\u035a\u035e\7\u0097\2\2\u035b\u035d\7`\2\2\u035c\u035b"+
		"\3\2\2\2\u035d\u0360\3\2\2\2\u035e\u035c\3\2\2\2\u035e\u035f\3\2\2\2\u035f"+
		"\u0361\3\2\2\2\u0360\u035e\3\2\2\2\u0361\u0363\7J\2\2\u0362\u035a\3\2"+
		"\2\2\u0362\u0363\3\2\2\2\u0363\u0367\3\2\2\2\u0364\u0366\7`\2\2\u0365"+
		"\u0364\3\2\2\2\u0366\u0369\3\2\2\2\u0367\u0365\3\2\2\2\u0367\u0368\3\2"+
		"\2\2\u0368\u036a\3\2\2\2\u0369\u0367\3\2\2\2\u036a\u036e\7\u0089\2\2\u036b"+
		"\u036d\7`\2\2\u036c\u036b\3\2\2\2\u036d\u0370\3\2\2\2\u036e\u036c\3\2"+
		"\2\2\u036e\u036f\3\2\2\2\u036f\u0371\3\2\2\2\u0370\u036e\3\2\2\2\u0371"+
		"\u0372\5N(\2\u0372+\3\2\2\2\u0373\u0377\7\u0097\2\2\u0374\u0376\7`\2\2"+
		"\u0375\u0374\3\2\2\2\u0376\u0379\3\2\2\2\u0377\u0375\3\2\2\2\u0377\u0378"+
		"\3\2\2\2\u0378\u037a\3\2\2\2\u0379\u0377\3\2\2\2\u037a\u037c\7K\2\2\u037b"+
		"\u0373\3\2\2\2\u037b\u037c\3\2\2\2\u037c\u0380\3\2\2\2\u037d\u037f\7`"+
		"\2\2\u037e\u037d\3\2\2\2\u037f\u0382\3\2\2\2\u0380\u037e\3\2\2\2\u0380"+
		"\u0381\3\2\2\2\u0381\u0383\3\2\2\2\u0382\u0380\3\2\2\2\u0383\u0387\7\u0089"+
		"\2\2\u0384\u0386\7`\2\2\u0385\u0384\3\2\2\2\u0386\u0389\3\2\2\2\u0387"+
		"\u0385\3\2\2\2\u0387\u0388\3\2\2\2\u0388\u038a\3\2\2\2\u0389\u0387\3\2"+
		"\2\2\u038a\u038b\5P)\2\u038b-\3\2\2\2\u038c\u0390\7\u0097\2\2\u038d\u038f"+
		"\7`\2\2\u038e\u038d\3\2\2\2\u038f\u0392\3\2\2\2\u0390\u038e\3\2\2\2\u0390"+
		"\u0391\3\2\2\2\u0391\u0393\3\2\2\2\u0392\u0390\3\2\2\2\u0393\u0395\7L"+
		"\2\2\u0394\u038c\3\2\2\2\u0394\u0395\3\2\2\2\u0395\u0399\3\2\2\2\u0396"+
		"\u0398\7`\2\2\u0397\u0396\3\2\2\2\u0398\u039b\3\2\2\2\u0399\u0397\3\2"+
		"\2\2\u0399\u039a\3\2\2\2\u039a\u039c\3\2\2\2\u039b\u0399\3\2\2\2\u039c"+
		"\u03a0\7\u0089\2\2\u039d\u039f\7`\2\2\u039e\u039d\3\2\2\2\u039f\u03a2"+
		"\3\2\2\2\u03a0\u039e\3\2\2\2\u03a0\u03a1\3\2\2\2\u03a1\u03a3\3\2\2\2\u03a2"+
		"\u03a0\3\2\2\2\u03a3\u03a4\5f\64\2\u03a4/\3\2\2\2\u03a5\u03a9\7\u0097"+
		"\2\2\u03a6\u03a8\7`\2\2\u03a7\u03a6\3\2\2\2\u03a8\u03ab\3\2\2\2\u03a9"+
		"\u03a7\3\2\2\2\u03a9\u03aa\3\2\2\2\u03aa\u03ac\3\2\2\2\u03ab\u03a9\3\2"+
		"\2\2\u03ac\u03b0\7M\2\2\u03ad\u03af\7`\2\2\u03ae\u03ad\3\2\2\2\u03af\u03b2"+
		"\3\2\2\2\u03b0\u03ae\3\2\2\2\u03b0\u03b1\3\2\2\2\u03b1\u03b3\3\2\2\2\u03b2"+
		"\u03b0\3\2\2\2\u03b3\u03b7\7\u0089\2\2\u03b4\u03b6\7`\2\2\u03b5\u03b4"+
		"\3\2\2\2\u03b6\u03b9\3\2\2\2\u03b7\u03b5\3\2\2\2\u03b7\u03b8\3\2\2\2\u03b8"+
		"\u03ba\3\2\2\2\u03b9\u03b7\3\2\2\2\u03ba\u03bc\5R*\2\u03bb\u03bd\7M\2"+
		"\2\u03bc\u03bb\3\2\2\2\u03bc\u03bd\3\2\2\2\u03bd\u03ca\3\2\2\2\u03be\u03c2"+
		"\7\u0089\2\2\u03bf\u03c1\7`\2\2\u03c0\u03bf\3\2\2\2\u03c1\u03c4\3\2\2"+
		"\2\u03c2\u03c0\3\2\2\2\u03c2\u03c3\3\2\2\2\u03c3\u03c5\3\2\2\2\u03c4\u03c2"+
		"\3\2\2\2\u03c5\u03c7\5R*\2\u03c6\u03c8\7M\2\2\u03c7\u03c6\3\2\2\2\u03c7"+
		"\u03c8\3\2\2\2\u03c8\u03ca\3\2\2\2\u03c9\u03a5\3\2\2\2\u03c9\u03be\3\2"+
		"\2\2\u03ca\61\3\2\2\2\u03cb\u03cf\7\u0097\2\2\u03cc\u03ce\7`\2\2\u03cd"+
		"\u03cc\3\2\2\2\u03ce\u03d1\3\2\2\2\u03cf\u03cd\3\2\2\2\u03cf\u03d0\3\2"+
		"\2\2\u03d0\u03d2\3\2\2\2\u03d1\u03cf\3\2\2\2\u03d2\u03d6\7N\2\2\u03d3"+
		"\u03d5\7`\2\2\u03d4\u03d3\3\2\2\2\u03d5\u03d8\3\2\2\2\u03d6\u03d4\3\2"+
		"\2\2\u03d6\u03d7\3\2\2\2\u03d7\u03d9\3\2\2\2\u03d8\u03d6\3\2\2\2\u03d9"+
		"\u03dd\7\u0089\2\2\u03da\u03dc\7`\2\2\u03db\u03da\3\2\2\2\u03dc\u03df"+
		"\3\2\2\2\u03dd\u03db\3\2\2\2\u03dd\u03de\3\2\2\2\u03de\u03e0\3\2\2\2\u03df"+
		"\u03dd\3\2\2\2\u03e0\u03e2\5T+\2\u03e1\u03e3\7N\2\2\u03e2\u03e1\3\2\2"+
		"\2\u03e2\u03e3\3\2\2\2\u03e3\u03ef\3\2\2\2\u03e4\u03e8\7\u0089\2\2\u03e5"+
		"\u03e7\7`\2\2\u03e6\u03e5\3\2\2\2\u03e7\u03ea\3\2\2\2\u03e8\u03e6\3\2"+
		"\2\2\u03e8\u03e9\3\2\2\2\u03e9\u03eb\3\2\2\2\u03ea\u03e8\3\2\2\2\u03eb"+
		"\u03ec\5T+\2\u03ec\u03ed\7N\2\2\u03ed\u03ef\3\2\2\2\u03ee\u03cb\3\2\2"+
		"\2\u03ee\u03e4\3\2\2\2\u03ef\63\3\2\2\2\u03f0\u03f4\7\u0097\2\2\u03f1"+
		"\u03f3\7`\2\2\u03f2\u03f1\3\2\2\2\u03f3\u03f6\3\2\2\2\u03f4\u03f2\3\2"+
		"\2\2\u03f4\u03f5\3\2\2\2\u03f5\u03f7\3\2\2\2\u03f6\u03f4\3\2\2\2\u03f7"+
		"\u03fb\7O\2\2\u03f8\u03fa\7`\2\2\u03f9\u03f8\3\2\2\2\u03fa\u03fd\3\2\2"+
		"\2\u03fb\u03f9\3\2\2\2\u03fb\u03fc\3\2\2\2\u03fc\u03fe\3\2\2\2\u03fd\u03fb"+
		"\3\2\2\2\u03fe\u0402\7\u0089\2\2\u03ff\u0401\7`\2\2\u0400\u03ff\3\2\2"+
		"\2\u0401\u0404\3\2\2\2\u0402\u0400\3\2\2\2\u0402\u0403\3\2\2\2\u0403\u0405"+
		"\3\2\2\2\u0404\u0402\3\2\2\2\u0405\u0407\5V,\2\u0406\u0408\7O\2\2\u0407"+
		"\u0406\3\2\2\2\u0407\u0408\3\2\2\2\u0408\u0414\3\2\2\2\u0409\u040d\7\u0089"+
		"\2\2\u040a\u040c\7`\2\2\u040b\u040a\3\2\2\2\u040c\u040f\3\2\2\2\u040d"+
		"\u040b\3\2\2\2\u040d\u040e\3\2\2\2\u040e\u0410\3\2\2\2\u040f\u040d\3\2"+
		"\2\2\u0410\u0411\5V,\2\u0411\u0412\7O\2\2\u0412\u0414\3\2\2\2\u0413\u03f0"+
		"\3\2\2\2\u0413\u0409\3\2\2\2\u0414\65\3\2\2\2\u0415\u0419\7\u0097\2\2"+
		"\u0416\u0418\7`\2\2\u0417\u0416\3\2\2\2\u0418\u041b\3\2\2\2\u0419\u0417"+
		"\3\2\2\2\u0419\u041a\3\2\2\2\u041a\u041c\3\2\2\2\u041b\u0419\3\2\2\2\u041c"+
		"\u0420\7P\2\2\u041d\u041f\7`\2\2\u041e\u041d\3\2\2\2\u041f\u0422\3\2\2"+
		"\2\u0420\u041e\3\2\2\2\u0420\u0421\3\2\2\2\u0421\u0423\3\2\2\2\u0422\u0420"+
		"\3\2\2\2\u0423\u0427\7\u0089\2\2\u0424\u0426\7`\2\2\u0425\u0424\3\2\2"+
		"\2\u0426\u0429\3\2\2\2\u0427\u0425\3\2\2\2\u0427\u0428\3\2\2\2\u0428\u042a"+
		"\3\2\2\2\u0429\u0427\3\2\2\2\u042a\u042c\5X-\2\u042b\u042d\7P\2\2\u042c"+
		"\u042b\3\2\2\2\u042c\u042d\3\2\2\2\u042d\u0439\3\2\2\2\u042e\u0432\7\u0089"+
		"\2\2\u042f\u0431\7`\2\2\u0430\u042f\3\2\2\2\u0431\u0434\3\2\2\2\u0432"+
		"\u0430\3\2\2\2\u0432\u0433\3\2\2\2\u0433\u0435\3\2\2\2\u0434\u0432\3\2"+
		"\2\2\u0435\u0436\5X-\2\u0436\u0437\7P\2\2\u0437\u0439\3\2\2\2\u0438\u0415"+
		"\3\2\2\2\u0438\u042e\3\2\2\2\u0439\67\3\2\2\2\u043a\u043e\7\u0097\2\2"+
		"\u043b\u043d\7`\2\2\u043c\u043b\3\2\2\2\u043d\u0440\3\2\2\2\u043e\u043c"+
		"\3\2\2\2\u043e\u043f\3\2\2\2\u043f\u0441\3\2\2\2\u0440\u043e\3\2\2\2\u0441"+
		"\u0445\7Q\2\2\u0442\u0444\7`\2\2\u0443\u0442\3\2\2\2\u0444\u0447\3\2\2"+
		"\2\u0445\u0443\3\2\2\2\u0445\u0446\3\2\2\2\u0446\u0448\3\2\2\2\u0447\u0445"+
		"\3\2\2\2\u0448\u044c\7\u0089\2\2\u0449\u044b\7`\2\2\u044a\u0449\3\2\2"+
		"\2\u044b\u044e\3\2\2\2\u044c\u044a\3\2\2\2\u044c\u044d\3\2\2\2\u044d\u044f"+
		"\3\2\2\2\u044e\u044c\3\2\2\2\u044f\u0451\5Z.\2\u0450\u0452\7Q\2\2\u0451"+
		"\u0450\3\2\2\2\u0451\u0452\3\2\2\2\u0452\u045e\3\2\2\2\u0453\u0457\7\u0089"+
		"\2\2\u0454\u0456\7`\2\2\u0455\u0454\3\2\2\2\u0456\u0459\3\2\2\2\u0457"+
		"\u0455\3\2\2\2\u0457\u0458\3\2\2\2\u0458\u045a\3\2\2\2\u0459\u0457\3\2"+
		"\2\2\u045a\u045b\5Z.\2\u045b\u045c\7Q\2\2\u045c\u045e\3\2\2\2\u045d\u043a"+
		"\3\2\2\2\u045d\u0453\3\2\2\2\u045e9\3\2\2\2\u045f\u0463\7\u0097\2\2\u0460"+
		"\u0462\7`\2\2\u0461\u0460\3\2\2\2\u0462\u0465\3\2\2\2\u0463\u0461\3\2"+
		"\2\2\u0463\u0464\3\2\2\2\u0464\u0466\3\2\2\2\u0465\u0463\3\2\2\2\u0466"+
		"\u046a\7R\2\2\u0467\u0469\7`\2\2\u0468\u0467\3\2\2\2\u0469\u046c\3\2\2"+
		"\2\u046a\u0468\3\2\2\2\u046a\u046b\3\2\2\2\u046b\u046d\3\2\2\2\u046c\u046a"+
		"\3\2\2\2\u046d\u0471\7\u0089\2\2\u046e\u0470\7`\2\2\u046f\u046e\3\2\2"+
		"\2\u0470\u0473\3\2\2\2\u0471\u046f\3\2\2\2\u0471\u0472\3\2\2\2\u0472\u0474"+
		"\3\2\2\2\u0473\u0471\3\2\2\2\u0474\u0476\5\\/\2\u0475\u0477\7R\2\2\u0476"+
		"\u0475\3\2\2\2\u0476\u0477\3\2\2\2\u0477\u0483\3\2\2\2\u0478\u047c\7\u0089"+
		"\2\2\u0479\u047b\7`\2\2\u047a\u0479\3\2\2\2\u047b\u047e\3\2\2\2\u047c"+
		"\u047a\3\2\2\2\u047c\u047d\3\2\2\2\u047d\u047f\3\2\2\2\u047e\u047c\3\2"+
		"\2\2\u047f\u0480\5\\/\2\u0480\u0481\7R\2\2\u0481\u0483\3\2\2\2\u0482\u045f"+
		"\3\2\2\2\u0482\u0478\3\2\2\2\u0483;\3\2\2\2\u0484\u0488\7\u0097\2\2\u0485"+
		"\u0487\7`\2\2\u0486\u0485\3\2\2\2\u0487\u048a\3\2\2\2\u0488\u0486\3\2"+
		"\2\2\u0488\u0489\3\2\2\2\u0489\u048b\3\2\2\2\u048a\u0488\3\2\2\2\u048b"+
		"\u048f\7S\2\2\u048c\u048e\7`\2\2\u048d\u048c\3\2\2\2\u048e\u0491\3\2\2"+
		"\2\u048f\u048d\3\2\2\2\u048f\u0490\3\2\2\2\u0490\u0492\3\2\2\2\u0491\u048f"+
		"\3\2\2\2\u0492\u0496\7\u0089\2\2\u0493\u0495\7`\2\2\u0494\u0493\3\2\2"+
		"\2\u0495\u0498\3\2\2\2\u0496\u0494\3\2\2\2\u0496\u0497\3\2\2\2\u0497\u0499"+
		"\3\2\2\2\u0498\u0496\3\2\2\2\u0499\u049b\5^\60\2\u049a\u049c\7S\2\2\u049b"+
		"\u049a\3\2\2\2\u049b\u049c\3\2\2\2\u049c\u04a8\3\2\2\2\u049d\u04a1\7\u0089"+
		"\2\2\u049e\u04a0\7`\2\2\u049f\u049e\3\2\2\2\u04a0\u04a3\3\2\2\2\u04a1"+
		"\u049f\3\2\2\2\u04a1\u04a2\3\2\2\2\u04a2\u04a4\3\2\2\2\u04a3\u04a1\3\2"+
		"\2\2\u04a4\u04a5\5^\60\2\u04a5\u04a6\7S\2\2\u04a6\u04a8\3\2\2\2\u04a7"+
		"\u0484\3\2\2\2\u04a7\u049d\3\2\2\2\u04a8=\3\2\2\2\u04a9\u04ad\7\u0097"+
		"\2\2\u04aa\u04ac\7`\2\2\u04ab\u04aa\3\2\2\2\u04ac\u04af\3\2\2\2\u04ad"+
		"\u04ab\3\2\2\2\u04ad\u04ae\3\2\2\2\u04ae\u04b0\3\2\2\2\u04af\u04ad\3\2"+
		"\2\2\u04b0\u04b4\7T\2\2\u04b1\u04b3\7`\2\2\u04b2\u04b1\3\2\2\2\u04b3\u04b6"+
		"\3\2\2\2\u04b4\u04b2\3\2\2\2\u04b4\u04b5\3\2\2\2\u04b5\u04b7\3\2\2\2\u04b6"+
		"\u04b4\3\2\2\2\u04b7\u04bb\7\u0089\2\2\u04b8\u04ba\7`\2\2\u04b9\u04b8"+
		"\3\2\2\2\u04ba\u04bd\3\2\2\2\u04bb\u04b9\3\2\2\2\u04bb\u04bc\3\2\2\2\u04bc"+
		"\u04be\3\2\2\2\u04bd\u04bb\3\2\2\2\u04be\u04c0\5`\61\2\u04bf\u04c1\7T"+
		"\2\2\u04c0\u04bf\3\2\2\2\u04c0\u04c1\3\2\2\2\u04c1\u04cd\3\2\2\2\u04c2"+
		"\u04c6\7\u0089\2\2\u04c3\u04c5\7`\2\2\u04c4\u04c3\3\2\2\2\u04c5\u04c8"+
		"\3\2\2\2\u04c6\u04c4\3\2\2\2\u04c6\u04c7\3\2\2\2\u04c7\u04c9\3\2\2\2\u04c8"+
		"\u04c6\3\2\2\2\u04c9\u04ca\5`\61\2\u04ca\u04cb\7T\2\2\u04cb\u04cd\3\2"+
		"\2\2\u04cc\u04a9\3\2\2\2\u04cc\u04c2\3\2\2\2\u04cd?\3\2\2\2\u04ce\u04d2"+
		"\7\u0097\2\2\u04cf\u04d1\7`\2\2\u04d0\u04cf\3\2\2\2\u04d1\u04d4\3\2\2"+
		"\2\u04d2\u04d0\3\2\2\2\u04d2\u04d3\3\2\2\2\u04d3\u04d5\3\2\2\2\u04d4\u04d2"+
		"\3\2\2\2\u04d5\u04d9\7U\2\2\u04d6\u04d8\7`\2\2\u04d7\u04d6\3\2\2\2\u04d8"+
		"\u04db\3\2\2\2\u04d9\u04d7\3\2\2\2\u04d9\u04da\3\2\2\2\u04da\u04dc\3\2"+
		"\2\2\u04db\u04d9\3\2\2\2\u04dc\u04e0\7\u0089\2\2\u04dd\u04df\7`\2\2\u04de"+
		"\u04dd\3\2\2\2\u04df\u04e2\3\2\2\2\u04e0\u04de\3\2\2\2\u04e0\u04e1\3\2"+
		"\2\2\u04e1\u04e3\3\2\2\2\u04e2\u04e0\3\2\2\2\u04e3\u04e5\5b\62\2\u04e4"+
		"\u04e6\7U\2\2\u04e5\u04e4\3\2\2\2\u04e5\u04e6\3\2\2\2\u04e6\u04f3\3\2"+
		"\2\2\u04e7\u04eb\7\u0089\2\2\u04e8\u04ea\7`\2\2\u04e9\u04e8\3\2\2\2\u04ea"+
		"\u04ed\3\2\2\2\u04eb\u04e9\3\2\2\2\u04eb\u04ec\3\2\2\2\u04ec\u04ee\3\2"+
		"\2\2\u04ed\u04eb\3\2\2\2\u04ee\u04f0\5b\62\2\u04ef\u04f1\7U\2\2\u04f0"+
		"\u04ef\3\2\2\2\u04f0\u04f1\3\2\2\2\u04f1\u04f3\3\2\2\2\u04f2\u04ce\3\2"+
		"\2\2\u04f2\u04e7\3\2\2\2\u04f3A\3\2\2\2\u04f4\u04f8\7\u0097\2\2\u04f5"+
		"\u04f7\7`\2\2\u04f6\u04f5\3\2\2\2\u04f7\u04fa\3\2\2\2\u04f8\u04f6\3\2"+
		"\2\2\u04f8\u04f9\3\2\2\2\u04f9\u04fb\3\2\2\2\u04fa\u04f8\3\2\2\2\u04fb"+
		"\u04ff\7V\2\2\u04fc\u04fe\7`\2\2\u04fd\u04fc\3\2\2\2\u04fe\u0501\3\2\2"+
		"\2\u04ff\u04fd\3\2\2\2\u04ff\u0500\3\2\2\2\u0500\u0502\3\2\2\2\u0501\u04ff"+
		"\3\2\2\2\u0502\u0506\7\u0089\2\2\u0503\u0505\7`\2\2\u0504\u0503\3\2\2"+
		"\2\u0505\u0508\3\2\2\2\u0506\u0504\3\2\2\2\u0506\u0507\3\2\2\2\u0507\u0509"+
		"\3\2\2\2\u0508\u0506\3\2\2\2\u0509\u050b\5d\63\2\u050a\u050c\7V\2\2\u050b"+
		"\u050a\3\2\2\2\u050b\u050c\3\2\2\2\u050c\u0518\3\2\2\2\u050d\u0511\7\u0089"+
		"\2\2\u050e\u0510\7`\2\2\u050f\u050e\3\2\2\2\u0510\u0513\3\2\2\2\u0511"+
		"\u050f\3\2\2\2\u0511\u0512\3\2\2\2\u0512\u0514\3\2\2\2\u0513\u0511\3\2"+
		"\2\2\u0514\u0515\5d\63\2\u0515\u0516\7V\2\2\u0516\u0518\3\2\2\2\u0517"+
		"\u04f4\3\2\2\2\u0517\u050d\3\2\2\2\u0518C\3\2\2\2\u0519\u051d\7\16\2\2"+
		"\u051a\u051c\7`\2\2\u051b\u051a\3\2\2\2\u051c\u051f\3\2\2\2\u051d\u051b"+
		"\3\2\2\2\u051d\u051e\3\2\2\2\u051e\u0520\3\2\2\2\u051f\u051d\3\2\2\2\u0520"+
		"\u0524\7\u0089\2\2\u0521\u0523\7`\2\2\u0522\u0521\3\2\2\2\u0523\u0526"+
		"\3\2\2\2\u0524\u0522\3\2\2\2\u0524\u0525\3\2\2\2\u0525\u0527\3\2\2\2\u0526"+
		"\u0524\3\2\2\2\u0527\u052b\5h\65\2\u0528\u052a\7`\2\2\u0529\u0528\3\2"+
		"\2\2\u052a\u052d\3\2\2\2\u052b\u0529\3\2\2\2\u052b\u052c\3\2\2\2\u052c"+
		"\u052e\3\2\2\2\u052d\u052b\3\2\2\2\u052e\u052f\7\u0096\2\2\u052fE\3\2"+
		"\2\2\u0530\u0532\7\n\2\2\u0531\u0533\7`\2\2\u0532\u0531\3\2\2\2\u0533"+
		"\u0534\3\2\2\2\u0534\u0532\3\2\2\2\u0534\u0535\3\2\2\2\u0535\u0536\3\2"+
		"\2\2\u0536\u053a\5L\'\2\u0537\u0539\7`\2\2\u0538\u0537\3\2\2\2\u0539\u053c"+
		"\3\2\2\2\u053a\u0538\3\2\2\2\u053a\u053b\3\2\2\2\u053b\u053d\3\2\2\2\u053c"+
		"\u053a\3\2\2\2\u053d\u053e\7\u0096\2\2\u053eG\3\2\2\2\u053f\u0541\7\17"+
		"\2\2\u0540\u0542\7`\2\2\u0541\u0540\3\2\2\2\u0542\u0543\3\2\2\2\u0543"+
		"\u0541\3\2\2\2\u0543\u0544\3\2\2\2\u0544\u0545\3\2\2\2\u0545\u0549\5J"+
		"&\2\u0546\u0548\7`\2\2\u0547\u0546\3\2\2\2\u0548\u054b\3\2\2\2\u0549\u0547"+
		"\3\2\2\2\u0549\u054a\3\2\2\2\u054a\u054c\3\2\2\2\u054b\u0549\3\2\2\2\u054c"+
		"\u054d\7\u0096\2\2\u054dI\3\2\2\2\u054e\u0550\5L\'\2\u054f\u054e\3\2\2"+
		"\2\u054f\u0550\3\2\2\2\u0550\u0551\3\2\2\2\u0551\u0553\7\u0098\2\2\u0552"+
		"\u054f\3\2\2\2\u0552\u0553\3\2\2\2\u0553\u0564\3\2\2\2\u0554\u0565\7v"+
		"\2\2\u0555\u0561\7\u009e\2\2\u0556\u055b\5J&\2\u0557\u0558\7\u0095\2\2"+
		"\u0558\u055a\5J&\2\u0559\u0557\3\2\2\2\u055a\u055d\3\2\2\2\u055b\u0559"+
		"\3\2\2\2\u055b\u055c\3\2\2\2\u055c\u055f\3\2\2\2\u055d\u055b\3\2\2\2\u055e"+
		"\u0560\7\u0095\2\2\u055f\u055e\3\2\2\2\u055f\u0560\3\2\2\2\u0560\u0562"+
		"\3\2\2\2\u0561\u0556\3\2\2\2\u0561\u0562\3\2\2\2\u0562\u0563\3\2\2\2\u0563"+
		"\u0565\7\u009f\2\2\u0564\u0554\3\2\2\2\u0564\u0555\3\2\2\2\u0565\u056c"+
		"\3\2\2\2\u0566\u0569\5L\'\2\u0567\u0568\7\4\2\2\u0568\u056a\5h\65\2\u0569"+
		"\u0567\3\2\2\2\u0569\u056a\3\2\2\2\u056a\u056c\3\2\2\2\u056b\u0552\3\2"+
		"\2\2\u056b\u0566\3\2\2\2\u056cK\3\2\2\2\u056d\u056f\7\u0098\2\2\u056e"+
		"\u056d\3\2\2\2\u056e\u056f\3\2\2\2\u056f\u0570\3\2\2\2\u0570\u0575\5h"+
		"\65\2\u0571\u0572\7\u0098\2\2\u0572\u0574\5h\65\2\u0573\u0571\3\2\2\2"+
		"\u0574\u0577\3\2\2\2\u0575\u0573\3\2\2\2\u0575\u0576\3\2\2\2\u0576M\3"+
		"\2\2\2\u0577\u0575\3\2\2\2\u0578\u0579\t\2\2\2\u0579O\3\2\2\2\u057a\u057b"+
		"\7a\2\2\u057bQ\3\2\2\2\u057c\u057d\7l\2\2\u057dS\3\2\2\2\u057e\u057f\7"+
		"l\2\2\u057fU\3\2\2\2\u0580\u0582\7u\2\2\u0581\u0580\3\2\2\2\u0581\u0582"+
		"\3\2\2\2\u0582\u0583\3\2\2\2\u0583\u058b\t\3\2\2\u0584\u0585\7p\2\2\u0585"+
		"\u058b\t\4\2\2\u0586\u0587\7q\2\2\u0587\u058b\t\5\2\2\u0588\u0589\7r\2"+
		"\2\u0589\u058b\t\6\2\2\u058a\u0581\3\2\2\2\u058a\u0584\3\2\2\2\u058a\u0586"+
		"\3\2\2\2\u058a\u0588\3\2\2\2\u058bW\3\2\2\2\u058c\u058e\7u\2\2\u058d\u058c"+
		"\3\2\2\2\u058d\u058e\3\2\2\2\u058e\u058f\3\2\2\2\u058f\u0597\t\3\2\2\u0590"+
		"\u0591\7p\2\2\u0591\u0597\t\4\2\2\u0592\u0593\7q\2\2\u0593\u0597\t\5\2"+
		"\2\u0594\u0595\7r\2\2\u0595\u0597\t\6\2\2\u0596\u058d\3\2\2\2\u0596\u0590"+
		"\3\2\2\2\u0596\u0592\3\2\2\2\u0596\u0594\3\2\2\2\u0597Y\3\2\2\2\u0598"+
		"\u059a\7u\2\2\u0599\u0598\3\2\2\2\u0599\u059a\3\2\2\2\u059a\u059b\3\2"+
		"\2\2\u059b\u05a3\t\3\2\2\u059c\u059d\7p\2\2\u059d\u05a3\t\4\2\2\u059e"+
		"\u059f\7q\2\2\u059f\u05a3\t\5\2\2\u05a0\u05a1\7r\2\2\u05a1\u05a3\t\6\2"+
		"\2\u05a2\u0599\3\2\2\2\u05a2\u059c\3\2\2\2\u05a2\u059e\3\2\2\2\u05a2\u05a0"+
		"\3\2\2\2\u05a3[\3\2\2\2\u05a4\u05a6\7u\2\2\u05a5\u05a4\3\2\2\2\u05a5\u05a6"+
		"\3\2\2\2\u05a6\u05a7\3\2\2\2\u05a7\u05af\t\3\2\2\u05a8\u05a9\7p\2\2\u05a9"+
		"\u05af\t\4\2\2\u05aa\u05ab\7q\2\2\u05ab\u05af\t\5\2\2\u05ac\u05ad\7r\2"+
		"\2\u05ad\u05af\t\6\2\2\u05ae\u05a5\3\2\2\2\u05ae\u05a8\3\2\2\2\u05ae\u05aa"+
		"\3\2\2\2\u05ae\u05ac\3\2\2\2\u05af]\3\2\2\2\u05b0\u05b2\7u\2\2\u05b1\u05b0"+
		"\3\2\2\2\u05b1\u05b2\3\2\2\2\u05b2\u05b3\3\2\2\2\u05b3\u05bb\t\3\2\2\u05b4"+
		"\u05b5\7p\2\2\u05b5\u05bb\t\4\2\2\u05b6\u05b7\7q\2\2\u05b7\u05bb\t\5\2"+
		"\2\u05b8\u05b9\7r\2\2\u05b9\u05bb\t\6\2\2\u05ba\u05b1\3\2\2\2\u05ba\u05b4"+
		"\3\2\2\2\u05ba\u05b6\3\2\2\2\u05ba\u05b8\3\2\2\2\u05bb_\3\2\2\2\u05bc"+
		"\u05be\7u\2\2\u05bd\u05bc\3\2\2\2\u05bd\u05be\3\2\2\2\u05be\u05bf\3\2"+
		"\2\2\u05bf\u05c7\t\3\2\2\u05c0\u05c1\7p\2\2\u05c1\u05c7\t\4\2\2\u05c2"+
		"\u05c3\7q\2\2\u05c3\u05c7\t\5\2\2\u05c4\u05c5\7r\2\2\u05c5\u05c7\t\6\2"+
		"\2\u05c6\u05bd\3\2\2\2\u05c6\u05c0\3\2\2\2\u05c6\u05c2\3\2\2\2\u05c6\u05c4"+
		"\3\2\2\2\u05c7a\3\2\2\2\u05c8\u05ca\7u\2\2\u05c9\u05c8\3\2\2\2\u05c9\u05ca"+
		"\3\2\2\2\u05ca\u05cb\3\2\2\2\u05cb\u05d3\t\3\2\2\u05cc\u05cd\7p\2\2\u05cd"+
		"\u05d3\t\4\2\2\u05ce\u05cf\7q\2\2\u05cf\u05d3\t\5\2\2\u05d0\u05d1\7r\2"+
		"\2\u05d1\u05d3\t\6\2\2\u05d2\u05c9\3\2\2\2\u05d2\u05cc\3\2\2\2\u05d2\u05ce"+
		"\3\2\2\2\u05d2\u05d0\3\2\2\2\u05d3c\3\2\2\2\u05d4\u05d6\7u\2\2\u05d5\u05d4"+
		"\3\2\2\2\u05d5\u05d6\3\2\2\2\u05d6\u05d7\3\2\2\2\u05d7\u05df\t\3\2\2\u05d8"+
		"\u05d9\7p\2\2\u05d9\u05df\t\4\2\2\u05da\u05db\7q\2\2\u05db\u05df\t\5\2"+
		"\2\u05dc\u05dd\7r\2\2\u05dd\u05df\t\6\2\2\u05de\u05d5\3\2\2\2\u05de\u05d8"+
		"\3\2\2\2\u05de\u05da\3\2\2\2\u05de\u05dc\3\2\2\2\u05dfe\3\2\2\2\u05e0"+
		"\u05e1\t\7\2\2\u05e1g\3\2\2\2\u05e2\u05e6\7W\2\2\u05e3\u05e4\7s\2\2\u05e4"+
		"\u05e6\7W\2\2\u05e5\u05e2\3\2\2\2\u05e5\u05e3\3\2\2\2\u05e6i\3\2\2\2\u05e7"+
		"\u05e8\t\b\2\2\u05e8k\3\2\2\2\u00ccow}\u0082\u0088\u008e\u0096\u009c\u00a5"+
		"\u00b6\u00bb\u00c4\u00cb\u00d2\u00e4\u00e9\u00f0\u00f5\u00fb\u0105\u010c"+
		"\u0113\u0125\u012a\u0131\u0136\u0140\u0147\u014e\u0155\u015f\u0166\u016d"+
		"\u0174\u017b\u0182\u018c\u0193\u019b\u01ad\u01b4\u01bb\u01bf\u01c3\u01c9"+
		"\u01d0\u01d7\u01de\u01e1\u01e7\u01ef\u01f6\u01fb\u0201\u020b\u0212\u0219"+
		"\u021f\u0223\u0229\u0231\u0238\u023d\u0247\u024e\u0255\u025c\u0263\u026a"+
		"\u026e\u0276\u027d\u0284\u028b\u0292\u0299\u02a0\u02a7\u02ab\u02b6\u02bd"+
		"\u02c5\u02cd\u02ec\u02f2\u02f9\u0300\u0308\u030f\u0317\u031d\u0324\u032b"+
		"\u0358\u035e\u0362\u0367\u036e\u0377\u037b\u0380\u0387\u0390\u0394\u0399"+
		"\u03a0\u03a9\u03b0\u03b7\u03bc\u03c2\u03c7\u03c9\u03cf\u03d6\u03dd\u03e2"+
		"\u03e8\u03ee\u03f4\u03fb\u0402\u0407\u040d\u0413\u0419\u0420\u0427\u042c"+
		"\u0432\u0438\u043e\u0445\u044c\u0451\u0457\u045d\u0463\u046a\u0471\u0476"+
		"\u047c\u0482\u0488\u048f\u0496\u049b\u04a1\u04a7\u04ad\u04b4\u04bb\u04c0"+
		"\u04c6\u04cc\u04d2\u04d9\u04e0\u04e5\u04eb\u04f0\u04f2\u04f8\u04ff\u0506"+
		"\u050b\u0511\u0517\u051d\u0524\u052b\u0534\u053a\u0543\u0549\u054f\u0552"+
		"\u055b\u055f\u0561\u0564\u0569\u056b\u056e\u0575\u0581\u058a\u058d\u0596"+
		"\u0599\u05a2\u05a5\u05ae\u05b1\u05ba\u05bd\u05c6\u05c9\u05d2\u05d5\u05de"+
		"\u05e5";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}