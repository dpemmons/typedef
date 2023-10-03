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
		MINUS=116, STAR=117, SLASH=118, PERCENT=119, CARET=120, NOT=121, AND=122, 
		OR=123, ANDAND=124, OROR=125, PLUSEQ=126, MINUSEQ=127, STAREQ=128, SLASHEQ=129, 
		PERCENTEQ=130, CARETEQ=131, ANDEQ=132, OREQ=133, SHLEQ=134, SHREQ=135, 
		EQ=136, EQEQ=137, NE=138, GT=139, LT=140, GE=141, LE=142, AT=143, UNDERSCORE=144, 
		DOT=145, DOTDOT=146, DOTDOTDOT=147, COMMA=148, SEMI=149, COLON=150, PATHSEP=151, 
		RARROW=152, FATARROW=153, POUND=154, DOLLAR=155, QUESTION=156, LBRACE=157, 
		RBRACE=158, LBRACK=159, RBRACK=160, LPAREN=161, RPAREN=162, WS=163, END_TEMPLATE=164, 
		TMPL_EXPR_OPEN=165, TMPL_TEXT=166, TMPL_EXPR_CLOSE=167, TMPL_SLASH=168, 
		TMPL_COMMA=169, TMPL_DOT=170, TMPL_LPAREN=171, TMPL_RPAREN=172, TMPL_PATHSEP=173, 
		TMPL_NOT=174, TMPL_KW_FOR=175, TMPL_KW_CLOSE_FOR=176, TMPL_KW_SWITCH=177, 
		TMPL_KW_CLOSE_SWITCH=178, TMPL_KW_CASE=179, TMPL_KW_CLOSE_CASE=180, TMPL_KW_DEFAULT=181, 
		TMPL_KW_CLOSE_DEFAULT=182, TMPL_KW_IN=183, TMPL_KW_IF=184, TMPL_KW_CLOSEIF=185, 
		TMPL_KW_ELSE=186, TMPL_KW_ELIF=187, TMPL_NON_KEYWORD_IDENTIFIER=188, TMPL_WS=189;
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
			"'&&'", "'||'", "'+='", "'-='", "'*='", "'/='", "'%='", "'^='", "'&='", 
			"'|='", "'<<='", "'>>='", "'='", "'=='", "'!='", null, null, "'>='", 
			"'<='", "'@'", "'_'", null, "'..'", "'...'", null, "';'", "':'", null, 
			"'->'", "'=>'", "'#'", "'$'", "'?'", "'{'", "'}'", "'['", "']'", null, 
			null, null, "'\"'", null, null, null, null, null, null, null, null, null, 
			null, null, "'/for'", null, "'/switch'", "'case'", "'/case'", null, "'/default'", 
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
			"RAW_ESCAPE", "PLUS", "MINUS", "STAR", "SLASH", "PERCENT", "CARET", "NOT", 
			"AND", "OR", "ANDAND", "OROR", "PLUSEQ", "MINUSEQ", "STAREQ", "SLASHEQ", 
			"PERCENTEQ", "CARETEQ", "ANDEQ", "OREQ", "SHLEQ", "SHREQ", "EQ", "EQEQ", 
			"NE", "GT", "LT", "GE", "LE", "AT", "UNDERSCORE", "DOT", "DOTDOT", "DOTDOTDOT", 
			"COMMA", "SEMI", "COLON", "PATHSEP", "RARROW", "FATARROW", "POUND", "DOLLAR", 
			"QUESTION", "LBRACE", "RBRACE", "LBRACK", "RBRACK", "LPAREN", "RPAREN", 
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
			setState(140);
			match(COLON);
			setState(143);
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
				setState(141);
				typeAnnotation();
				}
				break;
			case KW_STRUCT:
			case KW_VARIANT:
				{
				setState(142);
				typeDefinition();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(147);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==EQ) {
				{
				setState(145);
				match(EQ);
				setState(146);
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
			setState(149);
			typeIdentifier();
			setState(161);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LT) {
				{
				setState(150);
				match(LT);
				setState(151);
				typeAnnotation();
				setState(156);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(152);
					match(COMMA);
					setState(153);
					typeAnnotation();
					}
					}
					setState(158);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(159);
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
			setState(167);
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
				setState(163);
				primitiveTypeIdentifier();
				}
				break;
			case KW_VECTOR:
				enterOuterAlt(_localctx, 2);
				{
				setState(164);
				match(KW_VECTOR);
				}
				break;
			case KW_MAP:
				enterOuterAlt(_localctx, 3);
				{
				setState(165);
				match(KW_MAP);
				}
				break;
			case NON_KEYWORD_IDENTIFIER:
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 4);
				{
				setState(166);
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
			setState(169);
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
			setState(171);
			match(KW_TEMPLATE);
			setState(172);
			identifier();
			setState(173);
			match(LPAREN);
			{
			setState(182);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE) {
				{
				setState(174);
				functionParameter();
				setState(179);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(175);
					match(COMMA);
					setState(176);
					functionParameter();
					}
					}
					setState(181);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			}
			setState(184);
			match(RPAREN);
			setState(185);
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
			setState(187);
			match(START_TEMPLATE);
			setState(191);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TMPL_EXPR_OPEN || _la==TMPL_TEXT) {
				{
				{
				setState(188);
				tmplItem();
				}
				}
				setState(193);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(194);
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
			setState(204);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(196);
				tmplText();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(197);
				match(TMPL_EXPR_OPEN);
				setState(198);
				tmplExpression();
				setState(199);
				match(TMPL_EXPR_CLOSE);
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(201);
				tmplIfBlock();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(202);
				tmplForBlock();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(203);
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
			setState(206);
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
			setState(216);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(208);
				match(TMPL_LPAREN);
				setState(209);
				tmplExpression();
				setState(210);
				match(TMPL_RPAREN);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(212);
				match(TMPL_NOT);
				setState(213);
				tmplExpression();
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(214);
				tmplValueReferencePath();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(215);
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
			setState(218);
			tmplIdentifier();
			setState(219);
			match(TMPL_LPAREN);
			setState(221);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TMPL_NON_KEYWORD_IDENTIFIER) {
				{
				setState(220);
				tmplValueReferencePath();
				}
			}

			setState(227);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TMPL_COMMA) {
				{
				{
				setState(223);
				match(TMPL_COMMA);
				setState(224);
				tmplValueReferencePath();
				}
				}
				setState(229);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(230);
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
			setState(232);
			tmplIfSubBlock();
			setState(236);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(233);
					tmplElIfSubBlock();
					}
					} 
				}
				setState(238);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
			}
			setState(240);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,22,_ctx) ) {
			case 1:
				{
				setState(239);
				tmplElseSubBlock();
				}
				break;
			}
			{
			setState(242);
			match(TMPL_EXPR_OPEN);
			setState(243);
			match(TMPL_KW_CLOSEIF);
			setState(244);
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
			setState(246);
			match(TMPL_EXPR_OPEN);
			setState(247);
			match(TMPL_KW_IF);
			setState(248);
			tmplExpression();
			setState(249);
			match(TMPL_EXPR_CLOSE);
			}
			setState(254);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(251);
					tmplItem();
					}
					} 
				}
				setState(256);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
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
			setState(257);
			match(TMPL_EXPR_OPEN);
			setState(258);
			match(TMPL_KW_ELIF);
			setState(259);
			tmplExpression();
			setState(260);
			match(TMPL_EXPR_CLOSE);
			}
			setState(265);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,24,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(262);
					tmplItem();
					}
					} 
				}
				setState(267);
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
			setState(268);
			match(TMPL_EXPR_OPEN);
			setState(269);
			match(TMPL_KW_ELSE);
			setState(270);
			match(TMPL_EXPR_CLOSE);
			setState(274);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,25,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(271);
					tmplItem();
					}
					} 
				}
				setState(276);
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
			setState(277);
			match(TMPL_EXPR_OPEN);
			setState(278);
			match(TMPL_KW_FOR);
			setState(279);
			tmplBindingVariables();
			setState(280);
			match(TMPL_KW_IN);
			setState(281);
			((TmplForBlockContext)_localctx).collection = tmplValueReferencePath();
			setState(282);
			match(TMPL_EXPR_CLOSE);
			}
			setState(287);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,26,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(284);
					tmplItem();
					}
					} 
				}
				setState(289);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,26,_ctx);
			}
			{
			setState(290);
			match(TMPL_EXPR_OPEN);
			setState(291);
			match(TMPL_KW_CLOSE_FOR);
			setState(292);
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
			setState(294);
			match(TMPL_EXPR_OPEN);
			setState(295);
			match(TMPL_KW_SWITCH);
			setState(296);
			tmplValueReferencePath();
			setState(297);
			match(TMPL_EXPR_CLOSE);
			}
			setState(300);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,27,_ctx) ) {
			case 1:
				{
				setState(299);
				match(TMPL_TEXT);
				}
				break;
			}
			setState(311);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,30,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
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
					setState(305);
					tmplCaseBlock();
					setState(307);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,29,_ctx) ) {
					case 1:
						{
						setState(306);
						match(TMPL_TEXT);
						}
						break;
					}
					}
					} 
				}
				setState(313);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,30,_ctx);
			}
			setState(321);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,33,_ctx) ) {
			case 1:
				{
				setState(315);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,31,_ctx) ) {
				case 1:
					{
					setState(314);
					match(TMPL_TEXT);
					}
					break;
				}
				setState(317);
				tmplDefaultBlock();
				setState(319);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==TMPL_TEXT) {
					{
					setState(318);
					match(TMPL_TEXT);
					}
				}

				}
				break;
			}
			{
			setState(323);
			match(TMPL_EXPR_OPEN);
			setState(324);
			match(TMPL_KW_CLOSE_SWITCH);
			setState(325);
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
			setState(328);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TMPL_TEXT) {
				{
				setState(327);
				match(TMPL_TEXT);
				}
			}

			setState(330);
			match(TMPL_EXPR_OPEN);
			setState(331);
			match(TMPL_KW_CASE);
			setState(332);
			tmplValueReferencePath();
			setState(333);
			match(TMPL_EXPR_CLOSE);
			}
			setState(338);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,35,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(335);
					tmplItem();
					}
					} 
				}
				setState(340);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,35,_ctx);
			}
			{
			setState(341);
			match(TMPL_EXPR_OPEN);
			setState(342);
			match(TMPL_KW_CLOSE_CASE);
			setState(343);
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
			setState(346);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TMPL_TEXT) {
				{
				setState(345);
				match(TMPL_TEXT);
				}
			}

			setState(348);
			match(TMPL_EXPR_OPEN);
			setState(349);
			match(TMPL_KW_DEFAULT);
			setState(350);
			match(TMPL_EXPR_CLOSE);
			}
			setState(355);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,37,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(352);
					tmplItem();
					}
					} 
				}
				setState(357);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,37,_ctx);
			}
			{
			setState(358);
			match(TMPL_EXPR_OPEN);
			setState(359);
			match(TMPL_KW_CLOSE_DEFAULT);
			setState(360);
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
			setState(362);
			tmplBindingVariable();
			setState(365);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TMPL_COMMA) {
				{
				setState(363);
				match(TMPL_COMMA);
				setState(364);
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
			setState(367);
			tmplValueReference();
			setState(372);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TMPL_DOT) {
				{
				{
				setState(368);
				match(TMPL_DOT);
				setState(369);
				tmplValueReference();
				}
				}
				setState(374);
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
			setState(375);
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
			setState(377);
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
			setState(379);
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
			setState(381);
			identifier();
			setState(382);
			match(COLON);
			setState(383);
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
			setState(385);
			match(KW_USE);
			setState(386);
			symbolPath();
			setState(387);
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
		public List<TerminalNode> PATHSEP() { return getTokens(TypedefParser.PATHSEP); }
		public TerminalNode PATHSEP(int i) {
			return getToken(TypedefParser.PATHSEP, i);
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
			setState(390);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PATHSEP) {
				{
				setState(389);
				((SymbolPathContext)_localctx).leading_pathsep = match(PATHSEP);
				}
			}

			setState(392);
			identifier();
			setState(397);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==PATHSEP) {
				{
				{
				setState(393);
				match(PATHSEP);
				setState(394);
				identifier();
				}
				}
				setState(399);
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
			setState(405);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case KW_FALSE:
			case KW_TRUE:
				enterOuterAlt(_localctx, 1);
				{
				setState(400);
				boolLiteral();
				}
				break;
			case CHAR_LITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(401);
				charLiteral();
				}
				break;
			case STRING_LITERAL:
			case RAW_STRING_LITERAL:
				enterOuterAlt(_localctx, 3);
				{
				setState(402);
				stringLiteral();
				}
				break;
			case FLOAT_LITERAL:
				enterOuterAlt(_localctx, 4);
				{
				setState(403);
				floatLiteral();
				}
				break;
			case DEC_LITERAL:
			case HEX_LITERAL:
			case OCT_LITERAL:
			case BIN_LITERAL:
				enterOuterAlt(_localctx, 5);
				{
				setState(404);
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
			setState(407);
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
			setState(409);
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
			setState(411);
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
			setState(413);
			match(FLOAT_LITERAL);
			setState(415);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==KW_F32 || _la==KW_F64) {
				{
				setState(414);
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
			setState(417);
			intDigits();
			}
			setState(419);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 77)) & ~0x3f) == 0 && ((1L << (_la - 77)) & ((1L << (KW_U8 - 77)) | (1L << (KW_U16 - 77)) | (1L << (KW_U32 - 77)) | (1L << (KW_U64 - 77)) | (1L << (KW_I8 - 77)) | (1L << (KW_I16 - 77)) | (1L << (KW_I32 - 77)) | (1L << (KW_I64 - 77)))) != 0)) {
				{
				setState(418);
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
			setState(421);
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
			setState(426);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NON_KEYWORD_IDENTIFIER:
				enterOuterAlt(_localctx, 1);
				{
				setState(423);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(424);
				match(RAW_ESCAPE);
				setState(425);
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
			setState(428);
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
			setState(430);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00bf\u01b3\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\3\2\3\2"+
		"\3\2\7\2X\n\2\f\2\16\2[\13\2\3\2\3\2\7\2_\n\2\f\2\16\2b\13\2\3\2\3\2\3"+
		"\3\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\5\3\5\5\5q\n\5\3\5\3\5\3\5\3\5\6"+
		"\5w\n\5\r\5\16\5x\3\5\3\5\5\5}\n\5\3\5\3\5\3\5\3\5\5\5\u0083\n\5\3\6\3"+
		"\6\3\6\3\6\7\6\u0089\n\6\f\6\16\6\u008c\13\6\3\7\3\7\3\7\3\7\5\7\u0092"+
		"\n\7\3\7\3\7\5\7\u0096\n\7\3\b\3\b\3\b\3\b\3\b\7\b\u009d\n\b\f\b\16\b"+
		"\u00a0\13\b\3\b\3\b\5\b\u00a4\n\b\3\t\3\t\3\t\3\t\5\t\u00aa\n\t\3\n\3"+
		"\n\3\13\3\13\3\13\3\13\3\13\3\13\7\13\u00b4\n\13\f\13\16\13\u00b7\13\13"+
		"\5\13\u00b9\n\13\3\13\3\13\3\13\3\f\3\f\7\f\u00c0\n\f\f\f\16\f\u00c3\13"+
		"\f\3\f\3\f\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\5\r\u00cf\n\r\3\16\3\16\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\5\17\u00db\n\17\3\20\3\20\3\20\5\20"+
		"\u00e0\n\20\3\20\3\20\7\20\u00e4\n\20\f\20\16\20\u00e7\13\20\3\20\3\20"+
		"\3\21\3\21\7\21\u00ed\n\21\f\21\16\21\u00f0\13\21\3\21\5\21\u00f3\n\21"+
		"\3\21\3\21\3\21\3\21\3\22\3\22\3\22\3\22\3\22\3\22\7\22\u00ff\n\22\f\22"+
		"\16\22\u0102\13\22\3\23\3\23\3\23\3\23\3\23\3\23\7\23\u010a\n\23\f\23"+
		"\16\23\u010d\13\23\3\24\3\24\3\24\3\24\7\24\u0113\n\24\f\24\16\24\u0116"+
		"\13\24\3\25\3\25\3\25\3\25\3\25\3\25\3\25\3\25\7\25\u0120\n\25\f\25\16"+
		"\25\u0123\13\25\3\25\3\25\3\25\3\25\3\26\3\26\3\26\3\26\3\26\3\26\5\26"+
		"\u012f\n\26\3\26\5\26\u0132\n\26\3\26\3\26\5\26\u0136\n\26\7\26\u0138"+
		"\n\26\f\26\16\26\u013b\13\26\3\26\5\26\u013e\n\26\3\26\3\26\5\26\u0142"+
		"\n\26\5\26\u0144\n\26\3\26\3\26\3\26\3\26\3\27\5\27\u014b\n\27\3\27\3"+
		"\27\3\27\3\27\3\27\3\27\7\27\u0153\n\27\f\27\16\27\u0156\13\27\3\27\3"+
		"\27\3\27\3\27\3\30\5\30\u015d\n\30\3\30\3\30\3\30\3\30\3\30\7\30\u0164"+
		"\n\30\f\30\16\30\u0167\13\30\3\30\3\30\3\30\3\30\3\31\3\31\3\31\5\31\u0170"+
		"\n\31\3\32\3\32\3\32\7\32\u0175\n\32\f\32\16\32\u0178\13\32\3\33\3\33"+
		"\3\34\3\34\3\35\3\35\3\36\3\36\3\36\3\36\3\37\3\37\3\37\3\37\3 \5 \u0189"+
		"\n \3 \3 \3 \7 \u018e\n \f \16 \u0191\13 \3!\3!\3!\3!\3!\5!\u0198\n!\3"+
		"\"\3\"\3#\3#\3$\3$\3%\3%\5%\u01a2\n%\3&\3&\5&\u01a6\n&\3\'\3\'\3(\3(\3"+
		"(\5(\u01ad\n(\3)\3)\3*\3*\3*\2\2+\2\4\6\b\n\f\16\20\22\24\26\30\32\34"+
		"\36 \"$&(*,.\60\62\64\668:<>@BDFHJLNPR\2\n\4\2\13\13\20\20\4\2\6\6\f\f"+
		"\3\2ab\3\2MN\3\2OV\3\2cf\3\2JV\5\2\4\b\n\22\24I\2\u01c1\2T\3\2\2\2\4e"+
		"\3\2\2\2\6j\3\2\2\2\bn\3\2\2\2\n\u008a\3\2\2\2\f\u008d\3\2\2\2\16\u0097"+
		"\3\2\2\2\20\u00a9\3\2\2\2\22\u00ab\3\2\2\2\24\u00ad\3\2\2\2\26\u00bd\3"+
		"\2\2\2\30\u00ce\3\2\2\2\32\u00d0\3\2\2\2\34\u00da\3\2\2\2\36\u00dc\3\2"+
		"\2\2 \u00ea\3\2\2\2\"\u00f8\3\2\2\2$\u0103\3\2\2\2&\u010e\3\2\2\2(\u0117"+
		"\3\2\2\2*\u0128\3\2\2\2,\u014a\3\2\2\2.\u015c\3\2\2\2\60\u016c\3\2\2\2"+
		"\62\u0171\3\2\2\2\64\u0179\3\2\2\2\66\u017b\3\2\2\28\u017d\3\2\2\2:\u017f"+
		"\3\2\2\2<\u0183\3\2\2\2>\u0188\3\2\2\2@\u0197\3\2\2\2B\u0199\3\2\2\2D"+
		"\u019b\3\2\2\2F\u019d\3\2\2\2H\u019f\3\2\2\2J\u01a3\3\2\2\2L\u01a7\3\2"+
		"\2\2N\u01ac\3\2\2\2P\u01ae\3\2\2\2R\u01b0\3\2\2\2TU\5\4\3\2UY\5\6\4\2"+
		"VX\5<\37\2WV\3\2\2\2X[\3\2\2\2YW\3\2\2\2YZ\3\2\2\2Z`\3\2\2\2[Y\3\2\2\2"+
		"\\_\5\b\5\2]_\5\24\13\2^\\\3\2\2\2^]\3\2\2\2_b\3\2\2\2`^\3\2\2\2`a\3\2"+
		"\2\2ac\3\2\2\2b`\3\2\2\2cd\7\2\2\3d\3\3\2\2\2ef\7\16\2\2fg\7\u008a\2\2"+
		"gh\5N(\2hi\7\u0097\2\2i\5\3\2\2\2jk\7\n\2\2kl\5> \2lm\7\u0097\2\2m\7\3"+
		"\2\2\2np\t\2\2\2oq\5N(\2po\3\2\2\2pq\3\2\2\2q|\3\2\2\2rv\7\u008e\2\2s"+
		"t\5N(\2tu\7\u0096\2\2uw\3\2\2\2vs\3\2\2\2wx\3\2\2\2xv\3\2\2\2xy\3\2\2"+
		"\2yz\3\2\2\2z{\7\u008d\2\2{}\3\2\2\2|r\3\2\2\2|}\3\2\2\2}~\3\2\2\2~\177"+
		"\7\u009f\2\2\177\u0080\5\n\6\2\u0080\u0082\7\u00a0\2\2\u0081\u0083\7\u0097"+
		"\2\2\u0082\u0081\3\2\2\2\u0082\u0083\3\2\2\2\u0083\t\3\2\2\2\u0084\u0089"+
		"\5\b\5\2\u0085\u0086\5\f\7\2\u0086\u0087\7\u0097\2\2\u0087\u0089\3\2\2"+
		"\2\u0088\u0084\3\2\2\2\u0088\u0085\3\2\2\2\u0089\u008c\3\2\2\2\u008a\u0088"+
		"\3\2\2\2\u008a\u008b\3\2\2\2\u008b\13\3\2\2\2\u008c\u008a\3\2\2\2\u008d"+
		"\u008e\5N(\2\u008e\u0091\7\u0098\2\2\u008f\u0092\5\16\b\2\u0090\u0092"+
		"\5\b\5\2\u0091\u008f\3\2\2\2\u0091\u0090\3\2\2\2\u0092\u0095\3\2\2\2\u0093"+
		"\u0094\7\u008a\2\2\u0094\u0096\5@!\2\u0095\u0093\3\2\2\2\u0095\u0096\3"+
		"\2\2\2\u0096\r\3\2\2\2\u0097\u00a3\5\20\t\2\u0098\u0099\7\u008e\2\2\u0099"+
		"\u009e\5\16\b\2\u009a\u009b\7\u0096\2\2\u009b\u009d\5\16\b\2\u009c\u009a"+
		"\3\2\2\2\u009d\u00a0\3\2\2\2\u009e\u009c\3\2\2\2\u009e\u009f\3\2\2\2\u009f"+
		"\u00a1\3\2\2\2\u00a0\u009e\3\2\2\2\u00a1\u00a2\7\u008d\2\2\u00a2\u00a4"+
		"\3\2\2\2\u00a3\u0098\3\2\2\2\u00a3\u00a4\3\2\2\2\u00a4\17\3\2\2\2\u00a5"+
		"\u00aa\5P)\2\u00a6\u00aa\7\21\2\2\u00a7\u00aa\7\22\2\2\u00a8\u00aa\5\22"+
		"\n\2\u00a9\u00a5\3\2\2\2\u00a9\u00a6\3\2\2\2\u00a9\u00a7\3\2\2\2\u00a9"+
		"\u00a8\3\2\2\2\u00aa\21\3\2\2\2\u00ab\u00ac\5N(\2\u00ac\23\3\2\2\2\u00ad"+
		"\u00ae\7\23\2\2\u00ae\u00af\5N(\2\u00af\u00b8\7\u00a3\2\2\u00b0\u00b5"+
		"\5:\36\2\u00b1\u00b2\7\u0096\2\2\u00b2\u00b4\5:\36\2\u00b3\u00b1\3\2\2"+
		"\2\u00b4\u00b7\3\2\2\2\u00b5\u00b3\3\2\2\2\u00b5\u00b6\3\2\2\2\u00b6\u00b9"+
		"\3\2\2\2\u00b7\u00b5\3\2\2\2\u00b8\u00b0\3\2\2\2\u00b8\u00b9\3\2\2\2\u00b9"+
		"\u00ba\3\2\2\2\u00ba\u00bb\7\u00a4\2\2\u00bb\u00bc\5\26\f\2\u00bc\25\3"+
		"\2\2\2\u00bd\u00c1\7s\2\2\u00be\u00c0\5\30\r\2\u00bf\u00be\3\2\2\2\u00c0"+
		"\u00c3\3\2\2\2\u00c1\u00bf\3\2\2\2\u00c1\u00c2\3\2\2\2\u00c2\u00c4\3\2"+
		"\2\2\u00c3\u00c1\3\2\2\2\u00c4\u00c5\7\u00a6\2\2\u00c5\27\3\2\2\2\u00c6"+
		"\u00cf\5\32\16\2\u00c7\u00c8\7\u00a7\2\2\u00c8\u00c9\5\34\17\2\u00c9\u00ca"+
		"\7\u00a9\2\2\u00ca\u00cf\3\2\2\2\u00cb\u00cf\5 \21\2\u00cc\u00cf\5(\25"+
		"\2\u00cd\u00cf\5*\26\2\u00ce\u00c6\3\2\2\2\u00ce\u00c7\3\2\2\2\u00ce\u00cb"+
		"\3\2\2\2\u00ce\u00cc\3\2\2\2\u00ce\u00cd\3\2\2\2\u00cf\31\3\2\2\2\u00d0"+
		"\u00d1\7\u00a8\2\2\u00d1\33\3\2\2\2\u00d2\u00d3\7\u00ad\2\2\u00d3\u00d4"+
		"\5\34\17\2\u00d4\u00d5\7\u00ae\2\2\u00d5\u00db\3\2\2\2\u00d6\u00d7\7\u00b0"+
		"\2\2\u00d7\u00db\5\34\17\2\u00d8\u00db\5\62\32\2\u00d9\u00db\5\36\20\2"+
		"\u00da\u00d2\3\2\2\2\u00da\u00d6\3\2\2\2\u00da\u00d8\3\2\2\2\u00da\u00d9"+
		"\3\2\2\2\u00db\35\3\2\2\2\u00dc\u00dd\58\35\2\u00dd\u00df\7\u00ad\2\2"+
		"\u00de\u00e0\5\62\32\2\u00df\u00de\3\2\2\2\u00df\u00e0\3\2\2\2\u00e0\u00e5"+
		"\3\2\2\2\u00e1\u00e2\7\u00ab\2\2\u00e2\u00e4\5\62\32\2\u00e3\u00e1\3\2"+
		"\2\2\u00e4\u00e7\3\2\2\2\u00e5\u00e3\3\2\2\2\u00e5\u00e6\3\2\2\2\u00e6"+
		"\u00e8\3\2\2\2\u00e7\u00e5\3\2\2\2\u00e8\u00e9\7\u00ae\2\2\u00e9\37\3"+
		"\2\2\2\u00ea\u00ee\5\"\22\2\u00eb\u00ed\5$\23\2\u00ec\u00eb\3\2\2\2\u00ed"+
		"\u00f0\3\2\2\2\u00ee\u00ec\3\2\2\2\u00ee\u00ef\3\2\2\2\u00ef\u00f2\3\2"+
		"\2\2\u00f0\u00ee\3\2\2\2\u00f1\u00f3\5&\24\2\u00f2\u00f1\3\2\2\2\u00f2"+
		"\u00f3\3\2\2\2\u00f3\u00f4\3\2\2\2\u00f4\u00f5\7\u00a7\2\2\u00f5\u00f6"+
		"\7\u00bb\2\2\u00f6\u00f7\7\u00a9\2\2\u00f7!\3\2\2\2\u00f8\u00f9\7\u00a7"+
		"\2\2\u00f9\u00fa\7\u00ba\2\2\u00fa\u00fb\5\34\17\2\u00fb\u00fc\7\u00a9"+
		"\2\2\u00fc\u0100\3\2\2\2\u00fd\u00ff\5\30\r\2\u00fe\u00fd\3\2\2\2\u00ff"+
		"\u0102\3\2\2\2\u0100\u00fe\3\2\2\2\u0100\u0101\3\2\2\2\u0101#\3\2\2\2"+
		"\u0102\u0100\3\2\2\2\u0103\u0104\7\u00a7\2\2\u0104\u0105\7\u00bd\2\2\u0105"+
		"\u0106\5\34\17\2\u0106\u0107\7\u00a9\2\2\u0107\u010b\3\2\2\2\u0108\u010a"+
		"\5\30\r\2\u0109\u0108\3\2\2\2\u010a\u010d\3\2\2\2\u010b\u0109\3\2\2\2"+
		"\u010b\u010c\3\2\2\2\u010c%\3\2\2\2\u010d\u010b\3\2\2\2\u010e\u010f\7"+
		"\u00a7\2\2\u010f\u0110\7\u00bc\2\2\u0110\u0114\7\u00a9\2\2\u0111\u0113"+
		"\5\30\r\2\u0112\u0111\3\2\2\2\u0113\u0116\3\2\2\2\u0114\u0112\3\2\2\2"+
		"\u0114\u0115\3\2\2\2\u0115\'\3\2\2\2\u0116\u0114\3\2\2\2\u0117\u0118\7"+
		"\u00a7\2\2\u0118\u0119\7\u00b1\2\2\u0119\u011a\5\60\31\2\u011a\u011b\7"+
		"\u00b9\2\2\u011b\u011c\5\62\32\2\u011c\u011d\7\u00a9\2\2\u011d\u0121\3"+
		"\2\2\2\u011e\u0120\5\30\r\2\u011f\u011e\3\2\2\2\u0120\u0123\3\2\2\2\u0121"+
		"\u011f\3\2\2\2\u0121\u0122\3\2\2\2\u0122\u0124\3\2\2\2\u0123\u0121\3\2"+
		"\2\2\u0124\u0125\7\u00a7\2\2\u0125\u0126\7\u00b2\2\2\u0126\u0127\7\u00a9"+
		"\2\2\u0127)\3\2\2\2\u0128\u0129\7\u00a7\2\2\u0129\u012a\7\u00b3\2\2\u012a"+
		"\u012b\5\62\32\2\u012b\u012c\7\u00a9\2\2\u012c\u012e\3\2\2\2\u012d\u012f"+
		"\7\u00a8\2\2\u012e\u012d\3\2\2\2\u012e\u012f\3\2\2\2\u012f\u0139\3\2\2"+
		"\2\u0130\u0132\7\u00a8\2\2\u0131\u0130\3\2\2\2\u0131\u0132\3\2\2\2\u0132"+
		"\u0133\3\2\2\2\u0133\u0135\5,\27\2\u0134\u0136\7\u00a8\2\2\u0135\u0134"+
		"\3\2\2\2\u0135\u0136\3\2\2\2\u0136\u0138\3\2\2\2\u0137\u0131\3\2\2\2\u0138"+
		"\u013b\3\2\2\2\u0139\u0137\3\2\2\2\u0139\u013a\3\2\2\2\u013a\u0143\3\2"+
		"\2\2\u013b\u0139\3\2\2\2\u013c\u013e\7\u00a8\2\2\u013d\u013c\3\2\2\2\u013d"+
		"\u013e\3\2\2\2\u013e\u013f\3\2\2\2\u013f\u0141\5.\30\2\u0140\u0142\7\u00a8"+
		"\2\2\u0141\u0140\3\2\2\2\u0141\u0142\3\2\2\2\u0142\u0144\3\2\2\2\u0143"+
		"\u013d\3\2\2\2\u0143\u0144\3\2\2\2\u0144\u0145\3\2\2\2\u0145\u0146\7\u00a7"+
		"\2\2\u0146\u0147\7\u00b4\2\2\u0147\u0148\7\u00a9\2\2\u0148+\3\2\2\2\u0149"+
		"\u014b\7\u00a8\2\2\u014a\u0149\3\2\2\2\u014a\u014b\3\2\2\2\u014b\u014c"+
		"\3\2\2\2\u014c\u014d\7\u00a7\2\2\u014d\u014e\7\u00b5\2\2\u014e\u014f\5"+
		"\62\32\2\u014f\u0150\7\u00a9\2\2\u0150\u0154\3\2\2\2\u0151\u0153\5\30"+
		"\r\2\u0152\u0151\3\2\2\2\u0153\u0156\3\2\2\2\u0154\u0152\3\2\2\2\u0154"+
		"\u0155\3\2\2\2\u0155\u0157\3\2\2\2\u0156\u0154\3\2\2\2\u0157\u0158\7\u00a7"+
		"\2\2\u0158\u0159\7\u00b6\2\2\u0159\u015a\7\u00a9\2\2\u015a-\3\2\2\2\u015b"+
		"\u015d\7\u00a8\2\2\u015c\u015b\3\2\2\2\u015c\u015d\3\2\2\2\u015d\u015e"+
		"\3\2\2\2\u015e\u015f\7\u00a7\2\2\u015f\u0160\7\u00b7\2\2\u0160\u0161\7"+
		"\u00a9\2\2\u0161\u0165\3\2\2\2\u0162\u0164\5\30\r\2\u0163\u0162\3\2\2"+
		"\2\u0164\u0167\3\2\2\2\u0165\u0163\3\2\2\2\u0165\u0166\3\2\2\2\u0166\u0168"+
		"\3\2\2\2\u0167\u0165\3\2\2\2\u0168\u0169\7\u00a7\2\2\u0169\u016a\7\u00b8"+
		"\2\2\u016a\u016b\7\u00a9\2\2\u016b/\3\2\2\2\u016c\u016f\5\66\34\2\u016d"+
		"\u016e\7\u00ab\2\2\u016e\u0170\5\66\34\2\u016f\u016d\3\2\2\2\u016f\u0170"+
		"\3\2\2\2\u0170\61\3\2\2\2\u0171\u0176\5\64\33\2\u0172\u0173\7\u00ac\2"+
		"\2\u0173\u0175\5\64\33\2\u0174\u0172\3\2\2\2\u0175\u0178\3\2\2\2\u0176"+
		"\u0174\3\2\2\2\u0176\u0177\3\2\2\2\u0177\63\3\2\2\2\u0178\u0176\3\2\2"+
		"\2\u0179\u017a\58\35\2\u017a\65\3\2\2\2\u017b\u017c\58\35\2\u017c\67\3"+
		"\2\2\2\u017d\u017e\7\u00be\2\2\u017e9\3\2\2\2\u017f\u0180\5N(\2\u0180"+
		"\u0181\7\u0098\2\2\u0181\u0182\5\16\b\2\u0182;\3\2\2\2\u0183\u0184\7\17"+
		"\2\2\u0184\u0185\5> \2\u0185\u0186\7\u0097\2\2\u0186=\3\2\2\2\u0187\u0189"+
		"\7\u0099\2\2\u0188\u0187\3\2\2\2\u0188\u0189\3\2\2\2\u0189\u018a\3\2\2"+
		"\2\u018a\u018f\5N(\2\u018b\u018c\7\u0099\2\2\u018c\u018e\5N(\2\u018d\u018b"+
		"\3\2\2\2\u018e\u0191\3\2\2\2\u018f\u018d\3\2\2\2\u018f\u0190\3\2\2\2\u0190"+
		"?\3\2\2\2\u0191\u018f\3\2\2\2\u0192\u0198\5B\"\2\u0193\u0198\5D#\2\u0194"+
		"\u0198\5F$\2\u0195\u0198\5H%\2\u0196\u0198\5J&\2\u0197\u0192\3\2\2\2\u0197"+
		"\u0193\3\2\2\2\u0197\u0194\3\2\2\2\u0197\u0195\3\2\2\2\u0197\u0196\3\2"+
		"\2\2\u0198A\3\2\2\2\u0199\u019a\t\3\2\2\u019aC\3\2\2\2\u019b\u019c\7`"+
		"\2\2\u019cE\3\2\2\2\u019d\u019e\t\4\2\2\u019eG\3\2\2\2\u019f\u01a1\7o"+
		"\2\2\u01a0\u01a2\t\5\2\2\u01a1\u01a0\3\2\2\2\u01a1\u01a2\3\2\2\2\u01a2"+
		"I\3\2\2\2\u01a3\u01a5\5L\'\2\u01a4\u01a6\t\6\2\2\u01a5\u01a4\3\2\2\2\u01a5"+
		"\u01a6\3\2\2\2\u01a6K\3\2\2\2\u01a7\u01a8\t\7\2\2\u01a8M\3\2\2\2\u01a9"+
		"\u01ad\7W\2\2\u01aa\u01ab\7t\2\2\u01ab\u01ad\7W\2\2\u01ac\u01a9\3\2\2"+
		"\2\u01ac\u01aa\3\2\2\2\u01adO\3\2\2\2\u01ae\u01af\t\b\2\2\u01afQ\3\2\2"+
		"\2\u01b0\u01b1\t\t\2\2\u01b1S\3\2\2\2\60Y^`px|\u0082\u0088\u008a\u0091"+
		"\u0095\u009e\u00a3\u00a9\u00b5\u00b8\u00c1\u00ce\u00da\u00df\u00e5\u00ee"+
		"\u00f2\u0100\u010b\u0114\u0121\u012e\u0131\u0135\u0139\u013d\u0141\u0143"+
		"\u014a\u0154\u015c\u0165\u016f\u0176\u0188\u018f\u0197\u01a1\u01a5\u01ac";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}