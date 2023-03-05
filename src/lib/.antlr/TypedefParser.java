// Generated from /home/dpemmons/src/typedef/src/lib/TypedefParser.g4 by ANTLR 4.9.2
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
		BOOL=1, BYTE=2, FLOAT32=3, FLOAT64=4, INT8=5, INT16=6, INT32=7, INT64=8, 
		UINT8=9, UINT16=10, UINT32=11, UINT64=12, FLOAT16=13, BFLAOT16=14, DEFAULT=15, 
		ENUM=16, EXPORTS=17, EXTENDS=18, IMPORT=19, IMPLEMENTS=20, INTERFACE=21, 
		MESSAGE=22, MODULE=23, PACKAGE=24, TRUE=25, FALSE=26, TYPEDEF=27, AS=28, 
		SEMVER=29, DECIMAL_LITERAL=30, QUALIFIED_DECIMAL_LITERAL=31, UNQUALIFIED_DECIMAL_LITERAL=32, 
		HEX_LITERAL=33, OCT_LITERAL=34, BINARY_LITERAL=35, FLOAT_LITERAL=36, HEX_FLOAT_LITERAL=37, 
		BOOL_LITERAL=38, CHAR_LITERAL=39, STRING_LITERAL=40, TEXT_BLOCK=41, LPAREN=42, 
		RPAREN=43, LBRACE=44, RBRACE=45, LBRACK=46, RBRACK=47, SEMI=48, COLON=49, 
		COMMA=50, DOT=51, DOTSTAR=52, EQ=53, AT=54, PS=55, WS=56, COMMENT=57, 
		LINE_COMMENT=58, IDENTIFIER=59;
	public static final int
		RULE_compilationUnit = 0, RULE_typedefVersionDeclaration = 1, RULE_moduleDeclaration = 2, 
		RULE_importStatement = 3, RULE_singleImportStatement = 4, RULE_wildcardImportStatement = 5, 
		RULE_enumDeclaration = 6, RULE_enumBody = 7, RULE_enumField = 8, RULE_messageDeclaration = 9, 
		RULE_messageBody = 10, RULE_fieldDeclaration = 11, RULE_value = 12, RULE_array = 13, 
		RULE_map = 14, RULE_keyValue = 15, RULE_type = 16, RULE_arrayIdentifier = 17, 
		RULE_qualifiedName = 18, RULE_moduleName = 19, RULE_position = 20, RULE_identifier = 21, 
		RULE_literal = 22, RULE_semver = 23, RULE_boolLiteral = 24, RULE_integerLiteral = 25, 
		RULE_floatLiteral = 26, RULE_typeType = 27, RULE_primitiveFixedPointType = 28, 
		RULE_primitiveType = 29;
	private static String[] makeRuleNames() {
		return new String[] {
			"compilationUnit", "typedefVersionDeclaration", "moduleDeclaration", 
			"importStatement", "singleImportStatement", "wildcardImportStatement", 
			"enumDeclaration", "enumBody", "enumField", "messageDeclaration", "messageBody", 
			"fieldDeclaration", "value", "array", "map", "keyValue", "type", "arrayIdentifier", 
			"qualifiedName", "moduleName", "position", "identifier", "literal", "semver", 
			"boolLiteral", "integerLiteral", "floatLiteral", "typeType", "primitiveFixedPointType", 
			"primitiveType"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'bool'", "'byte'", "'float32'", "'float64'", "'int8'", "'int16'", 
			"'int32'", "'int64'", "'uint8'", "'uint16'", "'uint32'", "'uint64'", 
			"'float16'", "'bfloat16'", "'default'", "'enum'", "'exports'", "'extends'", 
			"'import'", "'implements'", "'interface'", "'message'", "'module'", "'package'", 
			"'true'", "'false'", "'typedef'", "'as'", null, null, null, null, null, 
			null, null, null, null, null, null, null, null, "'('", "')'", "'{'", 
			"'}'", "'['", "']'", "';'", "':'", "','", "'.'", "'.*'", "'='", "'@'", 
			"'::'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "BOOL", "BYTE", "FLOAT32", "FLOAT64", "INT8", "INT16", "INT32", 
			"INT64", "UINT8", "UINT16", "UINT32", "UINT64", "FLOAT16", "BFLAOT16", 
			"DEFAULT", "ENUM", "EXPORTS", "EXTENDS", "IMPORT", "IMPLEMENTS", "INTERFACE", 
			"MESSAGE", "MODULE", "PACKAGE", "TRUE", "FALSE", "TYPEDEF", "AS", "SEMVER", 
			"DECIMAL_LITERAL", "QUALIFIED_DECIMAL_LITERAL", "UNQUALIFIED_DECIMAL_LITERAL", 
			"HEX_LITERAL", "OCT_LITERAL", "BINARY_LITERAL", "FLOAT_LITERAL", "HEX_FLOAT_LITERAL", 
			"BOOL_LITERAL", "CHAR_LITERAL", "STRING_LITERAL", "TEXT_BLOCK", "LPAREN", 
			"RPAREN", "LBRACE", "RBRACE", "LBRACK", "RBRACK", "SEMI", "COLON", "COMMA", 
			"DOT", "DOTSTAR", "EQ", "AT", "PS", "WS", "COMMENT", "LINE_COMMENT", 
			"IDENTIFIER"
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
		public List<ImportStatementContext> importStatement() {
			return getRuleContexts(ImportStatementContext.class);
		}
		public ImportStatementContext importStatement(int i) {
			return getRuleContext(ImportStatementContext.class,i);
		}
		public List<EnumDeclarationContext> enumDeclaration() {
			return getRuleContexts(EnumDeclarationContext.class);
		}
		public EnumDeclarationContext enumDeclaration(int i) {
			return getRuleContext(EnumDeclarationContext.class,i);
		}
		public List<MessageDeclarationContext> messageDeclaration() {
			return getRuleContexts(MessageDeclarationContext.class);
		}
		public MessageDeclarationContext messageDeclaration(int i) {
			return getRuleContext(MessageDeclarationContext.class,i);
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
			setState(60);
			typedefVersionDeclaration();
			setState(61);
			moduleDeclaration();
			setState(65);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==IMPORT) {
				{
				{
				setState(62);
				importStatement();
				}
				}
				setState(67);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(72);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==ENUM || _la==MESSAGE) {
				{
				setState(70);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case ENUM:
					{
					setState(68);
					enumDeclaration();
					}
					break;
				case MESSAGE:
					{
					setState(69);
					messageDeclaration();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(74);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(75);
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
		public TerminalNode TYPEDEF() { return getToken(TypedefParser.TYPEDEF, 0); }
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public TerminalNode IDENTIFIER() { return getToken(TypedefParser.IDENTIFIER, 0); }
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
			setState(77);
			match(TYPEDEF);
			setState(78);
			match(EQ);
			setState(79);
			match(IDENTIFIER);
			setState(80);
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
		public TerminalNode MODULE() { return getToken(TypedefParser.MODULE, 0); }
		public ModuleNameContext moduleName() {
			return getRuleContext(ModuleNameContext.class,0);
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
			setState(82);
			match(MODULE);
			setState(83);
			moduleName();
			setState(84);
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

	public static class ImportStatementContext extends ParserRuleContext {
		public SingleImportStatementContext singleImportStatement() {
			return getRuleContext(SingleImportStatementContext.class,0);
		}
		public WildcardImportStatementContext wildcardImportStatement() {
			return getRuleContext(WildcardImportStatementContext.class,0);
		}
		public ImportStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_importStatement; }
	}

	public final ImportStatementContext importStatement() throws RecognitionException {
		ImportStatementContext _localctx = new ImportStatementContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_importStatement);
		try {
			setState(88);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(86);
				singleImportStatement();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(87);
				wildcardImportStatement();
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

	public static class SingleImportStatementContext extends ParserRuleContext {
		public TerminalNode IMPORT() { return getToken(TypedefParser.IMPORT, 0); }
		public QualifiedNameContext qualifiedName() {
			return getRuleContext(QualifiedNameContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(TypedefParser.SEMI, 0); }
		public TerminalNode AS() { return getToken(TypedefParser.AS, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public SingleImportStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_singleImportStatement; }
	}

	public final SingleImportStatementContext singleImportStatement() throws RecognitionException {
		SingleImportStatementContext _localctx = new SingleImportStatementContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_singleImportStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(90);
			match(IMPORT);
			setState(91);
			qualifiedName();
			setState(94);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==AS) {
				{
				setState(92);
				match(AS);
				setState(93);
				identifier();
				}
			}

			setState(96);
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

	public static class WildcardImportStatementContext extends ParserRuleContext {
		public TerminalNode IMPORT() { return getToken(TypedefParser.IMPORT, 0); }
		public QualifiedNameContext qualifiedName() {
			return getRuleContext(QualifiedNameContext.class,0);
		}
		public TerminalNode DOTSTAR() { return getToken(TypedefParser.DOTSTAR, 0); }
		public TerminalNode SEMI() { return getToken(TypedefParser.SEMI, 0); }
		public WildcardImportStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_wildcardImportStatement; }
	}

	public final WildcardImportStatementContext wildcardImportStatement() throws RecognitionException {
		WildcardImportStatementContext _localctx = new WildcardImportStatementContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_wildcardImportStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(98);
			match(IMPORT);
			setState(99);
			qualifiedName();
			setState(100);
			match(DOTSTAR);
			setState(101);
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

	public static class EnumDeclarationContext extends ParserRuleContext {
		public TerminalNode ENUM() { return getToken(TypedefParser.ENUM, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode LBRACE() { return getToken(TypedefParser.LBRACE, 0); }
		public EnumBodyContext enumBody() {
			return getRuleContext(EnumBodyContext.class,0);
		}
		public TerminalNode RBRACE() { return getToken(TypedefParser.RBRACE, 0); }
		public TerminalNode SEMI() { return getToken(TypedefParser.SEMI, 0); }
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public PrimitiveFixedPointTypeContext primitiveFixedPointType() {
			return getRuleContext(PrimitiveFixedPointTypeContext.class,0);
		}
		public EnumDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumDeclaration; }
	}

	public final EnumDeclarationContext enumDeclaration() throws RecognitionException {
		EnumDeclarationContext _localctx = new EnumDeclarationContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_enumDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(103);
			match(ENUM);
			setState(104);
			identifier();
			{
			setState(105);
			match(COLON);
			setState(106);
			primitiveFixedPointType();
			}
			setState(108);
			match(LBRACE);
			setState(109);
			enumBody();
			setState(110);
			match(RBRACE);
			setState(111);
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

	public static class EnumBodyContext extends ParserRuleContext {
		public List<EnumFieldContext> enumField() {
			return getRuleContexts(EnumFieldContext.class);
		}
		public EnumFieldContext enumField(int i) {
			return getRuleContext(EnumFieldContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(TypedefParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(TypedefParser.COMMA, i);
		}
		public EnumBodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumBody; }
	}

	public final EnumBodyContext enumBody() throws RecognitionException {
		EnumBodyContext _localctx = new EnumBodyContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_enumBody);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(116); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(113);
					enumField();
					setState(114);
					match(COMMA);
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(118); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			setState(124);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==IDENTIFIER) {
				{
				setState(120);
				enumField();
				setState(122);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(121);
					match(COMMA);
					}
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

	public static class EnumFieldContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public IntegerLiteralContext integerLiteral() {
			return getRuleContext(IntegerLiteralContext.class,0);
		}
		public EnumFieldContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_enumField; }
	}

	public final EnumFieldContext enumField() throws RecognitionException {
		EnumFieldContext _localctx = new EnumFieldContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_enumField);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(126);
			identifier();
			setState(127);
			match(EQ);
			setState(128);
			integerLiteral();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MessageDeclarationContext extends ParserRuleContext {
		public TerminalNode MESSAGE() { return getToken(TypedefParser.MESSAGE, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode LBRACE() { return getToken(TypedefParser.LBRACE, 0); }
		public MessageBodyContext messageBody() {
			return getRuleContext(MessageBodyContext.class,0);
		}
		public TerminalNode RBRACE() { return getToken(TypedefParser.RBRACE, 0); }
		public TerminalNode SEMI() { return getToken(TypedefParser.SEMI, 0); }
		public MessageDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_messageDeclaration; }
	}

	public final MessageDeclarationContext messageDeclaration() throws RecognitionException {
		MessageDeclarationContext _localctx = new MessageDeclarationContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_messageDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(130);
			match(MESSAGE);
			setState(131);
			identifier();
			setState(132);
			match(LBRACE);
			setState(133);
			messageBody();
			setState(134);
			match(RBRACE);
			setState(135);
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

	public static class MessageBodyContext extends ParserRuleContext {
		public List<FieldDeclarationContext> fieldDeclaration() {
			return getRuleContexts(FieldDeclarationContext.class);
		}
		public FieldDeclarationContext fieldDeclaration(int i) {
			return getRuleContext(FieldDeclarationContext.class,i);
		}
		public List<EnumDeclarationContext> enumDeclaration() {
			return getRuleContexts(EnumDeclarationContext.class);
		}
		public EnumDeclarationContext enumDeclaration(int i) {
			return getRuleContext(EnumDeclarationContext.class,i);
		}
		public MessageBodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_messageBody; }
	}

	public final MessageBodyContext messageBody() throws RecognitionException {
		MessageBodyContext _localctx = new MessageBodyContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_messageBody);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(141);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==ENUM || _la==IDENTIFIER) {
				{
				setState(139);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case IDENTIFIER:
					{
					setState(137);
					fieldDeclaration();
					}
					break;
				case ENUM:
					{
					setState(138);
					enumDeclaration();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(143);
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

	public static class FieldDeclarationContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public PositionContext position() {
			return getRuleContext(PositionContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(TypedefParser.SEMI, 0); }
		public TerminalNode EQ() { return getToken(TypedefParser.EQ, 0); }
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public FieldDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fieldDeclaration; }
	}

	public final FieldDeclarationContext fieldDeclaration() throws RecognitionException {
		FieldDeclarationContext _localctx = new FieldDeclarationContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_fieldDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(144);
			identifier();
			setState(145);
			match(COLON);
			setState(146);
			type();
			setState(147);
			position();
			setState(150);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==EQ) {
				{
				setState(148);
				match(EQ);
				setState(149);
				value();
				}
			}

			setState(152);
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

	public static class ValueContext extends ParserRuleContext {
		public LiteralContext literal() {
			return getRuleContext(LiteralContext.class,0);
		}
		public ArrayContext array() {
			return getRuleContext(ArrayContext.class,0);
		}
		public MapContext map() {
			return getRuleContext(MapContext.class,0);
		}
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public ValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_value; }
	}

	public final ValueContext value() throws RecognitionException {
		ValueContext _localctx = new ValueContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_value);
		try {
			setState(158);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case TRUE:
			case FALSE:
			case DECIMAL_LITERAL:
			case HEX_LITERAL:
			case OCT_LITERAL:
			case BINARY_LITERAL:
			case FLOAT_LITERAL:
			case HEX_FLOAT_LITERAL:
			case CHAR_LITERAL:
			case STRING_LITERAL:
			case TEXT_BLOCK:
				enterOuterAlt(_localctx, 1);
				{
				setState(154);
				literal();
				}
				break;
			case LBRACK:
				enterOuterAlt(_localctx, 2);
				{
				setState(155);
				array();
				}
				break;
			case LBRACE:
				enterOuterAlt(_localctx, 3);
				{
				setState(156);
				map();
				}
				break;
			case IDENTIFIER:
				enterOuterAlt(_localctx, 4);
				{
				setState(157);
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

	public static class ArrayContext extends ParserRuleContext {
		public TerminalNode LBRACK() { return getToken(TypedefParser.LBRACK, 0); }
		public TerminalNode RBRACK() { return getToken(TypedefParser.RBRACK, 0); }
		public List<ValueContext> value() {
			return getRuleContexts(ValueContext.class);
		}
		public ValueContext value(int i) {
			return getRuleContext(ValueContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(TypedefParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(TypedefParser.COMMA, i);
		}
		public ArrayContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_array; }
	}

	public final ArrayContext array() throws RecognitionException {
		ArrayContext _localctx = new ArrayContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_array);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(160);
			match(LBRACK);
			setState(169);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << TRUE) | (1L << FALSE) | (1L << DECIMAL_LITERAL) | (1L << HEX_LITERAL) | (1L << OCT_LITERAL) | (1L << BINARY_LITERAL) | (1L << FLOAT_LITERAL) | (1L << HEX_FLOAT_LITERAL) | (1L << CHAR_LITERAL) | (1L << STRING_LITERAL) | (1L << TEXT_BLOCK) | (1L << LBRACE) | (1L << LBRACK) | (1L << IDENTIFIER))) != 0)) {
				{
				setState(161);
				value();
				setState(166);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(162);
						match(COMMA);
						setState(163);
						value();
						}
						} 
					}
					setState(168);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
				}
				}
			}

			setState(172);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==COMMA) {
				{
				setState(171);
				match(COMMA);
				}
			}

			setState(174);
			match(RBRACK);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class MapContext extends ParserRuleContext {
		public TerminalNode LBRACE() { return getToken(TypedefParser.LBRACE, 0); }
		public TerminalNode RBRACE() { return getToken(TypedefParser.RBRACE, 0); }
		public List<KeyValueContext> keyValue() {
			return getRuleContexts(KeyValueContext.class);
		}
		public KeyValueContext keyValue(int i) {
			return getRuleContext(KeyValueContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(TypedefParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(TypedefParser.COMMA, i);
		}
		public MapContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_map; }
	}

	public final MapContext map() throws RecognitionException {
		MapContext _localctx = new MapContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_map);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(176);
			match(LBRACE);
			setState(188);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==IDENTIFIER) {
				{
				setState(177);
				keyValue();
				setState(182);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,15,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(178);
						match(COMMA);
						setState(179);
						keyValue();
						}
						} 
					}
					setState(184);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,15,_ctx);
				}
				setState(186);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==COMMA) {
					{
					setState(185);
					match(COMMA);
					}
				}

				}
			}

			setState(190);
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

	public static class KeyValueContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode COLON() { return getToken(TypedefParser.COLON, 0); }
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public KeyValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_keyValue; }
	}

	public final KeyValueContext keyValue() throws RecognitionException {
		KeyValueContext _localctx = new KeyValueContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_keyValue);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(192);
			identifier();
			setState(193);
			match(COLON);
			setState(194);
			value();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeContext extends ParserRuleContext {
		public ArrayIdentifierContext arrayIdentifier() {
			return getRuleContext(ArrayIdentifierContext.class,0);
		}
		public TypeTypeContext typeType() {
			return getRuleContext(TypeTypeContext.class,0);
		}
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_type);
		try {
			setState(198);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(196);
				arrayIdentifier();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(197);
				typeType();
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

	public static class ArrayIdentifierContext extends ParserRuleContext {
		public TypeTypeContext typeType() {
			return getRuleContext(TypeTypeContext.class,0);
		}
		public TerminalNode LBRACK() { return getToken(TypedefParser.LBRACK, 0); }
		public TerminalNode RBRACK() { return getToken(TypedefParser.RBRACK, 0); }
		public IntegerLiteralContext integerLiteral() {
			return getRuleContext(IntegerLiteralContext.class,0);
		}
		public ArrayIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arrayIdentifier; }
	}

	public final ArrayIdentifierContext arrayIdentifier() throws RecognitionException {
		ArrayIdentifierContext _localctx = new ArrayIdentifierContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_arrayIdentifier);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(200);
			typeType();
			setState(201);
			match(LBRACK);
			setState(203);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << DECIMAL_LITERAL) | (1L << HEX_LITERAL) | (1L << OCT_LITERAL) | (1L << BINARY_LITERAL))) != 0)) {
				{
				setState(202);
				integerLiteral();
				}
			}

			setState(205);
			match(RBRACK);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QualifiedNameContext extends ParserRuleContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public List<ModuleNameContext> moduleName() {
			return getRuleContexts(ModuleNameContext.class);
		}
		public ModuleNameContext moduleName(int i) {
			return getRuleContext(ModuleNameContext.class,i);
		}
		public List<TerminalNode> PS() { return getTokens(TypedefParser.PS); }
		public TerminalNode PS(int i) {
			return getToken(TypedefParser.PS, i);
		}
		public List<TerminalNode> DOT() { return getTokens(TypedefParser.DOT); }
		public TerminalNode DOT(int i) {
			return getToken(TypedefParser.DOT, i);
		}
		public QualifiedNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_qualifiedName; }
	}

	public final QualifiedNameContext qualifiedName() throws RecognitionException {
		QualifiedNameContext _localctx = new QualifiedNameContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_qualifiedName);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(212);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,20,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(207);
					moduleName();
					setState(208);
					match(PS);
					}
					} 
				}
				setState(214);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,20,_ctx);
			}
			setState(215);
			identifier();
			setState(220);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==DOT) {
				{
				{
				setState(216);
				match(DOT);
				setState(217);
				identifier();
				}
				}
				setState(222);
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

	public static class ModuleNameContext extends ParserRuleContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public List<TerminalNode> PS() { return getTokens(TypedefParser.PS); }
		public TerminalNode PS(int i) {
			return getToken(TypedefParser.PS, i);
		}
		public ModuleNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_moduleName; }
	}

	public final ModuleNameContext moduleName() throws RecognitionException {
		ModuleNameContext _localctx = new ModuleNameContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_moduleName);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(223);
			identifier();
			setState(228);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(224);
					match(PS);
					setState(225);
					identifier();
					}
					} 
				}
				setState(230);
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

	public static class PositionContext extends ParserRuleContext {
		public TerminalNode AT() { return getToken(TypedefParser.AT, 0); }
		public IntegerLiteralContext integerLiteral() {
			return getRuleContext(IntegerLiteralContext.class,0);
		}
		public PositionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_position; }
	}

	public final PositionContext position() throws RecognitionException {
		PositionContext _localctx = new PositionContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_position);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(231);
			match(AT);
			setState(232);
			integerLiteral();
			}
		}
		catch (RecognitionException re) {
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
		public TerminalNode IDENTIFIER() { return getToken(TypedefParser.IDENTIFIER, 0); }
		public IdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifier; }
	}

	public final IdentifierContext identifier() throws RecognitionException {
		IdentifierContext _localctx = new IdentifierContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_identifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(234);
			match(IDENTIFIER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LiteralContext extends ParserRuleContext {
		public IntegerLiteralContext integerLiteral() {
			return getRuleContext(IntegerLiteralContext.class,0);
		}
		public FloatLiteralContext floatLiteral() {
			return getRuleContext(FloatLiteralContext.class,0);
		}
		public TerminalNode CHAR_LITERAL() { return getToken(TypedefParser.CHAR_LITERAL, 0); }
		public TerminalNode STRING_LITERAL() { return getToken(TypedefParser.STRING_LITERAL, 0); }
		public BoolLiteralContext boolLiteral() {
			return getRuleContext(BoolLiteralContext.class,0);
		}
		public TerminalNode TEXT_BLOCK() { return getToken(TypedefParser.TEXT_BLOCK, 0); }
		public LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literal; }
	}

	public final LiteralContext literal() throws RecognitionException {
		LiteralContext _localctx = new LiteralContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_literal);
		try {
			setState(242);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DECIMAL_LITERAL:
			case HEX_LITERAL:
			case OCT_LITERAL:
			case BINARY_LITERAL:
				enterOuterAlt(_localctx, 1);
				{
				setState(236);
				integerLiteral();
				}
				break;
			case FLOAT_LITERAL:
			case HEX_FLOAT_LITERAL:
				enterOuterAlt(_localctx, 2);
				{
				setState(237);
				floatLiteral();
				}
				break;
			case CHAR_LITERAL:
				enterOuterAlt(_localctx, 3);
				{
				setState(238);
				match(CHAR_LITERAL);
				}
				break;
			case STRING_LITERAL:
				enterOuterAlt(_localctx, 4);
				{
				setState(239);
				match(STRING_LITERAL);
				}
				break;
			case TRUE:
			case FALSE:
				enterOuterAlt(_localctx, 5);
				{
				setState(240);
				boolLiteral();
				}
				break;
			case TEXT_BLOCK:
				enterOuterAlt(_localctx, 6);
				{
				setState(241);
				match(TEXT_BLOCK);
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

	public static class SemverContext extends ParserRuleContext {
		public TerminalNode SEMVER() { return getToken(TypedefParser.SEMVER, 0); }
		public SemverContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_semver; }
	}

	public final SemverContext semver() throws RecognitionException {
		SemverContext _localctx = new SemverContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_semver);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(244);
			match(SEMVER);
			}
		}
		catch (RecognitionException re) {
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
		public TerminalNode TRUE() { return getToken(TypedefParser.TRUE, 0); }
		public TerminalNode FALSE() { return getToken(TypedefParser.FALSE, 0); }
		public BoolLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_boolLiteral; }
	}

	public final BoolLiteralContext boolLiteral() throws RecognitionException {
		BoolLiteralContext _localctx = new BoolLiteralContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_boolLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(246);
			_la = _input.LA(1);
			if ( !(_la==TRUE || _la==FALSE) ) {
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

	public static class IntegerLiteralContext extends ParserRuleContext {
		public TerminalNode DECIMAL_LITERAL() { return getToken(TypedefParser.DECIMAL_LITERAL, 0); }
		public TerminalNode HEX_LITERAL() { return getToken(TypedefParser.HEX_LITERAL, 0); }
		public TerminalNode OCT_LITERAL() { return getToken(TypedefParser.OCT_LITERAL, 0); }
		public TerminalNode BINARY_LITERAL() { return getToken(TypedefParser.BINARY_LITERAL, 0); }
		public IntegerLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_integerLiteral; }
	}

	public final IntegerLiteralContext integerLiteral() throws RecognitionException {
		IntegerLiteralContext _localctx = new IntegerLiteralContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_integerLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(248);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << DECIMAL_LITERAL) | (1L << HEX_LITERAL) | (1L << OCT_LITERAL) | (1L << BINARY_LITERAL))) != 0)) ) {
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

	public static class FloatLiteralContext extends ParserRuleContext {
		public TerminalNode FLOAT_LITERAL() { return getToken(TypedefParser.FLOAT_LITERAL, 0); }
		public TerminalNode HEX_FLOAT_LITERAL() { return getToken(TypedefParser.HEX_FLOAT_LITERAL, 0); }
		public FloatLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_floatLiteral; }
	}

	public final FloatLiteralContext floatLiteral() throws RecognitionException {
		FloatLiteralContext _localctx = new FloatLiteralContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_floatLiteral);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(250);
			_la = _input.LA(1);
			if ( !(_la==FLOAT_LITERAL || _la==HEX_FLOAT_LITERAL) ) {
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

	public static class TypeTypeContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public PrimitiveTypeContext primitiveType() {
			return getRuleContext(PrimitiveTypeContext.class,0);
		}
		public List<TerminalNode> LBRACK() { return getTokens(TypedefParser.LBRACK); }
		public TerminalNode LBRACK(int i) {
			return getToken(TypedefParser.LBRACK, i);
		}
		public List<IntegerLiteralContext> integerLiteral() {
			return getRuleContexts(IntegerLiteralContext.class);
		}
		public IntegerLiteralContext integerLiteral(int i) {
			return getRuleContext(IntegerLiteralContext.class,i);
		}
		public List<TerminalNode> RBRACK() { return getTokens(TypedefParser.RBRACK); }
		public TerminalNode RBRACK(int i) {
			return getToken(TypedefParser.RBRACK, i);
		}
		public TypeTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeType; }
	}

	public final TypeTypeContext typeType() throws RecognitionException {
		TypeTypeContext _localctx = new TypeTypeContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_typeType);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(254);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IDENTIFIER:
				{
				setState(252);
				identifier();
				}
				break;
			case BOOL:
			case BYTE:
			case FLOAT32:
			case FLOAT64:
			case INT8:
			case INT16:
			case INT32:
			case INT64:
			case UINT8:
			case UINT16:
			case UINT32:
			case UINT64:
			case FLOAT16:
				{
				setState(253);
				primitiveType();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(262);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,25,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(256);
					match(LBRACK);
					setState(257);
					integerLiteral();
					setState(258);
					match(RBRACK);
					}
					} 
				}
				setState(264);
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

	public static class PrimitiveFixedPointTypeContext extends ParserRuleContext {
		public TerminalNode BYTE() { return getToken(TypedefParser.BYTE, 0); }
		public TerminalNode INT8() { return getToken(TypedefParser.INT8, 0); }
		public TerminalNode UINT8() { return getToken(TypedefParser.UINT8, 0); }
		public TerminalNode INT16() { return getToken(TypedefParser.INT16, 0); }
		public TerminalNode UINT16() { return getToken(TypedefParser.UINT16, 0); }
		public TerminalNode INT32() { return getToken(TypedefParser.INT32, 0); }
		public TerminalNode UINT32() { return getToken(TypedefParser.UINT32, 0); }
		public TerminalNode INT64() { return getToken(TypedefParser.INT64, 0); }
		public TerminalNode UINT64() { return getToken(TypedefParser.UINT64, 0); }
		public PrimitiveFixedPointTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primitiveFixedPointType; }
	}

	public final PrimitiveFixedPointTypeContext primitiveFixedPointType() throws RecognitionException {
		PrimitiveFixedPointTypeContext _localctx = new PrimitiveFixedPointTypeContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_primitiveFixedPointType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(265);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BYTE) | (1L << INT8) | (1L << INT16) | (1L << INT32) | (1L << INT64) | (1L << UINT8) | (1L << UINT16) | (1L << UINT32) | (1L << UINT64))) != 0)) ) {
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

	public static class PrimitiveTypeContext extends ParserRuleContext {
		public TerminalNode BOOL() { return getToken(TypedefParser.BOOL, 0); }
		public TerminalNode BYTE() { return getToken(TypedefParser.BYTE, 0); }
		public TerminalNode INT8() { return getToken(TypedefParser.INT8, 0); }
		public TerminalNode UINT8() { return getToken(TypedefParser.UINT8, 0); }
		public TerminalNode INT16() { return getToken(TypedefParser.INT16, 0); }
		public TerminalNode UINT16() { return getToken(TypedefParser.UINT16, 0); }
		public TerminalNode INT32() { return getToken(TypedefParser.INT32, 0); }
		public TerminalNode UINT32() { return getToken(TypedefParser.UINT32, 0); }
		public TerminalNode INT64() { return getToken(TypedefParser.INT64, 0); }
		public TerminalNode UINT64() { return getToken(TypedefParser.UINT64, 0); }
		public TerminalNode FLOAT16() { return getToken(TypedefParser.FLOAT16, 0); }
		public TerminalNode FLOAT32() { return getToken(TypedefParser.FLOAT32, 0); }
		public TerminalNode FLOAT64() { return getToken(TypedefParser.FLOAT64, 0); }
		public PrimitiveTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primitiveType; }
	}

	public final PrimitiveTypeContext primitiveType() throws RecognitionException {
		PrimitiveTypeContext _localctx = new PrimitiveTypeContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_primitiveType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(267);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << BOOL) | (1L << BYTE) | (1L << FLOAT32) | (1L << FLOAT64) | (1L << INT8) | (1L << INT16) | (1L << INT32) | (1L << INT64) | (1L << UINT8) | (1L << UINT16) | (1L << UINT32) | (1L << UINT64) | (1L << FLOAT16))) != 0)) ) {
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3=\u0110\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\3\2\3\2\3"+
		"\2\7\2B\n\2\f\2\16\2E\13\2\3\2\3\2\7\2I\n\2\f\2\16\2L\13\2\3\2\3\2\3\3"+
		"\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\5\3\5\5\5[\n\5\3\6\3\6\3\6\3\6\5\6"+
		"a\n\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b"+
		"\3\b\3\t\3\t\3\t\6\tw\n\t\r\t\16\tx\3\t\3\t\5\t}\n\t\5\t\177\n\t\3\n\3"+
		"\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\f\3\f\7\f\u008e\n\f\f"+
		"\f\16\f\u0091\13\f\3\r\3\r\3\r\3\r\3\r\3\r\5\r\u0099\n\r\3\r\3\r\3\16"+
		"\3\16\3\16\3\16\5\16\u00a1\n\16\3\17\3\17\3\17\3\17\7\17\u00a7\n\17\f"+
		"\17\16\17\u00aa\13\17\5\17\u00ac\n\17\3\17\5\17\u00af\n\17\3\17\3\17\3"+
		"\20\3\20\3\20\3\20\7\20\u00b7\n\20\f\20\16\20\u00ba\13\20\3\20\5\20\u00bd"+
		"\n\20\5\20\u00bf\n\20\3\20\3\20\3\21\3\21\3\21\3\21\3\22\3\22\5\22\u00c9"+
		"\n\22\3\23\3\23\3\23\5\23\u00ce\n\23\3\23\3\23\3\24\3\24\3\24\7\24\u00d5"+
		"\n\24\f\24\16\24\u00d8\13\24\3\24\3\24\3\24\7\24\u00dd\n\24\f\24\16\24"+
		"\u00e0\13\24\3\25\3\25\3\25\7\25\u00e5\n\25\f\25\16\25\u00e8\13\25\3\26"+
		"\3\26\3\26\3\27\3\27\3\30\3\30\3\30\3\30\3\30\3\30\5\30\u00f5\n\30\3\31"+
		"\3\31\3\32\3\32\3\33\3\33\3\34\3\34\3\35\3\35\5\35\u0101\n\35\3\35\3\35"+
		"\3\35\3\35\7\35\u0107\n\35\f\35\16\35\u010a\13\35\3\36\3\36\3\37\3\37"+
		"\3\37\2\2 \2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\66"+
		"8:<\2\7\3\2\33\34\4\2  #%\3\2&\'\4\2\4\4\7\16\3\2\3\17\2\u0111\2>\3\2"+
		"\2\2\4O\3\2\2\2\6T\3\2\2\2\bZ\3\2\2\2\n\\\3\2\2\2\fd\3\2\2\2\16i\3\2\2"+
		"\2\20v\3\2\2\2\22\u0080\3\2\2\2\24\u0084\3\2\2\2\26\u008f\3\2\2\2\30\u0092"+
		"\3\2\2\2\32\u00a0\3\2\2\2\34\u00a2\3\2\2\2\36\u00b2\3\2\2\2 \u00c2\3\2"+
		"\2\2\"\u00c8\3\2\2\2$\u00ca\3\2\2\2&\u00d6\3\2\2\2(\u00e1\3\2\2\2*\u00e9"+
		"\3\2\2\2,\u00ec\3\2\2\2.\u00f4\3\2\2\2\60\u00f6\3\2\2\2\62\u00f8\3\2\2"+
		"\2\64\u00fa\3\2\2\2\66\u00fc\3\2\2\28\u0100\3\2\2\2:\u010b\3\2\2\2<\u010d"+
		"\3\2\2\2>?\5\4\3\2?C\5\6\4\2@B\5\b\5\2A@\3\2\2\2BE\3\2\2\2CA\3\2\2\2C"+
		"D\3\2\2\2DJ\3\2\2\2EC\3\2\2\2FI\5\16\b\2GI\5\24\13\2HF\3\2\2\2HG\3\2\2"+
		"\2IL\3\2\2\2JH\3\2\2\2JK\3\2\2\2KM\3\2\2\2LJ\3\2\2\2MN\7\2\2\3N\3\3\2"+
		"\2\2OP\7\35\2\2PQ\7\67\2\2QR\7=\2\2RS\7\62\2\2S\5\3\2\2\2TU\7\31\2\2U"+
		"V\5(\25\2VW\7\62\2\2W\7\3\2\2\2X[\5\n\6\2Y[\5\f\7\2ZX\3\2\2\2ZY\3\2\2"+
		"\2[\t\3\2\2\2\\]\7\25\2\2]`\5&\24\2^_\7\36\2\2_a\5,\27\2`^\3\2\2\2`a\3"+
		"\2\2\2ab\3\2\2\2bc\7\62\2\2c\13\3\2\2\2de\7\25\2\2ef\5&\24\2fg\7\66\2"+
		"\2gh\7\62\2\2h\r\3\2\2\2ij\7\22\2\2jk\5,\27\2kl\7\63\2\2lm\5:\36\2mn\3"+
		"\2\2\2no\7.\2\2op\5\20\t\2pq\7/\2\2qr\7\62\2\2r\17\3\2\2\2st\5\22\n\2"+
		"tu\7\64\2\2uw\3\2\2\2vs\3\2\2\2wx\3\2\2\2xv\3\2\2\2xy\3\2\2\2y~\3\2\2"+
		"\2z|\5\22\n\2{}\7\64\2\2|{\3\2\2\2|}\3\2\2\2}\177\3\2\2\2~z\3\2\2\2~\177"+
		"\3\2\2\2\177\21\3\2\2\2\u0080\u0081\5,\27\2\u0081\u0082\7\67\2\2\u0082"+
		"\u0083\5\64\33\2\u0083\23\3\2\2\2\u0084\u0085\7\30\2\2\u0085\u0086\5,"+
		"\27\2\u0086\u0087\7.\2\2\u0087\u0088\5\26\f\2\u0088\u0089\7/\2\2\u0089"+
		"\u008a\7\62\2\2\u008a\25\3\2\2\2\u008b\u008e\5\30\r\2\u008c\u008e\5\16"+
		"\b\2\u008d\u008b\3\2\2\2\u008d\u008c\3\2\2\2\u008e\u0091\3\2\2\2\u008f"+
		"\u008d\3\2\2\2\u008f\u0090\3\2\2\2\u0090\27\3\2\2\2\u0091\u008f\3\2\2"+
		"\2\u0092\u0093\5,\27\2\u0093\u0094\7\63\2\2\u0094\u0095\5\"\22\2\u0095"+
		"\u0098\5*\26\2\u0096\u0097\7\67\2\2\u0097\u0099\5\32\16\2\u0098\u0096"+
		"\3\2\2\2\u0098\u0099\3\2\2\2\u0099\u009a\3\2\2\2\u009a\u009b\7\62\2\2"+
		"\u009b\31\3\2\2\2\u009c\u00a1\5.\30\2\u009d\u00a1\5\34\17\2\u009e\u00a1"+
		"\5\36\20\2\u009f\u00a1\5,\27\2\u00a0\u009c\3\2\2\2\u00a0\u009d\3\2\2\2"+
		"\u00a0\u009e\3\2\2\2\u00a0\u009f\3\2\2\2\u00a1\33\3\2\2\2\u00a2\u00ab"+
		"\7\60\2\2\u00a3\u00a8\5\32\16\2\u00a4\u00a5\7\64\2\2\u00a5\u00a7\5\32"+
		"\16\2\u00a6\u00a4\3\2\2\2\u00a7\u00aa\3\2\2\2\u00a8\u00a6\3\2\2\2\u00a8"+
		"\u00a9\3\2\2\2\u00a9\u00ac\3\2\2\2\u00aa\u00a8\3\2\2\2\u00ab\u00a3\3\2"+
		"\2\2\u00ab\u00ac\3\2\2\2\u00ac\u00ae\3\2\2\2\u00ad\u00af\7\64\2\2\u00ae"+
		"\u00ad\3\2\2\2\u00ae\u00af\3\2\2\2\u00af\u00b0\3\2\2\2\u00b0\u00b1\7\61"+
		"\2\2\u00b1\35\3\2\2\2\u00b2\u00be\7.\2\2\u00b3\u00b8\5 \21\2\u00b4\u00b5"+
		"\7\64\2\2\u00b5\u00b7\5 \21\2\u00b6\u00b4\3\2\2\2\u00b7\u00ba\3\2\2\2"+
		"\u00b8\u00b6\3\2\2\2\u00b8\u00b9\3\2\2\2\u00b9\u00bc\3\2\2\2\u00ba\u00b8"+
		"\3\2\2\2\u00bb\u00bd\7\64\2\2\u00bc\u00bb\3\2\2\2\u00bc\u00bd\3\2\2\2"+
		"\u00bd\u00bf\3\2\2\2\u00be\u00b3\3\2\2\2\u00be\u00bf\3\2\2\2\u00bf\u00c0"+
		"\3\2\2\2\u00c0\u00c1\7/\2\2\u00c1\37\3\2\2\2\u00c2\u00c3\5,\27\2\u00c3"+
		"\u00c4\7\63\2\2\u00c4\u00c5\5\32\16\2\u00c5!\3\2\2\2\u00c6\u00c9\5$\23"+
		"\2\u00c7\u00c9\58\35\2\u00c8\u00c6\3\2\2\2\u00c8\u00c7\3\2\2\2\u00c9#"+
		"\3\2\2\2\u00ca\u00cb\58\35\2\u00cb\u00cd\7\60\2\2\u00cc\u00ce\5\64\33"+
		"\2\u00cd\u00cc\3\2\2\2\u00cd\u00ce\3\2\2\2\u00ce\u00cf\3\2\2\2\u00cf\u00d0"+
		"\7\61\2\2\u00d0%\3\2\2\2\u00d1\u00d2\5(\25\2\u00d2\u00d3\79\2\2\u00d3"+
		"\u00d5\3\2\2\2\u00d4\u00d1\3\2\2\2\u00d5\u00d8\3\2\2\2\u00d6\u00d4\3\2"+
		"\2\2\u00d6\u00d7\3\2\2\2\u00d7\u00d9\3\2\2\2\u00d8\u00d6\3\2\2\2\u00d9"+
		"\u00de\5,\27\2\u00da\u00db\7\65\2\2\u00db\u00dd\5,\27\2\u00dc\u00da\3"+
		"\2\2\2\u00dd\u00e0\3\2\2\2\u00de\u00dc\3\2\2\2\u00de\u00df\3\2\2\2\u00df"+
		"\'\3\2\2\2\u00e0\u00de\3\2\2\2\u00e1\u00e6\5,\27\2\u00e2\u00e3\79\2\2"+
		"\u00e3\u00e5\5,\27\2\u00e4\u00e2\3\2\2\2\u00e5\u00e8\3\2\2\2\u00e6\u00e4"+
		"\3\2\2\2\u00e6\u00e7\3\2\2\2\u00e7)\3\2\2\2\u00e8\u00e6\3\2\2\2\u00e9"+
		"\u00ea\78\2\2\u00ea\u00eb\5\64\33\2\u00eb+\3\2\2\2\u00ec\u00ed\7=\2\2"+
		"\u00ed-\3\2\2\2\u00ee\u00f5\5\64\33\2\u00ef\u00f5\5\66\34\2\u00f0\u00f5"+
		"\7)\2\2\u00f1\u00f5\7*\2\2\u00f2\u00f5\5\62\32\2\u00f3\u00f5\7+\2\2\u00f4"+
		"\u00ee\3\2\2\2\u00f4\u00ef\3\2\2\2\u00f4\u00f0\3\2\2\2\u00f4\u00f1\3\2"+
		"\2\2\u00f4\u00f2\3\2\2\2\u00f4\u00f3\3\2\2\2\u00f5/\3\2\2\2\u00f6\u00f7"+
		"\7\37\2\2\u00f7\61\3\2\2\2\u00f8\u00f9\t\2\2\2\u00f9\63\3\2\2\2\u00fa"+
		"\u00fb\t\3\2\2\u00fb\65\3\2\2\2\u00fc\u00fd\t\4\2\2\u00fd\67\3\2\2\2\u00fe"+
		"\u0101\5,\27\2\u00ff\u0101\5<\37\2\u0100\u00fe\3\2\2\2\u0100\u00ff\3\2"+
		"\2\2\u0101\u0108\3\2\2\2\u0102\u0103\7\60\2\2\u0103\u0104\5\64\33\2\u0104"+
		"\u0105\7\61\2\2\u0105\u0107\3\2\2\2\u0106\u0102\3\2\2\2\u0107\u010a\3"+
		"\2\2\2\u0108\u0106\3\2\2\2\u0108\u0109\3\2\2\2\u01099\3\2\2\2\u010a\u0108"+
		"\3\2\2\2\u010b\u010c\t\5\2\2\u010c;\3\2\2\2\u010d\u010e\t\6\2\2\u010e"+
		"=\3\2\2\2\34CHJZ`x|~\u008d\u008f\u0098\u00a0\u00a8\u00ab\u00ae\u00b8\u00bc"+
		"\u00be\u00c8\u00cd\u00d6\u00de\u00e6\u00f4\u0100\u0108";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}