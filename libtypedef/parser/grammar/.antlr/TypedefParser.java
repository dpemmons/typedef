// Generated from /home/dpemmons/src/typedef/libtypedef/parser/grammar/TypedefParser.g4 by ANTLR 4.9.2

#include "libtypedef/parser/symbol_path.h"
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
		KW_VARIANT=14, KW_VECTOR=15, KW_MAP=16, KW_TEMPLATE=17, KW_AND=18, KW_IN=19, 
		KW_LET=20, KW_NOT=21, KW_OR=22, KW_SIZEOF=23, KW_THIS=24, KW_TRAIT=25, 
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
		CHAR_LITERAL=94, STRING_LITERAL=95, RAW_TEMPLATE_LITERAL=96, TEMPLATE_LITERAL=97, 
		RAW_STRING_LITERAL=98, DEC_DIGITS=99, DEC_DIGITS_UNDERSCORE=100, HEX_DIGITS=101, 
		HEX_DIGITS_UNDERSCORE=102, OCT_DIGITS=103, OCT_DIGITS_UNDERSCORE=104, 
		BIN_DIGITS=105, BIN_DIGITS_UNDERSCORE=106, FLOAT_LITERAL=107, OCT_DIGIT=108, 
		DEC_DIGIT=109, HEX_DIGIT=110, HEX_PREFIX=111, OCT_PREFIX=112, BIN_PREFIX=113, 
		RAW_ESCAPE=114, PLUS=115, MINUS=116, STAR=117, SLASH=118, PERCENT=119, 
		CARET=120, NOT=121, AND=122, OR=123, ANDAND=124, OROR=125, PLUSEQ=126, 
		MINUSEQ=127, STAREQ=128, SLASHEQ=129, PERCENTEQ=130, CARETEQ=131, ANDEQ=132, 
		OREQ=133, SHLEQ=134, SHREQ=135, EQ=136, EQEQ=137, NE=138, GT=139, LT=140, 
		GE=141, LE=142, AT=143, UNDERSCORE=144, DOT=145, DOTDOT=146, DOTDOTDOT=147, 
		COMMA=148, SEMI=149, COLON=150, PATHSEP=151, RARROW=152, FATARROW=153, 
		POUND=154, DOLLAR=155, QUESTION=156, LBRACE=157, RBRACE=158, LBRACK=159, 
		RBRACK=160, LPAREN=161, RPAREN=162, WS=163;
	public static final int
		RULE_compilationUnit = 0, RULE_structDeclaration = 1, RULE_variantDeclaration = 2, 
		RULE_vectorDeclaration = 3, RULE_mapDeclaration = 4, RULE_templateDefinition = 5, 
		RULE_templateBlock = 6, RULE_functionParameter = 7, RULE_typeParameter = 8, 
		RULE_structMember = 9, RULE_typeDeclaration = 10, RULE_fieldDeclaration = 11, 
		RULE_primitiveMemberDeclaration = 12, RULE_symrefMemberDeclaration = 13, 
		RULE_impliedTypePrimitiveMemberDeclaration = 14, RULE_inlineStructDeclaration = 15, 
		RULE_inlineVariantDeclaration = 16, RULE_inlineVectorDeclaration = 17, 
		RULE_inlineMapDeclaration = 18, RULE_typedefVersionDeclaration = 19, RULE_moduleDeclaration = 20, 
		RULE_useDeclaration = 21, RULE_useTree = 22, RULE_simplePath = 23, RULE_explicitPrimitiveLiteral = 24, 
		RULE_boolLiteral = 25, RULE_charLiteral = 26, RULE_stringLiteral = 27, 
		RULE_f32Literal = 28, RULE_f64Literal = 29, RULE_u8Literal = 30, RULE_u16Literal = 31, 
		RULE_u32Literal = 32, RULE_u64Literal = 33, RULE_i8Literal = 34, RULE_i16Literal = 35, 
		RULE_i32Literal = 36, RULE_i64Literal = 37, RULE_floatLiteral = 38, RULE_intLiteral = 39, 
		RULE_identifier = 40, RULE_primitiveTypeIdentifier = 41, RULE_keyword = 42;
	private static String[] makeRuleNames() {
		return new String[] {
			"compilationUnit", "structDeclaration", "variantDeclaration", "vectorDeclaration", 
			"mapDeclaration", "templateDefinition", "templateBlock", "functionParameter", 
			"typeParameter", "structMember", "typeDeclaration", "fieldDeclaration", 
			"primitiveMemberDeclaration", "symrefMemberDeclaration", "impliedTypePrimitiveMemberDeclaration", 
			"inlineStructDeclaration", "inlineVariantDeclaration", "inlineVectorDeclaration", 
			"inlineMapDeclaration", "typedefVersionDeclaration", "moduleDeclaration", 
			"useDeclaration", "useTree", "simplePath", "explicitPrimitiveLiteral", 
			"boolLiteral", "charLiteral", "stringLiteral", "f32Literal", "f64Literal", 
			"u8Literal", "u16Literal", "u32Literal", "u64Literal", "i8Literal", "i16Literal", 
			"i32Literal", "i64Literal", "floatLiteral", "intLiteral", "identifier", 
			"primitiveTypeIdentifier", "keyword"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'array'", "'as'", "'enum'", "'false'", "'fn'", "'impl'", "'message'", 
			"'module'", "'struct'", "'true'", "'type'", "'typedef'", "'use'", "'variant'", 
			"'vector'", "'map'", "'template'", "'and'", "'in'", "'let'", "'not'", 
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
			null, null, null, null, "'0x'", "'0o'", "'0b'", "'r#'", "'+'", "'-'", 
			"'*'", "'/'", "'%'", "'^'", "'!'", "'&'", "'|'", "'&&'", "'||'", "'+='", 
			"'-='", "'*='", "'/='", "'%='", "'^='", "'&='", "'|='", "'<<='", "'>>='", 
			"'='", "'=='", "'!='", "'>'", "'<'", "'>='", "'<='", "'@'", "'_'", "'.'", 
			"'..'", "'...'", "','", "';'", "':'", "'::'", "'->'", "'=>'", "'#'", 
			"'$'", "'?'", "'{'", "'}'", "'['", "']'", "'('", "')'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "KW_ARRAY", "KW_AS", "KW_ENUM", "KW_FALSE", "KW_FN", "KW_IMPL", 
			"KW_MESSAGE", "KW_MODULE", "KW_STRUCT", "KW_TRUE", "KW_TYPE", "KW_TYPEDEF", 
			"KW_USE", "KW_VARIANT", "KW_VECTOR", "KW_MAP", "KW_TEMPLATE", "KW_AND", 
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
			"BLOCK_COMMENT_OR_DOC", "SHEBANG", "CHAR_LITERAL", "STRING_LITERAL", 
			"RAW_TEMPLATE_LITERAL", "TEMPLATE_LITERAL", "RAW_STRING_LITERAL", "DEC_DIGITS", 
			"DEC_DIGITS_UNDERSCORE", "HEX_DIGITS", "HEX_DIGITS_UNDERSCORE", "OCT_DIGITS", 
			"OCT_DIGITS_UNDERSCORE", "BIN_DIGITS", "BIN_DIGITS_UNDERSCORE", "FLOAT_LITERAL", 
			"OCT_DIGIT", "DEC_DIGIT", "HEX_DIGIT", "HEX_PREFIX", "OCT_PREFIX", "BIN_PREFIX", 
			"RAW_ESCAPE", "PLUS", "MINUS", "STAR", "SLASH", "PERCENT", "CARET", "NOT", 
			"AND", "OR", "ANDAND", "OROR", "PLUSEQ", "MINUSEQ", "STAREQ", "SLASHEQ", 
			"PERCENTEQ", "CARETEQ", "ANDEQ", "OREQ", "SHLEQ", "SHREQ", "EQ", "EQEQ", 
			"NE", "GT", "LT", "GE", "LE", "AT", "UNDERSCORE", "DOT", "DOTDOT", "DOTDOTDOT", 
			"COMMA", "SEMI", "COLON", "PATHSEP", "RARROW", "FATARROW", "POUND", "DOLLAR", 
			"QUESTION", "LBRACE", "RBRACE", "LBRACK", "RBRACK", "LPAREN", "RPAREN", 
			"WS"
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
		public ModuleDeclarationContext moduleDeclaration() {
			return getRuleContext(ModuleDeclarationContext.class,0);
		}
		public List<UseDeclarationContext> useDeclaration() {
			return getRuleContexts(UseDeclarationContext.class);
		}
		public UseDeclarationContext useDeclaration(int i) {
			return getRuleContext(UseDeclarationContext.class,i);
		}
		public List<TerminalNode> SEMI() { return getTokens(TypedefParser.SEMI); }
		public TerminalNode SEMI(int i) {
			return getToken(TypedefParser.SEMI, i);
		}
		public List<TypeDeclarationContext> typeDeclaration() {
			return getRuleContexts(TypeDeclarationContext.class);
		}
		public TypeDeclarationContext typeDeclaration(int i) {
			return getRuleContext(TypeDeclarationContext.class,i);
		}
		public List<TemplateDefinitionContext> templateDefinition() {
			return getRuleContexts(TemplateDefinitionContext.class);
		}
		public TemplateDefinitionContext templateDefinition(int i) {
			return getRuleContext(TemplateDefinitionContext.class,i);
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
			enterOuterAlt(_localctx, 1);
			{
			setState(86);
			typedefVersionDeclaration();
			setState(88);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==KW_MODULE) {
				{
				setState(87);
				moduleDeclaration();
				}
			}

			setState(93);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==KW_USE) {
				{
				{
				setState(90);
				useDeclaration();
				}
				}
				setState(95);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(104);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << KW_STRUCT) | (1L << KW_VARIANT) | (1L << KW_VECTOR) | (1L << KW_MAP) | (1L << KW_TEMPLATE))) != 0)) {
				{
				{
				setState(98);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case KW_STRUCT:
				case KW_VARIANT:
				case KW_VECTOR:
				case KW_MAP:
					{
					setState(96);
					typeDeclaration();
					}
					break;
				case KW_TEMPLATE:
					{
					setState(97);
					templateDefinition();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(100);
				match(SEMI);
				}
				}
				setState(106);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(107);
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
			enterOuterAlt(_localctx, 1);
			{
			setState(109);
			match(KW_STRUCT);
			setState(110);
			identifier();
			setState(111);
			match(LBRACE);
			setState(117);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << KW_STRUCT) | (1L << KW_VARIANT) | (1L << KW_VECTOR) | (1L << KW_MAP))) != 0) || _la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE) {
				{
				{
				setState(112);
				structMember();
				setState(113);
				match(SEMI);
				}
				}
				setState(119);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(120);
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
			enterOuterAlt(_localctx, 1);
			{
			setState(122);
			match(KW_VARIANT);
			setState(123);
			identifier();
			setState(124);
			match(LBRACE);
			setState(130);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << KW_STRUCT) | (1L << KW_VARIANT) | (1L << KW_VECTOR) | (1L << KW_MAP))) != 0) || _la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE) {
				{
				{
				setState(125);
				structMember();
				setState(126);
				match(SEMI);
				}
				}
				setState(132);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(133);
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
		public IdentifierContext symbolName;
		public TerminalNode KW_VECTOR() { return getToken(TypedefParser.KW_VECTOR, 0); }
		public TerminalNode LT() { return getToken(TypedefParser.LT, 0); }
		public TypeParameterContext typeParameter() {
			return getRuleContext(TypeParameterContext.class,0);
		}
		public TerminalNode GT() { return getToken(TypedefParser.GT, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public VectorDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_vectorDeclaration; }
	}

	public final VectorDeclarationContext vectorDeclaration() throws RecognitionException {
		VectorDeclarationContext _localctx = new VectorDeclarationContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_vectorDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(135);
			match(KW_VECTOR);
			setState(136);
			((VectorDeclarationContext)_localctx).symbolName = identifier();
			setState(137);
			match(LT);
			setState(138);
			typeParameter();
			setState(139);
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
		public IdentifierContext symbolName;
		public TypeParameterContext key;
		public TypeParameterContext val;
		public TerminalNode KW_MAP() { return getToken(TypedefParser.KW_MAP, 0); }
		public TerminalNode LT() { return getToken(TypedefParser.LT, 0); }
		public TerminalNode COMMA() { return getToken(TypedefParser.COMMA, 0); }
		public TerminalNode GT() { return getToken(TypedefParser.GT, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public List<TypeParameterContext> typeParameter() {
			return getRuleContexts(TypeParameterContext.class);
		}
		public TypeParameterContext typeParameter(int i) {
			return getRuleContext(TypeParameterContext.class,i);
		}
		public MapDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mapDeclaration; }
	}

	public final MapDeclarationContext mapDeclaration() throws RecognitionException {
		MapDeclarationContext _localctx = new MapDeclarationContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_mapDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(141);
			match(KW_MAP);
			setState(142);
			((MapDeclarationContext)_localctx).symbolName = identifier();
			setState(143);
			match(LT);
			setState(144);
			((MapDeclarationContext)_localctx).key = typeParameter();
			setState(145);
			match(COMMA);
			setState(146);
			((MapDeclarationContext)_localctx).val = typeParameter();
			setState(147);
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

	public static class TemplateDefinitionContext extends ParserRuleContext {
		public std::unique_ptr<td::table::TemplateFunctionDefinition> tmpl;
		public TerminalNode KW_TEMPLATE() { return getToken(TypedefParser.KW_TEMPLATE, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(TypedefParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(TypedefParser.RPAREN, 0); }
		public TemplateBlockContext templateBlock() {
			return getRuleContext(TemplateBlockContext.class,0);
		}
		public List<FunctionParameterContext> functionParameter() {
			return getRuleContexts(FunctionParameterContext.class);
		}
		public FunctionParameterContext functionParameter(int i) {
			return getRuleContext(FunctionParameterContext.class,i);
		}
		public TerminalNode FATARROW() { return getToken(TypedefParser.FATARROW, 0); }
		public TerminalNode KW_STRING() { return getToken(TypedefParser.KW_STRING, 0); }
		public List<TerminalNode> COMMA() { return getTokens(TypedefParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(TypedefParser.COMMA, i);
		}
		public TemplateDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_templateDefinition; }
	}

	public final TemplateDefinitionContext templateDefinition() throws RecognitionException {
		TemplateDefinitionContext _localctx = new TemplateDefinitionContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_templateDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(149);
			match(KW_TEMPLATE);
			setState(150);
			identifier();
			setState(151);
			match(LPAREN);
			{
			setState(152);
			functionParameter();
			setState(157);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(153);
				match(COMMA);
				setState(154);
				functionParameter();
				}
				}
				setState(159);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
			setState(160);
			match(RPAREN);
			setState(163);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==FATARROW) {
				{
				setState(161);
				match(FATARROW);
				setState(162);
				match(KW_STRING);
				}
			}

			setState(165);
			templateBlock();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TemplateBlockContext extends ParserRuleContext {
		public std::shared_ptr<std::string> val;
		public TerminalNode TEMPLATE_LITERAL() { return getToken(TypedefParser.TEMPLATE_LITERAL, 0); }
		public TerminalNode RAW_TEMPLATE_LITERAL() { return getToken(TypedefParser.RAW_TEMPLATE_LITERAL, 0); }
		public TemplateBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_templateBlock; }
	}

	public final TemplateBlockContext templateBlock() throws RecognitionException {
		TemplateBlockContext _localctx = new TemplateBlockContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_templateBlock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(167);
			_la = _input.LA(1);
			if ( !(_la==RAW_TEMPLATE_LITERAL || _la==TEMPLATE_LITERAL) ) {
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

	public static class FunctionParameterContext extends ParserRuleContext {
		public std::unique_ptr<td::table::FunctionParameter> func_param;
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public TypeParameterContext typeParameter() {
			return getRuleContext(TypeParameterContext.class,0);
		}
		public FunctionParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionParameter; }
	}

	public final FunctionParameterContext functionParameter() throws RecognitionException {
		FunctionParameterContext _localctx = new FunctionParameterContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_functionParameter);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(169);
			identifier();
			setState(170);
			match(COLON);
			setState(171);
			typeParameter();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeParameterContext extends ParserRuleContext {
		public std::shared_ptr<td::table::TypeParameter> type_param;
		public PrimitiveTypeIdentifierContext primitiveTypeIdentifier() {
			return getRuleContext(PrimitiveTypeIdentifierContext.class,0);
		}
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TypeParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeParameter; }
	}

	public final TypeParameterContext typeParameter() throws RecognitionException {
		TypeParameterContext _localctx = new TypeParameterContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_typeParameter);
		try {
			setState(175);
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
				enterOuterAlt(_localctx, 1);
				{
				setState(173);
				primitiveTypeIdentifier();
				}
				break;
			case NON_KEYWORD_IDENTIFIER:
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(174);
				identifier();
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
		enterRule(_localctx, 18, RULE_structMember);
		try {
			setState(179);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case KW_STRUCT:
			case KW_VARIANT:
			case KW_VECTOR:
			case KW_MAP:
				enterOuterAlt(_localctx, 1);
				{
				setState(177);
				typeDeclaration();
				}
				break;
			case NON_KEYWORD_IDENTIFIER:
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(178);
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
		public TypeDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeDeclaration; }
	}

	public final TypeDeclarationContext typeDeclaration() throws RecognitionException {
		TypeDeclarationContext _localctx = new TypeDeclarationContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_typeDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(185);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case KW_STRUCT:
				{
				setState(181);
				structDeclaration();
				}
				break;
			case KW_VARIANT:
				{
				setState(182);
				variantDeclaration();
				}
				break;
			case KW_VECTOR:
				{
				setState(183);
				vectorDeclaration();
				}
				break;
			case KW_MAP:
				{
				setState(184);
				mapDeclaration();
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

	public static class FieldDeclarationContext extends ParserRuleContext {
		public std::shared_ptr<td::table::FieldDeclaration> field_decl;
		public PrimitiveMemberDeclarationContext primitiveMemberDeclaration() {
			return getRuleContext(PrimitiveMemberDeclarationContext.class,0);
		}
		public SymrefMemberDeclarationContext symrefMemberDeclaration() {
			return getRuleContext(SymrefMemberDeclarationContext.class,0);
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
		enterRule(_localctx, 22, RULE_fieldDeclaration);
		try {
			setState(193);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(187);
				primitiveMemberDeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(188);
				symrefMemberDeclaration();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(189);
				inlineStructDeclaration();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(190);
				inlineVariantDeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(191);
				inlineVectorDeclaration();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(192);
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
		public ImpliedTypePrimitiveMemberDeclarationContext impliedTypePrimitiveMemberDeclaration() {
			return getRuleContext(ImpliedTypePrimitiveMemberDeclarationContext.class,0);
		}
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public PrimitiveTypeIdentifierContext primitiveTypeIdentifier() {
			return getRuleContext(PrimitiveTypeIdentifierContext.class,0);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public FloatLiteralContext floatLiteral() {
			return getRuleContext(FloatLiteralContext.class,0);
		}
		public IntLiteralContext intLiteral() {
			return getRuleContext(IntLiteralContext.class,0);
		}
		public ExplicitPrimitiveLiteralContext explicitPrimitiveLiteral() {
			return getRuleContext(ExplicitPrimitiveLiteralContext.class,0);
		}
		public PrimitiveMemberDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primitiveMemberDeclaration; }
	}

	public final PrimitiveMemberDeclarationContext primitiveMemberDeclaration() throws RecognitionException {
		PrimitiveMemberDeclarationContext _localctx = new PrimitiveMemberDeclarationContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_primitiveMemberDeclaration);
		int _la;
		try {
			setState(211);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(195);
				impliedTypePrimitiveMemberDeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(196);
				identifier();
				setState(197);
				match(COLON);
				setState(209);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
				case 1:
					{
					setState(198);
					primitiveTypeIdentifier();
					setState(199);
					match(EQ);
					setState(202);
					_errHandler.sync(this);
					switch (_input.LA(1)) {
					case FLOAT_LITERAL:
						{
						setState(200);
						floatLiteral();
						}
						break;
					case DEC_DIGITS:
					case DEC_DIGITS_UNDERSCORE:
					case HEX_PREFIX:
					case OCT_PREFIX:
					case BIN_PREFIX:
					case MINUS:
						{
						setState(201);
						intLiteral();
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					}
					break;
				case 2:
					{
					{
					setState(204);
					primitiveTypeIdentifier();
					setState(207);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==EQ) {
						{
						setState(205);
						match(EQ);
						setState(206);
						explicitPrimitiveLiteral();
						}
					}

					}
					}
					break;
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

	public static class SymrefMemberDeclarationContext extends ParserRuleContext {
		public std::shared_ptr<td::table::FieldDeclaration> field_decl;
		public IdentifierContext fieldIdentifier;
		public IdentifierContext symrefIdentifier;
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public SymrefMemberDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_symrefMemberDeclaration; }
	}

	public final SymrefMemberDeclarationContext symrefMemberDeclaration() throws RecognitionException {
		SymrefMemberDeclarationContext _localctx = new SymrefMemberDeclarationContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_symrefMemberDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(213);
			((SymrefMemberDeclarationContext)_localctx).fieldIdentifier = identifier();
			setState(214);
			match(COLON);
			setState(215);
			((SymrefMemberDeclarationContext)_localctx).symrefIdentifier = identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ImpliedTypePrimitiveMemberDeclarationContext extends ParserRuleContext {
		public std::shared_ptr<td::table::FieldDeclaration> field_decl;
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public FloatLiteralContext floatLiteral() {
			return getRuleContext(FloatLiteralContext.class,0);
		}
		public IntLiteralContext intLiteral() {
			return getRuleContext(IntLiteralContext.class,0);
		}
		public ExplicitPrimitiveLiteralContext explicitPrimitiveLiteral() {
			return getRuleContext(ExplicitPrimitiveLiteralContext.class,0);
		}
		public ImpliedTypePrimitiveMemberDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_impliedTypePrimitiveMemberDeclaration; }
	}

	public final ImpliedTypePrimitiveMemberDeclarationContext impliedTypePrimitiveMemberDeclaration() throws RecognitionException {
		ImpliedTypePrimitiveMemberDeclarationContext _localctx = new ImpliedTypePrimitiveMemberDeclarationContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_impliedTypePrimitiveMemberDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(217);
			identifier();
			setState(218);
			match(EQ);
			setState(222);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				{
				setState(219);
				floatLiteral();
				}
				break;
			case 2:
				{
				setState(220);
				intLiteral();
				}
				break;
			case 3:
				{
				setState(221);
				explicitPrimitiveLiteral();
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
		enterRule(_localctx, 30, RULE_inlineStructDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(224);
			identifier();
			setState(225);
			match(COLON);
			setState(226);
			match(KW_STRUCT);
			setState(227);
			match(LBRACE);
			setState(233);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << KW_STRUCT) | (1L << KW_VARIANT) | (1L << KW_VECTOR) | (1L << KW_MAP))) != 0) || _la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE) {
				{
				{
				setState(228);
				structMember();
				setState(229);
				match(SEMI);
				}
				}
				setState(235);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(236);
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
		public TerminalNode KW_VARIANT() { return getToken(TypedefParser.KW_VARIANT, 0); }
		public TerminalNode LBRACE() { return getToken(TypedefParser.LBRACE, 0); }
		public TerminalNode RBRACE() { return getToken(TypedefParser.RBRACE, 0); }
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
		enterRule(_localctx, 32, RULE_inlineVariantDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(238);
			identifier();
			setState(239);
			match(COLON);
			setState(240);
			match(KW_VARIANT);
			setState(241);
			match(LBRACE);
			setState(247);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << KW_STRUCT) | (1L << KW_VARIANT) | (1L << KW_VECTOR) | (1L << KW_MAP))) != 0) || _la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE) {
				{
				{
				setState(242);
				structMember();
				setState(243);
				match(SEMI);
				}
				}
				setState(249);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(250);
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
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public TerminalNode KW_VECTOR() { return getToken(TypedefParser.KW_VECTOR, 0); }
		public TerminalNode LT() { return getToken(TypedefParser.LT, 0); }
		public TypeParameterContext typeParameter() {
			return getRuleContext(TypeParameterContext.class,0);
		}
		public TerminalNode GT() { return getToken(TypedefParser.GT, 0); }
		public InlineVectorDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inlineVectorDeclaration; }
	}

	public final InlineVectorDeclarationContext inlineVectorDeclaration() throws RecognitionException {
		InlineVectorDeclarationContext _localctx = new InlineVectorDeclarationContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_inlineVectorDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(252);
			identifier();
			setState(253);
			match(COLON);
			setState(254);
			match(KW_VECTOR);
			setState(255);
			match(LT);
			setState(256);
			typeParameter();
			setState(257);
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
		public TypeParameterContext key;
		public TypeParameterContext val;
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public TerminalNode KW_MAP() { return getToken(TypedefParser.KW_MAP, 0); }
		public TerminalNode LT() { return getToken(TypedefParser.LT, 0); }
		public TerminalNode COMMA() { return getToken(TypedefParser.COMMA, 0); }
		public TerminalNode GT() { return getToken(TypedefParser.GT, 0); }
		public List<TypeParameterContext> typeParameter() {
			return getRuleContexts(TypeParameterContext.class);
		}
		public TypeParameterContext typeParameter(int i) {
			return getRuleContext(TypeParameterContext.class,i);
		}
		public InlineMapDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inlineMapDeclaration; }
	}

	public final InlineMapDeclarationContext inlineMapDeclaration() throws RecognitionException {
		InlineMapDeclarationContext _localctx = new InlineMapDeclarationContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_inlineMapDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(259);
			identifier();
			setState(260);
			match(COLON);
			setState(261);
			match(KW_MAP);
			setState(262);
			match(LT);
			setState(263);
			((InlineMapDeclarationContext)_localctx).key = typeParameter();
			setState(264);
			match(COMMA);
			setState(265);
			((InlineMapDeclarationContext)_localctx).val = typeParameter();
			setState(266);
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
		public TypedefVersionDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typedefVersionDeclaration; }
	}

	public final TypedefVersionDeclarationContext typedefVersionDeclaration() throws RecognitionException {
		TypedefVersionDeclarationContext _localctx = new TypedefVersionDeclarationContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_typedefVersionDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(268);
			match(KW_TYPEDEF);
			setState(269);
			match(EQ);
			setState(270);
			identifier();
			setState(271);
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
		public ModuleDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_moduleDeclaration; }
	}

	public final ModuleDeclarationContext moduleDeclaration() throws RecognitionException {
		ModuleDeclarationContext _localctx = new ModuleDeclarationContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_moduleDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(273);
			match(KW_MODULE);
			setState(274);
			simplePath();
			setState(275);
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
		enterRule(_localctx, 42, RULE_useDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(277);
			match(KW_USE);
			setState(278);
			useTree();
			setState(279);
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
		enterRule(_localctx, 44, RULE_useTree);
		int _la;
		try {
			int _alt;
			setState(310);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,26,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(285);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE || _la==PATHSEP) {
					{
					setState(282);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
					case 1:
						{
						setState(281);
						simplePath();
						}
						break;
					}
					setState(284);
					match(PATHSEP);
					}
				}

				setState(303);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case STAR:
					{
					setState(287);
					match(STAR);
					}
					break;
				case LBRACE:
					{
					setState(288);
					match(LBRACE);
					setState(300);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (((((_la - 85)) & ~0x3f) == 0 && ((1L << (_la - 85)) & ((1L << (NON_KEYWORD_IDENTIFIER - 85)) | (1L << (RAW_ESCAPE - 85)) | (1L << (STAR - 85)))) != 0) || _la==PATHSEP || _la==LBRACE) {
						{
						setState(289);
						useTree();
						setState(294);
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
						while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
							if ( _alt==1 ) {
								{
								{
								setState(290);
								match(COMMA);
								setState(291);
								useTree();
								}
								} 
							}
							setState(296);
							_errHandler.sync(this);
							_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
						}
						setState(298);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(297);
							match(COMMA);
							}
						}

						}
					}

					setState(302);
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
				setState(305);
				simplePath();
				setState(308);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_AS) {
					{
					setState(306);
					match(KW_AS);
					setState(307);
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
		enterRule(_localctx, 46, RULE_simplePath);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(313);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PATHSEP) {
				{
				setState(312);
				((SimplePathContext)_localctx).leading_pathsep = match(PATHSEP);
				}
			}

			setState(315);
			identifier();
			setState(320);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,28,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(316);
					match(PATHSEP);
					setState(317);
					identifier();
					}
					} 
				}
				setState(322);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,28,_ctx);
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

	public static class ExplicitPrimitiveLiteralContext extends ParserRuleContext {
		public td::table::PrimitiveType type;
		public td::table::PrimitiveValue val;
		public BoolLiteralContext boolLiteral() {
			return getRuleContext(BoolLiteralContext.class,0);
		}
		public CharLiteralContext charLiteral() {
			return getRuleContext(CharLiteralContext.class,0);
		}
		public StringLiteralContext stringLiteral() {
			return getRuleContext(StringLiteralContext.class,0);
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
		public ExplicitPrimitiveLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_explicitPrimitiveLiteral; }
	}

	public final ExplicitPrimitiveLiteralContext explicitPrimitiveLiteral() throws RecognitionException {
		ExplicitPrimitiveLiteralContext _localctx = new ExplicitPrimitiveLiteralContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_explicitPrimitiveLiteral);
		try {
			setState(336);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,29,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(323);
				boolLiteral();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(324);
				charLiteral();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(325);
				stringLiteral();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(326);
				f32Literal();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(327);
				f64Literal();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(328);
				u8Literal();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(329);
				u16Literal();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(330);
				u32Literal();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(331);
				u64Literal();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(332);
				i8Literal();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(333);
				i16Literal();
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(334);
				i32Literal();
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(335);
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
		enterRule(_localctx, 50, RULE_boolLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(338);
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
		enterRule(_localctx, 52, RULE_charLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(340);
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

	public static class StringLiteralContext extends ParserRuleContext {
		public std::shared_ptr<std::string> val;
		public TerminalNode STRING_LITERAL() { return getToken(TypedefParser.STRING_LITERAL, 0); }
		public TerminalNode RAW_STRING_LITERAL() { return getToken(TypedefParser.RAW_STRING_LITERAL, 0); }
		public StringLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stringLiteral; }
	}

	public final StringLiteralContext stringLiteral() throws RecognitionException {
		StringLiteralContext _localctx = new StringLiteralContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_stringLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(342);
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
		enterRule(_localctx, 56, RULE_f32Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(344);
			floatLiteral();
			setState(345);
			match(KW_F32);
			}
		}
		catch (RecognitionException re) {
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
		enterRule(_localctx, 58, RULE_f64Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(347);
			floatLiteral();
			setState(348);
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
		enterRule(_localctx, 60, RULE_u8Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(350);
			intLiteral();
			setState(351);
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
		enterRule(_localctx, 62, RULE_u16Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(353);
			intLiteral();
			setState(354);
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
		enterRule(_localctx, 64, RULE_u32Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(356);
			intLiteral();
			setState(357);
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
		enterRule(_localctx, 66, RULE_u64Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(359);
			intLiteral();
			setState(360);
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
		enterRule(_localctx, 68, RULE_i8Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(362);
			intLiteral();
			setState(363);
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
		enterRule(_localctx, 70, RULE_i16Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(365);
			intLiteral();
			setState(366);
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
		enterRule(_localctx, 72, RULE_i32Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(368);
			intLiteral();
			setState(369);
			match(KW_I32);
			}
		}
		catch (RecognitionException re) {
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
		enterRule(_localctx, 74, RULE_i64Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(371);
			intLiteral();
			setState(372);
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

	public static class FloatLiteralContext extends ParserRuleContext {
		public TerminalNode FLOAT_LITERAL() { return getToken(TypedefParser.FLOAT_LITERAL, 0); }
		public FloatLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_floatLiteral; }
	}

	public final FloatLiteralContext floatLiteral() throws RecognitionException {
		FloatLiteralContext _localctx = new FloatLiteralContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_floatLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(374);
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
		enterRule(_localctx, 78, RULE_intLiteral);
		int _la;
		try {
			setState(386);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(377);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(376);
					match(MINUS);
					}
				}

				setState(379);
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
				setState(380);
				match(HEX_PREFIX);
				setState(381);
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
				setState(382);
				match(OCT_PREFIX);
				setState(383);
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
				setState(384);
				match(BIN_PREFIX);
				setState(385);
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
		enterRule(_localctx, 80, RULE_identifier);
		try {
			setState(391);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NON_KEYWORD_IDENTIFIER:
				enterOuterAlt(_localctx, 1);
				{
				setState(388);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(389);
				match(RAW_ESCAPE);
				setState(390);
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
		enterRule(_localctx, 82, RULE_primitiveTypeIdentifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(393);
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
		enterRule(_localctx, 84, RULE_keyword);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(395);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00a5\u0190\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\3\2\3\2\5\2[\n\2\3\2\7\2^\n\2\f\2\16\2a\13\2\3\2\3\2\5\2e\n\2\3\2"+
		"\3\2\7\2i\n\2\f\2\16\2l\13\2\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\7\3v\n\3"+
		"\f\3\16\3y\13\3\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3\4\7\4\u0083\n\4\f\4\16\4"+
		"\u0086\13\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\6\3"+
		"\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\7\7\u009e\n\7\f\7\16\7\u00a1\13\7\3\7\3"+
		"\7\3\7\5\7\u00a6\n\7\3\7\3\7\3\b\3\b\3\t\3\t\3\t\3\t\3\n\3\n\5\n\u00b2"+
		"\n\n\3\13\3\13\5\13\u00b6\n\13\3\f\3\f\3\f\3\f\5\f\u00bc\n\f\3\r\3\r\3"+
		"\r\3\r\3\r\3\r\5\r\u00c4\n\r\3\16\3\16\3\16\3\16\3\16\3\16\3\16\5\16\u00cd"+
		"\n\16\3\16\3\16\3\16\5\16\u00d2\n\16\5\16\u00d4\n\16\5\16\u00d6\n\16\3"+
		"\17\3\17\3\17\3\17\3\20\3\20\3\20\3\20\3\20\5\20\u00e1\n\20\3\21\3\21"+
		"\3\21\3\21\3\21\3\21\3\21\7\21\u00ea\n\21\f\21\16\21\u00ed\13\21\3\21"+
		"\3\21\3\22\3\22\3\22\3\22\3\22\3\22\3\22\7\22\u00f8\n\22\f\22\16\22\u00fb"+
		"\13\22\3\22\3\22\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\24\3\24\3\24\3\24"+
		"\3\24\3\24\3\24\3\24\3\24\3\25\3\25\3\25\3\25\3\25\3\26\3\26\3\26\3\26"+
		"\3\27\3\27\3\27\3\27\3\30\5\30\u011d\n\30\3\30\5\30\u0120\n\30\3\30\3"+
		"\30\3\30\3\30\3\30\7\30\u0127\n\30\f\30\16\30\u012a\13\30\3\30\5\30\u012d"+
		"\n\30\5\30\u012f\n\30\3\30\5\30\u0132\n\30\3\30\3\30\3\30\5\30\u0137\n"+
		"\30\5\30\u0139\n\30\3\31\5\31\u013c\n\31\3\31\3\31\3\31\7\31\u0141\n\31"+
		"\f\31\16\31\u0144\13\31\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3"+
		"\32\3\32\3\32\3\32\5\32\u0153\n\32\3\33\3\33\3\34\3\34\3\35\3\35\3\36"+
		"\3\36\3\36\3\37\3\37\3\37\3 \3 \3 \3!\3!\3!\3\"\3\"\3\"\3#\3#\3#\3$\3"+
		"$\3$\3%\3%\3%\3&\3&\3&\3\'\3\'\3\'\3(\3(\3)\5)\u017c\n)\3)\3)\3)\3)\3"+
		")\3)\3)\5)\u0185\n)\3*\3*\3*\5*\u018a\n*\3+\3+\3,\3,\3,\2\2-\2\4\6\b\n"+
		"\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPRTV\2\13"+
		"\3\2bc\4\2\6\6\f\f\4\2aadd\3\2ef\3\2gh\3\2ij\3\2kl\3\2JV\5\2\4\b\n\22"+
		"\24I\2\u0199\2X\3\2\2\2\4o\3\2\2\2\6|\3\2\2\2\b\u0089\3\2\2\2\n\u008f"+
		"\3\2\2\2\f\u0097\3\2\2\2\16\u00a9\3\2\2\2\20\u00ab\3\2\2\2\22\u00b1\3"+
		"\2\2\2\24\u00b5\3\2\2\2\26\u00bb\3\2\2\2\30\u00c3\3\2\2\2\32\u00d5\3\2"+
		"\2\2\34\u00d7\3\2\2\2\36\u00db\3\2\2\2 \u00e2\3\2\2\2\"\u00f0\3\2\2\2"+
		"$\u00fe\3\2\2\2&\u0105\3\2\2\2(\u010e\3\2\2\2*\u0113\3\2\2\2,\u0117\3"+
		"\2\2\2.\u0138\3\2\2\2\60\u013b\3\2\2\2\62\u0152\3\2\2\2\64\u0154\3\2\2"+
		"\2\66\u0156\3\2\2\28\u0158\3\2\2\2:\u015a\3\2\2\2<\u015d\3\2\2\2>\u0160"+
		"\3\2\2\2@\u0163\3\2\2\2B\u0166\3\2\2\2D\u0169\3\2\2\2F\u016c\3\2\2\2H"+
		"\u016f\3\2\2\2J\u0172\3\2\2\2L\u0175\3\2\2\2N\u0178\3\2\2\2P\u0184\3\2"+
		"\2\2R\u0189\3\2\2\2T\u018b\3\2\2\2V\u018d\3\2\2\2XZ\5(\25\2Y[\5*\26\2"+
		"ZY\3\2\2\2Z[\3\2\2\2[_\3\2\2\2\\^\5,\27\2]\\\3\2\2\2^a\3\2\2\2_]\3\2\2"+
		"\2_`\3\2\2\2`j\3\2\2\2a_\3\2\2\2be\5\26\f\2ce\5\f\7\2db\3\2\2\2dc\3\2"+
		"\2\2ef\3\2\2\2fg\7\u0097\2\2gi\3\2\2\2hd\3\2\2\2il\3\2\2\2jh\3\2\2\2j"+
		"k\3\2\2\2km\3\2\2\2lj\3\2\2\2mn\7\2\2\3n\3\3\2\2\2op\7\13\2\2pq\5R*\2"+
		"qw\7\u009f\2\2rs\5\24\13\2st\7\u0097\2\2tv\3\2\2\2ur\3\2\2\2vy\3\2\2\2"+
		"wu\3\2\2\2wx\3\2\2\2xz\3\2\2\2yw\3\2\2\2z{\7\u00a0\2\2{\5\3\2\2\2|}\7"+
		"\20\2\2}~\5R*\2~\u0084\7\u009f\2\2\177\u0080\5\24\13\2\u0080\u0081\7\u0097"+
		"\2\2\u0081\u0083\3\2\2\2\u0082\177\3\2\2\2\u0083\u0086\3\2\2\2\u0084\u0082"+
		"\3\2\2\2\u0084\u0085\3\2\2\2\u0085\u0087\3\2\2\2\u0086\u0084\3\2\2\2\u0087"+
		"\u0088\7\u00a0\2\2\u0088\7\3\2\2\2\u0089\u008a\7\21\2\2\u008a\u008b\5"+
		"R*\2\u008b\u008c\7\u008e\2\2\u008c\u008d\5\22\n\2\u008d\u008e\7\u008d"+
		"\2\2\u008e\t\3\2\2\2\u008f\u0090\7\22\2\2\u0090\u0091\5R*\2\u0091\u0092"+
		"\7\u008e\2\2\u0092\u0093\5\22\n\2\u0093\u0094\7\u0096\2\2\u0094\u0095"+
		"\5\22\n\2\u0095\u0096\7\u008d\2\2\u0096\13\3\2\2\2\u0097\u0098\7\23\2"+
		"\2\u0098\u0099\5R*\2\u0099\u009a\7\u00a3\2\2\u009a\u009f\5\20\t\2\u009b"+
		"\u009c\7\u0096\2\2\u009c\u009e\5\20\t\2\u009d\u009b\3\2\2\2\u009e\u00a1"+
		"\3\2\2\2\u009f\u009d\3\2\2\2\u009f\u00a0\3\2\2\2\u00a0\u00a2\3\2\2\2\u00a1"+
		"\u009f\3\2\2\2\u00a2\u00a5\7\u00a4\2\2\u00a3\u00a4\7\u009b\2\2\u00a4\u00a6"+
		"\7L\2\2\u00a5\u00a3\3\2\2\2\u00a5\u00a6\3\2\2\2\u00a6\u00a7\3\2\2\2\u00a7"+
		"\u00a8\5\16\b\2\u00a8\r\3\2\2\2\u00a9\u00aa\t\2\2\2\u00aa\17\3\2\2\2\u00ab"+
		"\u00ac\5R*\2\u00ac\u00ad\7\u0098\2\2\u00ad\u00ae\5\22\n\2\u00ae\21\3\2"+
		"\2\2\u00af\u00b2\5T+\2\u00b0\u00b2\5R*\2\u00b1\u00af\3\2\2\2\u00b1\u00b0"+
		"\3\2\2\2\u00b2\23\3\2\2\2\u00b3\u00b6\5\26\f\2\u00b4\u00b6\5\30\r\2\u00b5"+
		"\u00b3\3\2\2\2\u00b5\u00b4\3\2\2\2\u00b6\25\3\2\2\2\u00b7\u00bc\5\4\3"+
		"\2\u00b8\u00bc\5\6\4\2\u00b9\u00bc\5\b\5\2\u00ba\u00bc\5\n\6\2\u00bb\u00b7"+
		"\3\2\2\2\u00bb\u00b8\3\2\2\2\u00bb\u00b9\3\2\2\2\u00bb\u00ba\3\2\2\2\u00bc"+
		"\27\3\2\2\2\u00bd\u00c4\5\32\16\2\u00be\u00c4\5\34\17\2\u00bf\u00c4\5"+
		" \21\2\u00c0\u00c4\5\"\22\2\u00c1\u00c4\5$\23\2\u00c2\u00c4\5&\24\2\u00c3"+
		"\u00bd\3\2\2\2\u00c3\u00be\3\2\2\2\u00c3\u00bf\3\2\2\2\u00c3\u00c0\3\2"+
		"\2\2\u00c3\u00c1\3\2\2\2\u00c3\u00c2\3\2\2\2\u00c4\31\3\2\2\2\u00c5\u00d6"+
		"\5\36\20\2\u00c6\u00c7\5R*\2\u00c7\u00d3\7\u0098\2\2\u00c8\u00c9\5T+\2"+
		"\u00c9\u00cc\7\u008a\2\2\u00ca\u00cd\5N(\2\u00cb\u00cd\5P)\2\u00cc\u00ca"+
		"\3\2\2\2\u00cc\u00cb\3\2\2\2\u00cd\u00d4\3\2\2\2\u00ce\u00d1\5T+\2\u00cf"+
		"\u00d0\7\u008a\2\2\u00d0\u00d2\5\62\32\2\u00d1\u00cf\3\2\2\2\u00d1\u00d2"+
		"\3\2\2\2\u00d2\u00d4\3\2\2\2\u00d3\u00c8\3\2\2\2\u00d3\u00ce\3\2\2\2\u00d4"+
		"\u00d6\3\2\2\2\u00d5\u00c5\3\2\2\2\u00d5\u00c6\3\2\2\2\u00d6\33\3\2\2"+
		"\2\u00d7\u00d8\5R*\2\u00d8\u00d9\7\u0098\2\2\u00d9\u00da\5R*\2\u00da\35"+
		"\3\2\2\2\u00db\u00dc\5R*\2\u00dc\u00e0\7\u008a\2\2\u00dd\u00e1\5N(\2\u00de"+
		"\u00e1\5P)\2\u00df\u00e1\5\62\32\2\u00e0\u00dd\3\2\2\2\u00e0\u00de\3\2"+
		"\2\2\u00e0\u00df\3\2\2\2\u00e1\37\3\2\2\2\u00e2\u00e3\5R*\2\u00e3\u00e4"+
		"\7\u0098\2\2\u00e4\u00e5\7\13\2\2\u00e5\u00eb\7\u009f\2\2\u00e6\u00e7"+
		"\5\24\13\2\u00e7\u00e8\7\u0097\2\2\u00e8\u00ea\3\2\2\2\u00e9\u00e6\3\2"+
		"\2\2\u00ea\u00ed\3\2\2\2\u00eb\u00e9\3\2\2\2\u00eb\u00ec\3\2\2\2\u00ec"+
		"\u00ee\3\2\2\2\u00ed\u00eb\3\2\2\2\u00ee\u00ef\7\u00a0\2\2\u00ef!\3\2"+
		"\2\2\u00f0\u00f1\5R*\2\u00f1\u00f2\7\u0098\2\2\u00f2\u00f3\7\20\2\2\u00f3"+
		"\u00f9\7\u009f\2\2\u00f4\u00f5\5\24\13\2\u00f5\u00f6\7\u0097\2\2\u00f6"+
		"\u00f8\3\2\2\2\u00f7\u00f4\3\2\2\2\u00f8\u00fb\3\2\2\2\u00f9\u00f7\3\2"+
		"\2\2\u00f9\u00fa\3\2\2\2\u00fa\u00fc\3\2\2\2\u00fb\u00f9\3\2\2\2\u00fc"+
		"\u00fd\7\u00a0\2\2\u00fd#\3\2\2\2\u00fe\u00ff\5R*\2\u00ff\u0100\7\u0098"+
		"\2\2\u0100\u0101\7\21\2\2\u0101\u0102\7\u008e\2\2\u0102\u0103\5\22\n\2"+
		"\u0103\u0104\7\u008d\2\2\u0104%\3\2\2\2\u0105\u0106\5R*\2\u0106\u0107"+
		"\7\u0098\2\2\u0107\u0108\7\22\2\2\u0108\u0109\7\u008e\2\2\u0109\u010a"+
		"\5\22\n\2\u010a\u010b\7\u0096\2\2\u010b\u010c\5\22\n\2\u010c\u010d\7\u008d"+
		"\2\2\u010d\'\3\2\2\2\u010e\u010f\7\16\2\2\u010f\u0110\7\u008a\2\2\u0110"+
		"\u0111\5R*\2\u0111\u0112\7\u0097\2\2\u0112)\3\2\2\2\u0113\u0114\7\n\2"+
		"\2\u0114\u0115\5\60\31\2\u0115\u0116\7\u0097\2\2\u0116+\3\2\2\2\u0117"+
		"\u0118\7\17\2\2\u0118\u0119\5.\30\2\u0119\u011a\7\u0097\2\2\u011a-\3\2"+
		"\2\2\u011b\u011d\5\60\31\2\u011c\u011b\3\2\2\2\u011c\u011d\3\2\2\2\u011d"+
		"\u011e\3\2\2\2\u011e\u0120\7\u0099\2\2\u011f\u011c\3\2\2\2\u011f\u0120"+
		"\3\2\2\2\u0120\u0131\3\2\2\2\u0121\u0132\7w\2\2\u0122\u012e\7\u009f\2"+
		"\2\u0123\u0128\5.\30\2\u0124\u0125\7\u0096\2\2\u0125\u0127\5.\30\2\u0126"+
		"\u0124\3\2\2\2\u0127\u012a\3\2\2\2\u0128\u0126\3\2\2\2\u0128\u0129\3\2"+
		"\2\2\u0129\u012c\3\2\2\2\u012a\u0128\3\2\2\2\u012b\u012d\7\u0096\2\2\u012c"+
		"\u012b\3\2\2\2\u012c\u012d\3\2\2\2\u012d\u012f\3\2\2\2\u012e\u0123\3\2"+
		"\2\2\u012e\u012f\3\2\2\2\u012f\u0130\3\2\2\2\u0130\u0132\7\u00a0\2\2\u0131"+
		"\u0121\3\2\2\2\u0131\u0122\3\2\2\2\u0132\u0139\3\2\2\2\u0133\u0136\5\60"+
		"\31\2\u0134\u0135\7\4\2\2\u0135\u0137\5R*\2\u0136\u0134\3\2\2\2\u0136"+
		"\u0137\3\2\2\2\u0137\u0139\3\2\2\2\u0138\u011f\3\2\2\2\u0138\u0133\3\2"+
		"\2\2\u0139/\3\2\2\2\u013a\u013c\7\u0099\2\2\u013b\u013a\3\2\2\2\u013b"+
		"\u013c\3\2\2\2\u013c\u013d\3\2\2\2\u013d\u0142\5R*\2\u013e\u013f\7\u0099"+
		"\2\2\u013f\u0141\5R*\2\u0140\u013e\3\2\2\2\u0141\u0144\3\2\2\2\u0142\u0140"+
		"\3\2\2\2\u0142\u0143\3\2\2\2\u0143\61\3\2\2\2\u0144\u0142\3\2\2\2\u0145"+
		"\u0153\5\64\33\2\u0146\u0153\5\66\34\2\u0147\u0153\58\35\2\u0148\u0153"+
		"\5:\36\2\u0149\u0153\5<\37\2\u014a\u0153\5> \2\u014b\u0153\5@!\2\u014c"+
		"\u0153\5B\"\2\u014d\u0153\5D#\2\u014e\u0153\5F$\2\u014f\u0153\5H%\2\u0150"+
		"\u0153\5J&\2\u0151\u0153\5L\'\2\u0152\u0145\3\2\2\2\u0152\u0146\3\2\2"+
		"\2\u0152\u0147\3\2\2\2\u0152\u0148\3\2\2\2\u0152\u0149\3\2\2\2\u0152\u014a"+
		"\3\2\2\2\u0152\u014b\3\2\2\2\u0152\u014c\3\2\2\2\u0152\u014d\3\2\2\2\u0152"+
		"\u014e\3\2\2\2\u0152\u014f\3\2\2\2\u0152\u0150\3\2\2\2\u0152\u0151\3\2"+
		"\2\2\u0153\63\3\2\2\2\u0154\u0155\t\3\2\2\u0155\65\3\2\2\2\u0156\u0157"+
		"\7`\2\2\u0157\67\3\2\2\2\u0158\u0159\t\4\2\2\u01599\3\2\2\2\u015a\u015b"+
		"\5N(\2\u015b\u015c\7M\2\2\u015c;\3\2\2\2\u015d\u015e\5N(\2\u015e\u015f"+
		"\7N\2\2\u015f=\3\2\2\2\u0160\u0161\5P)\2\u0161\u0162\7O\2\2\u0162?\3\2"+
		"\2\2\u0163\u0164\5P)\2\u0164\u0165\7P\2\2\u0165A\3\2\2\2\u0166\u0167\5"+
		"P)\2\u0167\u0168\7Q\2\2\u0168C\3\2\2\2\u0169\u016a\5P)\2\u016a\u016b\7"+
		"R\2\2\u016bE\3\2\2\2\u016c\u016d\5P)\2\u016d\u016e\7S\2\2\u016eG\3\2\2"+
		"\2\u016f\u0170\5P)\2\u0170\u0171\7T\2\2\u0171I\3\2\2\2\u0172\u0173\5P"+
		")\2\u0173\u0174\7U\2\2\u0174K\3\2\2\2\u0175\u0176\5P)\2\u0176\u0177\7"+
		"V\2\2\u0177M\3\2\2\2\u0178\u0179\7m\2\2\u0179O\3\2\2\2\u017a\u017c\7v"+
		"\2\2\u017b\u017a\3\2\2\2\u017b\u017c\3\2\2\2\u017c\u017d\3\2\2\2\u017d"+
		"\u0185\t\5\2\2\u017e\u017f\7q\2\2\u017f\u0185\t\6\2\2\u0180\u0181\7r\2"+
		"\2\u0181\u0185\t\7\2\2\u0182\u0183\7s\2\2\u0183\u0185\t\b\2\2\u0184\u017b"+
		"\3\2\2\2\u0184\u017e\3\2\2\2\u0184\u0180\3\2\2\2\u0184\u0182\3\2\2\2\u0185"+
		"Q\3\2\2\2\u0186\u018a\7W\2\2\u0187\u0188\7t\2\2\u0188\u018a\7W\2\2\u0189"+
		"\u0186\3\2\2\2\u0189\u0187\3\2\2\2\u018aS\3\2\2\2\u018b\u018c\t\t\2\2"+
		"\u018cU\3\2\2\2\u018d\u018e\t\n\2\2\u018eW\3\2\2\2#Z_djw\u0084\u009f\u00a5"+
		"\u00b1\u00b5\u00bb\u00c3\u00cc\u00d1\u00d3\u00d5\u00e0\u00eb\u00f9\u011c"+
		"\u011f\u0128\u012c\u012e\u0131\u0136\u0138\u013b\u0142\u0152\u017b\u0184"+
		"\u0189";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}