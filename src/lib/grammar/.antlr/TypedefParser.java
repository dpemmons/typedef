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
		RULE_compilationUnit = 0, RULE_maybeValuedSymbolDeclaration = 1, RULE_typeDeclaration = 2, 
		RULE_structDeclaration = 3, RULE_variantDeclaration = 4, RULE_vectorDeclaration = 5, 
		RULE_mapDeclaration = 6, RULE_maybeValuedSymbol = 7, RULE_unvaluedSymbol = 8, 
		RULE_inlineStruct = 9, RULE_inlineVariant = 10, RULE_inlineVector = 11, 
		RULE_inlineMap = 12, RULE_maybeValuedType = 13, RULE_valuedType = 14, 
		RULE_unvaluedType = 15, RULE_symbolReference = 16, RULE_primitiveType = 17, 
		RULE_valuedPrimitiveType = 18, RULE_valuedBoolFragment = 19, RULE_valuedCharFragment = 20, 
		RULE_valuedStringFragment = 21, RULE_valuedF32Fragment = 22, RULE_valuedF64Fragment = 23, 
		RULE_valuedU8Fragment = 24, RULE_valuedU16Fragment = 25, RULE_valuedU32Fragment = 26, 
		RULE_valuedU64Fragment = 27, RULE_valuedI8Fragment = 28, RULE_valuedI16Fragment = 29, 
		RULE_valuedI32Fragment = 30, RULE_valuedI64Fragment = 31, RULE_typedefVersionDeclaration = 32, 
		RULE_moduleDeclaration = 33, RULE_useDeclaration = 34, RULE_useTree = 35, 
		RULE_simplePath = 36, RULE_boolLiteral = 37, RULE_charLiteral = 38, RULE_f32Literal = 39, 
		RULE_f64Literal = 40, RULE_u8Literal = 41, RULE_u16Literal = 42, RULE_u32Literal = 43, 
		RULE_u64Literal = 44, RULE_i8Literal = 45, RULE_i16Literal = 46, RULE_i32Literal = 47, 
		RULE_i64Literal = 48, RULE_stringLiteral = 49, RULE_identifier = 50, RULE_keyword = 51;
	private static String[] makeRuleNames() {
		return new String[] {
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

	public TypedefParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class CompilationUnitContext extends ParserRuleContext {
		public td::SymbolTable symbol_table;
		public std::string version;
		public std::vector<std::string> module;
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
			setState(104);
			((CompilationUnitContext)_localctx).typedefVersionDeclaration = typedefVersionDeclaration();
			 ((CompilationUnitContext)_localctx).version =  ((CompilationUnitContext)_localctx).typedefVersionDeclaration->version; 
			setState(109);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(106);
					match(WS);
					}
					} 
				}
				setState(111);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			}
			setState(115);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==KW_MODULE) {
				{
				setState(112);
				((CompilationUnitContext)_localctx).moduleDeclaration = moduleDeclaration();
				 ((CompilationUnitContext)_localctx).module =  ((CompilationUnitContext)_localctx).moduleDeclaration->module; 
				}
			}

			setState(126);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(120);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==WS) {
						{
						{
						setState(117);
						match(WS);
						}
						}
						setState(122);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(123);
					useDeclaration();
					}
					} 
				}
				setState(128);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			}
			setState(140);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(132);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==WS) {
						{
						{
						setState(129);
						match(WS);
						}
						}
						setState(134);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(135);
					((CompilationUnitContext)_localctx).typeDeclaration = typeDeclaration();

							TryInsert(_localctx.symbol_table, ((CompilationUnitContext)_localctx).typeDeclaration, this);
						
					}
					} 
				}
				setState(142);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			}
			setState(146);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(143);
				match(WS);
				}
				}
				setState(148);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(149);
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
			setState(151);
			maybeValuedSymbol();
			setState(155);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(152);
				match(WS);
				}
				}
				setState(157);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(158);
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
			setState(172);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case KW_STRUCT:
				{
				setState(160);
				((TypeDeclarationContext)_localctx).structDeclaration = structDeclaration();
				 ((TypeDeclarationContext)_localctx).maybe_symbol =  ((TypeDeclarationContext)_localctx).structDeclaration->maybe_symbol; 
				}
				break;
			case KW_VARIANT:
				{
				setState(163);
				((TypeDeclarationContext)_localctx).variantDeclaration = variantDeclaration();
				 ((TypeDeclarationContext)_localctx).maybe_symbol =  ((TypeDeclarationContext)_localctx).variantDeclaration->maybe_symbol; 
				}
				break;
			case KW_VECTOR:
				{
				setState(166);
				((TypeDeclarationContext)_localctx).vectorDeclaration = vectorDeclaration();
				 ((TypeDeclarationContext)_localctx).maybe_symbol =  ((TypeDeclarationContext)_localctx).vectorDeclaration->maybe_symbol; 
				}
				break;
			case KW_MAP:
				{
				setState(169);
				((TypeDeclarationContext)_localctx).mapDeclaration = mapDeclaration();
				 ((TypeDeclarationContext)_localctx).maybe_symbol =  ((TypeDeclarationContext)_localctx).mapDeclaration->maybe_symbol; 
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
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
			setState(182);
			match(KW_STRUCT);
			setState(186);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(183);
				match(WS);
				}
				}
				setState(188);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(189);
			((StructDeclarationContext)_localctx).identifier = identifier();
			setState(193);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(190);
				match(WS);
				}
				}
				setState(195);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(196);
			match(LBRACE);
			setState(200);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(197);
					match(WS);
					}
					} 
				}
				setState(202);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			}
			setState(235);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << KW_STRUCT) | (1L << KW_VARIANT) | (1L << KW_VECTOR) | (1L << KW_MAP))) != 0) || _la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE) {
				{
				{
				setState(218);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case NON_KEYWORD_IDENTIFIER:
				case RAW_ESCAPE:
					{
					setState(203);
					((StructDeclarationContext)_localctx).maybeValuedSymbol = maybeValuedSymbol();

									TryInsertSymbol(_localctx.s, this, ((StructDeclarationContext)_localctx).maybeValuedSymbol);
								
					}
					break;
				case KW_STRUCT:
					{
					setState(206);
					((StructDeclarationContext)_localctx).structDeclaration = structDeclaration();

									TryInsertNested(_localctx.s, this, ((StructDeclarationContext)_localctx).structDeclaration);
								
					}
					break;
				case KW_VARIANT:
					{
					setState(209);
					((StructDeclarationContext)_localctx).variantDeclaration = variantDeclaration();

									TryInsertNested(_localctx.s, this, ((StructDeclarationContext)_localctx).variantDeclaration);
								
					}
					break;
				case KW_VECTOR:
					{
					setState(212);
					((StructDeclarationContext)_localctx).vectorDeclaration = vectorDeclaration();

									TryInsertNested(_localctx.s, this, ((StructDeclarationContext)_localctx).vectorDeclaration);
								
					}
					break;
				case KW_MAP:
					{
					setState(215);
					((StructDeclarationContext)_localctx).mapDeclaration = mapDeclaration();

									TryInsertNested(_localctx.s, this, ((StructDeclarationContext)_localctx).mapDeclaration);
								
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
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
				match(SEMI);
				setState(230);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,15,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(227);
						match(WS);
						}
						} 
					}
					setState(232);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,15,_ctx);
				}
				}
				}
				setState(237);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(241);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(238);
				match(WS);
				}
				}
				setState(243);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(244);
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
			setState(247);
			match(KW_VARIANT);
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
			((VariantDeclarationContext)_localctx).identifier = identifier();
			setState(258);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(255);
				match(WS);
				}
				}
				setState(260);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(261);
			match(LBRACE);
			setState(300);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << KW_STRUCT) | (1L << KW_VARIANT) | (1L << KW_VECTOR) | (1L << KW_MAP))) != 0) || ((((_la - 84)) & ~0x3f) == 0 && ((1L << (_la - 84)) & ((1L << (NON_KEYWORD_IDENTIFIER - 84)) | (1L << (WS - 84)) | (1L << (RAW_ESCAPE - 84)))) != 0)) {
				{
				{
				setState(265);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(262);
					match(WS);
					}
					}
					setState(267);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(283);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case NON_KEYWORD_IDENTIFIER:
				case RAW_ESCAPE:
					{
					setState(268);
					((VariantDeclarationContext)_localctx).unvaluedSymbol = unvaluedSymbol();

									TryInsertSymbol(_localctx.v, this, ((VariantDeclarationContext)_localctx).unvaluedSymbol);
								
					}
					break;
				case KW_STRUCT:
					{
					setState(271);
					((VariantDeclarationContext)_localctx).structDeclaration = structDeclaration();

									TryInsertNested(_localctx.v, this, ((VariantDeclarationContext)_localctx).structDeclaration);
								
					}
					break;
				case KW_VARIANT:
					{
					setState(274);
					((VariantDeclarationContext)_localctx).variantDeclaration = variantDeclaration();

									TryInsertNested(_localctx.v, this, ((VariantDeclarationContext)_localctx).variantDeclaration);
								
					}
					break;
				case KW_VECTOR:
					{
					setState(277);
					((VariantDeclarationContext)_localctx).vectorDeclaration = vectorDeclaration();

									TryInsertNested(_localctx.v, this, ((VariantDeclarationContext)_localctx).vectorDeclaration);
								
					}
					break;
				case KW_MAP:
					{
					setState(280);
					((VariantDeclarationContext)_localctx).mapDeclaration = mapDeclaration();

									TryInsertNested(_localctx.v, this, ((VariantDeclarationContext)_localctx).mapDeclaration);
								
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(288);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(285);
					match(WS);
					}
					}
					setState(290);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(291);
				match(SEMI);
				setState(295);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(292);
						match(WS);
						}
						} 
					}
					setState(297);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
				}
				}
				}
				setState(302);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(303);
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
			setState(306);
			match(KW_VECTOR);
			setState(310);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(307);
				match(WS);
				}
				}
				setState(312);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(313);
			((VectorDeclarationContext)_localctx).identifier = identifier();
			setState(317);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(314);
				match(WS);
				}
				}
				setState(319);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(320);
			match(LT);
			setState(324);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(321);
				match(WS);
				}
				}
				setState(326);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(327);
			((VectorDeclarationContext)_localctx).val = ((VectorDeclarationContext)_localctx).unvaluedType = unvaluedType();
			setState(331);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(328);
				match(WS);
				}
				}
				setState(333);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(334);
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
			setState(337);
			match(KW_MAP);
			setState(341);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(338);
				match(WS);
				}
				}
				setState(343);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(344);
			((MapDeclarationContext)_localctx).identifier = identifier();
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
			match(LT);
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
			((MapDeclarationContext)_localctx).key = primitiveType();
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
			match(COMMA);
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
			((MapDeclarationContext)_localctx).val = unvaluedType();
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
			setState(379);
			match(GT);

					// Map Declaration
					if (((MapDeclarationContext)_localctx).key->maybe_val && ((MapDeclarationContext)_localctx).val->maybe_val) {
						((MapDeclarationContext)_localctx).maybe_symbol =  std::make_pair(
							td::Identifier::ValueIdentifier(((MapDeclarationContext)_localctx).identifier->id),
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
			setState(401);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,37,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(382);
				((MaybeValuedSymbolContext)_localctx).identifier = identifier();
				setState(386);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,35,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(383);
						match(WS);
						}
						} 
					}
					setState(388);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,35,_ctx);
				}
				setState(389);
				((MaybeValuedSymbolContext)_localctx).maybeValuedType = maybeValuedType();
				setState(393);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,36,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(390);
						match(WS);
						}
						} 
					}
					setState(395);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,36,_ctx);
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
				setState(398);
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
			setState(432);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,40,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(403);
				((UnvaluedSymbolContext)_localctx).inlineStruct = inlineStruct();
				((UnvaluedSymbolContext)_localctx).maybe_symbol =  ((UnvaluedSymbolContext)_localctx).inlineStruct->maybe_symbol; 
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(406);
				((UnvaluedSymbolContext)_localctx).inlineVariant = inlineVariant();
				((UnvaluedSymbolContext)_localctx).maybe_symbol =  ((UnvaluedSymbolContext)_localctx).inlineVariant->maybe_symbol; 
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(409);
				((UnvaluedSymbolContext)_localctx).inlineVector = inlineVector();
				((UnvaluedSymbolContext)_localctx).maybe_symbol =  ((UnvaluedSymbolContext)_localctx).inlineVector->maybe_symbol; 
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(412);
				((UnvaluedSymbolContext)_localctx).inlineMap = inlineMap();
				((UnvaluedSymbolContext)_localctx).maybe_symbol =  ((UnvaluedSymbolContext)_localctx).inlineMap->maybe_symbol; 
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				{
				setState(415);
				((UnvaluedSymbolContext)_localctx).identifier = identifier();
				setState(419);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(416);
					match(WS);
					}
					}
					setState(421);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(422);
				match(COLON);
				setState(426);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(423);
					match(WS);
					}
					}
					setState(428);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(429);
				((UnvaluedSymbolContext)_localctx).unvaluedType = unvaluedType();

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
			setState(434);
			((InlineStructContext)_localctx).identifier = identifier();
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
			match(COLON);
			setState(445);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(442);
				match(WS);
				}
				}
				setState(447);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(448);
			match(KW_STRUCT);
			setState(452);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(449);
				match(WS);
				}
				}
				setState(454);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(455);
			match(LBRACE);
			setState(459);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,44,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(456);
					match(WS);
					}
					} 
				}
				setState(461);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,44,_ctx);
			}
			setState(479);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE) {
				{
				{
				setState(462);
				((InlineStructContext)_localctx).maybeValuedSymbol = maybeValuedSymbol();

								TryInsertSymbol(_localctx.s, this, ((InlineStructContext)_localctx).maybeValuedSymbol);
							
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
				match(SEMI);
				setState(474);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,46,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(471);
						match(WS);
						}
						} 
					}
					setState(476);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,46,_ctx);
				}
				}
				}
				setState(481);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
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
			setState(491);
			((InlineVariantContext)_localctx).identifier = identifier();
			setState(495);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(492);
				match(WS);
				}
				}
				setState(497);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(498);
			match(COLON);
			setState(502);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(499);
				match(WS);
				}
				}
				setState(504);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(505);
			match(KW_VARIANT);
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
			match(LBRACE);
			setState(536);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 84)) & ~0x3f) == 0 && ((1L << (_la - 84)) & ((1L << (NON_KEYWORD_IDENTIFIER - 84)) | (1L << (WS - 84)) | (1L << (RAW_ESCAPE - 84)))) != 0)) {
				{
				{
				setState(516);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(513);
					match(WS);
					}
					}
					setState(518);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(519);
				((InlineVariantContext)_localctx).unvaluedSymbol = unvaluedSymbol();

								TryInsertSymbol(_localctx.v, this, ((InlineVariantContext)_localctx).unvaluedSymbol);
							
				setState(524);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(521);
					match(WS);
					}
					}
					setState(526);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(527);
				match(SEMI);
				setState(531);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,54,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(528);
						match(WS);
						}
						} 
					}
					setState(533);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,54,_ctx);
				}
				}
				}
				setState(538);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(539);
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
			setState(542);
			((InlineVectorContext)_localctx).identifier = identifier();
			setState(546);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(543);
				match(WS);
				}
				}
				setState(548);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(549);
			match(COLON);
			setState(553);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(550);
				match(WS);
				}
				}
				setState(555);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(556);
			match(KW_VECTOR);
			setState(560);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(557);
				match(WS);
				}
				}
				setState(562);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(563);
			match(LT);
			setState(567);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(564);
				match(WS);
				}
				}
				setState(569);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(570);
			((InlineVectorContext)_localctx).val = ((InlineVectorContext)_localctx).unvaluedType = unvaluedType();
			setState(574);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(571);
				match(WS);
				}
				}
				setState(576);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(577);
			match(GT);

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
			setState(580);
			((InlineMapContext)_localctx).identifier = identifier();
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
			match(COLON);
			setState(591);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(588);
				match(WS);
				}
				}
				setState(593);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(594);
			match(KW_MAP);
			setState(598);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(595);
				match(WS);
				}
				}
				setState(600);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(601);
			match(LT);
			setState(605);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(602);
				match(WS);
				}
				}
				setState(607);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(608);
			((InlineMapContext)_localctx).key = primitiveType();
			setState(612);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(609);
				match(WS);
				}
				}
				setState(614);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(615);
			match(COMMA);
			setState(619);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(616);
				match(WS);
				}
				}
				setState(621);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(622);
			((InlineMapContext)_localctx).val = unvaluedType();
			setState(626);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(623);
				match(WS);
				}
				}
				setState(628);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(629);
			match(GT);

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
			setState(646);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,69,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(632);
				((MaybeValuedTypeContext)_localctx).valuedType = valuedType();
				((MaybeValuedTypeContext)_localctx).maybe_val =  ((MaybeValuedTypeContext)_localctx).valuedType->maybe_val;
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(635);
				match(COLON);
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
		enterRule(_localctx, 28, RULE_valuedType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(648);
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
			setState(657);
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
				setState(651);
				((UnvaluedTypeContext)_localctx).primitiveType = primitiveType();
				((UnvaluedTypeContext)_localctx).maybe_val =  ((UnvaluedTypeContext)_localctx).primitiveType->maybe_val;
				}
				break;
			case NON_KEYWORD_IDENTIFIER:
			case RAW_ESCAPE:
				{
				setState(654);
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
			setState(659);
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
			setState(688);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case KW_BOOL:
				enterOuterAlt(_localctx, 1);
				{
				setState(662);
				match(KW_BOOL);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<bool>(); 
				}
				break;
			case KW_CHAR:
				enterOuterAlt(_localctx, 2);
				{
				setState(664);
				match(KW_CHAR);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<char32_t>(); 
				}
				break;
			case KW_STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(666);
				match(KW_STRING);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<std::string>(); 
				}
				break;
			case KW_F32:
				enterOuterAlt(_localctx, 4);
				{
				setState(668);
				match(KW_F32);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<float>(); 
				}
				break;
			case KW_F64:
				enterOuterAlt(_localctx, 5);
				{
				setState(670);
				match(KW_F64);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<double>(); 
				}
				break;
			case KW_U8:
				enterOuterAlt(_localctx, 6);
				{
				setState(672);
				match(KW_U8);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<uint8_t>(); 
				}
				break;
			case KW_U16:
				enterOuterAlt(_localctx, 7);
				{
				setState(674);
				match(KW_U16);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<uint16_t>(); 
				}
				break;
			case KW_U32:
				enterOuterAlt(_localctx, 8);
				{
				setState(676);
				match(KW_U32);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<uint32_t>(); 
				}
				break;
			case KW_U64:
				enterOuterAlt(_localctx, 9);
				{
				setState(678);
				match(KW_U64);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<uint64_t>(); 
				}
				break;
			case KW_I8:
				enterOuterAlt(_localctx, 10);
				{
				setState(680);
				match(KW_I8);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<int8_t>(); 
				}
				break;
			case KW_I16:
				enterOuterAlt(_localctx, 11);
				{
				setState(682);
				match(KW_I16);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<int16_t>(); 
				}
				break;
			case KW_I32:
				enterOuterAlt(_localctx, 12);
				{
				setState(684);
				match(KW_I32);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<int32_t>(); 
				}
				break;
			case KW_I64:
				enterOuterAlt(_localctx, 13);
				{
				setState(686);
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
		enterRule(_localctx, 36, RULE_valuedPrimitiveType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(729);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,72,_ctx) ) {
			case 1:
				{
				setState(690);
				((ValuedPrimitiveTypeContext)_localctx).valuedBoolFragment = valuedBoolFragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedBoolFragment->literal->maybe_val;
				}
				break;
			case 2:
				{
				setState(693);
				((ValuedPrimitiveTypeContext)_localctx).valuedCharFragment = valuedCharFragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedCharFragment->literal->maybe_val;
				}
				break;
			case 3:
				{
				setState(696);
				((ValuedPrimitiveTypeContext)_localctx).valuedStringFragment = valuedStringFragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedStringFragment->literal->maybe_val;
				}
				break;
			case 4:
				{
				setState(699);
				((ValuedPrimitiveTypeContext)_localctx).valuedF32Fragment = valuedF32Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedF32Fragment->literal->maybe_val;
				}
				break;
			case 5:
				{
				setState(702);
				((ValuedPrimitiveTypeContext)_localctx).valuedF64Fragment = valuedF64Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedF64Fragment->literal->maybe_val;
				}
				break;
			case 6:
				{
				setState(705);
				((ValuedPrimitiveTypeContext)_localctx).valuedU8Fragment = valuedU8Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU8Fragment->literal->maybe_val;
				}
				break;
			case 7:
				{
				setState(708);
				((ValuedPrimitiveTypeContext)_localctx).valuedU16Fragment = valuedU16Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU16Fragment->literal->maybe_val;
				}
				break;
			case 8:
				{
				setState(711);
				((ValuedPrimitiveTypeContext)_localctx).valuedU32Fragment = valuedU32Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU32Fragment->literal->maybe_val;
				}
				break;
			case 9:
				{
				setState(714);
				((ValuedPrimitiveTypeContext)_localctx).valuedU64Fragment = valuedU64Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU64Fragment->literal->maybe_val;
				}
				break;
			case 10:
				{
				setState(717);
				((ValuedPrimitiveTypeContext)_localctx).valuedI8Fragment = valuedI8Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedI8Fragment->literal->maybe_val;
				}
				break;
			case 11:
				{
				setState(720);
				((ValuedPrimitiveTypeContext)_localctx).valuedI16Fragment = valuedI16Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedI16Fragment->literal->maybe_val;
				}
				break;
			case 12:
				{
				setState(723);
				((ValuedPrimitiveTypeContext)_localctx).valuedI32Fragment = valuedI32Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedI32Fragment->literal->maybe_val;
				}
				break;
			case 13:
				{
				setState(726);
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
		enterRule(_localctx, 38, RULE_valuedBoolFragment);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(739);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(731);
				match(COLON);
				setState(735);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(732);
					match(WS);
					}
					}
					setState(737);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(738);
				match(KW_BOOL);
				}
			}

			setState(744);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(741);
				match(WS);
				}
				}
				setState(746);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(747);
			match(EQ);
			setState(751);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(748);
				match(WS);
				}
				}
				setState(753);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(754);
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
		enterRule(_localctx, 40, RULE_valuedCharFragment);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(764);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(756);
				match(COLON);
				setState(760);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(757);
					match(WS);
					}
					}
					setState(762);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(763);
				match(KW_CHAR);
				}
			}

			setState(769);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(766);
				match(WS);
				}
				}
				setState(771);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(772);
			match(EQ);
			setState(776);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(773);
				match(WS);
				}
				}
				setState(778);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(779);
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
		enterRule(_localctx, 42, RULE_valuedStringFragment);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(789);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(781);
				match(COLON);
				setState(785);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(782);
					match(WS);
					}
					}
					setState(787);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(788);
				match(KW_STRING);
				}
			}

			setState(794);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(791);
				match(WS);
				}
				}
				setState(796);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(797);
			match(EQ);
			setState(801);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(798);
				match(WS);
				}
				}
				setState(803);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(804);
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
		enterRule(_localctx, 44, RULE_valuedF32Fragment);
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
				match(KW_F32);
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
				((ValuedF32FragmentContext)_localctx).literal = f32Literal();
				setState(829);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F32) {
					{
					setState(828);
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
				((ValuedF32FragmentContext)_localctx).literal = f32Literal();
				setState(840);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F32) {
					{
					setState(839);
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
		enterRule(_localctx, 46, RULE_valuedF64Fragment);
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
				match(KW_F64);
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
				((ValuedF64FragmentContext)_localctx).literal = f64Literal();
				setState(867);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F64) {
					{
					setState(866);
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
				((ValuedF64FragmentContext)_localctx).literal = f64Literal();
				setState(877);
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
		enterRule(_localctx, 48, RULE_valuedU8Fragment);
		int _la;
		try {
			setState(916);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
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
				match(KW_U8);
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
				match(EQ);
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
				((ValuedU8FragmentContext)_localctx).literal = u8Literal();
				setState(904);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U8) {
					{
					setState(903);
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
				setState(906);
				match(EQ);
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
				((ValuedU8FragmentContext)_localctx).literal = u8Literal();
				setState(914);
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
		enterRule(_localctx, 50, RULE_valuedU16Fragment);
		int _la;
		try {
			setState(953);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(918);
				match(COLON);
				setState(922);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(919);
					match(WS);
					}
					}
					setState(924);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(925);
				match(KW_U16);
				setState(929);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(926);
					match(WS);
					}
					}
					setState(931);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(932);
				match(EQ);
				setState(936);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(933);
					match(WS);
					}
					}
					setState(938);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(939);
				((ValuedU16FragmentContext)_localctx).literal = u16Literal();
				setState(941);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U16) {
					{
					setState(940);
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
				setState(943);
				match(EQ);
				setState(947);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(944);
					match(WS);
					}
					}
					setState(949);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(950);
				((ValuedU16FragmentContext)_localctx).literal = u16Literal();
				setState(951);
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
		enterRule(_localctx, 52, RULE_valuedU32Fragment);
		int _la;
		try {
			setState(990);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(955);
				match(COLON);
				setState(959);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(956);
					match(WS);
					}
					}
					setState(961);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(962);
				match(KW_U32);
				setState(966);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(963);
					match(WS);
					}
					}
					setState(968);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(969);
				match(EQ);
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
				((ValuedU32FragmentContext)_localctx).literal = u32Literal();
				setState(978);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U32) {
					{
					setState(977);
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
				setState(980);
				match(EQ);
				setState(984);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(981);
					match(WS);
					}
					}
					setState(986);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(987);
				((ValuedU32FragmentContext)_localctx).literal = u32Literal();
				setState(988);
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
		enterRule(_localctx, 54, RULE_valuedU64Fragment);
		int _la;
		try {
			setState(1027);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(992);
				match(COLON);
				setState(996);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(993);
					match(WS);
					}
					}
					setState(998);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(999);
				match(KW_U64);
				setState(1003);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1000);
					match(WS);
					}
					}
					setState(1005);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1006);
				match(EQ);
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
				((ValuedU64FragmentContext)_localctx).literal = u64Literal();
				setState(1015);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U64) {
					{
					setState(1014);
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
				setState(1017);
				match(EQ);
				setState(1021);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1018);
					match(WS);
					}
					}
					setState(1023);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1024);
				((ValuedU64FragmentContext)_localctx).literal = u64Literal();
				setState(1025);
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
		enterRule(_localctx, 56, RULE_valuedI8Fragment);
		int _la;
		try {
			setState(1064);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(1029);
				match(COLON);
				setState(1033);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1030);
					match(WS);
					}
					}
					setState(1035);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1036);
				match(KW_I8);
				setState(1040);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1037);
					match(WS);
					}
					}
					setState(1042);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1043);
				match(EQ);
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
				((ValuedI8FragmentContext)_localctx).literal = i8Literal();
				setState(1052);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I8) {
					{
					setState(1051);
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
				setState(1054);
				match(EQ);
				setState(1058);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1055);
					match(WS);
					}
					}
					setState(1060);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1061);
				((ValuedI8FragmentContext)_localctx).literal = i8Literal();
				setState(1062);
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
		enterRule(_localctx, 58, RULE_valuedI16Fragment);
		int _la;
		try {
			setState(1101);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(1066);
				match(COLON);
				setState(1070);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1067);
					match(WS);
					}
					}
					setState(1072);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1073);
				match(KW_I16);
				setState(1077);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1074);
					match(WS);
					}
					}
					setState(1079);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1080);
				match(EQ);
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
				((ValuedI16FragmentContext)_localctx).literal = i16Literal();
				setState(1089);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I16) {
					{
					setState(1088);
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
				setState(1091);
				match(EQ);
				setState(1095);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1092);
					match(WS);
					}
					}
					setState(1097);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1098);
				((ValuedI16FragmentContext)_localctx).literal = i16Literal();
				setState(1099);
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
		enterRule(_localctx, 60, RULE_valuedI32Fragment);
		int _la;
		try {
			setState(1139);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(1103);
				match(COLON);
				setState(1107);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1104);
					match(WS);
					}
					}
					setState(1109);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1110);
				match(KW_I32);
				setState(1114);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1111);
					match(WS);
					}
					}
					setState(1116);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1117);
				match(EQ);
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
				((ValuedI32FragmentContext)_localctx).literal = i32Literal();
				setState(1126);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I32) {
					{
					setState(1125);
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
				setState(1128);
				match(EQ);
				setState(1132);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1129);
					match(WS);
					}
					}
					setState(1134);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1135);
				((ValuedI32FragmentContext)_localctx).literal = i32Literal();
				setState(1137);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I32) {
					{
					setState(1136);
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
		enterRule(_localctx, 62, RULE_valuedI64Fragment);
		int _la;
		try {
			setState(1176);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(1141);
				match(COLON);
				setState(1145);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1142);
					match(WS);
					}
					}
					setState(1147);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1148);
				match(KW_I64);
				setState(1152);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1149);
					match(WS);
					}
					}
					setState(1154);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1155);
				match(EQ);
				setState(1159);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1156);
					match(WS);
					}
					}
					setState(1161);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1162);
				((ValuedI64FragmentContext)_localctx).literal = i64Literal();
				setState(1164);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I64) {
					{
					setState(1163);
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
				setState(1166);
				match(EQ);
				setState(1170);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1167);
					match(WS);
					}
					}
					setState(1172);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1173);
				((ValuedI64FragmentContext)_localctx).literal = i64Literal();
				setState(1174);
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
		enterRule(_localctx, 64, RULE_typedefVersionDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1178);
			match(KW_TYPEDEF);
			setState(1182);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(1179);
				match(WS);
				}
				}
				setState(1184);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1185);
			match(EQ);
			setState(1189);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(1186);
				match(WS);
				}
				}
				setState(1191);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1192);
			((TypedefVersionDeclarationContext)_localctx).identifier = identifier();
			setState(1196);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(1193);
				match(WS);
				}
				}
				setState(1198);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1199);
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
		enterRule(_localctx, 66, RULE_moduleDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1202);
			match(KW_MODULE);
			setState(1204); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(1203);
				match(WS);
				}
				}
				setState(1206); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==WS );
			setState(1208);
			((ModuleDeclarationContext)_localctx).simplePath = simplePath();
			setState(1212);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(1209);
				match(WS);
				}
				}
				setState(1214);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1215);
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
		enterRule(_localctx, 68, RULE_useDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1218);
			match(KW_USE);
			setState(1219);
			useTree();
			setState(1220);
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
		enterRule(_localctx, 70, RULE_useTree);
		int _la;
		try {
			int _alt;
			setState(1251);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,159,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1226);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE || _la==PATHSEP) {
					{
					setState(1223);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,152,_ctx) ) {
					case 1:
						{
						setState(1222);
						simplePath();
						}
						break;
					}
					setState(1225);
					match(PATHSEP);
					}
				}

				setState(1244);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case STAR:
					{
					setState(1228);
					match(STAR);
					}
					break;
				case LBRACE:
					{
					setState(1229);
					match(LBRACE);
					setState(1241);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (((((_la - 84)) & ~0x3f) == 0 && ((1L << (_la - 84)) & ((1L << (NON_KEYWORD_IDENTIFIER - 84)) | (1L << (RAW_ESCAPE - 84)) | (1L << (STAR - 84)))) != 0) || _la==PATHSEP || _la==LBRACE) {
						{
						setState(1230);
						useTree();
						setState(1235);
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,154,_ctx);
						while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
							if ( _alt==1 ) {
								{
								{
								setState(1231);
								match(COMMA);
								setState(1232);
								useTree();
								}
								} 
							}
							setState(1237);
							_errHandler.sync(this);
							_alt = getInterpreter().adaptivePredict(_input,154,_ctx);
						}
						setState(1239);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(1238);
							match(COMMA);
							}
						}

						}
					}

					setState(1243);
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
				setState(1246);
				simplePath();
				setState(1249);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_AS) {
					{
					setState(1247);
					match(KW_AS);
					setState(1248);
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
		enterRule(_localctx, 72, RULE_simplePath);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(1254);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PATHSEP) {
				{
				setState(1253);
				match(PATHSEP);
				}
			}

			setState(1256);
			((SimplePathContext)_localctx).identifier = identifier();
			_localctx.path.push_back(((SimplePathContext)_localctx).identifier->id);
			setState(1264);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,161,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1258);
					match(PATHSEP);
					setState(1259);
					((SimplePathContext)_localctx).identifier = identifier();
					_localctx.path.push_back(((SimplePathContext)_localctx).identifier->id);
					}
					} 
				}
				setState(1266);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,161,_ctx);
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
		enterRule(_localctx, 74, RULE_boolLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1267);
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
		enterRule(_localctx, 76, RULE_charLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1269);
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
		enterRule(_localctx, 78, RULE_f32Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1272);
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
		enterRule(_localctx, 80, RULE_f64Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1275);
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
		enterRule(_localctx, 82, RULE_u8Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1288);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1279);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1278);
					match(MINUS);
					}
				}

				setState(1281);
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
				setState(1282);
				match(HEX_PREFIX);
				setState(1283);
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
				setState(1284);
				match(OCT_PREFIX);
				setState(1285);
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
				setState(1286);
				match(BIN_PREFIX);
				setState(1287);
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
		enterRule(_localctx, 84, RULE_u16Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1302);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1293);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1292);
					match(MINUS);
					}
				}

				setState(1295);
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
				setState(1296);
				match(HEX_PREFIX);
				setState(1297);
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
				setState(1298);
				match(OCT_PREFIX);
				setState(1299);
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
				setState(1300);
				match(BIN_PREFIX);
				setState(1301);
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
		enterRule(_localctx, 86, RULE_u32Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1316);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1307);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1306);
					match(MINUS);
					}
				}

				setState(1309);
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
				setState(1310);
				match(HEX_PREFIX);
				setState(1311);
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
				setState(1312);
				match(OCT_PREFIX);
				setState(1313);
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
				setState(1314);
				match(BIN_PREFIX);
				setState(1315);
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
		enterRule(_localctx, 88, RULE_u64Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1330);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1321);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1320);
					match(MINUS);
					}
				}

				setState(1323);
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
				setState(1324);
				match(HEX_PREFIX);
				setState(1325);
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
				setState(1326);
				match(OCT_PREFIX);
				setState(1327);
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
				setState(1328);
				match(BIN_PREFIX);
				setState(1329);
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
		enterRule(_localctx, 90, RULE_i8Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1344);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1335);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1334);
					match(MINUS);
					}
				}

				setState(1337);
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
				setState(1338);
				match(HEX_PREFIX);
				setState(1339);
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
				setState(1340);
				match(OCT_PREFIX);
				setState(1341);
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
				setState(1342);
				match(BIN_PREFIX);
				setState(1343);
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
		enterRule(_localctx, 92, RULE_i16Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1358);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1349);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1348);
					match(MINUS);
					}
				}

				setState(1351);
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
				setState(1352);
				match(HEX_PREFIX);
				setState(1353);
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
				setState(1354);
				match(OCT_PREFIX);
				setState(1355);
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
				setState(1356);
				match(BIN_PREFIX);
				setState(1357);
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
		enterRule(_localctx, 94, RULE_i32Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1372);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1363);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1362);
					match(MINUS);
					}
				}

				setState(1365);
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
				setState(1366);
				match(HEX_PREFIX);
				setState(1367);
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
				setState(1368);
				match(OCT_PREFIX);
				setState(1369);
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
				setState(1370);
				match(BIN_PREFIX);
				setState(1371);
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
		enterRule(_localctx, 96, RULE_i64Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1386);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1377);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1376);
					match(MINUS);
					}
				}

				setState(1379);
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
				setState(1380);
				match(HEX_PREFIX);
				setState(1381);
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
				setState(1382);
				match(OCT_PREFIX);
				setState(1383);
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
				setState(1384);
				match(BIN_PREFIX);
				setState(1385);
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
		enterRule(_localctx, 98, RULE_stringLiteral);
		try {
			setState(1394);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STRING_LITERAL:
				enterOuterAlt(_localctx, 1);
				{
				setState(1390);
				((StringLiteralContext)_localctx).STRING_LITERAL = match(STRING_LITERAL);

						((StringLiteralContext)_localctx).maybe_val =  GetStringValue(this, ((StringLiteralContext)_localctx).STRING_LITERAL);
					
				}
				break;
			case RAW_STRING_LITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(1392);
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
		enterRule(_localctx, 100, RULE_identifier);
		try {
			setState(1399);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NON_KEYWORD_IDENTIFIER:
				enterOuterAlt(_localctx, 1);
				{
				setState(1396);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(1397);
				match(RAW_ESCAPE);
				setState(1398);
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
		enterRule(_localctx, 102, RULE_keyword);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(1401);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00a2\u057e\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\3\2\3\2\3\2\7\2n\n\2\f\2\16\2q\13\2\3\2\3\2\3\2\5\2v\n\2"+
		"\3\2\7\2y\n\2\f\2\16\2|\13\2\3\2\7\2\177\n\2\f\2\16\2\u0082\13\2\3\2\7"+
		"\2\u0085\n\2\f\2\16\2\u0088\13\2\3\2\3\2\3\2\7\2\u008d\n\2\f\2\16\2\u0090"+
		"\13\2\3\2\7\2\u0093\n\2\f\2\16\2\u0096\13\2\3\2\3\2\3\3\3\3\7\3\u009c"+
		"\n\3\f\3\16\3\u009f\13\3\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3"+
		"\4\3\4\3\4\5\4\u00af\n\4\3\4\7\4\u00b2\n\4\f\4\16\4\u00b5\13\4\3\4\3\4"+
		"\3\5\3\5\7\5\u00bb\n\5\f\5\16\5\u00be\13\5\3\5\3\5\7\5\u00c2\n\5\f\5\16"+
		"\5\u00c5\13\5\3\5\3\5\7\5\u00c9\n\5\f\5\16\5\u00cc\13\5\3\5\3\5\3\5\3"+
		"\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\5\5\u00dd\n\5\3\5\7\5\u00e0"+
		"\n\5\f\5\16\5\u00e3\13\5\3\5\3\5\7\5\u00e7\n\5\f\5\16\5\u00ea\13\5\7\5"+
		"\u00ec\n\5\f\5\16\5\u00ef\13\5\3\5\7\5\u00f2\n\5\f\5\16\5\u00f5\13\5\3"+
		"\5\3\5\3\5\3\6\3\6\7\6\u00fc\n\6\f\6\16\6\u00ff\13\6\3\6\3\6\7\6\u0103"+
		"\n\6\f\6\16\6\u0106\13\6\3\6\3\6\7\6\u010a\n\6\f\6\16\6\u010d\13\6\3\6"+
		"\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\5\6\u011e\n\6"+
		"\3\6\7\6\u0121\n\6\f\6\16\6\u0124\13\6\3\6\3\6\7\6\u0128\n\6\f\6\16\6"+
		"\u012b\13\6\7\6\u012d\n\6\f\6\16\6\u0130\13\6\3\6\3\6\3\6\3\7\3\7\7\7"+
		"\u0137\n\7\f\7\16\7\u013a\13\7\3\7\3\7\7\7\u013e\n\7\f\7\16\7\u0141\13"+
		"\7\3\7\3\7\7\7\u0145\n\7\f\7\16\7\u0148\13\7\3\7\3\7\7\7\u014c\n\7\f\7"+
		"\16\7\u014f\13\7\3\7\3\7\3\7\3\b\3\b\7\b\u0156\n\b\f\b\16\b\u0159\13\b"+
		"\3\b\3\b\7\b\u015d\n\b\f\b\16\b\u0160\13\b\3\b\3\b\7\b\u0164\n\b\f\b\16"+
		"\b\u0167\13\b\3\b\3\b\7\b\u016b\n\b\f\b\16\b\u016e\13\b\3\b\3\b\7\b\u0172"+
		"\n\b\f\b\16\b\u0175\13\b\3\b\3\b\7\b\u0179\n\b\f\b\16\b\u017c\13\b\3\b"+
		"\3\b\3\b\3\t\3\t\7\t\u0183\n\t\f\t\16\t\u0186\13\t\3\t\3\t\7\t\u018a\n"+
		"\t\f\t\16\t\u018d\13\t\3\t\3\t\3\t\3\t\3\t\5\t\u0194\n\t\3\n\3\n\3\n\3"+
		"\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\7\n\u01a4\n\n\f\n\16\n\u01a7"+
		"\13\n\3\n\3\n\7\n\u01ab\n\n\f\n\16\n\u01ae\13\n\3\n\3\n\3\n\5\n\u01b3"+
		"\n\n\3\13\3\13\7\13\u01b7\n\13\f\13\16\13\u01ba\13\13\3\13\3\13\7\13\u01be"+
		"\n\13\f\13\16\13\u01c1\13\13\3\13\3\13\7\13\u01c5\n\13\f\13\16\13\u01c8"+
		"\13\13\3\13\3\13\7\13\u01cc\n\13\f\13\16\13\u01cf\13\13\3\13\3\13\3\13"+
		"\7\13\u01d4\n\13\f\13\16\13\u01d7\13\13\3\13\3\13\7\13\u01db\n\13\f\13"+
		"\16\13\u01de\13\13\7\13\u01e0\n\13\f\13\16\13\u01e3\13\13\3\13\7\13\u01e6"+
		"\n\13\f\13\16\13\u01e9\13\13\3\13\3\13\3\13\3\f\3\f\7\f\u01f0\n\f\f\f"+
		"\16\f\u01f3\13\f\3\f\3\f\7\f\u01f7\n\f\f\f\16\f\u01fa\13\f\3\f\3\f\7\f"+
		"\u01fe\n\f\f\f\16\f\u0201\13\f\3\f\3\f\7\f\u0205\n\f\f\f\16\f\u0208\13"+
		"\f\3\f\3\f\3\f\7\f\u020d\n\f\f\f\16\f\u0210\13\f\3\f\3\f\7\f\u0214\n\f"+
		"\f\f\16\f\u0217\13\f\7\f\u0219\n\f\f\f\16\f\u021c\13\f\3\f\3\f\3\f\3\r"+
		"\3\r\7\r\u0223\n\r\f\r\16\r\u0226\13\r\3\r\3\r\7\r\u022a\n\r\f\r\16\r"+
		"\u022d\13\r\3\r\3\r\7\r\u0231\n\r\f\r\16\r\u0234\13\r\3\r\3\r\7\r\u0238"+
		"\n\r\f\r\16\r\u023b\13\r\3\r\3\r\7\r\u023f\n\r\f\r\16\r\u0242\13\r\3\r"+
		"\3\r\3\r\3\16\3\16\7\16\u0249\n\16\f\16\16\16\u024c\13\16\3\16\3\16\7"+
		"\16\u0250\n\16\f\16\16\16\u0253\13\16\3\16\3\16\7\16\u0257\n\16\f\16\16"+
		"\16\u025a\13\16\3\16\3\16\7\16\u025e\n\16\f\16\16\16\u0261\13\16\3\16"+
		"\3\16\7\16\u0265\n\16\f\16\16\16\u0268\13\16\3\16\3\16\7\16\u026c\n\16"+
		"\f\16\16\16\u026f\13\16\3\16\3\16\7\16\u0273\n\16\f\16\16\16\u0276\13"+
		"\16\3\16\3\16\3\16\3\17\3\17\3\17\3\17\3\17\7\17\u0280\n\17\f\17\16\17"+
		"\u0283\13\17\3\17\3\17\3\17\3\17\5\17\u0289\n\17\3\20\3\20\3\20\3\21\3"+
		"\21\3\21\3\21\3\21\3\21\5\21\u0294\n\21\3\22\3\22\3\22\3\23\3\23\3\23"+
		"\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23"+
		"\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\5\23\u02b3\n\23\3\24\3\24"+
		"\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24"+
		"\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24"+
		"\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\5\24\u02dc\n\24\3\25\3\25"+
		"\7\25\u02e0\n\25\f\25\16\25\u02e3\13\25\3\25\5\25\u02e6\n\25\3\25\7\25"+
		"\u02e9\n\25\f\25\16\25\u02ec\13\25\3\25\3\25\7\25\u02f0\n\25\f\25\16\25"+
		"\u02f3\13\25\3\25\3\25\3\26\3\26\7\26\u02f9\n\26\f\26\16\26\u02fc\13\26"+
		"\3\26\5\26\u02ff\n\26\3\26\7\26\u0302\n\26\f\26\16\26\u0305\13\26\3\26"+
		"\3\26\7\26\u0309\n\26\f\26\16\26\u030c\13\26\3\26\3\26\3\27\3\27\7\27"+
		"\u0312\n\27\f\27\16\27\u0315\13\27\3\27\5\27\u0318\n\27\3\27\7\27\u031b"+
		"\n\27\f\27\16\27\u031e\13\27\3\27\3\27\7\27\u0322\n\27\f\27\16\27\u0325"+
		"\13\27\3\27\3\27\3\30\3\30\7\30\u032b\n\30\f\30\16\30\u032e\13\30\3\30"+
		"\3\30\7\30\u0332\n\30\f\30\16\30\u0335\13\30\3\30\3\30\7\30\u0339\n\30"+
		"\f\30\16\30\u033c\13\30\3\30\3\30\5\30\u0340\n\30\3\30\3\30\7\30\u0344"+
		"\n\30\f\30\16\30\u0347\13\30\3\30\3\30\5\30\u034b\n\30\5\30\u034d\n\30"+
		"\3\31\3\31\7\31\u0351\n\31\f\31\16\31\u0354\13\31\3\31\3\31\7\31\u0358"+
		"\n\31\f\31\16\31\u035b\13\31\3\31\3\31\7\31\u035f\n\31\f\31\16\31\u0362"+
		"\13\31\3\31\3\31\5\31\u0366\n\31\3\31\3\31\7\31\u036a\n\31\f\31\16\31"+
		"\u036d\13\31\3\31\3\31\3\31\5\31\u0372\n\31\3\32\3\32\7\32\u0376\n\32"+
		"\f\32\16\32\u0379\13\32\3\32\3\32\7\32\u037d\n\32\f\32\16\32\u0380\13"+
		"\32\3\32\3\32\7\32\u0384\n\32\f\32\16\32\u0387\13\32\3\32\3\32\5\32\u038b"+
		"\n\32\3\32\3\32\7\32\u038f\n\32\f\32\16\32\u0392\13\32\3\32\3\32\3\32"+
		"\5\32\u0397\n\32\3\33\3\33\7\33\u039b\n\33\f\33\16\33\u039e\13\33\3\33"+
		"\3\33\7\33\u03a2\n\33\f\33\16\33\u03a5\13\33\3\33\3\33\7\33\u03a9\n\33"+
		"\f\33\16\33\u03ac\13\33\3\33\3\33\5\33\u03b0\n\33\3\33\3\33\7\33\u03b4"+
		"\n\33\f\33\16\33\u03b7\13\33\3\33\3\33\3\33\5\33\u03bc\n\33\3\34\3\34"+
		"\7\34\u03c0\n\34\f\34\16\34\u03c3\13\34\3\34\3\34\7\34\u03c7\n\34\f\34"+
		"\16\34\u03ca\13\34\3\34\3\34\7\34\u03ce\n\34\f\34\16\34\u03d1\13\34\3"+
		"\34\3\34\5\34\u03d5\n\34\3\34\3\34\7\34\u03d9\n\34\f\34\16\34\u03dc\13"+
		"\34\3\34\3\34\3\34\5\34\u03e1\n\34\3\35\3\35\7\35\u03e5\n\35\f\35\16\35"+
		"\u03e8\13\35\3\35\3\35\7\35\u03ec\n\35\f\35\16\35\u03ef\13\35\3\35\3\35"+
		"\7\35\u03f3\n\35\f\35\16\35\u03f6\13\35\3\35\3\35\5\35\u03fa\n\35\3\35"+
		"\3\35\7\35\u03fe\n\35\f\35\16\35\u0401\13\35\3\35\3\35\3\35\5\35\u0406"+
		"\n\35\3\36\3\36\7\36\u040a\n\36\f\36\16\36\u040d\13\36\3\36\3\36\7\36"+
		"\u0411\n\36\f\36\16\36\u0414\13\36\3\36\3\36\7\36\u0418\n\36\f\36\16\36"+
		"\u041b\13\36\3\36\3\36\5\36\u041f\n\36\3\36\3\36\7\36\u0423\n\36\f\36"+
		"\16\36\u0426\13\36\3\36\3\36\3\36\5\36\u042b\n\36\3\37\3\37\7\37\u042f"+
		"\n\37\f\37\16\37\u0432\13\37\3\37\3\37\7\37\u0436\n\37\f\37\16\37\u0439"+
		"\13\37\3\37\3\37\7\37\u043d\n\37\f\37\16\37\u0440\13\37\3\37\3\37\5\37"+
		"\u0444\n\37\3\37\3\37\7\37\u0448\n\37\f\37\16\37\u044b\13\37\3\37\3\37"+
		"\3\37\5\37\u0450\n\37\3 \3 \7 \u0454\n \f \16 \u0457\13 \3 \3 \7 \u045b"+
		"\n \f \16 \u045e\13 \3 \3 \7 \u0462\n \f \16 \u0465\13 \3 \3 \5 \u0469"+
		"\n \3 \3 \7 \u046d\n \f \16 \u0470\13 \3 \3 \5 \u0474\n \5 \u0476\n \3"+
		"!\3!\7!\u047a\n!\f!\16!\u047d\13!\3!\3!\7!\u0481\n!\f!\16!\u0484\13!\3"+
		"!\3!\7!\u0488\n!\f!\16!\u048b\13!\3!\3!\5!\u048f\n!\3!\3!\7!\u0493\n!"+
		"\f!\16!\u0496\13!\3!\3!\3!\5!\u049b\n!\3\"\3\"\7\"\u049f\n\"\f\"\16\""+
		"\u04a2\13\"\3\"\3\"\7\"\u04a6\n\"\f\"\16\"\u04a9\13\"\3\"\3\"\7\"\u04ad"+
		"\n\"\f\"\16\"\u04b0\13\"\3\"\3\"\3\"\3#\3#\6#\u04b7\n#\r#\16#\u04b8\3"+
		"#\3#\7#\u04bd\n#\f#\16#\u04c0\13#\3#\3#\3#\3$\3$\3$\3$\3%\5%\u04ca\n%"+
		"\3%\5%\u04cd\n%\3%\3%\3%\3%\3%\7%\u04d4\n%\f%\16%\u04d7\13%\3%\5%\u04da"+
		"\n%\5%\u04dc\n%\3%\5%\u04df\n%\3%\3%\3%\5%\u04e4\n%\5%\u04e6\n%\3&\5&"+
		"\u04e9\n&\3&\3&\3&\3&\3&\3&\7&\u04f1\n&\f&\16&\u04f4\13&\3\'\3\'\3(\3"+
		"(\3(\3)\3)\3)\3*\3*\3*\3+\5+\u0502\n+\3+\3+\3+\3+\3+\3+\3+\5+\u050b\n"+
		"+\3+\3+\3,\5,\u0510\n,\3,\3,\3,\3,\3,\3,\3,\5,\u0519\n,\3,\3,\3-\5-\u051e"+
		"\n-\3-\3-\3-\3-\3-\3-\3-\5-\u0527\n-\3-\3-\3.\5.\u052c\n.\3.\3.\3.\3."+
		"\3.\3.\3.\5.\u0535\n.\3.\3.\3/\5/\u053a\n/\3/\3/\3/\3/\3/\3/\3/\5/\u0543"+
		"\n/\3/\3/\3\60\5\60\u0548\n\60\3\60\3\60\3\60\3\60\3\60\3\60\3\60\5\60"+
		"\u0551\n\60\3\60\3\60\3\61\5\61\u0556\n\61\3\61\3\61\3\61\3\61\3\61\3"+
		"\61\3\61\5\61\u055f\n\61\3\61\3\61\3\62\5\62\u0564\n\62\3\62\3\62\3\62"+
		"\3\62\3\62\3\62\3\62\5\62\u056d\n\62\3\62\3\62\3\63\3\63\3\63\3\63\5\63"+
		"\u0575\n\63\3\64\3\64\3\64\5\64\u057a\n\64\3\65\3\65\3\65\2\2\66\2\4\6"+
		"\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPRT"+
		"VXZ\\^`bdfh\2\b\4\2\6\6\f\f\3\2cd\3\2ef\3\2gh\3\2ij\4\2\4\b\nH\2\u062e"+
		"\2j\3\2\2\2\4\u0099\3\2\2\2\6\u00ae\3\2\2\2\b\u00b8\3\2\2\2\n\u00f9\3"+
		"\2\2\2\f\u0134\3\2\2\2\16\u0153\3\2\2\2\20\u0193\3\2\2\2\22\u01b2\3\2"+
		"\2\2\24\u01b4\3\2\2\2\26\u01ed\3\2\2\2\30\u0220\3\2\2\2\32\u0246\3\2\2"+
		"\2\34\u0288\3\2\2\2\36\u028a\3\2\2\2 \u0293\3\2\2\2\"\u0295\3\2\2\2$\u02b2"+
		"\3\2\2\2&\u02db\3\2\2\2(\u02e5\3\2\2\2*\u02fe\3\2\2\2,\u0317\3\2\2\2."+
		"\u034c\3\2\2\2\60\u0371\3\2\2\2\62\u0396\3\2\2\2\64\u03bb\3\2\2\2\66\u03e0"+
		"\3\2\2\28\u0405\3\2\2\2:\u042a\3\2\2\2<\u044f\3\2\2\2>\u0475\3\2\2\2@"+
		"\u049a\3\2\2\2B\u049c\3\2\2\2D\u04b4\3\2\2\2F\u04c4\3\2\2\2H\u04e5\3\2"+
		"\2\2J\u04e8\3\2\2\2L\u04f5\3\2\2\2N\u04f7\3\2\2\2P\u04fa\3\2\2\2R\u04fd"+
		"\3\2\2\2T\u050a\3\2\2\2V\u0518\3\2\2\2X\u0526\3\2\2\2Z\u0534\3\2\2\2\\"+
		"\u0542\3\2\2\2^\u0550\3\2\2\2`\u055e\3\2\2\2b\u056c\3\2\2\2d\u0574\3\2"+
		"\2\2f\u0579\3\2\2\2h\u057b\3\2\2\2jk\5B\"\2ko\b\2\1\2ln\7_\2\2ml\3\2\2"+
		"\2nq\3\2\2\2om\3\2\2\2op\3\2\2\2pu\3\2\2\2qo\3\2\2\2rs\5D#\2st\b\2\1\2"+
		"tv\3\2\2\2ur\3\2\2\2uv\3\2\2\2v\u0080\3\2\2\2wy\7_\2\2xw\3\2\2\2y|\3\2"+
		"\2\2zx\3\2\2\2z{\3\2\2\2{}\3\2\2\2|z\3\2\2\2}\177\5F$\2~z\3\2\2\2\177"+
		"\u0082\3\2\2\2\u0080~\3\2\2\2\u0080\u0081\3\2\2\2\u0081\u008e\3\2\2\2"+
		"\u0082\u0080\3\2\2\2\u0083\u0085\7_\2\2\u0084\u0083\3\2\2\2\u0085\u0088"+
		"\3\2\2\2\u0086\u0084\3\2\2\2\u0086\u0087\3\2\2\2\u0087\u0089\3\2\2\2\u0088"+
		"\u0086\3\2\2\2\u0089\u008a\5\6\4\2\u008a\u008b\b\2\1\2\u008b\u008d\3\2"+
		"\2\2\u008c\u0086\3\2\2\2\u008d\u0090\3\2\2\2\u008e\u008c\3\2\2\2\u008e"+
		"\u008f\3\2\2\2\u008f\u0094\3\2\2\2\u0090\u008e\3\2\2\2\u0091\u0093\7_"+
		"\2\2\u0092\u0091\3\2\2\2\u0093\u0096\3\2\2\2\u0094\u0092\3\2\2\2\u0094"+
		"\u0095\3\2\2\2\u0095\u0097\3\2\2\2\u0096\u0094\3\2\2\2\u0097\u0098\7\2"+
		"\2\3\u0098\3\3\2\2\2\u0099\u009d\5\20\t\2\u009a\u009c\7_\2\2\u009b\u009a"+
		"\3\2\2\2\u009c\u009f\3\2\2\2\u009d\u009b\3\2\2\2\u009d\u009e\3\2\2\2\u009e"+
		"\u00a0\3\2\2\2\u009f\u009d\3\2\2\2\u00a0\u00a1\7\u0095\2\2\u00a1\5\3\2"+
		"\2\2\u00a2\u00a3\5\b\5\2\u00a3\u00a4\b\4\1\2\u00a4\u00af\3\2\2\2\u00a5"+
		"\u00a6\5\n\6\2\u00a6\u00a7\b\4\1\2\u00a7\u00af\3\2\2\2\u00a8\u00a9\5\f"+
		"\7\2\u00a9\u00aa\b\4\1\2\u00aa\u00af\3\2\2\2\u00ab\u00ac\5\16\b\2\u00ac"+
		"\u00ad\b\4\1\2\u00ad\u00af\3\2\2\2\u00ae\u00a2\3\2\2\2\u00ae\u00a5\3\2"+
		"\2\2\u00ae\u00a8\3\2\2\2\u00ae\u00ab\3\2\2\2\u00af\u00b3\3\2\2\2\u00b0"+
		"\u00b2\7_\2\2\u00b1\u00b0\3\2\2\2\u00b2\u00b5\3\2\2\2\u00b3\u00b1\3\2"+
		"\2\2\u00b3\u00b4\3\2\2\2\u00b4\u00b6\3\2\2\2\u00b5\u00b3\3\2\2\2\u00b6"+
		"\u00b7\7\u0095\2\2\u00b7\7\3\2\2\2\u00b8\u00bc\7\13\2\2\u00b9\u00bb\7"+
		"_\2\2\u00ba\u00b9\3\2\2\2\u00bb\u00be\3\2\2\2\u00bc\u00ba\3\2\2\2\u00bc"+
		"\u00bd\3\2\2\2\u00bd\u00bf\3\2\2\2\u00be\u00bc\3\2\2\2\u00bf\u00c3\5f"+
		"\64\2\u00c0\u00c2\7_\2\2\u00c1\u00c0\3\2\2\2\u00c2\u00c5\3\2\2\2\u00c3"+
		"\u00c1\3\2\2\2\u00c3\u00c4\3\2\2\2\u00c4\u00c6\3\2\2\2\u00c5\u00c3\3\2"+
		"\2\2\u00c6\u00ca\7\u009d\2\2\u00c7\u00c9\7_\2\2\u00c8\u00c7\3\2\2\2\u00c9"+
		"\u00cc\3\2\2\2\u00ca\u00c8\3\2\2\2\u00ca\u00cb\3\2\2\2\u00cb\u00ed\3\2"+
		"\2\2\u00cc\u00ca\3\2\2\2\u00cd\u00ce\5\20\t\2\u00ce\u00cf\b\5\1\2\u00cf"+
		"\u00dd\3\2\2\2\u00d0\u00d1\5\b\5\2\u00d1\u00d2\b\5\1\2\u00d2\u00dd\3\2"+
		"\2\2\u00d3\u00d4\5\n\6\2\u00d4\u00d5\b\5\1\2\u00d5\u00dd\3\2\2\2\u00d6"+
		"\u00d7\5\f\7\2\u00d7\u00d8\b\5\1\2\u00d8\u00dd\3\2\2\2\u00d9\u00da\5\16"+
		"\b\2\u00da\u00db\b\5\1\2\u00db\u00dd\3\2\2\2\u00dc\u00cd\3\2\2\2\u00dc"+
		"\u00d0\3\2\2\2\u00dc\u00d3\3\2\2\2\u00dc\u00d6\3\2\2\2\u00dc\u00d9\3\2"+
		"\2\2\u00dd\u00e1\3\2\2\2\u00de\u00e0\7_\2\2\u00df\u00de\3\2\2\2\u00e0"+
		"\u00e3\3\2\2\2\u00e1\u00df\3\2\2\2\u00e1\u00e2\3\2\2\2\u00e2\u00e4\3\2"+
		"\2\2\u00e3\u00e1\3\2\2\2\u00e4\u00e8\7\u0095\2\2\u00e5\u00e7\7_\2\2\u00e6"+
		"\u00e5\3\2\2\2\u00e7\u00ea\3\2\2\2\u00e8\u00e6\3\2\2\2\u00e8\u00e9\3\2"+
		"\2\2\u00e9\u00ec\3\2\2\2\u00ea\u00e8\3\2\2\2\u00eb\u00dc\3\2\2\2\u00ec"+
		"\u00ef\3\2\2\2\u00ed\u00eb\3\2\2\2\u00ed\u00ee\3\2\2\2\u00ee\u00f3\3\2"+
		"\2\2\u00ef\u00ed\3\2\2\2\u00f0\u00f2\7_\2\2\u00f1\u00f0\3\2\2\2\u00f2"+
		"\u00f5\3\2\2\2\u00f3\u00f1\3\2\2\2\u00f3\u00f4\3\2\2\2\u00f4\u00f6\3\2"+
		"\2\2\u00f5\u00f3\3\2\2\2\u00f6\u00f7\7\u009e\2\2\u00f7\u00f8\b\5\1\2\u00f8"+
		"\t\3\2\2\2\u00f9\u00fd\7\20\2\2\u00fa\u00fc\7_\2\2\u00fb\u00fa\3\2\2\2"+
		"\u00fc\u00ff\3\2\2\2\u00fd\u00fb\3\2\2\2\u00fd\u00fe\3\2\2\2\u00fe\u0100"+
		"\3\2\2\2\u00ff\u00fd\3\2\2\2\u0100\u0104\5f\64\2\u0101\u0103\7_\2\2\u0102"+
		"\u0101\3\2\2\2\u0103\u0106\3\2\2\2\u0104\u0102\3\2\2\2\u0104\u0105\3\2"+
		"\2\2\u0105\u0107\3\2\2\2\u0106\u0104\3\2\2\2\u0107\u012e\7\u009d\2\2\u0108"+
		"\u010a\7_\2\2\u0109\u0108\3\2\2\2\u010a\u010d\3\2\2\2\u010b\u0109\3\2"+
		"\2\2\u010b\u010c\3\2\2\2\u010c\u011d\3\2\2\2\u010d\u010b\3\2\2\2\u010e"+
		"\u010f\5\22\n\2\u010f\u0110\b\6\1\2\u0110\u011e\3\2\2\2\u0111\u0112\5"+
		"\b\5\2\u0112\u0113\b\6\1\2\u0113\u011e\3\2\2\2\u0114\u0115\5\n\6\2\u0115"+
		"\u0116\b\6\1\2\u0116\u011e\3\2\2\2\u0117\u0118\5\f\7\2\u0118\u0119\b\6"+
		"\1\2\u0119\u011e\3\2\2\2\u011a\u011b\5\16\b\2\u011b\u011c\b\6\1\2\u011c"+
		"\u011e\3\2\2\2\u011d\u010e\3\2\2\2\u011d\u0111\3\2\2\2\u011d\u0114\3\2"+
		"\2\2\u011d\u0117\3\2\2\2\u011d\u011a\3\2\2\2\u011e\u0122\3\2\2\2\u011f"+
		"\u0121\7_\2\2\u0120\u011f\3\2\2\2\u0121\u0124\3\2\2\2\u0122\u0120\3\2"+
		"\2\2\u0122\u0123\3\2\2\2\u0123\u0125\3\2\2\2\u0124\u0122\3\2\2\2\u0125"+
		"\u0129\7\u0095\2\2\u0126\u0128\7_\2\2\u0127\u0126\3\2\2\2\u0128\u012b"+
		"\3\2\2\2\u0129\u0127\3\2\2\2\u0129\u012a\3\2\2\2\u012a\u012d\3\2\2\2\u012b"+
		"\u0129\3\2\2\2\u012c\u010b\3\2\2\2\u012d\u0130\3\2\2\2\u012e\u012c\3\2"+
		"\2\2\u012e\u012f\3\2\2\2\u012f\u0131\3\2\2\2\u0130\u012e\3\2\2\2\u0131"+
		"\u0132\7\u009e\2\2\u0132\u0133\b\6\1\2\u0133\13\3\2\2\2\u0134\u0138\7"+
		"\21\2\2\u0135\u0137\7_\2\2\u0136\u0135\3\2\2\2\u0137\u013a\3\2\2\2\u0138"+
		"\u0136\3\2\2\2\u0138\u0139\3\2\2\2\u0139\u013b\3\2\2\2\u013a\u0138\3\2"+
		"\2\2\u013b\u013f\5f\64\2\u013c\u013e\7_\2\2\u013d\u013c\3\2\2\2\u013e"+
		"\u0141\3\2\2\2\u013f\u013d\3\2\2\2\u013f\u0140\3\2\2\2\u0140\u0142\3\2"+
		"\2\2\u0141\u013f\3\2\2\2\u0142\u0146\7\u008c\2\2\u0143\u0145\7_\2\2\u0144"+
		"\u0143\3\2\2\2\u0145\u0148\3\2\2\2\u0146\u0144\3\2\2\2\u0146\u0147\3\2"+
		"\2\2\u0147\u0149\3\2\2\2\u0148\u0146\3\2\2\2\u0149\u014d\5 \21\2\u014a"+
		"\u014c\7_\2\2\u014b\u014a\3\2\2\2\u014c\u014f\3\2\2\2\u014d\u014b\3\2"+
		"\2\2\u014d\u014e\3\2\2\2\u014e\u0150\3\2\2\2\u014f\u014d\3\2\2\2\u0150"+
		"\u0151\7\u008b\2\2\u0151\u0152\b\7\1\2\u0152\r\3\2\2\2\u0153\u0157\7\22"+
		"\2\2\u0154\u0156\7_\2\2\u0155\u0154\3\2\2\2\u0156\u0159\3\2\2\2\u0157"+
		"\u0155\3\2\2\2\u0157\u0158\3\2\2\2\u0158\u015a\3\2\2\2\u0159\u0157\3\2"+
		"\2\2\u015a\u015e\5f\64\2\u015b\u015d\7_\2\2\u015c\u015b\3\2\2\2\u015d"+
		"\u0160\3\2\2\2\u015e\u015c\3\2\2\2\u015e\u015f\3\2\2\2\u015f\u0161\3\2"+
		"\2\2\u0160\u015e\3\2\2\2\u0161\u0165\7\u008c\2\2\u0162\u0164\7_\2\2\u0163"+
		"\u0162\3\2\2\2\u0164\u0167\3\2\2\2\u0165\u0163\3\2\2\2\u0165\u0166\3\2"+
		"\2\2\u0166\u0168\3\2\2\2\u0167\u0165\3\2\2\2\u0168\u016c\5$\23\2\u0169"+
		"\u016b\7_\2\2\u016a\u0169\3\2\2\2\u016b\u016e\3\2\2\2\u016c\u016a\3\2"+
		"\2\2\u016c\u016d\3\2\2\2\u016d\u016f\3\2\2\2\u016e\u016c\3\2\2\2\u016f"+
		"\u0173\7\u0094\2\2\u0170\u0172\7_\2\2\u0171\u0170\3\2\2\2\u0172\u0175"+
		"\3\2\2\2\u0173\u0171\3\2\2\2\u0173\u0174\3\2\2\2\u0174\u0176\3\2\2\2\u0175"+
		"\u0173\3\2\2\2\u0176\u017a\5 \21\2\u0177\u0179\7_\2\2\u0178\u0177\3\2"+
		"\2\2\u0179\u017c\3\2\2\2\u017a\u0178\3\2\2\2\u017a\u017b\3\2\2\2\u017b"+
		"\u017d\3\2\2\2\u017c\u017a\3\2\2\2\u017d\u017e\7\u008b\2\2\u017e\u017f"+
		"\b\b\1\2\u017f\17\3\2\2\2\u0180\u0184\5f\64\2\u0181\u0183\7_\2\2\u0182"+
		"\u0181\3\2\2\2\u0183\u0186\3\2\2\2\u0184\u0182\3\2\2\2\u0184\u0185\3\2"+
		"\2\2\u0185\u0187\3\2\2\2\u0186\u0184\3\2\2\2\u0187\u018b\5\34\17\2\u0188"+
		"\u018a\7_\2\2\u0189\u0188\3\2\2\2\u018a\u018d\3\2\2\2\u018b\u0189\3\2"+
		"\2\2\u018b\u018c\3\2\2\2\u018c\u018e\3\2\2\2\u018d\u018b\3\2\2\2\u018e"+
		"\u018f\b\t\1\2\u018f\u0194\3\2\2\2\u0190\u0191\5\22\n\2\u0191\u0192\b"+
		"\t\1\2\u0192\u0194\3\2\2\2\u0193\u0180\3\2\2\2\u0193\u0190\3\2\2\2\u0194"+
		"\21\3\2\2\2\u0195\u0196\5\24\13\2\u0196\u0197\b\n\1\2\u0197\u01b3\3\2"+
		"\2\2\u0198\u0199\5\26\f\2\u0199\u019a\b\n\1\2\u019a\u01b3\3\2\2\2\u019b"+
		"\u019c\5\30\r\2\u019c\u019d\b\n\1\2\u019d\u01b3\3\2\2\2\u019e\u019f\5"+
		"\32\16\2\u019f\u01a0\b\n\1\2\u01a0\u01b3\3\2\2\2\u01a1\u01a5\5f\64\2\u01a2"+
		"\u01a4\7_\2\2\u01a3\u01a2\3\2\2\2\u01a4\u01a7\3\2\2\2\u01a5\u01a3\3\2"+
		"\2\2\u01a5\u01a6\3\2\2\2\u01a6\u01a8\3\2\2\2\u01a7\u01a5\3\2\2\2\u01a8"+
		"\u01ac\7\u0096\2\2\u01a9\u01ab\7_\2\2\u01aa\u01a9\3\2\2\2\u01ab\u01ae"+
		"\3\2\2\2\u01ac\u01aa\3\2\2\2\u01ac\u01ad\3\2\2\2\u01ad\u01af\3\2\2\2\u01ae"+
		"\u01ac\3\2\2\2\u01af\u01b0\5 \21\2\u01b0\u01b1\b\n\1\2\u01b1\u01b3\3\2"+
		"\2\2\u01b2\u0195\3\2\2\2\u01b2\u0198\3\2\2\2\u01b2\u019b\3\2\2\2\u01b2"+
		"\u019e\3\2\2\2\u01b2\u01a1\3\2\2\2\u01b3\23\3\2\2\2\u01b4\u01b8\5f\64"+
		"\2\u01b5\u01b7\7_\2\2\u01b6\u01b5\3\2\2\2\u01b7\u01ba\3\2\2\2\u01b8\u01b6"+
		"\3\2\2\2\u01b8\u01b9\3\2\2\2\u01b9\u01bb\3\2\2\2\u01ba\u01b8\3\2\2\2\u01bb"+
		"\u01bf\7\u0096\2\2\u01bc\u01be\7_\2\2\u01bd\u01bc\3\2\2\2\u01be\u01c1"+
		"\3\2\2\2\u01bf\u01bd\3\2\2\2\u01bf\u01c0\3\2\2\2\u01c0\u01c2\3\2\2\2\u01c1"+
		"\u01bf\3\2\2\2\u01c2\u01c6\7\13\2\2\u01c3\u01c5\7_\2\2\u01c4\u01c3\3\2"+
		"\2\2\u01c5\u01c8\3\2\2\2\u01c6\u01c4\3\2\2\2\u01c6\u01c7\3\2\2\2\u01c7"+
		"\u01c9\3\2\2\2\u01c8\u01c6\3\2\2\2\u01c9\u01cd\7\u009d\2\2\u01ca\u01cc"+
		"\7_\2\2\u01cb\u01ca\3\2\2\2\u01cc\u01cf\3\2\2\2\u01cd\u01cb\3\2\2\2\u01cd"+
		"\u01ce\3\2\2\2\u01ce\u01e1\3\2\2\2\u01cf\u01cd\3\2\2\2\u01d0\u01d1\5\20"+
		"\t\2\u01d1\u01d5\b\13\1\2\u01d2\u01d4\7_\2\2\u01d3\u01d2\3\2\2\2\u01d4"+
		"\u01d7\3\2\2\2\u01d5\u01d3\3\2\2\2\u01d5\u01d6\3\2\2\2\u01d6\u01d8\3\2"+
		"\2\2\u01d7\u01d5\3\2\2\2\u01d8\u01dc\7\u0095\2\2\u01d9\u01db\7_\2\2\u01da"+
		"\u01d9\3\2\2\2\u01db\u01de\3\2\2\2\u01dc\u01da\3\2\2\2\u01dc\u01dd\3\2"+
		"\2\2\u01dd\u01e0\3\2\2\2\u01de\u01dc\3\2\2\2\u01df\u01d0\3\2\2\2\u01e0"+
		"\u01e3\3\2\2\2\u01e1\u01df\3\2\2\2\u01e1\u01e2\3\2\2\2\u01e2\u01e7\3\2"+
		"\2\2\u01e3\u01e1\3\2\2\2\u01e4\u01e6\7_\2\2\u01e5\u01e4\3\2\2\2\u01e6"+
		"\u01e9\3\2\2\2\u01e7\u01e5\3\2\2\2\u01e7\u01e8\3\2\2\2\u01e8\u01ea\3\2"+
		"\2\2\u01e9\u01e7\3\2\2\2\u01ea\u01eb\7\u009e\2\2\u01eb\u01ec\b\13\1\2"+
		"\u01ec\25\3\2\2\2\u01ed\u01f1\5f\64\2\u01ee\u01f0\7_\2\2\u01ef\u01ee\3"+
		"\2\2\2\u01f0\u01f3\3\2\2\2\u01f1\u01ef\3\2\2\2\u01f1\u01f2\3\2\2\2\u01f2"+
		"\u01f4\3\2\2\2\u01f3\u01f1\3\2\2\2\u01f4\u01f8\7\u0096\2\2\u01f5\u01f7"+
		"\7_\2\2\u01f6\u01f5\3\2\2\2\u01f7\u01fa\3\2\2\2\u01f8\u01f6\3\2\2\2\u01f8"+
		"\u01f9\3\2\2\2\u01f9\u01fb\3\2\2\2\u01fa\u01f8\3\2\2\2\u01fb\u01ff\7\20"+
		"\2\2\u01fc\u01fe\7_\2\2\u01fd\u01fc\3\2\2\2\u01fe\u0201\3\2\2\2\u01ff"+
		"\u01fd\3\2\2\2\u01ff\u0200\3\2\2\2\u0200\u0202\3\2\2\2\u0201\u01ff\3\2"+
		"\2\2\u0202\u021a\7\u009d\2\2\u0203\u0205\7_\2\2\u0204\u0203\3\2\2\2\u0205"+
		"\u0208\3\2\2\2\u0206\u0204\3\2\2\2\u0206\u0207\3\2\2\2\u0207\u0209\3\2"+
		"\2\2\u0208\u0206\3\2\2\2\u0209\u020a\5\22\n\2\u020a\u020e\b\f\1\2\u020b"+
		"\u020d\7_\2\2\u020c\u020b\3\2\2\2\u020d\u0210\3\2\2\2\u020e\u020c\3\2"+
		"\2\2\u020e\u020f\3\2\2\2\u020f\u0211\3\2\2\2\u0210\u020e\3\2\2\2\u0211"+
		"\u0215\7\u0095\2\2\u0212\u0214\7_\2\2\u0213\u0212\3\2\2\2\u0214\u0217"+
		"\3\2\2\2\u0215\u0213\3\2\2\2\u0215\u0216\3\2\2\2\u0216\u0219\3\2\2\2\u0217"+
		"\u0215\3\2\2\2\u0218\u0206\3\2\2\2\u0219\u021c\3\2\2\2\u021a\u0218\3\2"+
		"\2\2\u021a\u021b\3\2\2\2\u021b\u021d\3\2\2\2\u021c\u021a\3\2\2\2\u021d"+
		"\u021e\7\u009e\2\2\u021e\u021f\b\f\1\2\u021f\27\3\2\2\2\u0220\u0224\5"+
		"f\64\2\u0221\u0223\7_\2\2\u0222\u0221\3\2\2\2\u0223\u0226\3\2\2\2\u0224"+
		"\u0222\3\2\2\2\u0224\u0225\3\2\2\2\u0225\u0227\3\2\2\2\u0226\u0224\3\2"+
		"\2\2\u0227\u022b\7\u0096\2\2\u0228\u022a\7_\2\2\u0229\u0228\3\2\2\2\u022a"+
		"\u022d\3\2\2\2\u022b\u0229\3\2\2\2\u022b\u022c\3\2\2\2\u022c\u022e\3\2"+
		"\2\2\u022d\u022b\3\2\2\2\u022e\u0232\7\21\2\2\u022f\u0231\7_\2\2\u0230"+
		"\u022f\3\2\2\2\u0231\u0234\3\2\2\2\u0232\u0230\3\2\2\2\u0232\u0233\3\2"+
		"\2\2\u0233\u0235\3\2\2\2\u0234\u0232\3\2\2\2\u0235\u0239\7\u008c\2\2\u0236"+
		"\u0238\7_\2\2\u0237\u0236\3\2\2\2\u0238\u023b\3\2\2\2\u0239\u0237\3\2"+
		"\2\2\u0239\u023a\3\2\2\2\u023a\u023c\3\2\2\2\u023b\u0239\3\2\2\2\u023c"+
		"\u0240\5 \21\2\u023d\u023f\7_\2\2\u023e\u023d\3\2\2\2\u023f\u0242\3\2"+
		"\2\2\u0240\u023e\3\2\2\2\u0240\u0241\3\2\2\2\u0241\u0243\3\2\2\2\u0242"+
		"\u0240\3\2\2\2\u0243\u0244\7\u008b\2\2\u0244\u0245\b\r\1\2\u0245\31\3"+
		"\2\2\2\u0246\u024a\5f\64\2\u0247\u0249\7_\2\2\u0248\u0247\3\2\2\2\u0249"+
		"\u024c\3\2\2\2\u024a\u0248\3\2\2\2\u024a\u024b\3\2\2\2\u024b\u024d\3\2"+
		"\2\2\u024c\u024a\3\2\2\2\u024d\u0251\7\u0096\2\2\u024e\u0250\7_\2\2\u024f"+
		"\u024e\3\2\2\2\u0250\u0253\3\2\2\2\u0251\u024f\3\2\2\2\u0251\u0252\3\2"+
		"\2\2\u0252\u0254\3\2\2\2\u0253\u0251\3\2\2\2\u0254\u0258\7\22\2\2\u0255"+
		"\u0257\7_\2\2\u0256\u0255\3\2\2\2\u0257\u025a\3\2\2\2\u0258\u0256\3\2"+
		"\2\2\u0258\u0259\3\2\2\2\u0259\u025b\3\2\2\2\u025a\u0258\3\2\2\2\u025b"+
		"\u025f\7\u008c\2\2\u025c\u025e\7_\2\2\u025d\u025c\3\2\2\2\u025e\u0261"+
		"\3\2\2\2\u025f\u025d\3\2\2\2\u025f\u0260\3\2\2\2\u0260\u0262\3\2\2\2\u0261"+
		"\u025f\3\2\2\2\u0262\u0266\5$\23\2\u0263\u0265\7_\2\2\u0264\u0263\3\2"+
		"\2\2\u0265\u0268\3\2\2\2\u0266\u0264\3\2\2\2\u0266\u0267\3\2\2\2\u0267"+
		"\u0269\3\2\2\2\u0268\u0266\3\2\2\2\u0269\u026d\7\u0094\2\2\u026a\u026c"+
		"\7_\2\2\u026b\u026a\3\2\2\2\u026c\u026f\3\2\2\2\u026d\u026b\3\2\2\2\u026d"+
		"\u026e\3\2\2\2\u026e\u0270\3\2\2\2\u026f\u026d\3\2\2\2\u0270\u0274\5 "+
		"\21\2\u0271\u0273\7_\2\2\u0272\u0271\3\2\2\2\u0273\u0276\3\2\2\2\u0274"+
		"\u0272\3\2\2\2\u0274\u0275\3\2\2\2\u0275\u0277\3\2\2\2\u0276\u0274\3\2"+
		"\2\2\u0277\u0278\7\u008b\2\2\u0278\u0279\b\16\1\2\u0279\33\3\2\2\2\u027a"+
		"\u027b\5\36\20\2\u027b\u027c\b\17\1\2\u027c\u0289\3\2\2\2\u027d\u0281"+
		"\7\u0096\2\2\u027e\u0280\7_\2\2\u027f\u027e\3\2\2\2\u0280\u0283\3\2\2"+
		"\2\u0281\u027f\3\2\2\2\u0281\u0282\3\2\2\2\u0282\u0284\3\2\2\2\u0283\u0281"+
		"\3\2\2\2\u0284\u0285\5 \21\2\u0285\u0286\3\2\2\2\u0286\u0287\b\17\1\2"+
		"\u0287\u0289\3\2\2\2\u0288\u027a\3\2\2\2\u0288\u027d\3\2\2\2\u0289\35"+
		"\3\2\2\2\u028a\u028b\5&\24\2\u028b\u028c\b\20\1\2\u028c\37\3\2\2\2\u028d"+
		"\u028e\5$\23\2\u028e\u028f\b\21\1\2\u028f\u0294\3\2\2\2\u0290\u0291\5"+
		"\"\22\2\u0291\u0292\b\21\1\2\u0292\u0294\3\2\2\2\u0293\u028d\3\2\2\2\u0293"+
		"\u0290\3\2\2\2\u0294!\3\2\2\2\u0295\u0296\5f\64\2\u0296\u0297\b\22\1\2"+
		"\u0297#\3\2\2\2\u0298\u0299\7I\2\2\u0299\u02b3\b\23\1\2\u029a\u029b\7"+
		"J\2\2\u029b\u02b3\b\23\1\2\u029c\u029d\7K\2\2\u029d\u02b3\b\23\1\2\u029e"+
		"\u029f\7L\2\2\u029f\u02b3\b\23\1\2\u02a0\u02a1\7M\2\2\u02a1\u02b3\b\23"+
		"\1\2\u02a2\u02a3\7N\2\2\u02a3\u02b3\b\23\1\2\u02a4\u02a5\7O\2\2\u02a5"+
		"\u02b3\b\23\1\2\u02a6\u02a7\7P\2\2\u02a7\u02b3\b\23\1\2\u02a8\u02a9\7"+
		"Q\2\2\u02a9\u02b3\b\23\1\2\u02aa\u02ab\7R\2\2\u02ab\u02b3\b\23\1\2\u02ac"+
		"\u02ad\7S\2\2\u02ad\u02b3\b\23\1\2\u02ae\u02af\7T\2\2\u02af\u02b3\b\23"+
		"\1\2\u02b0\u02b1\7U\2\2\u02b1\u02b3\b\23\1\2\u02b2\u0298\3\2\2\2\u02b2"+
		"\u029a\3\2\2\2\u02b2\u029c\3\2\2\2\u02b2\u029e\3\2\2\2\u02b2\u02a0\3\2"+
		"\2\2\u02b2\u02a2\3\2\2\2\u02b2\u02a4\3\2\2\2\u02b2\u02a6\3\2\2\2\u02b2"+
		"\u02a8\3\2\2\2\u02b2\u02aa\3\2\2\2\u02b2\u02ac\3\2\2\2\u02b2\u02ae\3\2"+
		"\2\2\u02b2\u02b0\3\2\2\2\u02b3%\3\2\2\2\u02b4\u02b5\5(\25\2\u02b5\u02b6"+
		"\b\24\1\2\u02b6\u02dc\3\2\2\2\u02b7\u02b8\5*\26\2\u02b8\u02b9\b\24\1\2"+
		"\u02b9\u02dc\3\2\2\2\u02ba\u02bb\5,\27\2\u02bb\u02bc\b\24\1\2\u02bc\u02dc"+
		"\3\2\2\2\u02bd\u02be\5.\30\2\u02be\u02bf\b\24\1\2\u02bf\u02dc\3\2\2\2"+
		"\u02c0\u02c1\5\60\31\2\u02c1\u02c2\b\24\1\2\u02c2\u02dc\3\2\2\2\u02c3"+
		"\u02c4\5\62\32\2\u02c4\u02c5\b\24\1\2\u02c5\u02dc\3\2\2\2\u02c6\u02c7"+
		"\5\64\33\2\u02c7\u02c8\b\24\1\2\u02c8\u02dc\3\2\2\2\u02c9\u02ca\5\66\34"+
		"\2\u02ca\u02cb\b\24\1\2\u02cb\u02dc\3\2\2\2\u02cc\u02cd\58\35\2\u02cd"+
		"\u02ce\b\24\1\2\u02ce\u02dc\3\2\2\2\u02cf\u02d0\5:\36\2\u02d0\u02d1\b"+
		"\24\1\2\u02d1\u02dc\3\2\2\2\u02d2\u02d3\5<\37\2\u02d3\u02d4\b\24\1\2\u02d4"+
		"\u02dc\3\2\2\2\u02d5\u02d6\5> \2\u02d6\u02d7\b\24\1\2\u02d7\u02dc\3\2"+
		"\2\2\u02d8\u02d9\5@!\2\u02d9\u02da\b\24\1\2\u02da\u02dc\3\2\2\2\u02db"+
		"\u02b4\3\2\2\2\u02db\u02b7\3\2\2\2\u02db\u02ba\3\2\2\2\u02db\u02bd\3\2"+
		"\2\2\u02db\u02c0\3\2\2\2\u02db\u02c3\3\2\2\2\u02db\u02c6\3\2\2\2\u02db"+
		"\u02c9\3\2\2\2\u02db\u02cc\3\2\2\2\u02db\u02cf\3\2\2\2\u02db\u02d2\3\2"+
		"\2\2\u02db\u02d5\3\2\2\2\u02db\u02d8\3\2\2\2\u02dc\'\3\2\2\2\u02dd\u02e1"+
		"\7\u0096\2\2\u02de\u02e0\7_\2\2\u02df\u02de\3\2\2\2\u02e0\u02e3\3\2\2"+
		"\2\u02e1\u02df\3\2\2\2\u02e1\u02e2\3\2\2\2\u02e2\u02e4\3\2\2\2\u02e3\u02e1"+
		"\3\2\2\2\u02e4\u02e6\7I\2\2\u02e5\u02dd\3\2\2\2\u02e5\u02e6\3\2\2\2\u02e6"+
		"\u02ea\3\2\2\2\u02e7\u02e9\7_\2\2\u02e8\u02e7\3\2\2\2\u02e9\u02ec\3\2"+
		"\2\2\u02ea\u02e8\3\2\2\2\u02ea\u02eb\3\2\2\2\u02eb\u02ed\3\2\2\2\u02ec"+
		"\u02ea\3\2\2\2\u02ed\u02f1\7\u0088\2\2\u02ee\u02f0\7_\2\2\u02ef\u02ee"+
		"\3\2\2\2\u02f0\u02f3\3\2\2\2\u02f1\u02ef\3\2\2\2\u02f1\u02f2\3\2\2\2\u02f2"+
		"\u02f4\3\2\2\2\u02f3\u02f1\3\2\2\2\u02f4\u02f5\5L\'\2\u02f5)\3\2\2\2\u02f6"+
		"\u02fa\7\u0096\2\2\u02f7\u02f9\7_\2\2\u02f8\u02f7\3\2\2\2\u02f9\u02fc"+
		"\3\2\2\2\u02fa\u02f8\3\2\2\2\u02fa\u02fb\3\2\2\2\u02fb\u02fd\3\2\2\2\u02fc"+
		"\u02fa\3\2\2\2\u02fd\u02ff\7J\2\2\u02fe\u02f6\3\2\2\2\u02fe\u02ff\3\2"+
		"\2\2\u02ff\u0303\3\2\2\2\u0300\u0302\7_\2\2\u0301\u0300\3\2\2\2\u0302"+
		"\u0305\3\2\2\2\u0303\u0301\3\2\2\2\u0303\u0304\3\2\2\2\u0304\u0306\3\2"+
		"\2\2\u0305\u0303\3\2\2\2\u0306\u030a\7\u0088\2\2\u0307\u0309\7_\2\2\u0308"+
		"\u0307\3\2\2\2\u0309\u030c\3\2\2\2\u030a\u0308\3\2\2\2\u030a\u030b\3\2"+
		"\2\2\u030b\u030d\3\2\2\2\u030c\u030a\3\2\2\2\u030d\u030e\5N(\2\u030e+"+
		"\3\2\2\2\u030f\u0313\7\u0096\2\2\u0310\u0312\7_\2\2\u0311\u0310\3\2\2"+
		"\2\u0312\u0315\3\2\2\2\u0313\u0311\3\2\2\2\u0313\u0314\3\2\2\2\u0314\u0316"+
		"\3\2\2\2\u0315\u0313\3\2\2\2\u0316\u0318\7K\2\2\u0317\u030f\3\2\2\2\u0317"+
		"\u0318\3\2\2\2\u0318\u031c\3\2\2\2\u0319\u031b\7_\2\2\u031a\u0319\3\2"+
		"\2\2\u031b\u031e\3\2\2\2\u031c\u031a\3\2\2\2\u031c\u031d\3\2\2\2\u031d"+
		"\u031f\3\2\2\2\u031e\u031c\3\2\2\2\u031f\u0323\7\u0088\2\2\u0320\u0322"+
		"\7_\2\2\u0321\u0320\3\2\2\2\u0322\u0325\3\2\2\2\u0323\u0321\3\2\2\2\u0323"+
		"\u0324\3\2\2\2\u0324\u0326\3\2\2\2\u0325\u0323\3\2\2\2\u0326\u0327\5d"+
		"\63\2\u0327-\3\2\2\2\u0328\u032c\7\u0096\2\2\u0329\u032b\7_\2\2\u032a"+
		"\u0329\3\2\2\2\u032b\u032e\3\2\2\2\u032c\u032a\3\2\2\2\u032c\u032d\3\2"+
		"\2\2\u032d\u032f\3\2\2\2\u032e\u032c\3\2\2\2\u032f\u0333\7L\2\2\u0330"+
		"\u0332\7_\2\2\u0331\u0330\3\2\2\2\u0332\u0335\3\2\2\2\u0333\u0331\3\2"+
		"\2\2\u0333\u0334\3\2\2\2\u0334\u0336\3\2\2\2\u0335\u0333\3\2\2\2\u0336"+
		"\u033a\7\u0088\2\2\u0337\u0339\7_\2\2\u0338\u0337\3\2\2\2\u0339\u033c"+
		"\3\2\2\2\u033a\u0338\3\2\2\2\u033a\u033b\3\2\2\2\u033b\u033d\3\2\2\2\u033c"+
		"\u033a\3\2\2\2\u033d\u033f\5P)\2\u033e\u0340\7L\2\2\u033f\u033e\3\2\2"+
		"\2\u033f\u0340\3\2\2\2\u0340\u034d\3\2\2\2\u0341\u0345\7\u0088\2\2\u0342"+
		"\u0344\7_\2\2\u0343\u0342\3\2\2\2\u0344\u0347\3\2\2\2\u0345\u0343\3\2"+
		"\2\2\u0345\u0346\3\2\2\2\u0346\u0348\3\2\2\2\u0347\u0345\3\2\2\2\u0348"+
		"\u034a\5P)\2\u0349\u034b\7L\2\2\u034a\u0349\3\2\2\2\u034a\u034b\3\2\2"+
		"\2\u034b\u034d\3\2\2\2\u034c\u0328\3\2\2\2\u034c\u0341\3\2\2\2\u034d/"+
		"\3\2\2\2\u034e\u0352\7\u0096\2\2\u034f\u0351\7_\2\2\u0350\u034f\3\2\2"+
		"\2\u0351\u0354\3\2\2\2\u0352\u0350\3\2\2\2\u0352\u0353\3\2\2\2\u0353\u0355"+
		"\3\2\2\2\u0354\u0352\3\2\2\2\u0355\u0359\7M\2\2\u0356\u0358\7_\2\2\u0357"+
		"\u0356\3\2\2\2\u0358\u035b\3\2\2\2\u0359\u0357\3\2\2\2\u0359\u035a\3\2"+
		"\2\2\u035a\u035c\3\2\2\2\u035b\u0359\3\2\2\2\u035c\u0360\7\u0088\2\2\u035d"+
		"\u035f\7_\2\2\u035e\u035d\3\2\2\2\u035f\u0362\3\2\2\2\u0360\u035e\3\2"+
		"\2\2\u0360\u0361\3\2\2\2\u0361\u0363\3\2\2\2\u0362\u0360\3\2\2\2\u0363"+
		"\u0365\5R*\2\u0364\u0366\7M\2\2\u0365\u0364\3\2\2\2\u0365\u0366\3\2\2"+
		"\2\u0366\u0372\3\2\2\2\u0367\u036b\7\u0088\2\2\u0368\u036a\7_\2\2\u0369"+
		"\u0368\3\2\2\2\u036a\u036d\3\2\2\2\u036b\u0369\3\2\2\2\u036b\u036c\3\2"+
		"\2\2\u036c\u036e\3\2\2\2\u036d\u036b\3\2\2\2\u036e\u036f\5R*\2\u036f\u0370"+
		"\7M\2\2\u0370\u0372\3\2\2\2\u0371\u034e\3\2\2\2\u0371\u0367\3\2\2\2\u0372"+
		"\61\3\2\2\2\u0373\u0377\7\u0096\2\2\u0374\u0376\7_\2\2\u0375\u0374\3\2"+
		"\2\2\u0376\u0379\3\2\2\2\u0377\u0375\3\2\2\2\u0377\u0378\3\2\2\2\u0378"+
		"\u037a\3\2\2\2\u0379\u0377\3\2\2\2\u037a\u037e\7N\2\2\u037b\u037d\7_\2"+
		"\2\u037c\u037b\3\2\2\2\u037d\u0380\3\2\2\2\u037e\u037c\3\2\2\2\u037e\u037f"+
		"\3\2\2\2\u037f\u0381\3\2\2\2\u0380\u037e\3\2\2\2\u0381\u0385\7\u0088\2"+
		"\2\u0382\u0384\7_\2\2\u0383\u0382\3\2\2\2\u0384\u0387\3\2\2\2\u0385\u0383"+
		"\3\2\2\2\u0385\u0386\3\2\2\2\u0386\u0388\3\2\2\2\u0387\u0385\3\2\2\2\u0388"+
		"\u038a\5T+\2\u0389\u038b\7N\2\2\u038a\u0389\3\2\2\2\u038a\u038b\3\2\2"+
		"\2\u038b\u0397\3\2\2\2\u038c\u0390\7\u0088\2\2\u038d\u038f\7_\2\2\u038e"+
		"\u038d\3\2\2\2\u038f\u0392\3\2\2\2\u0390\u038e\3\2\2\2\u0390\u0391\3\2"+
		"\2\2\u0391\u0393\3\2\2\2\u0392\u0390\3\2\2\2\u0393\u0394\5T+\2\u0394\u0395"+
		"\7N\2\2\u0395\u0397\3\2\2\2\u0396\u0373\3\2\2\2\u0396\u038c\3\2\2\2\u0397"+
		"\63\3\2\2\2\u0398\u039c\7\u0096\2\2\u0399\u039b\7_\2\2\u039a\u0399\3\2"+
		"\2\2\u039b\u039e\3\2\2\2\u039c\u039a\3\2\2\2\u039c\u039d\3\2\2\2\u039d"+
		"\u039f\3\2\2\2\u039e\u039c\3\2\2\2\u039f\u03a3\7O\2\2\u03a0\u03a2\7_\2"+
		"\2\u03a1\u03a0\3\2\2\2\u03a2\u03a5\3\2\2\2\u03a3\u03a1\3\2\2\2\u03a3\u03a4"+
		"\3\2\2\2\u03a4\u03a6\3\2\2\2\u03a5\u03a3\3\2\2\2\u03a6\u03aa\7\u0088\2"+
		"\2\u03a7\u03a9\7_\2\2\u03a8\u03a7\3\2\2\2\u03a9\u03ac\3\2\2\2\u03aa\u03a8"+
		"\3\2\2\2\u03aa\u03ab\3\2\2\2\u03ab\u03ad\3\2\2\2\u03ac\u03aa\3\2\2\2\u03ad"+
		"\u03af\5V,\2\u03ae\u03b0\7O\2\2\u03af\u03ae\3\2\2\2\u03af\u03b0\3\2\2"+
		"\2\u03b0\u03bc\3\2\2\2\u03b1\u03b5\7\u0088\2\2\u03b2\u03b4\7_\2\2\u03b3"+
		"\u03b2\3\2\2\2\u03b4\u03b7\3\2\2\2\u03b5\u03b3\3\2\2\2\u03b5\u03b6\3\2"+
		"\2\2\u03b6\u03b8\3\2\2\2\u03b7\u03b5\3\2\2\2\u03b8\u03b9\5V,\2\u03b9\u03ba"+
		"\7O\2\2\u03ba\u03bc\3\2\2\2\u03bb\u0398\3\2\2\2\u03bb\u03b1\3\2\2\2\u03bc"+
		"\65\3\2\2\2\u03bd\u03c1\7\u0096\2\2\u03be\u03c0\7_\2\2\u03bf\u03be\3\2"+
		"\2\2\u03c0\u03c3\3\2\2\2\u03c1\u03bf\3\2\2\2\u03c1\u03c2\3\2\2\2\u03c2"+
		"\u03c4\3\2\2\2\u03c3\u03c1\3\2\2\2\u03c4\u03c8\7P\2\2\u03c5\u03c7\7_\2"+
		"\2\u03c6\u03c5\3\2\2\2\u03c7\u03ca\3\2\2\2\u03c8\u03c6\3\2\2\2\u03c8\u03c9"+
		"\3\2\2\2\u03c9\u03cb\3\2\2\2\u03ca\u03c8\3\2\2\2\u03cb\u03cf\7\u0088\2"+
		"\2\u03cc\u03ce\7_\2\2\u03cd\u03cc\3\2\2\2\u03ce\u03d1\3\2\2\2\u03cf\u03cd"+
		"\3\2\2\2\u03cf\u03d0\3\2\2\2\u03d0\u03d2\3\2\2\2\u03d1\u03cf\3\2\2\2\u03d2"+
		"\u03d4\5X-\2\u03d3\u03d5\7P\2\2\u03d4\u03d3\3\2\2\2\u03d4\u03d5\3\2\2"+
		"\2\u03d5\u03e1\3\2\2\2\u03d6\u03da\7\u0088\2\2\u03d7\u03d9\7_\2\2\u03d8"+
		"\u03d7\3\2\2\2\u03d9\u03dc\3\2\2\2\u03da\u03d8\3\2\2\2\u03da\u03db\3\2"+
		"\2\2\u03db\u03dd\3\2\2\2\u03dc\u03da\3\2\2\2\u03dd\u03de\5X-\2\u03de\u03df"+
		"\7P\2\2\u03df\u03e1\3\2\2\2\u03e0\u03bd\3\2\2\2\u03e0\u03d6\3\2\2\2\u03e1"+
		"\67\3\2\2\2\u03e2\u03e6\7\u0096\2\2\u03e3\u03e5\7_\2\2\u03e4\u03e3\3\2"+
		"\2\2\u03e5\u03e8\3\2\2\2\u03e6\u03e4\3\2\2\2\u03e6\u03e7\3\2\2\2\u03e7"+
		"\u03e9\3\2\2\2\u03e8\u03e6\3\2\2\2\u03e9\u03ed\7Q\2\2\u03ea\u03ec\7_\2"+
		"\2\u03eb\u03ea\3\2\2\2\u03ec\u03ef\3\2\2\2\u03ed\u03eb\3\2\2\2\u03ed\u03ee"+
		"\3\2\2\2\u03ee\u03f0\3\2\2\2\u03ef\u03ed\3\2\2\2\u03f0\u03f4\7\u0088\2"+
		"\2\u03f1\u03f3\7_\2\2\u03f2\u03f1\3\2\2\2\u03f3\u03f6\3\2\2\2\u03f4\u03f2"+
		"\3\2\2\2\u03f4\u03f5\3\2\2\2\u03f5\u03f7\3\2\2\2\u03f6\u03f4\3\2\2\2\u03f7"+
		"\u03f9\5Z.\2\u03f8\u03fa\7Q\2\2\u03f9\u03f8\3\2\2\2\u03f9\u03fa\3\2\2"+
		"\2\u03fa\u0406\3\2\2\2\u03fb\u03ff\7\u0088\2\2\u03fc\u03fe\7_\2\2\u03fd"+
		"\u03fc\3\2\2\2\u03fe\u0401\3\2\2\2\u03ff\u03fd\3\2\2\2\u03ff\u0400\3\2"+
		"\2\2\u0400\u0402\3\2\2\2\u0401\u03ff\3\2\2\2\u0402\u0403\5Z.\2\u0403\u0404"+
		"\7Q\2\2\u0404\u0406\3\2\2\2\u0405\u03e2\3\2\2\2\u0405\u03fb\3\2\2\2\u0406"+
		"9\3\2\2\2\u0407\u040b\7\u0096\2\2\u0408\u040a\7_\2\2\u0409\u0408\3\2\2"+
		"\2\u040a\u040d\3\2\2\2\u040b\u0409\3\2\2\2\u040b\u040c\3\2\2\2\u040c\u040e"+
		"\3\2\2\2\u040d\u040b\3\2\2\2\u040e\u0412\7R\2\2\u040f\u0411\7_\2\2\u0410"+
		"\u040f\3\2\2\2\u0411\u0414\3\2\2\2\u0412\u0410\3\2\2\2\u0412\u0413\3\2"+
		"\2\2\u0413\u0415\3\2\2\2\u0414\u0412\3\2\2\2\u0415\u0419\7\u0088\2\2\u0416"+
		"\u0418\7_\2\2\u0417\u0416\3\2\2\2\u0418\u041b\3\2\2\2\u0419\u0417\3\2"+
		"\2\2\u0419\u041a\3\2\2\2\u041a\u041c\3\2\2\2\u041b\u0419\3\2\2\2\u041c"+
		"\u041e\5\\/\2\u041d\u041f\7R\2\2\u041e\u041d\3\2\2\2\u041e\u041f\3\2\2"+
		"\2\u041f\u042b\3\2\2\2\u0420\u0424\7\u0088\2\2\u0421\u0423\7_\2\2\u0422"+
		"\u0421\3\2\2\2\u0423\u0426\3\2\2\2\u0424\u0422\3\2\2\2\u0424\u0425\3\2"+
		"\2\2\u0425\u0427\3\2\2\2\u0426\u0424\3\2\2\2\u0427\u0428\5\\/\2\u0428"+
		"\u0429\7R\2\2\u0429\u042b\3\2\2\2\u042a\u0407\3\2\2\2\u042a\u0420\3\2"+
		"\2\2\u042b;\3\2\2\2\u042c\u0430\7\u0096\2\2\u042d\u042f\7_\2\2\u042e\u042d"+
		"\3\2\2\2\u042f\u0432\3\2\2\2\u0430\u042e\3\2\2\2\u0430\u0431\3\2\2\2\u0431"+
		"\u0433\3\2\2\2\u0432\u0430\3\2\2\2\u0433\u0437\7S\2\2\u0434\u0436\7_\2"+
		"\2\u0435\u0434\3\2\2\2\u0436\u0439\3\2\2\2\u0437\u0435\3\2\2\2\u0437\u0438"+
		"\3\2\2\2\u0438\u043a\3\2\2\2\u0439\u0437\3\2\2\2\u043a\u043e\7\u0088\2"+
		"\2\u043b\u043d\7_\2\2\u043c\u043b\3\2\2\2\u043d\u0440\3\2\2\2\u043e\u043c"+
		"\3\2\2\2\u043e\u043f\3\2\2\2\u043f\u0441\3\2\2\2\u0440\u043e\3\2\2\2\u0441"+
		"\u0443\5^\60\2\u0442\u0444\7S\2\2\u0443\u0442\3\2\2\2\u0443\u0444\3\2"+
		"\2\2\u0444\u0450\3\2\2\2\u0445\u0449\7\u0088\2\2\u0446\u0448\7_\2\2\u0447"+
		"\u0446\3\2\2\2\u0448\u044b\3\2\2\2\u0449\u0447\3\2\2\2\u0449\u044a\3\2"+
		"\2\2\u044a\u044c\3\2\2\2\u044b\u0449\3\2\2\2\u044c\u044d\5^\60\2\u044d"+
		"\u044e\7S\2\2\u044e\u0450\3\2\2\2\u044f\u042c\3\2\2\2\u044f\u0445\3\2"+
		"\2\2\u0450=\3\2\2\2\u0451\u0455\7\u0096\2\2\u0452\u0454\7_\2\2\u0453\u0452"+
		"\3\2\2\2\u0454\u0457\3\2\2\2\u0455\u0453\3\2\2\2\u0455\u0456\3\2\2\2\u0456"+
		"\u0458\3\2\2\2\u0457\u0455\3\2\2\2\u0458\u045c\7T\2\2\u0459\u045b\7_\2"+
		"\2\u045a\u0459\3\2\2\2\u045b\u045e\3\2\2\2\u045c\u045a\3\2\2\2\u045c\u045d"+
		"\3\2\2\2\u045d\u045f\3\2\2\2\u045e\u045c\3\2\2\2\u045f\u0463\7\u0088\2"+
		"\2\u0460\u0462\7_\2\2\u0461\u0460\3\2\2\2\u0462\u0465\3\2\2\2\u0463\u0461"+
		"\3\2\2\2\u0463\u0464\3\2\2\2\u0464\u0466\3\2\2\2\u0465\u0463\3\2\2\2\u0466"+
		"\u0468\5`\61\2\u0467\u0469\7T\2\2\u0468\u0467\3\2\2\2\u0468\u0469\3\2"+
		"\2\2\u0469\u0476\3\2\2\2\u046a\u046e\7\u0088\2\2\u046b\u046d\7_\2\2\u046c"+
		"\u046b\3\2\2\2\u046d\u0470\3\2\2\2\u046e\u046c\3\2\2\2\u046e\u046f\3\2"+
		"\2\2\u046f\u0471\3\2\2\2\u0470\u046e\3\2\2\2\u0471\u0473\5`\61\2\u0472"+
		"\u0474\7T\2\2\u0473\u0472\3\2\2\2\u0473\u0474\3\2\2\2\u0474\u0476\3\2"+
		"\2\2\u0475\u0451\3\2\2\2\u0475\u046a\3\2\2\2\u0476?\3\2\2\2\u0477\u047b"+
		"\7\u0096\2\2\u0478\u047a\7_\2\2\u0479\u0478\3\2\2\2\u047a\u047d\3\2\2"+
		"\2\u047b\u0479\3\2\2\2\u047b\u047c\3\2\2\2\u047c\u047e\3\2\2\2\u047d\u047b"+
		"\3\2\2\2\u047e\u0482\7U\2\2\u047f\u0481\7_\2\2\u0480\u047f\3\2\2\2\u0481"+
		"\u0484\3\2\2\2\u0482\u0480\3\2\2\2\u0482\u0483\3\2\2\2\u0483\u0485\3\2"+
		"\2\2\u0484\u0482\3\2\2\2\u0485\u0489\7\u0088\2\2\u0486\u0488\7_\2\2\u0487"+
		"\u0486\3\2\2\2\u0488\u048b\3\2\2\2\u0489\u0487\3\2\2\2\u0489\u048a\3\2"+
		"\2\2\u048a\u048c\3\2\2\2\u048b\u0489\3\2\2\2\u048c\u048e\5b\62\2\u048d"+
		"\u048f\7U\2\2\u048e\u048d\3\2\2\2\u048e\u048f\3\2\2\2\u048f\u049b\3\2"+
		"\2\2\u0490\u0494\7\u0088\2\2\u0491\u0493\7_\2\2\u0492\u0491\3\2\2\2\u0493"+
		"\u0496\3\2\2\2\u0494\u0492\3\2\2\2\u0494\u0495\3\2\2\2\u0495\u0497\3\2"+
		"\2\2\u0496\u0494\3\2\2\2\u0497\u0498\5b\62\2\u0498\u0499\7U\2\2\u0499"+
		"\u049b\3\2\2\2\u049a\u0477\3\2\2\2\u049a\u0490\3\2\2\2\u049bA\3\2\2\2"+
		"\u049c\u04a0\7\16\2\2\u049d\u049f\7_\2\2\u049e\u049d\3\2\2\2\u049f\u04a2"+
		"\3\2\2\2\u04a0\u049e\3\2\2\2\u04a0\u04a1\3\2\2\2\u04a1\u04a3\3\2\2\2\u04a2"+
		"\u04a0\3\2\2\2\u04a3\u04a7\7\u0088\2\2\u04a4\u04a6\7_\2\2\u04a5\u04a4"+
		"\3\2\2\2\u04a6\u04a9\3\2\2\2\u04a7\u04a5\3\2\2\2\u04a7\u04a8\3\2\2\2\u04a8"+
		"\u04aa\3\2\2\2\u04a9\u04a7\3\2\2\2\u04aa\u04ae\5f\64\2\u04ab\u04ad\7_"+
		"\2\2\u04ac\u04ab\3\2\2\2\u04ad\u04b0\3\2\2\2\u04ae\u04ac\3\2\2\2\u04ae"+
		"\u04af\3\2\2\2\u04af\u04b1\3\2\2\2\u04b0\u04ae\3\2\2\2\u04b1\u04b2\7\u0095"+
		"\2\2\u04b2\u04b3\b\"\1\2\u04b3C\3\2\2\2\u04b4\u04b6\7\n\2\2\u04b5\u04b7"+
		"\7_\2\2\u04b6\u04b5\3\2\2\2\u04b7\u04b8\3\2\2\2\u04b8\u04b6\3\2\2\2\u04b8"+
		"\u04b9\3\2\2\2\u04b9\u04ba\3\2\2\2\u04ba\u04be\5J&\2\u04bb\u04bd\7_\2"+
		"\2\u04bc\u04bb\3\2\2\2\u04bd\u04c0\3\2\2\2\u04be\u04bc\3\2\2\2\u04be\u04bf"+
		"\3\2\2\2\u04bf\u04c1\3\2\2\2\u04c0\u04be\3\2\2\2\u04c1\u04c2\7\u0095\2"+
		"\2\u04c2\u04c3\b#\1\2\u04c3E\3\2\2\2\u04c4\u04c5\7\17\2\2\u04c5\u04c6"+
		"\5H%\2\u04c6\u04c7\7\u0095\2\2\u04c7G\3\2\2\2\u04c8\u04ca\5J&\2\u04c9"+
		"\u04c8\3\2\2\2\u04c9\u04ca\3\2\2\2\u04ca\u04cb\3\2\2\2\u04cb\u04cd\7\u0097"+
		"\2\2\u04cc\u04c9\3\2\2\2\u04cc\u04cd\3\2\2\2\u04cd\u04de\3\2\2\2\u04ce"+
		"\u04df\7u\2\2\u04cf\u04db\7\u009d\2\2\u04d0\u04d5\5H%\2\u04d1\u04d2\7"+
		"\u0094\2\2\u04d2\u04d4\5H%\2\u04d3\u04d1\3\2\2\2\u04d4\u04d7\3\2\2\2\u04d5"+
		"\u04d3\3\2\2\2\u04d5\u04d6\3\2\2\2\u04d6\u04d9\3\2\2\2\u04d7\u04d5\3\2"+
		"\2\2\u04d8\u04da\7\u0094\2\2\u04d9\u04d8\3\2\2\2\u04d9\u04da\3\2\2\2\u04da"+
		"\u04dc\3\2\2\2\u04db\u04d0\3\2\2\2\u04db\u04dc\3\2\2\2\u04dc\u04dd\3\2"+
		"\2\2\u04dd\u04df\7\u009e\2\2\u04de\u04ce\3\2\2\2\u04de\u04cf\3\2\2\2\u04df"+
		"\u04e6\3\2\2\2\u04e0\u04e3\5J&\2\u04e1\u04e2\7\4\2\2\u04e2\u04e4\5f\64"+
		"\2\u04e3\u04e1\3\2\2\2\u04e3\u04e4\3\2\2\2\u04e4\u04e6\3\2\2\2\u04e5\u04cc"+
		"\3\2\2\2\u04e5\u04e0\3\2\2\2\u04e6I\3\2\2\2\u04e7\u04e9\7\u0097\2\2\u04e8"+
		"\u04e7\3\2\2\2\u04e8\u04e9\3\2\2\2\u04e9\u04ea\3\2\2\2\u04ea\u04eb\5f"+
		"\64\2\u04eb\u04f2\b&\1\2\u04ec\u04ed\7\u0097\2\2\u04ed\u04ee\5f\64\2\u04ee"+
		"\u04ef\b&\1\2\u04ef\u04f1\3\2\2\2\u04f0\u04ec\3\2\2\2\u04f1\u04f4\3\2"+
		"\2\2\u04f2\u04f0\3\2\2\2\u04f2\u04f3\3\2\2\2\u04f3K\3\2\2\2\u04f4\u04f2"+
		"\3\2\2\2\u04f5\u04f6\t\2\2\2\u04f6M\3\2\2\2\u04f7\u04f8\7`\2\2\u04f8\u04f9"+
		"\b(\1\2\u04f9O\3\2\2\2\u04fa\u04fb\7k\2\2\u04fb\u04fc\b)\1\2\u04fcQ\3"+
		"\2\2\2\u04fd\u04fe\7k\2\2\u04fe\u04ff\b*\1\2\u04ffS\3\2\2\2\u0500\u0502"+
		"\7t\2\2\u0501\u0500\3\2\2\2\u0501\u0502\3\2\2\2\u0502\u0503\3\2\2\2\u0503"+
		"\u050b\t\3\2\2\u0504\u0505\7o\2\2\u0505\u050b\t\4\2\2\u0506\u0507\7p\2"+
		"\2\u0507\u050b\t\5\2\2\u0508\u0509\7q\2\2\u0509\u050b\t\6\2\2\u050a\u0501"+
		"\3\2\2\2\u050a\u0504\3\2\2\2\u050a\u0506\3\2\2\2\u050a\u0508\3\2\2\2\u050b"+
		"\u050c\3\2\2\2\u050c\u050d\b+\1\2\u050dU\3\2\2\2\u050e\u0510\7t\2\2\u050f"+
		"\u050e\3\2\2\2\u050f\u0510\3\2\2\2\u0510\u0511\3\2\2\2\u0511\u0519\t\3"+
		"\2\2\u0512\u0513\7o\2\2\u0513\u0519\t\4\2\2\u0514\u0515\7p\2\2\u0515\u0519"+
		"\t\5\2\2\u0516\u0517\7q\2\2\u0517\u0519\t\6\2\2\u0518\u050f\3\2\2\2\u0518"+
		"\u0512\3\2\2\2\u0518\u0514\3\2\2\2\u0518\u0516\3\2\2\2\u0519\u051a\3\2"+
		"\2\2\u051a\u051b\b,\1\2\u051bW\3\2\2\2\u051c\u051e\7t\2\2\u051d\u051c"+
		"\3\2\2\2\u051d\u051e\3\2\2\2\u051e\u051f\3\2\2\2\u051f\u0527\t\3\2\2\u0520"+
		"\u0521\7o\2\2\u0521\u0527\t\4\2\2\u0522\u0523\7p\2\2\u0523\u0527\t\5\2"+
		"\2\u0524\u0525\7q\2\2\u0525\u0527\t\6\2\2\u0526\u051d\3\2\2\2\u0526\u0520"+
		"\3\2\2\2\u0526\u0522\3\2\2\2\u0526\u0524\3\2\2\2\u0527\u0528\3\2\2\2\u0528"+
		"\u0529\b-\1\2\u0529Y\3\2\2\2\u052a\u052c\7t\2\2\u052b\u052a\3\2\2\2\u052b"+
		"\u052c\3\2\2\2\u052c\u052d\3\2\2\2\u052d\u0535\t\3\2\2\u052e\u052f\7o"+
		"\2\2\u052f\u0535\t\4\2\2\u0530\u0531\7p\2\2\u0531\u0535\t\5\2\2\u0532"+
		"\u0533\7q\2\2\u0533\u0535\t\6\2\2\u0534\u052b\3\2\2\2\u0534\u052e\3\2"+
		"\2\2\u0534\u0530\3\2\2\2\u0534\u0532\3\2\2\2\u0535\u0536\3\2\2\2\u0536"+
		"\u0537\b.\1\2\u0537[\3\2\2\2\u0538\u053a\7t\2\2\u0539\u0538\3\2\2\2\u0539"+
		"\u053a\3\2\2\2\u053a\u053b\3\2\2\2\u053b\u0543\t\3\2\2\u053c\u053d\7o"+
		"\2\2\u053d\u0543\t\4\2\2\u053e\u053f\7p\2\2\u053f\u0543\t\5\2\2\u0540"+
		"\u0541\7q\2\2\u0541\u0543\t\6\2\2\u0542\u0539\3\2\2\2\u0542\u053c\3\2"+
		"\2\2\u0542\u053e\3\2\2\2\u0542\u0540\3\2\2\2\u0543\u0544\3\2\2\2\u0544"+
		"\u0545\b/\1\2\u0545]\3\2\2\2\u0546\u0548\7t\2\2\u0547\u0546\3\2\2\2\u0547"+
		"\u0548\3\2\2\2\u0548\u0549\3\2\2\2\u0549\u0551\t\3\2\2\u054a\u054b\7o"+
		"\2\2\u054b\u0551\t\4\2\2\u054c\u054d\7p\2\2\u054d\u0551\t\5\2\2\u054e"+
		"\u054f\7q\2\2\u054f\u0551\t\6\2\2\u0550\u0547\3\2\2\2\u0550\u054a\3\2"+
		"\2\2\u0550\u054c\3\2\2\2\u0550\u054e\3\2\2\2\u0551\u0552\3\2\2\2\u0552"+
		"\u0553\b\60\1\2\u0553_\3\2\2\2\u0554\u0556\7t\2\2\u0555\u0554\3\2\2\2"+
		"\u0555\u0556\3\2\2\2\u0556\u0557\3\2\2\2\u0557\u055f\t\3\2\2\u0558\u0559"+
		"\7o\2\2\u0559\u055f\t\4\2\2\u055a\u055b\7p\2\2\u055b\u055f\t\5\2\2\u055c"+
		"\u055d\7q\2\2\u055d\u055f\t\6\2\2\u055e\u0555\3\2\2\2\u055e\u0558\3\2"+
		"\2\2\u055e\u055a\3\2\2\2\u055e\u055c\3\2\2\2\u055f\u0560\3\2\2\2\u0560"+
		"\u0561\b\61\1\2\u0561a\3\2\2\2\u0562\u0564\7t\2\2\u0563\u0562\3\2\2\2"+
		"\u0563\u0564\3\2\2\2\u0564\u0565\3\2\2\2\u0565\u056d\t\3\2\2\u0566\u0567"+
		"\7o\2\2\u0567\u056d\t\4\2\2\u0568\u0569\7p\2\2\u0569\u056d\t\5\2\2\u056a"+
		"\u056b\7q\2\2\u056b\u056d\t\6\2\2\u056c\u0563\3\2\2\2\u056c\u0566\3\2"+
		"\2\2\u056c\u0568\3\2\2\2\u056c\u056a\3\2\2\2\u056d\u056e\3\2\2\2\u056e"+
		"\u056f\b\62\1\2\u056fc\3\2\2\2\u0570\u0571\7a\2\2\u0571\u0575\b\63\1\2"+
		"\u0572\u0573\7b\2\2\u0573\u0575\b\63\1\2\u0574\u0570\3\2\2\2\u0574\u0572"+
		"\3\2\2\2\u0575e\3\2\2\2\u0576\u057a\7V\2\2\u0577\u0578\7r\2\2\u0578\u057a"+
		"\7V\2\2\u0579\u0576\3\2\2\2\u0579\u0577\3\2\2\2\u057ag\3\2\2\2\u057b\u057c"+
		"\t\7\2\2\u057ci\3\2\2\2\u00b6ouz\u0080\u0086\u008e\u0094\u009d\u00ae\u00b3"+
		"\u00bc\u00c3\u00ca\u00dc\u00e1\u00e8\u00ed\u00f3\u00fd\u0104\u010b\u011d"+
		"\u0122\u0129\u012e\u0138\u013f\u0146\u014d\u0157\u015e\u0165\u016c\u0173"+
		"\u017a\u0184\u018b\u0193\u01a5\u01ac\u01b2\u01b8\u01bf\u01c6\u01cd\u01d5"+
		"\u01dc\u01e1\u01e7\u01f1\u01f8\u01ff\u0206\u020e\u0215\u021a\u0224\u022b"+
		"\u0232\u0239\u0240\u024a\u0251\u0258\u025f\u0266\u026d\u0274\u0281\u0288"+
		"\u0293\u02b2\u02db\u02e1\u02e5\u02ea\u02f1\u02fa\u02fe\u0303\u030a\u0313"+
		"\u0317\u031c\u0323\u032c\u0333\u033a\u033f\u0345\u034a\u034c\u0352\u0359"+
		"\u0360\u0365\u036b\u0371\u0377\u037e\u0385\u038a\u0390\u0396\u039c\u03a3"+
		"\u03aa\u03af\u03b5\u03bb\u03c1\u03c8\u03cf\u03d4\u03da\u03e0\u03e6\u03ed"+
		"\u03f4\u03f9\u03ff\u0405\u040b\u0412\u0419\u041e\u0424\u042a\u0430\u0437"+
		"\u043e\u0443\u0449\u044f\u0455\u045c\u0463\u0468\u046e\u0473\u0475\u047b"+
		"\u0482\u0489\u048e\u0494\u049a\u04a0\u04a7\u04ae\u04b8\u04be\u04c9\u04cc"+
		"\u04d5\u04d9\u04db\u04de\u04e3\u04e5\u04e8\u04f2\u0501\u050a\u050f\u0518"+
		"\u051d\u0526\u052b\u0534\u0539\u0542\u0547\u0550\u0555\u055e\u0563\u056c"+
		"\u0574\u0579";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}