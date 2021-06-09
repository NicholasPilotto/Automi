
// Generated from pascal.g4 by ANTLR 4.9.2

#pragma once

#include "antlr4-runtime.h"
#include "pascalVisitor.h"

/**
 * This class provides an empty implementation of pascalVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the
 * available methods.
 */
class pascalBaseVisitor : public pascalVisitor {
 public:
  virtual antlrcpp::Any visitStart(pascalParser::StartContext* ctx) override { return visitChildren(ctx); }

  virtual antlrcpp::Any visitDecl_list(pascalParser::Decl_listContext* ctx) override { return visitChildren(ctx); }

  virtual antlrcpp::Any visitDecl(pascalParser::DeclContext* ctx) override { return visitChildren(ctx); }

  virtual antlrcpp::Any visitId_list(pascalParser::Id_listContext* ctx) override { return visitChildren(ctx); }

  virtual antlrcpp::Any visitMain_code(pascalParser::Main_codeContext* ctx) override { return visitChildren(ctx); }

  virtual antlrcpp::Any visitCode_block(pascalParser::Code_blockContext* ctx) override { return visitChildren(ctx); }

  virtual antlrcpp::Any visitSt_list(pascalParser::St_listContext* ctx) override { return visitChildren(ctx); }

  virtual antlrcpp::Any visitStatement(pascalParser::StatementContext* ctx) override { return visitChildren(ctx); }

  virtual antlrcpp::Any visitAssign(pascalParser::AssignContext* ctx) override { return visitChildren(ctx); }

  virtual antlrcpp::Any visitOut(pascalParser::OutContext* ctx) override { return visitChildren(ctx); }

  virtual antlrcpp::Any visitIn(pascalParser::InContext* ctx) override { return visitChildren(ctx); }

  virtual antlrcpp::Any visitBranch(pascalParser::BranchContext* ctx) override { return visitChildren(ctx); }

  virtual antlrcpp::Any visitLoop(pascalParser::LoopContext* ctx) override { return visitChildren(ctx); }

  virtual antlrcpp::Any visitExpr(pascalParser::ExprContext* ctx) override { return visitChildren(ctx); }

  virtual antlrcpp::Any visitGuard(pascalParser::GuardContext* ctx) override { return visitChildren(ctx); }

  virtual antlrcpp::Any visitRelation(pascalParser::RelationContext* ctx) override { return visitChildren(ctx); }
};
