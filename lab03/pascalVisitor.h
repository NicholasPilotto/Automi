
// Generated from pascal.g4 by ANTLR 4.9.2

#pragma once

#include "antlr4-runtime.h"
#include "pascalParser.h"

/**
 * This class defines an abstract visitor for a parse tree
 * produced by pascalParser.
 */
class pascalVisitor : public antlr4::tree::AbstractParseTreeVisitor {
 public:
  /**
   * Visit parse trees produced by pascalParser.
   */
  virtual antlrcpp::Any visitStart(pascalParser::StartContext* context) = 0;

  virtual antlrcpp::Any visitDecl_list(pascalParser::Decl_listContext* context) = 0;

  virtual antlrcpp::Any visitDecl(pascalParser::DeclContext* context) = 0;

  virtual antlrcpp::Any visitId_list(pascalParser::Id_listContext* context) = 0;

  virtual antlrcpp::Any visitMain_code(pascalParser::Main_codeContext* context) = 0;

  virtual antlrcpp::Any visitCode_block(pascalParser::Code_blockContext* context) = 0;

  virtual antlrcpp::Any visitSt_list(pascalParser::St_listContext* context) = 0;

  virtual antlrcpp::Any visitStatement(pascalParser::StatementContext* context) = 0;

  virtual antlrcpp::Any visitAssign(pascalParser::AssignContext* context) = 0;

  virtual antlrcpp::Any visitOut(pascalParser::OutContext* context) = 0;

  virtual antlrcpp::Any visitIn(pascalParser::InContext* context) = 0;

  virtual antlrcpp::Any visitBranch(pascalParser::BranchContext* context) = 0;

  virtual antlrcpp::Any visitLoop(pascalParser::LoopContext* context) = 0;

  virtual antlrcpp::Any visitExpr(pascalParser::ExprContext* context) = 0;

  virtual antlrcpp::Any visitGuard(pascalParser::GuardContext* context) = 0;

  virtual antlrcpp::Any visitRelation(pascalParser::RelationContext* context) = 0;
};
