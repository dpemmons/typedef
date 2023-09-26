#include "libtypedef/parser/base_listener.h"

namespace td {

using namespace std;

void BaseListener::AddError(antlr4::ParserRuleContext* ctx,
                            ParserErrorInfo::Type type, string msg) {
  errors_list_.push_back(PEIBuilder()
                             .SetType(type)
                             .SetMessage(msg)
                             .SetCharOffset(ctx->start->getStartIndex())
                             .SetLine(ctx->start->getLine())
                             .SetLineOffset(ctx->start->getCharPositionInLine())
                             .SetLength(ctx->stop->getStopIndex() -
                                        ctx->start->getStartIndex() + 1)
                             .build());
}

void BaseListener::AddError(TypedefParser::IdentifierContext* identifier,
                            ParserErrorInfo::Type type) {
  AddError(identifier->nki, type);
}

void BaseListener::AddError(antlr4::Token* token, ParserErrorInfo::Type type,
                            string msg) {
  errors_list_.push_back(PEIBuilder()
                             .SetType(type)
                             .SetMessage(msg)
                             .SetCharOffset(token->getStartIndex())
                             .SetLine(token->getLine())
                             .SetLineOffset(token->getCharPositionInLine())
                             .SetLength(token->getText().length())
                             .build());
}

}  // namespace td