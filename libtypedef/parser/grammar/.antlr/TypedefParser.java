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
		CHAR_LITERAL=94, STRING_LITERAL=95, TEMPLATE_LITERAL=96, RAW_TEMPLATE_LITERAL=97, 
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
		RULE_compilationUnit = 0, RULE_typedefVersionDeclaration = 1, RULE_moduleDeclaration = 2, 
		RULE_typeDefinition = 3, RULE_fieldBlock = 4, RULE_fieldDefinition = 5, 
		RULE_typeAnnotation = 6, RULE_typeArgument = 7, RULE_typeIdentifier = 8, 
		RULE_userType = 9, RULE_templateDefinition = 10, RULE_templateBlock = 11, 
		RULE_functionParameter = 12, RULE_parameterType = 13, RULE_useDeclaration = 14, 
		RULE_symbolPath = 15, RULE_primitiveLiteral = 16, RULE_boolLiteral = 17, 
		RULE_charLiteral = 18, RULE_stringLiteral = 19, RULE_floatLiteral = 20, 
		RULE_integerLiteral = 21, RULE_intDigits = 22, RULE_identifier = 23, RULE_primitiveTypeIdentifier = 24, 
		RULE_keyword = 25;
	private static String[] makeRuleNames() {
		return new String[] {
			"compilationUnit", "typedefVersionDeclaration", "moduleDeclaration", 
			"typeDefinition", "fieldBlock", "fieldDefinition", "typeAnnotation", 
			"typeArgument", "typeIdentifier", "userType", "templateDefinition", "templateBlock", 
			"functionParameter", "parameterType", "useDeclaration", "symbolPath", 
			"primitiveLiteral", "boolLiteral", "charLiteral", "stringLiteral", "floatLiteral", 
			"integerLiteral", "intDigits", "identifier", "primitiveTypeIdentifier", 
			"keyword"
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
			"TEMPLATE_LITERAL", "RAW_TEMPLATE_LITERAL", "RAW_STRING_LITERAL", "DEC_DIGITS", 
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
			setState(52);
			typedefVersionDeclaration();
			setState(53);
			moduleDeclaration();
			setState(57);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==KW_USE) {
				{
				{
				setState(54);
				useDeclaration();
				}
				}
				setState(59);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(63);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==KW_STRUCT || _la==KW_VARIANT) {
				{
				{
				setState(60);
				typeDefinition();
				}
				}
				setState(65);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(66);
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
			setState(68);
			match(KW_TYPEDEF);
			setState(69);
			match(EQ);
			setState(70);
			identifier();
			setState(71);
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
			setState(73);
			match(KW_MODULE);
			setState(74);
			symbolPath();
			setState(75);
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
			setState(77);
			_la = _input.LA(1);
			if ( !(_la==KW_STRUCT || _la==KW_VARIANT) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(79);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE) {
				{
				setState(78);
				((TypeDefinitionContext)_localctx).type_identifier = identifier();
				}
			}

			setState(91);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LT) {
				{
				setState(81);
				match(LT);
				setState(85); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(82);
					((TypeDefinitionContext)_localctx).type_parameter = identifier();
					setState(83);
					match(COMMA);
					}
					}
					setState(87); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE );
				setState(89);
				match(GT);
				}
			}

			setState(93);
			match(LBRACE);
			setState(94);
			fieldBlock();
			setState(95);
			match(RBRACE);
			setState(97);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				{
				setState(96);
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
			setState(105);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==KW_STRUCT || _la==KW_VARIANT || _la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE) {
				{
				setState(103);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case KW_STRUCT:
				case KW_VARIANT:
					{
					setState(99);
					typeDefinition();
					}
					break;
				case NON_KEYWORD_IDENTIFIER:
				case RAW_ESCAPE:
					{
					{
					setState(100);
					fieldDefinition();
					setState(101);
					match(SEMI);
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(107);
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
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public PrimitiveLiteralContext primitiveLiteral() {
			return getRuleContext(PrimitiveLiteralContext.class,0);
		}
		public TypeAnnotationContext typeAnnotation() {
			return getRuleContext(TypeAnnotationContext.class,0);
		}
		public TypeDefinitionContext typeDefinition() {
			return getRuleContext(TypeDefinitionContext.class,0);
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
			setState(108);
			((FieldDefinitionContext)_localctx).field_identifier = identifier();
			setState(114);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COLON) {
				{
				setState(109);
				match(COLON);
				setState(112);
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
					setState(110);
					typeAnnotation();
					}
					break;
				case KW_STRUCT:
				case KW_VARIANT:
					{
					setState(111);
					typeDefinition();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
			}

			setState(118);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==EQ) {
				{
				setState(116);
				match(EQ);
				setState(117);
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
			setState(120);
			typeIdentifier();
			setState(132);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==LT) {
				{
				setState(121);
				match(LT);
				setState(122);
				typeArgument();
				setState(127);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(123);
					match(COMMA);
					setState(124);
					typeArgument();
					}
					}
					setState(129);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(130);
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
			setState(134);
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
			setState(140);
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
				setState(136);
				primitiveTypeIdentifier();
				}
				break;
			case KW_VECTOR:
				enterOuterAlt(_localctx, 2);
				{
				setState(137);
				match(KW_VECTOR);
				}
				break;
			case KW_MAP:
				enterOuterAlt(_localctx, 3);
				{
				setState(138);
				match(KW_MAP);
				}
				break;
			case NON_KEYWORD_IDENTIFIER:
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 4);
				{
				setState(139);
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
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(142);
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

	public static class TemplateDefinitionContext extends ParserRuleContext {
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
		enterRule(_localctx, 20, RULE_templateDefinition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(144);
			match(KW_TEMPLATE);
			setState(145);
			identifier();
			setState(146);
			match(LPAREN);
			{
			setState(147);
			functionParameter();
			setState(152);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(148);
				match(COMMA);
				setState(149);
				functionParameter();
				}
				}
				setState(154);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
			setState(155);
			match(RPAREN);
			setState(158);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==FATARROW) {
				{
				setState(156);
				match(FATARROW);
				setState(157);
				match(KW_STRING);
				}
			}

			setState(160);
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
		public std::string template_block;
		public TerminalNode TEMPLATE_LITERAL() { return getToken(TypedefParser.TEMPLATE_LITERAL, 0); }
		public TerminalNode RAW_TEMPLATE_LITERAL() { return getToken(TypedefParser.RAW_TEMPLATE_LITERAL, 0); }
		public TemplateBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_templateBlock; }
	}

	public final TemplateBlockContext templateBlock() throws RecognitionException {
		TemplateBlockContext _localctx = new TemplateBlockContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_templateBlock);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(162);
			_la = _input.LA(1);
			if ( !(_la==TEMPLATE_LITERAL || _la==RAW_TEMPLATE_LITERAL) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
			_ctx.stop = _input.LT(-1);
			td::SetTemplateBlock(_localctx.template_block, _localctx);
		}
		catch (RecognitionException re) {
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
		public std::unique_ptr<td::FunctionParameter> func_param;
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public ParameterTypeContext parameterType() {
			return getRuleContext(ParameterTypeContext.class,0);
		}
		public FunctionParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionParameter; }
	}

	public final FunctionParameterContext functionParameter() throws RecognitionException {
		FunctionParameterContext _localctx = new FunctionParameterContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_functionParameter);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(164);
			identifier();
			setState(165);
			match(COLON);
			setState(166);
			parameterType();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParameterTypeContext extends ParserRuleContext {
		public PrimitiveTypeIdentifierContext primitiveTypeIdentifier() {
			return getRuleContext(PrimitiveTypeIdentifierContext.class,0);
		}
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public ParameterTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterType; }
	}

	public final ParameterTypeContext parameterType() throws RecognitionException {
		ParameterTypeContext _localctx = new ParameterTypeContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_parameterType);
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
				setState(168);
				primitiveTypeIdentifier();
				}
				break;
			case NON_KEYWORD_IDENTIFIER:
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(169);
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
		enterRule(_localctx, 28, RULE_useDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(172);
			match(KW_USE);
			setState(173);
			symbolPath();
			setState(174);
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
		enterRule(_localctx, 30, RULE_symbolPath);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(177);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PATHSEP) {
				{
				setState(176);
				((SymbolPathContext)_localctx).leading_pathsep = match(PATHSEP);
				}
			}

			setState(179);
			identifier();
			setState(184);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==PATHSEP) {
				{
				{
				setState(180);
				match(PATHSEP);
				setState(181);
				identifier();
				}
				}
				setState(186);
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
		enterRule(_localctx, 32, RULE_primitiveLiteral);
		try {
			setState(192);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case KW_FALSE:
			case KW_TRUE:
				enterOuterAlt(_localctx, 1);
				{
				setState(187);
				boolLiteral();
				}
				break;
			case CHAR_LITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(188);
				charLiteral();
				}
				break;
			case STRING_LITERAL:
			case RAW_STRING_LITERAL:
				enterOuterAlt(_localctx, 3);
				{
				setState(189);
				stringLiteral();
				}
				break;
			case FLOAT_LITERAL:
				enterOuterAlt(_localctx, 4);
				{
				setState(190);
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
				setState(191);
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
		enterRule(_localctx, 34, RULE_boolLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(194);
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
		enterRule(_localctx, 36, RULE_charLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(196);
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
		enterRule(_localctx, 38, RULE_stringLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(198);
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
		enterRule(_localctx, 40, RULE_floatLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(200);
			match(FLOAT_LITERAL);
			setState(202);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==KW_F32 || _la==KW_F64) {
				{
				setState(201);
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
		enterRule(_localctx, 42, RULE_integerLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(204);
			intDigits();
			}
			setState(206);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (((((_la - 77)) & ~0x3f) == 0 && ((1L << (_la - 77)) & ((1L << (KW_U8 - 77)) | (1L << (KW_U16 - 77)) | (1L << (KW_U32 - 77)) | (1L << (KW_U64 - 77)) | (1L << (KW_I8 - 77)) | (1L << (KW_I16 - 77)) | (1L << (KW_I32 - 77)) | (1L << (KW_I64 - 77)))) != 0)) {
				{
				setState(205);
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
		enterRule(_localctx, 44, RULE_intDigits);
		int _la;
		try {
			setState(218);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DEC_DIGITS:
			case DEC_DIGITS_UNDERSCORE:
			case MINUS:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(209);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(208);
					match(MINUS);
					}
				}

				setState(211);
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
				setState(212);
				match(HEX_PREFIX);
				setState(213);
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
				setState(214);
				match(OCT_PREFIX);
				setState(215);
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
				setState(216);
				match(BIN_PREFIX);
				setState(217);
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
		enterRule(_localctx, 46, RULE_identifier);
		try {
			setState(223);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NON_KEYWORD_IDENTIFIER:
				enterOuterAlt(_localctx, 1);
				{
				setState(220);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(221);
				match(RAW_ESCAPE);
				setState(222);
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
		enterRule(_localctx, 48, RULE_primitiveTypeIdentifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(225);
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
		enterRule(_localctx, 50, RULE_keyword);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(227);
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u00a5\u00e8\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\3\2\3\2\3\2\7\2:\n\2\f\2\16\2=\13\2\3\2\7\2@\n\2"+
		"\f\2\16\2C\13\2\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\5\3\5\5"+
		"\5R\n\5\3\5\3\5\3\5\3\5\6\5X\n\5\r\5\16\5Y\3\5\3\5\5\5^\n\5\3\5\3\5\3"+
		"\5\3\5\5\5d\n\5\3\6\3\6\3\6\3\6\7\6j\n\6\f\6\16\6m\13\6\3\7\3\7\3\7\3"+
		"\7\5\7s\n\7\5\7u\n\7\3\7\3\7\5\7y\n\7\3\b\3\b\3\b\3\b\3\b\7\b\u0080\n"+
		"\b\f\b\16\b\u0083\13\b\3\b\3\b\5\b\u0087\n\b\3\t\3\t\3\n\3\n\3\n\3\n\5"+
		"\n\u008f\n\n\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\f\7\f\u0099\n\f\f\f\16\f"+
		"\u009c\13\f\3\f\3\f\3\f\5\f\u00a1\n\f\3\f\3\f\3\r\3\r\3\16\3\16\3\16\3"+
		"\16\3\17\3\17\5\17\u00ad\n\17\3\20\3\20\3\20\3\20\3\21\5\21\u00b4\n\21"+
		"\3\21\3\21\3\21\7\21\u00b9\n\21\f\21\16\21\u00bc\13\21\3\22\3\22\3\22"+
		"\3\22\3\22\5\22\u00c3\n\22\3\23\3\23\3\24\3\24\3\25\3\25\3\26\3\26\5\26"+
		"\u00cd\n\26\3\27\3\27\5\27\u00d1\n\27\3\30\5\30\u00d4\n\30\3\30\3\30\3"+
		"\30\3\30\3\30\3\30\3\30\5\30\u00dd\n\30\3\31\3\31\3\31\5\31\u00e2\n\31"+
		"\3\32\3\32\3\33\3\33\3\33\2\2\34\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36"+
		" \"$&(*,.\60\62\64\2\16\4\2\13\13\20\20\3\2bc\4\2\6\6\f\f\4\2aadd\3\2"+
		"MN\3\2OV\3\2ef\3\2gh\3\2ij\3\2kl\3\2JV\5\2\4\b\n\22\24I\2\u00ed\2\66\3"+
		"\2\2\2\4F\3\2\2\2\6K\3\2\2\2\bO\3\2\2\2\nk\3\2\2\2\fn\3\2\2\2\16z\3\2"+
		"\2\2\20\u0088\3\2\2\2\22\u008e\3\2\2\2\24\u0090\3\2\2\2\26\u0092\3\2\2"+
		"\2\30\u00a4\3\2\2\2\32\u00a6\3\2\2\2\34\u00ac\3\2\2\2\36\u00ae\3\2\2\2"+
		" \u00b3\3\2\2\2\"\u00c2\3\2\2\2$\u00c4\3\2\2\2&\u00c6\3\2\2\2(\u00c8\3"+
		"\2\2\2*\u00ca\3\2\2\2,\u00ce\3\2\2\2.\u00dc\3\2\2\2\60\u00e1\3\2\2\2\62"+
		"\u00e3\3\2\2\2\64\u00e5\3\2\2\2\66\67\5\4\3\2\67;\5\6\4\28:\5\36\20\2"+
		"98\3\2\2\2:=\3\2\2\2;9\3\2\2\2;<\3\2\2\2<A\3\2\2\2=;\3\2\2\2>@\5\b\5\2"+
		"?>\3\2\2\2@C\3\2\2\2A?\3\2\2\2AB\3\2\2\2BD\3\2\2\2CA\3\2\2\2DE\7\2\2\3"+
		"E\3\3\2\2\2FG\7\16\2\2GH\7\u008a\2\2HI\5\60\31\2IJ\7\u0097\2\2J\5\3\2"+
		"\2\2KL\7\n\2\2LM\5 \21\2MN\7\u0097\2\2N\7\3\2\2\2OQ\t\2\2\2PR\5\60\31"+
		"\2QP\3\2\2\2QR\3\2\2\2R]\3\2\2\2SW\7\u008e\2\2TU\5\60\31\2UV\7\u0096\2"+
		"\2VX\3\2\2\2WT\3\2\2\2XY\3\2\2\2YW\3\2\2\2YZ\3\2\2\2Z[\3\2\2\2[\\\7\u008d"+
		"\2\2\\^\3\2\2\2]S\3\2\2\2]^\3\2\2\2^_\3\2\2\2_`\7\u009f\2\2`a\5\n\6\2"+
		"ac\7\u00a0\2\2bd\7\u0097\2\2cb\3\2\2\2cd\3\2\2\2d\t\3\2\2\2ej\5\b\5\2"+
		"fg\5\f\7\2gh\7\u0097\2\2hj\3\2\2\2ie\3\2\2\2if\3\2\2\2jm\3\2\2\2ki\3\2"+
		"\2\2kl\3\2\2\2l\13\3\2\2\2mk\3\2\2\2nt\5\60\31\2or\7\u0098\2\2ps\5\16"+
		"\b\2qs\5\b\5\2rp\3\2\2\2rq\3\2\2\2su\3\2\2\2to\3\2\2\2tu\3\2\2\2ux\3\2"+
		"\2\2vw\7\u008a\2\2wy\5\"\22\2xv\3\2\2\2xy\3\2\2\2y\r\3\2\2\2z\u0086\5"+
		"\22\n\2{|\7\u008e\2\2|\u0081\5\20\t\2}~\7\u0096\2\2~\u0080\5\20\t\2\177"+
		"}\3\2\2\2\u0080\u0083\3\2\2\2\u0081\177\3\2\2\2\u0081\u0082\3\2\2\2\u0082"+
		"\u0084\3\2\2\2\u0083\u0081\3\2\2\2\u0084\u0085\7\u008d\2\2\u0085\u0087"+
		"\3\2\2\2\u0086{\3\2\2\2\u0086\u0087\3\2\2\2\u0087\17\3\2\2\2\u0088\u0089"+
		"\5\22\n\2\u0089\21\3\2\2\2\u008a\u008f\5\62\32\2\u008b\u008f\7\21\2\2"+
		"\u008c\u008f\7\22\2\2\u008d\u008f\5\24\13\2\u008e\u008a\3\2\2\2\u008e"+
		"\u008b\3\2\2\2\u008e\u008c\3\2\2\2\u008e\u008d\3\2\2\2\u008f\23\3\2\2"+
		"\2\u0090\u0091\5\60\31\2\u0091\25\3\2\2\2\u0092\u0093\7\23\2\2\u0093\u0094"+
		"\5\60\31\2\u0094\u0095\7\u00a3\2\2\u0095\u009a\5\32\16\2\u0096\u0097\7"+
		"\u0096\2\2\u0097\u0099\5\32\16\2\u0098\u0096\3\2\2\2\u0099\u009c\3\2\2"+
		"\2\u009a\u0098\3\2\2\2\u009a\u009b\3\2\2\2\u009b\u009d\3\2\2\2\u009c\u009a"+
		"\3\2\2\2\u009d\u00a0\7\u00a4\2\2\u009e\u009f\7\u009b\2\2\u009f\u00a1\7"+
		"L\2\2\u00a0\u009e\3\2\2\2\u00a0\u00a1\3\2\2\2\u00a1\u00a2\3\2\2\2\u00a2"+
		"\u00a3\5\30\r\2\u00a3\27\3\2\2\2\u00a4\u00a5\t\3\2\2\u00a5\31\3\2\2\2"+
		"\u00a6\u00a7\5\60\31\2\u00a7\u00a8\7\u0098\2\2\u00a8\u00a9\5\34\17\2\u00a9"+
		"\33\3\2\2\2\u00aa\u00ad\5\62\32\2\u00ab\u00ad\5\60\31\2\u00ac\u00aa\3"+
		"\2\2\2\u00ac\u00ab\3\2\2\2\u00ad\35\3\2\2\2\u00ae\u00af\7\17\2\2\u00af"+
		"\u00b0\5 \21\2\u00b0\u00b1\7\u0097\2\2\u00b1\37\3\2\2\2\u00b2\u00b4\7"+
		"\u0099\2\2\u00b3\u00b2\3\2\2\2\u00b3\u00b4\3\2\2\2\u00b4\u00b5\3\2\2\2"+
		"\u00b5\u00ba\5\60\31\2\u00b6\u00b7\7\u0099\2\2\u00b7\u00b9\5\60\31\2\u00b8"+
		"\u00b6\3\2\2\2\u00b9\u00bc\3\2\2\2\u00ba\u00b8\3\2\2\2\u00ba\u00bb\3\2"+
		"\2\2\u00bb!\3\2\2\2\u00bc\u00ba\3\2\2\2\u00bd\u00c3\5$\23\2\u00be\u00c3"+
		"\5&\24\2\u00bf\u00c3\5(\25\2\u00c0\u00c3\5*\26\2\u00c1\u00c3\5,\27\2\u00c2"+
		"\u00bd\3\2\2\2\u00c2\u00be\3\2\2\2\u00c2\u00bf\3\2\2\2\u00c2\u00c0\3\2"+
		"\2\2\u00c2\u00c1\3\2\2\2\u00c3#\3\2\2\2\u00c4\u00c5\t\4\2\2\u00c5%\3\2"+
		"\2\2\u00c6\u00c7\7`\2\2\u00c7\'\3\2\2\2\u00c8\u00c9\t\5\2\2\u00c9)\3\2"+
		"\2\2\u00ca\u00cc\7m\2\2\u00cb\u00cd\t\6\2\2\u00cc\u00cb\3\2\2\2\u00cc"+
		"\u00cd\3\2\2\2\u00cd+\3\2\2\2\u00ce\u00d0\5.\30\2\u00cf\u00d1\t\7\2\2"+
		"\u00d0\u00cf\3\2\2\2\u00d0\u00d1\3\2\2\2\u00d1-\3\2\2\2\u00d2\u00d4\7"+
		"v\2\2\u00d3\u00d2\3\2\2\2\u00d3\u00d4\3\2\2\2\u00d4\u00d5\3\2\2\2\u00d5"+
		"\u00dd\t\b\2\2\u00d6\u00d7\7q\2\2\u00d7\u00dd\t\t\2\2\u00d8\u00d9\7r\2"+
		"\2\u00d9\u00dd\t\n\2\2\u00da\u00db\7s\2\2\u00db\u00dd\t\13\2\2\u00dc\u00d3"+
		"\3\2\2\2\u00dc\u00d6\3\2\2\2\u00dc\u00d8\3\2\2\2\u00dc\u00da\3\2\2\2\u00dd"+
		"/\3\2\2\2\u00de\u00e2\7W\2\2\u00df\u00e0\7t\2\2\u00e0\u00e2\7W\2\2\u00e1"+
		"\u00de\3\2\2\2\u00e1\u00df\3\2\2\2\u00e2\61\3\2\2\2\u00e3\u00e4\t\f\2"+
		"\2\u00e4\63\3\2\2\2\u00e5\u00e6\t\r\2\2\u00e6\65\3\2\2\2\33;AQY]cikrt"+
		"x\u0081\u0086\u008e\u009a\u00a0\u00ac\u00b3\u00ba\u00c2\u00cc\u00d0\u00d3"+
		"\u00dc\u00e1";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}