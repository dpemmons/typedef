// Generated from /home/dpemmons/src/typedef/src/lib/grammar/TypedefParser.g4 by ANTLR 4.9.2

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
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
		KW_VARIANT=14, KW_VECTOR=15, KW_AND=16, KW_IN=17, KW_LET=18, KW_NOT=19, 
		KW_OR=20, KW_SIZEOF=21, KW_THIS=22, KW_TRAIT=23, KW_WHERE=24, KW_XOR=25, 
		KW_BREAK=26, KW_CONTINUE=27, KW_DEFAULT=28, KW_DO=29, KW_ELSE=30, KW_FOR=31, 
		KW_GOTO=32, KW_IF=33, KW_LOOP=34, KW_MATCH=35, KW_MOVE=36, KW_RETURN=37, 
		KW_TRY=38, KW_WHILE=39, KW_YIELD=40, KW_ABSTRACT=41, KW_AUTO=42, KW_CONST=43, 
		KW_DOUBLE=44, KW_EXTERN=45, KW_FINAL=46, KW_FLOAT=47, KW_INT=48, KW_LONG=49, 
		KW_MACRO=50, KW_MUT=51, KW_OVERRIDE=52, KW_PRIVATE=53, KW_PUB=54, KW_REF=55, 
		KW_SELFTYPE=56, KW_SELFVALUE=57, KW_SIGNED=58, KW_STATIC=59, KW_SUPER=60, 
		KW_SWITCH=61, KW_TYPEOF=62, KW_UNION=63, KW_UNSAFE=64, KW_UNSIGNED=65, 
		KW_UNSIZED=66, KW_VIRTUAL=67, KW_VOID=68, KW_VOLATILE=69, KW_BOOL=70, 
		KW_CHAR=71, KW_STRING=72, KW_F32=73, KW_F64=74, KW_U8=75, KW_U16=76, KW_U32=77, 
		KW_U64=78, KW_I8=79, KW_I16=80, KW_I32=81, KW_I64=82, NON_KEYWORD_IDENTIFIER=83, 
		LINE_COMMENT=84, BLOCK_COMMENT=85, INNER_LINE_DOC=86, INNER_BLOCK_DOC=87, 
		OUTER_LINE_DOC=88, OUTER_BLOCK_DOC=89, BLOCK_COMMENT_OR_DOC=90, SHEBANG=91, 
		WHITESPACE=92, NEWLINE=93, CHAR_LITERAL=94, STRING_LITERAL=95, RAW_STRING_LITERAL=96, 
		BYTE_LITERAL=97, BYTE_STRING_LITERAL=98, RAW_BYTE_STRING_LITERAL=99, INTEGER_LITERAL=100, 
		DEC_LITERAL=101, HEX_LITERAL=102, OCT_LITERAL=103, BIN_LITERAL=104, FLOAT_LITERAL=105, 
		LIFETIME_OR_LABEL=106, RAW_ESCAPE=107, PLUS=108, MINUS=109, STAR=110, 
		SLASH=111, PERCENT=112, CARET=113, NOT=114, AND=115, OR=116, ANDAND=117, 
		OROR=118, PLUSEQ=119, MINUSEQ=120, STAREQ=121, SLASHEQ=122, PERCENTEQ=123, 
		CARETEQ=124, ANDEQ=125, OREQ=126, SHLEQ=127, SHREQ=128, EQ=129, EQEQ=130, 
		NE=131, GT=132, LT=133, GE=134, LE=135, AT=136, UNDERSCORE=137, DOT=138, 
		DOTDOT=139, DOTDOTDOT=140, COMMA=141, SEMI=142, COLON=143, PATHSEP=144, 
		RARROW=145, FATARROW=146, POUND=147, DOLLAR=148, QUESTION=149, LBRACE=150, 
		RBRACE=151, LBRACK=152, RBRACK=153, LPAREN=154, RPAREN=155;
	public static final int
		RULE_compilationUnit = 0, RULE_item = 1, RULE_valueDefinition = 2, RULE_type_ = 3, 
		RULE_parameterizedType = 4, RULE_typedefVersionDeclaration = 5, RULE_moduleDeclaration = 6, 
		RULE_useDeclaration = 7, RULE_useTree = 8, RULE_simplePath = 9, RULE_primitiveType = 10, 
		RULE_boolLiteral = 11, RULE_byteLiteral = 12, RULE_charLiteral = 13, RULE_f32Literal = 14, 
		RULE_f64Literal = 15, RULE_u8Literal = 16, RULE_u16Literal = 17, RULE_u32Literal = 18, 
		RULE_u64Literal = 19, RULE_i8Literal = 20, RULE_i16Literal = 21, RULE_i32Literal = 22, 
		RULE_i64Literal = 23, RULE_stringLiteral = 24, RULE_byteStringLiteral = 25, 
		RULE_identifier = 26, RULE_keyword = 27;
	private static String[] makeRuleNames() {
		return new String[] {
			"compilationUnit", "item", "valueDefinition", "type_", "parameterizedType", 
			"typedefVersionDeclaration", "moduleDeclaration", "useDeclaration", "useTree", 
			"simplePath", "primitiveType", "boolLiteral", "byteLiteral", "charLiteral", 
			"f32Literal", "f64Literal", "u8Literal", "u16Literal", "u32Literal", 
			"u64Literal", "i8Literal", "i16Literal", "i32Literal", "i64Literal", 
			"stringLiteral", "byteStringLiteral", "identifier", "keyword"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'array'", "'as'", "'enum'", "'false'", "'fn'", "'impl'", "'message'", 
			"'module'", "'struct'", "'true'", "'type'", "'typedef'", "'use'", "'variant'", 
			"'vector'", "'and'", "'in'", "'let'", "'not'", "'or'", "'sizeof'", "'this'", 
			"'trait'", "'where'", "'xor'", "'break'", "'continue'", "'default'", 
			"'do'", "'else'", "'for'", "'goto'", "'if'", "'loop'", "'match'", "'move'", 
			"'return'", "'try'", "'while'", "'yield'", "'abstract'", "'auto'", "'const'", 
			"'double'", "'extern'", "'final'", "'float'", "'int'", "'long'", "'macro'", 
			"'mut'", "'override'", "'private'", "'pub'", "'ref'", "'Self'", "'self'", 
			"'signed'", "'static'", "'super'", "'switch'", "'typeof'", "'union'", 
			"'unsafe'", "'unsigned'", "'unsized'", "'virtual'", "'void'", "'volatile'", 
			"'bool'", "'char'", "'string'", "'f32'", "'f64'", "'u8'", "'u16'", "'u32'", 
			"'u64'", "'i8'", "'i16'", "'i32'", "'i64'", null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, "'r#'", "'+'", "'-'", "'*'", 
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
			"KW_USE", "KW_VARIANT", "KW_VECTOR", "KW_AND", "KW_IN", "KW_LET", "KW_NOT", 
			"KW_OR", "KW_SIZEOF", "KW_THIS", "KW_TRAIT", "KW_WHERE", "KW_XOR", "KW_BREAK", 
			"KW_CONTINUE", "KW_DEFAULT", "KW_DO", "KW_ELSE", "KW_FOR", "KW_GOTO", 
			"KW_IF", "KW_LOOP", "KW_MATCH", "KW_MOVE", "KW_RETURN", "KW_TRY", "KW_WHILE", 
			"KW_YIELD", "KW_ABSTRACT", "KW_AUTO", "KW_CONST", "KW_DOUBLE", "KW_EXTERN", 
			"KW_FINAL", "KW_FLOAT", "KW_INT", "KW_LONG", "KW_MACRO", "KW_MUT", "KW_OVERRIDE", 
			"KW_PRIVATE", "KW_PUB", "KW_REF", "KW_SELFTYPE", "KW_SELFVALUE", "KW_SIGNED", 
			"KW_STATIC", "KW_SUPER", "KW_SWITCH", "KW_TYPEOF", "KW_UNION", "KW_UNSAFE", 
			"KW_UNSIGNED", "KW_UNSIZED", "KW_VIRTUAL", "KW_VOID", "KW_VOLATILE", 
			"KW_BOOL", "KW_CHAR", "KW_STRING", "KW_F32", "KW_F64", "KW_U8", "KW_U16", 
			"KW_U32", "KW_U64", "KW_I8", "KW_I16", "KW_I32", "KW_I64", "NON_KEYWORD_IDENTIFIER", 
			"LINE_COMMENT", "BLOCK_COMMENT", "INNER_LINE_DOC", "INNER_BLOCK_DOC", 
			"OUTER_LINE_DOC", "OUTER_BLOCK_DOC", "BLOCK_COMMENT_OR_DOC", "SHEBANG", 
			"WHITESPACE", "NEWLINE", "CHAR_LITERAL", "STRING_LITERAL", "RAW_STRING_LITERAL", 
			"BYTE_LITERAL", "BYTE_STRING_LITERAL", "RAW_BYTE_STRING_LITERAL", "INTEGER_LITERAL", 
			"DEC_LITERAL", "HEX_LITERAL", "OCT_LITERAL", "BIN_LITERAL", "FLOAT_LITERAL", 
			"LIFETIME_OR_LABEL", "RAW_ESCAPE", "PLUS", "MINUS", "STAR", "SLASH", 
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
		public List<ItemContext> item() {
			return getRuleContexts(ItemContext.class);
		}
		public ItemContext item(int i) {
			return getRuleContext(ItemContext.class,i);
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
			setState(56);
			typedefVersionDeclaration();
			setState(58);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==KW_MODULE) {
				{
				setState(57);
				moduleDeclaration();
				}
			}

			setState(63);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==KW_USE) {
				{
				{
				setState(60);
				useDeclaration();
				}
				}
				setState(65);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(69);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NON_KEYWORD_IDENTIFIER || _la==RAW_ESCAPE) {
				{
				{
				setState(66);
				item();
				}
				}
				setState(71);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(72);
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

	public static class ItemContext extends ParserRuleContext {
		public ValueDefinitionContext valueDefinition() {
			return getRuleContext(ValueDefinitionContext.class,0);
		}
		public ItemContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_item; }
	}

	public final ItemContext item() throws RecognitionException {
		ItemContext _localctx = new ItemContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_item);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(74);
			valueDefinition();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ValueDefinitionContext extends ParserRuleContext {
		public Type_Context type_;
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public Type_Context type_() {
			return getRuleContext(Type_Context.class,0);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public TerminalNode SEMI() { return getToken(TypedefParser.SEMI, 0); }
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
		public ValueDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valueDefinition; }
	}

	public final ValueDefinitionContext valueDefinition() throws RecognitionException {
		ValueDefinitionContext _localctx = new ValueDefinitionContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_valueDefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(76);
			identifier();
			setState(77);
			match(COLON);
			setState(78);
			((ValueDefinitionContext)_localctx).type_ = type_();
			setState(79);
			match(EQ);
			setState(106);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				{
				setState(80);
				if (!((((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_BOOL)) throw new FailedPredicateException(this, "$type_.start->getType() == KW_BOOL");
				setState(81);
				boolLiteral();
				}
				break;
			case 2:
				{
				setState(82);
				if (!((((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_CHAR)) throw new FailedPredicateException(this, "$type_.start->getType() == KW_CHAR");
				setState(83);
				charLiteral();
				}
				break;
			case 3:
				{
				setState(84);
				if (!((((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_STRING)) throw new FailedPredicateException(this, "$type_.start->getType() == KW_STRING");
				setState(85);
				stringLiteral();
				}
				break;
			case 4:
				{
				setState(86);
				if (!((((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_F32)) throw new FailedPredicateException(this, "$type_.start->getType() == KW_F32");
				setState(87);
				f32Literal();
				}
				break;
			case 5:
				{
				setState(88);
				if (!((((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_F64)) throw new FailedPredicateException(this, "$type_.start->getType() == KW_F64");
				setState(89);
				f64Literal();
				}
				break;
			case 6:
				{
				setState(90);
				if (!((((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_U8)) throw new FailedPredicateException(this, "$type_.start->getType() == KW_U8");
				setState(91);
				u8Literal();
				}
				break;
			case 7:
				{
				setState(92);
				if (!((((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_U16)) throw new FailedPredicateException(this, "$type_.start->getType() == KW_U16");
				setState(93);
				u16Literal();
				}
				break;
			case 8:
				{
				setState(94);
				if (!((((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_U32)) throw new FailedPredicateException(this, "$type_.start->getType() == KW_U32");
				setState(95);
				u32Literal();
				}
				break;
			case 9:
				{
				setState(96);
				if (!((((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_U64)) throw new FailedPredicateException(this, "$type_.start->getType() == KW_U64");
				setState(97);
				u64Literal();
				}
				break;
			case 10:
				{
				setState(98);
				if (!((((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_I8)) throw new FailedPredicateException(this, "$type_.start->getType() == KW_I8");
				setState(99);
				i8Literal();
				}
				break;
			case 11:
				{
				setState(100);
				if (!((((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_I16)) throw new FailedPredicateException(this, "$type_.start->getType() == KW_I16");
				setState(101);
				i16Literal();
				}
				break;
			case 12:
				{
				setState(102);
				if (!((((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_I32)) throw new FailedPredicateException(this, "$type_.start->getType() == KW_I32");
				setState(103);
				i32Literal();
				}
				break;
			case 13:
				{
				setState(104);
				if (!((((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_I64)) throw new FailedPredicateException(this, "$type_.start->getType() == KW_I64");
				setState(105);
				i64Literal();
				}
				break;
			}
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

	public static class Type_Context extends ParserRuleContext {
		public PrimitiveTypeContext primitiveType() {
			return getRuleContext(PrimitiveTypeContext.class,0);
		}
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public ParameterizedTypeContext parameterizedType() {
			return getRuleContext(ParameterizedTypeContext.class,0);
		}
		public Type_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type_; }
	}

	public final Type_Context type_() throws RecognitionException {
		Type_Context _localctx = new Type_Context(_ctx, getState());
		enterRule(_localctx, 6, RULE_type_);
		try {
			setState(113);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(110);
				primitiveType();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(111);
				identifier();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(112);
				parameterizedType();
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

	public static class ParameterizedTypeContext extends ParserRuleContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public TerminalNode LT() { return getToken(TypedefParser.LT, 0); }
		public TerminalNode GT() { return getToken(TypedefParser.GT, 0); }
		public List<TerminalNode> INTEGER_LITERAL() { return getTokens(TypedefParser.INTEGER_LITERAL); }
		public TerminalNode INTEGER_LITERAL(int i) {
			return getToken(TypedefParser.INTEGER_LITERAL, i);
		}
		public ParameterizedTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterizedType; }
	}

	public final ParameterizedTypeContext parameterizedType() throws RecognitionException {
		ParameterizedTypeContext _localctx = new ParameterizedTypeContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_parameterizedType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(115);
			identifier();
			setState(116);
			match(LT);
			setState(119); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				setState(119);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case NON_KEYWORD_IDENTIFIER:
				case RAW_ESCAPE:
					{
					setState(117);
					identifier();
					}
					break;
				case INTEGER_LITERAL:
					{
					setState(118);
					match(INTEGER_LITERAL);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(121); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( ((((_la - 83)) & ~0x3f) == 0 && ((1L << (_la - 83)) & ((1L << (NON_KEYWORD_IDENTIFIER - 83)) | (1L << (INTEGER_LITERAL - 83)) | (1L << (RAW_ESCAPE - 83)))) != 0) );
			setState(123);
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
		enterRule(_localctx, 10, RULE_typedefVersionDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(125);
			match(KW_TYPEDEF);
			setState(126);
			match(EQ);
			setState(127);
			identifier();
			setState(128);
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
		enterRule(_localctx, 12, RULE_moduleDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(130);
			match(KW_MODULE);
			setState(131);
			simplePath();
			setState(132);
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
		enterRule(_localctx, 14, RULE_useDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(134);
			match(KW_USE);
			setState(135);
			useTree();
			setState(136);
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
		enterRule(_localctx, 16, RULE_useTree);
		int _la;
		try {
			int _alt;
			setState(167);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(142);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (((((_la - 83)) & ~0x3f) == 0 && ((1L << (_la - 83)) & ((1L << (NON_KEYWORD_IDENTIFIER - 83)) | (1L << (RAW_ESCAPE - 83)) | (1L << (PATHSEP - 83)))) != 0)) {
					{
					setState(139);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
					case 1:
						{
						setState(138);
						simplePath();
						}
						break;
					}
					setState(141);
					match(PATHSEP);
					}
				}

				setState(160);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case STAR:
					{
					setState(144);
					match(STAR);
					}
					break;
				case LBRACE:
					{
					setState(145);
					match(LBRACE);
					setState(157);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (((((_la - 83)) & ~0x3f) == 0 && ((1L << (_la - 83)) & ((1L << (NON_KEYWORD_IDENTIFIER - 83)) | (1L << (RAW_ESCAPE - 83)) | (1L << (STAR - 83)) | (1L << (PATHSEP - 83)))) != 0) || _la==LBRACE) {
						{
						setState(146);
						useTree();
						setState(151);
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,9,_ctx);
						while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
							if ( _alt==1 ) {
								{
								{
								setState(147);
								match(COMMA);
								setState(148);
								useTree();
								}
								} 
							}
							setState(153);
							_errHandler.sync(this);
							_alt = getInterpreter().adaptivePredict(_input,9,_ctx);
						}
						setState(155);
						_errHandler.sync(this);
						_la = _input.LA(1);
						if (_la==COMMA) {
							{
							setState(154);
							match(COMMA);
							}
						}

						}
					}

					setState(159);
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
				setState(162);
				simplePath();
				setState(165);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==KW_AS) {
					{
					setState(163);
					match(KW_AS);
					setState(164);
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
		enterRule(_localctx, 18, RULE_simplePath);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(170);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==PATHSEP) {
				{
				setState(169);
				match(PATHSEP);
				}
			}

			setState(172);
			identifier();
			setState(177);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(173);
					match(PATHSEP);
					setState(174);
					identifier();
					}
					} 
				}
				setState(179);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
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
		enterRule(_localctx, 20, RULE_primitiveType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(180);
			_la = _input.LA(1);
			if ( !(((((_la - 70)) & ~0x3f) == 0 && ((1L << (_la - 70)) & ((1L << (KW_BOOL - 70)) | (1L << (KW_CHAR - 70)) | (1L << (KW_STRING - 70)) | (1L << (KW_F32 - 70)) | (1L << (KW_F64 - 70)) | (1L << (KW_U8 - 70)) | (1L << (KW_U16 - 70)) | (1L << (KW_U32 - 70)) | (1L << (KW_U64 - 70)) | (1L << (KW_I8 - 70)) | (1L << (KW_I16 - 70)) | (1L << (KW_I32 - 70)) | (1L << (KW_I64 - 70)))) != 0)) ) {
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
		enterRule(_localctx, 22, RULE_boolLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(182);
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

					// From grammar.
					if (_localctx->start->getType() == TypedefParser::KW_FALSE) {
						((BoolLiteralContext)_localctx).maybe_val =  false;
					} else if (_localctx->start->getType() == TypedefParser::KW_TRUE) {
						((BoolLiteralContext)_localctx).maybe_val =  true;
					}
					// End from grammar.
			  
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ByteLiteralContext extends ParserRuleContext {
		public std::optional<uint8_t> maybe_val;
		public TerminalNode BYTE_LITERAL() { return getToken(TypedefParser.BYTE_LITERAL, 0); }
		public ByteLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_byteLiteral; }
	}

	public final ByteLiteralContext byteLiteral() throws RecognitionException {
		ByteLiteralContext _localctx = new ByteLiteralContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_byteLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(184);
			match(BYTE_LITERAL);
			}
		}
		catch (RecognitionException re) {
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
		enterRule(_localctx, 26, RULE_charLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(186);
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
		public std::optional<float> maybe_val;
		public TerminalNode FLOAT_LITERAL() { return getToken(TypedefParser.FLOAT_LITERAL, 0); }
		public F32LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_f32Literal; }
	}

	public final F32LiteralContext f32Literal() throws RecognitionException {
		F32LiteralContext _localctx = new F32LiteralContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_f32Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(188);
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
		enterRule(_localctx, 30, RULE_f64Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(190);
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
		public std::optional<uint8_t> maybe_val;
		public TerminalNode INTEGER_LITERAL() { return getToken(TypedefParser.INTEGER_LITERAL, 0); }
		public U8LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u8Literal; }
	}

	public final U8LiteralContext u8Literal() throws RecognitionException {
		U8LiteralContext _localctx = new U8LiteralContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_u8Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(192);
			match(INTEGER_LITERAL);
			}
		}
		catch (RecognitionException re) {
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
		public TerminalNode INTEGER_LITERAL() { return getToken(TypedefParser.INTEGER_LITERAL, 0); }
		public U16LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u16Literal; }
	}

	public final U16LiteralContext u16Literal() throws RecognitionException {
		U16LiteralContext _localctx = new U16LiteralContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_u16Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(194);
			match(INTEGER_LITERAL);
			}
		}
		catch (RecognitionException re) {
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
		public TerminalNode INTEGER_LITERAL() { return getToken(TypedefParser.INTEGER_LITERAL, 0); }
		public U32LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u32Literal; }
	}

	public final U32LiteralContext u32Literal() throws RecognitionException {
		U32LiteralContext _localctx = new U32LiteralContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_u32Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(196);
			match(INTEGER_LITERAL);
			}
			_ctx.stop = _input.LT(-1);

					// From grammar.
					// End from grammar.
			  
		}
		catch (RecognitionException re) {
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
		public TerminalNode INTEGER_LITERAL() { return getToken(TypedefParser.INTEGER_LITERAL, 0); }
		public U64LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_u64Literal; }
	}

	public final U64LiteralContext u64Literal() throws RecognitionException {
		U64LiteralContext _localctx = new U64LiteralContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_u64Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(198);
			match(INTEGER_LITERAL);
			}
		}
		catch (RecognitionException re) {
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
		public TerminalNode INTEGER_LITERAL() { return getToken(TypedefParser.INTEGER_LITERAL, 0); }
		public I8LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i8Literal; }
	}

	public final I8LiteralContext i8Literal() throws RecognitionException {
		I8LiteralContext _localctx = new I8LiteralContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_i8Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(200);
			match(INTEGER_LITERAL);
			}
		}
		catch (RecognitionException re) {
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
		public TerminalNode INTEGER_LITERAL() { return getToken(TypedefParser.INTEGER_LITERAL, 0); }
		public I16LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i16Literal; }
	}

	public final I16LiteralContext i16Literal() throws RecognitionException {
		I16LiteralContext _localctx = new I16LiteralContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_i16Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(202);
			match(INTEGER_LITERAL);
			}
		}
		catch (RecognitionException re) {
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
		public TerminalNode INTEGER_LITERAL() { return getToken(TypedefParser.INTEGER_LITERAL, 0); }
		public I32LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i32Literal; }
	}

	public final I32LiteralContext i32Literal() throws RecognitionException {
		I32LiteralContext _localctx = new I32LiteralContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_i32Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(204);
			match(INTEGER_LITERAL);
			}
		}
		catch (RecognitionException re) {
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
		public TerminalNode INTEGER_LITERAL() { return getToken(TypedefParser.INTEGER_LITERAL, 0); }
		public I64LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_i64Literal; }
	}

	public final I64LiteralContext i64Literal() throws RecognitionException {
		I64LiteralContext _localctx = new I64LiteralContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_i64Literal);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(206);
			match(INTEGER_LITERAL);
			}
		}
		catch (RecognitionException re) {
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
		public TerminalNode STRING_LITERAL() { return getToken(TypedefParser.STRING_LITERAL, 0); }
		public TerminalNode RAW_STRING_LITERAL() { return getToken(TypedefParser.RAW_STRING_LITERAL, 0); }
		public StringLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stringLiteral; }
	}

	public final StringLiteralContext stringLiteral() throws RecognitionException {
		StringLiteralContext _localctx = new StringLiteralContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_stringLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(208);
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

	public static class ByteStringLiteralContext extends ParserRuleContext {
		public std::optional<std::string> maybe_val;
		public TerminalNode BYTE_STRING_LITERAL() { return getToken(TypedefParser.BYTE_STRING_LITERAL, 0); }
		public TerminalNode RAW_BYTE_STRING_LITERAL() { return getToken(TypedefParser.RAW_BYTE_STRING_LITERAL, 0); }
		public ByteStringLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_byteStringLiteral; }
	}

	public final ByteStringLiteralContext byteStringLiteral() throws RecognitionException {
		ByteStringLiteralContext _localctx = new ByteStringLiteralContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_byteStringLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(210);
			_la = _input.LA(1);
			if ( !(_la==BYTE_STRING_LITERAL || _la==RAW_BYTE_STRING_LITERAL) ) {
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
		enterRule(_localctx, 52, RULE_identifier);
		try {
			setState(215);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NON_KEYWORD_IDENTIFIER:
				enterOuterAlt(_localctx, 1);
				{
				setState(212);
				((IdentifierContext)_localctx).nki = match(NON_KEYWORD_IDENTIFIER);
				}
				break;
			case RAW_ESCAPE:
				enterOuterAlt(_localctx, 2);
				{
				setState(213);
				match(RAW_ESCAPE);
				setState(214);
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
		enterRule(_localctx, 54, RULE_keyword);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(217);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << KW_AS) | (1L << KW_ENUM) | (1L << KW_FALSE) | (1L << KW_FN) | (1L << KW_IMPL) | (1L << KW_MODULE) | (1L << KW_STRUCT) | (1L << KW_TRUE) | (1L << KW_TYPE) | (1L << KW_TYPEDEF) | (1L << KW_USE) | (1L << KW_AND) | (1L << KW_IN) | (1L << KW_LET) | (1L << KW_NOT) | (1L << KW_OR) | (1L << KW_SIZEOF) | (1L << KW_THIS) | (1L << KW_TRAIT) | (1L << KW_WHERE) | (1L << KW_XOR) | (1L << KW_BREAK) | (1L << KW_CONTINUE) | (1L << KW_DEFAULT) | (1L << KW_DO) | (1L << KW_ELSE) | (1L << KW_FOR) | (1L << KW_GOTO) | (1L << KW_IF) | (1L << KW_LOOP) | (1L << KW_MATCH) | (1L << KW_MOVE) | (1L << KW_RETURN) | (1L << KW_TRY) | (1L << KW_WHILE) | (1L << KW_YIELD) | (1L << KW_ABSTRACT) | (1L << KW_AUTO) | (1L << KW_CONST) | (1L << KW_DOUBLE) | (1L << KW_EXTERN) | (1L << KW_FINAL) | (1L << KW_FLOAT) | (1L << KW_INT) | (1L << KW_LONG) | (1L << KW_MACRO) | (1L << KW_MUT) | (1L << KW_OVERRIDE) | (1L << KW_PRIVATE) | (1L << KW_PUB) | (1L << KW_REF) | (1L << KW_SELFTYPE) | (1L << KW_SELFVALUE) | (1L << KW_SIGNED) | (1L << KW_STATIC) | (1L << KW_SUPER) | (1L << KW_SWITCH) | (1L << KW_TYPEOF) | (1L << KW_UNION))) != 0) || ((((_la - 64)) & ~0x3f) == 0 && ((1L << (_la - 64)) & ((1L << (KW_UNSAFE - 64)) | (1L << (KW_UNSIGNED - 64)) | (1L << (KW_UNSIZED - 64)) | (1L << (KW_VIRTUAL - 64)) | (1L << (KW_VOID - 64)) | (1L << (KW_VOLATILE - 64)))) != 0)) ) {
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

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 2:
			return valueDefinition_sempred((ValueDefinitionContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean valueDefinition_sempred(ValueDefinitionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return (((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_BOOL;
		case 1:
			return (((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_CHAR;
		case 2:
			return (((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_STRING;
		case 3:
			return (((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_F32;
		case 4:
			return (((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_F64;
		case 5:
			return (((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_U8;
		case 6:
			return (((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_U16;
		case 7:
			return (((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_U32;
		case 8:
			return (((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_U64;
		case 9:
			return (((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_I8;
		case 10:
			return (((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_I16;
		case 11:
			return (((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_I32;
		case 12:
			return (((ValueDefinitionContext)_localctx).type_!=null?(((ValueDefinitionContext)_localctx).type_.start):null)->getType() == KW_I64;
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\u009d\u00de\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\3\2\3\2\5\2=\n\2\3\2\7\2@\n\2"+
		"\f\2\16\2C\13\2\3\2\7\2F\n\2\f\2\16\2I\13\2\3\2\3\2\3\3\3\3\3\4\3\4\3"+
		"\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4"+
		"\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\5\4m\n\4\3\4\3\4\3\5\3\5\3\5"+
		"\5\5t\n\5\3\6\3\6\3\6\3\6\6\6z\n\6\r\6\16\6{\3\6\3\6\3\7\3\7\3\7\3\7\3"+
		"\7\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\n\5\n\u008e\n\n\3\n\5\n\u0091\n\n"+
		"\3\n\3\n\3\n\3\n\3\n\7\n\u0098\n\n\f\n\16\n\u009b\13\n\3\n\5\n\u009e\n"+
		"\n\5\n\u00a0\n\n\3\n\5\n\u00a3\n\n\3\n\3\n\3\n\5\n\u00a8\n\n\5\n\u00aa"+
		"\n\n\3\13\5\13\u00ad\n\13\3\13\3\13\3\13\7\13\u00b2\n\13\f\13\16\13\u00b5"+
		"\13\13\3\f\3\f\3\r\3\r\3\16\3\16\3\17\3\17\3\20\3\20\3\21\3\21\3\22\3"+
		"\22\3\23\3\23\3\24\3\24\3\25\3\25\3\26\3\26\3\27\3\27\3\30\3\30\3\31\3"+
		"\31\3\32\3\32\3\33\3\33\3\34\3\34\3\34\5\34\u00da\n\34\3\35\3\35\3\35"+
		"\2\2\36\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\668\2"+
		"\7\3\2HT\4\2\6\6\f\f\3\2ab\3\2de\5\2\4\b\n\17\22G\2\u00df\2:\3\2\2\2\4"+
		"L\3\2\2\2\6N\3\2\2\2\bs\3\2\2\2\nu\3\2\2\2\f\177\3\2\2\2\16\u0084\3\2"+
		"\2\2\20\u0088\3\2\2\2\22\u00a9\3\2\2\2\24\u00ac\3\2\2\2\26\u00b6\3\2\2"+
		"\2\30\u00b8\3\2\2\2\32\u00ba\3\2\2\2\34\u00bc\3\2\2\2\36\u00be\3\2\2\2"+
		" \u00c0\3\2\2\2\"\u00c2\3\2\2\2$\u00c4\3\2\2\2&\u00c6\3\2\2\2(\u00c8\3"+
		"\2\2\2*\u00ca\3\2\2\2,\u00cc\3\2\2\2.\u00ce\3\2\2\2\60\u00d0\3\2\2\2\62"+
		"\u00d2\3\2\2\2\64\u00d4\3\2\2\2\66\u00d9\3\2\2\28\u00db\3\2\2\2:<\5\f"+
		"\7\2;=\5\16\b\2<;\3\2\2\2<=\3\2\2\2=A\3\2\2\2>@\5\20\t\2?>\3\2\2\2@C\3"+
		"\2\2\2A?\3\2\2\2AB\3\2\2\2BG\3\2\2\2CA\3\2\2\2DF\5\4\3\2ED\3\2\2\2FI\3"+
		"\2\2\2GE\3\2\2\2GH\3\2\2\2HJ\3\2\2\2IG\3\2\2\2JK\7\2\2\3K\3\3\2\2\2LM"+
		"\5\6\4\2M\5\3\2\2\2NO\5\66\34\2OP\7\u0091\2\2PQ\5\b\5\2Ql\7\u0083\2\2"+
		"RS\6\4\2\3Sm\5\30\r\2TU\6\4\3\3Um\5\34\17\2VW\6\4\4\3Wm\5\62\32\2XY\6"+
		"\4\5\3Ym\5\36\20\2Z[\6\4\6\3[m\5 \21\2\\]\6\4\7\3]m\5\"\22\2^_\6\4\b\3"+
		"_m\5$\23\2`a\6\4\t\3am\5&\24\2bc\6\4\n\3cm\5(\25\2de\6\4\13\3em\5*\26"+
		"\2fg\6\4\f\3gm\5,\27\2hi\6\4\r\3im\5.\30\2jk\6\4\16\3km\5\60\31\2lR\3"+
		"\2\2\2lT\3\2\2\2lV\3\2\2\2lX\3\2\2\2lZ\3\2\2\2l\\\3\2\2\2l^\3\2\2\2l`"+
		"\3\2\2\2lb\3\2\2\2ld\3\2\2\2lf\3\2\2\2lh\3\2\2\2lj\3\2\2\2mn\3\2\2\2n"+
		"o\7\u0090\2\2o\7\3\2\2\2pt\5\26\f\2qt\5\66\34\2rt\5\n\6\2sp\3\2\2\2sq"+
		"\3\2\2\2sr\3\2\2\2t\t\3\2\2\2uv\5\66\34\2vy\7\u0087\2\2wz\5\66\34\2xz"+
		"\7f\2\2yw\3\2\2\2yx\3\2\2\2z{\3\2\2\2{y\3\2\2\2{|\3\2\2\2|}\3\2\2\2}~"+
		"\7\u0086\2\2~\13\3\2\2\2\177\u0080\7\16\2\2\u0080\u0081\7\u0083\2\2\u0081"+
		"\u0082\5\66\34\2\u0082\u0083\7\u0090\2\2\u0083\r\3\2\2\2\u0084\u0085\7"+
		"\n\2\2\u0085\u0086\5\24\13\2\u0086\u0087\7\u0090\2\2\u0087\17\3\2\2\2"+
		"\u0088\u0089\7\17\2\2\u0089\u008a\5\22\n\2\u008a\u008b\7\u0090\2\2\u008b"+
		"\21\3\2\2\2\u008c\u008e\5\24\13\2\u008d\u008c\3\2\2\2\u008d\u008e\3\2"+
		"\2\2\u008e\u008f\3\2\2\2\u008f\u0091\7\u0092\2\2\u0090\u008d\3\2\2\2\u0090"+
		"\u0091\3\2\2\2\u0091\u00a2\3\2\2\2\u0092\u00a3\7p\2\2\u0093\u009f\7\u0098"+
		"\2\2\u0094\u0099\5\22\n\2\u0095\u0096\7\u008f\2\2\u0096\u0098\5\22\n\2"+
		"\u0097\u0095\3\2\2\2\u0098\u009b\3\2\2\2\u0099\u0097\3\2\2\2\u0099\u009a"+
		"\3\2\2\2\u009a\u009d\3\2\2\2\u009b\u0099\3\2\2\2\u009c\u009e\7\u008f\2"+
		"\2\u009d\u009c\3\2\2\2\u009d\u009e\3\2\2\2\u009e\u00a0\3\2\2\2\u009f\u0094"+
		"\3\2\2\2\u009f\u00a0\3\2\2\2\u00a0\u00a1\3\2\2\2\u00a1\u00a3\7\u0099\2"+
		"\2\u00a2\u0092\3\2\2\2\u00a2\u0093\3\2\2\2\u00a3\u00aa\3\2\2\2\u00a4\u00a7"+
		"\5\24\13\2\u00a5\u00a6\7\4\2\2\u00a6\u00a8\5\66\34\2\u00a7\u00a5\3\2\2"+
		"\2\u00a7\u00a8\3\2\2\2\u00a8\u00aa\3\2\2\2\u00a9\u0090\3\2\2\2\u00a9\u00a4"+
		"\3\2\2\2\u00aa\23\3\2\2\2\u00ab\u00ad\7\u0092\2\2\u00ac\u00ab\3\2\2\2"+
		"\u00ac\u00ad\3\2\2\2\u00ad\u00ae\3\2\2\2\u00ae\u00b3\5\66\34\2\u00af\u00b0"+
		"\7\u0092\2\2\u00b0\u00b2\5\66\34\2\u00b1\u00af\3\2\2\2\u00b2\u00b5\3\2"+
		"\2\2\u00b3\u00b1\3\2\2\2\u00b3\u00b4\3\2\2\2\u00b4\25\3\2\2\2\u00b5\u00b3"+
		"\3\2\2\2\u00b6\u00b7\t\2\2\2\u00b7\27\3\2\2\2\u00b8\u00b9\t\3\2\2\u00b9"+
		"\31\3\2\2\2\u00ba\u00bb\7c\2\2\u00bb\33\3\2\2\2\u00bc\u00bd\7`\2\2\u00bd"+
		"\35\3\2\2\2\u00be\u00bf\7k\2\2\u00bf\37\3\2\2\2\u00c0\u00c1\7k\2\2\u00c1"+
		"!\3\2\2\2\u00c2\u00c3\7f\2\2\u00c3#\3\2\2\2\u00c4\u00c5\7f\2\2\u00c5%"+
		"\3\2\2\2\u00c6\u00c7\7f\2\2\u00c7\'\3\2\2\2\u00c8\u00c9\7f\2\2\u00c9)"+
		"\3\2\2\2\u00ca\u00cb\7f\2\2\u00cb+\3\2\2\2\u00cc\u00cd\7f\2\2\u00cd-\3"+
		"\2\2\2\u00ce\u00cf\7f\2\2\u00cf/\3\2\2\2\u00d0\u00d1\7f\2\2\u00d1\61\3"+
		"\2\2\2\u00d2\u00d3\t\4\2\2\u00d3\63\3\2\2\2\u00d4\u00d5\t\5\2\2\u00d5"+
		"\65\3\2\2\2\u00d6\u00da\7U\2\2\u00d7\u00d8\7m\2\2\u00d8\u00da\7U\2\2\u00d9"+
		"\u00d6\3\2\2\2\u00d9\u00d7\3\2\2\2\u00da\67\3\2\2\2\u00db\u00dc\t\6\2"+
		"\2\u00dc9\3\2\2\2\24<AGlsy{\u008d\u0090\u0099\u009d\u009f\u00a2\u00a7"+
		"\u00a9\u00ac\u00b3\u00d9";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}