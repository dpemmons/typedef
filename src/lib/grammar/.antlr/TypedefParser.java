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
			setState(220);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE) {
				{
				{
				setState(203);
				((StructDeclarationContext)_localctx).maybeValuedSymbol = maybeValuedSymbol();

								TryInsertSymbol(_localctx.s, this, ((StructDeclarationContext)_localctx).maybeValuedSymbol);
							
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
				setState(215);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(212);
						match(WS);
						}
						} 
					}
					setState(217);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
				}
				}
				}
				setState(222);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
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
			match(RBRACE);

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

	public static class VariantDeclarationContext extends ParserRuleContext {
		public std::optional<td::SymbolTable::Symbol> maybe_symbol;
		public std::shared_ptr<td::Variant> v;
		public IdentifierContext identifier;
		public UnvaluedSymbolContext unvaluedSymbol;
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
			setState(232);
			match(KW_VARIANT);
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
			((VariantDeclarationContext)_localctx).identifier = identifier();
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
			match(LBRACE);
			setState(270);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 84)) & ~0x3f) == 0 && ((1L << (_la - 84)) & ((1L << (NON_KEYWORD_IDENTIFIER - 84)) | (1L << (WS - 84)) | (1L << (RAW_ESCAPE - 84)))) != 0)) {
				{
				{
				setState(250);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(247);
					match(WS);
					}
					}
					setState(252);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(253);
				((VariantDeclarationContext)_localctx).unvaluedSymbol = unvaluedSymbol();

								TryInsertSymbol(_localctx.v, this, ((VariantDeclarationContext)_localctx).unvaluedSymbol);
							
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
				match(SEMI);
				setState(265);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(262);
						match(WS);
						}
						} 
					}
					setState(267);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
				}
				}
				}
				setState(272);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(273);
			match(RBRACE);

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
			setState(276);
			match(KW_VECTOR);
			setState(280);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(277);
				match(WS);
				}
				}
				setState(282);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(283);
			((VectorDeclarationContext)_localctx).identifier = identifier();
			setState(287);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(284);
				match(WS);
				}
				}
				setState(289);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(290);
			match(LT);
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
			((VectorDeclarationContext)_localctx).val = ((VectorDeclarationContext)_localctx).unvaluedType = unvaluedType();
			setState(301);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(298);
				match(WS);
				}
				}
				setState(303);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(304);
			match(GT);

					if (((VectorDeclarationContext)_localctx).unvaluedType->maybe_val) {
						((VectorDeclarationContext)_localctx).maybe_symbol =  std::make_pair(((VectorDeclarationContext)_localctx).identifier->id,
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
			setState(307);
			match(KW_MAP);
			setState(311);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(308);
				match(WS);
				}
				}
				setState(313);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(314);
			((MapDeclarationContext)_localctx).identifier = identifier();
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
			match(LT);
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
			((MapDeclarationContext)_localctx).key = primitiveType();
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
			match(COMMA);
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
			((MapDeclarationContext)_localctx).val = unvaluedType();
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

					// Map Declaration
					if (((MapDeclarationContext)_localctx).key->maybe_val && ((MapDeclarationContext)_localctx).val->maybe_val) {
						((MapDeclarationContext)_localctx).maybe_symbol =  std::make_pair(((MapDeclarationContext)_localctx).identifier->id,
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
			setState(371);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,35,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(352);
				((MaybeValuedSymbolContext)_localctx).identifier = identifier();
				setState(356);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,33,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(353);
						match(WS);
						}
						} 
					}
					setState(358);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,33,_ctx);
				}
				setState(359);
				((MaybeValuedSymbolContext)_localctx).maybeValuedType = maybeValuedType();
				setState(363);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,34,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(360);
						match(WS);
						}
						} 
					}
					setState(365);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,34,_ctx);
				}

						if (((MaybeValuedSymbolContext)_localctx).maybeValuedType->maybe_val) {
							((MaybeValuedSymbolContext)_localctx).maybe_symbol =  std::make_pair(((MaybeValuedSymbolContext)_localctx).identifier->id, *((MaybeValuedSymbolContext)_localctx).maybeValuedType->maybe_val);
						}
					
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(368);
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
			setState(402);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(373);
				((UnvaluedSymbolContext)_localctx).inlineStruct = inlineStruct();
				((UnvaluedSymbolContext)_localctx).maybe_symbol =  ((UnvaluedSymbolContext)_localctx).inlineStruct->maybe_symbol; 
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(376);
				((UnvaluedSymbolContext)_localctx).inlineVariant = inlineVariant();
				((UnvaluedSymbolContext)_localctx).maybe_symbol =  ((UnvaluedSymbolContext)_localctx).inlineVariant->maybe_symbol; 
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(379);
				((UnvaluedSymbolContext)_localctx).inlineVector = inlineVector();
				((UnvaluedSymbolContext)_localctx).maybe_symbol =  ((UnvaluedSymbolContext)_localctx).inlineVector->maybe_symbol; 
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(382);
				((UnvaluedSymbolContext)_localctx).inlineMap = inlineMap();
				((UnvaluedSymbolContext)_localctx).maybe_symbol =  ((UnvaluedSymbolContext)_localctx).inlineMap->maybe_symbol; 
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				{
				setState(385);
				((UnvaluedSymbolContext)_localctx).identifier = identifier();
				setState(389);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(386);
					match(WS);
					}
					}
					setState(391);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(392);
				match(COLON);
				setState(396);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(393);
					match(WS);
					}
					}
					setState(398);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(399);
				((UnvaluedSymbolContext)_localctx).unvaluedType = unvaluedType();

						if (((UnvaluedSymbolContext)_localctx).unvaluedType->maybe_val) {
							((UnvaluedSymbolContext)_localctx).maybe_symbol =  std::make_pair(((UnvaluedSymbolContext)_localctx).identifier->id, *((UnvaluedSymbolContext)_localctx).unvaluedType->maybe_val);
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
			setState(404);
			((InlineStructContext)_localctx).identifier = identifier();
			setState(408);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(405);
				match(WS);
				}
				}
				setState(410);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(411);
			match(COLON);
			setState(415);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(412);
				match(WS);
				}
				}
				setState(417);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(418);
			match(KW_STRUCT);
			setState(422);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(419);
				match(WS);
				}
				}
				setState(424);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(425);
			match(LBRACE);
			setState(429);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,42,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(426);
					match(WS);
					}
					} 
				}
				setState(431);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,42,_ctx);
			}
			setState(449);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE) {
				{
				{
				setState(432);
				((InlineStructContext)_localctx).maybeValuedSymbol = maybeValuedSymbol();

								TryInsertSymbol(_localctx.s, this, ((InlineStructContext)_localctx).maybeValuedSymbol);
							
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
				match(SEMI);
				setState(444);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,44,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(441);
						match(WS);
						}
						} 
					}
					setState(446);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,44,_ctx);
				}
				}
				}
				setState(451);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
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
			match(RBRACE);

					((InlineStructContext)_localctx).maybe_symbol =  std::make_pair(((InlineStructContext)_localctx).identifier->id, _localctx.s);
				
			}
		}
		catch (RecognitionException re) {
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
			setState(461);
			((InlineVariantContext)_localctx).identifier = identifier();
			setState(465);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(462);
				match(WS);
				}
				}
				setState(467);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(468);
			match(COLON);
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
			match(KW_VARIANT);
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
			match(LBRACE);
			setState(506);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 84)) & ~0x3f) == 0 && ((1L << (_la - 84)) & ((1L << (NON_KEYWORD_IDENTIFIER - 84)) | (1L << (WS - 84)) | (1L << (RAW_ESCAPE - 84)))) != 0)) {
				{
				{
				setState(486);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(483);
					match(WS);
					}
					}
					setState(488);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(489);
				((InlineVariantContext)_localctx).unvaluedSymbol = unvaluedSymbol();

								TryInsertSymbol(_localctx.v, this, ((InlineVariantContext)_localctx).unvaluedSymbol);
							
				setState(494);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(491);
					match(WS);
					}
					}
					setState(496);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(497);
				match(SEMI);
				setState(501);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,52,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(498);
						match(WS);
						}
						} 
					}
					setState(503);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,52,_ctx);
				}
				}
				}
				setState(508);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(509);
			match(RBRACE);

					((InlineVariantContext)_localctx).maybe_symbol =  std::make_pair(((InlineVariantContext)_localctx).identifier->id, _localctx.v);
				
			}
		}
		catch (RecognitionException re) {
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
			setState(512);
			((InlineVectorContext)_localctx).identifier = identifier();
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
			match(COLON);
			setState(523);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(520);
				match(WS);
				}
				}
				setState(525);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(526);
			match(KW_VECTOR);
			setState(530);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(527);
				match(WS);
				}
				}
				setState(532);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(533);
			match(LT);
			setState(537);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(534);
				match(WS);
				}
				}
				setState(539);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(540);
			((InlineVectorContext)_localctx).val = ((InlineVectorContext)_localctx).unvaluedType = unvaluedType();
			setState(544);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(541);
				match(WS);
				}
				}
				setState(546);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(547);
			match(GT);

					if (((InlineVectorContext)_localctx).unvaluedType->maybe_val) {
						((InlineVectorContext)_localctx).maybe_symbol =  std::make_pair(((InlineVectorContext)_localctx).identifier->id,
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
			setState(550);
			((InlineMapContext)_localctx).identifier = identifier();
			setState(554);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(551);
				match(WS);
				}
				}
				setState(556);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(557);
			match(COLON);
			setState(561);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(558);
				match(WS);
				}
				}
				setState(563);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(564);
			match(KW_MAP);
			setState(568);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(565);
				match(WS);
				}
				}
				setState(570);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(571);
			match(LT);
			setState(575);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(572);
				match(WS);
				}
				}
				setState(577);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(578);
			((InlineMapContext)_localctx).key = primitiveType();
			setState(582);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(579);
				match(WS);
				}
				}
				setState(584);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(585);
			match(COMMA);
			setState(589);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(586);
				match(WS);
				}
				}
				setState(591);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(592);
			((InlineMapContext)_localctx).val = unvaluedType();
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
			match(GT);

					// Map Declaration
					if (((InlineMapContext)_localctx).key->maybe_val && ((InlineMapContext)_localctx).val->maybe_val) {
						((InlineMapContext)_localctx).maybe_symbol =  std::make_pair(((InlineMapContext)_localctx).identifier->id,
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
			setState(616);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,67,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(602);
				((MaybeValuedTypeContext)_localctx).valuedType = valuedType();
				((MaybeValuedTypeContext)_localctx).maybe_val =  ((MaybeValuedTypeContext)_localctx).valuedType->maybe_val;
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(605);
				match(COLON);
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
			setState(618);
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
			setState(627);
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
				setState(621);
				((UnvaluedTypeContext)_localctx).primitiveType = primitiveType();
				((UnvaluedTypeContext)_localctx).maybe_val =  ((UnvaluedTypeContext)_localctx).primitiveType->maybe_val;
				}
				break;
			case NON_KEYWORD_IDENTIFIER:
			case RAW_ESCAPE:
				{
				setState(624);
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
			setState(629);
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
			setState(658);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case KW_BOOL:
				enterOuterAlt(_localctx, 1);
				{
				setState(632);
				match(KW_BOOL);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<bool>(); 
				}
				break;
			case KW_CHAR:
				enterOuterAlt(_localctx, 2);
				{
				setState(634);
				match(KW_CHAR);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<char32_t>(); 
				}
				break;
			case KW_STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(636);
				match(KW_STRING);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<std::string>(); 
				}
				break;
			case KW_F32:
				enterOuterAlt(_localctx, 4);
				{
				setState(638);
				match(KW_F32);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<float>(); 
				}
				break;
			case KW_F64:
				enterOuterAlt(_localctx, 5);
				{
				setState(640);
				match(KW_F64);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<double>(); 
				}
				break;
			case KW_U8:
				enterOuterAlt(_localctx, 6);
				{
				setState(642);
				match(KW_U8);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<uint8_t>(); 
				}
				break;
			case KW_U16:
				enterOuterAlt(_localctx, 7);
				{
				setState(644);
				match(KW_U16);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<uint16_t>(); 
				}
				break;
			case KW_U32:
				enterOuterAlt(_localctx, 8);
				{
				setState(646);
				match(KW_U32);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<uint32_t>(); 
				}
				break;
			case KW_U64:
				enterOuterAlt(_localctx, 9);
				{
				setState(648);
				match(KW_U64);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<uint64_t>(); 
				}
				break;
			case KW_I8:
				enterOuterAlt(_localctx, 10);
				{
				setState(650);
				match(KW_I8);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<int8_t>(); 
				}
				break;
			case KW_I16:
				enterOuterAlt(_localctx, 11);
				{
				setState(652);
				match(KW_I16);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<int16_t>(); 
				}
				break;
			case KW_I32:
				enterOuterAlt(_localctx, 12);
				{
				setState(654);
				match(KW_I32);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<int32_t>(); 
				}
				break;
			case KW_I64:
				enterOuterAlt(_localctx, 13);
				{
				setState(656);
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
			setState(699);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,70,_ctx) ) {
			case 1:
				{
				setState(660);
				((ValuedPrimitiveTypeContext)_localctx).valuedBoolFragment = valuedBoolFragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedBoolFragment->literal->maybe_val;
				}
				break;
			case 2:
				{
				setState(663);
				((ValuedPrimitiveTypeContext)_localctx).valuedCharFragment = valuedCharFragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedCharFragment->literal->maybe_val;
				}
				break;
			case 3:
				{
				setState(666);
				((ValuedPrimitiveTypeContext)_localctx).valuedStringFragment = valuedStringFragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedStringFragment->literal->maybe_val;
				}
				break;
			case 4:
				{
				setState(669);
				((ValuedPrimitiveTypeContext)_localctx).valuedF32Fragment = valuedF32Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedF32Fragment->literal->maybe_val;
				}
				break;
			case 5:
				{
				setState(672);
				((ValuedPrimitiveTypeContext)_localctx).valuedF64Fragment = valuedF64Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedF64Fragment->literal->maybe_val;
				}
				break;
			case 6:
				{
				setState(675);
				((ValuedPrimitiveTypeContext)_localctx).valuedU8Fragment = valuedU8Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU8Fragment->literal->maybe_val;
				}
				break;
			case 7:
				{
				setState(678);
				((ValuedPrimitiveTypeContext)_localctx).valuedU16Fragment = valuedU16Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU16Fragment->literal->maybe_val;
				}
				break;
			case 8:
				{
				setState(681);
				((ValuedPrimitiveTypeContext)_localctx).valuedU32Fragment = valuedU32Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU32Fragment->literal->maybe_val;
				}
				break;
			case 9:
				{
				setState(684);
				((ValuedPrimitiveTypeContext)_localctx).valuedU64Fragment = valuedU64Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU64Fragment->literal->maybe_val;
				}
				break;
			case 10:
				{
				setState(687);
				((ValuedPrimitiveTypeContext)_localctx).valuedI8Fragment = valuedI8Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedI8Fragment->literal->maybe_val;
				}
				break;
			case 11:
				{
				setState(690);
				((ValuedPrimitiveTypeContext)_localctx).valuedI16Fragment = valuedI16Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedI16Fragment->literal->maybe_val;
				}
				break;
			case 12:
				{
				setState(693);
				((ValuedPrimitiveTypeContext)_localctx).valuedI32Fragment = valuedI32Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedI32Fragment->literal->maybe_val;
				}
				break;
			case 13:
				{
				setState(696);
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
			setState(709);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(701);
				match(COLON);
				setState(705);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(702);
					match(WS);
					}
					}
					setState(707);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(708);
				match(KW_BOOL);
				}
			}

			setState(714);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(711);
				match(WS);
				}
				}
				setState(716);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(717);
			match(EQ);
			setState(721);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(718);
				match(WS);
				}
				}
				setState(723);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(724);
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
			setState(734);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(726);
				match(COLON);
				setState(730);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(727);
					match(WS);
					}
					}
					setState(732);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(733);
				match(KW_CHAR);
				}
			}

			setState(739);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(736);
				match(WS);
				}
				}
				setState(741);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(742);
			match(EQ);
			setState(746);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(743);
				match(WS);
				}
				}
				setState(748);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(749);
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
			setState(759);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(751);
				match(COLON);
				setState(755);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(752);
					match(WS);
					}
					}
					setState(757);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(758);
				match(KW_STRING);
				}
			}

			setState(764);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(761);
				match(WS);
				}
				}
				setState(766);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(767);
			match(EQ);
			setState(771);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(768);
				match(WS);
				}
				}
				setState(773);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(774);
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
			setState(812);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(776);
				match(COLON);
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
				match(KW_F32);
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
				match(EQ);
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
				((ValuedF32FragmentContext)_localctx).literal = f32Literal();
				setState(799);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F32) {
					{
					setState(798);
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
				setState(801);
				match(EQ);
				setState(805);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(802);
					match(WS);
					}
					}
					setState(807);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(808);
				((ValuedF32FragmentContext)_localctx).literal = f32Literal();
				setState(810);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F32) {
					{
					setState(809);
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
			setState(849);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(814);
				match(COLON);
				setState(818);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(815);
					match(WS);
					}
					}
					setState(820);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(821);
				match(KW_F64);
				setState(825);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(822);
					match(WS);
					}
					}
					setState(827);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(828);
				match(EQ);
				setState(832);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(829);
					match(WS);
					}
					}
					setState(834);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(835);
				((ValuedF64FragmentContext)_localctx).literal = f64Literal();
				setState(837);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F64) {
					{
					setState(836);
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
				setState(839);
				match(EQ);
				setState(843);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(840);
					match(WS);
					}
					}
					setState(845);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(846);
				((ValuedF64FragmentContext)_localctx).literal = f64Literal();
				setState(847);
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
			setState(886);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(851);
				match(COLON);
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
				match(KW_U8);
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
				match(EQ);
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
				((ValuedU8FragmentContext)_localctx).literal = u8Literal();
				setState(874);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U8) {
					{
					setState(873);
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
				setState(876);
				match(EQ);
				setState(880);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(877);
					match(WS);
					}
					}
					setState(882);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(883);
				((ValuedU8FragmentContext)_localctx).literal = u8Literal();
				setState(884);
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
			setState(923);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(888);
				match(COLON);
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
				match(KW_U16);
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
				match(EQ);
				setState(906);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(903);
					match(WS);
					}
					}
					setState(908);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(909);
				((ValuedU16FragmentContext)_localctx).literal = u16Literal();
				setState(911);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U16) {
					{
					setState(910);
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
				setState(913);
				match(EQ);
				setState(917);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(914);
					match(WS);
					}
					}
					setState(919);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(920);
				((ValuedU16FragmentContext)_localctx).literal = u16Literal();
				setState(921);
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
			setState(960);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(925);
				match(COLON);
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
				match(KW_U32);
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
				match(EQ);
				setState(943);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(940);
					match(WS);
					}
					}
					setState(945);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(946);
				((ValuedU32FragmentContext)_localctx).literal = u32Literal();
				setState(948);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U32) {
					{
					setState(947);
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
				setState(950);
				match(EQ);
				setState(954);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(951);
					match(WS);
					}
					}
					setState(956);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(957);
				((ValuedU32FragmentContext)_localctx).literal = u32Literal();
				setState(958);
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
			setState(997);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(962);
				match(COLON);
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
				match(KW_U64);
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
				match(EQ);
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
				((ValuedU64FragmentContext)_localctx).literal = u64Literal();
				setState(985);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U64) {
					{
					setState(984);
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
				setState(987);
				match(EQ);
				setState(991);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(988);
					match(WS);
					}
					}
					setState(993);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(994);
				((ValuedU64FragmentContext)_localctx).literal = u64Literal();
				setState(995);
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
			setState(1034);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(999);
				match(COLON);
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
				match(KW_I8);
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
				match(EQ);
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
				((ValuedI8FragmentContext)_localctx).literal = i8Literal();
				setState(1022);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I8) {
					{
					setState(1021);
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
				setState(1024);
				match(EQ);
				setState(1028);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1025);
					match(WS);
					}
					}
					setState(1030);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1031);
				((ValuedI8FragmentContext)_localctx).literal = i8Literal();
				setState(1032);
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
			setState(1071);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(1036);
				match(COLON);
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
				match(KW_I16);
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
				match(EQ);
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
				((ValuedI16FragmentContext)_localctx).literal = i16Literal();
				setState(1059);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I16) {
					{
					setState(1058);
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
				setState(1061);
				match(EQ);
				setState(1065);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1062);
					match(WS);
					}
					}
					setState(1067);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1068);
				((ValuedI16FragmentContext)_localctx).literal = i16Literal();
				setState(1069);
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
			setState(1109);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(1073);
				match(COLON);
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
				match(KW_I32);
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
				match(EQ);
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
				((ValuedI32FragmentContext)_localctx).literal = i32Literal();
				setState(1096);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I32) {
					{
					setState(1095);
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
				setState(1098);
				match(EQ);
				setState(1102);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1099);
					match(WS);
					}
					}
					setState(1104);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1105);
				((ValuedI32FragmentContext)_localctx).literal = i32Literal();
				setState(1107);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I32) {
					{
					setState(1106);
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
			setState(1146);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(1111);
				match(COLON);
				setState(1115);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1112);
					match(WS);
					}
					}
					setState(1117);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1118);
				match(KW_I64);
				setState(1122);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1119);
					match(WS);
					}
					}
					setState(1124);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1125);
				match(EQ);
				setState(1129);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1126);
					match(WS);
					}
					}
					setState(1131);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1132);
				((ValuedI64FragmentContext)_localctx).literal = i64Literal();
				setState(1134);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I64) {
					{
					setState(1133);
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
				setState(1136);
				match(EQ);
				setState(1140);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(1137);
					match(WS);
					}
					}
					setState(1142);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(1143);
				((ValuedI64FragmentContext)_localctx).literal = i64Literal();
				setState(1144);
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
			setState(1148);
			match(KW_TYPEDEF);
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
			((TypedefVersionDeclarationContext)_localctx).identifier = identifier();
			setState(1166);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(1163);
				match(WS);
				}
				}
				setState(1168);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(1169);
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
			setState(1172);
			match(KW_MODULE);
			setState(1174); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(1173);
				match(WS);
				}
				}
				setState(1176); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==WS );
			setState(1178);
			((ModuleDeclarationContext)_localctx).simplePath = simplePath();
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
			setState(1188);
			match(KW_USE);
			setState(1189);
			useTree();
			setState(1190);
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
			setState(1221);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,157,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(1196);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE || _la==PATHSEP) {
					{
					setState(1193);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,150,_ctx) ) {
					case 1:
						{
						setState(1192);
						simplePath();
						}
						break;
					}
					setState(1195);
					match(PATHSEP);
					}
				}

				setState(1214);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case STAR:
					{
					setState(1198);
					match(STAR);
					}
					break;
				case LBRACE:
					{
					setState(1199);
					match(LBRACE);
					setState(1211);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (((((_la - 84)) & ~0x3f) == 0 && ((1L << (_la - 84)) & ((1L << (NON_KEYWORD_IDENTIFIER - 84)) | (1L << (RAW_ESCAPE - 84)) | (1L << (STAR - 84)))) != 0) || _la==PATHSEP || _la==LBRACE) {
						{
						setState(1200);
						useTree();
						setState(1205);
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,152,_ctx);
						while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
							if ( _alt==1 ) {
								{
								{
								setState(1201);
								match(COMMA);
								setState(1202);
								useTree();
								}
								} 
							}
							setState(1207);
							_errHandler.sync(this);
							_alt = getInterpreter().adaptivePredict(_input,152,_ctx);
						}
						setState(1209);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(1208);
							match(COMMA);
							}
						}

						}
					}

					setState(1213);
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
				setState(1216);
				simplePath();
				setState(1219);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_AS) {
					{
					setState(1217);
					match(KW_AS);
					setState(1218);
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
			setState(1224);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PATHSEP) {
				{
				setState(1223);
				match(PATHSEP);
				}
			}

			setState(1226);
			((SimplePathContext)_localctx).identifier = identifier();
			_localctx.path.push_back(((SimplePathContext)_localctx).identifier->id);
			setState(1234);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,159,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(1228);
					match(PATHSEP);
					setState(1229);
					((SimplePathContext)_localctx).identifier = identifier();
					_localctx.path.push_back(((SimplePathContext)_localctx).identifier->id);
					}
					} 
				}
				setState(1236);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,159,_ctx);
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
			setState(1237);
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
			setState(1239);
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
			setState(1242);
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
			setState(1245);
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
			setState(1258);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1249);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1248);
					match(MINUS);
					}
				}

				setState(1251);
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
				setState(1252);
				match(HEX_PREFIX);
				setState(1253);
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
				setState(1254);
				match(OCT_PREFIX);
				setState(1255);
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
				setState(1256);
				match(BIN_PREFIX);
				setState(1257);
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
			setState(1272);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1263);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1262);
					match(MINUS);
					}
				}

				setState(1265);
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
				setState(1266);
				match(HEX_PREFIX);
				setState(1267);
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
				setState(1268);
				match(OCT_PREFIX);
				setState(1269);
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
				setState(1270);
				match(BIN_PREFIX);
				setState(1271);
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
			setState(1286);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1277);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1276);
					match(MINUS);
					}
				}

				setState(1279);
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
				setState(1280);
				match(HEX_PREFIX);
				setState(1281);
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
				setState(1282);
				match(OCT_PREFIX);
				setState(1283);
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
				setState(1284);
				match(BIN_PREFIX);
				setState(1285);
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
			setState(1300);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1291);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1290);
					match(MINUS);
					}
				}

				setState(1293);
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
				setState(1294);
				match(HEX_PREFIX);
				setState(1295);
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
				setState(1296);
				match(OCT_PREFIX);
				setState(1297);
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
				setState(1298);
				match(BIN_PREFIX);
				setState(1299);
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
			setState(1314);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1305);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1304);
					match(MINUS);
					}
				}

				setState(1307);
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
				setState(1308);
				match(HEX_PREFIX);
				setState(1309);
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
				setState(1310);
				match(OCT_PREFIX);
				setState(1311);
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
				setState(1312);
				match(BIN_PREFIX);
				setState(1313);
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
			setState(1328);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1319);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1318);
					match(MINUS);
					}
				}

				setState(1321);
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
				setState(1322);
				match(HEX_PREFIX);
				setState(1323);
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
				setState(1324);
				match(OCT_PREFIX);
				setState(1325);
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
				setState(1326);
				match(BIN_PREFIX);
				setState(1327);
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
			setState(1342);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1333);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1332);
					match(MINUS);
					}
				}

				setState(1335);
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
				setState(1336);
				match(HEX_PREFIX);
				setState(1337);
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
				setState(1338);
				match(OCT_PREFIX);
				setState(1339);
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
				setState(1340);
				match(BIN_PREFIX);
				setState(1341);
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
			setState(1356);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1347);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1346);
					match(MINUS);
					}
				}

				setState(1349);
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
				setState(1350);
				match(HEX_PREFIX);
				setState(1351);
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
				setState(1352);
				match(OCT_PREFIX);
				setState(1353);
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
				setState(1354);
				match(BIN_PREFIX);
				setState(1355);
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
			setState(1364);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STRING_LITERAL:
				enterOuterAlt(_localctx, 1);
				{
				setState(1360);
				((StringLiteralContext)_localctx).STRING_LITERAL = match(STRING_LITERAL);

						((StringLiteralContext)_localctx).maybe_val =  GetStringValue(this, ((StringLiteralContext)_localctx).STRING_LITERAL);
					
				}
				break;
			case RAW_STRING_LITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(1362);
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
			setState(1369);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NON_KEYWORD_IDENTIFIER:
				enterOuterAlt(_localctx, 1);
				{
				setState(1366);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(1367);
				match(RAW_ESCAPE);
				setState(1368);
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
			setState(1371);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00a2\u0560\4\2\t"+
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
		"\5\u00c5\13\5\3\5\3\5\7\5\u00c9\n\5\f\5\16\5\u00cc\13\5\3\5\3\5\3\5\7"+
		"\5\u00d1\n\5\f\5\16\5\u00d4\13\5\3\5\3\5\7\5\u00d8\n\5\f\5\16\5\u00db"+
		"\13\5\7\5\u00dd\n\5\f\5\16\5\u00e0\13\5\3\5\7\5\u00e3\n\5\f\5\16\5\u00e6"+
		"\13\5\3\5\3\5\3\5\3\6\3\6\7\6\u00ed\n\6\f\6\16\6\u00f0\13\6\3\6\3\6\7"+
		"\6\u00f4\n\6\f\6\16\6\u00f7\13\6\3\6\3\6\7\6\u00fb\n\6\f\6\16\6\u00fe"+
		"\13\6\3\6\3\6\3\6\7\6\u0103\n\6\f\6\16\6\u0106\13\6\3\6\3\6\7\6\u010a"+
		"\n\6\f\6\16\6\u010d\13\6\7\6\u010f\n\6\f\6\16\6\u0112\13\6\3\6\3\6\3\6"+
		"\3\7\3\7\7\7\u0119\n\7\f\7\16\7\u011c\13\7\3\7\3\7\7\7\u0120\n\7\f\7\16"+
		"\7\u0123\13\7\3\7\3\7\7\7\u0127\n\7\f\7\16\7\u012a\13\7\3\7\3\7\7\7\u012e"+
		"\n\7\f\7\16\7\u0131\13\7\3\7\3\7\3\7\3\b\3\b\7\b\u0138\n\b\f\b\16\b\u013b"+
		"\13\b\3\b\3\b\7\b\u013f\n\b\f\b\16\b\u0142\13\b\3\b\3\b\7\b\u0146\n\b"+
		"\f\b\16\b\u0149\13\b\3\b\3\b\7\b\u014d\n\b\f\b\16\b\u0150\13\b\3\b\3\b"+
		"\7\b\u0154\n\b\f\b\16\b\u0157\13\b\3\b\3\b\7\b\u015b\n\b\f\b\16\b\u015e"+
		"\13\b\3\b\3\b\3\b\3\t\3\t\7\t\u0165\n\t\f\t\16\t\u0168\13\t\3\t\3\t\7"+
		"\t\u016c\n\t\f\t\16\t\u016f\13\t\3\t\3\t\3\t\3\t\3\t\5\t\u0176\n\t\3\n"+
		"\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\7\n\u0186\n\n\f\n"+
		"\16\n\u0189\13\n\3\n\3\n\7\n\u018d\n\n\f\n\16\n\u0190\13\n\3\n\3\n\3\n"+
		"\5\n\u0195\n\n\3\13\3\13\7\13\u0199\n\13\f\13\16\13\u019c\13\13\3\13\3"+
		"\13\7\13\u01a0\n\13\f\13\16\13\u01a3\13\13\3\13\3\13\7\13\u01a7\n\13\f"+
		"\13\16\13\u01aa\13\13\3\13\3\13\7\13\u01ae\n\13\f\13\16\13\u01b1\13\13"+
		"\3\13\3\13\3\13\7\13\u01b6\n\13\f\13\16\13\u01b9\13\13\3\13\3\13\7\13"+
		"\u01bd\n\13\f\13\16\13\u01c0\13\13\7\13\u01c2\n\13\f\13\16\13\u01c5\13"+
		"\13\3\13\7\13\u01c8\n\13\f\13\16\13\u01cb\13\13\3\13\3\13\3\13\3\f\3\f"+
		"\7\f\u01d2\n\f\f\f\16\f\u01d5\13\f\3\f\3\f\7\f\u01d9\n\f\f\f\16\f\u01dc"+
		"\13\f\3\f\3\f\7\f\u01e0\n\f\f\f\16\f\u01e3\13\f\3\f\3\f\7\f\u01e7\n\f"+
		"\f\f\16\f\u01ea\13\f\3\f\3\f\3\f\7\f\u01ef\n\f\f\f\16\f\u01f2\13\f\3\f"+
		"\3\f\7\f\u01f6\n\f\f\f\16\f\u01f9\13\f\7\f\u01fb\n\f\f\f\16\f\u01fe\13"+
		"\f\3\f\3\f\3\f\3\r\3\r\7\r\u0205\n\r\f\r\16\r\u0208\13\r\3\r\3\r\7\r\u020c"+
		"\n\r\f\r\16\r\u020f\13\r\3\r\3\r\7\r\u0213\n\r\f\r\16\r\u0216\13\r\3\r"+
		"\3\r\7\r\u021a\n\r\f\r\16\r\u021d\13\r\3\r\3\r\7\r\u0221\n\r\f\r\16\r"+
		"\u0224\13\r\3\r\3\r\3\r\3\16\3\16\7\16\u022b\n\16\f\16\16\16\u022e\13"+
		"\16\3\16\3\16\7\16\u0232\n\16\f\16\16\16\u0235\13\16\3\16\3\16\7\16\u0239"+
		"\n\16\f\16\16\16\u023c\13\16\3\16\3\16\7\16\u0240\n\16\f\16\16\16\u0243"+
		"\13\16\3\16\3\16\7\16\u0247\n\16\f\16\16\16\u024a\13\16\3\16\3\16\7\16"+
		"\u024e\n\16\f\16\16\16\u0251\13\16\3\16\3\16\7\16\u0255\n\16\f\16\16\16"+
		"\u0258\13\16\3\16\3\16\3\16\3\17\3\17\3\17\3\17\3\17\7\17\u0262\n\17\f"+
		"\17\16\17\u0265\13\17\3\17\3\17\3\17\3\17\5\17\u026b\n\17\3\20\3\20\3"+
		"\20\3\21\3\21\3\21\3\21\3\21\3\21\5\21\u0276\n\21\3\22\3\22\3\22\3\23"+
		"\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23"+
		"\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\5\23\u0295\n\23"+
		"\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24"+
		"\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24"+
		"\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\5\24\u02be\n\24"+
		"\3\25\3\25\7\25\u02c2\n\25\f\25\16\25\u02c5\13\25\3\25\5\25\u02c8\n\25"+
		"\3\25\7\25\u02cb\n\25\f\25\16\25\u02ce\13\25\3\25\3\25\7\25\u02d2\n\25"+
		"\f\25\16\25\u02d5\13\25\3\25\3\25\3\26\3\26\7\26\u02db\n\26\f\26\16\26"+
		"\u02de\13\26\3\26\5\26\u02e1\n\26\3\26\7\26\u02e4\n\26\f\26\16\26\u02e7"+
		"\13\26\3\26\3\26\7\26\u02eb\n\26\f\26\16\26\u02ee\13\26\3\26\3\26\3\27"+
		"\3\27\7\27\u02f4\n\27\f\27\16\27\u02f7\13\27\3\27\5\27\u02fa\n\27\3\27"+
		"\7\27\u02fd\n\27\f\27\16\27\u0300\13\27\3\27\3\27\7\27\u0304\n\27\f\27"+
		"\16\27\u0307\13\27\3\27\3\27\3\30\3\30\7\30\u030d\n\30\f\30\16\30\u0310"+
		"\13\30\3\30\3\30\7\30\u0314\n\30\f\30\16\30\u0317\13\30\3\30\3\30\7\30"+
		"\u031b\n\30\f\30\16\30\u031e\13\30\3\30\3\30\5\30\u0322\n\30\3\30\3\30"+
		"\7\30\u0326\n\30\f\30\16\30\u0329\13\30\3\30\3\30\5\30\u032d\n\30\5\30"+
		"\u032f\n\30\3\31\3\31\7\31\u0333\n\31\f\31\16\31\u0336\13\31\3\31\3\31"+
		"\7\31\u033a\n\31\f\31\16\31\u033d\13\31\3\31\3\31\7\31\u0341\n\31\f\31"+
		"\16\31\u0344\13\31\3\31\3\31\5\31\u0348\n\31\3\31\3\31\7\31\u034c\n\31"+
		"\f\31\16\31\u034f\13\31\3\31\3\31\3\31\5\31\u0354\n\31\3\32\3\32\7\32"+
		"\u0358\n\32\f\32\16\32\u035b\13\32\3\32\3\32\7\32\u035f\n\32\f\32\16\32"+
		"\u0362\13\32\3\32\3\32\7\32\u0366\n\32\f\32\16\32\u0369\13\32\3\32\3\32"+
		"\5\32\u036d\n\32\3\32\3\32\7\32\u0371\n\32\f\32\16\32\u0374\13\32\3\32"+
		"\3\32\3\32\5\32\u0379\n\32\3\33\3\33\7\33\u037d\n\33\f\33\16\33\u0380"+
		"\13\33\3\33\3\33\7\33\u0384\n\33\f\33\16\33\u0387\13\33\3\33\3\33\7\33"+
		"\u038b\n\33\f\33\16\33\u038e\13\33\3\33\3\33\5\33\u0392\n\33\3\33\3\33"+
		"\7\33\u0396\n\33\f\33\16\33\u0399\13\33\3\33\3\33\3\33\5\33\u039e\n\33"+
		"\3\34\3\34\7\34\u03a2\n\34\f\34\16\34\u03a5\13\34\3\34\3\34\7\34\u03a9"+
		"\n\34\f\34\16\34\u03ac\13\34\3\34\3\34\7\34\u03b0\n\34\f\34\16\34\u03b3"+
		"\13\34\3\34\3\34\5\34\u03b7\n\34\3\34\3\34\7\34\u03bb\n\34\f\34\16\34"+
		"\u03be\13\34\3\34\3\34\3\34\5\34\u03c3\n\34\3\35\3\35\7\35\u03c7\n\35"+
		"\f\35\16\35\u03ca\13\35\3\35\3\35\7\35\u03ce\n\35\f\35\16\35\u03d1\13"+
		"\35\3\35\3\35\7\35\u03d5\n\35\f\35\16\35\u03d8\13\35\3\35\3\35\5\35\u03dc"+
		"\n\35\3\35\3\35\7\35\u03e0\n\35\f\35\16\35\u03e3\13\35\3\35\3\35\3\35"+
		"\5\35\u03e8\n\35\3\36\3\36\7\36\u03ec\n\36\f\36\16\36\u03ef\13\36\3\36"+
		"\3\36\7\36\u03f3\n\36\f\36\16\36\u03f6\13\36\3\36\3\36\7\36\u03fa\n\36"+
		"\f\36\16\36\u03fd\13\36\3\36\3\36\5\36\u0401\n\36\3\36\3\36\7\36\u0405"+
		"\n\36\f\36\16\36\u0408\13\36\3\36\3\36\3\36\5\36\u040d\n\36\3\37\3\37"+
		"\7\37\u0411\n\37\f\37\16\37\u0414\13\37\3\37\3\37\7\37\u0418\n\37\f\37"+
		"\16\37\u041b\13\37\3\37\3\37\7\37\u041f\n\37\f\37\16\37\u0422\13\37\3"+
		"\37\3\37\5\37\u0426\n\37\3\37\3\37\7\37\u042a\n\37\f\37\16\37\u042d\13"+
		"\37\3\37\3\37\3\37\5\37\u0432\n\37\3 \3 \7 \u0436\n \f \16 \u0439\13 "+
		"\3 \3 \7 \u043d\n \f \16 \u0440\13 \3 \3 \7 \u0444\n \f \16 \u0447\13"+
		" \3 \3 \5 \u044b\n \3 \3 \7 \u044f\n \f \16 \u0452\13 \3 \3 \5 \u0456"+
		"\n \5 \u0458\n \3!\3!\7!\u045c\n!\f!\16!\u045f\13!\3!\3!\7!\u0463\n!\f"+
		"!\16!\u0466\13!\3!\3!\7!\u046a\n!\f!\16!\u046d\13!\3!\3!\5!\u0471\n!\3"+
		"!\3!\7!\u0475\n!\f!\16!\u0478\13!\3!\3!\3!\5!\u047d\n!\3\"\3\"\7\"\u0481"+
		"\n\"\f\"\16\"\u0484\13\"\3\"\3\"\7\"\u0488\n\"\f\"\16\"\u048b\13\"\3\""+
		"\3\"\7\"\u048f\n\"\f\"\16\"\u0492\13\"\3\"\3\"\3\"\3#\3#\6#\u0499\n#\r"+
		"#\16#\u049a\3#\3#\7#\u049f\n#\f#\16#\u04a2\13#\3#\3#\3#\3$\3$\3$\3$\3"+
		"%\5%\u04ac\n%\3%\5%\u04af\n%\3%\3%\3%\3%\3%\7%\u04b6\n%\f%\16%\u04b9\13"+
		"%\3%\5%\u04bc\n%\5%\u04be\n%\3%\5%\u04c1\n%\3%\3%\3%\5%\u04c6\n%\5%\u04c8"+
		"\n%\3&\5&\u04cb\n&\3&\3&\3&\3&\3&\3&\7&\u04d3\n&\f&\16&\u04d6\13&\3\'"+
		"\3\'\3(\3(\3(\3)\3)\3)\3*\3*\3*\3+\5+\u04e4\n+\3+\3+\3+\3+\3+\3+\3+\5"+
		"+\u04ed\n+\3+\3+\3,\5,\u04f2\n,\3,\3,\3,\3,\3,\3,\3,\5,\u04fb\n,\3,\3"+
		",\3-\5-\u0500\n-\3-\3-\3-\3-\3-\3-\3-\5-\u0509\n-\3-\3-\3.\5.\u050e\n"+
		".\3.\3.\3.\3.\3.\3.\3.\5.\u0517\n.\3.\3.\3/\5/\u051c\n/\3/\3/\3/\3/\3"+
		"/\3/\3/\5/\u0525\n/\3/\3/\3\60\5\60\u052a\n\60\3\60\3\60\3\60\3\60\3\60"+
		"\3\60\3\60\5\60\u0533\n\60\3\60\3\60\3\61\5\61\u0538\n\61\3\61\3\61\3"+
		"\61\3\61\3\61\3\61\3\61\5\61\u0541\n\61\3\61\3\61\3\62\5\62\u0546\n\62"+
		"\3\62\3\62\3\62\3\62\3\62\3\62\3\62\5\62\u054f\n\62\3\62\3\62\3\63\3\63"+
		"\3\63\3\63\5\63\u0557\n\63\3\64\3\64\3\64\5\64\u055c\n\64\3\65\3\65\3"+
		"\65\2\2\66\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\66"+
		"8:<>@BDFHJLNPRTVXZ\\^`bdfh\2\b\4\2\6\6\f\f\3\2cd\3\2ef\3\2gh\3\2ij\4\2"+
		"\4\b\nH\2\u0608\2j\3\2\2\2\4\u0099\3\2\2\2\6\u00ae\3\2\2\2\b\u00b8\3\2"+
		"\2\2\n\u00ea\3\2\2\2\f\u0116\3\2\2\2\16\u0135\3\2\2\2\20\u0175\3\2\2\2"+
		"\22\u0194\3\2\2\2\24\u0196\3\2\2\2\26\u01cf\3\2\2\2\30\u0202\3\2\2\2\32"+
		"\u0228\3\2\2\2\34\u026a\3\2\2\2\36\u026c\3\2\2\2 \u0275\3\2\2\2\"\u0277"+
		"\3\2\2\2$\u0294\3\2\2\2&\u02bd\3\2\2\2(\u02c7\3\2\2\2*\u02e0\3\2\2\2,"+
		"\u02f9\3\2\2\2.\u032e\3\2\2\2\60\u0353\3\2\2\2\62\u0378\3\2\2\2\64\u039d"+
		"\3\2\2\2\66\u03c2\3\2\2\28\u03e7\3\2\2\2:\u040c\3\2\2\2<\u0431\3\2\2\2"+
		">\u0457\3\2\2\2@\u047c\3\2\2\2B\u047e\3\2\2\2D\u0496\3\2\2\2F\u04a6\3"+
		"\2\2\2H\u04c7\3\2\2\2J\u04ca\3\2\2\2L\u04d7\3\2\2\2N\u04d9\3\2\2\2P\u04dc"+
		"\3\2\2\2R\u04df\3\2\2\2T\u04ec\3\2\2\2V\u04fa\3\2\2\2X\u0508\3\2\2\2Z"+
		"\u0516\3\2\2\2\\\u0524\3\2\2\2^\u0532\3\2\2\2`\u0540\3\2\2\2b\u054e\3"+
		"\2\2\2d\u0556\3\2\2\2f\u055b\3\2\2\2h\u055d\3\2\2\2jk\5B\"\2ko\b\2\1\2"+
		"ln\7_\2\2ml\3\2\2\2nq\3\2\2\2om\3\2\2\2op\3\2\2\2pu\3\2\2\2qo\3\2\2\2"+
		"rs\5D#\2st\b\2\1\2tv\3\2\2\2ur\3\2\2\2uv\3\2\2\2v\u0080\3\2\2\2wy\7_\2"+
		"\2xw\3\2\2\2y|\3\2\2\2zx\3\2\2\2z{\3\2\2\2{}\3\2\2\2|z\3\2\2\2}\177\5"+
		"F$\2~z\3\2\2\2\177\u0082\3\2\2\2\u0080~\3\2\2\2\u0080\u0081\3\2\2\2\u0081"+
		"\u008e\3\2\2\2\u0082\u0080\3\2\2\2\u0083\u0085\7_\2\2\u0084\u0083\3\2"+
		"\2\2\u0085\u0088\3\2\2\2\u0086\u0084\3\2\2\2\u0086\u0087\3\2\2\2\u0087"+
		"\u0089\3\2\2\2\u0088\u0086\3\2\2\2\u0089\u008a\5\6\4\2\u008a\u008b\b\2"+
		"\1\2\u008b\u008d\3\2\2\2\u008c\u0086\3\2\2\2\u008d\u0090\3\2\2\2\u008e"+
		"\u008c\3\2\2\2\u008e\u008f\3\2\2\2\u008f\u0094\3\2\2\2\u0090\u008e\3\2"+
		"\2\2\u0091\u0093\7_\2\2\u0092\u0091\3\2\2\2\u0093\u0096\3\2\2\2\u0094"+
		"\u0092\3\2\2\2\u0094\u0095\3\2\2\2\u0095\u0097\3\2\2\2\u0096\u0094\3\2"+
		"\2\2\u0097\u0098\7\2\2\3\u0098\3\3\2\2\2\u0099\u009d\5\20\t\2\u009a\u009c"+
		"\7_\2\2\u009b\u009a\3\2\2\2\u009c\u009f\3\2\2\2\u009d\u009b\3\2\2\2\u009d"+
		"\u009e\3\2\2\2\u009e\u00a0\3\2\2\2\u009f\u009d\3\2\2\2\u00a0\u00a1\7\u0095"+
		"\2\2\u00a1\5\3\2\2\2\u00a2\u00a3\5\b\5\2\u00a3\u00a4\b\4\1\2\u00a4\u00af"+
		"\3\2\2\2\u00a5\u00a6\5\n\6\2\u00a6\u00a7\b\4\1\2\u00a7\u00af\3\2\2\2\u00a8"+
		"\u00a9\5\f\7\2\u00a9\u00aa\b\4\1\2\u00aa\u00af\3\2\2\2\u00ab\u00ac\5\16"+
		"\b\2\u00ac\u00ad\b\4\1\2\u00ad\u00af\3\2\2\2\u00ae\u00a2\3\2\2\2\u00ae"+
		"\u00a5\3\2\2\2\u00ae\u00a8\3\2\2\2\u00ae\u00ab\3\2\2\2\u00af\u00b3\3\2"+
		"\2\2\u00b0\u00b2\7_\2\2\u00b1\u00b0\3\2\2\2\u00b2\u00b5\3\2\2\2\u00b3"+
		"\u00b1\3\2\2\2\u00b3\u00b4\3\2\2\2\u00b4\u00b6\3\2\2\2\u00b5\u00b3\3\2"+
		"\2\2\u00b6\u00b7\7\u0095\2\2\u00b7\7\3\2\2\2\u00b8\u00bc\7\13\2\2\u00b9"+
		"\u00bb\7_\2\2\u00ba\u00b9\3\2\2\2\u00bb\u00be\3\2\2\2\u00bc\u00ba\3\2"+
		"\2\2\u00bc\u00bd\3\2\2\2\u00bd\u00bf\3\2\2\2\u00be\u00bc\3\2\2\2\u00bf"+
		"\u00c3\5f\64\2\u00c0\u00c2\7_\2\2\u00c1\u00c0\3\2\2\2\u00c2\u00c5\3\2"+
		"\2\2\u00c3\u00c1\3\2\2\2\u00c3\u00c4\3\2\2\2\u00c4\u00c6\3\2\2\2\u00c5"+
		"\u00c3\3\2\2\2\u00c6\u00ca\7\u009d\2\2\u00c7\u00c9\7_\2\2\u00c8\u00c7"+
		"\3\2\2\2\u00c9\u00cc\3\2\2\2\u00ca\u00c8\3\2\2\2\u00ca\u00cb\3\2\2\2\u00cb"+
		"\u00de\3\2\2\2\u00cc\u00ca\3\2\2\2\u00cd\u00ce\5\20\t\2\u00ce\u00d2\b"+
		"\5\1\2\u00cf\u00d1\7_\2\2\u00d0\u00cf\3\2\2\2\u00d1\u00d4\3\2\2\2\u00d2"+
		"\u00d0\3\2\2\2\u00d2\u00d3\3\2\2\2\u00d3\u00d5\3\2\2\2\u00d4\u00d2\3\2"+
		"\2\2\u00d5\u00d9\7\u0095\2\2\u00d6\u00d8\7_\2\2\u00d7\u00d6\3\2\2\2\u00d8"+
		"\u00db\3\2\2\2\u00d9\u00d7\3\2\2\2\u00d9\u00da\3\2\2\2\u00da\u00dd\3\2"+
		"\2\2\u00db\u00d9\3\2\2\2\u00dc\u00cd\3\2\2\2\u00dd\u00e0\3\2\2\2\u00de"+
		"\u00dc\3\2\2\2\u00de\u00df\3\2\2\2\u00df\u00e4\3\2\2\2\u00e0\u00de\3\2"+
		"\2\2\u00e1\u00e3\7_\2\2\u00e2\u00e1\3\2\2\2\u00e3\u00e6\3\2\2\2\u00e4"+
		"\u00e2\3\2\2\2\u00e4\u00e5\3\2\2\2\u00e5\u00e7\3\2\2\2\u00e6\u00e4\3\2"+
		"\2\2\u00e7\u00e8\7\u009e\2\2\u00e8\u00e9\b\5\1\2\u00e9\t\3\2\2\2\u00ea"+
		"\u00ee\7\20\2\2\u00eb\u00ed\7_\2\2\u00ec\u00eb\3\2\2\2\u00ed\u00f0\3\2"+
		"\2\2\u00ee\u00ec\3\2\2\2\u00ee\u00ef\3\2\2\2\u00ef\u00f1\3\2\2\2\u00f0"+
		"\u00ee\3\2\2\2\u00f1\u00f5\5f\64\2\u00f2\u00f4\7_\2\2\u00f3\u00f2\3\2"+
		"\2\2\u00f4\u00f7\3\2\2\2\u00f5\u00f3\3\2\2\2\u00f5\u00f6\3\2\2\2\u00f6"+
		"\u00f8\3\2\2\2\u00f7\u00f5\3\2\2\2\u00f8\u0110\7\u009d\2\2\u00f9\u00fb"+
		"\7_\2\2\u00fa\u00f9\3\2\2\2\u00fb\u00fe\3\2\2\2\u00fc\u00fa\3\2\2\2\u00fc"+
		"\u00fd\3\2\2\2\u00fd\u00ff\3\2\2\2\u00fe\u00fc\3\2\2\2\u00ff\u0100\5\22"+
		"\n\2\u0100\u0104\b\6\1\2\u0101\u0103\7_\2\2\u0102\u0101\3\2\2\2\u0103"+
		"\u0106\3\2\2\2\u0104\u0102\3\2\2\2\u0104\u0105\3\2\2\2\u0105\u0107\3\2"+
		"\2\2\u0106\u0104\3\2\2\2\u0107\u010b\7\u0095\2\2\u0108\u010a\7_\2\2\u0109"+
		"\u0108\3\2\2\2\u010a\u010d\3\2\2\2\u010b\u0109\3\2\2\2\u010b\u010c\3\2"+
		"\2\2\u010c\u010f\3\2\2\2\u010d\u010b\3\2\2\2\u010e\u00fc\3\2\2\2\u010f"+
		"\u0112\3\2\2\2\u0110\u010e\3\2\2\2\u0110\u0111\3\2\2\2\u0111\u0113\3\2"+
		"\2\2\u0112\u0110\3\2\2\2\u0113\u0114\7\u009e\2\2\u0114\u0115\b\6\1\2\u0115"+
		"\13\3\2\2\2\u0116\u011a\7\21\2\2\u0117\u0119\7_\2\2\u0118\u0117\3\2\2"+
		"\2\u0119\u011c\3\2\2\2\u011a\u0118\3\2\2\2\u011a\u011b\3\2\2\2\u011b\u011d"+
		"\3\2\2\2\u011c\u011a\3\2\2\2\u011d\u0121\5f\64\2\u011e\u0120\7_\2\2\u011f"+
		"\u011e\3\2\2\2\u0120\u0123\3\2\2\2\u0121\u011f\3\2\2\2\u0121\u0122\3\2"+
		"\2\2\u0122\u0124\3\2\2\2\u0123\u0121\3\2\2\2\u0124\u0128\7\u008c\2\2\u0125"+
		"\u0127\7_\2\2\u0126\u0125\3\2\2\2\u0127\u012a\3\2\2\2\u0128\u0126\3\2"+
		"\2\2\u0128\u0129\3\2\2\2\u0129\u012b\3\2\2\2\u012a\u0128\3\2\2\2\u012b"+
		"\u012f\5 \21\2\u012c\u012e\7_\2\2\u012d\u012c\3\2\2\2\u012e\u0131\3\2"+
		"\2\2\u012f\u012d\3\2\2\2\u012f\u0130\3\2\2\2\u0130\u0132\3\2\2\2\u0131"+
		"\u012f\3\2\2\2\u0132\u0133\7\u008b\2\2\u0133\u0134\b\7\1\2\u0134\r\3\2"+
		"\2\2\u0135\u0139\7\22\2\2\u0136\u0138\7_\2\2\u0137\u0136\3\2\2\2\u0138"+
		"\u013b\3\2\2\2\u0139\u0137\3\2\2\2\u0139\u013a\3\2\2\2\u013a\u013c\3\2"+
		"\2\2\u013b\u0139\3\2\2\2\u013c\u0140\5f\64\2\u013d\u013f\7_\2\2\u013e"+
		"\u013d\3\2\2\2\u013f\u0142\3\2\2\2\u0140\u013e\3\2\2\2\u0140\u0141\3\2"+
		"\2\2\u0141\u0143\3\2\2\2\u0142\u0140\3\2\2\2\u0143\u0147\7\u008c\2\2\u0144"+
		"\u0146\7_\2\2\u0145\u0144\3\2\2\2\u0146\u0149\3\2\2\2\u0147\u0145\3\2"+
		"\2\2\u0147\u0148\3\2\2\2\u0148\u014a\3\2\2\2\u0149\u0147\3\2\2\2\u014a"+
		"\u014e\5$\23\2\u014b\u014d\7_\2\2\u014c\u014b\3\2\2\2\u014d\u0150\3\2"+
		"\2\2\u014e\u014c\3\2\2\2\u014e\u014f\3\2\2\2\u014f\u0151\3\2\2\2\u0150"+
		"\u014e\3\2\2\2\u0151\u0155\7\u0094\2\2\u0152\u0154\7_\2\2\u0153\u0152"+
		"\3\2\2\2\u0154\u0157\3\2\2\2\u0155\u0153\3\2\2\2\u0155\u0156\3\2\2\2\u0156"+
		"\u0158\3\2\2\2\u0157\u0155\3\2\2\2\u0158\u015c\5 \21\2\u0159\u015b\7_"+
		"\2\2\u015a\u0159\3\2\2\2\u015b\u015e\3\2\2\2\u015c\u015a\3\2\2\2\u015c"+
		"\u015d\3\2\2\2\u015d\u015f\3\2\2\2\u015e\u015c\3\2\2\2\u015f\u0160\7\u008b"+
		"\2\2\u0160\u0161\b\b\1\2\u0161\17\3\2\2\2\u0162\u0166\5f\64\2\u0163\u0165"+
		"\7_\2\2\u0164\u0163\3\2\2\2\u0165\u0168\3\2\2\2\u0166\u0164\3\2\2\2\u0166"+
		"\u0167\3\2\2\2\u0167\u0169\3\2\2\2\u0168\u0166\3\2\2\2\u0169\u016d\5\34"+
		"\17\2\u016a\u016c\7_\2\2\u016b\u016a\3\2\2\2\u016c\u016f\3\2\2\2\u016d"+
		"\u016b\3\2\2\2\u016d\u016e\3\2\2\2\u016e\u0170\3\2\2\2\u016f\u016d\3\2"+
		"\2\2\u0170\u0171\b\t\1\2\u0171\u0176\3\2\2\2\u0172\u0173\5\22\n\2\u0173"+
		"\u0174\b\t\1\2\u0174\u0176\3\2\2\2\u0175\u0162\3\2\2\2\u0175\u0172\3\2"+
		"\2\2\u0176\21\3\2\2\2\u0177\u0178\5\24\13\2\u0178\u0179\b\n\1\2\u0179"+
		"\u0195\3\2\2\2\u017a\u017b\5\26\f\2\u017b\u017c\b\n\1\2\u017c\u0195\3"+
		"\2\2\2\u017d\u017e\5\30\r\2\u017e\u017f\b\n\1\2\u017f\u0195\3\2\2\2\u0180"+
		"\u0181\5\32\16\2\u0181\u0182\b\n\1\2\u0182\u0195\3\2\2\2\u0183\u0187\5"+
		"f\64\2\u0184\u0186\7_\2\2\u0185\u0184\3\2\2\2\u0186\u0189\3\2\2\2\u0187"+
		"\u0185\3\2\2\2\u0187\u0188\3\2\2\2\u0188\u018a\3\2\2\2\u0189\u0187\3\2"+
		"\2\2\u018a\u018e\7\u0096\2\2\u018b\u018d\7_\2\2\u018c\u018b\3\2\2\2\u018d"+
		"\u0190\3\2\2\2\u018e\u018c\3\2\2\2\u018e\u018f\3\2\2\2\u018f\u0191\3\2"+
		"\2\2\u0190\u018e\3\2\2\2\u0191\u0192\5 \21\2\u0192\u0193\b\n\1\2\u0193"+
		"\u0195\3\2\2\2\u0194\u0177\3\2\2\2\u0194\u017a\3\2\2\2\u0194\u017d\3\2"+
		"\2\2\u0194\u0180\3\2\2\2\u0194\u0183\3\2\2\2\u0195\23\3\2\2\2\u0196\u019a"+
		"\5f\64\2\u0197\u0199\7_\2\2\u0198\u0197\3\2\2\2\u0199\u019c\3\2\2\2\u019a"+
		"\u0198\3\2\2\2\u019a\u019b\3\2\2\2\u019b\u019d\3\2\2\2\u019c\u019a\3\2"+
		"\2\2\u019d\u01a1\7\u0096\2\2\u019e\u01a0\7_\2\2\u019f\u019e\3\2\2\2\u01a0"+
		"\u01a3\3\2\2\2\u01a1\u019f\3\2\2\2\u01a1\u01a2\3\2\2\2\u01a2\u01a4\3\2"+
		"\2\2\u01a3\u01a1\3\2\2\2\u01a4\u01a8\7\13\2\2\u01a5\u01a7\7_\2\2\u01a6"+
		"\u01a5\3\2\2\2\u01a7\u01aa\3\2\2\2\u01a8\u01a6\3\2\2\2\u01a8\u01a9\3\2"+
		"\2\2\u01a9\u01ab\3\2\2\2\u01aa\u01a8\3\2\2\2\u01ab\u01af\7\u009d\2\2\u01ac"+
		"\u01ae\7_\2\2\u01ad\u01ac\3\2\2\2\u01ae\u01b1\3\2\2\2\u01af\u01ad\3\2"+
		"\2\2\u01af\u01b0\3\2\2\2\u01b0\u01c3\3\2\2\2\u01b1\u01af\3\2\2\2\u01b2"+
		"\u01b3\5\20\t\2\u01b3\u01b7\b\13\1\2\u01b4\u01b6\7_\2\2\u01b5\u01b4\3"+
		"\2\2\2\u01b6\u01b9\3\2\2\2\u01b7\u01b5\3\2\2\2\u01b7\u01b8\3\2\2\2\u01b8"+
		"\u01ba\3\2\2\2\u01b9\u01b7\3\2\2\2\u01ba\u01be\7\u0095\2\2\u01bb\u01bd"+
		"\7_\2\2\u01bc\u01bb\3\2\2\2\u01bd\u01c0\3\2\2\2\u01be\u01bc\3\2\2\2\u01be"+
		"\u01bf\3\2\2\2\u01bf\u01c2\3\2\2\2\u01c0\u01be\3\2\2\2\u01c1\u01b2\3\2"+
		"\2\2\u01c2\u01c5\3\2\2\2\u01c3\u01c1\3\2\2\2\u01c3\u01c4\3\2\2\2\u01c4"+
		"\u01c9\3\2\2\2\u01c5\u01c3\3\2\2\2\u01c6\u01c8\7_\2\2\u01c7\u01c6\3\2"+
		"\2\2\u01c8\u01cb\3\2\2\2\u01c9\u01c7\3\2\2\2\u01c9\u01ca\3\2\2\2\u01ca"+
		"\u01cc\3\2\2\2\u01cb\u01c9\3\2\2\2\u01cc\u01cd\7\u009e\2\2\u01cd\u01ce"+
		"\b\13\1\2\u01ce\25\3\2\2\2\u01cf\u01d3\5f\64\2\u01d0\u01d2\7_\2\2\u01d1"+
		"\u01d0\3\2\2\2\u01d2\u01d5\3\2\2\2\u01d3\u01d1\3\2\2\2\u01d3\u01d4\3\2"+
		"\2\2\u01d4\u01d6\3\2\2\2\u01d5\u01d3\3\2\2\2\u01d6\u01da\7\u0096\2\2\u01d7"+
		"\u01d9\7_\2\2\u01d8\u01d7\3\2\2\2\u01d9\u01dc\3\2\2\2\u01da\u01d8\3\2"+
		"\2\2\u01da\u01db\3\2\2\2\u01db\u01dd\3\2\2\2\u01dc\u01da\3\2\2\2\u01dd"+
		"\u01e1\7\20\2\2\u01de\u01e0\7_\2\2\u01df\u01de\3\2\2\2\u01e0\u01e3\3\2"+
		"\2\2\u01e1\u01df\3\2\2\2\u01e1\u01e2\3\2\2\2\u01e2\u01e4\3\2\2\2\u01e3"+
		"\u01e1\3\2\2\2\u01e4\u01fc\7\u009d\2\2\u01e5\u01e7\7_\2\2\u01e6\u01e5"+
		"\3\2\2\2\u01e7\u01ea\3\2\2\2\u01e8\u01e6\3\2\2\2\u01e8\u01e9\3\2\2\2\u01e9"+
		"\u01eb\3\2\2\2\u01ea\u01e8\3\2\2\2\u01eb\u01ec\5\22\n\2\u01ec\u01f0\b"+
		"\f\1\2\u01ed\u01ef\7_\2\2\u01ee\u01ed\3\2\2\2\u01ef\u01f2\3\2\2\2\u01f0"+
		"\u01ee\3\2\2\2\u01f0\u01f1\3\2\2\2\u01f1\u01f3\3\2\2\2\u01f2\u01f0\3\2"+
		"\2\2\u01f3\u01f7\7\u0095\2\2\u01f4\u01f6\7_\2\2\u01f5\u01f4\3\2\2\2\u01f6"+
		"\u01f9\3\2\2\2\u01f7\u01f5\3\2\2\2\u01f7\u01f8\3\2\2\2\u01f8\u01fb\3\2"+
		"\2\2\u01f9\u01f7\3\2\2\2\u01fa\u01e8\3\2\2\2\u01fb\u01fe\3\2\2\2\u01fc"+
		"\u01fa\3\2\2\2\u01fc\u01fd\3\2\2\2\u01fd\u01ff\3\2\2\2\u01fe\u01fc\3\2"+
		"\2\2\u01ff\u0200\7\u009e\2\2\u0200\u0201\b\f\1\2\u0201\27\3\2\2\2\u0202"+
		"\u0206\5f\64\2\u0203\u0205\7_\2\2\u0204\u0203\3\2\2\2\u0205\u0208\3\2"+
		"\2\2\u0206\u0204\3\2\2\2\u0206\u0207\3\2\2\2\u0207\u0209\3\2\2\2\u0208"+
		"\u0206\3\2\2\2\u0209\u020d\7\u0096\2\2\u020a\u020c\7_\2\2\u020b\u020a"+
		"\3\2\2\2\u020c\u020f\3\2\2\2\u020d\u020b\3\2\2\2\u020d\u020e\3\2\2\2\u020e"+
		"\u0210\3\2\2\2\u020f\u020d\3\2\2\2\u0210\u0214\7\21\2\2\u0211\u0213\7"+
		"_\2\2\u0212\u0211\3\2\2\2\u0213\u0216\3\2\2\2\u0214\u0212\3\2\2\2\u0214"+
		"\u0215\3\2\2\2\u0215\u0217\3\2\2\2\u0216\u0214\3\2\2\2\u0217\u021b\7\u008c"+
		"\2\2\u0218\u021a\7_\2\2\u0219\u0218\3\2\2\2\u021a\u021d\3\2\2\2\u021b"+
		"\u0219\3\2\2\2\u021b\u021c\3\2\2\2\u021c\u021e\3\2\2\2\u021d\u021b\3\2"+
		"\2\2\u021e\u0222\5 \21\2\u021f\u0221\7_\2\2\u0220\u021f\3\2\2\2\u0221"+
		"\u0224\3\2\2\2\u0222\u0220\3\2\2\2\u0222\u0223\3\2\2\2\u0223\u0225\3\2"+
		"\2\2\u0224\u0222\3\2\2\2\u0225\u0226\7\u008b\2\2\u0226\u0227\b\r\1\2\u0227"+
		"\31\3\2\2\2\u0228\u022c\5f\64\2\u0229\u022b\7_\2\2\u022a\u0229\3\2\2\2"+
		"\u022b\u022e\3\2\2\2\u022c\u022a\3\2\2\2\u022c\u022d\3\2\2\2\u022d\u022f"+
		"\3\2\2\2\u022e\u022c\3\2\2\2\u022f\u0233\7\u0096\2\2\u0230\u0232\7_\2"+
		"\2\u0231\u0230\3\2\2\2\u0232\u0235\3\2\2\2\u0233\u0231\3\2\2\2\u0233\u0234"+
		"\3\2\2\2\u0234\u0236\3\2\2\2\u0235\u0233\3\2\2\2\u0236\u023a\7\22\2\2"+
		"\u0237\u0239\7_\2\2\u0238\u0237\3\2\2\2\u0239\u023c\3\2\2\2\u023a\u0238"+
		"\3\2\2\2\u023a\u023b\3\2\2\2\u023b\u023d\3\2\2\2\u023c\u023a\3\2\2\2\u023d"+
		"\u0241\7\u008c\2\2\u023e\u0240\7_\2\2\u023f\u023e\3\2\2\2\u0240\u0243"+
		"\3\2\2\2\u0241\u023f\3\2\2\2\u0241\u0242\3\2\2\2\u0242\u0244\3\2\2\2\u0243"+
		"\u0241\3\2\2\2\u0244\u0248\5$\23\2\u0245\u0247\7_\2\2\u0246\u0245\3\2"+
		"\2\2\u0247\u024a\3\2\2\2\u0248\u0246\3\2\2\2\u0248\u0249\3\2\2\2\u0249"+
		"\u024b\3\2\2\2\u024a\u0248\3\2\2\2\u024b\u024f\7\u0094\2\2\u024c\u024e"+
		"\7_\2\2\u024d\u024c\3\2\2\2\u024e\u0251\3\2\2\2\u024f\u024d\3\2\2\2\u024f"+
		"\u0250\3\2\2\2\u0250\u0252\3\2\2\2\u0251\u024f\3\2\2\2\u0252\u0256\5 "+
		"\21\2\u0253\u0255\7_\2\2\u0254\u0253\3\2\2\2\u0255\u0258\3\2\2\2\u0256"+
		"\u0254\3\2\2\2\u0256\u0257\3\2\2\2\u0257\u0259\3\2\2\2\u0258\u0256\3\2"+
		"\2\2\u0259\u025a\7\u008b\2\2\u025a\u025b\b\16\1\2\u025b\33\3\2\2\2\u025c"+
		"\u025d\5\36\20\2\u025d\u025e\b\17\1\2\u025e\u026b\3\2\2\2\u025f\u0263"+
		"\7\u0096\2\2\u0260\u0262\7_\2\2\u0261\u0260\3\2\2\2\u0262\u0265\3\2\2"+
		"\2\u0263\u0261\3\2\2\2\u0263\u0264\3\2\2\2\u0264\u0266\3\2\2\2\u0265\u0263"+
		"\3\2\2\2\u0266\u0267\5 \21\2\u0267\u0268\3\2\2\2\u0268\u0269\b\17\1\2"+
		"\u0269\u026b\3\2\2\2\u026a\u025c\3\2\2\2\u026a\u025f\3\2\2\2\u026b\35"+
		"\3\2\2\2\u026c\u026d\5&\24\2\u026d\u026e\b\20\1\2\u026e\37\3\2\2\2\u026f"+
		"\u0270\5$\23\2\u0270\u0271\b\21\1\2\u0271\u0276\3\2\2\2\u0272\u0273\5"+
		"\"\22\2\u0273\u0274\b\21\1\2\u0274\u0276\3\2\2\2\u0275\u026f\3\2\2\2\u0275"+
		"\u0272\3\2\2\2\u0276!\3\2\2\2\u0277\u0278\5f\64\2\u0278\u0279\b\22\1\2"+
		"\u0279#\3\2\2\2\u027a\u027b\7I\2\2\u027b\u0295\b\23\1\2\u027c\u027d\7"+
		"J\2\2\u027d\u0295\b\23\1\2\u027e\u027f\7K\2\2\u027f\u0295\b\23\1\2\u0280"+
		"\u0281\7L\2\2\u0281\u0295\b\23\1\2\u0282\u0283\7M\2\2\u0283\u0295\b\23"+
		"\1\2\u0284\u0285\7N\2\2\u0285\u0295\b\23\1\2\u0286\u0287\7O\2\2\u0287"+
		"\u0295\b\23\1\2\u0288\u0289\7P\2\2\u0289\u0295\b\23\1\2\u028a\u028b\7"+
		"Q\2\2\u028b\u0295\b\23\1\2\u028c\u028d\7R\2\2\u028d\u0295\b\23\1\2\u028e"+
		"\u028f\7S\2\2\u028f\u0295\b\23\1\2\u0290\u0291\7T\2\2\u0291\u0295\b\23"+
		"\1\2\u0292\u0293\7U\2\2\u0293\u0295\b\23\1\2\u0294\u027a\3\2\2\2\u0294"+
		"\u027c\3\2\2\2\u0294\u027e\3\2\2\2\u0294\u0280\3\2\2\2\u0294\u0282\3\2"+
		"\2\2\u0294\u0284\3\2\2\2\u0294\u0286\3\2\2\2\u0294\u0288\3\2\2\2\u0294"+
		"\u028a\3\2\2\2\u0294\u028c\3\2\2\2\u0294\u028e\3\2\2\2\u0294\u0290\3\2"+
		"\2\2\u0294\u0292\3\2\2\2\u0295%\3\2\2\2\u0296\u0297\5(\25\2\u0297\u0298"+
		"\b\24\1\2\u0298\u02be\3\2\2\2\u0299\u029a\5*\26\2\u029a\u029b\b\24\1\2"+
		"\u029b\u02be\3\2\2\2\u029c\u029d\5,\27\2\u029d\u029e\b\24\1\2\u029e\u02be"+
		"\3\2\2\2\u029f\u02a0\5.\30\2\u02a0\u02a1\b\24\1\2\u02a1\u02be\3\2\2\2"+
		"\u02a2\u02a3\5\60\31\2\u02a3\u02a4\b\24\1\2\u02a4\u02be\3\2\2\2\u02a5"+
		"\u02a6\5\62\32\2\u02a6\u02a7\b\24\1\2\u02a7\u02be\3\2\2\2\u02a8\u02a9"+
		"\5\64\33\2\u02a9\u02aa\b\24\1\2\u02aa\u02be\3\2\2\2\u02ab\u02ac\5\66\34"+
		"\2\u02ac\u02ad\b\24\1\2\u02ad\u02be\3\2\2\2\u02ae\u02af\58\35\2\u02af"+
		"\u02b0\b\24\1\2\u02b0\u02be\3\2\2\2\u02b1\u02b2\5:\36\2\u02b2\u02b3\b"+
		"\24\1\2\u02b3\u02be\3\2\2\2\u02b4\u02b5\5<\37\2\u02b5\u02b6\b\24\1\2\u02b6"+
		"\u02be\3\2\2\2\u02b7\u02b8\5> \2\u02b8\u02b9\b\24\1\2\u02b9\u02be\3\2"+
		"\2\2\u02ba\u02bb\5@!\2\u02bb\u02bc\b\24\1\2\u02bc\u02be\3\2\2\2\u02bd"+
		"\u0296\3\2\2\2\u02bd\u0299\3\2\2\2\u02bd\u029c\3\2\2\2\u02bd\u029f\3\2"+
		"\2\2\u02bd\u02a2\3\2\2\2\u02bd\u02a5\3\2\2\2\u02bd\u02a8\3\2\2\2\u02bd"+
		"\u02ab\3\2\2\2\u02bd\u02ae\3\2\2\2\u02bd\u02b1\3\2\2\2\u02bd\u02b4\3\2"+
		"\2\2\u02bd\u02b7\3\2\2\2\u02bd\u02ba\3\2\2\2\u02be\'\3\2\2\2\u02bf\u02c3"+
		"\7\u0096\2\2\u02c0\u02c2\7_\2\2\u02c1\u02c0\3\2\2\2\u02c2\u02c5\3\2\2"+
		"\2\u02c3\u02c1\3\2\2\2\u02c3\u02c4\3\2\2\2\u02c4\u02c6\3\2\2\2\u02c5\u02c3"+
		"\3\2\2\2\u02c6\u02c8\7I\2\2\u02c7\u02bf\3\2\2\2\u02c7\u02c8\3\2\2\2\u02c8"+
		"\u02cc\3\2\2\2\u02c9\u02cb\7_\2\2\u02ca\u02c9\3\2\2\2\u02cb\u02ce\3\2"+
		"\2\2\u02cc\u02ca\3\2\2\2\u02cc\u02cd\3\2\2\2\u02cd\u02cf\3\2\2\2\u02ce"+
		"\u02cc\3\2\2\2\u02cf\u02d3\7\u0088\2\2\u02d0\u02d2\7_\2\2\u02d1\u02d0"+
		"\3\2\2\2\u02d2\u02d5\3\2\2\2\u02d3\u02d1\3\2\2\2\u02d3\u02d4\3\2\2\2\u02d4"+
		"\u02d6\3\2\2\2\u02d5\u02d3\3\2\2\2\u02d6\u02d7\5L\'\2\u02d7)\3\2\2\2\u02d8"+
		"\u02dc\7\u0096\2\2\u02d9\u02db\7_\2\2\u02da\u02d9\3\2\2\2\u02db\u02de"+
		"\3\2\2\2\u02dc\u02da\3\2\2\2\u02dc\u02dd\3\2\2\2\u02dd\u02df\3\2\2\2\u02de"+
		"\u02dc\3\2\2\2\u02df\u02e1\7J\2\2\u02e0\u02d8\3\2\2\2\u02e0\u02e1\3\2"+
		"\2\2\u02e1\u02e5\3\2\2\2\u02e2\u02e4\7_\2\2\u02e3\u02e2\3\2\2\2\u02e4"+
		"\u02e7\3\2\2\2\u02e5\u02e3\3\2\2\2\u02e5\u02e6\3\2\2\2\u02e6\u02e8\3\2"+
		"\2\2\u02e7\u02e5\3\2\2\2\u02e8\u02ec\7\u0088\2\2\u02e9\u02eb\7_\2\2\u02ea"+
		"\u02e9\3\2\2\2\u02eb\u02ee\3\2\2\2\u02ec\u02ea\3\2\2\2\u02ec\u02ed\3\2"+
		"\2\2\u02ed\u02ef\3\2\2\2\u02ee\u02ec\3\2\2\2\u02ef\u02f0\5N(\2\u02f0+"+
		"\3\2\2\2\u02f1\u02f5\7\u0096\2\2\u02f2\u02f4\7_\2\2\u02f3\u02f2\3\2\2"+
		"\2\u02f4\u02f7\3\2\2\2\u02f5\u02f3\3\2\2\2\u02f5\u02f6\3\2\2\2\u02f6\u02f8"+
		"\3\2\2\2\u02f7\u02f5\3\2\2\2\u02f8\u02fa\7K\2\2\u02f9\u02f1\3\2\2\2\u02f9"+
		"\u02fa\3\2\2\2\u02fa\u02fe\3\2\2\2\u02fb\u02fd\7_\2\2\u02fc\u02fb\3\2"+
		"\2\2\u02fd\u0300\3\2\2\2\u02fe\u02fc\3\2\2\2\u02fe\u02ff\3\2\2\2\u02ff"+
		"\u0301\3\2\2\2\u0300\u02fe\3\2\2\2\u0301\u0305\7\u0088\2\2\u0302\u0304"+
		"\7_\2\2\u0303\u0302\3\2\2\2\u0304\u0307\3\2\2\2\u0305\u0303\3\2\2\2\u0305"+
		"\u0306\3\2\2\2\u0306\u0308\3\2\2\2\u0307\u0305\3\2\2\2\u0308\u0309\5d"+
		"\63\2\u0309-\3\2\2\2\u030a\u030e\7\u0096\2\2\u030b\u030d\7_\2\2\u030c"+
		"\u030b\3\2\2\2\u030d\u0310\3\2\2\2\u030e\u030c\3\2\2\2\u030e\u030f\3\2"+
		"\2\2\u030f\u0311\3\2\2\2\u0310\u030e\3\2\2\2\u0311\u0315\7L\2\2\u0312"+
		"\u0314\7_\2\2\u0313\u0312\3\2\2\2\u0314\u0317\3\2\2\2\u0315\u0313\3\2"+
		"\2\2\u0315\u0316\3\2\2\2\u0316\u0318\3\2\2\2\u0317\u0315\3\2\2\2\u0318"+
		"\u031c\7\u0088\2\2\u0319\u031b\7_\2\2\u031a\u0319\3\2\2\2\u031b\u031e"+
		"\3\2\2\2\u031c\u031a\3\2\2\2\u031c\u031d\3\2\2\2\u031d\u031f\3\2\2\2\u031e"+
		"\u031c\3\2\2\2\u031f\u0321\5P)\2\u0320\u0322\7L\2\2\u0321\u0320\3\2\2"+
		"\2\u0321\u0322\3\2\2\2\u0322\u032f\3\2\2\2\u0323\u0327\7\u0088\2\2\u0324"+
		"\u0326\7_\2\2\u0325\u0324\3\2\2\2\u0326\u0329\3\2\2\2\u0327\u0325\3\2"+
		"\2\2\u0327\u0328\3\2\2\2\u0328\u032a\3\2\2\2\u0329\u0327\3\2\2\2\u032a"+
		"\u032c\5P)\2\u032b\u032d\7L\2\2\u032c\u032b\3\2\2\2\u032c\u032d\3\2\2"+
		"\2\u032d\u032f\3\2\2\2\u032e\u030a\3\2\2\2\u032e\u0323\3\2\2\2\u032f/"+
		"\3\2\2\2\u0330\u0334\7\u0096\2\2\u0331\u0333\7_\2\2\u0332\u0331\3\2\2"+
		"\2\u0333\u0336\3\2\2\2\u0334\u0332\3\2\2\2\u0334\u0335\3\2\2\2\u0335\u0337"+
		"\3\2\2\2\u0336\u0334\3\2\2\2\u0337\u033b\7M\2\2\u0338\u033a\7_\2\2\u0339"+
		"\u0338\3\2\2\2\u033a\u033d\3\2\2\2\u033b\u0339\3\2\2\2\u033b\u033c\3\2"+
		"\2\2\u033c\u033e\3\2\2\2\u033d\u033b\3\2\2\2\u033e\u0342\7\u0088\2\2\u033f"+
		"\u0341\7_\2\2\u0340\u033f\3\2\2\2\u0341\u0344\3\2\2\2\u0342\u0340\3\2"+
		"\2\2\u0342\u0343\3\2\2\2\u0343\u0345\3\2\2\2\u0344\u0342\3\2\2\2\u0345"+
		"\u0347\5R*\2\u0346\u0348\7M\2\2\u0347\u0346\3\2\2\2\u0347\u0348\3\2\2"+
		"\2\u0348\u0354\3\2\2\2\u0349\u034d\7\u0088\2\2\u034a\u034c\7_\2\2\u034b"+
		"\u034a\3\2\2\2\u034c\u034f\3\2\2\2\u034d\u034b\3\2\2\2\u034d\u034e\3\2"+
		"\2\2\u034e\u0350\3\2\2\2\u034f\u034d\3\2\2\2\u0350\u0351\5R*\2\u0351\u0352"+
		"\7M\2\2\u0352\u0354\3\2\2\2\u0353\u0330\3\2\2\2\u0353\u0349\3\2\2\2\u0354"+
		"\61\3\2\2\2\u0355\u0359\7\u0096\2\2\u0356\u0358\7_\2\2\u0357\u0356\3\2"+
		"\2\2\u0358\u035b\3\2\2\2\u0359\u0357\3\2\2\2\u0359\u035a\3\2\2\2\u035a"+
		"\u035c\3\2\2\2\u035b\u0359\3\2\2\2\u035c\u0360\7N\2\2\u035d\u035f\7_\2"+
		"\2\u035e\u035d\3\2\2\2\u035f\u0362\3\2\2\2\u0360\u035e\3\2\2\2\u0360\u0361"+
		"\3\2\2\2\u0361\u0363\3\2\2\2\u0362\u0360\3\2\2\2\u0363\u0367\7\u0088\2"+
		"\2\u0364\u0366\7_\2\2\u0365\u0364\3\2\2\2\u0366\u0369\3\2\2\2\u0367\u0365"+
		"\3\2\2\2\u0367\u0368\3\2\2\2\u0368\u036a\3\2\2\2\u0369\u0367\3\2\2\2\u036a"+
		"\u036c\5T+\2\u036b\u036d\7N\2\2\u036c\u036b\3\2\2\2\u036c\u036d\3\2\2"+
		"\2\u036d\u0379\3\2\2\2\u036e\u0372\7\u0088\2\2\u036f\u0371\7_\2\2\u0370"+
		"\u036f\3\2\2\2\u0371\u0374\3\2\2\2\u0372\u0370\3\2\2\2\u0372\u0373\3\2"+
		"\2\2\u0373\u0375\3\2\2\2\u0374\u0372\3\2\2\2\u0375\u0376\5T+\2\u0376\u0377"+
		"\7N\2\2\u0377\u0379\3\2\2\2\u0378\u0355\3\2\2\2\u0378\u036e\3\2\2\2\u0379"+
		"\63\3\2\2\2\u037a\u037e\7\u0096\2\2\u037b\u037d\7_\2\2\u037c\u037b\3\2"+
		"\2\2\u037d\u0380\3\2\2\2\u037e\u037c\3\2\2\2\u037e\u037f\3\2\2\2\u037f"+
		"\u0381\3\2\2\2\u0380\u037e\3\2\2\2\u0381\u0385\7O\2\2\u0382\u0384\7_\2"+
		"\2\u0383\u0382\3\2\2\2\u0384\u0387\3\2\2\2\u0385\u0383\3\2\2\2\u0385\u0386"+
		"\3\2\2\2\u0386\u0388\3\2\2\2\u0387\u0385\3\2\2\2\u0388\u038c\7\u0088\2"+
		"\2\u0389\u038b\7_\2\2\u038a\u0389\3\2\2\2\u038b\u038e\3\2\2\2\u038c\u038a"+
		"\3\2\2\2\u038c\u038d\3\2\2\2\u038d\u038f\3\2\2\2\u038e\u038c\3\2\2\2\u038f"+
		"\u0391\5V,\2\u0390\u0392\7O\2\2\u0391\u0390\3\2\2\2\u0391\u0392\3\2\2"+
		"\2\u0392\u039e\3\2\2\2\u0393\u0397\7\u0088\2\2\u0394\u0396\7_\2\2\u0395"+
		"\u0394\3\2\2\2\u0396\u0399\3\2\2\2\u0397\u0395\3\2\2\2\u0397\u0398\3\2"+
		"\2\2\u0398\u039a\3\2\2\2\u0399\u0397\3\2\2\2\u039a\u039b\5V,\2\u039b\u039c"+
		"\7O\2\2\u039c\u039e\3\2\2\2\u039d\u037a\3\2\2\2\u039d\u0393\3\2\2\2\u039e"+
		"\65\3\2\2\2\u039f\u03a3\7\u0096\2\2\u03a0\u03a2\7_\2\2\u03a1\u03a0\3\2"+
		"\2\2\u03a2\u03a5\3\2\2\2\u03a3\u03a1\3\2\2\2\u03a3\u03a4\3\2\2\2\u03a4"+
		"\u03a6\3\2\2\2\u03a5\u03a3\3\2\2\2\u03a6\u03aa\7P\2\2\u03a7\u03a9\7_\2"+
		"\2\u03a8\u03a7\3\2\2\2\u03a9\u03ac\3\2\2\2\u03aa\u03a8\3\2\2\2\u03aa\u03ab"+
		"\3\2\2\2\u03ab\u03ad\3\2\2\2\u03ac\u03aa\3\2\2\2\u03ad\u03b1\7\u0088\2"+
		"\2\u03ae\u03b0\7_\2\2\u03af\u03ae\3\2\2\2\u03b0\u03b3\3\2\2\2\u03b1\u03af"+
		"\3\2\2\2\u03b1\u03b2\3\2\2\2\u03b2\u03b4\3\2\2\2\u03b3\u03b1\3\2\2\2\u03b4"+
		"\u03b6\5X-\2\u03b5\u03b7\7P\2\2\u03b6\u03b5\3\2\2\2\u03b6\u03b7\3\2\2"+
		"\2\u03b7\u03c3\3\2\2\2\u03b8\u03bc\7\u0088\2\2\u03b9\u03bb\7_\2\2\u03ba"+
		"\u03b9\3\2\2\2\u03bb\u03be\3\2\2\2\u03bc\u03ba\3\2\2\2\u03bc\u03bd\3\2"+
		"\2\2\u03bd\u03bf\3\2\2\2\u03be\u03bc\3\2\2\2\u03bf\u03c0\5X-\2\u03c0\u03c1"+
		"\7P\2\2\u03c1\u03c3\3\2\2\2\u03c2\u039f\3\2\2\2\u03c2\u03b8\3\2\2\2\u03c3"+
		"\67\3\2\2\2\u03c4\u03c8\7\u0096\2\2\u03c5\u03c7\7_\2\2\u03c6\u03c5\3\2"+
		"\2\2\u03c7\u03ca\3\2\2\2\u03c8\u03c6\3\2\2\2\u03c8\u03c9\3\2\2\2\u03c9"+
		"\u03cb\3\2\2\2\u03ca\u03c8\3\2\2\2\u03cb\u03cf\7Q\2\2\u03cc\u03ce\7_\2"+
		"\2\u03cd\u03cc\3\2\2\2\u03ce\u03d1\3\2\2\2\u03cf\u03cd\3\2\2\2\u03cf\u03d0"+
		"\3\2\2\2\u03d0\u03d2\3\2\2\2\u03d1\u03cf\3\2\2\2\u03d2\u03d6\7\u0088\2"+
		"\2\u03d3\u03d5\7_\2\2\u03d4\u03d3\3\2\2\2\u03d5\u03d8\3\2\2\2\u03d6\u03d4"+
		"\3\2\2\2\u03d6\u03d7\3\2\2\2\u03d7\u03d9\3\2\2\2\u03d8\u03d6\3\2\2\2\u03d9"+
		"\u03db\5Z.\2\u03da\u03dc\7Q\2\2\u03db\u03da\3\2\2\2\u03db\u03dc\3\2\2"+
		"\2\u03dc\u03e8\3\2\2\2\u03dd\u03e1\7\u0088\2\2\u03de\u03e0\7_\2\2\u03df"+
		"\u03de\3\2\2\2\u03e0\u03e3\3\2\2\2\u03e1\u03df\3\2\2\2\u03e1\u03e2\3\2"+
		"\2\2\u03e2\u03e4\3\2\2\2\u03e3\u03e1\3\2\2\2\u03e4\u03e5\5Z.\2\u03e5\u03e6"+
		"\7Q\2\2\u03e6\u03e8\3\2\2\2\u03e7\u03c4\3\2\2\2\u03e7\u03dd\3\2\2\2\u03e8"+
		"9\3\2\2\2\u03e9\u03ed\7\u0096\2\2\u03ea\u03ec\7_\2\2\u03eb\u03ea\3\2\2"+
		"\2\u03ec\u03ef\3\2\2\2\u03ed\u03eb\3\2\2\2\u03ed\u03ee\3\2\2\2\u03ee\u03f0"+
		"\3\2\2\2\u03ef\u03ed\3\2\2\2\u03f0\u03f4\7R\2\2\u03f1\u03f3\7_\2\2\u03f2"+
		"\u03f1\3\2\2\2\u03f3\u03f6\3\2\2\2\u03f4\u03f2\3\2\2\2\u03f4\u03f5\3\2"+
		"\2\2\u03f5\u03f7\3\2\2\2\u03f6\u03f4\3\2\2\2\u03f7\u03fb\7\u0088\2\2\u03f8"+
		"\u03fa\7_\2\2\u03f9\u03f8\3\2\2\2\u03fa\u03fd\3\2\2\2\u03fb\u03f9\3\2"+
		"\2\2\u03fb\u03fc\3\2\2\2\u03fc\u03fe\3\2\2\2\u03fd\u03fb\3\2\2\2\u03fe"+
		"\u0400\5\\/\2\u03ff\u0401\7R\2\2\u0400\u03ff\3\2\2\2\u0400\u0401\3\2\2"+
		"\2\u0401\u040d\3\2\2\2\u0402\u0406\7\u0088\2\2\u0403\u0405\7_\2\2\u0404"+
		"\u0403\3\2\2\2\u0405\u0408\3\2\2\2\u0406\u0404\3\2\2\2\u0406\u0407\3\2"+
		"\2\2\u0407\u0409\3\2\2\2\u0408\u0406\3\2\2\2\u0409\u040a\5\\/\2\u040a"+
		"\u040b\7R\2\2\u040b\u040d\3\2\2\2\u040c\u03e9\3\2\2\2\u040c\u0402\3\2"+
		"\2\2\u040d;\3\2\2\2\u040e\u0412\7\u0096\2\2\u040f\u0411\7_\2\2\u0410\u040f"+
		"\3\2\2\2\u0411\u0414\3\2\2\2\u0412\u0410\3\2\2\2\u0412\u0413\3\2\2\2\u0413"+
		"\u0415\3\2\2\2\u0414\u0412\3\2\2\2\u0415\u0419\7S\2\2\u0416\u0418\7_\2"+
		"\2\u0417\u0416\3\2\2\2\u0418\u041b\3\2\2\2\u0419\u0417\3\2\2\2\u0419\u041a"+
		"\3\2\2\2\u041a\u041c\3\2\2\2\u041b\u0419\3\2\2\2\u041c\u0420\7\u0088\2"+
		"\2\u041d\u041f\7_\2\2\u041e\u041d\3\2\2\2\u041f\u0422\3\2\2\2\u0420\u041e"+
		"\3\2\2\2\u0420\u0421\3\2\2\2\u0421\u0423\3\2\2\2\u0422\u0420\3\2\2\2\u0423"+
		"\u0425\5^\60\2\u0424\u0426\7S\2\2\u0425\u0424\3\2\2\2\u0425\u0426\3\2"+
		"\2\2\u0426\u0432\3\2\2\2\u0427\u042b\7\u0088\2\2\u0428\u042a\7_\2\2\u0429"+
		"\u0428\3\2\2\2\u042a\u042d\3\2\2\2\u042b\u0429\3\2\2\2\u042b\u042c\3\2"+
		"\2\2\u042c\u042e\3\2\2\2\u042d\u042b\3\2\2\2\u042e\u042f\5^\60\2\u042f"+
		"\u0430\7S\2\2\u0430\u0432\3\2\2\2\u0431\u040e\3\2\2\2\u0431\u0427\3\2"+
		"\2\2\u0432=\3\2\2\2\u0433\u0437\7\u0096\2\2\u0434\u0436\7_\2\2\u0435\u0434"+
		"\3\2\2\2\u0436\u0439\3\2\2\2\u0437\u0435\3\2\2\2\u0437\u0438\3\2\2\2\u0438"+
		"\u043a\3\2\2\2\u0439\u0437\3\2\2\2\u043a\u043e\7T\2\2\u043b\u043d\7_\2"+
		"\2\u043c\u043b\3\2\2\2\u043d\u0440\3\2\2\2\u043e\u043c\3\2\2\2\u043e\u043f"+
		"\3\2\2\2\u043f\u0441\3\2\2\2\u0440\u043e\3\2\2\2\u0441\u0445\7\u0088\2"+
		"\2\u0442\u0444\7_\2\2\u0443\u0442\3\2\2\2\u0444\u0447\3\2\2\2\u0445\u0443"+
		"\3\2\2\2\u0445\u0446\3\2\2\2\u0446\u0448\3\2\2\2\u0447\u0445\3\2\2\2\u0448"+
		"\u044a\5`\61\2\u0449\u044b\7T\2\2\u044a\u0449\3\2\2\2\u044a\u044b\3\2"+
		"\2\2\u044b\u0458\3\2\2\2\u044c\u0450\7\u0088\2\2\u044d\u044f\7_\2\2\u044e"+
		"\u044d\3\2\2\2\u044f\u0452\3\2\2\2\u0450\u044e\3\2\2\2\u0450\u0451\3\2"+
		"\2\2\u0451\u0453\3\2\2\2\u0452\u0450\3\2\2\2\u0453\u0455\5`\61\2\u0454"+
		"\u0456\7T\2\2\u0455\u0454\3\2\2\2\u0455\u0456\3\2\2\2\u0456\u0458\3\2"+
		"\2\2\u0457\u0433\3\2\2\2\u0457\u044c\3\2\2\2\u0458?\3\2\2\2\u0459\u045d"+
		"\7\u0096\2\2\u045a\u045c\7_\2\2\u045b\u045a\3\2\2\2\u045c\u045f\3\2\2"+
		"\2\u045d\u045b\3\2\2\2\u045d\u045e\3\2\2\2\u045e\u0460\3\2\2\2\u045f\u045d"+
		"\3\2\2\2\u0460\u0464\7U\2\2\u0461\u0463\7_\2\2\u0462\u0461\3\2\2\2\u0463"+
		"\u0466\3\2\2\2\u0464\u0462\3\2\2\2\u0464\u0465\3\2\2\2\u0465\u0467\3\2"+
		"\2\2\u0466\u0464\3\2\2\2\u0467\u046b\7\u0088\2\2\u0468\u046a\7_\2\2\u0469"+
		"\u0468\3\2\2\2\u046a\u046d\3\2\2\2\u046b\u0469\3\2\2\2\u046b\u046c\3\2"+
		"\2\2\u046c\u046e\3\2\2\2\u046d\u046b\3\2\2\2\u046e\u0470\5b\62\2\u046f"+
		"\u0471\7U\2\2\u0470\u046f\3\2\2\2\u0470\u0471\3\2\2\2\u0471\u047d\3\2"+
		"\2\2\u0472\u0476\7\u0088\2\2\u0473\u0475\7_\2\2\u0474\u0473\3\2\2\2\u0475"+
		"\u0478\3\2\2\2\u0476\u0474\3\2\2\2\u0476\u0477\3\2\2\2\u0477\u0479\3\2"+
		"\2\2\u0478\u0476\3\2\2\2\u0479\u047a\5b\62\2\u047a\u047b\7U\2\2\u047b"+
		"\u047d\3\2\2\2\u047c\u0459\3\2\2\2\u047c\u0472\3\2\2\2\u047dA\3\2\2\2"+
		"\u047e\u0482\7\16\2\2\u047f\u0481\7_\2\2\u0480\u047f\3\2\2\2\u0481\u0484"+
		"\3\2\2\2\u0482\u0480\3\2\2\2\u0482\u0483\3\2\2\2\u0483\u0485\3\2\2\2\u0484"+
		"\u0482\3\2\2\2\u0485\u0489\7\u0088\2\2\u0486\u0488\7_\2\2\u0487\u0486"+
		"\3\2\2\2\u0488\u048b\3\2\2\2\u0489\u0487\3\2\2\2\u0489\u048a\3\2\2\2\u048a"+
		"\u048c\3\2\2\2\u048b\u0489\3\2\2\2\u048c\u0490\5f\64\2\u048d\u048f\7_"+
		"\2\2\u048e\u048d\3\2\2\2\u048f\u0492\3\2\2\2\u0490\u048e\3\2\2\2\u0490"+
		"\u0491\3\2\2\2\u0491\u0493\3\2\2\2\u0492\u0490\3\2\2\2\u0493\u0494\7\u0095"+
		"\2\2\u0494\u0495\b\"\1\2\u0495C\3\2\2\2\u0496\u0498\7\n\2\2\u0497\u0499"+
		"\7_\2\2\u0498\u0497\3\2\2\2\u0499\u049a\3\2\2\2\u049a\u0498\3\2\2\2\u049a"+
		"\u049b\3\2\2\2\u049b\u049c\3\2\2\2\u049c\u04a0\5J&\2\u049d\u049f\7_\2"+
		"\2\u049e\u049d\3\2\2\2\u049f\u04a2\3\2\2\2\u04a0\u049e\3\2\2\2\u04a0\u04a1"+
		"\3\2\2\2\u04a1\u04a3\3\2\2\2\u04a2\u04a0\3\2\2\2\u04a3\u04a4\7\u0095\2"+
		"\2\u04a4\u04a5\b#\1\2\u04a5E\3\2\2\2\u04a6\u04a7\7\17\2\2\u04a7\u04a8"+
		"\5H%\2\u04a8\u04a9\7\u0095\2\2\u04a9G\3\2\2\2\u04aa\u04ac\5J&\2\u04ab"+
		"\u04aa\3\2\2\2\u04ab\u04ac\3\2\2\2\u04ac\u04ad\3\2\2\2\u04ad\u04af\7\u0097"+
		"\2\2\u04ae\u04ab\3\2\2\2\u04ae\u04af\3\2\2\2\u04af\u04c0\3\2\2\2\u04b0"+
		"\u04c1\7u\2\2\u04b1\u04bd\7\u009d\2\2\u04b2\u04b7\5H%\2\u04b3\u04b4\7"+
		"\u0094\2\2\u04b4\u04b6\5H%\2\u04b5\u04b3\3\2\2\2\u04b6\u04b9\3\2\2\2\u04b7"+
		"\u04b5\3\2\2\2\u04b7\u04b8\3\2\2\2\u04b8\u04bb\3\2\2\2\u04b9\u04b7\3\2"+
		"\2\2\u04ba\u04bc\7\u0094\2\2\u04bb\u04ba\3\2\2\2\u04bb\u04bc\3\2\2\2\u04bc"+
		"\u04be\3\2\2\2\u04bd\u04b2\3\2\2\2\u04bd\u04be\3\2\2\2\u04be\u04bf\3\2"+
		"\2\2\u04bf\u04c1\7\u009e\2\2\u04c0\u04b0\3\2\2\2\u04c0\u04b1\3\2\2\2\u04c1"+
		"\u04c8\3\2\2\2\u04c2\u04c5\5J&\2\u04c3\u04c4\7\4\2\2\u04c4\u04c6\5f\64"+
		"\2\u04c5\u04c3\3\2\2\2\u04c5\u04c6\3\2\2\2\u04c6\u04c8\3\2\2\2\u04c7\u04ae"+
		"\3\2\2\2\u04c7\u04c2\3\2\2\2\u04c8I\3\2\2\2\u04c9\u04cb\7\u0097\2\2\u04ca"+
		"\u04c9\3\2\2\2\u04ca\u04cb\3\2\2\2\u04cb\u04cc\3\2\2\2\u04cc\u04cd\5f"+
		"\64\2\u04cd\u04d4\b&\1\2\u04ce\u04cf\7\u0097\2\2\u04cf\u04d0\5f\64\2\u04d0"+
		"\u04d1\b&\1\2\u04d1\u04d3\3\2\2\2\u04d2\u04ce\3\2\2\2\u04d3\u04d6\3\2"+
		"\2\2\u04d4\u04d2\3\2\2\2\u04d4\u04d5\3\2\2\2\u04d5K\3\2\2\2\u04d6\u04d4"+
		"\3\2\2\2\u04d7\u04d8\t\2\2\2\u04d8M\3\2\2\2\u04d9\u04da\7`\2\2\u04da\u04db"+
		"\b(\1\2\u04dbO\3\2\2\2\u04dc\u04dd\7k\2\2\u04dd\u04de\b)\1\2\u04deQ\3"+
		"\2\2\2\u04df\u04e0\7k\2\2\u04e0\u04e1\b*\1\2\u04e1S\3\2\2\2\u04e2\u04e4"+
		"\7t\2\2\u04e3\u04e2\3\2\2\2\u04e3\u04e4\3\2\2\2\u04e4\u04e5\3\2\2\2\u04e5"+
		"\u04ed\t\3\2\2\u04e6\u04e7\7o\2\2\u04e7\u04ed\t\4\2\2\u04e8\u04e9\7p\2"+
		"\2\u04e9\u04ed\t\5\2\2\u04ea\u04eb\7q\2\2\u04eb\u04ed\t\6\2\2\u04ec\u04e3"+
		"\3\2\2\2\u04ec\u04e6\3\2\2\2\u04ec\u04e8\3\2\2\2\u04ec\u04ea\3\2\2\2\u04ed"+
		"\u04ee\3\2\2\2\u04ee\u04ef\b+\1\2\u04efU\3\2\2\2\u04f0\u04f2\7t\2\2\u04f1"+
		"\u04f0\3\2\2\2\u04f1\u04f2\3\2\2\2\u04f2\u04f3\3\2\2\2\u04f3\u04fb\t\3"+
		"\2\2\u04f4\u04f5\7o\2\2\u04f5\u04fb\t\4\2\2\u04f6\u04f7\7p\2\2\u04f7\u04fb"+
		"\t\5\2\2\u04f8\u04f9\7q\2\2\u04f9\u04fb\t\6\2\2\u04fa\u04f1\3\2\2\2\u04fa"+
		"\u04f4\3\2\2\2\u04fa\u04f6\3\2\2\2\u04fa\u04f8\3\2\2\2\u04fb\u04fc\3\2"+
		"\2\2\u04fc\u04fd\b,\1\2\u04fdW\3\2\2\2\u04fe\u0500\7t\2\2\u04ff\u04fe"+
		"\3\2\2\2\u04ff\u0500\3\2\2\2\u0500\u0501\3\2\2\2\u0501\u0509\t\3\2\2\u0502"+
		"\u0503\7o\2\2\u0503\u0509\t\4\2\2\u0504\u0505\7p\2\2\u0505\u0509\t\5\2"+
		"\2\u0506\u0507\7q\2\2\u0507\u0509\t\6\2\2\u0508\u04ff\3\2\2\2\u0508\u0502"+
		"\3\2\2\2\u0508\u0504\3\2\2\2\u0508\u0506\3\2\2\2\u0509\u050a\3\2\2\2\u050a"+
		"\u050b\b-\1\2\u050bY\3\2\2\2\u050c\u050e\7t\2\2\u050d\u050c\3\2\2\2\u050d"+
		"\u050e\3\2\2\2\u050e\u050f\3\2\2\2\u050f\u0517\t\3\2\2\u0510\u0511\7o"+
		"\2\2\u0511\u0517\t\4\2\2\u0512\u0513\7p\2\2\u0513\u0517\t\5\2\2\u0514"+
		"\u0515\7q\2\2\u0515\u0517\t\6\2\2\u0516\u050d\3\2\2\2\u0516\u0510\3\2"+
		"\2\2\u0516\u0512\3\2\2\2\u0516\u0514\3\2\2\2\u0517\u0518\3\2\2\2\u0518"+
		"\u0519\b.\1\2\u0519[\3\2\2\2\u051a\u051c\7t\2\2\u051b\u051a\3\2\2\2\u051b"+
		"\u051c\3\2\2\2\u051c\u051d\3\2\2\2\u051d\u0525\t\3\2\2\u051e\u051f\7o"+
		"\2\2\u051f\u0525\t\4\2\2\u0520\u0521\7p\2\2\u0521\u0525\t\5\2\2\u0522"+
		"\u0523\7q\2\2\u0523\u0525\t\6\2\2\u0524\u051b\3\2\2\2\u0524\u051e\3\2"+
		"\2\2\u0524\u0520\3\2\2\2\u0524\u0522\3\2\2\2\u0525\u0526\3\2\2\2\u0526"+
		"\u0527\b/\1\2\u0527]\3\2\2\2\u0528\u052a\7t\2\2\u0529\u0528\3\2\2\2\u0529"+
		"\u052a\3\2\2\2\u052a\u052b\3\2\2\2\u052b\u0533\t\3\2\2\u052c\u052d\7o"+
		"\2\2\u052d\u0533\t\4\2\2\u052e\u052f\7p\2\2\u052f\u0533\t\5\2\2\u0530"+
		"\u0531\7q\2\2\u0531\u0533\t\6\2\2\u0532\u0529\3\2\2\2\u0532\u052c\3\2"+
		"\2\2\u0532\u052e\3\2\2\2\u0532\u0530\3\2\2\2\u0533\u0534\3\2\2\2\u0534"+
		"\u0535\b\60\1\2\u0535_\3\2\2\2\u0536\u0538\7t\2\2\u0537\u0536\3\2\2\2"+
		"\u0537\u0538\3\2\2\2\u0538\u0539\3\2\2\2\u0539\u0541\t\3\2\2\u053a\u053b"+
		"\7o\2\2\u053b\u0541\t\4\2\2\u053c\u053d\7p\2\2\u053d\u0541\t\5\2\2\u053e"+
		"\u053f\7q\2\2\u053f\u0541\t\6\2\2\u0540\u0537\3\2\2\2\u0540\u053a\3\2"+
		"\2\2\u0540\u053c\3\2\2\2\u0540\u053e\3\2\2\2\u0541\u0542\3\2\2\2\u0542"+
		"\u0543\b\61\1\2\u0543a\3\2\2\2\u0544\u0546\7t\2\2\u0545\u0544\3\2\2\2"+
		"\u0545\u0546\3\2\2\2\u0546\u0547\3\2\2\2\u0547\u054f\t\3\2\2\u0548\u0549"+
		"\7o\2\2\u0549\u054f\t\4\2\2\u054a\u054b\7p\2\2\u054b\u054f\t\5\2\2\u054c"+
		"\u054d\7q\2\2\u054d\u054f\t\6\2\2\u054e\u0545\3\2\2\2\u054e\u0548\3\2"+
		"\2\2\u054e\u054a\3\2\2\2\u054e\u054c\3\2\2\2\u054f\u0550\3\2\2\2\u0550"+
		"\u0551\b\62\1\2\u0551c\3\2\2\2\u0552\u0553\7a\2\2\u0553\u0557\b\63\1\2"+
		"\u0554\u0555\7b\2\2\u0555\u0557\b\63\1\2\u0556\u0552\3\2\2\2\u0556\u0554"+
		"\3\2\2\2\u0557e\3\2\2\2\u0558\u055c\7V\2\2\u0559\u055a\7r\2\2\u055a\u055c"+
		"\7V\2\2\u055b\u0558\3\2\2\2\u055b\u0559\3\2\2\2\u055cg\3\2\2\2\u055d\u055e"+
		"\t\7\2\2\u055ei\3\2\2\2\u00b4ouz\u0080\u0086\u008e\u0094\u009d\u00ae\u00b3"+
		"\u00bc\u00c3\u00ca\u00d2\u00d9\u00de\u00e4\u00ee\u00f5\u00fc\u0104\u010b"+
		"\u0110\u011a\u0121\u0128\u012f\u0139\u0140\u0147\u014e\u0155\u015c\u0166"+
		"\u016d\u0175\u0187\u018e\u0194\u019a\u01a1\u01a8\u01af\u01b7\u01be\u01c3"+
		"\u01c9\u01d3\u01da\u01e1\u01e8\u01f0\u01f7\u01fc\u0206\u020d\u0214\u021b"+
		"\u0222\u022c\u0233\u023a\u0241\u0248\u024f\u0256\u0263\u026a\u0275\u0294"+
		"\u02bd\u02c3\u02c7\u02cc\u02d3\u02dc\u02e0\u02e5\u02ec\u02f5\u02f9\u02fe"+
		"\u0305\u030e\u0315\u031c\u0321\u0327\u032c\u032e\u0334\u033b\u0342\u0347"+
		"\u034d\u0353\u0359\u0360\u0367\u036c\u0372\u0378\u037e\u0385\u038c\u0391"+
		"\u0397\u039d\u03a3\u03aa\u03b1\u03b6\u03bc\u03c2\u03c8\u03cf\u03d6\u03db"+
		"\u03e1\u03e7\u03ed\u03f4\u03fb\u0400\u0406\u040c\u0412\u0419\u0420\u0425"+
		"\u042b\u0431\u0437\u043e\u0445\u044a\u0450\u0455\u0457\u045d\u0464\u046b"+
		"\u0470\u0476\u047c\u0482\u0489\u0490\u049a\u04a0\u04ab\u04ae\u04b7\u04bb"+
		"\u04bd\u04c0\u04c5\u04c7\u04ca\u04d4\u04e3\u04ec\u04f1\u04fa\u04ff\u0508"+
		"\u050d\u0516\u051b\u0524\u0529\u0532\u0537\u0540\u0545\u054e\u0556\u055b";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}