// Generated from /home/dpemmons/src/typedef/libtypedef/parser/grammar/TypedefParser.g4 by ANTLR 4.9.2

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
		RULE_compilationUnit = 0, RULE_structDeclaration = 1, RULE_variantDeclaration = 2, 
		RULE_vectorDeclaration = 3, RULE_mapDeclaration = 4, RULE_structMember = 5, 
		RULE_typeDeclaration = 6, RULE_fieldDeclaration = 7, RULE_primitiveMemberDeclaration = 8, 
		RULE_inlineStructDeclaration = 9, RULE_inlineVariantDeclaration = 10, 
		RULE_inlineVectorDeclaration = 11, RULE_inlineMapDeclaration = 12, RULE_typedefVersionDeclaration = 13, 
		RULE_moduleDeclaration = 14, RULE_useDeclaration = 15, RULE_useTree = 16, 
		RULE_simplePath = 17, RULE_primitiveLiteral = 18, RULE_boolLiteral = 19, 
		RULE_charLiteral = 20, RULE_f32Literal = 21, RULE_f64Literal = 22, RULE_floatLiteral = 23, 
		RULE_u8Literal = 24, RULE_u16Literal = 25, RULE_u32Literal = 26, RULE_u64Literal = 27, 
		RULE_i8Literal = 28, RULE_i16Literal = 29, RULE_i32Literal = 30, RULE_i64Literal = 31, 
		RULE_intLiteral = 32, RULE_stringLiteral = 33, RULE_identifier = 34, RULE_primitiveTypeIdentifier = 35, 
		RULE_keyword = 36;
	private static String[] makeRuleNames() {
		return new String[] {
			"compilationUnit", "structDeclaration", "variantDeclaration", "vectorDeclaration", 
			"mapDeclaration", "structMember", "typeDeclaration", "fieldDeclaration", 
			"primitiveMemberDeclaration", "inlineStructDeclaration", "inlineVariantDeclaration", 
			"inlineVectorDeclaration", "inlineMapDeclaration", "typedefVersionDeclaration", 
			"moduleDeclaration", "useDeclaration", "useTree", "simplePath", "primitiveLiteral", 
			"boolLiteral", "charLiteral", "f32Literal", "f64Literal", "floatLiteral", 
			"u8Literal", "u16Literal", "u32Literal", "u64Literal", "i8Literal", "i16Literal", 
			"i32Literal", "i64Literal", "intLiteral", "stringLiteral", "identifier", 
			"primitiveTypeIdentifier", "keyword"
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
		public std::shared_ptr<std::string> version;
		public std::shared_ptr<td::table::Module> mod;
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
			setState(77);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(74);
				match(WS);
				}
				}
				setState(79);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(80);
			typedefVersionDeclaration();
			setState(84);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(81);
					match(WS);
					}
					} 
				}
				setState(86);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
			}
			setState(88);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==KW_MODULE) {
				{
				setState(87);
				moduleDeclaration();
				}
			}

			setState(99);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(93);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==WS) {
						{
						{
						setState(90);
						match(WS);
						}
						}
						setState(95);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(96);
					useDeclaration();
					}
					} 
				}
				setState(101);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			}
			setState(111);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(105);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==WS) {
						{
						{
						setState(102);
						match(WS);
						}
						}
						setState(107);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(108);
					typeDeclaration();
					}
					} 
				}
				setState(113);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			}
			setState(117);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(114);
				match(WS);
				}
				}
				setState(119);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(120);
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

	public static class StructDeclarationContext extends ParserRuleContext {
		public std::shared_ptr<td::table::Struct> st;
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
		public List<StructMemberContext> structMember() {
			return getRuleContexts(StructMemberContext.class);
		}
		public StructMemberContext structMember(int i) {
			return getRuleContext(StructMemberContext.class,i);
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
		enterRule(_localctx, 2, RULE_structDeclaration);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(122);
			match(KW_STRUCT);
			setState(126);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(123);
				match(WS);
				}
				}
				setState(128);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(129);
			identifier();
			setState(133);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(130);
				match(WS);
				}
				}
				setState(135);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(136);
			match(LBRACE);
			setState(140);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(137);
					match(WS);
					}
					} 
				}
				setState(142);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
			}
			setState(159);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << KW_STRUCT) | (1L << KW_VARIANT) | (1L << KW_VECTOR) | (1L << KW_MAP))) != 0) || _la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE) {
				{
				{
				setState(143);
				structMember();
				setState(147);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(144);
					match(WS);
					}
					}
					setState(149);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(150);
				match(SEMI);
				setState(154);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(151);
						match(WS);
						}
						} 
					}
					setState(156);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
				}
				}
				}
				setState(161);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(165);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(162);
				match(WS);
				}
				}
				setState(167);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(168);
			match(RBRACE);
			}
		}
		catch (RecognitionException re) {
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
		public std::shared_ptr<td::table::Variant> var;
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
		public List<StructMemberContext> structMember() {
			return getRuleContexts(StructMemberContext.class);
		}
		public StructMemberContext structMember(int i) {
			return getRuleContext(StructMemberContext.class,i);
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
		enterRule(_localctx, 4, RULE_variantDeclaration);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
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
			identifier();
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
			match(LBRACE);
			setState(207);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << KW_STRUCT) | (1L << KW_VARIANT) | (1L << KW_VECTOR) | (1L << KW_MAP))) != 0) || ((((_la - 85)) & ~0x3f) == 0 && ((1L << (_la - 85)) & ((1L << (NON_KEYWORD_IDENTIFIER - 85)) | (1L << (WS - 85)) | (1L << (RAW_ESCAPE - 85)))) != 0)) {
				{
				{
				setState(188);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(185);
					match(WS);
					}
					}
					setState(190);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(191);
				structMember();
				setState(195);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(192);
					match(WS);
					}
					}
					setState(197);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(198);
				match(SEMI);
				setState(202);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,19,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(199);
						match(WS);
						}
						} 
					}
					setState(204);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,19,_ctx);
				}
				}
				}
				setState(209);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(210);
			match(RBRACE);
			}
		}
		catch (RecognitionException re) {
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
		public std::shared_ptr<td::table::Vector> vec;
		public PrimitiveTypeIdentifierContext val;
		public TerminalNode KW_VECTOR() { return getToken(TypedefParser.KW_VECTOR, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode LT() { return getToken(TypedefParser.LT, 0); }
		public TerminalNode GT() { return getToken(TypedefParser.GT, 0); }
		public PrimitiveTypeIdentifierContext primitiveTypeIdentifier() {
			return getRuleContext(PrimitiveTypeIdentifierContext.class,0);
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
		enterRule(_localctx, 6, RULE_vectorDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(212);
			match(KW_VECTOR);
			setState(216);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(213);
				match(WS);
				}
				}
				setState(218);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(219);
			identifier();
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
			match(LT);
			setState(230);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(227);
				match(WS);
				}
				}
				setState(232);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(233);
			((VectorDeclarationContext)_localctx).val = primitiveTypeIdentifier();
			setState(237);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(234);
				match(WS);
				}
				}
				setState(239);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(240);
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

	public static class MapDeclarationContext extends ParserRuleContext {
		public std::shared_ptr<td::table::Map> map;
		public PrimitiveTypeIdentifierContext key;
		public PrimitiveTypeIdentifierContext val;
		public TerminalNode KW_MAP() { return getToken(TypedefParser.KW_MAP, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode LT() { return getToken(TypedefParser.LT, 0); }
		public TerminalNode COMMA() { return getToken(TypedefParser.COMMA, 0); }
		public TerminalNode GT() { return getToken(TypedefParser.GT, 0); }
		public List<PrimitiveTypeIdentifierContext> primitiveTypeIdentifier() {
			return getRuleContexts(PrimitiveTypeIdentifierContext.class);
		}
		public PrimitiveTypeIdentifierContext primitiveTypeIdentifier(int i) {
			return getRuleContext(PrimitiveTypeIdentifierContext.class,i);
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
		enterRule(_localctx, 8, RULE_mapDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(242);
			match(KW_MAP);
			setState(246);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(243);
				match(WS);
				}
				}
				setState(248);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(249);
			identifier();
			setState(253);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(250);
				match(WS);
				}
				}
				setState(255);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(256);
			match(LT);
			setState(260);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(257);
				match(WS);
				}
				}
				setState(262);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(263);
			((MapDeclarationContext)_localctx).key = primitiveTypeIdentifier();
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
			match(COMMA);
			setState(274);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(271);
				match(WS);
				}
				}
				setState(276);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(277);
			((MapDeclarationContext)_localctx).val = primitiveTypeIdentifier();
			setState(281);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(278);
				match(WS);
				}
				}
				setState(283);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(284);
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

	public static class StructMemberContext extends ParserRuleContext {
		public std::shared_ptr<td::table::StructMember> mem;
		public TypeDeclarationContext typeDeclaration() {
			return getRuleContext(TypeDeclarationContext.class,0);
		}
		public FieldDeclarationContext fieldDeclaration() {
			return getRuleContext(FieldDeclarationContext.class,0);
		}
		public StructMemberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_structMember; }
	}

	public final StructMemberContext structMember() throws RecognitionException {
		StructMemberContext _localctx = new StructMemberContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_structMember);
		try {
			setState(288);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case KW_STRUCT:
			case KW_VARIANT:
			case KW_VECTOR:
			case KW_MAP:
				enterOuterAlt(_localctx, 1);
				{
				setState(286);
				typeDeclaration();
				}
				break;
			case NON_KEYWORD_IDENTIFIER:
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(287);
				fieldDeclaration();
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

	public static class TypeDeclarationContext extends ParserRuleContext {
		public std::shared_ptr<td::table::TypeDeclaration> type_decl;
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
		enterRule(_localctx, 12, RULE_typeDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(294);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case KW_STRUCT:
				{
				setState(290);
				structDeclaration();
				}
				break;
			case KW_VARIANT:
				{
				setState(291);
				variantDeclaration();
				}
				break;
			case KW_VECTOR:
				{
				setState(292);
				vectorDeclaration();
				}
				break;
			case KW_MAP:
				{
				setState(293);
				mapDeclaration();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(299);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(296);
				match(WS);
				}
				}
				setState(301);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(302);
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

	public static class FieldDeclarationContext extends ParserRuleContext {
		public std::shared_ptr<td::table::FieldDeclaration> field_decl;
		public PrimitiveMemberDeclarationContext primitiveMemberDeclaration() {
			return getRuleContext(PrimitiveMemberDeclarationContext.class,0);
		}
		public InlineStructDeclarationContext inlineStructDeclaration() {
			return getRuleContext(InlineStructDeclarationContext.class,0);
		}
		public InlineVariantDeclarationContext inlineVariantDeclaration() {
			return getRuleContext(InlineVariantDeclarationContext.class,0);
		}
		public InlineVectorDeclarationContext inlineVectorDeclaration() {
			return getRuleContext(InlineVectorDeclarationContext.class,0);
		}
		public InlineMapDeclarationContext inlineMapDeclaration() {
			return getRuleContext(InlineMapDeclarationContext.class,0);
		}
		public FieldDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fieldDeclaration; }
	}

	public final FieldDeclarationContext fieldDeclaration() throws RecognitionException {
		FieldDeclarationContext _localctx = new FieldDeclarationContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_fieldDeclaration);
		try {
			setState(309);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,34,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(304);
				primitiveMemberDeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(305);
				inlineStructDeclaration();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(306);
				inlineVariantDeclaration();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(307);
				inlineVectorDeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(308);
				inlineMapDeclaration();
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

	public static class PrimitiveMemberDeclarationContext extends ParserRuleContext {
		public std::shared_ptr<td::table::FieldDeclaration> field_decl;
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public PrimitiveTypeIdentifierContext primitiveTypeIdentifier() {
			return getRuleContext(PrimitiveTypeIdentifierContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public PrimitiveLiteralContext primitiveLiteral() {
			return getRuleContext(PrimitiveLiteralContext.class,0);
		}
		public PrimitiveMemberDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primitiveMemberDeclaration; }
	}

	public final PrimitiveMemberDeclarationContext primitiveMemberDeclaration() throws RecognitionException {
		PrimitiveMemberDeclarationContext _localctx = new PrimitiveMemberDeclarationContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_primitiveMemberDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(311);
			identifier();
			setState(315);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(312);
				match(WS);
				}
				}
				setState(317);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(318);
			match(COLON);
			setState(322);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(319);
				match(WS);
				}
				}
				setState(324);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(325);
			primitiveTypeIdentifier();
			setState(340);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,39,_ctx) ) {
			case 1:
				{
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
				match(EQ);
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
				setState(339);
				primitiveLiteral();
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

	public static class InlineStructDeclarationContext extends ParserRuleContext {
		public std::shared_ptr<td::table::FieldDeclaration> field_decl;
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
		public List<StructMemberContext> structMember() {
			return getRuleContexts(StructMemberContext.class);
		}
		public StructMemberContext structMember(int i) {
			return getRuleContext(StructMemberContext.class,i);
		}
		public List<TerminalNode> SEMI() { return getTokens(TypedefParser.SEMI); }
		public TerminalNode SEMI(int i) {
			return getToken(TypedefParser.SEMI, i);
		}
		public InlineStructDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inlineStructDeclaration; }
	}

	public final InlineStructDeclarationContext inlineStructDeclaration() throws RecognitionException {
		InlineStructDeclarationContext _localctx = new InlineStructDeclarationContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_inlineStructDeclaration);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(342);
			identifier();
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
			match(COLON);
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
			match(KW_STRUCT);
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
			match(LBRACE);
			setState(367);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,43,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(364);
					match(WS);
					}
					} 
				}
				setState(369);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,43,_ctx);
			}
			setState(386);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << KW_STRUCT) | (1L << KW_VARIANT) | (1L << KW_VECTOR) | (1L << KW_MAP))) != 0) || _la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE) {
				{
				{
				setState(370);
				structMember();
				setState(374);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(371);
					match(WS);
					}
					}
					setState(376);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(377);
				match(SEMI);
				setState(381);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,45,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(378);
						match(WS);
						}
						} 
					}
					setState(383);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,45,_ctx);
				}
				}
				}
				setState(388);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(392);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(389);
				match(WS);
				}
				}
				setState(394);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(395);
			match(RBRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InlineVariantDeclarationContext extends ParserRuleContext {
		public std::shared_ptr<td::table::FieldDeclaration> field_decl;
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
		public List<StructMemberContext> structMember() {
			return getRuleContexts(StructMemberContext.class);
		}
		public StructMemberContext structMember(int i) {
			return getRuleContext(StructMemberContext.class,i);
		}
		public List<TerminalNode> SEMI() { return getTokens(TypedefParser.SEMI); }
		public TerminalNode SEMI(int i) {
			return getToken(TypedefParser.SEMI, i);
		}
		public InlineVariantDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inlineVariantDeclaration; }
	}

	public final InlineVariantDeclarationContext inlineVariantDeclaration() throws RecognitionException {
		InlineVariantDeclarationContext _localctx = new InlineVariantDeclarationContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_inlineVariantDeclaration);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(397);
			identifier();
			setState(401);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(398);
				match(WS);
				}
				}
				setState(403);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(404);
			match(COLON);
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
			match(KW_STRUCT);
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
			match(LBRACE);
			setState(422);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,51,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(419);
					match(WS);
					}
					} 
				}
				setState(424);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,51,_ctx);
			}
			setState(441);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << KW_STRUCT) | (1L << KW_VARIANT) | (1L << KW_VECTOR) | (1L << KW_MAP))) != 0) || _la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE) {
				{
				{
				setState(425);
				structMember();
				setState(429);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==WS) {
					{
					{
					setState(426);
					match(WS);
					}
					}
					setState(431);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(432);
				match(SEMI);
				setState(436);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,53,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(433);
						match(WS);
						}
						} 
					}
					setState(438);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,53,_ctx);
				}
				}
				}
				setState(443);
				_errHandler.sync(this);
				_la = _input.LA(1);
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
			match(RBRACE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InlineVectorDeclarationContext extends ParserRuleContext {
		public std::shared_ptr<td::table::FieldDeclaration> field_decl;
		public PrimitiveTypeIdentifierContext val;
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public TerminalNode KW_VECTOR() { return getToken(TypedefParser.KW_VECTOR, 0); }
		public TerminalNode LT() { return getToken(TypedefParser.LT, 0); }
		public TerminalNode GT() { return getToken(TypedefParser.GT, 0); }
		public PrimitiveTypeIdentifierContext primitiveTypeIdentifier() {
			return getRuleContext(PrimitiveTypeIdentifierContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public InlineVectorDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inlineVectorDeclaration; }
	}

	public final InlineVectorDeclarationContext inlineVectorDeclaration() throws RecognitionException {
		InlineVectorDeclarationContext _localctx = new InlineVectorDeclarationContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_inlineVectorDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(452);
			identifier();
			setState(456);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(453);
				match(WS);
				}
				}
				setState(458);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
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
			match(KW_VECTOR);
			setState(470);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(467);
				match(WS);
				}
				}
				setState(472);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(473);
			match(LT);
			setState(477);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(474);
				match(WS);
				}
				}
				setState(479);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(480);
			((InlineVectorDeclarationContext)_localctx).val = primitiveTypeIdentifier();
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

	public static class InlineMapDeclarationContext extends ParserRuleContext {
		public std::shared_ptr<td::table::FieldDeclaration> field_decl;
		public PrimitiveTypeIdentifierContext key;
		public PrimitiveTypeIdentifierContext val;
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public TerminalNode KW_MAP() { return getToken(TypedefParser.KW_MAP, 0); }
		public TerminalNode LT() { return getToken(TypedefParser.LT, 0); }
		public TerminalNode COMMA() { return getToken(TypedefParser.COMMA, 0); }
		public TerminalNode GT() { return getToken(TypedefParser.GT, 0); }
		public List<PrimitiveTypeIdentifierContext> primitiveTypeIdentifier() {
			return getRuleContexts(PrimitiveTypeIdentifierContext.class);
		}
		public PrimitiveTypeIdentifierContext primitiveTypeIdentifier(int i) {
			return getRuleContext(PrimitiveTypeIdentifierContext.class,i);
		}
		public List<TerminalNode> WS() { return getTokens(TypedefParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(TypedefParser.WS, i);
		}
		public InlineMapDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inlineMapDeclaration; }
	}

	public final InlineMapDeclarationContext inlineMapDeclaration() throws RecognitionException {
		InlineMapDeclarationContext _localctx = new InlineMapDeclarationContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_inlineMapDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(489);
			identifier();
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
			match(KW_MAP);
			setState(507);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(504);
				match(WS);
				}
				}
				setState(509);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(510);
			match(LT);
			setState(514);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(511);
				match(WS);
				}
				}
				setState(516);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(517);
			((InlineMapDeclarationContext)_localctx).key = primitiveTypeIdentifier();
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
			match(COMMA);
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
			((InlineMapDeclarationContext)_localctx).val = primitiveTypeIdentifier();
			setState(535);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(532);
				match(WS);
				}
				}
				setState(537);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(538);
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
		enterRule(_localctx, 26, RULE_typedefVersionDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(540);
			match(KW_TYPEDEF);
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
			match(EQ);
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
			identifier();
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
		enterRule(_localctx, 28, RULE_moduleDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(563);
			match(KW_MODULE);
			setState(565); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(564);
				match(WS);
				}
				}
				setState(567); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==WS );
			setState(569);
			simplePath();
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
		enterRule(_localctx, 30, RULE_useDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(578);
			match(KW_USE);
			setState(580); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(579);
				match(WS);
				}
				}
				setState(582); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==WS );
			setState(584);
			useTree();
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
		enterRule(_localctx, 32, RULE_useTree);
		int _la;
		try {
			int _alt;
			setState(622);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,82,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(597);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE || _la==PATHSEP) {
					{
					setState(594);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,75,_ctx) ) {
					case 1:
						{
						setState(593);
						simplePath();
						}
						break;
					}
					setState(596);
					match(PATHSEP);
					}
				}

				setState(615);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case STAR:
					{
					setState(599);
					match(STAR);
					}
					break;
				case LBRACE:
					{
					setState(600);
					match(LBRACE);
					setState(612);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (((((_la - 85)) & ~0x3f) == 0 && ((1L << (_la - 85)) & ((1L << (NON_KEYWORD_IDENTIFIER - 85)) | (1L << (RAW_ESCAPE - 85)) | (1L << (STAR - 85)))) != 0) || _la==PATHSEP || _la==LBRACE) {
						{
						setState(601);
						useTree();
						setState(606);
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,77,_ctx);
						while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
							if ( _alt==1 ) {
								{
								{
								setState(602);
								match(COMMA);
								setState(603);
								useTree();
								}
								} 
							}
							setState(608);
							_errHandler.sync(this);
							_alt = getInterpreter().adaptivePredict(_input,77,_ctx);
						}
						setState(610);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(609);
							match(COMMA);
							}
						}

						}
					}

					setState(614);
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
				setState(617);
				simplePath();
				setState(620);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_AS) {
					{
					setState(618);
					match(KW_AS);
					setState(619);
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
		enterRule(_localctx, 34, RULE_simplePath);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(625);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PATHSEP) {
				{
				setState(624);
				((SimplePathContext)_localctx).leading_pathsep = match(PATHSEP);
				}
			}

			setState(627);
			identifier();
			setState(632);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,84,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(628);
					match(PATHSEP);
					setState(629);
					identifier();
					}
					} 
				}
				setState(634);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,84,_ctx);
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

	public static class PrimitiveLiteralContext extends ParserRuleContext {
		public td::table::PrimitiveValue val;
		public BoolLiteralContext boolLiteral() {
			return getRuleContext(BoolLiteralContext.class,0);
		}
		public CharLiteralContext charLiteral() {
			return getRuleContext(CharLiteralContext.class,0);
		}
		public F32LiteralContext f32Literal() {
			return getRuleContext(F32LiteralContext.class,0);
		}
		public F64LiteralContext f64Literal() {
			return getRuleContext(F64LiteralContext.class,0);
		}
		public U8LiteralContext u8Literal() {
			return getRuleContext(U8LiteralContext.class,0);
		}
		public U16LiteralContext u16Literal() {
			return getRuleContext(U16LiteralContext.class,0);
		}
		public U32LiteralContext u32Literal() {
			return getRuleContext(U32LiteralContext.class,0);
		}
		public U64LiteralContext u64Literal() {
			return getRuleContext(U64LiteralContext.class,0);
		}
		public I8LiteralContext i8Literal() {
			return getRuleContext(I8LiteralContext.class,0);
		}
		public I16LiteralContext i16Literal() {
			return getRuleContext(I16LiteralContext.class,0);
		}
		public I32LiteralContext i32Literal() {
			return getRuleContext(I32LiteralContext.class,0);
		}
		public I64LiteralContext i64Literal() {
			return getRuleContext(I64LiteralContext.class,0);
		}
		public PrimitiveLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primitiveLiteral; }
	}

	public final PrimitiveLiteralContext primitiveLiteral() throws RecognitionException {
		PrimitiveLiteralContext _localctx = new PrimitiveLiteralContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_primitiveLiteral);
		try {
			setState(647);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,85,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(635);
				boolLiteral();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(636);
				charLiteral();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(637);
				f32Literal();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(638);
				f64Literal();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(639);
				u8Literal();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(640);
				u16Literal();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(641);
				u32Literal();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(642);
				u64Literal();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(643);
				i8Literal();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(644);
				i16Literal();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(645);
				i32Literal();
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(646);
				i64Literal();
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

	public static class BoolLiteralContext extends ParserRuleContext {
		public bool val;
		public TerminalNode KW_TRUE() { return getToken(TypedefParser.KW_TRUE, 0); }
		public TerminalNode KW_FALSE() { return getToken(TypedefParser.KW_FALSE, 0); }
		public BoolLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_boolLiteral; }
	}

	public final BoolLiteralContext boolLiteral() throws RecognitionException {
		BoolLiteralContext _localctx = new BoolLiteralContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_boolLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(649);
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
		public char32_t val;
		public TerminalNode CHAR_LITERAL() { return getToken(TypedefParser.CHAR_LITERAL, 0); }
		public CharLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_charLiteral; }
	}

	public final CharLiteralContext charLiteral() throws RecognitionException {
		CharLiteralContext _localctx = new CharLiteralContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_charLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(651);
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
		public float val;
		public FloatLiteralContext floatLiteral() {
			return getRuleContext(FloatLiteralContext.class,0);
		}
		public TerminalNode KW_F32() { return getToken(TypedefParser.KW_F32, 0); }
		public F32LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_f32Literal; }
	}

	public final F32LiteralContext f32Literal() throws RecognitionException {
		F32LiteralContext _localctx = new F32LiteralContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_f32Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(653);
			floatLiteral();
			setState(655);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==KW_F32) {
				{
				setState(654);
				match(KW_F32);
				}
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

	public static class F64LiteralContext extends ParserRuleContext {
		public double val;
		public FloatLiteralContext floatLiteral() {
			return getRuleContext(FloatLiteralContext.class,0);
		}
		public TerminalNode KW_F64() { return getToken(TypedefParser.KW_F64, 0); }
		public F64LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_f64Literal; }
	}

	public final F64LiteralContext f64Literal() throws RecognitionException {
		F64LiteralContext _localctx = new F64LiteralContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_f64Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(657);
			floatLiteral();
			setState(658);
			match(KW_F64);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FloatLiteralContext extends ParserRuleContext {
		public TerminalNode FLOAT_LITERAL() { return getToken(TypedefParser.FLOAT_LITERAL, 0); }
		public FloatLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_floatLiteral; }
	}

	public final FloatLiteralContext floatLiteral() throws RecognitionException {
		FloatLiteralContext _localctx = new FloatLiteralContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_floatLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(660);
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
		public uint8_t val;
		public IntLiteralContext intLiteral() {
			return getRuleContext(IntLiteralContext.class,0);
		}
		public TerminalNode KW_U8() { return getToken(TypedefParser.KW_U8, 0); }
		public U8LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u8Literal; }
	}

	public final U8LiteralContext u8Literal() throws RecognitionException {
		U8LiteralContext _localctx = new U8LiteralContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_u8Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(662);
			intLiteral();
			setState(663);
			match(KW_U8);
			}
		}
		catch (RecognitionException re) {
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
		public uint16_t val;
		public IntLiteralContext intLiteral() {
			return getRuleContext(IntLiteralContext.class,0);
		}
		public TerminalNode KW_U16() { return getToken(TypedefParser.KW_U16, 0); }
		public U16LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u16Literal; }
	}

	public final U16LiteralContext u16Literal() throws RecognitionException {
		U16LiteralContext _localctx = new U16LiteralContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_u16Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(665);
			intLiteral();
			setState(666);
			match(KW_U16);
			}
		}
		catch (RecognitionException re) {
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
		public uint32_t val;
		public IntLiteralContext intLiteral() {
			return getRuleContext(IntLiteralContext.class,0);
		}
		public TerminalNode KW_U32() { return getToken(TypedefParser.KW_U32, 0); }
		public U32LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u32Literal; }
	}

	public final U32LiteralContext u32Literal() throws RecognitionException {
		U32LiteralContext _localctx = new U32LiteralContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_u32Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(668);
			intLiteral();
			setState(669);
			match(KW_U32);
			}
		}
		catch (RecognitionException re) {
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
		public uint64_t val;
		public IntLiteralContext intLiteral() {
			return getRuleContext(IntLiteralContext.class,0);
		}
		public TerminalNode KW_U64() { return getToken(TypedefParser.KW_U64, 0); }
		public U64LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u64Literal; }
	}

	public final U64LiteralContext u64Literal() throws RecognitionException {
		U64LiteralContext _localctx = new U64LiteralContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_u64Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(671);
			intLiteral();
			setState(672);
			match(KW_U64);
			}
		}
		catch (RecognitionException re) {
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
		public int8_t val;
		public IntLiteralContext intLiteral() {
			return getRuleContext(IntLiteralContext.class,0);
		}
		public TerminalNode KW_I8() { return getToken(TypedefParser.KW_I8, 0); }
		public I8LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i8Literal; }
	}

	public final I8LiteralContext i8Literal() throws RecognitionException {
		I8LiteralContext _localctx = new I8LiteralContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_i8Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(674);
			intLiteral();
			setState(675);
			match(KW_I8);
			}
		}
		catch (RecognitionException re) {
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
		public int16_t val;
		public IntLiteralContext intLiteral() {
			return getRuleContext(IntLiteralContext.class,0);
		}
		public TerminalNode KW_I16() { return getToken(TypedefParser.KW_I16, 0); }
		public I16LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i16Literal; }
	}

	public final I16LiteralContext i16Literal() throws RecognitionException {
		I16LiteralContext _localctx = new I16LiteralContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_i16Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(677);
			intLiteral();
			setState(678);
			match(KW_I16);
			}
		}
		catch (RecognitionException re) {
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
		public int32_t val;
		public IntLiteralContext intLiteral() {
			return getRuleContext(IntLiteralContext.class,0);
		}
		public TerminalNode KW_I32() { return getToken(TypedefParser.KW_I32, 0); }
		public I32LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i32Literal; }
	}

	public final I32LiteralContext i32Literal() throws RecognitionException {
		I32LiteralContext _localctx = new I32LiteralContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_i32Literal);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(680);
			intLiteral();
			setState(682);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==KW_I32) {
				{
				setState(681);
				match(KW_I32);
				}
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
		public int64_t val;
		public IntLiteralContext intLiteral() {
			return getRuleContext(IntLiteralContext.class,0);
		}
		public TerminalNode KW_I64() { return getToken(TypedefParser.KW_I64, 0); }
		public I64LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i64Literal; }
	}

	public final I64LiteralContext i64Literal() throws RecognitionException {
		I64LiteralContext _localctx = new I64LiteralContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_i64Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(684);
			intLiteral();
			setState(685);
			match(KW_I64);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IntLiteralContext extends ParserRuleContext {
		public TerminalNode DEC_DIGITS() { return getToken(TypedefParser.DEC_DIGITS, 0); }
		public TerminalNode DEC_DIGITS_UNDERSCORE() { return getToken(TypedefParser.DEC_DIGITS_UNDERSCORE, 0); }
		public TerminalNode MINUS() { return getToken(TypedefParser.MINUS, 0); }
		public TerminalNode HEX_PREFIX() { return getToken(TypedefParser.HEX_PREFIX, 0); }
		public TerminalNode HEX_DIGITS() { return getToken(TypedefParser.HEX_DIGITS, 0); }
		public TerminalNode HEX_DIGITS_UNDERSCORE() { return getToken(TypedefParser.HEX_DIGITS_UNDERSCORE, 0); }
		public TerminalNode OCT_PREFIX() { return getToken(TypedefParser.OCT_PREFIX, 0); }
		public TerminalNode OCT_DIGITS() { return getToken(TypedefParser.OCT_DIGITS, 0); }
		public TerminalNode OCT_DIGITS_UNDERSCORE() { return getToken(TypedefParser.OCT_DIGITS_UNDERSCORE, 0); }
		public TerminalNode BIN_PREFIX() { return getToken(TypedefParser.BIN_PREFIX, 0); }
		public TerminalNode BIN_DIGITS() { return getToken(TypedefParser.BIN_DIGITS, 0); }
		public TerminalNode BIN_DIGITS_UNDERSCORE() { return getToken(TypedefParser.BIN_DIGITS_UNDERSCORE, 0); }
		public IntLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_intLiteral; }
	}

	public final IntLiteralContext intLiteral() throws RecognitionException {
		IntLiteralContext _localctx = new IntLiteralContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_intLiteral);
		int _la;
		try {
			setState(697);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(688);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(687);
					match(MINUS);
					}
				}

				setState(690);
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
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(691);
				match(HEX_PREFIX);
				setState(692);
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
				enterOuterAlt(_localctx, 3);
				{
				{
				setState(693);
				match(OCT_PREFIX);
				setState(694);
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
				enterOuterAlt(_localctx, 4);
				{
				{
				setState(695);
				match(BIN_PREFIX);
				setState(696);
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
		catch (RecognitionException re) {
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
		enterRule(_localctx, 66, RULE_stringLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(699);
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
		enterRule(_localctx, 68, RULE_identifier);
		try {
			setState(704);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NON_KEYWORD_IDENTIFIER:
				enterOuterAlt(_localctx, 1);
				{
				setState(701);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(702);
				match(RAW_ESCAPE);
				setState(703);
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

	public static class PrimitiveTypeIdentifierContext extends ParserRuleContext {
		public td::table::PrimitiveType primitive_type;
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
		public PrimitiveTypeIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primitiveTypeIdentifier; }
	}

	public final PrimitiveTypeIdentifierContext primitiveTypeIdentifier() throws RecognitionException {
		PrimitiveTypeIdentifierContext _localctx = new PrimitiveTypeIdentifierContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_primitiveTypeIdentifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(706);
			_la = _input.LA(1);
			if ( !(((((_la - 72)) & ~0x3f) == 0 && ((1L << (_la - 72)) & ((1L << (KW_BOOL - 72)) | (1L << (KW_CHAR - 72)) | (1L << (KW_STRING - 72)) | (1L << (KW_F32 - 72)) | (1L << (KW_F64 - 72)) | (1L << (KW_U8 - 72)) | (1L << (KW_U16 - 72)) | (1L << (KW_U32 - 72)) | (1L << (KW_U64 - 72)) | (1L << (KW_I8 - 72)) | (1L << (KW_I16 - 72)) | (1L << (KW_I32 - 72)) | (1L << (KW_I64 - 72)))) != 0)) ) {
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
		enterRule(_localctx, 72, RULE_keyword);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(708);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00a3\u02c9\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\3\2\7\2N\n\2\f\2\16\2Q\13\2\3\2\3"+
		"\2\7\2U\n\2\f\2\16\2X\13\2\3\2\5\2[\n\2\3\2\7\2^\n\2\f\2\16\2a\13\2\3"+
		"\2\7\2d\n\2\f\2\16\2g\13\2\3\2\7\2j\n\2\f\2\16\2m\13\2\3\2\7\2p\n\2\f"+
		"\2\16\2s\13\2\3\2\7\2v\n\2\f\2\16\2y\13\2\3\2\3\2\3\3\3\3\7\3\177\n\3"+
		"\f\3\16\3\u0082\13\3\3\3\3\3\7\3\u0086\n\3\f\3\16\3\u0089\13\3\3\3\3\3"+
		"\7\3\u008d\n\3\f\3\16\3\u0090\13\3\3\3\3\3\7\3\u0094\n\3\f\3\16\3\u0097"+
		"\13\3\3\3\3\3\7\3\u009b\n\3\f\3\16\3\u009e\13\3\7\3\u00a0\n\3\f\3\16\3"+
		"\u00a3\13\3\3\3\7\3\u00a6\n\3\f\3\16\3\u00a9\13\3\3\3\3\3\3\4\3\4\7\4"+
		"\u00af\n\4\f\4\16\4\u00b2\13\4\3\4\3\4\7\4\u00b6\n\4\f\4\16\4\u00b9\13"+
		"\4\3\4\3\4\7\4\u00bd\n\4\f\4\16\4\u00c0\13\4\3\4\3\4\7\4\u00c4\n\4\f\4"+
		"\16\4\u00c7\13\4\3\4\3\4\7\4\u00cb\n\4\f\4\16\4\u00ce\13\4\7\4\u00d0\n"+
		"\4\f\4\16\4\u00d3\13\4\3\4\3\4\3\5\3\5\7\5\u00d9\n\5\f\5\16\5\u00dc\13"+
		"\5\3\5\3\5\7\5\u00e0\n\5\f\5\16\5\u00e3\13\5\3\5\3\5\7\5\u00e7\n\5\f\5"+
		"\16\5\u00ea\13\5\3\5\3\5\7\5\u00ee\n\5\f\5\16\5\u00f1\13\5\3\5\3\5\3\6"+
		"\3\6\7\6\u00f7\n\6\f\6\16\6\u00fa\13\6\3\6\3\6\7\6\u00fe\n\6\f\6\16\6"+
		"\u0101\13\6\3\6\3\6\7\6\u0105\n\6\f\6\16\6\u0108\13\6\3\6\3\6\7\6\u010c"+
		"\n\6\f\6\16\6\u010f\13\6\3\6\3\6\7\6\u0113\n\6\f\6\16\6\u0116\13\6\3\6"+
		"\3\6\7\6\u011a\n\6\f\6\16\6\u011d\13\6\3\6\3\6\3\7\3\7\5\7\u0123\n\7\3"+
		"\b\3\b\3\b\3\b\5\b\u0129\n\b\3\b\7\b\u012c\n\b\f\b\16\b\u012f\13\b\3\b"+
		"\3\b\3\t\3\t\3\t\3\t\3\t\5\t\u0138\n\t\3\n\3\n\7\n\u013c\n\n\f\n\16\n"+
		"\u013f\13\n\3\n\3\n\7\n\u0143\n\n\f\n\16\n\u0146\13\n\3\n\3\n\7\n\u014a"+
		"\n\n\f\n\16\n\u014d\13\n\3\n\3\n\7\n\u0151\n\n\f\n\16\n\u0154\13\n\3\n"+
		"\5\n\u0157\n\n\3\13\3\13\7\13\u015b\n\13\f\13\16\13\u015e\13\13\3\13\3"+
		"\13\7\13\u0162\n\13\f\13\16\13\u0165\13\13\3\13\3\13\7\13\u0169\n\13\f"+
		"\13\16\13\u016c\13\13\3\13\3\13\7\13\u0170\n\13\f\13\16\13\u0173\13\13"+
		"\3\13\3\13\7\13\u0177\n\13\f\13\16\13\u017a\13\13\3\13\3\13\7\13\u017e"+
		"\n\13\f\13\16\13\u0181\13\13\7\13\u0183\n\13\f\13\16\13\u0186\13\13\3"+
		"\13\7\13\u0189\n\13\f\13\16\13\u018c\13\13\3\13\3\13\3\f\3\f\7\f\u0192"+
		"\n\f\f\f\16\f\u0195\13\f\3\f\3\f\7\f\u0199\n\f\f\f\16\f\u019c\13\f\3\f"+
		"\3\f\7\f\u01a0\n\f\f\f\16\f\u01a3\13\f\3\f\3\f\7\f\u01a7\n\f\f\f\16\f"+
		"\u01aa\13\f\3\f\3\f\7\f\u01ae\n\f\f\f\16\f\u01b1\13\f\3\f\3\f\7\f\u01b5"+
		"\n\f\f\f\16\f\u01b8\13\f\7\f\u01ba\n\f\f\f\16\f\u01bd\13\f\3\f\7\f\u01c0"+
		"\n\f\f\f\16\f\u01c3\13\f\3\f\3\f\3\r\3\r\7\r\u01c9\n\r\f\r\16\r\u01cc"+
		"\13\r\3\r\3\r\7\r\u01d0\n\r\f\r\16\r\u01d3\13\r\3\r\3\r\7\r\u01d7\n\r"+
		"\f\r\16\r\u01da\13\r\3\r\3\r\7\r\u01de\n\r\f\r\16\r\u01e1\13\r\3\r\3\r"+
		"\7\r\u01e5\n\r\f\r\16\r\u01e8\13\r\3\r\3\r\3\16\3\16\7\16\u01ee\n\16\f"+
		"\16\16\16\u01f1\13\16\3\16\3\16\7\16\u01f5\n\16\f\16\16\16\u01f8\13\16"+
		"\3\16\3\16\7\16\u01fc\n\16\f\16\16\16\u01ff\13\16\3\16\3\16\7\16\u0203"+
		"\n\16\f\16\16\16\u0206\13\16\3\16\3\16\7\16\u020a\n\16\f\16\16\16\u020d"+
		"\13\16\3\16\3\16\7\16\u0211\n\16\f\16\16\16\u0214\13\16\3\16\3\16\7\16"+
		"\u0218\n\16\f\16\16\16\u021b\13\16\3\16\3\16\3\17\3\17\7\17\u0221\n\17"+
		"\f\17\16\17\u0224\13\17\3\17\3\17\7\17\u0228\n\17\f\17\16\17\u022b\13"+
		"\17\3\17\3\17\7\17\u022f\n\17\f\17\16\17\u0232\13\17\3\17\3\17\3\20\3"+
		"\20\6\20\u0238\n\20\r\20\16\20\u0239\3\20\3\20\7\20\u023e\n\20\f\20\16"+
		"\20\u0241\13\20\3\20\3\20\3\21\3\21\6\21\u0247\n\21\r\21\16\21\u0248\3"+
		"\21\3\21\7\21\u024d\n\21\f\21\16\21\u0250\13\21\3\21\3\21\3\22\5\22\u0255"+
		"\n\22\3\22\5\22\u0258\n\22\3\22\3\22\3\22\3\22\3\22\7\22\u025f\n\22\f"+
		"\22\16\22\u0262\13\22\3\22\5\22\u0265\n\22\5\22\u0267\n\22\3\22\5\22\u026a"+
		"\n\22\3\22\3\22\3\22\5\22\u026f\n\22\5\22\u0271\n\22\3\23\5\23\u0274\n"+
		"\23\3\23\3\23\3\23\7\23\u0279\n\23\f\23\16\23\u027c\13\23\3\24\3\24\3"+
		"\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\3\24\5\24\u028a\n\24\3\25"+
		"\3\25\3\26\3\26\3\27\3\27\5\27\u0292\n\27\3\30\3\30\3\30\3\31\3\31\3\32"+
		"\3\32\3\32\3\33\3\33\3\33\3\34\3\34\3\34\3\35\3\35\3\35\3\36\3\36\3\36"+
		"\3\37\3\37\3\37\3 \3 \5 \u02ad\n \3!\3!\3!\3\"\5\"\u02b3\n\"\3\"\3\"\3"+
		"\"\3\"\3\"\3\"\3\"\5\"\u02bc\n\"\3#\3#\3$\3$\3$\5$\u02c3\n$\3%\3%\3&\3"+
		"&\3&\2\2\'\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\66"+
		"8:<>@BDFHJ\2\n\4\2\6\6\f\f\3\2de\3\2fg\3\2hi\3\2jk\3\2bc\3\2JV\5\2\4\b"+
		"\n\22\24I\2\u030f\2O\3\2\2\2\4|\3\2\2\2\6\u00ac\3\2\2\2\b\u00d6\3\2\2"+
		"\2\n\u00f4\3\2\2\2\f\u0122\3\2\2\2\16\u0128\3\2\2\2\20\u0137\3\2\2\2\22"+
		"\u0139\3\2\2\2\24\u0158\3\2\2\2\26\u018f\3\2\2\2\30\u01c6\3\2\2\2\32\u01eb"+
		"\3\2\2\2\34\u021e\3\2\2\2\36\u0235\3\2\2\2 \u0244\3\2\2\2\"\u0270\3\2"+
		"\2\2$\u0273\3\2\2\2&\u0289\3\2\2\2(\u028b\3\2\2\2*\u028d\3\2\2\2,\u028f"+
		"\3\2\2\2.\u0293\3\2\2\2\60\u0296\3\2\2\2\62\u0298\3\2\2\2\64\u029b\3\2"+
		"\2\2\66\u029e\3\2\2\28\u02a1\3\2\2\2:\u02a4\3\2\2\2<\u02a7\3\2\2\2>\u02aa"+
		"\3\2\2\2@\u02ae\3\2\2\2B\u02bb\3\2\2\2D\u02bd\3\2\2\2F\u02c2\3\2\2\2H"+
		"\u02c4\3\2\2\2J\u02c6\3\2\2\2LN\7`\2\2ML\3\2\2\2NQ\3\2\2\2OM\3\2\2\2O"+
		"P\3\2\2\2PR\3\2\2\2QO\3\2\2\2RV\5\34\17\2SU\7`\2\2TS\3\2\2\2UX\3\2\2\2"+
		"VT\3\2\2\2VW\3\2\2\2WZ\3\2\2\2XV\3\2\2\2Y[\5\36\20\2ZY\3\2\2\2Z[\3\2\2"+
		"\2[e\3\2\2\2\\^\7`\2\2]\\\3\2\2\2^a\3\2\2\2_]\3\2\2\2_`\3\2\2\2`b\3\2"+
		"\2\2a_\3\2\2\2bd\5 \21\2c_\3\2\2\2dg\3\2\2\2ec\3\2\2\2ef\3\2\2\2fq\3\2"+
		"\2\2ge\3\2\2\2hj\7`\2\2ih\3\2\2\2jm\3\2\2\2ki\3\2\2\2kl\3\2\2\2ln\3\2"+
		"\2\2mk\3\2\2\2np\5\16\b\2ok\3\2\2\2ps\3\2\2\2qo\3\2\2\2qr\3\2\2\2rw\3"+
		"\2\2\2sq\3\2\2\2tv\7`\2\2ut\3\2\2\2vy\3\2\2\2wu\3\2\2\2wx\3\2\2\2xz\3"+
		"\2\2\2yw\3\2\2\2z{\7\2\2\3{\3\3\2\2\2|\u0080\7\13\2\2}\177\7`\2\2~}\3"+
		"\2\2\2\177\u0082\3\2\2\2\u0080~\3\2\2\2\u0080\u0081\3\2\2\2\u0081\u0083"+
		"\3\2\2\2\u0082\u0080\3\2\2\2\u0083\u0087\5F$\2\u0084\u0086\7`\2\2\u0085"+
		"\u0084\3\2\2\2\u0086\u0089\3\2\2\2\u0087\u0085\3\2\2\2\u0087\u0088\3\2"+
		"\2\2\u0088\u008a\3\2\2\2\u0089\u0087\3\2\2\2\u008a\u008e\7\u009e\2\2\u008b"+
		"\u008d\7`\2\2\u008c\u008b\3\2\2\2\u008d\u0090\3\2\2\2\u008e\u008c\3\2"+
		"\2\2\u008e\u008f\3\2\2\2\u008f\u00a1\3\2\2\2\u0090\u008e\3\2\2\2\u0091"+
		"\u0095\5\f\7\2\u0092\u0094\7`\2\2\u0093\u0092\3\2\2\2\u0094\u0097\3\2"+
		"\2\2\u0095\u0093\3\2\2\2\u0095\u0096\3\2\2\2\u0096\u0098\3\2\2\2\u0097"+
		"\u0095\3\2\2\2\u0098\u009c\7\u0096\2\2\u0099\u009b\7`\2\2\u009a\u0099"+
		"\3\2\2\2\u009b\u009e\3\2\2\2\u009c\u009a\3\2\2\2\u009c\u009d\3\2\2\2\u009d"+
		"\u00a0\3\2\2\2\u009e\u009c\3\2\2\2\u009f\u0091\3\2\2\2\u00a0\u00a3\3\2"+
		"\2\2\u00a1\u009f\3\2\2\2\u00a1\u00a2\3\2\2\2\u00a2\u00a7\3\2\2\2\u00a3"+
		"\u00a1\3\2\2\2\u00a4\u00a6\7`\2\2\u00a5\u00a4\3\2\2\2\u00a6\u00a9\3\2"+
		"\2\2\u00a7\u00a5\3\2\2\2\u00a7\u00a8\3\2\2\2\u00a8\u00aa\3\2\2\2\u00a9"+
		"\u00a7\3\2\2\2\u00aa\u00ab\7\u009f\2\2\u00ab\5\3\2\2\2\u00ac\u00b0\7\20"+
		"\2\2\u00ad\u00af\7`\2\2\u00ae\u00ad\3\2\2\2\u00af\u00b2\3\2\2\2\u00b0"+
		"\u00ae\3\2\2\2\u00b0\u00b1\3\2\2\2\u00b1\u00b3\3\2\2\2\u00b2\u00b0\3\2"+
		"\2\2\u00b3\u00b7\5F$\2\u00b4\u00b6\7`\2\2\u00b5\u00b4\3\2\2\2\u00b6\u00b9"+
		"\3\2\2\2\u00b7\u00b5\3\2\2\2\u00b7\u00b8\3\2\2\2\u00b8\u00ba\3\2\2\2\u00b9"+
		"\u00b7\3\2\2\2\u00ba\u00d1\7\u009e\2\2\u00bb\u00bd\7`\2\2\u00bc\u00bb"+
		"\3\2\2\2\u00bd\u00c0\3\2\2\2\u00be\u00bc\3\2\2\2\u00be\u00bf\3\2\2\2\u00bf"+
		"\u00c1\3\2\2\2\u00c0\u00be\3\2\2\2\u00c1\u00c5\5\f\7\2\u00c2\u00c4\7`"+
		"\2\2\u00c3\u00c2\3\2\2\2\u00c4\u00c7\3\2\2\2\u00c5\u00c3\3\2\2\2\u00c5"+
		"\u00c6\3\2\2\2\u00c6\u00c8\3\2\2\2\u00c7\u00c5\3\2\2\2\u00c8\u00cc\7\u0096"+
		"\2\2\u00c9\u00cb\7`\2\2\u00ca\u00c9\3\2\2\2\u00cb\u00ce\3\2\2\2\u00cc"+
		"\u00ca\3\2\2\2\u00cc\u00cd\3\2\2\2\u00cd\u00d0\3\2\2\2\u00ce\u00cc\3\2"+
		"\2\2\u00cf\u00be\3\2\2\2\u00d0\u00d3\3\2\2\2\u00d1\u00cf\3\2\2\2\u00d1"+
		"\u00d2\3\2\2\2\u00d2\u00d4\3\2\2\2\u00d3\u00d1\3\2\2\2\u00d4\u00d5\7\u009f"+
		"\2\2\u00d5\7\3\2\2\2\u00d6\u00da\7\21\2\2\u00d7\u00d9\7`\2\2\u00d8\u00d7"+
		"\3\2\2\2\u00d9\u00dc\3\2\2\2\u00da\u00d8\3\2\2\2\u00da\u00db\3\2\2\2\u00db"+
		"\u00dd\3\2\2\2\u00dc\u00da\3\2\2\2\u00dd\u00e1\5F$\2\u00de\u00e0\7`\2"+
		"\2\u00df\u00de\3\2\2\2\u00e0\u00e3\3\2\2\2\u00e1\u00df\3\2\2\2\u00e1\u00e2"+
		"\3\2\2\2\u00e2\u00e4\3\2\2\2\u00e3\u00e1\3\2\2\2\u00e4\u00e8\7\u008d\2"+
		"\2\u00e5\u00e7\7`\2\2\u00e6\u00e5\3\2\2\2\u00e7\u00ea\3\2\2\2\u00e8\u00e6"+
		"\3\2\2\2\u00e8\u00e9\3\2\2\2\u00e9\u00eb\3\2\2\2\u00ea\u00e8\3\2\2\2\u00eb"+
		"\u00ef\5H%\2\u00ec\u00ee\7`\2\2\u00ed\u00ec\3\2\2\2\u00ee\u00f1\3\2\2"+
		"\2\u00ef\u00ed\3\2\2\2\u00ef\u00f0\3\2\2\2\u00f0\u00f2\3\2\2\2\u00f1\u00ef"+
		"\3\2\2\2\u00f2\u00f3\7\u008c\2\2\u00f3\t\3\2\2\2\u00f4\u00f8\7\22\2\2"+
		"\u00f5\u00f7\7`\2\2\u00f6\u00f5\3\2\2\2\u00f7\u00fa\3\2\2\2\u00f8\u00f6"+
		"\3\2\2\2\u00f8\u00f9\3\2\2\2\u00f9\u00fb\3\2\2\2\u00fa\u00f8\3\2\2\2\u00fb"+
		"\u00ff\5F$\2\u00fc\u00fe\7`\2\2\u00fd\u00fc\3\2\2\2\u00fe\u0101\3\2\2"+
		"\2\u00ff\u00fd\3\2\2\2\u00ff\u0100\3\2\2\2\u0100\u0102\3\2\2\2\u0101\u00ff"+
		"\3\2\2\2\u0102\u0106\7\u008d\2\2\u0103\u0105\7`\2\2\u0104\u0103\3\2\2"+
		"\2\u0105\u0108\3\2\2\2\u0106\u0104\3\2\2\2\u0106\u0107\3\2\2\2\u0107\u0109"+
		"\3\2\2\2\u0108\u0106\3\2\2\2\u0109\u010d\5H%\2\u010a\u010c\7`\2\2\u010b"+
		"\u010a\3\2\2\2\u010c\u010f\3\2\2\2\u010d\u010b\3\2\2\2\u010d\u010e\3\2"+
		"\2\2\u010e\u0110\3\2\2\2\u010f\u010d\3\2\2\2\u0110\u0114\7\u0095\2\2\u0111"+
		"\u0113\7`\2\2\u0112\u0111\3\2\2\2\u0113\u0116\3\2\2\2\u0114\u0112\3\2"+
		"\2\2\u0114\u0115\3\2\2\2\u0115\u0117\3\2\2\2\u0116\u0114\3\2\2\2\u0117"+
		"\u011b\5H%\2\u0118\u011a\7`\2\2\u0119\u0118\3\2\2\2\u011a\u011d\3\2\2"+
		"\2\u011b\u0119\3\2\2\2\u011b\u011c\3\2\2\2\u011c\u011e\3\2\2\2\u011d\u011b"+
		"\3\2\2\2\u011e\u011f\7\u008c\2\2\u011f\13\3\2\2\2\u0120\u0123\5\16\b\2"+
		"\u0121\u0123\5\20\t\2\u0122\u0120\3\2\2\2\u0122\u0121\3\2\2\2\u0123\r"+
		"\3\2\2\2\u0124\u0129\5\4\3\2\u0125\u0129\5\6\4\2\u0126\u0129\5\b\5\2\u0127"+
		"\u0129\5\n\6\2\u0128\u0124\3\2\2\2\u0128\u0125\3\2\2\2\u0128\u0126\3\2"+
		"\2\2\u0128\u0127\3\2\2\2\u0129\u012d\3\2\2\2\u012a\u012c\7`\2\2\u012b"+
		"\u012a\3\2\2\2\u012c\u012f\3\2\2\2\u012d\u012b\3\2\2\2\u012d\u012e\3\2"+
		"\2\2\u012e\u0130\3\2\2\2\u012f\u012d\3\2\2\2\u0130\u0131\7\u0096\2\2\u0131"+
		"\17\3\2\2\2\u0132\u0138\5\22\n\2\u0133\u0138\5\24\13\2\u0134\u0138\5\26"+
		"\f\2\u0135\u0138\5\30\r\2\u0136\u0138\5\32\16\2\u0137\u0132\3\2\2\2\u0137"+
		"\u0133\3\2\2\2\u0137\u0134\3\2\2\2\u0137\u0135\3\2\2\2\u0137\u0136\3\2"+
		"\2\2\u0138\21\3\2\2\2\u0139\u013d\5F$\2\u013a\u013c\7`\2\2\u013b\u013a"+
		"\3\2\2\2\u013c\u013f\3\2\2\2\u013d\u013b\3\2\2\2\u013d\u013e\3\2\2\2\u013e"+
		"\u0140\3\2\2\2\u013f\u013d\3\2\2\2\u0140\u0144\7\u0097\2\2\u0141\u0143"+
		"\7`\2\2\u0142\u0141\3\2\2\2\u0143\u0146\3\2\2\2\u0144\u0142\3\2\2\2\u0144"+
		"\u0145\3\2\2\2\u0145\u0147\3\2\2\2\u0146\u0144\3\2\2\2\u0147\u0156\5H"+
		"%\2\u0148\u014a\7`\2\2\u0149\u0148\3\2\2\2\u014a\u014d\3\2\2\2\u014b\u0149"+
		"\3\2\2\2\u014b\u014c\3\2\2\2\u014c\u014e\3\2\2\2\u014d\u014b\3\2\2\2\u014e"+
		"\u0152\7\u0089\2\2\u014f\u0151\7`\2\2\u0150\u014f\3\2\2\2\u0151\u0154"+
		"\3\2\2\2\u0152\u0150\3\2\2\2\u0152\u0153\3\2\2\2\u0153\u0155\3\2\2\2\u0154"+
		"\u0152\3\2\2\2\u0155\u0157\5&\24\2\u0156\u014b\3\2\2\2\u0156\u0157\3\2"+
		"\2\2\u0157\23\3\2\2\2\u0158\u015c\5F$\2\u0159\u015b\7`\2\2\u015a\u0159"+
		"\3\2\2\2\u015b\u015e\3\2\2\2\u015c\u015a\3\2\2\2\u015c\u015d\3\2\2\2\u015d"+
		"\u015f\3\2\2\2\u015e\u015c\3\2\2\2\u015f\u0163\7\u0097\2\2\u0160\u0162"+
		"\7`\2\2\u0161\u0160\3\2\2\2\u0162\u0165\3\2\2\2\u0163\u0161\3\2\2\2\u0163"+
		"\u0164\3\2\2\2\u0164\u0166\3\2\2\2\u0165\u0163\3\2\2\2\u0166\u016a\7\13"+
		"\2\2\u0167\u0169\7`\2\2\u0168\u0167\3\2\2\2\u0169\u016c\3\2\2\2\u016a"+
		"\u0168\3\2\2\2\u016a\u016b\3\2\2\2\u016b\u016d\3\2\2\2\u016c\u016a\3\2"+
		"\2\2\u016d\u0171\7\u009e\2\2\u016e\u0170\7`\2\2\u016f\u016e\3\2\2\2\u0170"+
		"\u0173\3\2\2\2\u0171\u016f\3\2\2\2\u0171\u0172\3\2\2\2\u0172\u0184\3\2"+
		"\2\2\u0173\u0171\3\2\2\2\u0174\u0178\5\f\7\2\u0175\u0177\7`\2\2\u0176"+
		"\u0175\3\2\2\2\u0177\u017a\3\2\2\2\u0178\u0176\3\2\2\2\u0178\u0179\3\2"+
		"\2\2\u0179\u017b\3\2\2\2\u017a\u0178\3\2\2\2\u017b\u017f\7\u0096\2\2\u017c"+
		"\u017e\7`\2\2\u017d\u017c\3\2\2\2\u017e\u0181\3\2\2\2\u017f\u017d\3\2"+
		"\2\2\u017f\u0180\3\2\2\2\u0180\u0183\3\2\2\2\u0181\u017f\3\2\2\2\u0182"+
		"\u0174\3\2\2\2\u0183\u0186\3\2\2\2\u0184\u0182\3\2\2\2\u0184\u0185\3\2"+
		"\2\2\u0185\u018a\3\2\2\2\u0186\u0184\3\2\2\2\u0187\u0189\7`\2\2\u0188"+
		"\u0187\3\2\2\2\u0189\u018c\3\2\2\2\u018a\u0188\3\2\2\2\u018a\u018b\3\2"+
		"\2\2\u018b\u018d\3\2\2\2\u018c\u018a\3\2\2\2\u018d\u018e\7\u009f\2\2\u018e"+
		"\25\3\2\2\2\u018f\u0193\5F$\2\u0190\u0192\7`\2\2\u0191\u0190\3\2\2\2\u0192"+
		"\u0195\3\2\2\2\u0193\u0191\3\2\2\2\u0193\u0194\3\2\2\2\u0194\u0196\3\2"+
		"\2\2\u0195\u0193\3\2\2\2\u0196\u019a\7\u0097\2\2\u0197\u0199\7`\2\2\u0198"+
		"\u0197\3\2\2\2\u0199\u019c\3\2\2\2\u019a\u0198\3\2\2\2\u019a\u019b\3\2"+
		"\2\2\u019b\u019d\3\2\2\2\u019c\u019a\3\2\2\2\u019d\u01a1\7\13\2\2\u019e"+
		"\u01a0\7`\2\2\u019f\u019e\3\2\2\2\u01a0\u01a3\3\2\2\2\u01a1\u019f\3\2"+
		"\2\2\u01a1\u01a2\3\2\2\2\u01a2\u01a4\3\2\2\2\u01a3\u01a1\3\2\2\2\u01a4"+
		"\u01a8\7\u009e\2\2\u01a5\u01a7\7`\2\2\u01a6\u01a5\3\2\2\2\u01a7\u01aa"+
		"\3\2\2\2\u01a8\u01a6\3\2\2\2\u01a8\u01a9\3\2\2\2\u01a9\u01bb\3\2\2\2\u01aa"+
		"\u01a8\3\2\2\2\u01ab\u01af\5\f\7\2\u01ac\u01ae\7`\2\2\u01ad\u01ac\3\2"+
		"\2\2\u01ae\u01b1\3\2\2\2\u01af\u01ad\3\2\2\2\u01af\u01b0\3\2\2\2\u01b0"+
		"\u01b2\3\2\2\2\u01b1\u01af\3\2\2\2\u01b2\u01b6\7\u0096\2\2\u01b3\u01b5"+
		"\7`\2\2\u01b4\u01b3\3\2\2\2\u01b5\u01b8\3\2\2\2\u01b6\u01b4\3\2\2\2\u01b6"+
		"\u01b7\3\2\2\2\u01b7\u01ba\3\2\2\2\u01b8\u01b6\3\2\2\2\u01b9\u01ab\3\2"+
		"\2\2\u01ba\u01bd\3\2\2\2\u01bb\u01b9\3\2\2\2\u01bb\u01bc\3\2\2\2\u01bc"+
		"\u01c1\3\2\2\2\u01bd\u01bb\3\2\2\2\u01be\u01c0\7`\2\2\u01bf\u01be\3\2"+
		"\2\2\u01c0\u01c3\3\2\2\2\u01c1\u01bf\3\2\2\2\u01c1\u01c2\3\2\2\2\u01c2"+
		"\u01c4\3\2\2\2\u01c3\u01c1\3\2\2\2\u01c4\u01c5\7\u009f\2\2\u01c5\27\3"+
		"\2\2\2\u01c6\u01ca\5F$\2\u01c7\u01c9\7`\2\2\u01c8\u01c7\3\2\2\2\u01c9"+
		"\u01cc\3\2\2\2\u01ca\u01c8\3\2\2\2\u01ca\u01cb\3\2\2\2\u01cb\u01cd\3\2"+
		"\2\2\u01cc\u01ca\3\2\2\2\u01cd\u01d1\7\u0097\2\2\u01ce\u01d0\7`\2\2\u01cf"+
		"\u01ce\3\2\2\2\u01d0\u01d3\3\2\2\2\u01d1\u01cf\3\2\2\2\u01d1\u01d2\3\2"+
		"\2\2\u01d2\u01d4\3\2\2\2\u01d3\u01d1\3\2\2\2\u01d4\u01d8\7\21\2\2\u01d5"+
		"\u01d7\7`\2\2\u01d6\u01d5\3\2\2\2\u01d7\u01da\3\2\2\2\u01d8\u01d6\3\2"+
		"\2\2\u01d8\u01d9\3\2\2\2\u01d9\u01db\3\2\2\2\u01da\u01d8\3\2\2\2\u01db"+
		"\u01df\7\u008d\2\2\u01dc\u01de\7`\2\2\u01dd\u01dc\3\2\2\2\u01de\u01e1"+
		"\3\2\2\2\u01df\u01dd\3\2\2\2\u01df\u01e0\3\2\2\2\u01e0\u01e2\3\2\2\2\u01e1"+
		"\u01df\3\2\2\2\u01e2\u01e6\5H%\2\u01e3\u01e5\7`\2\2\u01e4\u01e3\3\2\2"+
		"\2\u01e5\u01e8\3\2\2\2\u01e6\u01e4\3\2\2\2\u01e6\u01e7\3\2\2\2\u01e7\u01e9"+
		"\3\2\2\2\u01e8\u01e6\3\2\2\2\u01e9\u01ea\7\u008c\2\2\u01ea\31\3\2\2\2"+
		"\u01eb\u01ef\5F$\2\u01ec\u01ee\7`\2\2\u01ed\u01ec\3\2\2\2\u01ee\u01f1"+
		"\3\2\2\2\u01ef\u01ed\3\2\2\2\u01ef\u01f0\3\2\2\2\u01f0\u01f2\3\2\2\2\u01f1"+
		"\u01ef\3\2\2\2\u01f2\u01f6\7\u0097\2\2\u01f3\u01f5\7`\2\2\u01f4\u01f3"+
		"\3\2\2\2\u01f5\u01f8\3\2\2\2\u01f6\u01f4\3\2\2\2\u01f6\u01f7\3\2\2\2\u01f7"+
		"\u01f9\3\2\2\2\u01f8\u01f6\3\2\2\2\u01f9\u01fd\7\22\2\2\u01fa\u01fc\7"+
		"`\2\2\u01fb\u01fa\3\2\2\2\u01fc\u01ff\3\2\2\2\u01fd\u01fb\3\2\2\2\u01fd"+
		"\u01fe\3\2\2\2\u01fe\u0200\3\2\2\2\u01ff\u01fd\3\2\2\2\u0200\u0204\7\u008d"+
		"\2\2\u0201\u0203\7`\2\2\u0202\u0201\3\2\2\2\u0203\u0206\3\2\2\2\u0204"+
		"\u0202\3\2\2\2\u0204\u0205\3\2\2\2\u0205\u0207\3\2\2\2\u0206\u0204\3\2"+
		"\2\2\u0207\u020b\5H%\2\u0208\u020a\7`\2\2\u0209\u0208\3\2\2\2\u020a\u020d"+
		"\3\2\2\2\u020b\u0209\3\2\2\2\u020b\u020c\3\2\2\2\u020c\u020e\3\2\2\2\u020d"+
		"\u020b\3\2\2\2\u020e\u0212\7\u0095\2\2\u020f\u0211\7`\2\2\u0210\u020f"+
		"\3\2\2\2\u0211\u0214\3\2\2\2\u0212\u0210\3\2\2\2\u0212\u0213\3\2\2\2\u0213"+
		"\u0215\3\2\2\2\u0214\u0212\3\2\2\2\u0215\u0219\5H%\2\u0216\u0218\7`\2"+
		"\2\u0217\u0216\3\2\2\2\u0218\u021b\3\2\2\2\u0219\u0217\3\2\2\2\u0219\u021a"+
		"\3\2\2\2\u021a\u021c\3\2\2\2\u021b\u0219\3\2\2\2\u021c\u021d\7\u008c\2"+
		"\2\u021d\33\3\2\2\2\u021e\u0222\7\16\2\2\u021f\u0221\7`\2\2\u0220\u021f"+
		"\3\2\2\2\u0221\u0224\3\2\2\2\u0222\u0220\3\2\2\2\u0222\u0223\3\2\2\2\u0223"+
		"\u0225\3\2\2\2\u0224\u0222\3\2\2\2\u0225\u0229\7\u0089\2\2\u0226\u0228"+
		"\7`\2\2\u0227\u0226\3\2\2\2\u0228\u022b\3\2\2\2\u0229\u0227\3\2\2\2\u0229"+
		"\u022a\3\2\2\2\u022a\u022c\3\2\2\2\u022b\u0229\3\2\2\2\u022c\u0230\5F"+
		"$\2\u022d\u022f\7`\2\2\u022e\u022d\3\2\2\2\u022f\u0232\3\2\2\2\u0230\u022e"+
		"\3\2\2\2\u0230\u0231\3\2\2\2\u0231\u0233\3\2\2\2\u0232\u0230\3\2\2\2\u0233"+
		"\u0234\7\u0096\2\2\u0234\35\3\2\2\2\u0235\u0237\7\n\2\2\u0236\u0238\7"+
		"`\2\2\u0237\u0236\3\2\2\2\u0238\u0239\3\2\2\2\u0239\u0237\3\2\2\2\u0239"+
		"\u023a\3\2\2\2\u023a\u023b\3\2\2\2\u023b\u023f\5$\23\2\u023c\u023e\7`"+
		"\2\2\u023d\u023c\3\2\2\2\u023e\u0241\3\2\2\2\u023f\u023d\3\2\2\2\u023f"+
		"\u0240\3\2\2\2\u0240\u0242\3\2\2\2\u0241\u023f\3\2\2\2\u0242\u0243\7\u0096"+
		"\2\2\u0243\37\3\2\2\2\u0244\u0246\7\17\2\2\u0245\u0247\7`\2\2\u0246\u0245"+
		"\3\2\2\2\u0247\u0248\3\2\2\2\u0248\u0246\3\2\2\2\u0248\u0249\3\2\2\2\u0249"+
		"\u024a\3\2\2\2\u024a\u024e\5\"\22\2\u024b\u024d\7`\2\2\u024c\u024b\3\2"+
		"\2\2\u024d\u0250\3\2\2\2\u024e\u024c\3\2\2\2\u024e\u024f\3\2\2\2\u024f"+
		"\u0251\3\2\2\2\u0250\u024e\3\2\2\2\u0251\u0252\7\u0096\2\2\u0252!\3\2"+
		"\2\2\u0253\u0255\5$\23\2\u0254\u0253\3\2\2\2\u0254\u0255\3\2\2\2\u0255"+
		"\u0256\3\2\2\2\u0256\u0258\7\u0098\2\2\u0257\u0254\3\2\2\2\u0257\u0258"+
		"\3\2\2\2\u0258\u0269\3\2\2\2\u0259\u026a\7v\2\2\u025a\u0266\7\u009e\2"+
		"\2\u025b\u0260\5\"\22\2\u025c\u025d\7\u0095\2\2\u025d\u025f\5\"\22\2\u025e"+
		"\u025c\3\2\2\2\u025f\u0262\3\2\2\2\u0260\u025e\3\2\2\2\u0260\u0261\3\2"+
		"\2\2\u0261\u0264\3\2\2\2\u0262\u0260\3\2\2\2\u0263\u0265\7\u0095\2\2\u0264"+
		"\u0263\3\2\2\2\u0264\u0265\3\2\2\2\u0265\u0267\3\2\2\2\u0266\u025b\3\2"+
		"\2\2\u0266\u0267\3\2\2\2\u0267\u0268\3\2\2\2\u0268\u026a\7\u009f\2\2\u0269"+
		"\u0259\3\2\2\2\u0269\u025a\3\2\2\2\u026a\u0271\3\2\2\2\u026b\u026e\5$"+
		"\23\2\u026c\u026d\7\4\2\2\u026d\u026f\5F$\2\u026e\u026c\3\2\2\2\u026e"+
		"\u026f\3\2\2\2\u026f\u0271\3\2\2\2\u0270\u0257\3\2\2\2\u0270\u026b\3\2"+
		"\2\2\u0271#\3\2\2\2\u0272\u0274\7\u0098\2\2\u0273\u0272\3\2\2\2\u0273"+
		"\u0274\3\2\2\2\u0274\u0275\3\2\2\2\u0275\u027a\5F$\2\u0276\u0277\7\u0098"+
		"\2\2\u0277\u0279\5F$\2\u0278\u0276\3\2\2\2\u0279\u027c\3\2\2\2\u027a\u0278"+
		"\3\2\2\2\u027a\u027b\3\2\2\2\u027b%\3\2\2\2\u027c\u027a\3\2\2\2\u027d"+
		"\u028a\5(\25\2\u027e\u028a\5*\26\2\u027f\u028a\5,\27\2\u0280\u028a\5."+
		"\30\2\u0281\u028a\5\62\32\2\u0282\u028a\5\64\33\2\u0283\u028a\5\66\34"+
		"\2\u0284\u028a\58\35\2\u0285\u028a\5:\36\2\u0286\u028a\5<\37\2\u0287\u028a"+
		"\5> \2\u0288\u028a\5@!\2\u0289\u027d\3\2\2\2\u0289\u027e\3\2\2\2\u0289"+
		"\u027f\3\2\2\2\u0289\u0280\3\2\2\2\u0289\u0281\3\2\2\2\u0289\u0282\3\2"+
		"\2\2\u0289\u0283\3\2\2\2\u0289\u0284\3\2\2\2\u0289\u0285\3\2\2\2\u0289"+
		"\u0286\3\2\2\2\u0289\u0287\3\2\2\2\u0289\u0288\3\2\2\2\u028a\'\3\2\2\2"+
		"\u028b\u028c\t\2\2\2\u028c)\3\2\2\2\u028d\u028e\7a\2\2\u028e+\3\2\2\2"+
		"\u028f\u0291\5\60\31\2\u0290\u0292\7M\2\2\u0291\u0290\3\2\2\2\u0291\u0292"+
		"\3\2\2\2\u0292-\3\2\2\2\u0293\u0294\5\60\31\2\u0294\u0295\7N\2\2\u0295"+
		"/\3\2\2\2\u0296\u0297\7l\2\2\u0297\61\3\2\2\2\u0298\u0299\5B\"\2\u0299"+
		"\u029a\7O\2\2\u029a\63\3\2\2\2\u029b\u029c\5B\"\2\u029c\u029d\7P\2\2\u029d"+
		"\65\3\2\2\2\u029e\u029f\5B\"\2\u029f\u02a0\7Q\2\2\u02a0\67\3\2\2\2\u02a1"+
		"\u02a2\5B\"\2\u02a2\u02a3\7R\2\2\u02a39\3\2\2\2\u02a4\u02a5\5B\"\2\u02a5"+
		"\u02a6\7S\2\2\u02a6;\3\2\2\2\u02a7\u02a8\5B\"\2\u02a8\u02a9\7T\2\2\u02a9"+
		"=\3\2\2\2\u02aa\u02ac\5B\"\2\u02ab\u02ad\7U\2\2\u02ac\u02ab\3\2\2\2\u02ac"+
		"\u02ad\3\2\2\2\u02ad?\3\2\2\2\u02ae\u02af\5B\"\2\u02af\u02b0\7V\2\2\u02b0"+
		"A\3\2\2\2\u02b1\u02b3\7u\2\2\u02b2\u02b1\3\2\2\2\u02b2\u02b3\3\2\2\2\u02b3"+
		"\u02b4\3\2\2\2\u02b4\u02bc\t\3\2\2\u02b5\u02b6\7p\2\2\u02b6\u02bc\t\4"+
		"\2\2\u02b7\u02b8\7q\2\2\u02b8\u02bc\t\5\2\2\u02b9\u02ba\7r\2\2\u02ba\u02bc"+
		"\t\6\2\2\u02bb\u02b2\3\2\2\2\u02bb\u02b5\3\2\2\2\u02bb\u02b7\3\2\2\2\u02bb"+
		"\u02b9\3\2\2\2\u02bcC\3\2\2\2\u02bd\u02be\t\7\2\2\u02beE\3\2\2\2\u02bf"+
		"\u02c3\7W\2\2\u02c0\u02c1\7s\2\2\u02c1\u02c3\7W\2\2\u02c2\u02bf\3\2\2"+
		"\2\u02c2\u02c0\3\2\2\2\u02c3G\3\2\2\2\u02c4\u02c5\t\b\2\2\u02c5I\3\2\2"+
		"\2\u02c6\u02c7\t\t\2\2\u02c7K\3\2\2\2]OVZ_ekqw\u0080\u0087\u008e\u0095"+
		"\u009c\u00a1\u00a7\u00b0\u00b7\u00be\u00c5\u00cc\u00d1\u00da\u00e1\u00e8"+
		"\u00ef\u00f8\u00ff\u0106\u010d\u0114\u011b\u0122\u0128\u012d\u0137\u013d"+
		"\u0144\u014b\u0152\u0156\u015c\u0163\u016a\u0171\u0178\u017f\u0184\u018a"+
		"\u0193\u019a\u01a1\u01a8\u01af\u01b6\u01bb\u01c1\u01ca\u01d1\u01d8\u01df"+
		"\u01e6\u01ef\u01f6\u01fd\u0204\u020b\u0212\u0219\u0222\u0229\u0230\u0239"+
		"\u023f\u0248\u024e\u0254\u0257\u0260\u0264\u0266\u0269\u026e\u0270\u0273"+
		"\u027a\u0289\u0291\u02ac\u02b2\u02bb\u02c2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}