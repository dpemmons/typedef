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
		RULE_maybeValuedType = 9, RULE_valuedType = 10, RULE_unvaluedType = 11, 
		RULE_primitiveType = 12, RULE_valuedPrimitiveType = 13, RULE_valuedBoolFragment = 14, 
		RULE_valuedCharFragment = 15, RULE_valuedStringFragment = 16, RULE_valuedF32Fragment = 17, 
		RULE_valuedF64Fragment = 18, RULE_valuedU8Fragment = 19, RULE_valuedU16Fragment = 20, 
		RULE_valuedU32Fragment = 21, RULE_valuedU64Fragment = 22, RULE_valuedI8Fragment = 23, 
		RULE_valuedI16Fragment = 24, RULE_valuedI32Fragment = 25, RULE_valuedI64Fragment = 26, 
		RULE_typedefVersionDeclaration = 27, RULE_moduleDeclaration = 28, RULE_useDeclaration = 29, 
		RULE_useTree = 30, RULE_simplePath = 31, RULE_boolLiteral = 32, RULE_charLiteral = 33, 
		RULE_f32Literal = 34, RULE_f64Literal = 35, RULE_u8Literal = 36, RULE_u16Literal = 37, 
		RULE_u32Literal = 38, RULE_u64Literal = 39, RULE_i8Literal = 40, RULE_i16Literal = 41, 
		RULE_i32Literal = 42, RULE_i64Literal = 43, RULE_stringLiteral = 44, RULE_identifier = 45, 
		RULE_keyword = 46;
	private static String[] makeRuleNames() {
		return new String[] {
			"compilationUnit", "maybeValuedSymbolDeclaration", "typeDeclaration", 
			"structDeclaration", "variantDeclaration", "vectorDeclaration", "mapDeclaration", 
			"maybeValuedSymbol", "unvaluedSymbol", "maybeValuedType", "valuedType", 
			"unvaluedType", "primitiveType", "valuedPrimitiveType", "valuedBoolFragment", 
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
			setState(94);
			((CompilationUnitContext)_localctx).typedefVersionDeclaration = typedefVersionDeclaration();
			 ((CompilationUnitContext)_localctx).version =  ((CompilationUnitContext)_localctx).typedefVersionDeclaration->version; 
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
				 ((CompilationUnitContext)_localctx).module =  ((CompilationUnitContext)_localctx).moduleDeclaration->module; 
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
			setState(130);
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
					((CompilationUnitContext)_localctx).typeDeclaration = typeDeclaration();

							TryInsert(_localctx.symbol_table, ((CompilationUnitContext)_localctx).typeDeclaration, this);
						
					}
					} 
				}
				setState(132);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			}
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
			setState(141);
			maybeValuedSymbol();
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
			setState(162);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case KW_STRUCT:
				{
				setState(150);
				((TypeDeclarationContext)_localctx).structDeclaration = structDeclaration();
				 ((TypeDeclarationContext)_localctx).maybe_symbol =  ((TypeDeclarationContext)_localctx).structDeclaration->maybe_symbol; 
				}
				break;
			case KW_VARIANT:
				{
				setState(153);
				((TypeDeclarationContext)_localctx).variantDeclaration = variantDeclaration();
				 ((TypeDeclarationContext)_localctx).maybe_symbol =  ((TypeDeclarationContext)_localctx).variantDeclaration->maybe_symbol; 
				}
				break;
			case KW_VECTOR:
				{
				setState(156);
				((TypeDeclarationContext)_localctx).vectorDeclaration = vectorDeclaration();
				 ((TypeDeclarationContext)_localctx).maybe_symbol =  ((TypeDeclarationContext)_localctx).vectorDeclaration->maybe_symbol; 
				}
				break;
			case KW_MAP:
				{
				setState(159);
				((TypeDeclarationContext)_localctx).mapDeclaration = mapDeclaration();
				 ((TypeDeclarationContext)_localctx).maybe_symbol =  ((TypeDeclarationContext)_localctx).mapDeclaration->maybe_symbol; 
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
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
			setState(172);
			match(KW_STRUCT);
			setState(176);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(173);
				match(WS);
				}
				}
				setState(178);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(179);
			((StructDeclarationContext)_localctx).identifier = identifier();
			setState(183);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(180);
				match(WS);
				}
				}
				setState(185);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(186);
			match(LBRACE);
			setState(210);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 84)) & ~0x3f) == 0 && ((1L << (_la - 84)) & ((1L << (NON_KEYWORD_IDENTIFIER - 84)) | (1L << (WS - 84)) | (1L << (RAW_ESCAPE - 84)))) != 0)) {
				{
				{
				setState(190);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(187);
					match(WS);
					}
					}
					setState(192);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(193);
				((StructDeclarationContext)_localctx).maybeValuedSymbol = maybeValuedSymbol();

								TryInsertSymbol(_localctx.s, this, ((StructDeclarationContext)_localctx).maybeValuedSymbol);
							
				setState(198);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(195);
					match(WS);
					}
					}
					setState(200);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(201);
				match(SEMI);
				setState(205);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(202);
						match(WS);
						}
						} 
					}
					setState(207);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
				}
				}
				}
				setState(212);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(213);
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
			setState(216);
			match(KW_VARIANT);
			setState(220);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(217);
				match(WS);
				}
				}
				setState(222);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(223);
			((VariantDeclarationContext)_localctx).identifier = identifier();
			setState(227);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(224);
				match(WS);
				}
				}
				setState(229);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(230);
			match(LBRACE);
			setState(254);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 84)) & ~0x3f) == 0 && ((1L << (_la - 84)) & ((1L << (NON_KEYWORD_IDENTIFIER - 84)) | (1L << (WS - 84)) | (1L << (RAW_ESCAPE - 84)))) != 0)) {
				{
				{
				setState(234);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(231);
					match(WS);
					}
					}
					setState(236);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(237);
				((VariantDeclarationContext)_localctx).unvaluedSymbol = unvaluedSymbol();

								TryInsertSymbol(_localctx.v, this, ((VariantDeclarationContext)_localctx).unvaluedSymbol);
							
				setState(242);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(239);
					match(WS);
					}
					}
					setState(244);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(245);
				match(SEMI);
				setState(249);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,20,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(246);
						match(WS);
						}
						} 
					}
					setState(251);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,20,_ctx);
				}
				}
				}
				setState(256);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(257);
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
			setState(260);
			match(KW_VECTOR);
			setState(264);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(261);
				match(WS);
				}
				}
				setState(266);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(267);
			((VectorDeclarationContext)_localctx).identifier = identifier();
			setState(271);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(268);
				match(WS);
				}
				}
				setState(273);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(274);
			match(LT);
			setState(278);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(275);
				match(WS);
				}
				}
				setState(280);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(281);
			((VectorDeclarationContext)_localctx).val = ((VectorDeclarationContext)_localctx).unvaluedType = unvaluedType();
			setState(285);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(282);
				match(WS);
				}
				}
				setState(287);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(288);
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
			setState(291);
			match(KW_MAP);
			setState(295);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(292);
				match(WS);
				}
				}
				setState(297);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(298);
			((MapDeclarationContext)_localctx).identifier = identifier();
			setState(302);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(299);
				match(WS);
				}
				}
				setState(304);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(305);
			match(LT);
			setState(309);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(306);
				match(WS);
				}
				}
				setState(311);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(312);
			((MapDeclarationContext)_localctx).key = primitiveType();
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
			setState(319);
			match(COMMA);
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
			((MapDeclarationContext)_localctx).val = unvaluedType();
			setState(330);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(327);
				match(WS);
				}
				}
				setState(332);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(333);
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
		enterRule(_localctx, 14, RULE_maybeValuedSymbol);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(336);
			((MaybeValuedSymbolContext)_localctx).identifier = identifier();
			setState(340);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,32,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(337);
					match(WS);
					}
					} 
				}
				setState(342);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,32,_ctx);
			}
			setState(343);
			((MaybeValuedSymbolContext)_localctx).maybeValuedType = maybeValuedType();
			setState(347);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,33,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(344);
					match(WS);
					}
					} 
				}
				setState(349);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,33,_ctx);
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
		enterRule(_localctx, 16, RULE_unvaluedSymbol);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(352);
			((UnvaluedSymbolContext)_localctx).identifier = identifier();
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
			match(COLON);
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
			((UnvaluedSymbolContext)_localctx).unvaluedType = unvaluedType();
			setState(370);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,36,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(367);
					match(WS);
					}
					} 
				}
				setState(372);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,36,_ctx);
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
		enterRule(_localctx, 18, RULE_maybeValuedType);
		int _la;
		try {
			setState(389);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(375);
				((MaybeValuedTypeContext)_localctx).valuedType = valuedType();
				((MaybeValuedTypeContext)_localctx).maybe_val =  ((MaybeValuedTypeContext)_localctx).valuedType->maybe_val;
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(378);
				match(COLON);
				setState(382);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(379);
					match(WS);
					}
					}
					setState(384);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(385);
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
		enterRule(_localctx, 20, RULE_valuedType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(391);
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
		public IdentifierContext identifier;
		public PrimitiveTypeContext primitiveType() {
			return getRuleContext(PrimitiveTypeContext.class,0);
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
		enterRule(_localctx, 22, RULE_unvaluedType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(400);
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
				setState(394);
				((UnvaluedTypeContext)_localctx).primitiveType = primitiveType();
				((UnvaluedTypeContext)_localctx).maybe_val =  ((UnvaluedTypeContext)_localctx).primitiveType->maybe_val;
				}
				break;
			case NON_KEYWORD_IDENTIFIER:
			case RAW_ESCAPE:
				{
				setState(397);
				((UnvaluedTypeContext)_localctx).identifier = identifier();
				((UnvaluedTypeContext)_localctx).maybe_val =  td::SymbolRef(((UnvaluedTypeContext)_localctx).identifier->id); 
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
			setState(428);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case KW_BOOL:
				enterOuterAlt(_localctx, 1);
				{
				setState(402);
				match(KW_BOOL);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<bool>(); 
				}
				break;
			case KW_CHAR:
				enterOuterAlt(_localctx, 2);
				{
				setState(404);
				match(KW_CHAR);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<char32_t>(); 
				}
				break;
			case KW_STRING:
				enterOuterAlt(_localctx, 3);
				{
				setState(406);
				match(KW_STRING);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<std::string>(); 
				}
				break;
			case KW_F32:
				enterOuterAlt(_localctx, 4);
				{
				setState(408);
				match(KW_F32);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<float>(); 
				}
				break;
			case KW_F64:
				enterOuterAlt(_localctx, 5);
				{
				setState(410);
				match(KW_F64);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<double>(); 
				}
				break;
			case KW_U8:
				enterOuterAlt(_localctx, 6);
				{
				setState(412);
				match(KW_U8);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<uint8_t>(); 
				}
				break;
			case KW_U16:
				enterOuterAlt(_localctx, 7);
				{
				setState(414);
				match(KW_U16);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<uint16_t>(); 
				}
				break;
			case KW_U32:
				enterOuterAlt(_localctx, 8);
				{
				setState(416);
				match(KW_U32);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<uint32_t>(); 
				}
				break;
			case KW_U64:
				enterOuterAlt(_localctx, 9);
				{
				setState(418);
				match(KW_U64);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<uint64_t>(); 
				}
				break;
			case KW_I8:
				enterOuterAlt(_localctx, 10);
				{
				setState(420);
				match(KW_I8);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<int8_t>(); 
				}
				break;
			case KW_I16:
				enterOuterAlt(_localctx, 11);
				{
				setState(422);
				match(KW_I16);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<int16_t>(); 
				}
				break;
			case KW_I32:
				enterOuterAlt(_localctx, 12);
				{
				setState(424);
				match(KW_I32);
				 ((PrimitiveTypeContext)_localctx).maybe_val =  std::optional<int32_t>(); 
				}
				break;
			case KW_I64:
				enterOuterAlt(_localctx, 13);
				{
				setState(426);
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
			setState(469);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,41,_ctx) ) {
			case 1:
				{
				setState(430);
				((ValuedPrimitiveTypeContext)_localctx).valuedBoolFragment = valuedBoolFragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedBoolFragment->literal->maybe_val;
				}
				break;
			case 2:
				{
				setState(433);
				((ValuedPrimitiveTypeContext)_localctx).valuedCharFragment = valuedCharFragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedCharFragment->literal->maybe_val;
				}
				break;
			case 3:
				{
				setState(436);
				((ValuedPrimitiveTypeContext)_localctx).valuedStringFragment = valuedStringFragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedStringFragment->literal->maybe_val;
				}
				break;
			case 4:
				{
				setState(439);
				((ValuedPrimitiveTypeContext)_localctx).valuedF32Fragment = valuedF32Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedF32Fragment->literal->maybe_val;
				}
				break;
			case 5:
				{
				setState(442);
				((ValuedPrimitiveTypeContext)_localctx).valuedF64Fragment = valuedF64Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedF64Fragment->literal->maybe_val;
				}
				break;
			case 6:
				{
				setState(445);
				((ValuedPrimitiveTypeContext)_localctx).valuedU8Fragment = valuedU8Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU8Fragment->literal->maybe_val;
				}
				break;
			case 7:
				{
				setState(448);
				((ValuedPrimitiveTypeContext)_localctx).valuedU16Fragment = valuedU16Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU16Fragment->literal->maybe_val;
				}
				break;
			case 8:
				{
				setState(451);
				((ValuedPrimitiveTypeContext)_localctx).valuedU32Fragment = valuedU32Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU32Fragment->literal->maybe_val;
				}
				break;
			case 9:
				{
				setState(454);
				((ValuedPrimitiveTypeContext)_localctx).valuedU64Fragment = valuedU64Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedU64Fragment->literal->maybe_val;
				}
				break;
			case 10:
				{
				setState(457);
				((ValuedPrimitiveTypeContext)_localctx).valuedI8Fragment = valuedI8Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedI8Fragment->literal->maybe_val;
				}
				break;
			case 11:
				{
				setState(460);
				((ValuedPrimitiveTypeContext)_localctx).valuedI16Fragment = valuedI16Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedI16Fragment->literal->maybe_val;
				}
				break;
			case 12:
				{
				setState(463);
				((ValuedPrimitiveTypeContext)_localctx).valuedI32Fragment = valuedI32Fragment();
				((ValuedPrimitiveTypeContext)_localctx).maybe_val =  ((ValuedPrimitiveTypeContext)_localctx).valuedI32Fragment->literal->maybe_val;
				}
				break;
			case 13:
				{
				setState(466);
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
			setState(479);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(471);
				match(COLON);
				setState(475);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(472);
					match(WS);
					}
					}
					setState(477);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(478);
				match(KW_BOOL);
				}
			}

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
			match(EQ);
			setState(491);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(488);
				match(WS);
				}
				}
				setState(493);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(494);
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
			setState(504);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(496);
				match(COLON);
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
				match(KW_CHAR);
				}
			}

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
			match(EQ);
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
			setState(529);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(521);
				match(COLON);
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
				match(KW_STRING);
				}
			}

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
			match(EQ);
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
			setState(582);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(546);
				match(COLON);
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
				match(KW_F32);
				setState(557);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(554);
					match(WS);
					}
					}
					setState(559);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(560);
				match(EQ);
				setState(564);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(561);
					match(WS);
					}
					}
					setState(566);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(567);
				((ValuedF32FragmentContext)_localctx).literal = f32Literal();
				setState(569);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F32) {
					{
					setState(568);
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
				setState(571);
				match(EQ);
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
				((ValuedF32FragmentContext)_localctx).literal = f32Literal();
				setState(580);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F32) {
					{
					setState(579);
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
				match(KW_F64);
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
				((ValuedF64FragmentContext)_localctx).literal = f64Literal();
				setState(607);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_F64) {
					{
					setState(606);
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
				((ValuedF64FragmentContext)_localctx).literal = f64Literal();
				setState(617);
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
				match(KW_U8);
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
				((ValuedU8FragmentContext)_localctx).literal = u8Literal();
				setState(644);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U8) {
					{
					setState(643);
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
				((ValuedU8FragmentContext)_localctx).literal = u8Literal();
				setState(654);
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
				match(KW_U16);
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
				((ValuedU16FragmentContext)_localctx).literal = u16Literal();
				setState(681);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U16) {
					{
					setState(680);
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
				((ValuedU16FragmentContext)_localctx).literal = u16Literal();
				setState(691);
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
				match(KW_U32);
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
				((ValuedU32FragmentContext)_localctx).literal = u32Literal();
				setState(718);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U32) {
					{
					setState(717);
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
				((ValuedU32FragmentContext)_localctx).literal = u32Literal();
				setState(728);
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
				match(KW_U64);
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
				((ValuedU64FragmentContext)_localctx).literal = u64Literal();
				setState(755);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_U64) {
					{
					setState(754);
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
				((ValuedU64FragmentContext)_localctx).literal = u64Literal();
				setState(765);
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
				match(KW_I8);
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
				((ValuedI8FragmentContext)_localctx).literal = i8Literal();
				setState(792);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I8) {
					{
					setState(791);
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
				((ValuedI8FragmentContext)_localctx).literal = i8Literal();
				setState(802);
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
			setState(841);
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
				match(KW_I16);
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
				((ValuedI16FragmentContext)_localctx).literal = i16Literal();
				setState(829);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I16) {
					{
					setState(828);
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
				((ValuedI16FragmentContext)_localctx).literal = i16Literal();
				setState(839);
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
			setState(879);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COLON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(843);
				match(COLON);
				setState(847);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(844);
					match(WS);
					}
					}
					setState(849);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(850);
				match(KW_I32);
				setState(854);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(851);
					match(WS);
					}
					}
					setState(856);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(857);
				match(EQ);
				setState(861);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(858);
					match(WS);
					}
					}
					setState(863);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(864);
				((ValuedI32FragmentContext)_localctx).literal = i32Literal();
				setState(866);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I32) {
					{
					setState(865);
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
				setState(868);
				match(EQ);
				setState(872);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(869);
					match(WS);
					}
					}
					setState(874);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(875);
				((ValuedI32FragmentContext)_localctx).literal = i32Literal();
				setState(877);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I32) {
					{
					setState(876);
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
				match(KW_I64);
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
				((ValuedI64FragmentContext)_localctx).literal = i64Literal();
				setState(904);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_I64) {
					{
					setState(903);
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
				((ValuedI64FragmentContext)_localctx).literal = i64Literal();
				setState(914);
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
			setState(918);
			match(KW_TYPEDEF);
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
			match(EQ);
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
			((TypedefVersionDeclarationContext)_localctx).identifier = identifier();
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
		enterRule(_localctx, 56, RULE_moduleDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(942);
			match(KW_MODULE);
			setState(944); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(943);
				match(WS);
				}
				}
				setState(946); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==WS );
			setState(948);
			((ModuleDeclarationContext)_localctx).simplePath = simplePath();
			setState(952);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(949);
				match(WS);
				}
				}
				setState(954);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(955);
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
			setState(958);
			match(KW_USE);
			setState(959);
			useTree();
			setState(960);
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
			setState(991);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,128,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(966);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE || _la==PATHSEP) {
					{
					setState(963);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,121,_ctx) ) {
					case 1:
						{
						setState(962);
						simplePath();
						}
						break;
					}
					setState(965);
					match(PATHSEP);
					}
				}

				setState(984);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case STAR:
					{
					setState(968);
					match(STAR);
					}
					break;
				case LBRACE:
					{
					setState(969);
					match(LBRACE);
					setState(981);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (((((_la - 84)) & ~0x3f) == 0 && ((1L << (_la - 84)) & ((1L << (NON_KEYWORD_IDENTIFIER - 84)) | (1L << (RAW_ESCAPE - 84)) | (1L << (STAR - 84)))) != 0) || _la==PATHSEP || _la==LBRACE) {
						{
						setState(970);
						useTree();
						setState(975);
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,123,_ctx);
						while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
							if ( _alt==1 ) {
								{
								{
								setState(971);
								match(COMMA);
								setState(972);
								useTree();
								}
								} 
							}
							setState(977);
							_errHandler.sync(this);
							_alt = getInterpreter().adaptivePredict(_input,123,_ctx);
						}
						setState(979);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(978);
							match(COMMA);
							}
						}

						}
					}

					setState(983);
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
				setState(986);
				simplePath();
				setState(989);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_AS) {
					{
					setState(987);
					match(KW_AS);
					setState(988);
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
			setState(994);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PATHSEP) {
				{
				setState(993);
				match(PATHSEP);
				}
			}

			setState(996);
			((SimplePathContext)_localctx).identifier = identifier();
			_localctx.path.push_back(((SimplePathContext)_localctx).identifier->id);
			setState(1004);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,130,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(998);
					match(PATHSEP);
					setState(999);
					((SimplePathContext)_localctx).identifier = identifier();
					_localctx.path.push_back(((SimplePathContext)_localctx).identifier->id);
					}
					} 
				}
				setState(1006);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,130,_ctx);
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
			setState(1007);
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
			setState(1009);
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
			setState(1012);
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
			setState(1015);
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
			setState(1028);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1019);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1018);
					match(MINUS);
					}
				}

				setState(1021);
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
				setState(1022);
				match(HEX_PREFIX);
				setState(1023);
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
				setState(1024);
				match(OCT_PREFIX);
				setState(1025);
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
				setState(1026);
				match(BIN_PREFIX);
				setState(1027);
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
			setState(1042);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1033);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1032);
					match(MINUS);
					}
				}

				setState(1035);
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
				setState(1036);
				match(HEX_PREFIX);
				setState(1037);
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
				setState(1038);
				match(OCT_PREFIX);
				setState(1039);
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
				setState(1040);
				match(BIN_PREFIX);
				setState(1041);
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
			setState(1056);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1047);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1046);
					match(MINUS);
					}
				}

				setState(1049);
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
				setState(1050);
				match(HEX_PREFIX);
				setState(1051);
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
				setState(1052);
				match(OCT_PREFIX);
				setState(1053);
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
				setState(1054);
				match(BIN_PREFIX);
				setState(1055);
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
			setState(1070);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1061);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1060);
					match(MINUS);
					}
				}

				setState(1063);
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
				setState(1064);
				match(HEX_PREFIX);
				setState(1065);
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
				setState(1066);
				match(OCT_PREFIX);
				setState(1067);
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
				setState(1068);
				match(BIN_PREFIX);
				setState(1069);
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
			setState(1084);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1075);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1074);
					match(MINUS);
					}
				}

				setState(1077);
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
				setState(1078);
				match(HEX_PREFIX);
				setState(1079);
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
				setState(1080);
				match(OCT_PREFIX);
				setState(1081);
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
				setState(1082);
				match(BIN_PREFIX);
				setState(1083);
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
			setState(1098);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1089);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1088);
					match(MINUS);
					}
				}

				setState(1091);
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
				setState(1092);
				match(HEX_PREFIX);
				setState(1093);
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
				setState(1094);
				match(OCT_PREFIX);
				setState(1095);
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
				setState(1096);
				match(BIN_PREFIX);
				setState(1097);
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
			setState(1112);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1103);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1102);
					match(MINUS);
					}
				}

				setState(1105);
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
				setState(1106);
				match(HEX_PREFIX);
				setState(1107);
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
				setState(1108);
				match(OCT_PREFIX);
				setState(1109);
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
				setState(1110);
				match(BIN_PREFIX);
				setState(1111);
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
			setState(1126);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				{
				{
				setState(1117);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(1116);
					match(MINUS);
					}
				}

				setState(1119);
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
				setState(1120);
				match(HEX_PREFIX);
				setState(1121);
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
				setState(1122);
				match(OCT_PREFIX);
				setState(1123);
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
				setState(1124);
				match(BIN_PREFIX);
				setState(1125);
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
			setState(1134);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STRING_LITERAL:
				enterOuterAlt(_localctx, 1);
				{
				setState(1130);
				((StringLiteralContext)_localctx).STRING_LITERAL = match(STRING_LITERAL);

						((StringLiteralContext)_localctx).maybe_val =  GetStringValue(this, ((StringLiteralContext)_localctx).STRING_LITERAL);
					
				}
				break;
			case RAW_STRING_LITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(1132);
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
			setState(1139);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NON_KEYWORD_IDENTIFIER:
				enterOuterAlt(_localctx, 1);
				{
				setState(1136);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(1137);
				match(RAW_ESCAPE);
				setState(1138);
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
			setState(1141);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00a2\u047a\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\3\2\3\2\3\2\7\2d\n\2\f\2\16\2g\13\2\3"+
		"\2\3\2\3\2\5\2l\n\2\3\2\7\2o\n\2\f\2\16\2r\13\2\3\2\7\2u\n\2\f\2\16\2"+
		"x\13\2\3\2\7\2{\n\2\f\2\16\2~\13\2\3\2\3\2\3\2\7\2\u0083\n\2\f\2\16\2"+
		"\u0086\13\2\3\2\7\2\u0089\n\2\f\2\16\2\u008c\13\2\3\2\3\2\3\3\3\3\7\3"+
		"\u0092\n\3\f\3\16\3\u0095\13\3\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4"+
		"\3\4\3\4\3\4\3\4\5\4\u00a5\n\4\3\4\7\4\u00a8\n\4\f\4\16\4\u00ab\13\4\3"+
		"\4\3\4\3\5\3\5\7\5\u00b1\n\5\f\5\16\5\u00b4\13\5\3\5\3\5\7\5\u00b8\n\5"+
		"\f\5\16\5\u00bb\13\5\3\5\3\5\7\5\u00bf\n\5\f\5\16\5\u00c2\13\5\3\5\3\5"+
		"\3\5\7\5\u00c7\n\5\f\5\16\5\u00ca\13\5\3\5\3\5\7\5\u00ce\n\5\f\5\16\5"+
		"\u00d1\13\5\7\5\u00d3\n\5\f\5\16\5\u00d6\13\5\3\5\3\5\3\5\3\6\3\6\7\6"+
		"\u00dd\n\6\f\6\16\6\u00e0\13\6\3\6\3\6\7\6\u00e4\n\6\f\6\16\6\u00e7\13"+
		"\6\3\6\3\6\7\6\u00eb\n\6\f\6\16\6\u00ee\13\6\3\6\3\6\3\6\7\6\u00f3\n\6"+
		"\f\6\16\6\u00f6\13\6\3\6\3\6\7\6\u00fa\n\6\f\6\16\6\u00fd\13\6\7\6\u00ff"+
		"\n\6\f\6\16\6\u0102\13\6\3\6\3\6\3\6\3\7\3\7\7\7\u0109\n\7\f\7\16\7\u010c"+
		"\13\7\3\7\3\7\7\7\u0110\n\7\f\7\16\7\u0113\13\7\3\7\3\7\7\7\u0117\n\7"+
		"\f\7\16\7\u011a\13\7\3\7\3\7\7\7\u011e\n\7\f\7\16\7\u0121\13\7\3\7\3\7"+
		"\3\7\3\b\3\b\7\b\u0128\n\b\f\b\16\b\u012b\13\b\3\b\3\b\7\b\u012f\n\b\f"+
		"\b\16\b\u0132\13\b\3\b\3\b\7\b\u0136\n\b\f\b\16\b\u0139\13\b\3\b\3\b\7"+
		"\b\u013d\n\b\f\b\16\b\u0140\13\b\3\b\3\b\7\b\u0144\n\b\f\b\16\b\u0147"+
		"\13\b\3\b\3\b\7\b\u014b\n\b\f\b\16\b\u014e\13\b\3\b\3\b\3\b\3\t\3\t\7"+
		"\t\u0155\n\t\f\t\16\t\u0158\13\t\3\t\3\t\7\t\u015c\n\t\f\t\16\t\u015f"+
		"\13\t\3\t\3\t\3\n\3\n\7\n\u0165\n\n\f\n\16\n\u0168\13\n\3\n\3\n\7\n\u016c"+
		"\n\n\f\n\16\n\u016f\13\n\3\n\3\n\7\n\u0173\n\n\f\n\16\n\u0176\13\n\3\n"+
		"\3\n\3\13\3\13\3\13\3\13\3\13\7\13\u017f\n\13\f\13\16\13\u0182\13\13\3"+
		"\13\3\13\3\13\3\13\5\13\u0188\n\13\3\f\3\f\3\f\3\r\3\r\3\r\3\r\3\r\3\r"+
		"\5\r\u0193\n\r\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16"+
		"\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16"+
		"\3\16\5\16\u01af\n\16\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17"+
		"\3\17\5\17\u01d8\n\17\3\20\3\20\7\20\u01dc\n\20\f\20\16\20\u01df\13\20"+
		"\3\20\5\20\u01e2\n\20\3\20\7\20\u01e5\n\20\f\20\16\20\u01e8\13\20\3\20"+
		"\3\20\7\20\u01ec\n\20\f\20\16\20\u01ef\13\20\3\20\3\20\3\21\3\21\7\21"+
		"\u01f5\n\21\f\21\16\21\u01f8\13\21\3\21\5\21\u01fb\n\21\3\21\7\21\u01fe"+
		"\n\21\f\21\16\21\u0201\13\21\3\21\3\21\7\21\u0205\n\21\f\21\16\21\u0208"+
		"\13\21\3\21\3\21\3\22\3\22\7\22\u020e\n\22\f\22\16\22\u0211\13\22\3\22"+
		"\5\22\u0214\n\22\3\22\7\22\u0217\n\22\f\22\16\22\u021a\13\22\3\22\3\22"+
		"\7\22\u021e\n\22\f\22\16\22\u0221\13\22\3\22\3\22\3\23\3\23\7\23\u0227"+
		"\n\23\f\23\16\23\u022a\13\23\3\23\3\23\7\23\u022e\n\23\f\23\16\23\u0231"+
		"\13\23\3\23\3\23\7\23\u0235\n\23\f\23\16\23\u0238\13\23\3\23\3\23\5\23"+
		"\u023c\n\23\3\23\3\23\7\23\u0240\n\23\f\23\16\23\u0243\13\23\3\23\3\23"+
		"\5\23\u0247\n\23\5\23\u0249\n\23\3\24\3\24\7\24\u024d\n\24\f\24\16\24"+
		"\u0250\13\24\3\24\3\24\7\24\u0254\n\24\f\24\16\24\u0257\13\24\3\24\3\24"+
		"\7\24\u025b\n\24\f\24\16\24\u025e\13\24\3\24\3\24\5\24\u0262\n\24\3\24"+
		"\3\24\7\24\u0266\n\24\f\24\16\24\u0269\13\24\3\24\3\24\3\24\5\24\u026e"+
		"\n\24\3\25\3\25\7\25\u0272\n\25\f\25\16\25\u0275\13\25\3\25\3\25\7\25"+
		"\u0279\n\25\f\25\16\25\u027c\13\25\3\25\3\25\7\25\u0280\n\25\f\25\16\25"+
		"\u0283\13\25\3\25\3\25\5\25\u0287\n\25\3\25\3\25\7\25\u028b\n\25\f\25"+
		"\16\25\u028e\13\25\3\25\3\25\3\25\5\25\u0293\n\25\3\26\3\26\7\26\u0297"+
		"\n\26\f\26\16\26\u029a\13\26\3\26\3\26\7\26\u029e\n\26\f\26\16\26\u02a1"+
		"\13\26\3\26\3\26\7\26\u02a5\n\26\f\26\16\26\u02a8\13\26\3\26\3\26\5\26"+
		"\u02ac\n\26\3\26\3\26\7\26\u02b0\n\26\f\26\16\26\u02b3\13\26\3\26\3\26"+
		"\3\26\5\26\u02b8\n\26\3\27\3\27\7\27\u02bc\n\27\f\27\16\27\u02bf\13\27"+
		"\3\27\3\27\7\27\u02c3\n\27\f\27\16\27\u02c6\13\27\3\27\3\27\7\27\u02ca"+
		"\n\27\f\27\16\27\u02cd\13\27\3\27\3\27\5\27\u02d1\n\27\3\27\3\27\7\27"+
		"\u02d5\n\27\f\27\16\27\u02d8\13\27\3\27\3\27\3\27\5\27\u02dd\n\27\3\30"+
		"\3\30\7\30\u02e1\n\30\f\30\16\30\u02e4\13\30\3\30\3\30\7\30\u02e8\n\30"+
		"\f\30\16\30\u02eb\13\30\3\30\3\30\7\30\u02ef\n\30\f\30\16\30\u02f2\13"+
		"\30\3\30\3\30\5\30\u02f6\n\30\3\30\3\30\7\30\u02fa\n\30\f\30\16\30\u02fd"+
		"\13\30\3\30\3\30\3\30\5\30\u0302\n\30\3\31\3\31\7\31\u0306\n\31\f\31\16"+
		"\31\u0309\13\31\3\31\3\31\7\31\u030d\n\31\f\31\16\31\u0310\13\31\3\31"+
		"\3\31\7\31\u0314\n\31\f\31\16\31\u0317\13\31\3\31\3\31\5\31\u031b\n\31"+
		"\3\31\3\31\7\31\u031f\n\31\f\31\16\31\u0322\13\31\3\31\3\31\3\31\5\31"+
		"\u0327\n\31\3\32\3\32\7\32\u032b\n\32\f\32\16\32\u032e\13\32\3\32\3\32"+
		"\7\32\u0332\n\32\f\32\16\32\u0335\13\32\3\32\3\32\7\32\u0339\n\32\f\32"+
		"\16\32\u033c\13\32\3\32\3\32\5\32\u0340\n\32\3\32\3\32\7\32\u0344\n\32"+
		"\f\32\16\32\u0347\13\32\3\32\3\32\3\32\5\32\u034c\n\32\3\33\3\33\7\33"+
		"\u0350\n\33\f\33\16\33\u0353\13\33\3\33\3\33\7\33\u0357\n\33\f\33\16\33"+
		"\u035a\13\33\3\33\3\33\7\33\u035e\n\33\f\33\16\33\u0361\13\33\3\33\3\33"+
		"\5\33\u0365\n\33\3\33\3\33\7\33\u0369\n\33\f\33\16\33\u036c\13\33\3\33"+
		"\3\33\5\33\u0370\n\33\5\33\u0372\n\33\3\34\3\34\7\34\u0376\n\34\f\34\16"+
		"\34\u0379\13\34\3\34\3\34\7\34\u037d\n\34\f\34\16\34\u0380\13\34\3\34"+
		"\3\34\7\34\u0384\n\34\f\34\16\34\u0387\13\34\3\34\3\34\5\34\u038b\n\34"+
		"\3\34\3\34\7\34\u038f\n\34\f\34\16\34\u0392\13\34\3\34\3\34\3\34\5\34"+
		"\u0397\n\34\3\35\3\35\7\35\u039b\n\35\f\35\16\35\u039e\13\35\3\35\3\35"+
		"\7\35\u03a2\n\35\f\35\16\35\u03a5\13\35\3\35\3\35\7\35\u03a9\n\35\f\35"+
		"\16\35\u03ac\13\35\3\35\3\35\3\35\3\36\3\36\6\36\u03b3\n\36\r\36\16\36"+
		"\u03b4\3\36\3\36\7\36\u03b9\n\36\f\36\16\36\u03bc\13\36\3\36\3\36\3\36"+
		"\3\37\3\37\3\37\3\37\3 \5 \u03c6\n \3 \5 \u03c9\n \3 \3 \3 \3 \3 \7 \u03d0"+
		"\n \f \16 \u03d3\13 \3 \5 \u03d6\n \5 \u03d8\n \3 \5 \u03db\n \3 \3 \3"+
		" \5 \u03e0\n \5 \u03e2\n \3!\5!\u03e5\n!\3!\3!\3!\3!\3!\3!\7!\u03ed\n"+
		"!\f!\16!\u03f0\13!\3\"\3\"\3#\3#\3#\3$\3$\3$\3%\3%\3%\3&\5&\u03fe\n&\3"+
		"&\3&\3&\3&\3&\3&\3&\5&\u0407\n&\3&\3&\3\'\5\'\u040c\n\'\3\'\3\'\3\'\3"+
		"\'\3\'\3\'\3\'\5\'\u0415\n\'\3\'\3\'\3(\5(\u041a\n(\3(\3(\3(\3(\3(\3("+
		"\3(\5(\u0423\n(\3(\3(\3)\5)\u0428\n)\3)\3)\3)\3)\3)\3)\3)\5)\u0431\n)"+
		"\3)\3)\3*\5*\u0436\n*\3*\3*\3*\3*\3*\3*\3*\5*\u043f\n*\3*\3*\3+\5+\u0444"+
		"\n+\3+\3+\3+\3+\3+\3+\3+\5+\u044d\n+\3+\3+\3,\5,\u0452\n,\3,\3,\3,\3,"+
		"\3,\3,\3,\5,\u045b\n,\3,\3,\3-\5-\u0460\n-\3-\3-\3-\3-\3-\3-\3-\5-\u0469"+
		"\n-\3-\3-\3.\3.\3.\3.\5.\u0471\n.\3/\3/\3/\5/\u0476\n/\3\60\3\60\3\60"+
		"\2\2\61\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:"+
		"<>@BDFHJLNPRTVXZ\\^\2\b\4\2\6\6\f\f\3\2cd\3\2ef\3\2gh\3\2ij\4\2\4\b\n"+
		"H\2\u0507\2`\3\2\2\2\4\u008f\3\2\2\2\6\u00a4\3\2\2\2\b\u00ae\3\2\2\2\n"+
		"\u00da\3\2\2\2\f\u0106\3\2\2\2\16\u0125\3\2\2\2\20\u0152\3\2\2\2\22\u0162"+
		"\3\2\2\2\24\u0187\3\2\2\2\26\u0189\3\2\2\2\30\u0192\3\2\2\2\32\u01ae\3"+
		"\2\2\2\34\u01d7\3\2\2\2\36\u01e1\3\2\2\2 \u01fa\3\2\2\2\"\u0213\3\2\2"+
		"\2$\u0248\3\2\2\2&\u026d\3\2\2\2(\u0292\3\2\2\2*\u02b7\3\2\2\2,\u02dc"+
		"\3\2\2\2.\u0301\3\2\2\2\60\u0326\3\2\2\2\62\u034b\3\2\2\2\64\u0371\3\2"+
		"\2\2\66\u0396\3\2\2\28\u0398\3\2\2\2:\u03b0\3\2\2\2<\u03c0\3\2\2\2>\u03e1"+
		"\3\2\2\2@\u03e4\3\2\2\2B\u03f1\3\2\2\2D\u03f3\3\2\2\2F\u03f6\3\2\2\2H"+
		"\u03f9\3\2\2\2J\u0406\3\2\2\2L\u0414\3\2\2\2N\u0422\3\2\2\2P\u0430\3\2"+
		"\2\2R\u043e\3\2\2\2T\u044c\3\2\2\2V\u045a\3\2\2\2X\u0468\3\2\2\2Z\u0470"+
		"\3\2\2\2\\\u0475\3\2\2\2^\u0477\3\2\2\2`a\58\35\2ae\b\2\1\2bd\7_\2\2c"+
		"b\3\2\2\2dg\3\2\2\2ec\3\2\2\2ef\3\2\2\2fk\3\2\2\2ge\3\2\2\2hi\5:\36\2"+
		"ij\b\2\1\2jl\3\2\2\2kh\3\2\2\2kl\3\2\2\2lv\3\2\2\2mo\7_\2\2nm\3\2\2\2"+
		"or\3\2\2\2pn\3\2\2\2pq\3\2\2\2qs\3\2\2\2rp\3\2\2\2su\5<\37\2tp\3\2\2\2"+
		"ux\3\2\2\2vt\3\2\2\2vw\3\2\2\2w\u0084\3\2\2\2xv\3\2\2\2y{\7_\2\2zy\3\2"+
		"\2\2{~\3\2\2\2|z\3\2\2\2|}\3\2\2\2}\177\3\2\2\2~|\3\2\2\2\177\u0080\5"+
		"\6\4\2\u0080\u0081\b\2\1\2\u0081\u0083\3\2\2\2\u0082|\3\2\2\2\u0083\u0086"+
		"\3\2\2\2\u0084\u0082\3\2\2\2\u0084\u0085\3\2\2\2\u0085\u008a\3\2\2\2\u0086"+
		"\u0084\3\2\2\2\u0087\u0089\7_\2\2\u0088\u0087\3\2\2\2\u0089\u008c\3\2"+
		"\2\2\u008a\u0088\3\2\2\2\u008a\u008b\3\2\2\2\u008b\u008d\3\2\2\2\u008c"+
		"\u008a\3\2\2\2\u008d\u008e\7\2\2\3\u008e\3\3\2\2\2\u008f\u0093\5\20\t"+
		"\2\u0090\u0092\7_\2\2\u0091\u0090\3\2\2\2\u0092\u0095\3\2\2\2\u0093\u0091"+
		"\3\2\2\2\u0093\u0094\3\2\2\2\u0094\u0096\3\2\2\2\u0095\u0093\3\2\2\2\u0096"+
		"\u0097\7\u0095\2\2\u0097\5\3\2\2\2\u0098\u0099\5\b\5\2\u0099\u009a\b\4"+
		"\1\2\u009a\u00a5\3\2\2\2\u009b\u009c\5\n\6\2\u009c\u009d\b\4\1\2\u009d"+
		"\u00a5\3\2\2\2\u009e\u009f\5\f\7\2\u009f\u00a0\b\4\1\2\u00a0\u00a5\3\2"+
		"\2\2\u00a1\u00a2\5\16\b\2\u00a2\u00a3\b\4\1\2\u00a3\u00a5\3\2\2\2\u00a4"+
		"\u0098\3\2\2\2\u00a4\u009b\3\2\2\2\u00a4\u009e\3\2\2\2\u00a4\u00a1\3\2"+
		"\2\2\u00a5\u00a9\3\2\2\2\u00a6\u00a8\7_\2\2\u00a7\u00a6\3\2\2\2\u00a8"+
		"\u00ab\3\2\2\2\u00a9\u00a7\3\2\2\2\u00a9\u00aa\3\2\2\2\u00aa\u00ac\3\2"+
		"\2\2\u00ab\u00a9\3\2\2\2\u00ac\u00ad\7\u0095\2\2\u00ad\7\3\2\2\2\u00ae"+
		"\u00b2\7\13\2\2\u00af\u00b1\7_\2\2\u00b0\u00af\3\2\2\2\u00b1\u00b4\3\2"+
		"\2\2\u00b2\u00b0\3\2\2\2\u00b2\u00b3\3\2\2\2\u00b3\u00b5\3\2\2\2\u00b4"+
		"\u00b2\3\2\2\2\u00b5\u00b9\5\\/\2\u00b6\u00b8\7_\2\2\u00b7\u00b6\3\2\2"+
		"\2\u00b8\u00bb\3\2\2\2\u00b9\u00b7\3\2\2\2\u00b9\u00ba\3\2\2\2\u00ba\u00bc"+
		"\3\2\2\2\u00bb\u00b9\3\2\2\2\u00bc\u00d4\7\u009d\2\2\u00bd\u00bf\7_\2"+
		"\2\u00be\u00bd\3\2\2\2\u00bf\u00c2\3\2\2\2\u00c0\u00be\3\2\2\2\u00c0\u00c1"+
		"\3\2\2\2\u00c1\u00c3\3\2\2\2\u00c2\u00c0\3\2\2\2\u00c3\u00c4\5\20\t\2"+
		"\u00c4\u00c8\b\5\1\2\u00c5\u00c7\7_\2\2\u00c6\u00c5\3\2\2\2\u00c7\u00ca"+
		"\3\2\2\2\u00c8\u00c6\3\2\2\2\u00c8\u00c9\3\2\2\2\u00c9\u00cb\3\2\2\2\u00ca"+
		"\u00c8\3\2\2\2\u00cb\u00cf\7\u0095\2\2\u00cc\u00ce\7_\2\2\u00cd\u00cc"+
		"\3\2\2\2\u00ce\u00d1\3\2\2\2\u00cf\u00cd\3\2\2\2\u00cf\u00d0\3\2\2\2\u00d0"+
		"\u00d3\3\2\2\2\u00d1\u00cf\3\2\2\2\u00d2\u00c0\3\2\2\2\u00d3\u00d6\3\2"+
		"\2\2\u00d4\u00d2\3\2\2\2\u00d4\u00d5\3\2\2\2\u00d5\u00d7\3\2\2\2\u00d6"+
		"\u00d4\3\2\2\2\u00d7\u00d8\7\u009e\2\2\u00d8\u00d9\b\5\1\2\u00d9\t\3\2"+
		"\2\2\u00da\u00de\7\20\2\2\u00db\u00dd\7_\2\2\u00dc\u00db\3\2\2\2\u00dd"+
		"\u00e0\3\2\2\2\u00de\u00dc\3\2\2\2\u00de\u00df\3\2\2\2\u00df\u00e1\3\2"+
		"\2\2\u00e0\u00de\3\2\2\2\u00e1\u00e5\5\\/\2\u00e2\u00e4\7_\2\2\u00e3\u00e2"+
		"\3\2\2\2\u00e4\u00e7\3\2\2\2\u00e5\u00e3\3\2\2\2\u00e5\u00e6\3\2\2\2\u00e6"+
		"\u00e8\3\2\2\2\u00e7\u00e5\3\2\2\2\u00e8\u0100\7\u009d\2\2\u00e9\u00eb"+
		"\7_\2\2\u00ea\u00e9\3\2\2\2\u00eb\u00ee\3\2\2\2\u00ec\u00ea\3\2\2\2\u00ec"+
		"\u00ed\3\2\2\2\u00ed\u00ef\3\2\2\2\u00ee\u00ec\3\2\2\2\u00ef\u00f0\5\22"+
		"\n\2\u00f0\u00f4\b\6\1\2\u00f1\u00f3\7_\2\2\u00f2\u00f1\3\2\2\2\u00f3"+
		"\u00f6\3\2\2\2\u00f4\u00f2\3\2\2\2\u00f4\u00f5\3\2\2\2\u00f5\u00f7\3\2"+
		"\2\2\u00f6\u00f4\3\2\2\2\u00f7\u00fb\7\u0095\2\2\u00f8\u00fa\7_\2\2\u00f9"+
		"\u00f8\3\2\2\2\u00fa\u00fd\3\2\2\2\u00fb\u00f9\3\2\2\2\u00fb\u00fc\3\2"+
		"\2\2\u00fc\u00ff\3\2\2\2\u00fd\u00fb\3\2\2\2\u00fe\u00ec\3\2\2\2\u00ff"+
		"\u0102\3\2\2\2\u0100\u00fe\3\2\2\2\u0100\u0101\3\2\2\2\u0101\u0103\3\2"+
		"\2\2\u0102\u0100\3\2\2\2\u0103\u0104\7\u009e\2\2\u0104\u0105\b\6\1\2\u0105"+
		"\13\3\2\2\2\u0106\u010a\7\21\2\2\u0107\u0109\7_\2\2\u0108\u0107\3\2\2"+
		"\2\u0109\u010c\3\2\2\2\u010a\u0108\3\2\2\2\u010a\u010b\3\2\2\2\u010b\u010d"+
		"\3\2\2\2\u010c\u010a\3\2\2\2\u010d\u0111\5\\/\2\u010e\u0110\7_\2\2\u010f"+
		"\u010e\3\2\2\2\u0110\u0113\3\2\2\2\u0111\u010f\3\2\2\2\u0111\u0112\3\2"+
		"\2\2\u0112\u0114\3\2\2\2\u0113\u0111\3\2\2\2\u0114\u0118\7\u008c\2\2\u0115"+
		"\u0117\7_\2\2\u0116\u0115\3\2\2\2\u0117\u011a\3\2\2\2\u0118\u0116\3\2"+
		"\2\2\u0118\u0119\3\2\2\2\u0119\u011b\3\2\2\2\u011a\u0118\3\2\2\2\u011b"+
		"\u011f\5\30\r\2\u011c\u011e\7_\2\2\u011d\u011c\3\2\2\2\u011e\u0121\3\2"+
		"\2\2\u011f\u011d\3\2\2\2\u011f\u0120\3\2\2\2\u0120\u0122\3\2\2\2\u0121"+
		"\u011f\3\2\2\2\u0122\u0123\7\u008b\2\2\u0123\u0124\b\7\1\2\u0124\r\3\2"+
		"\2\2\u0125\u0129\7\22\2\2\u0126\u0128\7_\2\2\u0127\u0126\3\2\2\2\u0128"+
		"\u012b\3\2\2\2\u0129\u0127\3\2\2\2\u0129\u012a\3\2\2\2\u012a\u012c\3\2"+
		"\2\2\u012b\u0129\3\2\2\2\u012c\u0130\5\\/\2\u012d\u012f\7_\2\2\u012e\u012d"+
		"\3\2\2\2\u012f\u0132\3\2\2\2\u0130\u012e\3\2\2\2\u0130\u0131\3\2\2\2\u0131"+
		"\u0133\3\2\2\2\u0132\u0130\3\2\2\2\u0133\u0137\7\u008c\2\2\u0134\u0136"+
		"\7_\2\2\u0135\u0134\3\2\2\2\u0136\u0139\3\2\2\2\u0137\u0135\3\2\2\2\u0137"+
		"\u0138\3\2\2\2\u0138\u013a\3\2\2\2\u0139\u0137\3\2\2\2\u013a\u013e\5\32"+
		"\16\2\u013b\u013d\7_\2\2\u013c\u013b\3\2\2\2\u013d\u0140\3\2\2\2\u013e"+
		"\u013c\3\2\2\2\u013e\u013f\3\2\2\2\u013f\u0141\3\2\2\2\u0140\u013e\3\2"+
		"\2\2\u0141\u0145\7\u0094\2\2\u0142\u0144\7_\2\2\u0143\u0142\3\2\2\2\u0144"+
		"\u0147\3\2\2\2\u0145\u0143\3\2\2\2\u0145\u0146\3\2\2\2\u0146\u0148\3\2"+
		"\2\2\u0147\u0145\3\2\2\2\u0148\u014c\5\30\r\2\u0149\u014b\7_\2\2\u014a"+
		"\u0149\3\2\2\2\u014b\u014e\3\2\2\2\u014c\u014a\3\2\2\2\u014c\u014d\3\2"+
		"\2\2\u014d\u014f\3\2\2\2\u014e\u014c\3\2\2\2\u014f\u0150\7\u008b\2\2\u0150"+
		"\u0151\b\b\1\2\u0151\17\3\2\2\2\u0152\u0156\5\\/\2\u0153\u0155\7_\2\2"+
		"\u0154\u0153\3\2\2\2\u0155\u0158\3\2\2\2\u0156\u0154\3\2\2\2\u0156\u0157"+
		"\3\2\2\2\u0157\u0159\3\2\2\2\u0158\u0156\3\2\2\2\u0159\u015d\5\24\13\2"+
		"\u015a\u015c\7_\2\2\u015b\u015a\3\2\2\2\u015c\u015f\3\2\2\2\u015d\u015b"+
		"\3\2\2\2\u015d\u015e\3\2\2\2\u015e\u0160\3\2\2\2\u015f\u015d\3\2\2\2\u0160"+
		"\u0161\b\t\1\2\u0161\21\3\2\2\2\u0162\u0166\5\\/\2\u0163\u0165\7_\2\2"+
		"\u0164\u0163\3\2\2\2\u0165\u0168\3\2\2\2\u0166\u0164\3\2\2\2\u0166\u0167"+
		"\3\2\2\2\u0167\u0169\3\2\2\2\u0168\u0166\3\2\2\2\u0169\u016d\7\u0096\2"+
		"\2\u016a\u016c\7_\2\2\u016b\u016a\3\2\2\2\u016c\u016f\3\2\2\2\u016d\u016b"+
		"\3\2\2\2\u016d\u016e\3\2\2\2\u016e\u0170\3\2\2\2\u016f\u016d\3\2\2\2\u0170"+
		"\u0174\5\30\r\2\u0171\u0173\7_\2\2\u0172\u0171\3\2\2\2\u0173\u0176\3\2"+
		"\2\2\u0174\u0172\3\2\2\2\u0174\u0175\3\2\2\2\u0175\u0177\3\2\2\2\u0176"+
		"\u0174\3\2\2\2\u0177\u0178\b\n\1\2\u0178\23\3\2\2\2\u0179\u017a\5\26\f"+
		"\2\u017a\u017b\b\13\1\2\u017b\u0188\3\2\2\2\u017c\u0180\7\u0096\2\2\u017d"+
		"\u017f\7_\2\2\u017e\u017d\3\2\2\2\u017f\u0182\3\2\2\2\u0180\u017e\3\2"+
		"\2\2\u0180\u0181\3\2\2\2\u0181\u0183\3\2\2\2\u0182\u0180\3\2\2\2\u0183"+
		"\u0184\5\30\r\2\u0184\u0185\3\2\2\2\u0185\u0186\b\13\1\2\u0186\u0188\3"+
		"\2\2\2\u0187\u0179\3\2\2\2\u0187\u017c\3\2\2\2\u0188\25\3\2\2\2\u0189"+
		"\u018a\5\34\17\2\u018a\u018b\b\f\1\2\u018b\27\3\2\2\2\u018c\u018d\5\32"+
		"\16\2\u018d\u018e\b\r\1\2\u018e\u0193\3\2\2\2\u018f\u0190\5\\/\2\u0190"+
		"\u0191\b\r\1\2\u0191\u0193\3\2\2\2\u0192\u018c\3\2\2\2\u0192\u018f\3\2"+
		"\2\2\u0193\31\3\2\2\2\u0194\u0195\7I\2\2\u0195\u01af\b\16\1\2\u0196\u0197"+
		"\7J\2\2\u0197\u01af\b\16\1\2\u0198\u0199\7K\2\2\u0199\u01af\b\16\1\2\u019a"+
		"\u019b\7L\2\2\u019b\u01af\b\16\1\2\u019c\u019d\7M\2\2\u019d\u01af\b\16"+
		"\1\2\u019e\u019f\7N\2\2\u019f\u01af\b\16\1\2\u01a0\u01a1\7O\2\2\u01a1"+
		"\u01af\b\16\1\2\u01a2\u01a3\7P\2\2\u01a3\u01af\b\16\1\2\u01a4\u01a5\7"+
		"Q\2\2\u01a5\u01af\b\16\1\2\u01a6\u01a7\7R\2\2\u01a7\u01af\b\16\1\2\u01a8"+
		"\u01a9\7S\2\2\u01a9\u01af\b\16\1\2\u01aa\u01ab\7T\2\2\u01ab\u01af\b\16"+
		"\1\2\u01ac\u01ad\7U\2\2\u01ad\u01af\b\16\1\2\u01ae\u0194\3\2\2\2\u01ae"+
		"\u0196\3\2\2\2\u01ae\u0198\3\2\2\2\u01ae\u019a\3\2\2\2\u01ae\u019c\3\2"+
		"\2\2\u01ae\u019e\3\2\2\2\u01ae\u01a0\3\2\2\2\u01ae\u01a2\3\2\2\2\u01ae"+
		"\u01a4\3\2\2\2\u01ae\u01a6\3\2\2\2\u01ae\u01a8\3\2\2\2\u01ae\u01aa\3\2"+
		"\2\2\u01ae\u01ac\3\2\2\2\u01af\33\3\2\2\2\u01b0\u01b1\5\36\20\2\u01b1"+
		"\u01b2\b\17\1\2\u01b2\u01d8\3\2\2\2\u01b3\u01b4\5 \21\2\u01b4\u01b5\b"+
		"\17\1\2\u01b5\u01d8\3\2\2\2\u01b6\u01b7\5\"\22\2\u01b7\u01b8\b\17\1\2"+
		"\u01b8\u01d8\3\2\2\2\u01b9\u01ba\5$\23\2\u01ba\u01bb\b\17\1\2\u01bb\u01d8"+
		"\3\2\2\2\u01bc\u01bd\5&\24\2\u01bd\u01be\b\17\1\2\u01be\u01d8\3\2\2\2"+
		"\u01bf\u01c0\5(\25\2\u01c0\u01c1\b\17\1\2\u01c1\u01d8\3\2\2\2\u01c2\u01c3"+
		"\5*\26\2\u01c3\u01c4\b\17\1\2\u01c4\u01d8\3\2\2\2\u01c5\u01c6\5,\27\2"+
		"\u01c6\u01c7\b\17\1\2\u01c7\u01d8\3\2\2\2\u01c8\u01c9\5.\30\2\u01c9\u01ca"+
		"\b\17\1\2\u01ca\u01d8\3\2\2\2\u01cb\u01cc\5\60\31\2\u01cc\u01cd\b\17\1"+
		"\2\u01cd\u01d8\3\2\2\2\u01ce\u01cf\5\62\32\2\u01cf\u01d0\b\17\1\2\u01d0"+
		"\u01d8\3\2\2\2\u01d1\u01d2\5\64\33\2\u01d2\u01d3\b\17\1\2\u01d3\u01d8"+
		"\3\2\2\2\u01d4\u01d5\5\66\34\2\u01d5\u01d6\b\17\1\2\u01d6\u01d8\3\2\2"+
		"\2\u01d7\u01b0\3\2\2\2\u01d7\u01b3\3\2\2\2\u01d7\u01b6\3\2\2\2\u01d7\u01b9"+
		"\3\2\2\2\u01d7\u01bc\3\2\2\2\u01d7\u01bf\3\2\2\2\u01d7\u01c2\3\2\2\2\u01d7"+
		"\u01c5\3\2\2\2\u01d7\u01c8\3\2\2\2\u01d7\u01cb\3\2\2\2\u01d7\u01ce\3\2"+
		"\2\2\u01d7\u01d1\3\2\2\2\u01d7\u01d4\3\2\2\2\u01d8\35\3\2\2\2\u01d9\u01dd"+
		"\7\u0096\2\2\u01da\u01dc\7_\2\2\u01db\u01da\3\2\2\2\u01dc\u01df\3\2\2"+
		"\2\u01dd\u01db\3\2\2\2\u01dd\u01de\3\2\2\2\u01de\u01e0\3\2\2\2\u01df\u01dd"+
		"\3\2\2\2\u01e0\u01e2\7I\2\2\u01e1\u01d9\3\2\2\2\u01e1\u01e2\3\2\2\2\u01e2"+
		"\u01e6\3\2\2\2\u01e3\u01e5\7_\2\2\u01e4\u01e3\3\2\2\2\u01e5\u01e8\3\2"+
		"\2\2\u01e6\u01e4\3\2\2\2\u01e6\u01e7\3\2\2\2\u01e7\u01e9\3\2\2\2\u01e8"+
		"\u01e6\3\2\2\2\u01e9\u01ed\7\u0088\2\2\u01ea\u01ec\7_\2\2\u01eb\u01ea"+
		"\3\2\2\2\u01ec\u01ef\3\2\2\2\u01ed\u01eb\3\2\2\2\u01ed\u01ee\3\2\2\2\u01ee"+
		"\u01f0\3\2\2\2\u01ef\u01ed\3\2\2\2\u01f0\u01f1\5B\"\2\u01f1\37\3\2\2\2"+
		"\u01f2\u01f6\7\u0096\2\2\u01f3\u01f5\7_\2\2\u01f4\u01f3\3\2\2\2\u01f5"+
		"\u01f8\3\2\2\2\u01f6\u01f4\3\2\2\2\u01f6\u01f7\3\2\2\2\u01f7\u01f9\3\2"+
		"\2\2\u01f8\u01f6\3\2\2\2\u01f9\u01fb\7J\2\2\u01fa\u01f2\3\2\2\2\u01fa"+
		"\u01fb\3\2\2\2\u01fb\u01ff\3\2\2\2\u01fc\u01fe\7_\2\2\u01fd\u01fc\3\2"+
		"\2\2\u01fe\u0201\3\2\2\2\u01ff\u01fd\3\2\2\2\u01ff\u0200\3\2\2\2\u0200"+
		"\u0202\3\2\2\2\u0201\u01ff\3\2\2\2\u0202\u0206\7\u0088\2\2\u0203\u0205"+
		"\7_\2\2\u0204\u0203\3\2\2\2\u0205\u0208\3\2\2\2\u0206\u0204\3\2\2\2\u0206"+
		"\u0207\3\2\2\2\u0207\u0209\3\2\2\2\u0208\u0206\3\2\2\2\u0209\u020a\5D"+
		"#\2\u020a!\3\2\2\2\u020b\u020f\7\u0096\2\2\u020c\u020e\7_\2\2\u020d\u020c"+
		"\3\2\2\2\u020e\u0211\3\2\2\2\u020f\u020d\3\2\2\2\u020f\u0210\3\2\2\2\u0210"+
		"\u0212\3\2\2\2\u0211\u020f\3\2\2\2\u0212\u0214\7K\2\2\u0213\u020b\3\2"+
		"\2\2\u0213\u0214\3\2\2\2\u0214\u0218\3\2\2\2\u0215\u0217\7_\2\2\u0216"+
		"\u0215\3\2\2\2\u0217\u021a\3\2\2\2\u0218\u0216\3\2\2\2\u0218\u0219\3\2"+
		"\2\2\u0219\u021b\3\2\2\2\u021a\u0218\3\2\2\2\u021b\u021f\7\u0088\2\2\u021c"+
		"\u021e\7_\2\2\u021d\u021c\3\2\2\2\u021e\u0221\3\2\2\2\u021f\u021d\3\2"+
		"\2\2\u021f\u0220\3\2\2\2\u0220\u0222\3\2\2\2\u0221\u021f\3\2\2\2\u0222"+
		"\u0223\5Z.\2\u0223#\3\2\2\2\u0224\u0228\7\u0096\2\2\u0225\u0227\7_\2\2"+
		"\u0226\u0225\3\2\2\2\u0227\u022a\3\2\2\2\u0228\u0226\3\2\2\2\u0228\u0229"+
		"\3\2\2\2\u0229\u022b\3\2\2\2\u022a\u0228\3\2\2\2\u022b\u022f\7L\2\2\u022c"+
		"\u022e\7_\2\2\u022d\u022c\3\2\2\2\u022e\u0231\3\2\2\2\u022f\u022d\3\2"+
		"\2\2\u022f\u0230\3\2\2\2\u0230\u0232\3\2\2\2\u0231\u022f\3\2\2\2\u0232"+
		"\u0236\7\u0088\2\2\u0233\u0235\7_\2\2\u0234\u0233\3\2\2\2\u0235\u0238"+
		"\3\2\2\2\u0236\u0234\3\2\2\2\u0236\u0237\3\2\2\2\u0237\u0239\3\2\2\2\u0238"+
		"\u0236\3\2\2\2\u0239\u023b\5F$\2\u023a\u023c\7L\2\2\u023b\u023a\3\2\2"+
		"\2\u023b\u023c\3\2\2\2\u023c\u0249\3\2\2\2\u023d\u0241\7\u0088\2\2\u023e"+
		"\u0240\7_\2\2\u023f\u023e\3\2\2\2\u0240\u0243\3\2\2\2\u0241\u023f\3\2"+
		"\2\2\u0241\u0242\3\2\2\2\u0242\u0244\3\2\2\2\u0243\u0241\3\2\2\2\u0244"+
		"\u0246\5F$\2\u0245\u0247\7L\2\2\u0246\u0245\3\2\2\2\u0246\u0247\3\2\2"+
		"\2\u0247\u0249\3\2\2\2\u0248\u0224\3\2\2\2\u0248\u023d\3\2\2\2\u0249%"+
		"\3\2\2\2\u024a\u024e\7\u0096\2\2\u024b\u024d\7_\2\2\u024c\u024b\3\2\2"+
		"\2\u024d\u0250\3\2\2\2\u024e\u024c\3\2\2\2\u024e\u024f\3\2\2\2\u024f\u0251"+
		"\3\2\2\2\u0250\u024e\3\2\2\2\u0251\u0255\7M\2\2\u0252\u0254\7_\2\2\u0253"+
		"\u0252\3\2\2\2\u0254\u0257\3\2\2\2\u0255\u0253\3\2\2\2\u0255\u0256\3\2"+
		"\2\2\u0256\u0258\3\2\2\2\u0257\u0255\3\2\2\2\u0258\u025c\7\u0088\2\2\u0259"+
		"\u025b\7_\2\2\u025a\u0259\3\2\2\2\u025b\u025e\3\2\2\2\u025c\u025a\3\2"+
		"\2\2\u025c\u025d\3\2\2\2\u025d\u025f\3\2\2\2\u025e\u025c\3\2\2\2\u025f"+
		"\u0261\5H%\2\u0260\u0262\7M\2\2\u0261\u0260\3\2\2\2\u0261\u0262\3\2\2"+
		"\2\u0262\u026e\3\2\2\2\u0263\u0267\7\u0088\2\2\u0264\u0266\7_\2\2\u0265"+
		"\u0264\3\2\2\2\u0266\u0269\3\2\2\2\u0267\u0265\3\2\2\2\u0267\u0268\3\2"+
		"\2\2\u0268\u026a\3\2\2\2\u0269\u0267\3\2\2\2\u026a\u026b\5H%\2\u026b\u026c"+
		"\7M\2\2\u026c\u026e\3\2\2\2\u026d\u024a\3\2\2\2\u026d\u0263\3\2\2\2\u026e"+
		"\'\3\2\2\2\u026f\u0273\7\u0096\2\2\u0270\u0272\7_\2\2\u0271\u0270\3\2"+
		"\2\2\u0272\u0275\3\2\2\2\u0273\u0271\3\2\2\2\u0273\u0274\3\2\2\2\u0274"+
		"\u0276\3\2\2\2\u0275\u0273\3\2\2\2\u0276\u027a\7N\2\2\u0277\u0279\7_\2"+
		"\2\u0278\u0277\3\2\2\2\u0279\u027c\3\2\2\2\u027a\u0278\3\2\2\2\u027a\u027b"+
		"\3\2\2\2\u027b\u027d\3\2\2\2\u027c\u027a\3\2\2\2\u027d\u0281\7\u0088\2"+
		"\2\u027e\u0280\7_\2\2\u027f\u027e\3\2\2\2\u0280\u0283\3\2\2\2\u0281\u027f"+
		"\3\2\2\2\u0281\u0282\3\2\2\2\u0282\u0284\3\2\2\2\u0283\u0281\3\2\2\2\u0284"+
		"\u0286\5J&\2\u0285\u0287\7N\2\2\u0286\u0285\3\2\2\2\u0286\u0287\3\2\2"+
		"\2\u0287\u0293\3\2\2\2\u0288\u028c\7\u0088\2\2\u0289\u028b\7_\2\2\u028a"+
		"\u0289\3\2\2\2\u028b\u028e\3\2\2\2\u028c\u028a\3\2\2\2\u028c\u028d\3\2"+
		"\2\2\u028d\u028f\3\2\2\2\u028e\u028c\3\2\2\2\u028f\u0290\5J&\2\u0290\u0291"+
		"\7N\2\2\u0291\u0293\3\2\2\2\u0292\u026f\3\2\2\2\u0292\u0288\3\2\2\2\u0293"+
		")\3\2\2\2\u0294\u0298\7\u0096\2\2\u0295\u0297\7_\2\2\u0296\u0295\3\2\2"+
		"\2\u0297\u029a\3\2\2\2\u0298\u0296\3\2\2\2\u0298\u0299\3\2\2\2\u0299\u029b"+
		"\3\2\2\2\u029a\u0298\3\2\2\2\u029b\u029f\7O\2\2\u029c\u029e\7_\2\2\u029d"+
		"\u029c\3\2\2\2\u029e\u02a1\3\2\2\2\u029f\u029d\3\2\2\2\u029f\u02a0\3\2"+
		"\2\2\u02a0\u02a2\3\2\2\2\u02a1\u029f\3\2\2\2\u02a2\u02a6\7\u0088\2\2\u02a3"+
		"\u02a5\7_\2\2\u02a4\u02a3\3\2\2\2\u02a5\u02a8\3\2\2\2\u02a6\u02a4\3\2"+
		"\2\2\u02a6\u02a7\3\2\2\2\u02a7\u02a9\3\2\2\2\u02a8\u02a6\3\2\2\2\u02a9"+
		"\u02ab\5L\'\2\u02aa\u02ac\7O\2\2\u02ab\u02aa\3\2\2\2\u02ab\u02ac\3\2\2"+
		"\2\u02ac\u02b8\3\2\2\2\u02ad\u02b1\7\u0088\2\2\u02ae\u02b0\7_\2\2\u02af"+
		"\u02ae\3\2\2\2\u02b0\u02b3\3\2\2\2\u02b1\u02af\3\2\2\2\u02b1\u02b2\3\2"+
		"\2\2\u02b2\u02b4\3\2\2\2\u02b3\u02b1\3\2\2\2\u02b4\u02b5\5L\'\2\u02b5"+
		"\u02b6\7O\2\2\u02b6\u02b8\3\2\2\2\u02b7\u0294\3\2\2\2\u02b7\u02ad\3\2"+
		"\2\2\u02b8+\3\2\2\2\u02b9\u02bd\7\u0096\2\2\u02ba\u02bc\7_\2\2\u02bb\u02ba"+
		"\3\2\2\2\u02bc\u02bf\3\2\2\2\u02bd\u02bb\3\2\2\2\u02bd\u02be\3\2\2\2\u02be"+
		"\u02c0\3\2\2\2\u02bf\u02bd\3\2\2\2\u02c0\u02c4\7P\2\2\u02c1\u02c3\7_\2"+
		"\2\u02c2\u02c1\3\2\2\2\u02c3\u02c6\3\2\2\2\u02c4\u02c2\3\2\2\2\u02c4\u02c5"+
		"\3\2\2\2\u02c5\u02c7\3\2\2\2\u02c6\u02c4\3\2\2\2\u02c7\u02cb\7\u0088\2"+
		"\2\u02c8\u02ca\7_\2\2\u02c9\u02c8\3\2\2\2\u02ca\u02cd\3\2\2\2\u02cb\u02c9"+
		"\3\2\2\2\u02cb\u02cc\3\2\2\2\u02cc\u02ce\3\2\2\2\u02cd\u02cb\3\2\2\2\u02ce"+
		"\u02d0\5N(\2\u02cf\u02d1\7P\2\2\u02d0\u02cf\3\2\2\2\u02d0\u02d1\3\2\2"+
		"\2\u02d1\u02dd\3\2\2\2\u02d2\u02d6\7\u0088\2\2\u02d3\u02d5\7_\2\2\u02d4"+
		"\u02d3\3\2\2\2\u02d5\u02d8\3\2\2\2\u02d6\u02d4\3\2\2\2\u02d6\u02d7\3\2"+
		"\2\2\u02d7\u02d9\3\2\2\2\u02d8\u02d6\3\2\2\2\u02d9\u02da\5N(\2\u02da\u02db"+
		"\7P\2\2\u02db\u02dd\3\2\2\2\u02dc\u02b9\3\2\2\2\u02dc\u02d2\3\2\2\2\u02dd"+
		"-\3\2\2\2\u02de\u02e2\7\u0096\2\2\u02df\u02e1\7_\2\2\u02e0\u02df\3\2\2"+
		"\2\u02e1\u02e4\3\2\2\2\u02e2\u02e0\3\2\2\2\u02e2\u02e3\3\2\2\2\u02e3\u02e5"+
		"\3\2\2\2\u02e4\u02e2\3\2\2\2\u02e5\u02e9\7Q\2\2\u02e6\u02e8\7_\2\2\u02e7"+
		"\u02e6\3\2\2\2\u02e8\u02eb\3\2\2\2\u02e9\u02e7\3\2\2\2\u02e9\u02ea\3\2"+
		"\2\2\u02ea\u02ec\3\2\2\2\u02eb\u02e9\3\2\2\2\u02ec\u02f0\7\u0088\2\2\u02ed"+
		"\u02ef\7_\2\2\u02ee\u02ed\3\2\2\2\u02ef\u02f2\3\2\2\2\u02f0\u02ee\3\2"+
		"\2\2\u02f0\u02f1\3\2\2\2\u02f1\u02f3\3\2\2\2\u02f2\u02f0\3\2\2\2\u02f3"+
		"\u02f5\5P)\2\u02f4\u02f6\7Q\2\2\u02f5\u02f4\3\2\2\2\u02f5\u02f6\3\2\2"+
		"\2\u02f6\u0302\3\2\2\2\u02f7\u02fb\7\u0088\2\2\u02f8\u02fa\7_\2\2\u02f9"+
		"\u02f8\3\2\2\2\u02fa\u02fd\3\2\2\2\u02fb\u02f9\3\2\2\2\u02fb\u02fc\3\2"+
		"\2\2\u02fc\u02fe\3\2\2\2\u02fd\u02fb\3\2\2\2\u02fe\u02ff\5P)\2\u02ff\u0300"+
		"\7Q\2\2\u0300\u0302\3\2\2\2\u0301\u02de\3\2\2\2\u0301\u02f7\3\2\2\2\u0302"+
		"/\3\2\2\2\u0303\u0307\7\u0096\2\2\u0304\u0306\7_\2\2\u0305\u0304\3\2\2"+
		"\2\u0306\u0309\3\2\2\2\u0307\u0305\3\2\2\2\u0307\u0308\3\2\2\2\u0308\u030a"+
		"\3\2\2\2\u0309\u0307\3\2\2\2\u030a\u030e\7R\2\2\u030b\u030d\7_\2\2\u030c"+
		"\u030b\3\2\2\2\u030d\u0310\3\2\2\2\u030e\u030c\3\2\2\2\u030e\u030f\3\2"+
		"\2\2\u030f\u0311\3\2\2\2\u0310\u030e\3\2\2\2\u0311\u0315\7\u0088\2\2\u0312"+
		"\u0314\7_\2\2\u0313\u0312\3\2\2\2\u0314\u0317\3\2\2\2\u0315\u0313\3\2"+
		"\2\2\u0315\u0316\3\2\2\2\u0316\u0318\3\2\2\2\u0317\u0315\3\2\2\2\u0318"+
		"\u031a\5R*\2\u0319\u031b\7R\2\2\u031a\u0319\3\2\2\2\u031a\u031b\3\2\2"+
		"\2\u031b\u0327\3\2\2\2\u031c\u0320\7\u0088\2\2\u031d\u031f\7_\2\2\u031e"+
		"\u031d\3\2\2\2\u031f\u0322\3\2\2\2\u0320\u031e\3\2\2\2\u0320\u0321\3\2"+
		"\2\2\u0321\u0323\3\2\2\2\u0322\u0320\3\2\2\2\u0323\u0324\5R*\2\u0324\u0325"+
		"\7R\2\2\u0325\u0327\3\2\2\2\u0326\u0303\3\2\2\2\u0326\u031c\3\2\2\2\u0327"+
		"\61\3\2\2\2\u0328\u032c\7\u0096\2\2\u0329\u032b\7_\2\2\u032a\u0329\3\2"+
		"\2\2\u032b\u032e\3\2\2\2\u032c\u032a\3\2\2\2\u032c\u032d\3\2\2\2\u032d"+
		"\u032f\3\2\2\2\u032e\u032c\3\2\2\2\u032f\u0333\7S\2\2\u0330\u0332\7_\2"+
		"\2\u0331\u0330\3\2\2\2\u0332\u0335\3\2\2\2\u0333\u0331\3\2\2\2\u0333\u0334"+
		"\3\2\2\2\u0334\u0336\3\2\2\2\u0335\u0333\3\2\2\2\u0336\u033a\7\u0088\2"+
		"\2\u0337\u0339\7_\2\2\u0338\u0337\3\2\2\2\u0339\u033c\3\2\2\2\u033a\u0338"+
		"\3\2\2\2\u033a\u033b\3\2\2\2\u033b\u033d\3\2\2\2\u033c\u033a\3\2\2\2\u033d"+
		"\u033f\5T+\2\u033e\u0340\7S\2\2\u033f\u033e\3\2\2\2\u033f\u0340\3\2\2"+
		"\2\u0340\u034c\3\2\2\2\u0341\u0345\7\u0088\2\2\u0342\u0344\7_\2\2\u0343"+
		"\u0342\3\2\2\2\u0344\u0347\3\2\2\2\u0345\u0343\3\2\2\2\u0345\u0346\3\2"+
		"\2\2\u0346\u0348\3\2\2\2\u0347\u0345\3\2\2\2\u0348\u0349\5T+\2\u0349\u034a"+
		"\7S\2\2\u034a\u034c\3\2\2\2\u034b\u0328\3\2\2\2\u034b\u0341\3\2\2\2\u034c"+
		"\63\3\2\2\2\u034d\u0351\7\u0096\2\2\u034e\u0350\7_\2\2\u034f\u034e\3\2"+
		"\2\2\u0350\u0353\3\2\2\2\u0351\u034f\3\2\2\2\u0351\u0352\3\2\2\2\u0352"+
		"\u0354\3\2\2\2\u0353\u0351\3\2\2\2\u0354\u0358\7T\2\2\u0355\u0357\7_\2"+
		"\2\u0356\u0355\3\2\2\2\u0357\u035a\3\2\2\2\u0358\u0356\3\2\2\2\u0358\u0359"+
		"\3\2\2\2\u0359\u035b\3\2\2\2\u035a\u0358\3\2\2\2\u035b\u035f\7\u0088\2"+
		"\2\u035c\u035e\7_\2\2\u035d\u035c\3\2\2\2\u035e\u0361\3\2\2\2\u035f\u035d"+
		"\3\2\2\2\u035f\u0360\3\2\2\2\u0360\u0362\3\2\2\2\u0361\u035f\3\2\2\2\u0362"+
		"\u0364\5V,\2\u0363\u0365\7T\2\2\u0364\u0363\3\2\2\2\u0364\u0365\3\2\2"+
		"\2\u0365\u0372\3\2\2\2\u0366\u036a\7\u0088\2\2\u0367\u0369\7_\2\2\u0368"+
		"\u0367\3\2\2\2\u0369\u036c\3\2\2\2\u036a\u0368\3\2\2\2\u036a\u036b\3\2"+
		"\2\2\u036b\u036d\3\2\2\2\u036c\u036a\3\2\2\2\u036d\u036f\5V,\2\u036e\u0370"+
		"\7T\2\2\u036f\u036e\3\2\2\2\u036f\u0370\3\2\2\2\u0370\u0372\3\2\2\2\u0371"+
		"\u034d\3\2\2\2\u0371\u0366\3\2\2\2\u0372\65\3\2\2\2\u0373\u0377\7\u0096"+
		"\2\2\u0374\u0376\7_\2\2\u0375\u0374\3\2\2\2\u0376\u0379\3\2\2\2\u0377"+
		"\u0375\3\2\2\2\u0377\u0378\3\2\2\2\u0378\u037a\3\2\2\2\u0379\u0377\3\2"+
		"\2\2\u037a\u037e\7U\2\2\u037b\u037d\7_\2\2\u037c\u037b\3\2\2\2\u037d\u0380"+
		"\3\2\2\2\u037e\u037c\3\2\2\2\u037e\u037f\3\2\2\2\u037f\u0381\3\2\2\2\u0380"+
		"\u037e\3\2\2\2\u0381\u0385\7\u0088\2\2\u0382\u0384\7_\2\2\u0383\u0382"+
		"\3\2\2\2\u0384\u0387\3\2\2\2\u0385\u0383\3\2\2\2\u0385\u0386\3\2\2\2\u0386"+
		"\u0388\3\2\2\2\u0387\u0385\3\2\2\2\u0388\u038a\5X-\2\u0389\u038b\7U\2"+
		"\2\u038a\u0389\3\2\2\2\u038a\u038b\3\2\2\2\u038b\u0397\3\2\2\2\u038c\u0390"+
		"\7\u0088\2\2\u038d\u038f\7_\2\2\u038e\u038d\3\2\2\2\u038f\u0392\3\2\2"+
		"\2\u0390\u038e\3\2\2\2\u0390\u0391\3\2\2\2\u0391\u0393\3\2\2\2\u0392\u0390"+
		"\3\2\2\2\u0393\u0394\5X-\2\u0394\u0395\7U\2\2\u0395\u0397\3\2\2\2\u0396"+
		"\u0373\3\2\2\2\u0396\u038c\3\2\2\2\u0397\67\3\2\2\2\u0398\u039c\7\16\2"+
		"\2\u0399\u039b\7_\2\2\u039a\u0399\3\2\2\2\u039b\u039e\3\2\2\2\u039c\u039a"+
		"\3\2\2\2\u039c\u039d\3\2\2\2\u039d\u039f\3\2\2\2\u039e\u039c\3\2\2\2\u039f"+
		"\u03a3\7\u0088\2\2\u03a0\u03a2\7_\2\2\u03a1\u03a0\3\2\2\2\u03a2\u03a5"+
		"\3\2\2\2\u03a3\u03a1\3\2\2\2\u03a3\u03a4\3\2\2\2\u03a4\u03a6\3\2\2\2\u03a5"+
		"\u03a3\3\2\2\2\u03a6\u03aa\5\\/\2\u03a7\u03a9\7_\2\2\u03a8\u03a7\3\2\2"+
		"\2\u03a9\u03ac\3\2\2\2\u03aa\u03a8\3\2\2\2\u03aa\u03ab\3\2\2\2\u03ab\u03ad"+
		"\3\2\2\2\u03ac\u03aa\3\2\2\2\u03ad\u03ae\7\u0095\2\2\u03ae\u03af\b\35"+
		"\1\2\u03af9\3\2\2\2\u03b0\u03b2\7\n\2\2\u03b1\u03b3\7_\2\2\u03b2\u03b1"+
		"\3\2\2\2\u03b3\u03b4\3\2\2\2\u03b4\u03b2\3\2\2\2\u03b4\u03b5\3\2\2\2\u03b5"+
		"\u03b6\3\2\2\2\u03b6\u03ba\5@!\2\u03b7\u03b9\7_\2\2\u03b8\u03b7\3\2\2"+
		"\2\u03b9\u03bc\3\2\2\2\u03ba\u03b8\3\2\2\2\u03ba\u03bb\3\2\2\2\u03bb\u03bd"+
		"\3\2\2\2\u03bc\u03ba\3\2\2\2\u03bd\u03be\7\u0095\2\2\u03be\u03bf\b\36"+
		"\1\2\u03bf;\3\2\2\2\u03c0\u03c1\7\17\2\2\u03c1\u03c2\5> \2\u03c2\u03c3"+
		"\7\u0095\2\2\u03c3=\3\2\2\2\u03c4\u03c6\5@!\2\u03c5\u03c4\3\2\2\2\u03c5"+
		"\u03c6\3\2\2\2\u03c6\u03c7\3\2\2\2\u03c7\u03c9\7\u0097\2\2\u03c8\u03c5"+
		"\3\2\2\2\u03c8\u03c9\3\2\2\2\u03c9\u03da\3\2\2\2\u03ca\u03db\7u\2\2\u03cb"+
		"\u03d7\7\u009d\2\2\u03cc\u03d1\5> \2\u03cd\u03ce\7\u0094\2\2\u03ce\u03d0"+
		"\5> \2\u03cf\u03cd\3\2\2\2\u03d0\u03d3\3\2\2\2\u03d1\u03cf\3\2\2\2\u03d1"+
		"\u03d2\3\2\2\2\u03d2\u03d5\3\2\2\2\u03d3\u03d1\3\2\2\2\u03d4\u03d6\7\u0094"+
		"\2\2\u03d5\u03d4\3\2\2\2\u03d5\u03d6\3\2\2\2\u03d6\u03d8\3\2\2\2\u03d7"+
		"\u03cc\3\2\2\2\u03d7\u03d8\3\2\2\2\u03d8\u03d9\3\2\2\2\u03d9\u03db\7\u009e"+
		"\2\2\u03da\u03ca\3\2\2\2\u03da\u03cb\3\2\2\2\u03db\u03e2\3\2\2\2\u03dc"+
		"\u03df\5@!\2\u03dd\u03de\7\4\2\2\u03de\u03e0\5\\/\2\u03df\u03dd\3\2\2"+
		"\2\u03df\u03e0\3\2\2\2\u03e0\u03e2\3\2\2\2\u03e1\u03c8\3\2\2\2\u03e1\u03dc"+
		"\3\2\2\2\u03e2?\3\2\2\2\u03e3\u03e5\7\u0097\2\2\u03e4\u03e3\3\2\2\2\u03e4"+
		"\u03e5\3\2\2\2\u03e5\u03e6\3\2\2\2\u03e6\u03e7\5\\/\2\u03e7\u03ee\b!\1"+
		"\2\u03e8\u03e9\7\u0097\2\2\u03e9\u03ea\5\\/\2\u03ea\u03eb\b!\1\2\u03eb"+
		"\u03ed\3\2\2\2\u03ec\u03e8\3\2\2\2\u03ed\u03f0\3\2\2\2\u03ee\u03ec\3\2"+
		"\2\2\u03ee\u03ef\3\2\2\2\u03efA\3\2\2\2\u03f0\u03ee\3\2\2\2\u03f1\u03f2"+
		"\t\2\2\2\u03f2C\3\2\2\2\u03f3\u03f4\7`\2\2\u03f4\u03f5\b#\1\2\u03f5E\3"+
		"\2\2\2\u03f6\u03f7\7k\2\2\u03f7\u03f8\b$\1\2\u03f8G\3\2\2\2\u03f9\u03fa"+
		"\7k\2\2\u03fa\u03fb\b%\1\2\u03fbI\3\2\2\2\u03fc\u03fe\7t\2\2\u03fd\u03fc"+
		"\3\2\2\2\u03fd\u03fe\3\2\2\2\u03fe\u03ff\3\2\2\2\u03ff\u0407\t\3\2\2\u0400"+
		"\u0401\7o\2\2\u0401\u0407\t\4\2\2\u0402\u0403\7p\2\2\u0403\u0407\t\5\2"+
		"\2\u0404\u0405\7q\2\2\u0405\u0407\t\6\2\2\u0406\u03fd\3\2\2\2\u0406\u0400"+
		"\3\2\2\2\u0406\u0402\3\2\2\2\u0406\u0404\3\2\2\2\u0407\u0408\3\2\2\2\u0408"+
		"\u0409\b&\1\2\u0409K\3\2\2\2\u040a\u040c\7t\2\2\u040b\u040a\3\2\2\2\u040b"+
		"\u040c\3\2\2\2\u040c\u040d\3\2\2\2\u040d\u0415\t\3\2\2\u040e\u040f\7o"+
		"\2\2\u040f\u0415\t\4\2\2\u0410\u0411\7p\2\2\u0411\u0415\t\5\2\2\u0412"+
		"\u0413\7q\2\2\u0413\u0415\t\6\2\2\u0414\u040b\3\2\2\2\u0414\u040e\3\2"+
		"\2\2\u0414\u0410\3\2\2\2\u0414\u0412\3\2\2\2\u0415\u0416\3\2\2\2\u0416"+
		"\u0417\b\'\1\2\u0417M\3\2\2\2\u0418\u041a\7t\2\2\u0419\u0418\3\2\2\2\u0419"+
		"\u041a\3\2\2\2\u041a\u041b\3\2\2\2\u041b\u0423\t\3\2\2\u041c\u041d\7o"+
		"\2\2\u041d\u0423\t\4\2\2\u041e\u041f\7p\2\2\u041f\u0423\t\5\2\2\u0420"+
		"\u0421\7q\2\2\u0421\u0423\t\6\2\2\u0422\u0419\3\2\2\2\u0422\u041c\3\2"+
		"\2\2\u0422\u041e\3\2\2\2\u0422\u0420\3\2\2\2\u0423\u0424\3\2\2\2\u0424"+
		"\u0425\b(\1\2\u0425O\3\2\2\2\u0426\u0428\7t\2\2\u0427\u0426\3\2\2\2\u0427"+
		"\u0428\3\2\2\2\u0428\u0429\3\2\2\2\u0429\u0431\t\3\2\2\u042a\u042b\7o"+
		"\2\2\u042b\u0431\t\4\2\2\u042c\u042d\7p\2\2\u042d\u0431\t\5\2\2\u042e"+
		"\u042f\7q\2\2\u042f\u0431\t\6\2\2\u0430\u0427\3\2\2\2\u0430\u042a\3\2"+
		"\2\2\u0430\u042c\3\2\2\2\u0430\u042e\3\2\2\2\u0431\u0432\3\2\2\2\u0432"+
		"\u0433\b)\1\2\u0433Q\3\2\2\2\u0434\u0436\7t\2\2\u0435\u0434\3\2\2\2\u0435"+
		"\u0436\3\2\2\2\u0436\u0437\3\2\2\2\u0437\u043f\t\3\2\2\u0438\u0439\7o"+
		"\2\2\u0439\u043f\t\4\2\2\u043a\u043b\7p\2\2\u043b\u043f\t\5\2\2\u043c"+
		"\u043d\7q\2\2\u043d\u043f\t\6\2\2\u043e\u0435\3\2\2\2\u043e\u0438\3\2"+
		"\2\2\u043e\u043a\3\2\2\2\u043e\u043c\3\2\2\2\u043f\u0440\3\2\2\2\u0440"+
		"\u0441\b*\1\2\u0441S\3\2\2\2\u0442\u0444\7t\2\2\u0443\u0442\3\2\2\2\u0443"+
		"\u0444\3\2\2\2\u0444\u0445\3\2\2\2\u0445\u044d\t\3\2\2\u0446\u0447\7o"+
		"\2\2\u0447\u044d\t\4\2\2\u0448\u0449\7p\2\2\u0449\u044d\t\5\2\2\u044a"+
		"\u044b\7q\2\2\u044b\u044d\t\6\2\2\u044c\u0443\3\2\2\2\u044c\u0446\3\2"+
		"\2\2\u044c\u0448\3\2\2\2\u044c\u044a\3\2\2\2\u044d\u044e\3\2\2\2\u044e"+
		"\u044f\b+\1\2\u044fU\3\2\2\2\u0450\u0452\7t\2\2\u0451\u0450\3\2\2\2\u0451"+
		"\u0452\3\2\2\2\u0452\u0453\3\2\2\2\u0453\u045b\t\3\2\2\u0454\u0455\7o"+
		"\2\2\u0455\u045b\t\4\2\2\u0456\u0457\7p\2\2\u0457\u045b\t\5\2\2\u0458"+
		"\u0459\7q\2\2\u0459\u045b\t\6\2\2\u045a\u0451\3\2\2\2\u045a\u0454\3\2"+
		"\2\2\u045a\u0456\3\2\2\2\u045a\u0458\3\2\2\2\u045b\u045c\3\2\2\2\u045c"+
		"\u045d\b,\1\2\u045dW\3\2\2\2\u045e\u0460\7t\2\2\u045f\u045e\3\2\2\2\u045f"+
		"\u0460\3\2\2\2\u0460\u0461\3\2\2\2\u0461\u0469\t\3\2\2\u0462\u0463\7o"+
		"\2\2\u0463\u0469\t\4\2\2\u0464\u0465\7p\2\2\u0465\u0469\t\5\2\2\u0466"+
		"\u0467\7q\2\2\u0467\u0469\t\6\2\2\u0468\u045f\3\2\2\2\u0468\u0462\3\2"+
		"\2\2\u0468\u0464\3\2\2\2\u0468\u0466\3\2\2\2\u0469\u046a\3\2\2\2\u046a"+
		"\u046b\b-\1\2\u046bY\3\2\2\2\u046c\u046d\7a\2\2\u046d\u0471\b.\1\2\u046e"+
		"\u046f\7b\2\2\u046f\u0471\b.\1\2\u0470\u046c\3\2\2\2\u0470\u046e\3\2\2"+
		"\2\u0471[\3\2\2\2\u0472\u0476\7V\2\2\u0473\u0474\7r\2\2\u0474\u0476\7"+
		"V\2\2\u0475\u0472\3\2\2\2\u0475\u0473\3\2\2\2\u0476]\3\2\2\2\u0477\u0478"+
		"\t\7\2\2\u0478_\3\2\2\2\u0097ekpv|\u0084\u008a\u0093\u00a4\u00a9\u00b2"+
		"\u00b9\u00c0\u00c8\u00cf\u00d4\u00de\u00e5\u00ec\u00f4\u00fb\u0100\u010a"+
		"\u0111\u0118\u011f\u0129\u0130\u0137\u013e\u0145\u014c\u0156\u015d\u0166"+
		"\u016d\u0174\u0180\u0187\u0192\u01ae\u01d7\u01dd\u01e1\u01e6\u01ed\u01f6"+
		"\u01fa\u01ff\u0206\u020f\u0213\u0218\u021f\u0228\u022f\u0236\u023b\u0241"+
		"\u0246\u0248\u024e\u0255\u025c\u0261\u0267\u026d\u0273\u027a\u0281\u0286"+
		"\u028c\u0292\u0298\u029f\u02a6\u02ab\u02b1\u02b7\u02bd\u02c4\u02cb\u02d0"+
		"\u02d6\u02dc\u02e2\u02e9\u02f0\u02f5\u02fb\u0301\u0307\u030e\u0315\u031a"+
		"\u0320\u0326\u032c\u0333\u033a\u033f\u0345\u034b\u0351\u0358\u035f\u0364"+
		"\u036a\u036f\u0371\u0377\u037e\u0385\u038a\u0390\u0396\u039c\u03a3\u03aa"+
		"\u03b4\u03ba\u03c5\u03c8\u03d1\u03d5\u03d7\u03da\u03df\u03e1\u03e4\u03ee"+
		"\u03fd\u0406\u040b\u0414\u0419\u0422\u0427\u0430\u0435\u043e\u0443\u044c"+
		"\u0451\u045a\u045f\u0468\u0470\u0475";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}