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
		CHAR_LITERAL=94, STRING_LITERAL=95, RAW_STRING_LITERAL=96, DEC_DIGITS=97, 
		DEC_DIGITS_UNDERSCORE=98, HEX_DIGITS=99, HEX_DIGITS_UNDERSCORE=100, OCT_DIGITS=101, 
		OCT_DIGITS_UNDERSCORE=102, BIN_DIGITS=103, BIN_DIGITS_UNDERSCORE=104, 
		FLOAT_LITERAL=105, OCT_DIGIT=106, DEC_DIGIT=107, HEX_DIGIT=108, HEX_PREFIX=109, 
		OCT_PREFIX=110, BIN_PREFIX=111, START_TEMPLATE=112, RAW_ESCAPE=113, PLUS=114, 
		MINUS=115, STAR=116, SLASH=117, PERCENT=118, CARET=119, NOT=120, AND=121, 
		OR=122, ANDAND=123, OROR=124, PLUSEQ=125, MINUSEQ=126, STAREQ=127, SLASHEQ=128, 
		PERCENTEQ=129, CARETEQ=130, ANDEQ=131, OREQ=132, SHLEQ=133, SHREQ=134, 
		EQ=135, EQEQ=136, NE=137, GT=138, LT=139, GE=140, LE=141, AT=142, UNDERSCORE=143, 
		DOT=144, DOTDOT=145, DOTDOTDOT=146, COMMA=147, SEMI=148, COLON=149, PATHSEP=150, 
		RARROW=151, FATARROW=152, POUND=153, DOLLAR=154, QUESTION=155, LBRACE=156, 
		RBRACE=157, LBRACK=158, RBRACK=159, LPAREN=160, RPAREN=161, WS=162, END_TEMPLATE=163, 
		TMPL_EXPR_OPEN=164, TMPL_TEXT=165, TMPL_KW_CLOSE_FOR=166, TMPL_KW_CLOSEIF=167, 
		TMPL_EXPR_CLOSE=168, TMPL_SLASH=169, TMPL_COMMA=170, TMPL_DOT=171, TMPL_LPAREN=172, 
		TMPL_RPAREN=173, TMPL_PATHSEP=174, TMPL_KW_FOR=175, TMPL_KW_IN=176, TMPL_KW_IF=177, 
		TMPL_KW_ELSE=178, TMPL_KW_ELIF=179, TMPL_NON_KEYWORD_IDENTIFIER=180, TMPL_WS=181;
	public static final int
		RULE_compilationUnit = 0, RULE_typedefVersionDeclaration = 1, RULE_moduleDeclaration = 2, 
		RULE_typeDefinition = 3, RULE_fieldBlock = 4, RULE_fieldDefinition = 5, 
		RULE_typeAnnotation = 6, RULE_typeArgument = 7, RULE_typeIdentifier = 8, 
		RULE_userType = 9, RULE_tmplDefinition = 10, RULE_tmplBlock = 11, RULE_tmplItem = 12, 
		RULE_tmplText = 13, RULE_tmplInsertion = 14, RULE_tmplCall = 15, RULE_tmplIf = 16, 
		RULE_tmplIfStmt = 17, RULE_tmplIfBlock = 18, RULE_tmplElIfStmt = 19, RULE_tmplElifBlock = 20, 
		RULE_tmplElseStmt = 21, RULE_tmplElseBlock = 22, RULE_tmplFor = 23, RULE_tmplForStmt = 24, 
		RULE_tmplExpression = 25, RULE_tmplValueReferencePath = 26, RULE_tmplValueReference = 27, 
		RULE_tmplIdentifier = 28, RULE_functionParameter = 29, RULE_useDeclaration = 30, 
		RULE_symbolPath = 31, RULE_primitiveLiteral = 32, RULE_boolLiteral = 33, 
		RULE_charLiteral = 34, RULE_stringLiteral = 35, RULE_floatLiteral = 36, 
		RULE_integerLiteral = 37, RULE_intDigits = 38, RULE_identifier = 39, RULE_primitiveTypeIdentifier = 40, 
		RULE_keyword = 41;
	private static String[] makeRuleNames() {
		return new String[] {
			"compilationUnit", "typedefVersionDeclaration", "moduleDeclaration", 
			"typeDefinition", "fieldBlock", "fieldDefinition", "typeAnnotation", 
			"typeArgument", "typeIdentifier", "userType", "tmplDefinition", "tmplBlock", 
			"tmplItem", "tmplText", "tmplInsertion", "tmplCall", "tmplIf", "tmplIfStmt", 
			"tmplIfBlock", "tmplElIfStmt", "tmplElifBlock", "tmplElseStmt", "tmplElseBlock", 
			"tmplFor", "tmplForStmt", "tmplExpression", "tmplValueReferencePath", 
			"tmplValueReference", "tmplIdentifier", "functionParameter", "useDeclaration", 
			"symbolPath", "primitiveLiteral", "boolLiteral", "charLiteral", "stringLiteral", 
			"floatLiteral", "integerLiteral", "intDigits", "identifier", "primitiveTypeIdentifier", 
			"keyword"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'array'", "'as'", "'enum'", "'false'", "'fn'", "'impl'", "'message'", 
			"'module'", "'struct'", "'true'", "'type'", "'typedef'", "'use'", "'variant'", 
			"'vector'", "'map'", "'template'", "'and'", null, "'let'", "'not'", "'or'", 
			"'sizeof'", "'this'", "'trait'", "'where'", "'xor'", "'break'", "'continue'", 
			"'default'", "'do'", null, null, "'goto'", null, "'loop'", "'match'", 
			"'move'", "'return'", "'try'", "'while'", "'yield'", "'abstract'", "'auto'", 
			"'const'", "'double'", "'extern'", "'final'", "'float'", "'int'", "'long'", 
			"'macro'", "'mut'", "'override'", "'private'", "'pub'", "'ref'", "'Self'", 
			"'self'", "'signed'", "'static'", "'super'", "'switch'", "'typeof'", 
			"'union'", "'unsafe'", "'unsigned'", "'unsized'", "'virtual'", "'void'", 
			"'volatile'", "'bool'", "'char'", "'str'", "'f32'", "'f64'", "'u8'", 
			"'u16'", "'u32'", "'u64'", "'i8'", "'i16'", "'i32'", "'i64'", null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, "'0x'", "'0o'", 
			"'0b'", "'t#\"'", "'r#'", "'+'", "'-'", "'*'", null, "'%'", "'^'", "'!'", 
			"'&'", "'|'", "'&&'", "'||'", "'+='", "'-='", "'*='", "'/='", "'%='", 
			"'^='", "'&='", "'|='", "'<<='", "'>>='", "'='", "'=='", "'!='", null, 
			null, "'>='", "'<='", "'@'", "'_'", null, "'..'", "'...'", null, "';'", 
			"':'", null, "'->'", "'=>'", "'#'", "'$'", "'?'", "'{'", "'}'", "'['", 
			"']'", null, null, null, "'\"#'", null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, "'elif'"
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
			"RAW_STRING_LITERAL", "DEC_DIGITS", "DEC_DIGITS_UNDERSCORE", "HEX_DIGITS", 
			"HEX_DIGITS_UNDERSCORE", "OCT_DIGITS", "OCT_DIGITS_UNDERSCORE", "BIN_DIGITS", 
			"BIN_DIGITS_UNDERSCORE", "FLOAT_LITERAL", "OCT_DIGIT", "DEC_DIGIT", "HEX_DIGIT", 
			"HEX_PREFIX", "OCT_PREFIX", "BIN_PREFIX", "START_TEMPLATE", "RAW_ESCAPE", 
			"PLUS", "MINUS", "STAR", "SLASH", "PERCENT", "CARET", "NOT", "AND", "OR", 
			"ANDAND", "OROR", "PLUSEQ", "MINUSEQ", "STAREQ", "SLASHEQ", "PERCENTEQ", 
			"CARETEQ", "ANDEQ", "OREQ", "SHLEQ", "SHREQ", "EQ", "EQEQ", "NE", "GT", 
			"LT", "GE", "LE", "AT", "UNDERSCORE", "DOT", "DOTDOT", "DOTDOTDOT", "COMMA", 
			"SEMI", "COLON", "PATHSEP", "RARROW", "FATARROW", "POUND", "DOLLAR", 
			"QUESTION", "LBRACE", "RBRACE", "LBRACK", "RBRACK", "LPAREN", "RPAREN", 
			"WS", "END_TEMPLATE", "TMPL_EXPR_OPEN", "TMPL_TEXT", "TMPL_KW_CLOSE_FOR", 
			"TMPL_KW_CLOSEIF", "TMPL_EXPR_CLOSE", "TMPL_SLASH", "TMPL_COMMA", "TMPL_DOT", 
			"TMPL_LPAREN", "TMPL_RPAREN", "TMPL_PATHSEP", "TMPL_KW_FOR", "TMPL_KW_IN", 
			"TMPL_KW_IF", "TMPL_KW_ELSE", "TMPL_KW_ELIF", "TMPL_NON_KEYWORD_IDENTIFIER", 
			"TMPL_WS"
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
			setState(84);
			typedefVersionDeclaration();
			setState(85);
			moduleDeclaration();
			setState(89);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==KW_USE) {
				{
				{
				setState(86);
				useDeclaration();
				}
				}
				setState(91);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(96);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << KW_STRUCT) | (1L << KW_VARIANT) | (1L << KW_TEMPLATE))) != 0)) {
				{
				setState(94);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case KW_STRUCT:
				case KW_VARIANT:
					{
					setState(92);
					typeDefinition();
					}
					break;
				case KW_TEMPLATE:
					{
					setState(93);
					tmplDefinition();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(98);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(99);
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
			setState(101);
			match(KW_TYPEDEF);
			setState(102);
			match(EQ);
			setState(103);
			identifier();
			setState(104);
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
			setState(106);
			match(KW_MODULE);
			setState(107);
			symbolPath();
			setState(108);
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
			setState(110);
			_la = _input.LA(1);
			if ( !(_la==KW_STRUCT || _la==KW_VARIANT) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(112);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE) {
				{
				setState(111);
				((TypeDefinitionContext)_localctx).type_identifier = identifier();
				}
			}

			setState(124);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LT) {
				{
				setState(114);
				match(LT);
				setState(118); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(115);
					((TypeDefinitionContext)_localctx).type_parameter = identifier();
					setState(116);
					match(COMMA);
					}
					}
					setState(120); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE );
				setState(122);
				match(GT);
				}
			}

			setState(126);
			match(LBRACE);
			setState(127);
			fieldBlock();
			setState(128);
			match(RBRACE);
			setState(130);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				{
				setState(129);
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
			setState(138);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==KW_STRUCT || _la==KW_VARIANT || _la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE) {
				{
				setState(136);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case KW_STRUCT:
				case KW_VARIANT:
					{
					setState(132);
					typeDefinition();
					}
					break;
				case NON_KEYWORD_IDENTIFIER:
				case RAW_ESCAPE:
					{
					{
					setState(133);
					fieldDefinition();
					setState(134);
					match(SEMI);
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(140);
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
			setState(141);
			((FieldDefinitionContext)_localctx).field_identifier = identifier();
			setState(142);
			match(COLON);
			setState(145);
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
				setState(143);
				typeAnnotation();
				}
				break;
			case KW_STRUCT:
			case KW_VARIANT:
				{
				setState(144);
				typeDefinition();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(149);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==EQ) {
				{
				setState(147);
				match(EQ);
				setState(148);
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
		public List<TypeArgumentContext> typeArgument() {
			return getRuleContexts(TypeArgumentContext.class);
		}
		public TypeArgumentContext typeArgument(int i) {
			return getRuleContext(TypeArgumentContext.class,i);
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
			setState(151);
			typeIdentifier();
			setState(163);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LT) {
				{
				setState(152);
				match(LT);
				setState(153);
				typeArgument();
				setState(158);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(154);
					match(COMMA);
					setState(155);
					typeArgument();
					}
					}
					setState(160);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(161);
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

	public static class TypeArgumentContext extends ParserRuleContext {
		public TypeIdentifierContext typeIdentifier() {
			return getRuleContext(TypeIdentifierContext.class,0);
		}
		public TypeArgumentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeArgument; }
	}

	public final TypeArgumentContext typeArgument() throws RecognitionException {
		TypeArgumentContext _localctx = new TypeArgumentContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_typeArgument);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(165);
			typeIdentifier();
			}
		}
		catch (RecognitionException re) {
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
		enterRule(_localctx, 16, RULE_typeIdentifier);
		try {
			setState(171);
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
				setState(167);
				primitiveTypeIdentifier();
				}
				break;
			case KW_VECTOR:
				enterOuterAlt(_localctx, 2);
				{
				setState(168);
				match(KW_VECTOR);
				}
				break;
			case KW_MAP:
				enterOuterAlt(_localctx, 3);
				{
				setState(169);
				match(KW_MAP);
				}
				break;
			case NON_KEYWORD_IDENTIFIER:
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 4);
				{
				setState(170);
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
		enterRule(_localctx, 18, RULE_userType);
		((UserTypeContext)_localctx).type_definition =  nullptr;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(173);
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
		enterRule(_localctx, 20, RULE_tmplDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(175);
			match(KW_TEMPLATE);
			setState(176);
			identifier();
			setState(177);
			match(LPAREN);
			{
			setState(178);
			functionParameter();
			setState(183);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(179);
				match(COMMA);
				setState(180);
				functionParameter();
				}
				}
				setState(185);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
			setState(186);
			match(RPAREN);
			setState(187);
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
		enterRule(_localctx, 22, RULE_tmplBlock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(189);
			match(START_TEMPLATE);
			setState(193);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TMPL_EXPR_OPEN || _la==TMPL_TEXT) {
				{
				{
				setState(190);
				tmplItem();
				}
				}
				setState(195);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(196);
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
		public TmplInsertionContext tmplInsertion() {
			return getRuleContext(TmplInsertionContext.class,0);
		}
		public TmplCallContext tmplCall() {
			return getRuleContext(TmplCallContext.class,0);
		}
		public TmplIfContext tmplIf() {
			return getRuleContext(TmplIfContext.class,0);
		}
		public TmplForContext tmplFor() {
			return getRuleContext(TmplForContext.class,0);
		}
		public TmplItemContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplItem; }
	}

	public final TmplItemContext tmplItem() throws RecognitionException {
		TmplItemContext _localctx = new TmplItemContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_tmplItem);
		try {
			setState(203);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(198);
				tmplText();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(199);
				tmplInsertion();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(200);
				tmplCall();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(201);
				tmplIf();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(202);
				tmplFor();
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
		public Token txt;
		public TerminalNode TMPL_TEXT() { return getToken(TypedefParser.TMPL_TEXT, 0); }
		public TmplTextContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplText; }
	}

	public final TmplTextContext tmplText() throws RecognitionException {
		TmplTextContext _localctx = new TmplTextContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_tmplText);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(205);
			((TmplTextContext)_localctx).txt = match(TMPL_TEXT);
			}
			_ctx.stop = _input.LT(-1);
			((TmplTextContext)_localctx).text =  _localctx->txt->getText();
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TmplInsertionContext extends ParserRuleContext {
		public TerminalNode TMPL_EXPR_OPEN() { return getToken(TypedefParser.TMPL_EXPR_OPEN, 0); }
		public TmplValueReferencePathContext tmplValueReferencePath() {
			return getRuleContext(TmplValueReferencePathContext.class,0);
		}
		public TerminalNode TMPL_EXPR_CLOSE() { return getToken(TypedefParser.TMPL_EXPR_CLOSE, 0); }
		public TmplInsertionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplInsertion; }
	}

	public final TmplInsertionContext tmplInsertion() throws RecognitionException {
		TmplInsertionContext _localctx = new TmplInsertionContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_tmplInsertion);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(207);
			match(TMPL_EXPR_OPEN);
			setState(208);
			tmplValueReferencePath();
			setState(209);
			match(TMPL_EXPR_CLOSE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TmplCallContext extends ParserRuleContext {
		public TerminalNode TMPL_EXPR_OPEN() { return getToken(TypedefParser.TMPL_EXPR_OPEN, 0); }
		public TmplIdentifierContext tmplIdentifier() {
			return getRuleContext(TmplIdentifierContext.class,0);
		}
		public TerminalNode TMPL_LPAREN() { return getToken(TypedefParser.TMPL_LPAREN, 0); }
		public TerminalNode TMPL_RPAREN() { return getToken(TypedefParser.TMPL_RPAREN, 0); }
		public TerminalNode TMPL_EXPR_CLOSE() { return getToken(TypedefParser.TMPL_EXPR_CLOSE, 0); }
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
		public TmplCallContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplCall; }
	}

	public final TmplCallContext tmplCall() throws RecognitionException {
		TmplCallContext _localctx = new TmplCallContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_tmplCall);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(211);
			match(TMPL_EXPR_OPEN);
			setState(212);
			tmplIdentifier();
			setState(213);
			match(TMPL_LPAREN);
			setState(215);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
			case 1:
				{
				setState(214);
				tmplValueReferencePath();
				}
				break;
			}
			setState(222);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TMPL_NON_KEYWORD_IDENTIFIER) {
				{
				{
				setState(217);
				tmplValueReferencePath();
				setState(218);
				match(TMPL_COMMA);
				}
				}
				setState(224);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(225);
			match(TMPL_RPAREN);
			setState(226);
			match(TMPL_EXPR_CLOSE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TmplIfContext extends ParserRuleContext {
		public TmplIfBlockContext tmplIfBlock() {
			return getRuleContext(TmplIfBlockContext.class,0);
		}
		public TerminalNode TMPL_EXPR_OPEN() { return getToken(TypedefParser.TMPL_EXPR_OPEN, 0); }
		public TerminalNode TMPL_KW_CLOSEIF() { return getToken(TypedefParser.TMPL_KW_CLOSEIF, 0); }
		public TerminalNode TMPL_EXPR_CLOSE() { return getToken(TypedefParser.TMPL_EXPR_CLOSE, 0); }
		public List<TmplElifBlockContext> tmplElifBlock() {
			return getRuleContexts(TmplElifBlockContext.class);
		}
		public TmplElifBlockContext tmplElifBlock(int i) {
			return getRuleContext(TmplElifBlockContext.class,i);
		}
		public TmplElseBlockContext tmplElseBlock() {
			return getRuleContext(TmplElseBlockContext.class,0);
		}
		public TmplIfContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplIf; }
	}

	public final TmplIfContext tmplIf() throws RecognitionException {
		TmplIfContext _localctx = new TmplIfContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_tmplIf);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(228);
			tmplIfBlock();
			setState(232);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,19,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(229);
					tmplElifBlock();
					}
					} 
				}
				setState(234);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,19,_ctx);
			}
			setState(236);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,20,_ctx) ) {
			case 1:
				{
				setState(235);
				tmplElseBlock();
				}
				break;
			}
			{
			setState(238);
			match(TMPL_EXPR_OPEN);
			setState(239);
			match(TMPL_KW_CLOSEIF);
			setState(240);
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

	public static class TmplIfStmtContext extends ParserRuleContext {
		public TerminalNode TMPL_EXPR_OPEN() { return getToken(TypedefParser.TMPL_EXPR_OPEN, 0); }
		public TerminalNode TMPL_KW_IF() { return getToken(TypedefParser.TMPL_KW_IF, 0); }
		public TmplExpressionContext tmplExpression() {
			return getRuleContext(TmplExpressionContext.class,0);
		}
		public TerminalNode TMPL_EXPR_CLOSE() { return getToken(TypedefParser.TMPL_EXPR_CLOSE, 0); }
		public TmplIfStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplIfStmt; }
	}

	public final TmplIfStmtContext tmplIfStmt() throws RecognitionException {
		TmplIfStmtContext _localctx = new TmplIfStmtContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_tmplIfStmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(242);
			match(TMPL_EXPR_OPEN);
			setState(243);
			match(TMPL_KW_IF);
			setState(244);
			tmplExpression();
			setState(245);
			match(TMPL_EXPR_CLOSE);
			}
		}
		catch (RecognitionException re) {
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
		public TmplIfStmtContext tmplIfStmt() {
			return getRuleContext(TmplIfStmtContext.class,0);
		}
		public List<TmplItemContext> tmplItem() {
			return getRuleContexts(TmplItemContext.class);
		}
		public TmplItemContext tmplItem(int i) {
			return getRuleContext(TmplItemContext.class,i);
		}
		public TmplIfBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplIfBlock; }
	}

	public final TmplIfBlockContext tmplIfBlock() throws RecognitionException {
		TmplIfBlockContext _localctx = new TmplIfBlockContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_tmplIfBlock);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(247);
			tmplIfStmt();
			setState(251);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(248);
					tmplItem();
					}
					} 
				}
				setState(253);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
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

	public static class TmplElIfStmtContext extends ParserRuleContext {
		public TerminalNode TMPL_EXPR_OPEN() { return getToken(TypedefParser.TMPL_EXPR_OPEN, 0); }
		public TerminalNode TMPL_KW_ELIF() { return getToken(TypedefParser.TMPL_KW_ELIF, 0); }
		public TmplExpressionContext tmplExpression() {
			return getRuleContext(TmplExpressionContext.class,0);
		}
		public TerminalNode TMPL_EXPR_CLOSE() { return getToken(TypedefParser.TMPL_EXPR_CLOSE, 0); }
		public TmplElIfStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplElIfStmt; }
	}

	public final TmplElIfStmtContext tmplElIfStmt() throws RecognitionException {
		TmplElIfStmtContext _localctx = new TmplElIfStmtContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_tmplElIfStmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(254);
			match(TMPL_EXPR_OPEN);
			setState(255);
			match(TMPL_KW_ELIF);
			setState(256);
			tmplExpression();
			setState(257);
			match(TMPL_EXPR_CLOSE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TmplElifBlockContext extends ParserRuleContext {
		public TmplElIfStmtContext tmplElIfStmt() {
			return getRuleContext(TmplElIfStmtContext.class,0);
		}
		public List<TmplItemContext> tmplItem() {
			return getRuleContexts(TmplItemContext.class);
		}
		public TmplItemContext tmplItem(int i) {
			return getRuleContext(TmplItemContext.class,i);
		}
		public TmplElifBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplElifBlock; }
	}

	public final TmplElifBlockContext tmplElifBlock() throws RecognitionException {
		TmplElifBlockContext _localctx = new TmplElifBlockContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_tmplElifBlock);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(259);
			tmplElIfStmt();
			setState(263);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(260);
					tmplItem();
					}
					} 
				}
				setState(265);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
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

	public static class TmplElseStmtContext extends ParserRuleContext {
		public TerminalNode TMPL_EXPR_OPEN() { return getToken(TypedefParser.TMPL_EXPR_OPEN, 0); }
		public TerminalNode TMPL_KW_ELSE() { return getToken(TypedefParser.TMPL_KW_ELSE, 0); }
		public TerminalNode TMPL_EXPR_CLOSE() { return getToken(TypedefParser.TMPL_EXPR_CLOSE, 0); }
		public TmplElseStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplElseStmt; }
	}

	public final TmplElseStmtContext tmplElseStmt() throws RecognitionException {
		TmplElseStmtContext _localctx = new TmplElseStmtContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_tmplElseStmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(266);
			match(TMPL_EXPR_OPEN);
			setState(267);
			match(TMPL_KW_ELSE);
			setState(268);
			match(TMPL_EXPR_CLOSE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TmplElseBlockContext extends ParserRuleContext {
		public TmplElseStmtContext tmplElseStmt() {
			return getRuleContext(TmplElseStmtContext.class,0);
		}
		public List<TmplItemContext> tmplItem() {
			return getRuleContexts(TmplItemContext.class);
		}
		public TmplItemContext tmplItem(int i) {
			return getRuleContext(TmplItemContext.class,i);
		}
		public TmplElseBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplElseBlock; }
	}

	public final TmplElseBlockContext tmplElseBlock() throws RecognitionException {
		TmplElseBlockContext _localctx = new TmplElseBlockContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_tmplElseBlock);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(270);
			tmplElseStmt();
			setState(274);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
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

	public static class TmplForContext extends ParserRuleContext {
		public TmplForStmtContext tmplForStmt() {
			return getRuleContext(TmplForStmtContext.class,0);
		}
		public TerminalNode TMPL_EXPR_OPEN() { return getToken(TypedefParser.TMPL_EXPR_OPEN, 0); }
		public TerminalNode TMPL_KW_CLOSE_FOR() { return getToken(TypedefParser.TMPL_KW_CLOSE_FOR, 0); }
		public TerminalNode TMPL_EXPR_CLOSE() { return getToken(TypedefParser.TMPL_EXPR_CLOSE, 0); }
		public List<TmplItemContext> tmplItem() {
			return getRuleContexts(TmplItemContext.class);
		}
		public TmplItemContext tmplItem(int i) {
			return getRuleContext(TmplItemContext.class,i);
		}
		public TmplForContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplFor; }
	}

	public final TmplForContext tmplFor() throws RecognitionException {
		TmplForContext _localctx = new TmplForContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_tmplFor);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(277);
			tmplForStmt();
			setState(281);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,24,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(278);
					tmplItem();
					}
					} 
				}
				setState(283);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,24,_ctx);
			}
			{
			setState(284);
			match(TMPL_EXPR_OPEN);
			setState(285);
			match(TMPL_KW_CLOSE_FOR);
			setState(286);
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

	public static class TmplForStmtContext extends ParserRuleContext {
		public TmplIdentifierContext var;
		public TmplValueReferencePathContext collection;
		public TerminalNode TMPL_EXPR_OPEN() { return getToken(TypedefParser.TMPL_EXPR_OPEN, 0); }
		public TerminalNode TMPL_KW_FOR() { return getToken(TypedefParser.TMPL_KW_FOR, 0); }
		public TerminalNode TMPL_KW_IN() { return getToken(TypedefParser.TMPL_KW_IN, 0); }
		public TerminalNode TMPL_EXPR_CLOSE() { return getToken(TypedefParser.TMPL_EXPR_CLOSE, 0); }
		public TmplIdentifierContext tmplIdentifier() {
			return getRuleContext(TmplIdentifierContext.class,0);
		}
		public TmplValueReferencePathContext tmplValueReferencePath() {
			return getRuleContext(TmplValueReferencePathContext.class,0);
		}
		public TmplForStmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplForStmt; }
	}

	public final TmplForStmtContext tmplForStmt() throws RecognitionException {
		TmplForStmtContext _localctx = new TmplForStmtContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_tmplForStmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(288);
			match(TMPL_EXPR_OPEN);
			setState(289);
			match(TMPL_KW_FOR);
			setState(290);
			((TmplForStmtContext)_localctx).var = tmplIdentifier();
			setState(291);
			match(TMPL_KW_IN);
			setState(292);
			((TmplForStmtContext)_localctx).collection = tmplValueReferencePath();
			setState(293);
			match(TMPL_EXPR_CLOSE);
			}
		}
		catch (RecognitionException re) {
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
		public TmplValueReferencePathContext tmplValueReferencePath() {
			return getRuleContext(TmplValueReferencePathContext.class,0);
		}
		public TmplExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tmplExpression; }
	}

	public final TmplExpressionContext tmplExpression() throws RecognitionException {
		TmplExpressionContext _localctx = new TmplExpressionContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_tmplExpression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(295);
			tmplValueReferencePath();
			}
		}
		catch (RecognitionException re) {
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
		enterRule(_localctx, 52, RULE_tmplValueReferencePath);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(297);
			tmplValueReference();
			setState(302);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TMPL_DOT) {
				{
				{
				setState(298);
				match(TMPL_DOT);
				setState(299);
				tmplValueReference();
				}
				}
				setState(304);
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
		public TypeDefinitionContext* type_definition;
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
		enterRule(_localctx, 54, RULE_tmplValueReference);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(305);
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
		enterRule(_localctx, 56, RULE_tmplIdentifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(307);
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
		enterRule(_localctx, 58, RULE_functionParameter);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(309);
			identifier();
			setState(310);
			match(COLON);
			setState(311);
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
		enterRule(_localctx, 60, RULE_useDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(313);
			match(KW_USE);
			setState(314);
			symbolPath();
			setState(315);
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
		enterRule(_localctx, 62, RULE_symbolPath);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(318);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PATHSEP) {
				{
				setState(317);
				((SymbolPathContext)_localctx).leading_pathsep = match(PATHSEP);
				}
			}

			setState(320);
			identifier();
			setState(325);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==PATHSEP) {
				{
				{
				setState(321);
				match(PATHSEP);
				setState(322);
				identifier();
				}
				}
				setState(327);
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
		enterRule(_localctx, 64, RULE_primitiveLiteral);
		try {
			setState(333);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case KW_FALSE:
			case KW_TRUE:
				enterOuterAlt(_localctx, 1);
				{
				setState(328);
				boolLiteral();
				}
				break;
			case CHAR_LITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(329);
				charLiteral();
				}
				break;
			case STRING_LITERAL:
			case RAW_STRING_LITERAL:
				enterOuterAlt(_localctx, 3);
				{
				setState(330);
				stringLiteral();
				}
				break;
			case FLOAT_LITERAL:
				enterOuterAlt(_localctx, 4);
				{
				setState(331);
				floatLiteral();
				}
				break;
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case HEX_PREFIX:
			case OCT_PREFIX:
			case BIN_PREFIX:
			case MINUS:
				enterOuterAlt(_localctx, 5);
				{
				setState(332);
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
		enterRule(_localctx, 66, RULE_boolLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(335);
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
		enterRule(_localctx, 68, RULE_charLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(337);
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
		enterRule(_localctx, 70, RULE_stringLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(339);
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
		enterRule(_localctx, 72, RULE_floatLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(341);
			match(FLOAT_LITERAL);
			setState(343);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==KW_F32 || _la==KW_F64) {
				{
				setState(342);
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
		enterRule(_localctx, 74, RULE_integerLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(345);
			intDigits();
			}
			setState(347);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 77)) & ~0x3f) == 0 && ((1L << (_la - 77)) & ((1L << (KW_U8 - 77)) | (1L << (KW_U16 - 77)) | (1L << (KW_U32 - 77)) | (1L << (KW_U64 - 77)) | (1L << (KW_I8 - 77)) | (1L << (KW_I16 - 77)) | (1L << (KW_I32 - 77)) | (1L << (KW_I64 - 77)))) != 0)) {
				{
				setState(346);
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
		public IntDigitsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_intDigits; }
	}

	public final IntDigitsContext intDigits() throws RecognitionException {
		IntDigitsContext _localctx = new IntDigitsContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_intDigits);
		int _la;
		try {
			setState(359);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(350);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(349);
					match(MINUS);
					}
				}

				setState(352);
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
				setState(353);
				match(HEX_PREFIX);
				setState(354);
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
				setState(355);
				match(OCT_PREFIX);
				setState(356);
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
				setState(357);
				match(BIN_PREFIX);
				setState(358);
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
		enterRule(_localctx, 78, RULE_identifier);
		try {
			setState(364);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NON_KEYWORD_IDENTIFIER:
				enterOuterAlt(_localctx, 1);
				{
				setState(361);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(362);
				match(RAW_ESCAPE);
				setState(363);
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
		enterRule(_localctx, 80, RULE_primitiveTypeIdentifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(366);
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
		enterRule(_localctx, 82, RULE_keyword);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(368);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00b7\u0175\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\3"+
		"\2\3\2\3\2\7\2Z\n\2\f\2\16\2]\13\2\3\2\3\2\7\2a\n\2\f\2\16\2d\13\2\3\2"+
		"\3\2\3\3\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\5\3\5\5\5s\n\5\3\5\3\5\3\5"+
		"\3\5\6\5y\n\5\r\5\16\5z\3\5\3\5\5\5\177\n\5\3\5\3\5\3\5\3\5\5\5\u0085"+
		"\n\5\3\6\3\6\3\6\3\6\7\6\u008b\n\6\f\6\16\6\u008e\13\6\3\7\3\7\3\7\3\7"+
		"\5\7\u0094\n\7\3\7\3\7\5\7\u0098\n\7\3\b\3\b\3\b\3\b\3\b\7\b\u009f\n\b"+
		"\f\b\16\b\u00a2\13\b\3\b\3\b\5\b\u00a6\n\b\3\t\3\t\3\n\3\n\3\n\3\n\5\n"+
		"\u00ae\n\n\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\f\7\f\u00b8\n\f\f\f\16\f\u00bb"+
		"\13\f\3\f\3\f\3\f\3\r\3\r\7\r\u00c2\n\r\f\r\16\r\u00c5\13\r\3\r\3\r\3"+
		"\16\3\16\3\16\3\16\3\16\5\16\u00ce\n\16\3\17\3\17\3\20\3\20\3\20\3\20"+
		"\3\21\3\21\3\21\3\21\5\21\u00da\n\21\3\21\3\21\3\21\7\21\u00df\n\21\f"+
		"\21\16\21\u00e2\13\21\3\21\3\21\3\21\3\22\3\22\7\22\u00e9\n\22\f\22\16"+
		"\22\u00ec\13\22\3\22\5\22\u00ef\n\22\3\22\3\22\3\22\3\22\3\23\3\23\3\23"+
		"\3\23\3\23\3\24\3\24\7\24\u00fc\n\24\f\24\16\24\u00ff\13\24\3\25\3\25"+
		"\3\25\3\25\3\25\3\26\3\26\7\26\u0108\n\26\f\26\16\26\u010b\13\26\3\27"+
		"\3\27\3\27\3\27\3\30\3\30\7\30\u0113\n\30\f\30\16\30\u0116\13\30\3\31"+
		"\3\31\7\31\u011a\n\31\f\31\16\31\u011d\13\31\3\31\3\31\3\31\3\31\3\32"+
		"\3\32\3\32\3\32\3\32\3\32\3\32\3\33\3\33\3\34\3\34\3\34\7\34\u012f\n\34"+
		"\f\34\16\34\u0132\13\34\3\35\3\35\3\36\3\36\3\37\3\37\3\37\3\37\3 \3 "+
		"\3 \3 \3!\5!\u0141\n!\3!\3!\3!\7!\u0146\n!\f!\16!\u0149\13!\3\"\3\"\3"+
		"\"\3\"\3\"\5\"\u0150\n\"\3#\3#\3$\3$\3%\3%\3&\3&\5&\u015a\n&\3\'\3\'\5"+
		"\'\u015e\n\'\3(\5(\u0161\n(\3(\3(\3(\3(\3(\3(\3(\5(\u016a\n(\3)\3)\3)"+
		"\5)\u016f\n)\3*\3*\3+\3+\3+\2\2,\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36"+
		" \"$&(*,.\60\62\64\668:<>@BDFHJLNPRT\2\r\4\2\13\13\20\20\4\2\6\6\f\f\3"+
		"\2ab\3\2MN\3\2OV\3\2cd\3\2ef\3\2gh\3\2ij\3\2JV\5\2\4\b\n\22\24I\2\u0176"+
		"\2V\3\2\2\2\4g\3\2\2\2\6l\3\2\2\2\bp\3\2\2\2\n\u008c\3\2\2\2\f\u008f\3"+
		"\2\2\2\16\u0099\3\2\2\2\20\u00a7\3\2\2\2\22\u00ad\3\2\2\2\24\u00af\3\2"+
		"\2\2\26\u00b1\3\2\2\2\30\u00bf\3\2\2\2\32\u00cd\3\2\2\2\34\u00cf\3\2\2"+
		"\2\36\u00d1\3\2\2\2 \u00d5\3\2\2\2\"\u00e6\3\2\2\2$\u00f4\3\2\2\2&\u00f9"+
		"\3\2\2\2(\u0100\3\2\2\2*\u0105\3\2\2\2,\u010c\3\2\2\2.\u0110\3\2\2\2\60"+
		"\u0117\3\2\2\2\62\u0122\3\2\2\2\64\u0129\3\2\2\2\66\u012b\3\2\2\28\u0133"+
		"\3\2\2\2:\u0135\3\2\2\2<\u0137\3\2\2\2>\u013b\3\2\2\2@\u0140\3\2\2\2B"+
		"\u014f\3\2\2\2D\u0151\3\2\2\2F\u0153\3\2\2\2H\u0155\3\2\2\2J\u0157\3\2"+
		"\2\2L\u015b\3\2\2\2N\u0169\3\2\2\2P\u016e\3\2\2\2R\u0170\3\2\2\2T\u0172"+
		"\3\2\2\2VW\5\4\3\2W[\5\6\4\2XZ\5> \2YX\3\2\2\2Z]\3\2\2\2[Y\3\2\2\2[\\"+
		"\3\2\2\2\\b\3\2\2\2][\3\2\2\2^a\5\b\5\2_a\5\26\f\2`^\3\2\2\2`_\3\2\2\2"+
		"ad\3\2\2\2b`\3\2\2\2bc\3\2\2\2ce\3\2\2\2db\3\2\2\2ef\7\2\2\3f\3\3\2\2"+
		"\2gh\7\16\2\2hi\7\u0089\2\2ij\5P)\2jk\7\u0096\2\2k\5\3\2\2\2lm\7\n\2\2"+
		"mn\5@!\2no\7\u0096\2\2o\7\3\2\2\2pr\t\2\2\2qs\5P)\2rq\3\2\2\2rs\3\2\2"+
		"\2s~\3\2\2\2tx\7\u008d\2\2uv\5P)\2vw\7\u0095\2\2wy\3\2\2\2xu\3\2\2\2y"+
		"z\3\2\2\2zx\3\2\2\2z{\3\2\2\2{|\3\2\2\2|}\7\u008c\2\2}\177\3\2\2\2~t\3"+
		"\2\2\2~\177\3\2\2\2\177\u0080\3\2\2\2\u0080\u0081\7\u009e\2\2\u0081\u0082"+
		"\5\n\6\2\u0082\u0084\7\u009f\2\2\u0083\u0085\7\u0096\2\2\u0084\u0083\3"+
		"\2\2\2\u0084\u0085\3\2\2\2\u0085\t\3\2\2\2\u0086\u008b\5\b\5\2\u0087\u0088"+
		"\5\f\7\2\u0088\u0089\7\u0096\2\2\u0089\u008b\3\2\2\2\u008a\u0086\3\2\2"+
		"\2\u008a\u0087\3\2\2\2\u008b\u008e\3\2\2\2\u008c\u008a\3\2\2\2\u008c\u008d"+
		"\3\2\2\2\u008d\13\3\2\2\2\u008e\u008c\3\2\2\2\u008f\u0090\5P)\2\u0090"+
		"\u0093\7\u0097\2\2\u0091\u0094\5\16\b\2\u0092\u0094\5\b\5\2\u0093\u0091"+
		"\3\2\2\2\u0093\u0092\3\2\2\2\u0094\u0097\3\2\2\2\u0095\u0096\7\u0089\2"+
		"\2\u0096\u0098\5B\"\2\u0097\u0095\3\2\2\2\u0097\u0098\3\2\2\2\u0098\r"+
		"\3\2\2\2\u0099\u00a5\5\22\n\2\u009a\u009b\7\u008d\2\2\u009b\u00a0\5\20"+
		"\t\2\u009c\u009d\7\u0095\2\2\u009d\u009f\5\20\t\2\u009e\u009c\3\2\2\2"+
		"\u009f\u00a2\3\2\2\2\u00a0\u009e\3\2\2\2\u00a0\u00a1\3\2\2\2\u00a1\u00a3"+
		"\3\2\2\2\u00a2\u00a0\3\2\2\2\u00a3\u00a4\7\u008c\2\2\u00a4\u00a6\3\2\2"+
		"\2\u00a5\u009a\3\2\2\2\u00a5\u00a6\3\2\2\2\u00a6\17\3\2\2\2\u00a7\u00a8"+
		"\5\22\n\2\u00a8\21\3\2\2\2\u00a9\u00ae\5R*\2\u00aa\u00ae\7\21\2\2\u00ab"+
		"\u00ae\7\22\2\2\u00ac\u00ae\5\24\13\2\u00ad\u00a9\3\2\2\2\u00ad\u00aa"+
		"\3\2\2\2\u00ad\u00ab\3\2\2\2\u00ad\u00ac\3\2\2\2\u00ae\23\3\2\2\2\u00af"+
		"\u00b0\5P)\2\u00b0\25\3\2\2\2\u00b1\u00b2\7\23\2\2\u00b2\u00b3\5P)\2\u00b3"+
		"\u00b4\7\u00a2\2\2\u00b4\u00b9\5<\37\2\u00b5\u00b6\7\u0095\2\2\u00b6\u00b8"+
		"\5<\37\2\u00b7\u00b5\3\2\2\2\u00b8\u00bb\3\2\2\2\u00b9\u00b7\3\2\2\2\u00b9"+
		"\u00ba\3\2\2\2\u00ba\u00bc\3\2\2\2\u00bb\u00b9\3\2\2\2\u00bc\u00bd\7\u00a3"+
		"\2\2\u00bd\u00be\5\30\r\2\u00be\27\3\2\2\2\u00bf\u00c3\7r\2\2\u00c0\u00c2"+
		"\5\32\16\2\u00c1\u00c0\3\2\2\2\u00c2\u00c5\3\2\2\2\u00c3\u00c1\3\2\2\2"+
		"\u00c3\u00c4\3\2\2\2\u00c4\u00c6\3\2\2\2\u00c5\u00c3\3\2\2\2\u00c6\u00c7"+
		"\7\u00a5\2\2\u00c7\31\3\2\2\2\u00c8\u00ce\5\34\17\2\u00c9\u00ce\5\36\20"+
		"\2\u00ca\u00ce\5 \21\2\u00cb\u00ce\5\"\22\2\u00cc\u00ce\5\60\31\2\u00cd"+
		"\u00c8\3\2\2\2\u00cd\u00c9\3\2\2\2\u00cd\u00ca\3\2\2\2\u00cd\u00cb\3\2"+
		"\2\2\u00cd\u00cc\3\2\2\2\u00ce\33\3\2\2\2\u00cf\u00d0\7\u00a7\2\2\u00d0"+
		"\35\3\2\2\2\u00d1\u00d2\7\u00a6\2\2\u00d2\u00d3\5\66\34\2\u00d3\u00d4"+
		"\7\u00aa\2\2\u00d4\37\3\2\2\2\u00d5\u00d6\7\u00a6\2\2\u00d6\u00d7\5:\36"+
		"\2\u00d7\u00d9\7\u00ae\2\2\u00d8\u00da\5\66\34\2\u00d9\u00d8\3\2\2\2\u00d9"+
		"\u00da\3\2\2\2\u00da\u00e0\3\2\2\2\u00db\u00dc\5\66\34\2\u00dc\u00dd\7"+
		"\u00ac\2\2\u00dd\u00df\3\2\2\2\u00de\u00db\3\2\2\2\u00df\u00e2\3\2\2\2"+
		"\u00e0\u00de\3\2\2\2\u00e0\u00e1\3\2\2\2\u00e1\u00e3\3\2\2\2\u00e2\u00e0"+
		"\3\2\2\2\u00e3\u00e4\7\u00af\2\2\u00e4\u00e5\7\u00aa\2\2\u00e5!\3\2\2"+
		"\2\u00e6\u00ea\5&\24\2\u00e7\u00e9\5*\26\2\u00e8\u00e7\3\2\2\2\u00e9\u00ec"+
		"\3\2\2\2\u00ea\u00e8\3\2\2\2\u00ea\u00eb\3\2\2\2\u00eb\u00ee\3\2\2\2\u00ec"+
		"\u00ea\3\2\2\2\u00ed\u00ef\5.\30\2\u00ee\u00ed\3\2\2\2\u00ee\u00ef\3\2"+
		"\2\2\u00ef\u00f0\3\2\2\2\u00f0\u00f1\7\u00a6\2\2\u00f1\u00f2\7\u00a9\2"+
		"\2\u00f2\u00f3\7\u00aa\2\2\u00f3#\3\2\2\2\u00f4\u00f5\7\u00a6\2\2\u00f5"+
		"\u00f6\7\u00b3\2\2\u00f6\u00f7\5\64\33\2\u00f7\u00f8\7\u00aa\2\2\u00f8"+
		"%\3\2\2\2\u00f9\u00fd\5$\23\2\u00fa\u00fc\5\32\16\2\u00fb\u00fa\3\2\2"+
		"\2\u00fc\u00ff\3\2\2\2\u00fd\u00fb\3\2\2\2\u00fd\u00fe\3\2\2\2\u00fe\'"+
		"\3\2\2\2\u00ff\u00fd\3\2\2\2\u0100\u0101\7\u00a6\2\2\u0101\u0102\7\u00b5"+
		"\2\2\u0102\u0103\5\64\33\2\u0103\u0104\7\u00aa\2\2\u0104)\3\2\2\2\u0105"+
		"\u0109\5(\25\2\u0106\u0108\5\32\16\2\u0107\u0106\3\2\2\2\u0108\u010b\3"+
		"\2\2\2\u0109\u0107\3\2\2\2\u0109\u010a\3\2\2\2\u010a+\3\2\2\2\u010b\u0109"+
		"\3\2\2\2\u010c\u010d\7\u00a6\2\2\u010d\u010e\7\u00b4\2\2\u010e\u010f\7"+
		"\u00aa\2\2\u010f-\3\2\2\2\u0110\u0114\5,\27\2\u0111\u0113\5\32\16\2\u0112"+
		"\u0111\3\2\2\2\u0113\u0116\3\2\2\2\u0114\u0112\3\2\2\2\u0114\u0115\3\2"+
		"\2\2\u0115/\3\2\2\2\u0116\u0114\3\2\2\2\u0117\u011b\5\62\32\2\u0118\u011a"+
		"\5\32\16\2\u0119\u0118\3\2\2\2\u011a\u011d\3\2\2\2\u011b\u0119\3\2\2\2"+
		"\u011b\u011c\3\2\2\2\u011c\u011e\3\2\2\2\u011d\u011b\3\2\2\2\u011e\u011f"+
		"\7\u00a6\2\2\u011f\u0120\7\u00a8\2\2\u0120\u0121\7\u00aa\2\2\u0121\61"+
		"\3\2\2\2\u0122\u0123\7\u00a6\2\2\u0123\u0124\7\u00b1\2\2\u0124\u0125\5"+
		":\36\2\u0125\u0126\7\u00b2\2\2\u0126\u0127\5\66\34\2\u0127\u0128\7\u00aa"+
		"\2\2\u0128\63\3\2\2\2\u0129\u012a\5\66\34\2\u012a\65\3\2\2\2\u012b\u0130"+
		"\58\35\2\u012c\u012d\7\u00ad\2\2\u012d\u012f\58\35\2\u012e\u012c\3\2\2"+
		"\2\u012f\u0132\3\2\2\2\u0130\u012e\3\2\2\2\u0130\u0131\3\2\2\2\u0131\67"+
		"\3\2\2\2\u0132\u0130\3\2\2\2\u0133\u0134\5:\36\2\u01349\3\2\2\2\u0135"+
		"\u0136\7\u00b6\2\2\u0136;\3\2\2\2\u0137\u0138\5P)\2\u0138\u0139\7\u0097"+
		"\2\2\u0139\u013a\5\16\b\2\u013a=\3\2\2\2\u013b\u013c\7\17\2\2\u013c\u013d"+
		"\5@!\2\u013d\u013e\7\u0096\2\2\u013e?\3\2\2\2\u013f\u0141\7\u0098\2\2"+
		"\u0140\u013f\3\2\2\2\u0140\u0141\3\2\2\2\u0141\u0142\3\2\2\2\u0142\u0147"+
		"\5P)\2\u0143\u0144\7\u0098\2\2\u0144\u0146\5P)\2\u0145\u0143\3\2\2\2\u0146"+
		"\u0149\3\2\2\2\u0147\u0145\3\2\2\2\u0147\u0148\3\2\2\2\u0148A\3\2\2\2"+
		"\u0149\u0147\3\2\2\2\u014a\u0150\5D#\2\u014b\u0150\5F$\2\u014c\u0150\5"+
		"H%\2\u014d\u0150\5J&\2\u014e\u0150\5L\'\2\u014f\u014a\3\2\2\2\u014f\u014b"+
		"\3\2\2\2\u014f\u014c\3\2\2\2\u014f\u014d\3\2\2\2\u014f\u014e\3\2\2\2\u0150"+
		"C\3\2\2\2\u0151\u0152\t\3\2\2\u0152E\3\2\2\2\u0153\u0154\7`\2\2\u0154"+
		"G\3\2\2\2\u0155\u0156\t\4\2\2\u0156I\3\2\2\2\u0157\u0159\7k\2\2\u0158"+
		"\u015a\t\5\2\2\u0159\u0158\3\2\2\2\u0159\u015a\3\2\2\2\u015aK\3\2\2\2"+
		"\u015b\u015d\5N(\2\u015c\u015e\t\6\2\2\u015d\u015c\3\2\2\2\u015d\u015e"+
		"\3\2\2\2\u015eM\3\2\2\2\u015f\u0161\7u\2\2\u0160\u015f\3\2\2\2\u0160\u0161"+
		"\3\2\2\2\u0161\u0162\3\2\2\2\u0162\u016a\t\7\2\2\u0163\u0164\7o\2\2\u0164"+
		"\u016a\t\b\2\2\u0165\u0166\7p\2\2\u0166\u016a\t\t\2\2\u0167\u0168\7q\2"+
		"\2\u0168\u016a\t\n\2\2\u0169\u0160\3\2\2\2\u0169\u0163\3\2\2\2\u0169\u0165"+
		"\3\2\2\2\u0169\u0167\3\2\2\2\u016aO\3\2\2\2\u016b\u016f\7W\2\2\u016c\u016d"+
		"\7s\2\2\u016d\u016f\7W\2\2\u016e\u016b\3\2\2\2\u016e\u016c\3\2\2\2\u016f"+
		"Q\3\2\2\2\u0170\u0171\t\13\2\2\u0171S\3\2\2\2\u0172\u0173\t\f\2\2\u0173"+
		"U\3\2\2\2$[`brz~\u0084\u008a\u008c\u0093\u0097\u00a0\u00a5\u00ad\u00b9"+
		"\u00c3\u00cd\u00d9\u00e0\u00ea\u00ee\u00fd\u0109\u0114\u011b\u0130\u0140"+
		"\u0147\u014f\u0159\u015d\u0160\u0169\u016e";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}