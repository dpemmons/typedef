// Generated from /home/dpemmons/src/typedef/libtypedef/parser/grammar/TypedefParser.g4 by ANTLR 4.9.2

#include "libtypedef/parser/gramamr_types.h"

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
		CHAR_LITERAL=94, STRING_LITERAL=95, RAW_STRING_LITERAL=96, DEC_LITERAL=97, 
		HEX_LITERAL=98, OCT_LITERAL=99, BIN_LITERAL=100, DEC_DIGITS=101, DEC_DIGITS_UNDERSCORE=102, 
		HEX_DIGITS=103, HEX_DIGITS_UNDERSCORE=104, OCT_DIGITS=105, OCT_DIGITS_UNDERSCORE=106, 
		BIN_DIGITS=107, BIN_DIGITS_UNDERSCORE=108, FLOAT_LITERAL=109, HEX_PREFIX=110, 
		OCT_PREFIX=111, BIN_PREFIX=112, START_TEMPLATE=113, RAW_ESCAPE=114, PLUS=115, 
		MINUS=116, AST=117, SLASH=118, PERCENT=119, HAT=120, EXCL=121, AMP=122, 
		VERT=123, AMPAMP=124, VERTVERT=125, PLUSEQ=126, MINUSEQ=127, STAREQ=128, 
		SOLEQ=129, PERCENTEQ=130, HATEQ=131, AMPEQ=132, LTLTEQ=133, GTGTEQ=134, 
		EQ=135, EQEQ=136, EXCLEQ=137, GT=138, LT=139, GE=140, LE=141, AT=142, 
		LOWBAR=143, DOT=144, DOTDOT=145, DOTDOTDOT=146, COMMA=147, SEMI=148, COLON=149, 
		COLONCOLON=150, MINUSGT=151, EQGT=152, NUM=153, DOLLAR=154, QUEST=155, 
		LBRACE=156, RBRACE=157, LBRACK=158, RBRACK=159, LPAREN=160, RPAREN=161, 
		WS=162, END_TEMPLATE=163, TMPL_EXPR_OPEN=164, TMPL_TEXT=165, TMPL_EXPR_CLOSE=166, 
		TMPL_SLASH=167, TMPL_COMMA=168, TMPL_DOT=169, TMPL_LPAREN=170, TMPL_RPAREN=171, 
		TMPL_PATHSEP=172, TMPL_NOT=173, TMPL_KW_FOR=174, TMPL_KW_CLOSE_FOR=175, 
		TMPL_KW_SWITCH=176, TMPL_KW_CLOSE_SWITCH=177, TMPL_KW_CASE=178, TMPL_KW_CLOSE_CASE=179, 
		TMPL_KW_DEFAULT=180, TMPL_KW_CLOSE_DEFAULT=181, TMPL_KW_IN=182, TMPL_KW_IF=183, 
		TMPL_KW_CLOSEIF=184, TMPL_KW_ELSE=185, TMPL_KW_ELIF=186, TMPL_NON_KEYWORD_IDENTIFIER=187, 
		TMPL_WS=188;
	public static final int
		RULE_compilationUnit = 0, RULE_typedefVersionDeclaration = 1, RULE_moduleDeclaration = 2, 
		RULE_typeDefinition = 3, RULE_fieldBlock = 4, RULE_fieldDefinition = 5, 
		RULE_typeAnnotation = 6, RULE_typeIdentifier = 7, RULE_userType = 8, RULE_tmplDefinition = 9, 
		RULE_tmplBlock = 10, RULE_tmplItem = 11, RULE_tmplText = 12, RULE_tmplExpression = 13, 
		RULE_tmplFunctionCall = 14, RULE_tmplIfBlock = 15, RULE_tmplIfSubBlock = 16, 
		RULE_tmplElIfSubBlock = 17, RULE_tmplElseSubBlock = 18, RULE_tmplForBlock = 19, 
		RULE_tmplSwitchBlock = 20, RULE_tmplCaseBlock = 21, RULE_tmplDefaultBlock = 22, 
		RULE_tmplBindingVariables = 23, RULE_tmplValueReferencePath = 24, RULE_tmplValueReference = 25, 
		RULE_tmplBindingVariable = 26, RULE_tmplIdentifier = 27, RULE_functionParameter = 28, 
		RULE_useDeclaration = 29, RULE_symbolPath = 30, RULE_primitiveLiteral = 31, 
		RULE_boolLiteral = 32, RULE_charLiteral = 33, RULE_stringLiteral = 34, 
		RULE_floatLiteral = 35, RULE_integerLiteral = 36, RULE_intDigits = 37, 
		RULE_identifier = 38, RULE_primitiveTypeIdentifier = 39, RULE_keyword = 40;
	private static String[] makeRuleNames() {
		return new String[] {
			"compilationUnit", "typedefVersionDeclaration", "moduleDeclaration", 
			"typeDefinition", "fieldBlock", "fieldDefinition", "typeAnnotation", 
			"typeIdentifier", "userType", "tmplDefinition", "tmplBlock", "tmplItem", 
			"tmplText", "tmplExpression", "tmplFunctionCall", "tmplIfBlock", "tmplIfSubBlock", 
			"tmplElIfSubBlock", "tmplElseSubBlock", "tmplForBlock", "tmplSwitchBlock", 
			"tmplCaseBlock", "tmplDefaultBlock", "tmplBindingVariables", "tmplValueReferencePath", 
			"tmplValueReference", "tmplBindingVariable", "tmplIdentifier", "functionParameter", 
			"useDeclaration", "symbolPath", "primitiveLiteral", "boolLiteral", "charLiteral", 
			"stringLiteral", "floatLiteral", "integerLiteral", "intDigits", "identifier", 
			"primitiveTypeIdentifier", "keyword"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'array'", "'as'", "'enum'", "'false'", "'fn'", "'impl'", "'message'", 
			"'module'", "'struct'", "'true'", "'type'", "'typedef'", "'use'", "'variant'", 
			"'vector'", "'map'", "'template'", "'and'", null, "'let'", "'not'", "'or'", 
			"'sizeof'", "'this'", "'trait'", "'where'", "'xor'", "'break'", "'continue'", 
			null, "'do'", null, null, "'goto'", null, "'loop'", "'match'", "'move'", 
			"'return'", "'try'", "'while'", "'yield'", "'abstract'", "'auto'", "'const'", 
			"'double'", "'extern'", "'final'", "'float'", "'int'", "'long'", "'macro'", 
			"'mut'", "'override'", "'private'", "'pub'", "'ref'", "'Self'", "'self'", 
			"'signed'", "'static'", "'super'", null, "'typeof'", "'union'", "'unsafe'", 
			"'unsigned'", "'unsized'", "'virtual'", "'void'", "'volatile'", "'bool'", 
			"'char'", "'str'", "'f32'", "'f64'", "'u8'", "'u16'", "'u32'", "'u64'", 
			"'i8'", "'i16'", "'i32'", "'i64'", null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, "'0x'", "'0o'", "'0b'", "'t\"'", 
			"'r#'", "'+'", "'-'", "'*'", null, "'%'", "'^'", null, "'&'", "'|'", 
			"'&&'", "'||'", "'+='", "'-='", "'*='", "'/='", "'%='", "'^='", "'|='", 
			"'<<='", "'>>='", "'='", "'=='", "'!='", null, null, "'>='", "'<='", 
			"'@'", "'_'", null, "'..'", "'...'", null, "';'", "':'", null, "'->'", 
			"'=>'", "'#'", "'$'", "'?'", "'{'", "'}'", "'['", "']'", null, null, 
			null, "'\"'", null, null, null, null, null, null, null, null, null, null, 
			null, "'/for'", null, "'/switch'", "'case'", "'/case'", null, "'/default'", 
			null, null, "'/if'", null, "'elif'"
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
			"RAW_STRING_LITERAL", "DEC_LITERAL", "HEX_LITERAL", "OCT_LITERAL", "BIN_LITERAL", 
			"DEC_DIGITS", "DEC_DIGITS_UNDERSCORE", "HEX_DIGITS", "HEX_DIGITS_UNDERSCORE", 
			"OCT_DIGITS", "OCT_DIGITS_UNDERSCORE", "BIN_DIGITS", "BIN_DIGITS_UNDERSCORE", 
			"FLOAT_LITERAL", "HEX_PREFIX", "OCT_PREFIX", "BIN_PREFIX", "START_TEMPLATE", 
			"RAW_ESCAPE", "PLUS", "MINUS", "AST", "SLASH", "PERCENT", "HAT", "EXCL", 
			"AMP", "VERT", "AMPAMP", "VERTVERT", "PLUSEQ", "MINUSEQ", "STAREQ", "SOLEQ", 
			"PERCENTEQ", "HATEQ", "AMPEQ", "LTLTEQ", "GTGTEQ", "EQ", "EQEQ", "EXCLEQ", 
			"GT", "LT", "GE", "LE", "AT", "LOWBAR", "DOT", "DOTDOT", "DOTDOTDOT", 
			"COMMA", "SEMI", "COLON", "COLONCOLON", "MINUSGT", "EQGT", "NUM", "DOLLAR", 
			"QUEST", "LBRACE", "RBRACE", "LBRACK", "RBRACK", "LPAREN", "RPAREN", 
			"WS", "END_TEMPLATE", "TMPL_EXPR_OPEN", "TMPL_TEXT", "TMPL_EXPR_CLOSE", 
			"TMPL_SLASH", "TMPL_COMMA", "TMPL_DOT", "TMPL_LPAREN", "TMPL_RPAREN", 
			"TMPL_PATHSEP", "TMPL_NOT", "TMPL_KW_FOR", "TMPL_KW_CLOSE_FOR", "TMPL_KW_SWITCH", 
			"TMPL_KW_CLOSE_SWITCH", "TMPL_KW_CASE", "TMPL_KW_CLOSE_CASE", "TMPL_KW_DEFAULT", 
			"TMPL_KW_CLOSE_DEFAULT", "TMPL_KW_IN", "TMPL_KW_IF", "TMPL_KW_CLOSEIF", 
			"TMPL_KW_ELSE", "TMPL_KW_ELIF", "TMPL_NON_KEYWORD_IDENTIFIER", "TMPL_WS"
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
		public TypedefVersionDeclarationContext typedefVersionDeclaration() {
			return getRuleContext(TypedefVersionDeclarationContext.class,0);
		}
		public ModuleDeclarationContext moduleDeclaration() {
			return getRuleContext(ModuleDeclarationContext.class,0);
		}
		public TerminalNode EOF() { return getToken(TypedefParser.EOF, 0); }
		public List<UseDeclarationContext> useDeclaration() {
			return getRuleContexts(UseDeclarationContext.class);
		}
		public UseDeclarationContext useDeclaration(int i) {
			return getRuleContext(UseDeclarationContext.class,i);
		}
		public List<TypeDefinitionContext> typeDefinition() {
			return getRuleContexts(TypeDefinitionContext.class);
		}
		public TypeDefinitionContext typeDefinition(int i) {
			return getRuleContext(TypeDefinitionContext.class,i);
		}
		public List<TmplDefinitionContext> tmplDefinition() {
			return getRuleContexts(TmplDefinitionContext.class);
		}
		public TmplDefinitionContext tmplDefinition(int i) {
			return getRuleContext(TmplDefinitionContext.class,i);
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
			setState(82);
			typedefVersionDeclaration();
			setState(83);
			moduleDeclaration();
			setState(87);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==KW_USE) {
				{
				{
				setState(84);
				useDeclaration();
				}
				}
				setState(89);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(94);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << KW_STRUCT) | (1L << KW_VARIANT) | (1L << KW_TEMPLATE))) != 0)) {
				{
				setState(92);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case KW_STRUCT:
				case KW_VARIANT:
					{
					setState(90);
					typeDefinition();
					}
					break;
				case KW_TEMPLATE:
					{
					setState(91);
					tmplDefinition();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(96);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(97);
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

	public static class TypedefVersionDeclarationContext extends ParserRuleContext {
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
		enterRule(_localctx, 2, RULE_typedefVersionDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(99);
			match(KW_TYPEDEF);
			setState(100);
			match(EQ);
			setState(101);
			identifier();
			setState(102);
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
		public SymbolPathContext symbolPath() {
			return getRuleContext(SymbolPathContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(TypedefParser.SEMI, 0); }
		public ModuleDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_moduleDeclaration; }
	}

	public final ModuleDeclarationContext moduleDeclaration() throws RecognitionException {
		ModuleDeclarationContext _localctx = new ModuleDeclarationContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_moduleDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(104);
			match(KW_MODULE);
			setState(105);
			symbolPath();
			setState(106);
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

	public static class TypeDefinitionContext extends ParserRuleContext {
		public IdentifierContext type_identifier;
		public IdentifierContext type_parameter;
		public TerminalNode LBRACE() { return getToken(TypedefParser.LBRACE, 0); }
		public FieldBlockContext fieldBlock() {
			return getRuleContext(FieldBlockContext.class,0);
		}
		public TerminalNode RBRACE() { return getToken(TypedefParser.RBRACE, 0); }
		public TerminalNode KW_STRUCT() { return getToken(TypedefParser.KW_STRUCT, 0); }
		public TerminalNode KW_VARIANT() { return getToken(TypedefParser.KW_VARIANT, 0); }
		public TerminalNode LT() { return getToken(TypedefParser.LT, 0); }
		public TerminalNode GT() { return getToken(TypedefParser.GT, 0); }
		public TerminalNode SEMI() { return getToken(TypedefParser.SEMI, 0); }
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(TypedefParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(TypedefParser.COMMA, i);
		}
		public TypeDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeDefinition; }
	}

	public final TypeDefinitionContext typeDefinition() throws RecognitionException {
		TypeDefinitionContext _localctx = new TypeDefinitionContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_typeDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(108);
			_la = _input.LA(1);
			if ( !(_la==KW_STRUCT || _la==KW_VARIANT) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(110);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE) {
				{
				setState(109);
				((TypeDefinitionContext)_localctx).type_identifier = identifier();
				}
			}

			setState(122);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LT) {
				{
				setState(112);
				match(LT);
				setState(116); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(113);
					((TypeDefinitionContext)_localctx).type_parameter = identifier();
					setState(114);
					match(COMMA);
					}
					}
					setState(118); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE );
				setState(120);
				match(GT);
				}
			}

			setState(124);
			match(LBRACE);
			setState(125);
			fieldBlock();
			setState(126);
			match(RBRACE);
			setState(128);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				{
				setState(127);
				match(SEMI);
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

	public static class FieldBlockContext extends ParserRuleContext {
		public List<TypeDefinitionContext> typeDefinition() {
			return getRuleContexts(TypeDefinitionContext.class);
		}
		public TypeDefinitionContext typeDefinition(int i) {
			return getRuleContext(TypeDefinitionContext.class,i);
		}
		public List<FieldDefinitionContext> fieldDefinition() {
			return getRuleContexts(FieldDefinitionContext.class);
		}
		public FieldDefinitionContext fieldDefinition(int i) {
			return getRuleContext(FieldDefinitionContext.class,i);
		}
		public List<TerminalNode> SEMI() { return getTokens(TypedefParser.SEMI); }
		public TerminalNode SEMI(int i) {
			return getToken(TypedefParser.SEMI, i);
		}
		public FieldBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fieldBlock; }
	}

	public final FieldBlockContext fieldBlock() throws RecognitionException {
		FieldBlockContext _localctx = new FieldBlockContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_fieldBlock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(136);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==KW_STRUCT || _la==KW_VARIANT || _la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE) {
				{
				setState(134);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case KW_STRUCT:
				case KW_VARIANT:
					{
					setState(130);
					typeDefinition();
					}
					break;
				case NON_KEYWORD_IDENTIFIER:
				case RAW_ESCAPE:
					{
					{
					setState(131);
					fieldDefinition();
					setState(132);
					match(SEMI);
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(138);
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

	public static class FieldDefinitionContext extends ParserRuleContext {
		public IdentifierContext field_identifier;
		public Token is_required;
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TypeAnnotationContext typeAnnotation() {
			return getRuleContext(TypeAnnotationContext.class,0);
		}
		public TypeDefinitionContext typeDefinition() {
			return getRuleContext(TypeDefinitionContext.class,0);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public PrimitiveLiteralContext primitiveLiteral() {
			return getRuleContext(PrimitiveLiteralContext.class,0);
		}
		public TerminalNode EXCL() { return getToken(TypedefParser.EXCL, 0); }
		public FieldDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fieldDefinition; }
	}

	public final FieldDefinitionContext fieldDefinition() throws RecognitionException {
		FieldDefinitionContext _localctx = new FieldDefinitionContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_fieldDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(139);
			((FieldDefinitionContext)_localctx).field_identifier = identifier();
			setState(141);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==EXCL) {
				{
				setState(140);
				((FieldDefinitionContext)_localctx).is_required = match(EXCL);
				}
			}

			setState(143);
			match(COLON);
			setState(146);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case KW_VECTOR:
			case KW_MAP:
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
			case NON_KEYWORD_IDENTIFIER:
			case RAW_ESCAPE:
				{
				setState(144);
				typeAnnotation();
				}
				break;
			case KW_STRUCT:
			case KW_VARIANT:
				{
				setState(145);
				typeDefinition();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(150);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==EQ) {
				{
				setState(148);
				match(EQ);
				setState(149);
				primitiveLiteral();
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

	public static class TypeAnnotationContext extends ParserRuleContext {
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public TerminalNode LT() { return getToken(TypedefParser.LT, 0); }
		public List<TypeAnnotationContext> typeAnnotation() {
			return getRuleContexts(TypeAnnotationContext.class);
		}
		public TypeAnnotationContext typeAnnotation(int i) {
			return getRuleContext(TypeAnnotationContext.class,i);
		}
		public TerminalNode GT() { return getToken(TypedefParser.GT, 0); }
		public List<TerminalNode> COMMA() { return getTokens(TypedefParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(TypedefParser.COMMA, i);
		}
		public TypeAnnotationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeAnnotation; }
	}

	public final TypeAnnotationContext typeAnnotation() throws RecognitionException {
		TypeAnnotationContext _localctx = new TypeAnnotationContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_typeAnnotation);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(152);
			typeIdentifier();
			setState(164);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LT) {
				{
				setState(153);
				match(LT);
				setState(154);
				typeAnnotation();
				setState(159);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(155);
					match(COMMA);
					setState(156);
					typeAnnotation();
					}
					}
					setState(161);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(162);
				match(GT);
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

	public static class TypeIdentifierContext extends ParserRuleContext {
		public PrimitiveTypeIdentifierContext primitiveTypeIdentifier() {
			return getRuleContext(PrimitiveTypeIdentifierContext.class,0);
		}
		public TerminalNode KW_VECTOR() { return getToken(TypedefParser.KW_VECTOR, 0); }
		public TerminalNode KW_MAP() { return getToken(TypedefParser.KW_MAP, 0); }
		public UserTypeContext userType() {
			return getRuleContext(UserTypeContext.class,0);
		}
		public TypeIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeIdentifier; }
	}

	public final TypeIdentifierContext typeIdentifier() throws RecognitionException {
		TypeIdentifierContext _localctx = new TypeIdentifierContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_typeIdentifier);
		try {
			setState(170);
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
				setState(166);
				primitiveTypeIdentifier();
				}
				break;
			case KW_VECTOR:
				enterOuterAlt(_localctx, 2);
				{
				setState(167);
				match(KW_VECTOR);
				}
				break;
			case KW_MAP:
				enterOuterAlt(_localctx, 3);
				{
				setState(168);
				match(KW_MAP);
				}
				break;
			case NON_KEYWORD_IDENTIFIER:
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 4);
				{
				setState(169);
				userType();
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

	public static class UserTypeContext extends ParserRuleContext {
		public TypeDefinitionContext* type_definition;
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public UserTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_userType; }
	}

	public final UserTypeContext userType() throws RecognitionException {
		UserTypeContext _localctx = new UserTypeContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_userType);
		((UserTypeContext)_localctx).type_definition =  nullptr;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(172);
			identifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TmplDefinitionContext extends ParserRuleContext {
		public TerminalNode KW_TEMPLATE() { return getToken(TypedefParser.KW_TEMPLATE, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(TypedefParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(TypedefParser.RPAREN, 0); }
		public TmplBlockContext tmplBlock() {
			return getRuleContext(TmplBlockContext.class,0);
		}
		public List<FunctionParameterContext> functionParameter() {
			return getRuleContexts(FunctionParameterContext.class);
		}
		public FunctionParameterContext functionParameter(int i) {
			return getRuleContext(FunctionParameterContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(TypedefParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(TypedefParser.COMMA, i);
		}
		public TmplDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplDefinition; }
	}

	public final TmplDefinitionContext tmplDefinition() throws RecognitionException {
		TmplDefinitionContext _localctx = new TmplDefinitionContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_tmplDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(174);
			match(KW_TEMPLATE);
			setState(175);
			identifier();
			setState(176);
			match(LPAREN);
			{
			setState(185);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE) {
				{
				setState(177);
				functionParameter();
				setState(182);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(178);
					match(COMMA);
					setState(179);
					functionParameter();
					}
					}
					setState(184);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			}
			setState(187);
			match(RPAREN);
			setState(188);
			tmplBlock();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TmplBlockContext extends ParserRuleContext {
		public TerminalNode START_TEMPLATE() { return getToken(TypedefParser.START_TEMPLATE, 0); }
		public TerminalNode END_TEMPLATE() { return getToken(TypedefParser.END_TEMPLATE, 0); }
		public List<TmplItemContext> tmplItem() {
			return getRuleContexts(TmplItemContext.class);
		}
		public TmplItemContext tmplItem(int i) {
			return getRuleContext(TmplItemContext.class,i);
		}
		public TmplBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplBlock; }
	}

	public final TmplBlockContext tmplBlock() throws RecognitionException {
		TmplBlockContext _localctx = new TmplBlockContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_tmplBlock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(190);
			match(START_TEMPLATE);
			setState(194);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TMPL_EXPR_OPEN || _la==TMPL_TEXT) {
				{
				{
				setState(191);
				tmplItem();
				}
				}
				setState(196);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(197);
			match(END_TEMPLATE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TmplItemContext extends ParserRuleContext {
		public TmplTextContext tmplText() {
			return getRuleContext(TmplTextContext.class,0);
		}
		public TerminalNode TMPL_EXPR_OPEN() { return getToken(TypedefParser.TMPL_EXPR_OPEN, 0); }
		public TmplExpressionContext tmplExpression() {
			return getRuleContext(TmplExpressionContext.class,0);
		}
		public TerminalNode TMPL_EXPR_CLOSE() { return getToken(TypedefParser.TMPL_EXPR_CLOSE, 0); }
		public TmplIfBlockContext tmplIfBlock() {
			return getRuleContext(TmplIfBlockContext.class,0);
		}
		public TmplForBlockContext tmplForBlock() {
			return getRuleContext(TmplForBlockContext.class,0);
		}
		public TmplSwitchBlockContext tmplSwitchBlock() {
			return getRuleContext(TmplSwitchBlockContext.class,0);
		}
		public TmplItemContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplItem; }
	}

	public final TmplItemContext tmplItem() throws RecognitionException {
		TmplItemContext _localctx = new TmplItemContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_tmplItem);
		try {
			setState(207);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(199);
				tmplText();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(200);
				match(TMPL_EXPR_OPEN);
				setState(201);
				tmplExpression();
				setState(202);
				match(TMPL_EXPR_CLOSE);
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(204);
				tmplIfBlock();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(205);
				tmplForBlock();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(206);
				tmplSwitchBlock();
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

	public static class TmplTextContext extends ParserRuleContext {
		public std::string text;
		public TerminalNode TMPL_TEXT() { return getToken(TypedefParser.TMPL_TEXT, 0); }
		public TmplTextContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplText; }
	}

	public final TmplTextContext tmplText() throws RecognitionException {
		TmplTextContext _localctx = new TmplTextContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_tmplText);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(209);
			match(TMPL_TEXT);
			}
			_ctx.stop = _input.LT(-1);
			td::SetTmplText(_localctx.text, _localctx);
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TmplExpressionContext extends ParserRuleContext {
		public TerminalNode TMPL_LPAREN() { return getToken(TypedefParser.TMPL_LPAREN, 0); }
		public TmplExpressionContext tmplExpression() {
			return getRuleContext(TmplExpressionContext.class,0);
		}
		public TerminalNode TMPL_RPAREN() { return getToken(TypedefParser.TMPL_RPAREN, 0); }
		public TerminalNode TMPL_NOT() { return getToken(TypedefParser.TMPL_NOT, 0); }
		public TmplValueReferencePathContext tmplValueReferencePath() {
			return getRuleContext(TmplValueReferencePathContext.class,0);
		}
		public TmplFunctionCallContext tmplFunctionCall() {
			return getRuleContext(TmplFunctionCallContext.class,0);
		}
		public TmplExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplExpression; }
	}

	public final TmplExpressionContext tmplExpression() throws RecognitionException {
		TmplExpressionContext _localctx = new TmplExpressionContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_tmplExpression);
		try {
			setState(219);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(211);
				match(TMPL_LPAREN);
				setState(212);
				tmplExpression();
				setState(213);
				match(TMPL_RPAREN);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(215);
				match(TMPL_NOT);
				setState(216);
				tmplExpression();
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(217);
				tmplValueReferencePath();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(218);
				tmplFunctionCall();
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

	public static class TmplFunctionCallContext extends ParserRuleContext {
		public TmplDefinitionContext* tmpl_def;
		public bool built_in;
		public TmplIdentifierContext tmplIdentifier() {
			return getRuleContext(TmplIdentifierContext.class,0);
		}
		public TerminalNode TMPL_LPAREN() { return getToken(TypedefParser.TMPL_LPAREN, 0); }
		public TerminalNode TMPL_RPAREN() { return getToken(TypedefParser.TMPL_RPAREN, 0); }
		public List<TmplValueReferencePathContext> tmplValueReferencePath() {
			return getRuleContexts(TmplValueReferencePathContext.class);
		}
		public TmplValueReferencePathContext tmplValueReferencePath(int i) {
			return getRuleContext(TmplValueReferencePathContext.class,i);
		}
		public List<TerminalNode> TMPL_COMMA() { return getTokens(TypedefParser.TMPL_COMMA); }
		public TerminalNode TMPL_COMMA(int i) {
			return getToken(TypedefParser.TMPL_COMMA, i);
		}
		public TmplFunctionCallContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplFunctionCall; }
	}

	public final TmplFunctionCallContext tmplFunctionCall() throws RecognitionException {
		TmplFunctionCallContext _localctx = new TmplFunctionCallContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_tmplFunctionCall);
		((TmplFunctionCallContext)_localctx).tmpl_def =  nullptr; ((TmplFunctionCallContext)_localctx).built_in =  false;
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(221);
			tmplIdentifier();
			setState(222);
			match(TMPL_LPAREN);
			setState(224);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TMPL_NON_KEYWORD_IDENTIFIER) {
				{
				setState(223);
				tmplValueReferencePath();
				}
			}

			setState(230);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TMPL_COMMA) {
				{
				{
				setState(226);
				match(TMPL_COMMA);
				setState(227);
				tmplValueReferencePath();
				}
				}
				setState(232);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(233);
			match(TMPL_RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TmplIfBlockContext extends ParserRuleContext {
		public TmplIfSubBlockContext tmplIfSubBlock() {
			return getRuleContext(TmplIfSubBlockContext.class,0);
		}
		public TerminalNode TMPL_EXPR_OPEN() { return getToken(TypedefParser.TMPL_EXPR_OPEN, 0); }
		public TerminalNode TMPL_KW_CLOSEIF() { return getToken(TypedefParser.TMPL_KW_CLOSEIF, 0); }
		public TerminalNode TMPL_EXPR_CLOSE() { return getToken(TypedefParser.TMPL_EXPR_CLOSE, 0); }
		public List<TmplElIfSubBlockContext> tmplElIfSubBlock() {
			return getRuleContexts(TmplElIfSubBlockContext.class);
		}
		public TmplElIfSubBlockContext tmplElIfSubBlock(int i) {
			return getRuleContext(TmplElIfSubBlockContext.class,i);
		}
		public TmplElseSubBlockContext tmplElseSubBlock() {
			return getRuleContext(TmplElseSubBlockContext.class,0);
		}
		public TmplIfBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplIfBlock; }
	}

	public final TmplIfBlockContext tmplIfBlock() throws RecognitionException {
		TmplIfBlockContext _localctx = new TmplIfBlockContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_tmplIfBlock);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(235);
			tmplIfSubBlock();
			setState(239);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(236);
					tmplElIfSubBlock();
					}
					} 
				}
				setState(241);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
			}
			setState(243);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,23,_ctx) ) {
			case 1:
				{
				setState(242);
				tmplElseSubBlock();
				}
				break;
			}
			{
			setState(245);
			match(TMPL_EXPR_OPEN);
			setState(246);
			match(TMPL_KW_CLOSEIF);
			setState(247);
			match(TMPL_EXPR_CLOSE);
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

	public static class TmplIfSubBlockContext extends ParserRuleContext {
		public TerminalNode TMPL_EXPR_OPEN() { return getToken(TypedefParser.TMPL_EXPR_OPEN, 0); }
		public TerminalNode TMPL_KW_IF() { return getToken(TypedefParser.TMPL_KW_IF, 0); }
		public TmplExpressionContext tmplExpression() {
			return getRuleContext(TmplExpressionContext.class,0);
		}
		public TerminalNode TMPL_EXPR_CLOSE() { return getToken(TypedefParser.TMPL_EXPR_CLOSE, 0); }
		public List<TmplItemContext> tmplItem() {
			return getRuleContexts(TmplItemContext.class);
		}
		public TmplItemContext tmplItem(int i) {
			return getRuleContext(TmplItemContext.class,i);
		}
		public TmplIfSubBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplIfSubBlock; }
	}

	public final TmplIfSubBlockContext tmplIfSubBlock() throws RecognitionException {
		TmplIfSubBlockContext _localctx = new TmplIfSubBlockContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_tmplIfSubBlock);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(249);
			match(TMPL_EXPR_OPEN);
			setState(250);
			match(TMPL_KW_IF);
			setState(251);
			tmplExpression();
			setState(252);
			match(TMPL_EXPR_CLOSE);
			}
			setState(257);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,24,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(254);
					tmplItem();
					}
					} 
				}
				setState(259);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,24,_ctx);
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

	public static class TmplElIfSubBlockContext extends ParserRuleContext {
		public TerminalNode TMPL_EXPR_OPEN() { return getToken(TypedefParser.TMPL_EXPR_OPEN, 0); }
		public TerminalNode TMPL_KW_ELIF() { return getToken(TypedefParser.TMPL_KW_ELIF, 0); }
		public TmplExpressionContext tmplExpression() {
			return getRuleContext(TmplExpressionContext.class,0);
		}
		public TerminalNode TMPL_EXPR_CLOSE() { return getToken(TypedefParser.TMPL_EXPR_CLOSE, 0); }
		public List<TmplItemContext> tmplItem() {
			return getRuleContexts(TmplItemContext.class);
		}
		public TmplItemContext tmplItem(int i) {
			return getRuleContext(TmplItemContext.class,i);
		}
		public TmplElIfSubBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplElIfSubBlock; }
	}

	public final TmplElIfSubBlockContext tmplElIfSubBlock() throws RecognitionException {
		TmplElIfSubBlockContext _localctx = new TmplElIfSubBlockContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_tmplElIfSubBlock);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(260);
			match(TMPL_EXPR_OPEN);
			setState(261);
			match(TMPL_KW_ELIF);
			setState(262);
			tmplExpression();
			setState(263);
			match(TMPL_EXPR_CLOSE);
			}
			setState(268);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,25,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(265);
					tmplItem();
					}
					} 
				}
				setState(270);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,25,_ctx);
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

	public static class TmplElseSubBlockContext extends ParserRuleContext {
		public TerminalNode TMPL_EXPR_OPEN() { return getToken(TypedefParser.TMPL_EXPR_OPEN, 0); }
		public TerminalNode TMPL_KW_ELSE() { return getToken(TypedefParser.TMPL_KW_ELSE, 0); }
		public TerminalNode TMPL_EXPR_CLOSE() { return getToken(TypedefParser.TMPL_EXPR_CLOSE, 0); }
		public List<TmplItemContext> tmplItem() {
			return getRuleContexts(TmplItemContext.class);
		}
		public TmplItemContext tmplItem(int i) {
			return getRuleContext(TmplItemContext.class,i);
		}
		public TmplElseSubBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplElseSubBlock; }
	}

	public final TmplElseSubBlockContext tmplElseSubBlock() throws RecognitionException {
		TmplElseSubBlockContext _localctx = new TmplElseSubBlockContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_tmplElseSubBlock);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(271);
			match(TMPL_EXPR_OPEN);
			setState(272);
			match(TMPL_KW_ELSE);
			setState(273);
			match(TMPL_EXPR_CLOSE);
			setState(277);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,26,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(274);
					tmplItem();
					}
					} 
				}
				setState(279);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,26,_ctx);
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

	public static class TmplForBlockContext extends ParserRuleContext {
		public TmplValueReferencePathContext collection;
		public List<TerminalNode> TMPL_EXPR_OPEN() { return getTokens(TypedefParser.TMPL_EXPR_OPEN); }
		public TerminalNode TMPL_EXPR_OPEN(int i) {
			return getToken(TypedefParser.TMPL_EXPR_OPEN, i);
		}
		public TerminalNode TMPL_KW_FOR() { return getToken(TypedefParser.TMPL_KW_FOR, 0); }
		public TmplBindingVariablesContext tmplBindingVariables() {
			return getRuleContext(TmplBindingVariablesContext.class,0);
		}
		public TerminalNode TMPL_KW_IN() { return getToken(TypedefParser.TMPL_KW_IN, 0); }
		public List<TerminalNode> TMPL_EXPR_CLOSE() { return getTokens(TypedefParser.TMPL_EXPR_CLOSE); }
		public TerminalNode TMPL_EXPR_CLOSE(int i) {
			return getToken(TypedefParser.TMPL_EXPR_CLOSE, i);
		}
		public TerminalNode TMPL_KW_CLOSE_FOR() { return getToken(TypedefParser.TMPL_KW_CLOSE_FOR, 0); }
		public TmplValueReferencePathContext tmplValueReferencePath() {
			return getRuleContext(TmplValueReferencePathContext.class,0);
		}
		public List<TmplItemContext> tmplItem() {
			return getRuleContexts(TmplItemContext.class);
		}
		public TmplItemContext tmplItem(int i) {
			return getRuleContext(TmplItemContext.class,i);
		}
		public TmplForBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplForBlock; }
	}

	public final TmplForBlockContext tmplForBlock() throws RecognitionException {
		TmplForBlockContext _localctx = new TmplForBlockContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_tmplForBlock);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(280);
			match(TMPL_EXPR_OPEN);
			setState(281);
			match(TMPL_KW_FOR);
			setState(282);
			tmplBindingVariables();
			setState(283);
			match(TMPL_KW_IN);
			setState(284);
			((TmplForBlockContext)_localctx).collection = tmplValueReferencePath();
			setState(285);
			match(TMPL_EXPR_CLOSE);
			}
			setState(290);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,27,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(287);
					tmplItem();
					}
					} 
				}
				setState(292);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,27,_ctx);
			}
			{
			setState(293);
			match(TMPL_EXPR_OPEN);
			setState(294);
			match(TMPL_KW_CLOSE_FOR);
			setState(295);
			match(TMPL_EXPR_CLOSE);
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

	public static class TmplSwitchBlockContext extends ParserRuleContext {
		public List<TerminalNode> TMPL_EXPR_OPEN() { return getTokens(TypedefParser.TMPL_EXPR_OPEN); }
		public TerminalNode TMPL_EXPR_OPEN(int i) {
			return getToken(TypedefParser.TMPL_EXPR_OPEN, i);
		}
		public TerminalNode TMPL_KW_SWITCH() { return getToken(TypedefParser.TMPL_KW_SWITCH, 0); }
		public TmplValueReferencePathContext tmplValueReferencePath() {
			return getRuleContext(TmplValueReferencePathContext.class,0);
		}
		public List<TerminalNode> TMPL_EXPR_CLOSE() { return getTokens(TypedefParser.TMPL_EXPR_CLOSE); }
		public TerminalNode TMPL_EXPR_CLOSE(int i) {
			return getToken(TypedefParser.TMPL_EXPR_CLOSE, i);
		}
		public TerminalNode TMPL_KW_CLOSE_SWITCH() { return getToken(TypedefParser.TMPL_KW_CLOSE_SWITCH, 0); }
		public List<TerminalNode> TMPL_TEXT() { return getTokens(TypedefParser.TMPL_TEXT); }
		public TerminalNode TMPL_TEXT(int i) {
			return getToken(TypedefParser.TMPL_TEXT, i);
		}
		public List<TmplCaseBlockContext> tmplCaseBlock() {
			return getRuleContexts(TmplCaseBlockContext.class);
		}
		public TmplCaseBlockContext tmplCaseBlock(int i) {
			return getRuleContext(TmplCaseBlockContext.class,i);
		}
		public TmplDefaultBlockContext tmplDefaultBlock() {
			return getRuleContext(TmplDefaultBlockContext.class,0);
		}
		public TmplSwitchBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplSwitchBlock; }
	}

	public final TmplSwitchBlockContext tmplSwitchBlock() throws RecognitionException {
		TmplSwitchBlockContext _localctx = new TmplSwitchBlockContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_tmplSwitchBlock);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(297);
			match(TMPL_EXPR_OPEN);
			setState(298);
			match(TMPL_KW_SWITCH);
			setState(299);
			tmplValueReferencePath();
			setState(300);
			match(TMPL_EXPR_CLOSE);
			}
			setState(303);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,28,_ctx) ) {
			case 1:
				{
				setState(302);
				match(TMPL_TEXT);
				}
				break;
			}
			setState(314);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,31,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(306);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,29,_ctx) ) {
					case 1:
						{
						setState(305);
						match(TMPL_TEXT);
						}
						break;
					}
					setState(308);
					tmplCaseBlock();
					setState(310);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,30,_ctx) ) {
					case 1:
						{
						setState(309);
						match(TMPL_TEXT);
						}
						break;
					}
					}
					} 
				}
				setState(316);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,31,_ctx);
			}
			setState(324);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,34,_ctx) ) {
			case 1:
				{
				setState(318);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
				case 1:
					{
					setState(317);
					match(TMPL_TEXT);
					}
					break;
				}
				setState(320);
				tmplDefaultBlock();
				setState(322);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==TMPL_TEXT) {
					{
					setState(321);
					match(TMPL_TEXT);
					}
				}

				}
				break;
			}
			{
			setState(326);
			match(TMPL_EXPR_OPEN);
			setState(327);
			match(TMPL_KW_CLOSE_SWITCH);
			setState(328);
			match(TMPL_EXPR_CLOSE);
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

	public static class TmplCaseBlockContext extends ParserRuleContext {
		public List<TerminalNode> TMPL_EXPR_OPEN() { return getTokens(TypedefParser.TMPL_EXPR_OPEN); }
		public TerminalNode TMPL_EXPR_OPEN(int i) {
			return getToken(TypedefParser.TMPL_EXPR_OPEN, i);
		}
		public TerminalNode TMPL_KW_CASE() { return getToken(TypedefParser.TMPL_KW_CASE, 0); }
		public TmplValueReferencePathContext tmplValueReferencePath() {
			return getRuleContext(TmplValueReferencePathContext.class,0);
		}
		public List<TerminalNode> TMPL_EXPR_CLOSE() { return getTokens(TypedefParser.TMPL_EXPR_CLOSE); }
		public TerminalNode TMPL_EXPR_CLOSE(int i) {
			return getToken(TypedefParser.TMPL_EXPR_CLOSE, i);
		}
		public TerminalNode TMPL_KW_CLOSE_CASE() { return getToken(TypedefParser.TMPL_KW_CLOSE_CASE, 0); }
		public List<TmplItemContext> tmplItem() {
			return getRuleContexts(TmplItemContext.class);
		}
		public TmplItemContext tmplItem(int i) {
			return getRuleContext(TmplItemContext.class,i);
		}
		public TerminalNode TMPL_TEXT() { return getToken(TypedefParser.TMPL_TEXT, 0); }
		public TmplCaseBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplCaseBlock; }
	}

	public final TmplCaseBlockContext tmplCaseBlock() throws RecognitionException {
		TmplCaseBlockContext _localctx = new TmplCaseBlockContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_tmplCaseBlock);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(331);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TMPL_TEXT) {
				{
				setState(330);
				match(TMPL_TEXT);
				}
			}

			setState(333);
			match(TMPL_EXPR_OPEN);
			setState(334);
			match(TMPL_KW_CASE);
			setState(335);
			tmplValueReferencePath();
			setState(336);
			match(TMPL_EXPR_CLOSE);
			}
			setState(341);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,36,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(338);
					tmplItem();
					}
					} 
				}
				setState(343);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,36,_ctx);
			}
			{
			setState(344);
			match(TMPL_EXPR_OPEN);
			setState(345);
			match(TMPL_KW_CLOSE_CASE);
			setState(346);
			match(TMPL_EXPR_CLOSE);
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

	public static class TmplDefaultBlockContext extends ParserRuleContext {
		public List<TerminalNode> TMPL_EXPR_OPEN() { return getTokens(TypedefParser.TMPL_EXPR_OPEN); }
		public TerminalNode TMPL_EXPR_OPEN(int i) {
			return getToken(TypedefParser.TMPL_EXPR_OPEN, i);
		}
		public TerminalNode TMPL_KW_DEFAULT() { return getToken(TypedefParser.TMPL_KW_DEFAULT, 0); }
		public List<TerminalNode> TMPL_EXPR_CLOSE() { return getTokens(TypedefParser.TMPL_EXPR_CLOSE); }
		public TerminalNode TMPL_EXPR_CLOSE(int i) {
			return getToken(TypedefParser.TMPL_EXPR_CLOSE, i);
		}
		public TerminalNode TMPL_KW_CLOSE_DEFAULT() { return getToken(TypedefParser.TMPL_KW_CLOSE_DEFAULT, 0); }
		public List<TmplItemContext> tmplItem() {
			return getRuleContexts(TmplItemContext.class);
		}
		public TmplItemContext tmplItem(int i) {
			return getRuleContext(TmplItemContext.class,i);
		}
		public TerminalNode TMPL_TEXT() { return getToken(TypedefParser.TMPL_TEXT, 0); }
		public TmplDefaultBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplDefaultBlock; }
	}

	public final TmplDefaultBlockContext tmplDefaultBlock() throws RecognitionException {
		TmplDefaultBlockContext _localctx = new TmplDefaultBlockContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_tmplDefaultBlock);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(349);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TMPL_TEXT) {
				{
				setState(348);
				match(TMPL_TEXT);
				}
			}

			setState(351);
			match(TMPL_EXPR_OPEN);
			setState(352);
			match(TMPL_KW_DEFAULT);
			setState(353);
			match(TMPL_EXPR_CLOSE);
			}
			setState(358);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,38,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(355);
					tmplItem();
					}
					} 
				}
				setState(360);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,38,_ctx);
			}
			{
			setState(361);
			match(TMPL_EXPR_OPEN);
			setState(362);
			match(TMPL_KW_CLOSE_DEFAULT);
			setState(363);
			match(TMPL_EXPR_CLOSE);
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

	public static class TmplBindingVariablesContext extends ParserRuleContext {
		public List<TmplBindingVariableContext> tmplBindingVariable() {
			return getRuleContexts(TmplBindingVariableContext.class);
		}
		public TmplBindingVariableContext tmplBindingVariable(int i) {
			return getRuleContext(TmplBindingVariableContext.class,i);
		}
		public TerminalNode TMPL_COMMA() { return getToken(TypedefParser.TMPL_COMMA, 0); }
		public TmplBindingVariablesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplBindingVariables; }
	}

	public final TmplBindingVariablesContext tmplBindingVariables() throws RecognitionException {
		TmplBindingVariablesContext _localctx = new TmplBindingVariablesContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_tmplBindingVariables);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(365);
			tmplBindingVariable();
			setState(368);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TMPL_COMMA) {
				{
				setState(366);
				match(TMPL_COMMA);
				setState(367);
				tmplBindingVariable();
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

	public static class TmplValueReferencePathContext extends ParserRuleContext {
		public bool first_pass_visited;
		public TypeAnnotationContext* leaf_annotation;
		public TypeDefinitionContext* leaf_definition;
		public List<TmplValueReferenceContext> tmplValueReference() {
			return getRuleContexts(TmplValueReferenceContext.class);
		}
		public TmplValueReferenceContext tmplValueReference(int i) {
			return getRuleContext(TmplValueReferenceContext.class,i);
		}
		public List<TerminalNode> TMPL_DOT() { return getTokens(TypedefParser.TMPL_DOT); }
		public TerminalNode TMPL_DOT(int i) {
			return getToken(TypedefParser.TMPL_DOT, i);
		}
		public TmplValueReferencePathContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplValueReferencePath; }
	}

	public final TmplValueReferencePathContext tmplValueReferencePath() throws RecognitionException {
		TmplValueReferencePathContext _localctx = new TmplValueReferencePathContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_tmplValueReferencePath);
			((TmplValueReferencePathContext)_localctx).first_pass_visited =  false; //
							((TmplValueReferencePathContext)_localctx).leaf_annotation =  nullptr; //
							((TmplValueReferencePathContext)_localctx).leaf_definition =  nullptr;
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(370);
			tmplValueReference();
			setState(375);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TMPL_DOT) {
				{
				{
				setState(371);
				match(TMPL_DOT);
				setState(372);
				tmplValueReference();
				}
				}
				setState(377);
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

	public static class TmplValueReferenceContext extends ParserRuleContext {
		public TmplIdentifierContext tmplIdentifier() {
			return getRuleContext(TmplIdentifierContext.class,0);
		}
		public TmplValueReferenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplValueReference; }
	}

	public final TmplValueReferenceContext tmplValueReference() throws RecognitionException {
		TmplValueReferenceContext _localctx = new TmplValueReferenceContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_tmplValueReference);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(378);
			tmplIdentifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TmplBindingVariableContext extends ParserRuleContext {
		public TypeAnnotationContext* type;
		public TmplIdentifierContext tmplIdentifier() {
			return getRuleContext(TmplIdentifierContext.class,0);
		}
		public TmplBindingVariableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplBindingVariable; }
	}

	public final TmplBindingVariableContext tmplBindingVariable() throws RecognitionException {
		TmplBindingVariableContext _localctx = new TmplBindingVariableContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_tmplBindingVariable);
		((TmplBindingVariableContext)_localctx).type =  nullptr;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(380);
			tmplIdentifier();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TmplIdentifierContext extends ParserRuleContext {
		public std::string id;
		public Token nki;
		public TerminalNode TMPL_NON_KEYWORD_IDENTIFIER() { return getToken(TypedefParser.TMPL_NON_KEYWORD_IDENTIFIER, 0); }
		public TmplIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplIdentifier; }
	}

	public final TmplIdentifierContext tmplIdentifier() throws RecognitionException {
		TmplIdentifierContext _localctx = new TmplIdentifierContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_tmplIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(382);
			((TmplIdentifierContext)_localctx).nki = match(TMPL_NON_KEYWORD_IDENTIFIER);
			}
			_ctx.stop = _input.LT(-1);
			((TmplIdentifierContext)_localctx).id =  _localctx->nki->getText();
		}
		catch (RecognitionException re) {
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
		public TypeAnnotationContext parameter_type;
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public TypeAnnotationContext typeAnnotation() {
			return getRuleContext(TypeAnnotationContext.class,0);
		}
		public FunctionParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionParameter; }
	}

	public final FunctionParameterContext functionParameter() throws RecognitionException {
		FunctionParameterContext _localctx = new FunctionParameterContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_functionParameter);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(384);
			identifier();
			setState(385);
			match(COLON);
			setState(386);
			((FunctionParameterContext)_localctx).parameter_type = typeAnnotation();
			}
		}
		catch (RecognitionException re) {
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
		public SymbolPathContext symbolPath() {
			return getRuleContext(SymbolPathContext.class,0);
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
			setState(388);
			match(KW_USE);
			setState(389);
			symbolPath();
			setState(390);
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

	public static class SymbolPathContext extends ParserRuleContext {
		public Token leading_pathsep;
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public List<TerminalNode> COLONCOLON() { return getTokens(TypedefParser.COLONCOLON); }
		public TerminalNode COLONCOLON(int i) {
			return getToken(TypedefParser.COLONCOLON, i);
		}
		public SymbolPathContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_symbolPath; }
	}

	public final SymbolPathContext symbolPath() throws RecognitionException {
		SymbolPathContext _localctx = new SymbolPathContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_symbolPath);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(393);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLONCOLON) {
				{
				setState(392);
				((SymbolPathContext)_localctx).leading_pathsep = match(COLONCOLON);
				}
			}

			setState(395);
			identifier();
			setState(400);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COLONCOLON) {
				{
				{
				setState(396);
				match(COLONCOLON);
				setState(397);
				identifier();
				}
				}
				setState(402);
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

	public static class PrimitiveLiteralContext extends ParserRuleContext {
		public BoolLiteralContext boolLiteral() {
			return getRuleContext(BoolLiteralContext.class,0);
		}
		public CharLiteralContext charLiteral() {
			return getRuleContext(CharLiteralContext.class,0);
		}
		public StringLiteralContext stringLiteral() {
			return getRuleContext(StringLiteralContext.class,0);
		}
		public FloatLiteralContext floatLiteral() {
			return getRuleContext(FloatLiteralContext.class,0);
		}
		public IntegerLiteralContext integerLiteral() {
			return getRuleContext(IntegerLiteralContext.class,0);
		}
		public PrimitiveLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primitiveLiteral; }
	}

	public final PrimitiveLiteralContext primitiveLiteral() throws RecognitionException {
		PrimitiveLiteralContext _localctx = new PrimitiveLiteralContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_primitiveLiteral);
		try {
			setState(408);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case KW_FALSE:
			case KW_TRUE:
				enterOuterAlt(_localctx, 1);
				{
				setState(403);
				boolLiteral();
				}
				break;
			case CHAR_LITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(404);
				charLiteral();
				}
				break;
			case STRING_LITERAL:
			case RAW_STRING_LITERAL:
				enterOuterAlt(_localctx, 3);
				{
				setState(405);
				stringLiteral();
				}
				break;
			case FLOAT_LITERAL:
				enterOuterAlt(_localctx, 4);
				{
				setState(406);
				floatLiteral();
				}
				break;
			case DEC_LITERAL:
			case HEX_LITERAL:
			case OCT_LITERAL:
			case BIN_LITERAL:
				enterOuterAlt(_localctx, 5);
				{
				setState(407);
				integerLiteral();
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

	public static class BoolLiteralContext extends ParserRuleContext {
		public bool bool_literal;
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
			setState(410);
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
			td::SetBoolLiteral(_localctx.bool_literal, _localctx);
		}
		catch (RecognitionException re) {
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
		public char32_t char_literal;
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
			setState(412);
			match(CHAR_LITERAL);
			}
			_ctx.stop = _input.LT(-1);
			td::SetCharLiteral(_localctx.char_literal, _localctx);
		}
		catch (RecognitionException re) {
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
		public std::string string_literal;
		public TerminalNode STRING_LITERAL() { return getToken(TypedefParser.STRING_LITERAL, 0); }
		public TerminalNode RAW_STRING_LITERAL() { return getToken(TypedefParser.RAW_STRING_LITERAL, 0); }
		public StringLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stringLiteral; }
	}

	public final StringLiteralContext stringLiteral() throws RecognitionException {
		StringLiteralContext _localctx = new StringLiteralContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_stringLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(414);
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
			_ctx.stop = _input.LT(-1);
			td::SetStringLiteral(_localctx.string_literal, _localctx);
		}
		catch (RecognitionException re) {
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
		public td::FloatLiteral float_literal;
		public TerminalNode FLOAT_LITERAL() { return getToken(TypedefParser.FLOAT_LITERAL, 0); }
		public TerminalNode KW_F32() { return getToken(TypedefParser.KW_F32, 0); }
		public TerminalNode KW_F64() { return getToken(TypedefParser.KW_F64, 0); }
		public FloatLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_floatLiteral; }
	}

	public final FloatLiteralContext floatLiteral() throws RecognitionException {
		FloatLiteralContext _localctx = new FloatLiteralContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_floatLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(416);
			match(FLOAT_LITERAL);
			setState(418);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==KW_F32 || _la==KW_F64) {
				{
				setState(417);
				_la = _input.LA(1);
				if ( !(_la==KW_F32 || _la==KW_F64) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
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

	public static class IntegerLiteralContext extends ParserRuleContext {
		public td::IntegerLiteral integer_literal;
		public IntDigitsContext intDigits() {
			return getRuleContext(IntDigitsContext.class,0);
		}
		public TerminalNode KW_U8() { return getToken(TypedefParser.KW_U8, 0); }
		public TerminalNode KW_U16() { return getToken(TypedefParser.KW_U16, 0); }
		public TerminalNode KW_U32() { return getToken(TypedefParser.KW_U32, 0); }
		public TerminalNode KW_U64() { return getToken(TypedefParser.KW_U64, 0); }
		public TerminalNode KW_I8() { return getToken(TypedefParser.KW_I8, 0); }
		public TerminalNode KW_I16() { return getToken(TypedefParser.KW_I16, 0); }
		public TerminalNode KW_I32() { return getToken(TypedefParser.KW_I32, 0); }
		public TerminalNode KW_I64() { return getToken(TypedefParser.KW_I64, 0); }
		public IntegerLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_integerLiteral; }
	}

	public final IntegerLiteralContext integerLiteral() throws RecognitionException {
		IntegerLiteralContext _localctx = new IntegerLiteralContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_integerLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(420);
			intDigits();
			}
			setState(422);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 77)) & ~0x3f) == 0 && ((1L << (_la - 77)) & ((1L << (KW_U8 - 77)) | (1L << (KW_U16 - 77)) | (1L << (KW_U32 - 77)) | (1L << (KW_U64 - 77)) | (1L << (KW_I8 - 77)) | (1L << (KW_I16 - 77)) | (1L << (KW_I32 - 77)) | (1L << (KW_I64 - 77)))) != 0)) {
				{
				setState(421);
				_la = _input.LA(1);
				if ( !(((((_la - 77)) & ~0x3f) == 0 && ((1L << (_la - 77)) & ((1L << (KW_U8 - 77)) | (1L << (KW_U16 - 77)) | (1L << (KW_U32 - 77)) | (1L << (KW_U64 - 77)) | (1L << (KW_I8 - 77)) | (1L << (KW_I16 - 77)) | (1L << (KW_I32 - 77)) | (1L << (KW_I64 - 77)))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
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

	public static class IntDigitsContext extends ParserRuleContext {
		public TerminalNode DEC_LITERAL() { return getToken(TypedefParser.DEC_LITERAL, 0); }
		public TerminalNode HEX_LITERAL() { return getToken(TypedefParser.HEX_LITERAL, 0); }
		public TerminalNode OCT_LITERAL() { return getToken(TypedefParser.OCT_LITERAL, 0); }
		public TerminalNode BIN_LITERAL() { return getToken(TypedefParser.BIN_LITERAL, 0); }
		public IntDigitsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_intDigits; }
	}

	public final IntDigitsContext intDigits() throws RecognitionException {
		IntDigitsContext _localctx = new IntDigitsContext(_ctx, getState());
		enterRule(_localctx, 74, RULE_intDigits);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(424);
			_la = _input.LA(1);
			if ( !(((((_la - 97)) & ~0x3f) == 0 && ((1L << (_la - 97)) & ((1L << (DEC_LITERAL - 97)) | (1L << (HEX_LITERAL - 97)) | (1L << (OCT_LITERAL - 97)) | (1L << (BIN_LITERAL - 97)))) != 0)) ) {
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
		enterRule(_localctx, 76, RULE_identifier);
		try {
			setState(429);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NON_KEYWORD_IDENTIFIER:
				enterOuterAlt(_localctx, 1);
				{
				setState(426);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(427);
				match(RAW_ESCAPE);
				setState(428);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			((IdentifierContext)_localctx).id =  _localctx->nki->getText();
		}
		catch (RecognitionException re) {
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
		enterRule(_localctx, 78, RULE_primitiveTypeIdentifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(431);
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
		enterRule(_localctx, 80, RULE_keyword);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(433);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00be\u01b6\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\3\2\3\2"+
		"\3\2\7\2X\n\2\f\2\16\2[\13\2\3\2\3\2\7\2_\n\2\f\2\16\2b\13\2\3\2\3\2\3"+
		"\3\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\5\3\5\5\5q\n\5\3\5\3\5\3\5\3\5\6"+
		"\5w\n\5\r\5\16\5x\3\5\3\5\5\5}\n\5\3\5\3\5\3\5\3\5\5\5\u0083\n\5\3\6\3"+
		"\6\3\6\3\6\7\6\u0089\n\6\f\6\16\6\u008c\13\6\3\7\3\7\5\7\u0090\n\7\3\7"+
		"\3\7\3\7\5\7\u0095\n\7\3\7\3\7\5\7\u0099\n\7\3\b\3\b\3\b\3\b\3\b\7\b\u00a0"+
		"\n\b\f\b\16\b\u00a3\13\b\3\b\3\b\5\b\u00a7\n\b\3\t\3\t\3\t\3\t\5\t\u00ad"+
		"\n\t\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\13\7\13\u00b7\n\13\f\13\16\13"+
		"\u00ba\13\13\5\13\u00bc\n\13\3\13\3\13\3\13\3\f\3\f\7\f\u00c3\n\f\f\f"+
		"\16\f\u00c6\13\f\3\f\3\f\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\5\r\u00d2\n\r"+
		"\3\16\3\16\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\5\17\u00de\n\17\3\20"+
		"\3\20\3\20\5\20\u00e3\n\20\3\20\3\20\7\20\u00e7\n\20\f\20\16\20\u00ea"+
		"\13\20\3\20\3\20\3\21\3\21\7\21\u00f0\n\21\f\21\16\21\u00f3\13\21\3\21"+
		"\5\21\u00f6\n\21\3\21\3\21\3\21\3\21\3\22\3\22\3\22\3\22\3\22\3\22\7\22"+
		"\u0102\n\22\f\22\16\22\u0105\13\22\3\23\3\23\3\23\3\23\3\23\3\23\7\23"+
		"\u010d\n\23\f\23\16\23\u0110\13\23\3\24\3\24\3\24\3\24\7\24\u0116\n\24"+
		"\f\24\16\24\u0119\13\24\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\7\25\u0123"+
		"\n\25\f\25\16\25\u0126\13\25\3\25\3\25\3\25\3\25\3\26\3\26\3\26\3\26\3"+
		"\26\3\26\5\26\u0132\n\26\3\26\5\26\u0135\n\26\3\26\3\26\5\26\u0139\n\26"+
		"\7\26\u013b\n\26\f\26\16\26\u013e\13\26\3\26\5\26\u0141\n\26\3\26\3\26"+
		"\5\26\u0145\n\26\5\26\u0147\n\26\3\26\3\26\3\26\3\26\3\27\5\27\u014e\n"+
		"\27\3\27\3\27\3\27\3\27\3\27\3\27\7\27\u0156\n\27\f\27\16\27\u0159\13"+
		"\27\3\27\3\27\3\27\3\27\3\30\5\30\u0160\n\30\3\30\3\30\3\30\3\30\3\30"+
		"\7\30\u0167\n\30\f\30\16\30\u016a\13\30\3\30\3\30\3\30\3\30\3\31\3\31"+
		"\3\31\5\31\u0173\n\31\3\32\3\32\3\32\7\32\u0178\n\32\f\32\16\32\u017b"+
		"\13\32\3\33\3\33\3\34\3\34\3\35\3\35\3\36\3\36\3\36\3\36\3\37\3\37\3\37"+
		"\3\37\3 \5 \u018c\n \3 \3 \3 \7 \u0191\n \f \16 \u0194\13 \3!\3!\3!\3"+
		"!\3!\5!\u019b\n!\3\"\3\"\3#\3#\3$\3$\3%\3%\5%\u01a5\n%\3&\3&\5&\u01a9"+
		"\n&\3\'\3\'\3(\3(\3(\5(\u01b0\n(\3)\3)\3*\3*\3*\2\2+\2\4\6\b\n\f\16\20"+
		"\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPR\2\n\4\2\13\13"+
		"\20\20\4\2\6\6\f\f\3\2ab\3\2MN\3\2OV\3\2cf\3\2JV\5\2\4\b\n\22\24I\2\u01c5"+
		"\2T\3\2\2\2\4e\3\2\2\2\6j\3\2\2\2\bn\3\2\2\2\n\u008a\3\2\2\2\f\u008d\3"+
		"\2\2\2\16\u009a\3\2\2\2\20\u00ac\3\2\2\2\22\u00ae\3\2\2\2\24\u00b0\3\2"+
		"\2\2\26\u00c0\3\2\2\2\30\u00d1\3\2\2\2\32\u00d3\3\2\2\2\34\u00dd\3\2\2"+
		"\2\36\u00df\3\2\2\2 \u00ed\3\2\2\2\"\u00fb\3\2\2\2$\u0106\3\2\2\2&\u0111"+
		"\3\2\2\2(\u011a\3\2\2\2*\u012b\3\2\2\2,\u014d\3\2\2\2.\u015f\3\2\2\2\60"+
		"\u016f\3\2\2\2\62\u0174\3\2\2\2\64\u017c\3\2\2\2\66\u017e\3\2\2\28\u0180"+
		"\3\2\2\2:\u0182\3\2\2\2<\u0186\3\2\2\2>\u018b\3\2\2\2@\u019a\3\2\2\2B"+
		"\u019c\3\2\2\2D\u019e\3\2\2\2F\u01a0\3\2\2\2H\u01a2\3\2\2\2J\u01a6\3\2"+
		"\2\2L\u01aa\3\2\2\2N\u01af\3\2\2\2P\u01b1\3\2\2\2R\u01b3\3\2\2\2TU\5\4"+
		"\3\2UY\5\6\4\2VX\5<\37\2WV\3\2\2\2X[\3\2\2\2YW\3\2\2\2YZ\3\2\2\2Z`\3\2"+
		"\2\2[Y\3\2\2\2\\_\5\b\5\2]_\5\24\13\2^\\\3\2\2\2^]\3\2\2\2_b\3\2\2\2`"+
		"^\3\2\2\2`a\3\2\2\2ac\3\2\2\2b`\3\2\2\2cd\7\2\2\3d\3\3\2\2\2ef\7\16\2"+
		"\2fg\7\u0089\2\2gh\5N(\2hi\7\u0096\2\2i\5\3\2\2\2jk\7\n\2\2kl\5> \2lm"+
		"\7\u0096\2\2m\7\3\2\2\2np\t\2\2\2oq\5N(\2po\3\2\2\2pq\3\2\2\2q|\3\2\2"+
		"\2rv\7\u008d\2\2st\5N(\2tu\7\u0095\2\2uw\3\2\2\2vs\3\2\2\2wx\3\2\2\2x"+
		"v\3\2\2\2xy\3\2\2\2yz\3\2\2\2z{\7\u008c\2\2{}\3\2\2\2|r\3\2\2\2|}\3\2"+
		"\2\2}~\3\2\2\2~\177\7\u009e\2\2\177\u0080\5\n\6\2\u0080\u0082\7\u009f"+
		"\2\2\u0081\u0083\7\u0096\2\2\u0082\u0081\3\2\2\2\u0082\u0083\3\2\2\2\u0083"+
		"\t\3\2\2\2\u0084\u0089\5\b\5\2\u0085\u0086\5\f\7\2\u0086\u0087\7\u0096"+
		"\2\2\u0087\u0089\3\2\2\2\u0088\u0084\3\2\2\2\u0088\u0085\3\2\2\2\u0089"+
		"\u008c\3\2\2\2\u008a\u0088\3\2\2\2\u008a\u008b\3\2\2\2\u008b\13\3\2\2"+
		"\2\u008c\u008a\3\2\2\2\u008d\u008f\5N(\2\u008e\u0090\7{\2\2\u008f\u008e"+
		"\3\2\2\2\u008f\u0090\3\2\2\2\u0090\u0091\3\2\2\2\u0091\u0094\7\u0097\2"+
		"\2\u0092\u0095\5\16\b\2\u0093\u0095\5\b\5\2\u0094\u0092\3\2\2\2\u0094"+
		"\u0093\3\2\2\2\u0095\u0098\3\2\2\2\u0096\u0097\7\u0089\2\2\u0097\u0099"+
		"\5@!\2\u0098\u0096\3\2\2\2\u0098\u0099\3\2\2\2\u0099\r\3\2\2\2\u009a\u00a6"+
		"\5\20\t\2\u009b\u009c\7\u008d\2\2\u009c\u00a1\5\16\b\2\u009d\u009e\7\u0095"+
		"\2\2\u009e\u00a0\5\16\b\2\u009f\u009d\3\2\2\2\u00a0\u00a3\3\2\2\2\u00a1"+
		"\u009f\3\2\2\2\u00a1\u00a2\3\2\2\2\u00a2\u00a4\3\2\2\2\u00a3\u00a1\3\2"+
		"\2\2\u00a4\u00a5\7\u008c\2\2\u00a5\u00a7\3\2\2\2\u00a6\u009b\3\2\2\2\u00a6"+
		"\u00a7\3\2\2\2\u00a7\17\3\2\2\2\u00a8\u00ad\5P)\2\u00a9\u00ad\7\21\2\2"+
		"\u00aa\u00ad\7\22\2\2\u00ab\u00ad\5\22\n\2\u00ac\u00a8\3\2\2\2\u00ac\u00a9"+
		"\3\2\2\2\u00ac\u00aa\3\2\2\2\u00ac\u00ab\3\2\2\2\u00ad\21\3\2\2\2\u00ae"+
		"\u00af\5N(\2\u00af\23\3\2\2\2\u00b0\u00b1\7\23\2\2\u00b1\u00b2\5N(\2\u00b2"+
		"\u00bb\7\u00a2\2\2\u00b3\u00b8\5:\36\2\u00b4\u00b5\7\u0095\2\2\u00b5\u00b7"+
		"\5:\36\2\u00b6\u00b4\3\2\2\2\u00b7\u00ba\3\2\2\2\u00b8\u00b6\3\2\2\2\u00b8"+
		"\u00b9\3\2\2\2\u00b9\u00bc\3\2\2\2\u00ba\u00b8\3\2\2\2\u00bb\u00b3\3\2"+
		"\2\2\u00bb\u00bc\3\2\2\2\u00bc\u00bd\3\2\2\2\u00bd\u00be\7\u00a3\2\2\u00be"+
		"\u00bf\5\26\f\2\u00bf\25\3\2\2\2\u00c0\u00c4\7s\2\2\u00c1\u00c3\5\30\r"+
		"\2\u00c2\u00c1\3\2\2\2\u00c3\u00c6\3\2\2\2\u00c4\u00c2\3\2\2\2\u00c4\u00c5"+
		"\3\2\2\2\u00c5\u00c7\3\2\2\2\u00c6\u00c4\3\2\2\2\u00c7\u00c8\7\u00a5\2"+
		"\2\u00c8\27\3\2\2\2\u00c9\u00d2\5\32\16\2\u00ca\u00cb\7\u00a6\2\2\u00cb"+
		"\u00cc\5\34\17\2\u00cc\u00cd\7\u00a8\2\2\u00cd\u00d2\3\2\2\2\u00ce\u00d2"+
		"\5 \21\2\u00cf\u00d2\5(\25\2\u00d0\u00d2\5*\26\2\u00d1\u00c9\3\2\2\2\u00d1"+
		"\u00ca\3\2\2\2\u00d1\u00ce\3\2\2\2\u00d1\u00cf\3\2\2\2\u00d1\u00d0\3\2"+
		"\2\2\u00d2\31\3\2\2\2\u00d3\u00d4\7\u00a7\2\2\u00d4\33\3\2\2\2\u00d5\u00d6"+
		"\7\u00ac\2\2\u00d6\u00d7\5\34\17\2\u00d7\u00d8\7\u00ad\2\2\u00d8\u00de"+
		"\3\2\2\2\u00d9\u00da\7\u00af\2\2\u00da\u00de\5\34\17\2\u00db\u00de\5\62"+
		"\32\2\u00dc\u00de\5\36\20\2\u00dd\u00d5\3\2\2\2\u00dd\u00d9\3\2\2\2\u00dd"+
		"\u00db\3\2\2\2\u00dd\u00dc\3\2\2\2\u00de\35\3\2\2\2\u00df\u00e0\58\35"+
		"\2\u00e0\u00e2\7\u00ac\2\2\u00e1\u00e3\5\62\32\2\u00e2\u00e1\3\2\2\2\u00e2"+
		"\u00e3\3\2\2\2\u00e3\u00e8\3\2\2\2\u00e4\u00e5\7\u00aa\2\2\u00e5\u00e7"+
		"\5\62\32\2\u00e6\u00e4\3\2\2\2\u00e7\u00ea\3\2\2\2\u00e8\u00e6\3\2\2\2"+
		"\u00e8\u00e9\3\2\2\2\u00e9\u00eb\3\2\2\2\u00ea\u00e8\3\2\2\2\u00eb\u00ec"+
		"\7\u00ad\2\2\u00ec\37\3\2\2\2\u00ed\u00f1\5\"\22\2\u00ee\u00f0\5$\23\2"+
		"\u00ef\u00ee\3\2\2\2\u00f0\u00f3\3\2\2\2\u00f1\u00ef\3\2\2\2\u00f1\u00f2"+
		"\3\2\2\2\u00f2\u00f5\3\2\2\2\u00f3\u00f1\3\2\2\2\u00f4\u00f6\5&\24\2\u00f5"+
		"\u00f4\3\2\2\2\u00f5\u00f6\3\2\2\2\u00f6\u00f7\3\2\2\2\u00f7\u00f8\7\u00a6"+
		"\2\2\u00f8\u00f9\7\u00ba\2\2\u00f9\u00fa\7\u00a8\2\2\u00fa!\3\2\2\2\u00fb"+
		"\u00fc\7\u00a6\2\2\u00fc\u00fd\7\u00b9\2\2\u00fd\u00fe\5\34\17\2\u00fe"+
		"\u00ff\7\u00a8\2\2\u00ff\u0103\3\2\2\2\u0100\u0102\5\30\r\2\u0101\u0100"+
		"\3\2\2\2\u0102\u0105\3\2\2\2\u0103\u0101\3\2\2\2\u0103\u0104\3\2\2\2\u0104"+
		"#\3\2\2\2\u0105\u0103\3\2\2\2\u0106\u0107\7\u00a6\2\2\u0107\u0108\7\u00bc"+
		"\2\2\u0108\u0109\5\34\17\2\u0109\u010a\7\u00a8\2\2\u010a\u010e\3\2\2\2"+
		"\u010b\u010d\5\30\r\2\u010c\u010b\3\2\2\2\u010d\u0110\3\2\2\2\u010e\u010c"+
		"\3\2\2\2\u010e\u010f\3\2\2\2\u010f%\3\2\2\2\u0110\u010e\3\2\2\2\u0111"+
		"\u0112\7\u00a6\2\2\u0112\u0113\7\u00bb\2\2\u0113\u0117\7\u00a8\2\2\u0114"+
		"\u0116\5\30\r\2\u0115\u0114\3\2\2\2\u0116\u0119\3\2\2\2\u0117\u0115\3"+
		"\2\2\2\u0117\u0118\3\2\2\2\u0118\'\3\2\2\2\u0119\u0117\3\2\2\2\u011a\u011b"+
		"\7\u00a6\2\2\u011b\u011c\7\u00b0\2\2\u011c\u011d\5\60\31\2\u011d\u011e"+
		"\7\u00b8\2\2\u011e\u011f\5\62\32\2\u011f\u0120\7\u00a8\2\2\u0120\u0124"+
		"\3\2\2\2\u0121\u0123\5\30\r\2\u0122\u0121\3\2\2\2\u0123\u0126\3\2\2\2"+
		"\u0124\u0122\3\2\2\2\u0124\u0125\3\2\2\2\u0125\u0127\3\2\2\2\u0126\u0124"+
		"\3\2\2\2\u0127\u0128\7\u00a6\2\2\u0128\u0129\7\u00b1\2\2\u0129\u012a\7"+
		"\u00a8\2\2\u012a)\3\2\2\2\u012b\u012c\7\u00a6\2\2\u012c\u012d\7\u00b2"+
		"\2\2\u012d\u012e\5\62\32\2\u012e\u012f\7\u00a8\2\2\u012f\u0131\3\2\2\2"+
		"\u0130\u0132\7\u00a7\2\2\u0131\u0130\3\2\2\2\u0131\u0132\3\2\2\2\u0132"+
		"\u013c\3\2\2\2\u0133\u0135\7\u00a7\2\2\u0134\u0133\3\2\2\2\u0134\u0135"+
		"\3\2\2\2\u0135\u0136\3\2\2\2\u0136\u0138\5,\27\2\u0137\u0139\7\u00a7\2"+
		"\2\u0138\u0137\3\2\2\2\u0138\u0139\3\2\2\2\u0139\u013b\3\2\2\2\u013a\u0134"+
		"\3\2\2\2\u013b\u013e\3\2\2\2\u013c\u013a\3\2\2\2\u013c\u013d\3\2\2\2\u013d"+
		"\u0146\3\2\2\2\u013e\u013c\3\2\2\2\u013f\u0141\7\u00a7\2\2\u0140\u013f"+
		"\3\2\2\2\u0140\u0141\3\2\2\2\u0141\u0142\3\2\2\2\u0142\u0144\5.\30\2\u0143"+
		"\u0145\7\u00a7\2\2\u0144\u0143\3\2\2\2\u0144\u0145\3\2\2\2\u0145\u0147"+
		"\3\2\2\2\u0146\u0140\3\2\2\2\u0146\u0147\3\2\2\2\u0147\u0148\3\2\2\2\u0148"+
		"\u0149\7\u00a6\2\2\u0149\u014a\7\u00b3\2\2\u014a\u014b\7\u00a8\2\2\u014b"+
		"+\3\2\2\2\u014c\u014e\7\u00a7\2\2\u014d\u014c\3\2\2\2\u014d\u014e\3\2"+
		"\2\2\u014e\u014f\3\2\2\2\u014f\u0150\7\u00a6\2\2\u0150\u0151\7\u00b4\2"+
		"\2\u0151\u0152\5\62\32\2\u0152\u0153\7\u00a8\2\2\u0153\u0157\3\2\2\2\u0154"+
		"\u0156\5\30\r\2\u0155\u0154\3\2\2\2\u0156\u0159\3\2\2\2\u0157\u0155\3"+
		"\2\2\2\u0157\u0158\3\2\2\2\u0158\u015a\3\2\2\2\u0159\u0157\3\2\2\2\u015a"+
		"\u015b\7\u00a6\2\2\u015b\u015c\7\u00b5\2\2\u015c\u015d\7\u00a8\2\2\u015d"+
		"-\3\2\2\2\u015e\u0160\7\u00a7\2\2\u015f\u015e\3\2\2\2\u015f\u0160\3\2"+
		"\2\2\u0160\u0161\3\2\2\2\u0161\u0162\7\u00a6\2\2\u0162\u0163\7\u00b6\2"+
		"\2\u0163\u0164\7\u00a8\2\2\u0164\u0168\3\2\2\2\u0165\u0167\5\30\r\2\u0166"+
		"\u0165\3\2\2\2\u0167\u016a\3\2\2\2\u0168\u0166\3\2\2\2\u0168\u0169\3\2"+
		"\2\2\u0169\u016b\3\2\2\2\u016a\u0168\3\2\2\2\u016b\u016c\7\u00a6\2\2\u016c"+
		"\u016d\7\u00b7\2\2\u016d\u016e\7\u00a8\2\2\u016e/\3\2\2\2\u016f\u0172"+
		"\5\66\34\2\u0170\u0171\7\u00aa\2\2\u0171\u0173\5\66\34\2\u0172\u0170\3"+
		"\2\2\2\u0172\u0173\3\2\2\2\u0173\61\3\2\2\2\u0174\u0179\5\64\33\2\u0175"+
		"\u0176\7\u00ab\2\2\u0176\u0178\5\64\33\2\u0177\u0175\3\2\2\2\u0178\u017b"+
		"\3\2\2\2\u0179\u0177\3\2\2\2\u0179\u017a\3\2\2\2\u017a\63\3\2\2\2\u017b"+
		"\u0179\3\2\2\2\u017c\u017d\58\35\2\u017d\65\3\2\2\2\u017e\u017f\58\35"+
		"\2\u017f\67\3\2\2\2\u0180\u0181\7\u00bd\2\2\u01819\3\2\2\2\u0182\u0183"+
		"\5N(\2\u0183\u0184\7\u0097\2\2\u0184\u0185\5\16\b\2\u0185;\3\2\2\2\u0186"+
		"\u0187\7\17\2\2\u0187\u0188\5> \2\u0188\u0189\7\u0096\2\2\u0189=\3\2\2"+
		"\2\u018a\u018c\7\u0098\2\2\u018b\u018a\3\2\2\2\u018b\u018c\3\2\2\2\u018c"+
		"\u018d\3\2\2\2\u018d\u0192\5N(\2\u018e\u018f\7\u0098\2\2\u018f\u0191\5"+
		"N(\2\u0190\u018e\3\2\2\2\u0191\u0194\3\2\2\2\u0192\u0190\3\2\2\2\u0192"+
		"\u0193\3\2\2\2\u0193?\3\2\2\2\u0194\u0192\3\2\2\2\u0195\u019b\5B\"\2\u0196"+
		"\u019b\5D#\2\u0197\u019b\5F$\2\u0198\u019b\5H%\2\u0199\u019b\5J&\2\u019a"+
		"\u0195\3\2\2\2\u019a\u0196\3\2\2\2\u019a\u0197\3\2\2\2\u019a\u0198\3\2"+
		"\2\2\u019a\u0199\3\2\2\2\u019bA\3\2\2\2\u019c\u019d\t\3\2\2\u019dC\3\2"+
		"\2\2\u019e\u019f\7`\2\2\u019fE\3\2\2\2\u01a0\u01a1\t\4\2\2\u01a1G\3\2"+
		"\2\2\u01a2\u01a4\7o\2\2\u01a3\u01a5\t\5\2\2\u01a4\u01a3\3\2\2\2\u01a4"+
		"\u01a5\3\2\2\2\u01a5I\3\2\2\2\u01a6\u01a8\5L\'\2\u01a7\u01a9\t\6\2\2\u01a8"+
		"\u01a7\3\2\2\2\u01a8\u01a9\3\2\2\2\u01a9K\3\2\2\2\u01aa\u01ab\t\7\2\2"+
		"\u01abM\3\2\2\2\u01ac\u01b0\7W\2\2\u01ad\u01ae\7t\2\2\u01ae\u01b0\7W\2"+
		"\2\u01af\u01ac\3\2\2\2\u01af\u01ad\3\2\2\2\u01b0O\3\2\2\2\u01b1\u01b2"+
		"\t\b\2\2\u01b2Q\3\2\2\2\u01b3\u01b4\t\t\2\2\u01b4S\3\2\2\2\61Y^`px|\u0082"+
		"\u0088\u008a\u008f\u0094\u0098\u00a1\u00a6\u00ac\u00b8\u00bb\u00c4\u00d1"+
		"\u00dd\u00e2\u00e8\u00f1\u00f5\u0103\u010e\u0117\u0124\u0131\u0134\u0138"+
		"\u013c\u0140\u0144\u0146\u014d\u0157\u015f\u0168\u0172\u0179\u018b\u0192"+
		"\u019a\u01a4\u01a8\u01af";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}