// Generated from /home/dpemmons/src/typedef/libtypedef/parser/grammar/TypedefParser.g4 by ANTLR 4.13.1

#include "libtypedef/parser/gramamr_types.h"

import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class TypedefParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

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


	#pragma GCC diagnostic push
	#pragma GCC diagnostic ignored "-Wredeclared-class-member"
	class CompilationUnitContext;
	class TypeDefinitionContext;
	class TmplDefinitionContext;
	class FieldDefinitionContext;
	class TmplBindingVariableContext;
	class FunctionParameterContext;
	struct BuiltinFunction { bool whatever; };
	using IdentifierCtx =
			std::variant<CompilationUnitContext *,      //
										TypeDefinitionContext *,      //
										TmplDefinitionContext *,      //
										FieldDefinitionContext *,     //
										TmplBindingVariableContext *, //
										FunctionParameterContext *,   //
										BuiltinFunction *>;           //

	public TypedefParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CompilationUnitContext extends ParserRuleContext {
		public BuiltinFunction is_first_func;
		public BuiltinFunction is_last_func;
		public BuiltinFunction is_empty_func;
		public BuiltinFunction index0_func;
		public BuiltinFunction index1_func;
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
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 147968L) != 0)) {
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

	@SuppressWarnings("CheckReturnValue")
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

	@SuppressWarnings("CheckReturnValue")
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

	@SuppressWarnings("CheckReturnValue")
	public static class TypeDefinitionContext extends ParserRuleContext {
		public FieldDefinitionContext* field;
		public std::vector<IdentifierCtx> ns_ctx;
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
		((TypeDefinitionContext)_localctx).field =  nullptr;
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

	@SuppressWarnings("CheckReturnValue")
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

	@SuppressWarnings("CheckReturnValue")
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

	@SuppressWarnings("CheckReturnValue")
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

	@SuppressWarnings("CheckReturnValue")
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

	@SuppressWarnings("CheckReturnValue")
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

	@SuppressWarnings("CheckReturnValue")
	public static class TmplDefinitionContext extends ParserRuleContext {
		public std::string literal;
		public TerminalNode KW_TEMPLATE() { return getToken(TypedefParser.KW_TEMPLATE, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(TypedefParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(TypedefParser.RPAREN, 0); }
		public TmplBlockContext tmplBlock() {
			return getRuleContext(TmplBlockContext.class,0);
		}
		public TerminalNode RAW_STRING_LITERAL() { return getToken(TypedefParser.RAW_STRING_LITERAL, 0); }
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
			setState(190);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case START_TEMPLATE:
				{
				setState(188);
				tmplBlock();
				}
				break;
			case RAW_STRING_LITERAL:
				{
				setState(189);
				match(RAW_STRING_LITERAL);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
			_ctx.stop = _input.LT(-1);
			td::MaybeSetTemplateLiteral(_localctx.literal, _localctx);
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
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
			setState(192);
			match(START_TEMPLATE);
			setState(196);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TMPL_EXPR_OPEN || _la==TMPL_TEXT) {
				{
				{
				setState(193);
				tmplItem();
				}
				}
				setState(198);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(199);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(209);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(201);
				tmplText();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(202);
				match(TMPL_EXPR_OPEN);
				setState(203);
				tmplExpression();
				setState(204);
				match(TMPL_EXPR_CLOSE);
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(206);
				tmplIfBlock();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(207);
				tmplForBlock();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(208);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(211);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(221);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,20,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(213);
				match(TMPL_LPAREN);
				setState(214);
				tmplExpression();
				setState(215);
				match(TMPL_RPAREN);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(217);
				match(TMPL_NOT);
				setState(218);
				tmplExpression();
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(219);
				tmplValueReferencePath();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(220);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(223);
			tmplIdentifier();
			setState(224);
			match(TMPL_LPAREN);
			setState(226);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TMPL_NON_KEYWORD_IDENTIFIER) {
				{
				setState(225);
				tmplValueReferencePath();
				}
			}

			setState(232);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TMPL_COMMA) {
				{
				{
				setState(228);
				match(TMPL_COMMA);
				setState(229);
				tmplValueReferencePath();
				}
				}
				setState(234);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(235);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(237);
			tmplIfSubBlock();
			setState(241);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(238);
					tmplElIfSubBlock();
					}
					} 
				}
				setState(243);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
			}
			setState(245);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,24,_ctx) ) {
			case 1:
				{
				setState(244);
				tmplElseSubBlock();
				}
				break;
			}
			{
			setState(247);
			match(TMPL_EXPR_OPEN);
			setState(248);
			match(TMPL_KW_CLOSEIF);
			setState(249);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(251);
			match(TMPL_EXPR_OPEN);
			setState(252);
			match(TMPL_KW_IF);
			setState(253);
			tmplExpression();
			setState(254);
			match(TMPL_EXPR_CLOSE);
			}
			setState(259);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,25,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(256);
					tmplItem();
					}
					} 
				}
				setState(261);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(262);
			match(TMPL_EXPR_OPEN);
			setState(263);
			match(TMPL_KW_ELIF);
			setState(264);
			tmplExpression();
			setState(265);
			match(TMPL_EXPR_CLOSE);
			}
			setState(270);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,26,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(267);
					tmplItem();
					}
					} 
				}
				setState(272);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(273);
			match(TMPL_EXPR_OPEN);
			setState(274);
			match(TMPL_KW_ELSE);
			setState(275);
			match(TMPL_EXPR_CLOSE);
			setState(279);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,27,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(276);
					tmplItem();
					}
					} 
				}
				setState(281);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,27,_ctx);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(282);
			match(TMPL_EXPR_OPEN);
			setState(283);
			match(TMPL_KW_FOR);
			setState(284);
			tmplBindingVariables();
			setState(285);
			match(TMPL_KW_IN);
			setState(286);
			((TmplForBlockContext)_localctx).collection = tmplValueReferencePath();
			setState(287);
			match(TMPL_EXPR_CLOSE);
			}
			setState(292);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,28,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(289);
					tmplItem();
					}
					} 
				}
				setState(294);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,28,_ctx);
			}
			{
			setState(295);
			match(TMPL_EXPR_OPEN);
			setState(296);
			match(TMPL_KW_CLOSE_FOR);
			setState(297);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(299);
			match(TMPL_EXPR_OPEN);
			setState(300);
			match(TMPL_KW_SWITCH);
			setState(301);
			tmplValueReferencePath();
			setState(302);
			match(TMPL_EXPR_CLOSE);
			}
			setState(305);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,29,_ctx) ) {
			case 1:
				{
				setState(304);
				match(TMPL_TEXT);
				}
				break;
			}
			setState(316);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,32,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(308);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,30,_ctx) ) {
					case 1:
						{
						setState(307);
						match(TMPL_TEXT);
						}
						break;
					}
					setState(310);
					tmplCaseBlock();
					setState(312);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,31,_ctx) ) {
					case 1:
						{
						setState(311);
						match(TMPL_TEXT);
						}
						break;
					}
					}
					} 
				}
				setState(318);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,32,_ctx);
			}
			setState(326);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,35,_ctx) ) {
			case 1:
				{
				setState(320);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,33,_ctx) ) {
				case 1:
					{
					setState(319);
					match(TMPL_TEXT);
					}
					break;
				}
				setState(322);
				tmplDefaultBlock();
				setState(324);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==TMPL_TEXT) {
					{
					setState(323);
					match(TMPL_TEXT);
					}
				}

				}
				break;
			}
			{
			setState(328);
			match(TMPL_EXPR_OPEN);
			setState(329);
			match(TMPL_KW_CLOSE_SWITCH);
			setState(330);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(333);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TMPL_TEXT) {
				{
				setState(332);
				match(TMPL_TEXT);
				}
			}

			setState(335);
			match(TMPL_EXPR_OPEN);
			setState(336);
			match(TMPL_KW_CASE);
			setState(337);
			tmplValueReferencePath();
			setState(338);
			match(TMPL_EXPR_CLOSE);
			}
			setState(343);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,37,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(340);
					tmplItem();
					}
					} 
				}
				setState(345);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,37,_ctx);
			}
			{
			setState(346);
			match(TMPL_EXPR_OPEN);
			setState(347);
			match(TMPL_KW_CLOSE_CASE);
			setState(348);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(351);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TMPL_TEXT) {
				{
				setState(350);
				match(TMPL_TEXT);
				}
			}

			setState(353);
			match(TMPL_EXPR_OPEN);
			setState(354);
			match(TMPL_KW_DEFAULT);
			setState(355);
			match(TMPL_EXPR_CLOSE);
			}
			setState(360);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,39,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(357);
					tmplItem();
					}
					} 
				}
				setState(362);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,39,_ctx);
			}
			{
			setState(363);
			match(TMPL_EXPR_OPEN);
			setState(364);
			match(TMPL_KW_CLOSE_DEFAULT);
			setState(365);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(367);
			tmplBindingVariable();
			setState(370);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TMPL_COMMA) {
				{
				setState(368);
				match(TMPL_COMMA);
				setState(369);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(372);
			tmplValueReference();
			setState(377);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TMPL_DOT) {
				{
				{
				setState(373);
				match(TMPL_DOT);
				setState(374);
				tmplValueReference();
				}
				}
				setState(379);
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

	@SuppressWarnings("CheckReturnValue")
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(382);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(384);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(386);
			identifier();
			setState(387);
			match(COLON);
			setState(388);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(390);
			match(KW_USE);
			setState(391);
			symbolPath();
			setState(392);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(395);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLONCOLON) {
				{
				setState(394);
				((SymbolPathContext)_localctx).leading_pathsep = match(COLONCOLON);
				}
			}

			setState(397);
			identifier();
			setState(402);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COLONCOLON) {
				{
				{
				setState(398);
				match(COLONCOLON);
				setState(399);
				identifier();
				}
				}
				setState(404);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(410);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case KW_FALSE:
			case KW_TRUE:
				enterOuterAlt(_localctx, 1);
				{
				setState(405);
				boolLiteral();
				}
				break;
			case CHAR_LITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(406);
				charLiteral();
				}
				break;
			case STRING_LITERAL:
			case RAW_STRING_LITERAL:
				enterOuterAlt(_localctx, 3);
				{
				setState(407);
				stringLiteral();
				}
				break;
			case FLOAT_LITERAL:
				enterOuterAlt(_localctx, 4);
				{
				setState(408);
				floatLiteral();
				}
				break;
			case DEC_LITERAL:
			case HEX_LITERAL:
			case OCT_LITERAL:
			case BIN_LITERAL:
				enterOuterAlt(_localctx, 5);
				{
				setState(409);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(412);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(414);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(416);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(418);
			match(FLOAT_LITERAL);
			setState(420);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==KW_F32 || _la==KW_F64) {
				{
				setState(419);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(422);
			intDigits();
			}
			setState(424);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 77)) & ~0x3f) == 0 && ((1L << (_la - 77)) & 255L) != 0)) {
				{
				setState(423);
				_la = _input.LA(1);
				if ( !(((((_la - 77)) & ~0x3f) == 0 && ((1L << (_la - 77)) & 255L) != 0)) ) {
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(426);
			_la = _input.LA(1);
			if ( !(((((_la - 97)) & ~0x3f) == 0 && ((1L << (_la - 97)) & 15L) != 0)) ) {
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(431);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NON_KEYWORD_IDENTIFIER:
				enterOuterAlt(_localctx, 1);
				{
				setState(428);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(429);
				match(RAW_ESCAPE);
				setState(430);
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(433);
			_la = _input.LA(1);
			if ( !(((((_la - 72)) & ~0x3f) == 0 && ((1L << (_la - 72)) & 8191L) != 0)) ) {
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

	@SuppressWarnings("CheckReturnValue")
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
			setState(435);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & -131204L) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & 255L) != 0)) ) {
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
		"\u0004\u0001\u00bc\u01b6\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001"+
		"\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004"+
		"\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007"+
		"\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b"+
		"\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007"+
		"\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007"+
		"\u0012\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007"+
		"\u0015\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017\u0002\u0018\u0007"+
		"\u0018\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a\u0002\u001b\u0007"+
		"\u001b\u0002\u001c\u0007\u001c\u0002\u001d\u0007\u001d\u0002\u001e\u0007"+
		"\u001e\u0002\u001f\u0007\u001f\u0002 \u0007 \u0002!\u0007!\u0002\"\u0007"+
		"\"\u0002#\u0007#\u0002$\u0007$\u0002%\u0007%\u0002&\u0007&\u0002\'\u0007"+
		"\'\u0002(\u0007(\u0001\u0000\u0001\u0000\u0001\u0000\u0005\u0000V\b\u0000"+
		"\n\u0000\f\u0000Y\t\u0000\u0001\u0000\u0001\u0000\u0005\u0000]\b\u0000"+
		"\n\u0000\f\u0000`\t\u0000\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0003\u0001\u0003\u0003\u0003o\b\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0004\u0003u\b\u0003\u000b\u0003"+
		"\f\u0003v\u0001\u0003\u0001\u0003\u0003\u0003{\b\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0003\u0003\u0081\b\u0003\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0005\u0004\u0087\b\u0004\n\u0004\f\u0004"+
		"\u008a\t\u0004\u0001\u0005\u0001\u0005\u0003\u0005\u008e\b\u0005\u0001"+
		"\u0005\u0001\u0005\u0001\u0005\u0003\u0005\u0093\b\u0005\u0001\u0005\u0001"+
		"\u0005\u0003\u0005\u0097\b\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0001"+
		"\u0006\u0001\u0006\u0005\u0006\u009e\b\u0006\n\u0006\f\u0006\u00a1\t\u0006"+
		"\u0001\u0006\u0001\u0006\u0003\u0006\u00a5\b\u0006\u0001\u0007\u0001\u0007"+
		"\u0001\u0007\u0001\u0007\u0003\u0007\u00ab\b\u0007\u0001\b\u0001\b\u0001"+
		"\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0005\t\u00b5\b\t\n\t\f\t\u00b8"+
		"\t\t\u0003\t\u00ba\b\t\u0001\t\u0001\t\u0001\t\u0003\t\u00bf\b\t\u0001"+
		"\n\u0001\n\u0005\n\u00c3\b\n\n\n\f\n\u00c6\t\n\u0001\n\u0001\n\u0001\u000b"+
		"\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b"+
		"\u0001\u000b\u0003\u000b\u00d2\b\u000b\u0001\f\u0001\f\u0001\r\u0001\r"+
		"\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0003\r\u00de\b\r\u0001"+
		"\u000e\u0001\u000e\u0001\u000e\u0003\u000e\u00e3\b\u000e\u0001\u000e\u0001"+
		"\u000e\u0005\u000e\u00e7\b\u000e\n\u000e\f\u000e\u00ea\t\u000e\u0001\u000e"+
		"\u0001\u000e\u0001\u000f\u0001\u000f\u0005\u000f\u00f0\b\u000f\n\u000f"+
		"\f\u000f\u00f3\t\u000f\u0001\u000f\u0003\u000f\u00f6\b\u000f\u0001\u000f"+
		"\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u0010\u0001\u0010\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0005\u0010\u0102\b\u0010\n\u0010"+
		"\f\u0010\u0105\t\u0010\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011"+
		"\u0001\u0011\u0001\u0011\u0005\u0011\u010d\b\u0011\n\u0011\f\u0011\u0110"+
		"\t\u0011\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0005\u0012\u0116"+
		"\b\u0012\n\u0012\f\u0012\u0119\t\u0012\u0001\u0013\u0001\u0013\u0001\u0013"+
		"\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0005\u0013"+
		"\u0123\b\u0013\n\u0013\f\u0013\u0126\t\u0013\u0001\u0013\u0001\u0013\u0001"+
		"\u0013\u0001\u0013\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001"+
		"\u0014\u0001\u0014\u0003\u0014\u0132\b\u0014\u0001\u0014\u0003\u0014\u0135"+
		"\b\u0014\u0001\u0014\u0001\u0014\u0003\u0014\u0139\b\u0014\u0005\u0014"+
		"\u013b\b\u0014\n\u0014\f\u0014\u013e\t\u0014\u0001\u0014\u0003\u0014\u0141"+
		"\b\u0014\u0001\u0014\u0001\u0014\u0003\u0014\u0145\b\u0014\u0003\u0014"+
		"\u0147\b\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0015"+
		"\u0003\u0015\u014e\b\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015"+
		"\u0001\u0015\u0001\u0015\u0005\u0015\u0156\b\u0015\n\u0015\f\u0015\u0159"+
		"\t\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0016\u0003"+
		"\u0016\u0160\b\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001"+
		"\u0016\u0005\u0016\u0167\b\u0016\n\u0016\f\u0016\u016a\t\u0016\u0001\u0016"+
		"\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0017\u0001\u0017\u0001\u0017"+
		"\u0003\u0017\u0173\b\u0017\u0001\u0018\u0001\u0018\u0001\u0018\u0005\u0018"+
		"\u0178\b\u0018\n\u0018\f\u0018\u017b\t\u0018\u0001\u0019\u0001\u0019\u0001"+
		"\u001a\u0001\u001a\u0001\u001b\u0001\u001b\u0001\u001c\u0001\u001c\u0001"+
		"\u001c\u0001\u001c\u0001\u001d\u0001\u001d\u0001\u001d\u0001\u001d\u0001"+
		"\u001e\u0003\u001e\u018c\b\u001e\u0001\u001e\u0001\u001e\u0001\u001e\u0005"+
		"\u001e\u0191\b\u001e\n\u001e\f\u001e\u0194\t\u001e\u0001\u001f\u0001\u001f"+
		"\u0001\u001f\u0001\u001f\u0001\u001f\u0003\u001f\u019b\b\u001f\u0001 "+
		"\u0001 \u0001!\u0001!\u0001\"\u0001\"\u0001#\u0001#\u0003#\u01a5\b#\u0001"+
		"$\u0001$\u0003$\u01a9\b$\u0001%\u0001%\u0001&\u0001&\u0001&\u0003&\u01b0"+
		"\b&\u0001\'\u0001\'\u0001(\u0001(\u0001(\u0000\u0000)\u0000\u0002\u0004"+
		"\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u001a\u001c\u001e \""+
		"$&(*,.02468:<>@BDFHJLNP\u0000\b\u0002\u0000\t\t\u000e\u000e\u0002\u0000"+
		"\u0004\u0004\n\n\u0001\u0000_`\u0001\u0000KL\u0001\u0000MT\u0001\u0000"+
		"ad\u0001\u0000HT\u0003\u0000\u0002\u0006\b\u0010\u0012G\u01c6\u0000R\u0001"+
		"\u0000\u0000\u0000\u0002c\u0001\u0000\u0000\u0000\u0004h\u0001\u0000\u0000"+
		"\u0000\u0006l\u0001\u0000\u0000\u0000\b\u0088\u0001\u0000\u0000\u0000"+
		"\n\u008b\u0001\u0000\u0000\u0000\f\u0098\u0001\u0000\u0000\u0000\u000e"+
		"\u00aa\u0001\u0000\u0000\u0000\u0010\u00ac\u0001\u0000\u0000\u0000\u0012"+
		"\u00ae\u0001\u0000\u0000\u0000\u0014\u00c0\u0001\u0000\u0000\u0000\u0016"+
		"\u00d1\u0001\u0000\u0000\u0000\u0018\u00d3\u0001\u0000\u0000\u0000\u001a"+
		"\u00dd\u0001\u0000\u0000\u0000\u001c\u00df\u0001\u0000\u0000\u0000\u001e"+
		"\u00ed\u0001\u0000\u0000\u0000 \u00fb\u0001\u0000\u0000\u0000\"\u0106"+
		"\u0001\u0000\u0000\u0000$\u0111\u0001\u0000\u0000\u0000&\u011a\u0001\u0000"+
		"\u0000\u0000(\u012b\u0001\u0000\u0000\u0000*\u014d\u0001\u0000\u0000\u0000"+
		",\u015f\u0001\u0000\u0000\u0000.\u016f\u0001\u0000\u0000\u00000\u0174"+
		"\u0001\u0000\u0000\u00002\u017c\u0001\u0000\u0000\u00004\u017e\u0001\u0000"+
		"\u0000\u00006\u0180\u0001\u0000\u0000\u00008\u0182\u0001\u0000\u0000\u0000"+
		":\u0186\u0001\u0000\u0000\u0000<\u018b\u0001\u0000\u0000\u0000>\u019a"+
		"\u0001\u0000\u0000\u0000@\u019c\u0001\u0000\u0000\u0000B\u019e\u0001\u0000"+
		"\u0000\u0000D\u01a0\u0001\u0000\u0000\u0000F\u01a2\u0001\u0000\u0000\u0000"+
		"H\u01a6\u0001\u0000\u0000\u0000J\u01aa\u0001\u0000\u0000\u0000L\u01af"+
		"\u0001\u0000\u0000\u0000N\u01b1\u0001\u0000\u0000\u0000P\u01b3\u0001\u0000"+
		"\u0000\u0000RS\u0003\u0002\u0001\u0000SW\u0003\u0004\u0002\u0000TV\u0003"+
		":\u001d\u0000UT\u0001\u0000\u0000\u0000VY\u0001\u0000\u0000\u0000WU\u0001"+
		"\u0000\u0000\u0000WX\u0001\u0000\u0000\u0000X^\u0001\u0000\u0000\u0000"+
		"YW\u0001\u0000\u0000\u0000Z]\u0003\u0006\u0003\u0000[]\u0003\u0012\t\u0000"+
		"\\Z\u0001\u0000\u0000\u0000\\[\u0001\u0000\u0000\u0000]`\u0001\u0000\u0000"+
		"\u0000^\\\u0001\u0000\u0000\u0000^_\u0001\u0000\u0000\u0000_a\u0001\u0000"+
		"\u0000\u0000`^\u0001\u0000\u0000\u0000ab\u0005\u0000\u0000\u0001b\u0001"+
		"\u0001\u0000\u0000\u0000cd\u0005\f\u0000\u0000de\u0005\u0087\u0000\u0000"+
		"ef\u0003L&\u0000fg\u0005\u0094\u0000\u0000g\u0003\u0001\u0000\u0000\u0000"+
		"hi\u0005\b\u0000\u0000ij\u0003<\u001e\u0000jk\u0005\u0094\u0000\u0000"+
		"k\u0005\u0001\u0000\u0000\u0000ln\u0007\u0000\u0000\u0000mo\u0003L&\u0000"+
		"nm\u0001\u0000\u0000\u0000no\u0001\u0000\u0000\u0000oz\u0001\u0000\u0000"+
		"\u0000pt\u0005\u008b\u0000\u0000qr\u0003L&\u0000rs\u0005\u0093\u0000\u0000"+
		"su\u0001\u0000\u0000\u0000tq\u0001\u0000\u0000\u0000uv\u0001\u0000\u0000"+
		"\u0000vt\u0001\u0000\u0000\u0000vw\u0001\u0000\u0000\u0000wx\u0001\u0000"+
		"\u0000\u0000xy\u0005\u008a\u0000\u0000y{\u0001\u0000\u0000\u0000zp\u0001"+
		"\u0000\u0000\u0000z{\u0001\u0000\u0000\u0000{|\u0001\u0000\u0000\u0000"+
		"|}\u0005\u009c\u0000\u0000}~\u0003\b\u0004\u0000~\u0080\u0005\u009d\u0000"+
		"\u0000\u007f\u0081\u0005\u0094\u0000\u0000\u0080\u007f\u0001\u0000\u0000"+
		"\u0000\u0080\u0081\u0001\u0000\u0000\u0000\u0081\u0007\u0001\u0000\u0000"+
		"\u0000\u0082\u0087\u0003\u0006\u0003\u0000\u0083\u0084\u0003\n\u0005\u0000"+
		"\u0084\u0085\u0005\u0094\u0000\u0000\u0085\u0087\u0001\u0000\u0000\u0000"+
		"\u0086\u0082\u0001\u0000\u0000\u0000\u0086\u0083\u0001\u0000\u0000\u0000"+
		"\u0087\u008a\u0001\u0000\u0000\u0000\u0088\u0086\u0001\u0000\u0000\u0000"+
		"\u0088\u0089\u0001\u0000\u0000\u0000\u0089\t\u0001\u0000\u0000\u0000\u008a"+
		"\u0088\u0001\u0000\u0000\u0000\u008b\u008d\u0003L&\u0000\u008c\u008e\u0005"+
		"y\u0000\u0000\u008d\u008c\u0001\u0000\u0000\u0000\u008d\u008e\u0001\u0000"+
		"\u0000\u0000\u008e\u008f\u0001\u0000\u0000\u0000\u008f\u0092\u0005\u0095"+
		"\u0000\u0000\u0090\u0093\u0003\f\u0006\u0000\u0091\u0093\u0003\u0006\u0003"+
		"\u0000\u0092\u0090\u0001\u0000\u0000\u0000\u0092\u0091\u0001\u0000\u0000"+
		"\u0000\u0093\u0096\u0001\u0000\u0000\u0000\u0094\u0095\u0005\u0087\u0000"+
		"\u0000\u0095\u0097\u0003>\u001f\u0000\u0096\u0094\u0001\u0000\u0000\u0000"+
		"\u0096\u0097\u0001\u0000\u0000\u0000\u0097\u000b\u0001\u0000\u0000\u0000"+
		"\u0098\u00a4\u0003\u000e\u0007\u0000\u0099\u009a\u0005\u008b\u0000\u0000"+
		"\u009a\u009f\u0003\f\u0006\u0000\u009b\u009c\u0005\u0093\u0000\u0000\u009c"+
		"\u009e\u0003\f\u0006\u0000\u009d\u009b\u0001\u0000\u0000\u0000\u009e\u00a1"+
		"\u0001\u0000\u0000\u0000\u009f\u009d\u0001\u0000\u0000\u0000\u009f\u00a0"+
		"\u0001\u0000\u0000\u0000\u00a0\u00a2\u0001\u0000\u0000\u0000\u00a1\u009f"+
		"\u0001\u0000\u0000\u0000\u00a2\u00a3\u0005\u008a\u0000\u0000\u00a3\u00a5"+
		"\u0001\u0000\u0000\u0000\u00a4\u0099\u0001\u0000\u0000\u0000\u00a4\u00a5"+
		"\u0001\u0000\u0000\u0000\u00a5\r\u0001\u0000\u0000\u0000\u00a6\u00ab\u0003"+
		"N\'\u0000\u00a7\u00ab\u0005\u000f\u0000\u0000\u00a8\u00ab\u0005\u0010"+
		"\u0000\u0000\u00a9\u00ab\u0003\u0010\b\u0000\u00aa\u00a6\u0001\u0000\u0000"+
		"\u0000\u00aa\u00a7\u0001\u0000\u0000\u0000\u00aa\u00a8\u0001\u0000\u0000"+
		"\u0000\u00aa\u00a9\u0001\u0000\u0000\u0000\u00ab\u000f\u0001\u0000\u0000"+
		"\u0000\u00ac\u00ad\u0003L&\u0000\u00ad\u0011\u0001\u0000\u0000\u0000\u00ae"+
		"\u00af\u0005\u0011\u0000\u0000\u00af\u00b0\u0003L&\u0000\u00b0\u00b9\u0005"+
		"\u00a0\u0000\u0000\u00b1\u00b6\u00038\u001c\u0000\u00b2\u00b3\u0005\u0093"+
		"\u0000\u0000\u00b3\u00b5\u00038\u001c\u0000\u00b4\u00b2\u0001\u0000\u0000"+
		"\u0000\u00b5\u00b8\u0001\u0000\u0000\u0000\u00b6\u00b4\u0001\u0000\u0000"+
		"\u0000\u00b6\u00b7\u0001\u0000\u0000\u0000\u00b7\u00ba\u0001\u0000\u0000"+
		"\u0000\u00b8\u00b6\u0001\u0000\u0000\u0000\u00b9\u00b1\u0001\u0000\u0000"+
		"\u0000\u00b9\u00ba\u0001\u0000\u0000\u0000\u00ba\u00bb\u0001\u0000\u0000"+
		"\u0000\u00bb\u00be\u0005\u00a1\u0000\u0000\u00bc\u00bf\u0003\u0014\n\u0000"+
		"\u00bd\u00bf\u0005`\u0000\u0000\u00be\u00bc\u0001\u0000\u0000\u0000\u00be"+
		"\u00bd\u0001\u0000\u0000\u0000\u00bf\u0013\u0001\u0000\u0000\u0000\u00c0"+
		"\u00c4\u0005q\u0000\u0000\u00c1\u00c3\u0003\u0016\u000b\u0000\u00c2\u00c1"+
		"\u0001\u0000\u0000\u0000\u00c3\u00c6\u0001\u0000\u0000\u0000\u00c4\u00c2"+
		"\u0001\u0000\u0000\u0000\u00c4\u00c5\u0001\u0000\u0000\u0000\u00c5\u00c7"+
		"\u0001\u0000\u0000\u0000\u00c6\u00c4\u0001\u0000\u0000\u0000\u00c7\u00c8"+
		"\u0005\u00a3\u0000\u0000\u00c8\u0015\u0001\u0000\u0000\u0000\u00c9\u00d2"+
		"\u0003\u0018\f\u0000\u00ca\u00cb\u0005\u00a4\u0000\u0000\u00cb\u00cc\u0003"+
		"\u001a\r\u0000\u00cc\u00cd\u0005\u00a6\u0000\u0000\u00cd\u00d2\u0001\u0000"+
		"\u0000\u0000\u00ce\u00d2\u0003\u001e\u000f\u0000\u00cf\u00d2\u0003&\u0013"+
		"\u0000\u00d0\u00d2\u0003(\u0014\u0000\u00d1\u00c9\u0001\u0000\u0000\u0000"+
		"\u00d1\u00ca\u0001\u0000\u0000\u0000\u00d1\u00ce\u0001\u0000\u0000\u0000"+
		"\u00d1\u00cf\u0001\u0000\u0000\u0000\u00d1\u00d0\u0001\u0000\u0000\u0000"+
		"\u00d2\u0017\u0001\u0000\u0000\u0000\u00d3\u00d4\u0005\u00a5\u0000\u0000"+
		"\u00d4\u0019\u0001\u0000\u0000\u0000\u00d5\u00d6\u0005\u00aa\u0000\u0000"+
		"\u00d6\u00d7\u0003\u001a\r\u0000\u00d7\u00d8\u0005\u00ab\u0000\u0000\u00d8"+
		"\u00de\u0001\u0000\u0000\u0000\u00d9\u00da\u0005\u00ad\u0000\u0000\u00da"+
		"\u00de\u0003\u001a\r\u0000\u00db\u00de\u00030\u0018\u0000\u00dc\u00de"+
		"\u0003\u001c\u000e\u0000\u00dd\u00d5\u0001\u0000\u0000\u0000\u00dd\u00d9"+
		"\u0001\u0000\u0000\u0000\u00dd\u00db\u0001\u0000\u0000\u0000\u00dd\u00dc"+
		"\u0001\u0000\u0000\u0000\u00de\u001b\u0001\u0000\u0000\u0000\u00df\u00e0"+
		"\u00036\u001b\u0000\u00e0\u00e2\u0005\u00aa\u0000\u0000\u00e1\u00e3\u0003"+
		"0\u0018\u0000\u00e2\u00e1\u0001\u0000\u0000\u0000\u00e2\u00e3\u0001\u0000"+
		"\u0000\u0000\u00e3\u00e8\u0001\u0000\u0000\u0000\u00e4\u00e5\u0005\u00a8"+
		"\u0000\u0000\u00e5\u00e7\u00030\u0018\u0000\u00e6\u00e4\u0001\u0000\u0000"+
		"\u0000\u00e7\u00ea\u0001\u0000\u0000\u0000\u00e8\u00e6\u0001\u0000\u0000"+
		"\u0000\u00e8\u00e9\u0001\u0000\u0000\u0000\u00e9\u00eb\u0001\u0000\u0000"+
		"\u0000\u00ea\u00e8\u0001\u0000\u0000\u0000\u00eb\u00ec\u0005\u00ab\u0000"+
		"\u0000\u00ec\u001d\u0001\u0000\u0000\u0000\u00ed\u00f1\u0003 \u0010\u0000"+
		"\u00ee\u00f0\u0003\"\u0011\u0000\u00ef\u00ee\u0001\u0000\u0000\u0000\u00f0"+
		"\u00f3\u0001\u0000\u0000\u0000\u00f1\u00ef\u0001\u0000\u0000\u0000\u00f1"+
		"\u00f2\u0001\u0000\u0000\u0000\u00f2\u00f5\u0001\u0000\u0000\u0000\u00f3"+
		"\u00f1\u0001\u0000\u0000\u0000\u00f4\u00f6\u0003$\u0012\u0000\u00f5\u00f4"+
		"\u0001\u0000\u0000\u0000\u00f5\u00f6\u0001\u0000\u0000\u0000\u00f6\u00f7"+
		"\u0001\u0000\u0000\u0000\u00f7\u00f8\u0005\u00a4\u0000\u0000\u00f8\u00f9"+
		"\u0005\u00b8\u0000\u0000\u00f9\u00fa\u0005\u00a6\u0000\u0000\u00fa\u001f"+
		"\u0001\u0000\u0000\u0000\u00fb\u00fc\u0005\u00a4\u0000\u0000\u00fc\u00fd"+
		"\u0005\u00b7\u0000\u0000\u00fd\u00fe\u0003\u001a\r\u0000\u00fe\u00ff\u0005"+
		"\u00a6\u0000\u0000\u00ff\u0103\u0001\u0000\u0000\u0000\u0100\u0102\u0003"+
		"\u0016\u000b\u0000\u0101\u0100\u0001\u0000\u0000\u0000\u0102\u0105\u0001"+
		"\u0000\u0000\u0000\u0103\u0101\u0001\u0000\u0000\u0000\u0103\u0104\u0001"+
		"\u0000\u0000\u0000\u0104!\u0001\u0000\u0000\u0000\u0105\u0103\u0001\u0000"+
		"\u0000\u0000\u0106\u0107\u0005\u00a4\u0000\u0000\u0107\u0108\u0005\u00ba"+
		"\u0000\u0000\u0108\u0109\u0003\u001a\r\u0000\u0109\u010a\u0005\u00a6\u0000"+
		"\u0000\u010a\u010e\u0001\u0000\u0000\u0000\u010b\u010d\u0003\u0016\u000b"+
		"\u0000\u010c\u010b\u0001\u0000\u0000\u0000\u010d\u0110\u0001\u0000\u0000"+
		"\u0000\u010e\u010c\u0001\u0000\u0000\u0000\u010e\u010f\u0001\u0000\u0000"+
		"\u0000\u010f#\u0001\u0000\u0000\u0000\u0110\u010e\u0001\u0000\u0000\u0000"+
		"\u0111\u0112\u0005\u00a4\u0000\u0000\u0112\u0113\u0005\u00b9\u0000\u0000"+
		"\u0113\u0117\u0005\u00a6\u0000\u0000\u0114\u0116\u0003\u0016\u000b\u0000"+
		"\u0115\u0114\u0001\u0000\u0000\u0000\u0116\u0119\u0001\u0000\u0000\u0000"+
		"\u0117\u0115\u0001\u0000\u0000\u0000\u0117\u0118\u0001\u0000\u0000\u0000"+
		"\u0118%\u0001\u0000\u0000\u0000\u0119\u0117\u0001\u0000\u0000\u0000\u011a"+
		"\u011b\u0005\u00a4\u0000\u0000\u011b\u011c\u0005\u00ae\u0000\u0000\u011c"+
		"\u011d\u0003.\u0017\u0000\u011d\u011e\u0005\u00b6\u0000\u0000\u011e\u011f"+
		"\u00030\u0018\u0000\u011f\u0120\u0005\u00a6\u0000\u0000\u0120\u0124\u0001"+
		"\u0000\u0000\u0000\u0121\u0123\u0003\u0016\u000b\u0000\u0122\u0121\u0001"+
		"\u0000\u0000\u0000\u0123\u0126\u0001\u0000\u0000\u0000\u0124\u0122\u0001"+
		"\u0000\u0000\u0000\u0124\u0125\u0001\u0000\u0000\u0000\u0125\u0127\u0001"+
		"\u0000\u0000\u0000\u0126\u0124\u0001\u0000\u0000\u0000\u0127\u0128\u0005"+
		"\u00a4\u0000\u0000\u0128\u0129\u0005\u00af\u0000\u0000\u0129\u012a\u0005"+
		"\u00a6\u0000\u0000\u012a\'\u0001\u0000\u0000\u0000\u012b\u012c\u0005\u00a4"+
		"\u0000\u0000\u012c\u012d\u0005\u00b0\u0000\u0000\u012d\u012e\u00030\u0018"+
		"\u0000\u012e\u012f\u0005\u00a6\u0000\u0000\u012f\u0131\u0001\u0000\u0000"+
		"\u0000\u0130\u0132\u0005\u00a5\u0000\u0000\u0131\u0130\u0001\u0000\u0000"+
		"\u0000\u0131\u0132\u0001\u0000\u0000\u0000\u0132\u013c\u0001\u0000\u0000"+
		"\u0000\u0133\u0135\u0005\u00a5\u0000\u0000\u0134\u0133\u0001\u0000\u0000"+
		"\u0000\u0134\u0135\u0001\u0000\u0000\u0000\u0135\u0136\u0001\u0000\u0000"+
		"\u0000\u0136\u0138\u0003*\u0015\u0000\u0137\u0139\u0005\u00a5\u0000\u0000"+
		"\u0138\u0137\u0001\u0000\u0000\u0000\u0138\u0139\u0001\u0000\u0000\u0000"+
		"\u0139\u013b\u0001\u0000\u0000\u0000\u013a\u0134\u0001\u0000\u0000\u0000"+
		"\u013b\u013e\u0001\u0000\u0000\u0000\u013c\u013a\u0001\u0000\u0000\u0000"+
		"\u013c\u013d\u0001\u0000\u0000\u0000\u013d\u0146\u0001\u0000\u0000\u0000"+
		"\u013e\u013c\u0001\u0000\u0000\u0000\u013f\u0141\u0005\u00a5\u0000\u0000"+
		"\u0140\u013f\u0001\u0000\u0000\u0000\u0140\u0141\u0001\u0000\u0000\u0000"+
		"\u0141\u0142\u0001\u0000\u0000\u0000\u0142\u0144\u0003,\u0016\u0000\u0143"+
		"\u0145\u0005\u00a5\u0000\u0000\u0144\u0143\u0001\u0000\u0000\u0000\u0144"+
		"\u0145\u0001\u0000\u0000\u0000\u0145\u0147\u0001\u0000\u0000\u0000\u0146"+
		"\u0140\u0001\u0000\u0000\u0000\u0146\u0147\u0001\u0000\u0000\u0000\u0147"+
		"\u0148\u0001\u0000\u0000\u0000\u0148\u0149\u0005\u00a4\u0000\u0000\u0149"+
		"\u014a\u0005\u00b1\u0000\u0000\u014a\u014b\u0005\u00a6\u0000\u0000\u014b"+
		")\u0001\u0000\u0000\u0000\u014c\u014e\u0005\u00a5\u0000\u0000\u014d\u014c"+
		"\u0001\u0000\u0000\u0000\u014d\u014e\u0001\u0000\u0000\u0000\u014e\u014f"+
		"\u0001\u0000\u0000\u0000\u014f\u0150\u0005\u00a4\u0000\u0000\u0150\u0151"+
		"\u0005\u00b2\u0000\u0000\u0151\u0152\u00030\u0018\u0000\u0152\u0153\u0005"+
		"\u00a6\u0000\u0000\u0153\u0157\u0001\u0000\u0000\u0000\u0154\u0156\u0003"+
		"\u0016\u000b\u0000\u0155\u0154\u0001\u0000\u0000\u0000\u0156\u0159\u0001"+
		"\u0000\u0000\u0000\u0157\u0155\u0001\u0000\u0000\u0000\u0157\u0158\u0001"+
		"\u0000\u0000\u0000\u0158\u015a\u0001\u0000\u0000\u0000\u0159\u0157\u0001"+
		"\u0000\u0000\u0000\u015a\u015b\u0005\u00a4\u0000\u0000\u015b\u015c\u0005"+
		"\u00b3\u0000\u0000\u015c\u015d\u0005\u00a6\u0000\u0000\u015d+\u0001\u0000"+
		"\u0000\u0000\u015e\u0160\u0005\u00a5\u0000\u0000\u015f\u015e\u0001\u0000"+
		"\u0000\u0000\u015f\u0160\u0001\u0000\u0000\u0000\u0160\u0161\u0001\u0000"+
		"\u0000\u0000\u0161\u0162\u0005\u00a4\u0000\u0000\u0162\u0163\u0005\u00b4"+
		"\u0000\u0000\u0163\u0164\u0005\u00a6\u0000\u0000\u0164\u0168\u0001\u0000"+
		"\u0000\u0000\u0165\u0167\u0003\u0016\u000b\u0000\u0166\u0165\u0001\u0000"+
		"\u0000\u0000\u0167\u016a\u0001\u0000\u0000\u0000\u0168\u0166\u0001\u0000"+
		"\u0000\u0000\u0168\u0169\u0001\u0000\u0000\u0000\u0169\u016b\u0001\u0000"+
		"\u0000\u0000\u016a\u0168\u0001\u0000\u0000\u0000\u016b\u016c\u0005\u00a4"+
		"\u0000\u0000\u016c\u016d\u0005\u00b5\u0000\u0000\u016d\u016e\u0005\u00a6"+
		"\u0000\u0000\u016e-\u0001\u0000\u0000\u0000\u016f\u0172\u00034\u001a\u0000"+
		"\u0170\u0171\u0005\u00a8\u0000\u0000\u0171\u0173\u00034\u001a\u0000\u0172"+
		"\u0170\u0001\u0000\u0000\u0000\u0172\u0173\u0001\u0000\u0000\u0000\u0173"+
		"/\u0001\u0000\u0000\u0000\u0174\u0179\u00032\u0019\u0000\u0175\u0176\u0005"+
		"\u00a9\u0000\u0000\u0176\u0178\u00032\u0019\u0000\u0177\u0175\u0001\u0000"+
		"\u0000\u0000\u0178\u017b\u0001\u0000\u0000\u0000\u0179\u0177\u0001\u0000"+
		"\u0000\u0000\u0179\u017a\u0001\u0000\u0000\u0000\u017a1\u0001\u0000\u0000"+
		"\u0000\u017b\u0179\u0001\u0000\u0000\u0000\u017c\u017d\u00036\u001b\u0000"+
		"\u017d3\u0001\u0000\u0000\u0000\u017e\u017f\u00036\u001b\u0000\u017f5"+
		"\u0001\u0000\u0000\u0000\u0180\u0181\u0005\u00bb\u0000\u0000\u01817\u0001"+
		"\u0000\u0000\u0000\u0182\u0183\u0003L&\u0000\u0183\u0184\u0005\u0095\u0000"+
		"\u0000\u0184\u0185\u0003\f\u0006\u0000\u01859\u0001\u0000\u0000\u0000"+
		"\u0186\u0187\u0005\r\u0000\u0000\u0187\u0188\u0003<\u001e\u0000\u0188"+
		"\u0189\u0005\u0094\u0000\u0000\u0189;\u0001\u0000\u0000\u0000\u018a\u018c"+
		"\u0005\u0096\u0000\u0000\u018b\u018a\u0001\u0000\u0000\u0000\u018b\u018c"+
		"\u0001\u0000\u0000\u0000\u018c\u018d\u0001\u0000\u0000\u0000\u018d\u0192"+
		"\u0003L&\u0000\u018e\u018f\u0005\u0096\u0000\u0000\u018f\u0191\u0003L"+
		"&\u0000\u0190\u018e\u0001\u0000\u0000\u0000\u0191\u0194\u0001\u0000\u0000"+
		"\u0000\u0192\u0190\u0001\u0000\u0000\u0000\u0192\u0193\u0001\u0000\u0000"+
		"\u0000\u0193=\u0001\u0000\u0000\u0000\u0194\u0192\u0001\u0000\u0000\u0000"+
		"\u0195\u019b\u0003@ \u0000\u0196\u019b\u0003B!\u0000\u0197\u019b\u0003"+
		"D\"\u0000\u0198\u019b\u0003F#\u0000\u0199\u019b\u0003H$\u0000\u019a\u0195"+
		"\u0001\u0000\u0000\u0000\u019a\u0196\u0001\u0000\u0000\u0000\u019a\u0197"+
		"\u0001\u0000\u0000\u0000\u019a\u0198\u0001\u0000\u0000\u0000\u019a\u0199"+
		"\u0001\u0000\u0000\u0000\u019b?\u0001\u0000\u0000\u0000\u019c\u019d\u0007"+
		"\u0001\u0000\u0000\u019dA\u0001\u0000\u0000\u0000\u019e\u019f\u0005^\u0000"+
		"\u0000\u019fC\u0001\u0000\u0000\u0000\u01a0\u01a1\u0007\u0002\u0000\u0000"+
		"\u01a1E\u0001\u0000\u0000\u0000\u01a2\u01a4\u0005m\u0000\u0000\u01a3\u01a5"+
		"\u0007\u0003\u0000\u0000\u01a4\u01a3\u0001\u0000\u0000\u0000\u01a4\u01a5"+
		"\u0001\u0000\u0000\u0000\u01a5G\u0001\u0000\u0000\u0000\u01a6\u01a8\u0003"+
		"J%\u0000\u01a7\u01a9\u0007\u0004\u0000\u0000\u01a8\u01a7\u0001\u0000\u0000"+
		"\u0000\u01a8\u01a9\u0001\u0000\u0000\u0000\u01a9I\u0001\u0000\u0000\u0000"+
		"\u01aa\u01ab\u0007\u0005\u0000\u0000\u01abK\u0001\u0000\u0000\u0000\u01ac"+
		"\u01b0\u0005U\u0000\u0000\u01ad\u01ae\u0005r\u0000\u0000\u01ae\u01b0\u0005"+
		"U\u0000\u0000\u01af\u01ac\u0001\u0000\u0000\u0000\u01af\u01ad\u0001\u0000"+
		"\u0000\u0000\u01b0M\u0001\u0000\u0000\u0000\u01b1\u01b2\u0007\u0006\u0000"+
		"\u0000\u01b2O\u0001\u0000\u0000\u0000\u01b3\u01b4\u0007\u0007\u0000\u0000"+
		"\u01b4Q\u0001\u0000\u0000\u00000W\\^nvz\u0080\u0086\u0088\u008d\u0092"+
		"\u0096\u009f\u00a4\u00aa\u00b6\u00b9\u00be\u00c4\u00d1\u00dd\u00e2\u00e8"+
		"\u00f1\u00f5\u0103\u010e\u0117\u0124\u0131\u0134\u0138\u013c\u0140\u0144"+
		"\u0146\u014d\u0157\u015f\u0168\u0172\u0179\u018b\u0192\u019a\u01a4\u01a8"+
		"\u01af";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}