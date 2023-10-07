// Generated from /home/dpemmons/src/typedef/libtypedef/parser/grammar/TypedefParser.g4 by ANTLR 4.13.1

#include "libtypedef/parser/gramamr_types.h"

import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link TypedefParser}.
 */
public interface TypedefParserListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link TypedefParser#compilationUnit}.
	 * @param ctx the parse tree
	 */
	void enterCompilationUnit(TypedefParser.CompilationUnitContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#compilationUnit}.
	 * @param ctx the parse tree
	 */
	void exitCompilationUnit(TypedefParser.CompilationUnitContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#typedefVersionDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterTypedefVersionDeclaration(TypedefParser.TypedefVersionDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#typedefVersionDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitTypedefVersionDeclaration(TypedefParser.TypedefVersionDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#moduleDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterModuleDeclaration(TypedefParser.ModuleDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#moduleDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitModuleDeclaration(TypedefParser.ModuleDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#typeDefinition}.
	 * @param ctx the parse tree
	 */
	void enterTypeDefinition(TypedefParser.TypeDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#typeDefinition}.
	 * @param ctx the parse tree
	 */
	void exitTypeDefinition(TypedefParser.TypeDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#fieldBlock}.
	 * @param ctx the parse tree
	 */
	void enterFieldBlock(TypedefParser.FieldBlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#fieldBlock}.
	 * @param ctx the parse tree
	 */
	void exitFieldBlock(TypedefParser.FieldBlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#fieldDefinition}.
	 * @param ctx the parse tree
	 */
	void enterFieldDefinition(TypedefParser.FieldDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#fieldDefinition}.
	 * @param ctx the parse tree
	 */
	void exitFieldDefinition(TypedefParser.FieldDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#typeAnnotation}.
	 * @param ctx the parse tree
	 */
	void enterTypeAnnotation(TypedefParser.TypeAnnotationContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#typeAnnotation}.
	 * @param ctx the parse tree
	 */
	void exitTypeAnnotation(TypedefParser.TypeAnnotationContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#typeIdentifier}.
	 * @param ctx the parse tree
	 */
	void enterTypeIdentifier(TypedefParser.TypeIdentifierContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#typeIdentifier}.
	 * @param ctx the parse tree
	 */
	void exitTypeIdentifier(TypedefParser.TypeIdentifierContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#userType}.
	 * @param ctx the parse tree
	 */
	void enterUserType(TypedefParser.UserTypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#userType}.
	 * @param ctx the parse tree
	 */
	void exitUserType(TypedefParser.UserTypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#tmplDefinition}.
	 * @param ctx the parse tree
	 */
	void enterTmplDefinition(TypedefParser.TmplDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#tmplDefinition}.
	 * @param ctx the parse tree
	 */
	void exitTmplDefinition(TypedefParser.TmplDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#tmplBlock}.
	 * @param ctx the parse tree
	 */
	void enterTmplBlock(TypedefParser.TmplBlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#tmplBlock}.
	 * @param ctx the parse tree
	 */
	void exitTmplBlock(TypedefParser.TmplBlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#tmplItem}.
	 * @param ctx the parse tree
	 */
	void enterTmplItem(TypedefParser.TmplItemContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#tmplItem}.
	 * @param ctx the parse tree
	 */
	void exitTmplItem(TypedefParser.TmplItemContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#tmplText}.
	 * @param ctx the parse tree
	 */
	void enterTmplText(TypedefParser.TmplTextContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#tmplText}.
	 * @param ctx the parse tree
	 */
	void exitTmplText(TypedefParser.TmplTextContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#tmplExpression}.
	 * @param ctx the parse tree
	 */
	void enterTmplExpression(TypedefParser.TmplExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#tmplExpression}.
	 * @param ctx the parse tree
	 */
	void exitTmplExpression(TypedefParser.TmplExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#tmplFunctionCall}.
	 * @param ctx the parse tree
	 */
	void enterTmplFunctionCall(TypedefParser.TmplFunctionCallContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#tmplFunctionCall}.
	 * @param ctx the parse tree
	 */
	void exitTmplFunctionCall(TypedefParser.TmplFunctionCallContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#tmplIfBlock}.
	 * @param ctx the parse tree
	 */
	void enterTmplIfBlock(TypedefParser.TmplIfBlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#tmplIfBlock}.
	 * @param ctx the parse tree
	 */
	void exitTmplIfBlock(TypedefParser.TmplIfBlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#tmplIfSubBlock}.
	 * @param ctx the parse tree
	 */
	void enterTmplIfSubBlock(TypedefParser.TmplIfSubBlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#tmplIfSubBlock}.
	 * @param ctx the parse tree
	 */
	void exitTmplIfSubBlock(TypedefParser.TmplIfSubBlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#tmplElIfSubBlock}.
	 * @param ctx the parse tree
	 */
	void enterTmplElIfSubBlock(TypedefParser.TmplElIfSubBlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#tmplElIfSubBlock}.
	 * @param ctx the parse tree
	 */
	void exitTmplElIfSubBlock(TypedefParser.TmplElIfSubBlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#tmplElseSubBlock}.
	 * @param ctx the parse tree
	 */
	void enterTmplElseSubBlock(TypedefParser.TmplElseSubBlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#tmplElseSubBlock}.
	 * @param ctx the parse tree
	 */
	void exitTmplElseSubBlock(TypedefParser.TmplElseSubBlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#tmplForBlock}.
	 * @param ctx the parse tree
	 */
	void enterTmplForBlock(TypedefParser.TmplForBlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#tmplForBlock}.
	 * @param ctx the parse tree
	 */
	void exitTmplForBlock(TypedefParser.TmplForBlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#tmplSwitchBlock}.
	 * @param ctx the parse tree
	 */
	void enterTmplSwitchBlock(TypedefParser.TmplSwitchBlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#tmplSwitchBlock}.
	 * @param ctx the parse tree
	 */
	void exitTmplSwitchBlock(TypedefParser.TmplSwitchBlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#tmplCaseBlock}.
	 * @param ctx the parse tree
	 */
	void enterTmplCaseBlock(TypedefParser.TmplCaseBlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#tmplCaseBlock}.
	 * @param ctx the parse tree
	 */
	void exitTmplCaseBlock(TypedefParser.TmplCaseBlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#tmplDefaultBlock}.
	 * @param ctx the parse tree
	 */
	void enterTmplDefaultBlock(TypedefParser.TmplDefaultBlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#tmplDefaultBlock}.
	 * @param ctx the parse tree
	 */
	void exitTmplDefaultBlock(TypedefParser.TmplDefaultBlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#tmplBindingVariables}.
	 * @param ctx the parse tree
	 */
	void enterTmplBindingVariables(TypedefParser.TmplBindingVariablesContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#tmplBindingVariables}.
	 * @param ctx the parse tree
	 */
	void exitTmplBindingVariables(TypedefParser.TmplBindingVariablesContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#tmplValueReferencePath}.
	 * @param ctx the parse tree
	 */
	void enterTmplValueReferencePath(TypedefParser.TmplValueReferencePathContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#tmplValueReferencePath}.
	 * @param ctx the parse tree
	 */
	void exitTmplValueReferencePath(TypedefParser.TmplValueReferencePathContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#tmplValueReference}.
	 * @param ctx the parse tree
	 */
	void enterTmplValueReference(TypedefParser.TmplValueReferenceContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#tmplValueReference}.
	 * @param ctx the parse tree
	 */
	void exitTmplValueReference(TypedefParser.TmplValueReferenceContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#tmplBindingVariable}.
	 * @param ctx the parse tree
	 */
	void enterTmplBindingVariable(TypedefParser.TmplBindingVariableContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#tmplBindingVariable}.
	 * @param ctx the parse tree
	 */
	void exitTmplBindingVariable(TypedefParser.TmplBindingVariableContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#tmplIdentifier}.
	 * @param ctx the parse tree
	 */
	void enterTmplIdentifier(TypedefParser.TmplIdentifierContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#tmplIdentifier}.
	 * @param ctx the parse tree
	 */
	void exitTmplIdentifier(TypedefParser.TmplIdentifierContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#functionParameter}.
	 * @param ctx the parse tree
	 */
	void enterFunctionParameter(TypedefParser.FunctionParameterContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#functionParameter}.
	 * @param ctx the parse tree
	 */
	void exitFunctionParameter(TypedefParser.FunctionParameterContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#useDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterUseDeclaration(TypedefParser.UseDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#useDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitUseDeclaration(TypedefParser.UseDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#symbolPath}.
	 * @param ctx the parse tree
	 */
	void enterSymbolPath(TypedefParser.SymbolPathContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#symbolPath}.
	 * @param ctx the parse tree
	 */
	void exitSymbolPath(TypedefParser.SymbolPathContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#primitiveLiteral}.
	 * @param ctx the parse tree
	 */
	void enterPrimitiveLiteral(TypedefParser.PrimitiveLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#primitiveLiteral}.
	 * @param ctx the parse tree
	 */
	void exitPrimitiveLiteral(TypedefParser.PrimitiveLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#boolLiteral}.
	 * @param ctx the parse tree
	 */
	void enterBoolLiteral(TypedefParser.BoolLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#boolLiteral}.
	 * @param ctx the parse tree
	 */
	void exitBoolLiteral(TypedefParser.BoolLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#charLiteral}.
	 * @param ctx the parse tree
	 */
	void enterCharLiteral(TypedefParser.CharLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#charLiteral}.
	 * @param ctx the parse tree
	 */
	void exitCharLiteral(TypedefParser.CharLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#stringLiteral}.
	 * @param ctx the parse tree
	 */
	void enterStringLiteral(TypedefParser.StringLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#stringLiteral}.
	 * @param ctx the parse tree
	 */
	void exitStringLiteral(TypedefParser.StringLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#floatLiteral}.
	 * @param ctx the parse tree
	 */
	void enterFloatLiteral(TypedefParser.FloatLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#floatLiteral}.
	 * @param ctx the parse tree
	 */
	void exitFloatLiteral(TypedefParser.FloatLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#integerLiteral}.
	 * @param ctx the parse tree
	 */
	void enterIntegerLiteral(TypedefParser.IntegerLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#integerLiteral}.
	 * @param ctx the parse tree
	 */
	void exitIntegerLiteral(TypedefParser.IntegerLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#intDigits}.
	 * @param ctx the parse tree
	 */
	void enterIntDigits(TypedefParser.IntDigitsContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#intDigits}.
	 * @param ctx the parse tree
	 */
	void exitIntDigits(TypedefParser.IntDigitsContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#identifier}.
	 * @param ctx the parse tree
	 */
	void enterIdentifier(TypedefParser.IdentifierContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#identifier}.
	 * @param ctx the parse tree
	 */
	void exitIdentifier(TypedefParser.IdentifierContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#primitiveTypeIdentifier}.
	 * @param ctx the parse tree
	 */
	void enterPrimitiveTypeIdentifier(TypedefParser.PrimitiveTypeIdentifierContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#primitiveTypeIdentifier}.
	 * @param ctx the parse tree
	 */
	void exitPrimitiveTypeIdentifier(TypedefParser.PrimitiveTypeIdentifierContext ctx);
	/**
	 * Enter a parse tree produced by {@link TypedefParser#keyword}.
	 * @param ctx the parse tree
	 */
	void enterKeyword(TypedefParser.KeywordContext ctx);
	/**
	 * Exit a parse tree produced by {@link TypedefParser#keyword}.
	 * @param ctx the parse tree
	 */
	void exitKeyword(TypedefParser.KeywordContext ctx);
}