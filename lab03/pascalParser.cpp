
// Generated from pascal.g4 by ANTLR 4.9.2

#include "pascalParser.h"

#include "pascalVisitor.h"

using namespace antlrcpp;
using namespace antlr4;

pascalParser::pascalParser(TokenStream* input) : Parser(input) { _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache); }

pascalParser::~pascalParser() { delete _interpreter; }

std::string pascalParser::getGrammarFileName() const { return "pascal.g4"; }

const std::vector<std::string>& pascalParser::getRuleNames() const { return _ruleNames; }

dfa::Vocabulary& pascalParser::getVocabulary() const { return _vocabulary; }

//----------------- StartContext
//------------------------------------------------------------------

pascalParser::StartContext::StartContext(ParserRuleContext* parent, size_t invokingState) : ParserRuleContext(parent, invokingState) {}

tree::TerminalNode* pascalParser::StartContext::ID() { return getToken(pascalParser::ID, 0); }

pascalParser::Decl_listContext* pascalParser::StartContext::decl_list() { return getRuleContext<pascalParser::Decl_listContext>(0); }

pascalParser::Main_codeContext* pascalParser::StartContext::main_code() { return getRuleContext<pascalParser::Main_codeContext>(0); }

tree::TerminalNode* pascalParser::StartContext::EOF() { return getToken(pascalParser::EOF, 0); }

size_t pascalParser::StartContext::getRuleIndex() const { return pascalParser::RuleStart; }

antlrcpp::Any pascalParser::StartContext::accept(tree::ParseTreeVisitor* visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::StartContext* pascalParser::start() {
  StartContext* _localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, pascalParser::RuleStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(32);
    match(pascalParser::T__0);
    setState(33);
    match(pascalParser::ID);
    setState(34);
    match(pascalParser::T__1);
    setState(35);
    match(pascalParser::T__2);
    setState(36);
    decl_list();
    setState(37);
    main_code();
    setState(38);
    match(pascalParser::EOF);

  } catch (RecognitionException& e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Decl_listContext
//------------------------------------------------------------------

pascalParser::Decl_listContext::Decl_listContext(ParserRuleContext* parent, size_t invokingState) : ParserRuleContext(parent, invokingState) {}

pascalParser::DeclContext* pascalParser::Decl_listContext::decl() { return getRuleContext<pascalParser::DeclContext>(0); }

pascalParser::Decl_listContext* pascalParser::Decl_listContext::decl_list() { return getRuleContext<pascalParser::Decl_listContext>(0); }

size_t pascalParser::Decl_listContext::getRuleIndex() const { return pascalParser::RuleDecl_list; }

antlrcpp::Any pascalParser::Decl_listContext::accept(tree::ParseTreeVisitor* visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitDecl_list(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::Decl_listContext* pascalParser::decl_list() {
  Decl_listContext* _localctx = _tracker.createInstance<Decl_listContext>(_ctx, getState());
  enterRule(_localctx, 2, pascalParser::RuleDecl_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(44);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        enterOuterAlt(_localctx, 1);
        setState(40);
        decl();
        break;
      }

      case 2: {
        enterOuterAlt(_localctx, 2);
        setState(41);
        decl();
        setState(42);
        decl_list();
        break;
      }

      default:
        break;
    }

  } catch (RecognitionException& e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext
//------------------------------------------------------------------

pascalParser::DeclContext::DeclContext(ParserRuleContext* parent, size_t invokingState) : ParserRuleContext(parent, invokingState) {}

pascalParser::Id_listContext* pascalParser::DeclContext::id_list() { return getRuleContext<pascalParser::Id_listContext>(0); }

size_t pascalParser::DeclContext::getRuleIndex() const { return pascalParser::RuleDecl; }

antlrcpp::Any pascalParser::DeclContext::accept(tree::ParseTreeVisitor* visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::DeclContext* pascalParser::decl() {
  DeclContext* _localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 4, pascalParser::RuleDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    id_list();
    setState(47);
    match(pascalParser::T__3);
    setState(48);
    match(pascalParser::T__4);
    setState(49);
    match(pascalParser::T__1);

  } catch (RecognitionException& e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Id_listContext
//------------------------------------------------------------------

pascalParser::Id_listContext::Id_listContext(ParserRuleContext* parent, size_t invokingState) : ParserRuleContext(parent, invokingState) {}

tree::TerminalNode* pascalParser::Id_listContext::ID() { return getToken(pascalParser::ID, 0); }

pascalParser::Id_listContext* pascalParser::Id_listContext::id_list() { return getRuleContext<pascalParser::Id_listContext>(0); }

size_t pascalParser::Id_listContext::getRuleIndex() const { return pascalParser::RuleId_list; }

antlrcpp::Any pascalParser::Id_listContext::accept(tree::ParseTreeVisitor* visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitId_list(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::Id_listContext* pascalParser::id_list() {
  Id_listContext* _localctx = _tracker.createInstance<Id_listContext>(_ctx, getState());
  enterRule(_localctx, 6, pascalParser::RuleId_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(55);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
      case 1: {
        enterOuterAlt(_localctx, 1);
        setState(51);
        match(pascalParser::ID);
        break;
      }

      case 2: {
        enterOuterAlt(_localctx, 2);
        setState(52);
        match(pascalParser::ID);
        setState(53);
        match(pascalParser::T__5);
        setState(54);
        id_list();
        break;
      }

      default:
        break;
    }

  } catch (RecognitionException& e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Main_codeContext
//------------------------------------------------------------------

pascalParser::Main_codeContext::Main_codeContext(ParserRuleContext* parent, size_t invokingState) : ParserRuleContext(parent, invokingState) {}

pascalParser::St_listContext* pascalParser::Main_codeContext::st_list() { return getRuleContext<pascalParser::St_listContext>(0); }

size_t pascalParser::Main_codeContext::getRuleIndex() const { return pascalParser::RuleMain_code; }

antlrcpp::Any pascalParser::Main_codeContext::accept(tree::ParseTreeVisitor* visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitMain_code(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::Main_codeContext* pascalParser::main_code() {
  Main_codeContext* _localctx = _tracker.createInstance<Main_codeContext>(_ctx, getState());
  enterRule(_localctx, 8, pascalParser::RuleMain_code);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(57);
    match(pascalParser::T__6);
    setState(58);
    st_list();
    setState(59);
    match(pascalParser::T__7);
    setState(60);
    match(pascalParser::T__8);

  } catch (RecognitionException& e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Code_blockContext
//------------------------------------------------------------------

pascalParser::Code_blockContext::Code_blockContext(ParserRuleContext* parent, size_t invokingState) : ParserRuleContext(parent, invokingState) {}

pascalParser::StatementContext* pascalParser::Code_blockContext::statement() { return getRuleContext<pascalParser::StatementContext>(0); }

pascalParser::St_listContext* pascalParser::Code_blockContext::st_list() { return getRuleContext<pascalParser::St_listContext>(0); }

size_t pascalParser::Code_blockContext::getRuleIndex() const { return pascalParser::RuleCode_block; }

antlrcpp::Any pascalParser::Code_blockContext::accept(tree::ParseTreeVisitor* visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitCode_block(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::Code_blockContext* pascalParser::code_block() {
  Code_blockContext* _localctx = _tracker.createInstance<Code_blockContext>(_ctx, getState());
  enterRule(_localctx, 10, pascalParser::RuleCode_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(67);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::T__10:
      case pascalParser::T__13:
      case pascalParser::T__14:
      case pascalParser::T__17:
      case pascalParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(62);
        statement();
        break;
      }

      case pascalParser::T__6: {
        enterOuterAlt(_localctx, 2);
        setState(63);
        match(pascalParser::T__6);
        setState(64);
        st_list();
        setState(65);
        match(pascalParser::T__7);
        break;
      }

      default:
        throw NoViableAltException(this);
    }

  } catch (RecognitionException& e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- St_listContext
//------------------------------------------------------------------

pascalParser::St_listContext::St_listContext(ParserRuleContext* parent, size_t invokingState) : ParserRuleContext(parent, invokingState) {}

pascalParser::StatementContext* pascalParser::St_listContext::statement() { return getRuleContext<pascalParser::StatementContext>(0); }

pascalParser::St_listContext* pascalParser::St_listContext::st_list() { return getRuleContext<pascalParser::St_listContext>(0); }

size_t pascalParser::St_listContext::getRuleIndex() const { return pascalParser::RuleSt_list; }

antlrcpp::Any pascalParser::St_listContext::accept(tree::ParseTreeVisitor* visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitSt_list(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::St_listContext* pascalParser::st_list() {
  St_listContext* _localctx = _tracker.createInstance<St_listContext>(_ctx, getState());
  enterRule(_localctx, 12, pascalParser::RuleSt_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(76);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
      case 1: {
        enterOuterAlt(_localctx, 1);
        setState(69);
        statement();
        setState(70);
        match(pascalParser::T__1);
        break;
      }

      case 2: {
        enterOuterAlt(_localctx, 2);
        setState(72);
        statement();
        setState(73);
        match(pascalParser::T__1);
        setState(74);
        st_list();
        break;
      }

      default:
        break;
    }

  } catch (RecognitionException& e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext
//------------------------------------------------------------------

pascalParser::StatementContext::StatementContext(ParserRuleContext* parent, size_t invokingState) : ParserRuleContext(parent, invokingState) {}

pascalParser::AssignContext* pascalParser::StatementContext::assign() { return getRuleContext<pascalParser::AssignContext>(0); }

pascalParser::BranchContext* pascalParser::StatementContext::branch() { return getRuleContext<pascalParser::BranchContext>(0); }

pascalParser::OutContext* pascalParser::StatementContext::out() { return getRuleContext<pascalParser::OutContext>(0); }

pascalParser::LoopContext* pascalParser::StatementContext::loop() { return getRuleContext<pascalParser::LoopContext>(0); }

pascalParser::InContext* pascalParser::StatementContext::in() { return getRuleContext<pascalParser::InContext>(0); }

size_t pascalParser::StatementContext::getRuleIndex() const { return pascalParser::RuleStatement; }

antlrcpp::Any pascalParser::StatementContext::accept(tree::ParseTreeVisitor* visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::StatementContext* pascalParser::statement() {
  StatementContext* _localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 14, pascalParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(83);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(78);
        assign();
        break;
      }

      case pascalParser::T__14: {
        enterOuterAlt(_localctx, 2);
        setState(79);
        branch();
        break;
      }

      case pascalParser::T__10: {
        enterOuterAlt(_localctx, 3);
        setState(80);
        out();
        break;
      }

      case pascalParser::T__17: {
        enterOuterAlt(_localctx, 4);
        setState(81);
        loop();
        break;
      }

      case pascalParser::T__13: {
        enterOuterAlt(_localctx, 5);
        setState(82);
        in();
        break;
      }

      default:
        throw NoViableAltException(this);
    }

  } catch (RecognitionException& e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext
//------------------------------------------------------------------

pascalParser::AssignContext::AssignContext(ParserRuleContext* parent, size_t invokingState) : ParserRuleContext(parent, invokingState) {}

tree::TerminalNode* pascalParser::AssignContext::ID() { return getToken(pascalParser::ID, 0); }

pascalParser::ExprContext* pascalParser::AssignContext::expr() { return getRuleContext<pascalParser::ExprContext>(0); }

size_t pascalParser::AssignContext::getRuleIndex() const { return pascalParser::RuleAssign; }

antlrcpp::Any pascalParser::AssignContext::accept(tree::ParseTreeVisitor* visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::AssignContext* pascalParser::assign() {
  AssignContext* _localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 16, pascalParser::RuleAssign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    match(pascalParser::ID);
    setState(86);
    match(pascalParser::T__9);
    setState(87);
    expr(0);

  } catch (RecognitionException& e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OutContext
//------------------------------------------------------------------

pascalParser::OutContext::OutContext(ParserRuleContext* parent, size_t invokingState) : ParserRuleContext(parent, invokingState) {}

pascalParser::ExprContext* pascalParser::OutContext::expr() { return getRuleContext<pascalParser::ExprContext>(0); }

tree::TerminalNode* pascalParser::OutContext::STRING() { return getToken(pascalParser::STRING, 0); }

size_t pascalParser::OutContext::getRuleIndex() const { return pascalParser::RuleOut; }

antlrcpp::Any pascalParser::OutContext::accept(tree::ParseTreeVisitor* visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitOut(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::OutContext* pascalParser::out() {
  OutContext* _localctx = _tracker.createInstance<OutContext>(_ctx, getState());
  enterRule(_localctx, 18, pascalParser::RuleOut);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(98);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
      case 1: {
        enterOuterAlt(_localctx, 1);
        setState(89);
        match(pascalParser::T__10);
        setState(90);
        match(pascalParser::T__11);
        setState(91);
        expr(0);
        setState(92);
        match(pascalParser::T__12);
        break;
      }

      case 2: {
        enterOuterAlt(_localctx, 2);
        setState(94);
        match(pascalParser::T__10);
        setState(95);
        match(pascalParser::T__11);
        setState(96);
        match(pascalParser::STRING);
        setState(97);
        match(pascalParser::T__12);
        break;
      }

      default:
        break;
    }

  } catch (RecognitionException& e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InContext
//------------------------------------------------------------------

pascalParser::InContext::InContext(ParserRuleContext* parent, size_t invokingState) : ParserRuleContext(parent, invokingState) {}

tree::TerminalNode* pascalParser::InContext::ID() { return getToken(pascalParser::ID, 0); }

size_t pascalParser::InContext::getRuleIndex() const { return pascalParser::RuleIn; }

antlrcpp::Any pascalParser::InContext::accept(tree::ParseTreeVisitor* visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitIn(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::InContext* pascalParser::in() {
  InContext* _localctx = _tracker.createInstance<InContext>(_ctx, getState());
  enterRule(_localctx, 20, pascalParser::RuleIn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    match(pascalParser::T__13);
    setState(101);
    match(pascalParser::T__11);
    setState(102);
    match(pascalParser::ID);
    setState(103);
    match(pascalParser::T__12);

  } catch (RecognitionException& e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BranchContext
//------------------------------------------------------------------

pascalParser::BranchContext::BranchContext(ParserRuleContext* parent, size_t invokingState) : ParserRuleContext(parent, invokingState) {}

pascalParser::GuardContext* pascalParser::BranchContext::guard() { return getRuleContext<pascalParser::GuardContext>(0); }

std::vector<pascalParser::Code_blockContext*> pascalParser::BranchContext::code_block() { return getRuleContexts<pascalParser::Code_blockContext>(); }

pascalParser::Code_blockContext* pascalParser::BranchContext::code_block(size_t i) { return getRuleContext<pascalParser::Code_blockContext>(i); }

size_t pascalParser::BranchContext::getRuleIndex() const { return pascalParser::RuleBranch; }

antlrcpp::Any pascalParser::BranchContext::accept(tree::ParseTreeVisitor* visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitBranch(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::BranchContext* pascalParser::branch() {
  BranchContext* _localctx = _tracker.createInstance<BranchContext>(_ctx, getState());
  enterRule(_localctx, 22, pascalParser::RuleBranch);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(117);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
      case 1: {
        enterOuterAlt(_localctx, 1);
        setState(105);
        match(pascalParser::T__14);
        setState(106);
        guard(0);
        setState(107);
        match(pascalParser::T__15);
        setState(108);
        code_block();
        break;
      }

      case 2: {
        enterOuterAlt(_localctx, 2);
        setState(110);
        match(pascalParser::T__14);
        setState(111);
        guard(0);
        setState(112);
        match(pascalParser::T__15);
        setState(113);
        code_block();
        setState(114);
        match(pascalParser::T__16);
        setState(115);
        code_block();
        break;
      }

      default:
        break;
    }

  } catch (RecognitionException& e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopContext
//------------------------------------------------------------------

pascalParser::LoopContext::LoopContext(ParserRuleContext* parent, size_t invokingState) : ParserRuleContext(parent, invokingState) {}

pascalParser::St_listContext* pascalParser::LoopContext::st_list() { return getRuleContext<pascalParser::St_listContext>(0); }

pascalParser::GuardContext* pascalParser::LoopContext::guard() { return getRuleContext<pascalParser::GuardContext>(0); }

size_t pascalParser::LoopContext::getRuleIndex() const { return pascalParser::RuleLoop; }

antlrcpp::Any pascalParser::LoopContext::accept(tree::ParseTreeVisitor* visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitLoop(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::LoopContext* pascalParser::loop() {
  LoopContext* _localctx = _tracker.createInstance<LoopContext>(_ctx, getState());
  enterRule(_localctx, 24, pascalParser::RuleLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(pascalParser::T__17);
    setState(120);
    st_list();
    setState(121);
    match(pascalParser::T__18);
    setState(122);
    guard(0);

  } catch (RecognitionException& e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext
//------------------------------------------------------------------

pascalParser::ExprContext::ExprContext(ParserRuleContext* parent, size_t invokingState) : ParserRuleContext(parent, invokingState) {}

std::vector<pascalParser::ExprContext*> pascalParser::ExprContext::expr() { return getRuleContexts<pascalParser::ExprContext>(); }

pascalParser::ExprContext* pascalParser::ExprContext::expr(size_t i) { return getRuleContext<pascalParser::ExprContext>(i); }

tree::TerminalNode* pascalParser::ExprContext::NUMBER() { return getToken(pascalParser::NUMBER, 0); }

tree::TerminalNode* pascalParser::ExprContext::ID() { return getToken(pascalParser::ID, 0); }

tree::TerminalNode* pascalParser::ExprContext::MOD() { return getToken(pascalParser::MOD, 0); }

tree::TerminalNode* pascalParser::ExprContext::DIV() { return getToken(pascalParser::DIV, 0); }

tree::TerminalNode* pascalParser::ExprContext::MULT() { return getToken(pascalParser::MULT, 0); }

tree::TerminalNode* pascalParser::ExprContext::MINUS() { return getToken(pascalParser::MINUS, 0); }

tree::TerminalNode* pascalParser::ExprContext::PLUS() { return getToken(pascalParser::PLUS, 0); }

size_t pascalParser::ExprContext::getRuleIndex() const { return pascalParser::RuleExpr; }

antlrcpp::Any pascalParser::ExprContext::accept(tree::ParseTreeVisitor* visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ExprContext* pascalParser::expr() { return expr(0); }

pascalParser::ExprContext* pascalParser::expr(int precedence) {
  ParserRuleContext* parentContext = _ctx;
  size_t parentState = getState();
  pascalParser::ExprContext* _localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  pascalParser::ExprContext* previousContext = _localctx;
  (void)previousContext;  // Silence compiler, in case the context is not used by
                          // generated code.
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, pascalParser::RuleExpr, precedence);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(131);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
      case 1: {
        break;
      }

      case 2: {
        setState(125);
        match(pascalParser::T__11);
        setState(126);
        expr(0);
        setState(127);
        match(pascalParser::T__12);
        break;
      }

      case 3: {
        setState(129);
        match(pascalParser::NUMBER);
        break;
      }

      case 4: {
        setState(130);
        match(pascalParser::ID);
        break;
      }

      default:
        break;
    }
    _ctx->stop = _input->LT(-1);
    setState(150);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty()) triggerExitRuleEvent();
        previousContext = _localctx;
        setState(148);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
          case 1: {
            _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
            pushNewRecursionContext(_localctx, startState, RuleExpr);
            setState(133);

            if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
            setState(134);
            match(pascalParser::MOD);
            setState(135);
            expr(10);
            break;
          }

          case 2: {
            _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
            pushNewRecursionContext(_localctx, startState, RuleExpr);
            setState(136);

            if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
            setState(137);
            match(pascalParser::DIV);
            setState(138);
            expr(9);
            break;
          }

          case 3: {
            _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
            pushNewRecursionContext(_localctx, startState, RuleExpr);
            setState(139);

            if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
            setState(140);
            match(pascalParser::MULT);
            setState(141);
            expr(8);
            break;
          }

          case 4: {
            _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
            pushNewRecursionContext(_localctx, startState, RuleExpr);
            setState(142);

            if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
            setState(143);
            match(pascalParser::MINUS);
            setState(144);
            expr(7);
            break;
          }

          case 5: {
            _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
            pushNewRecursionContext(_localctx, startState, RuleExpr);
            setState(145);

            if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
            setState(146);
            match(pascalParser::PLUS);
            setState(147);
            expr(6);
            break;
          }

          default:
            break;
        }
      }
      setState(152);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  } catch (RecognitionException& e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- GuardContext
//------------------------------------------------------------------

pascalParser::GuardContext::GuardContext(ParserRuleContext* parent, size_t invokingState) : ParserRuleContext(parent, invokingState) {}

tree::TerminalNode* pascalParser::GuardContext::NOT() { return getToken(pascalParser::NOT, 0); }

std::vector<pascalParser::GuardContext*> pascalParser::GuardContext::guard() { return getRuleContexts<pascalParser::GuardContext>(); }

pascalParser::GuardContext* pascalParser::GuardContext::guard(size_t i) { return getRuleContext<pascalParser::GuardContext>(i); }

pascalParser::RelationContext* pascalParser::GuardContext::relation() { return getRuleContext<pascalParser::RelationContext>(0); }

tree::TerminalNode* pascalParser::GuardContext::AND() { return getToken(pascalParser::AND, 0); }

tree::TerminalNode* pascalParser::GuardContext::OR() { return getToken(pascalParser::OR, 0); }

size_t pascalParser::GuardContext::getRuleIndex() const { return pascalParser::RuleGuard; }

antlrcpp::Any pascalParser::GuardContext::accept(tree::ParseTreeVisitor* visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitGuard(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::GuardContext* pascalParser::guard() { return guard(0); }

pascalParser::GuardContext* pascalParser::guard(int precedence) {
  ParserRuleContext* parentContext = _ctx;
  size_t parentState = getState();
  pascalParser::GuardContext* _localctx = _tracker.createInstance<GuardContext>(_ctx, parentState);
  pascalParser::GuardContext* previousContext = _localctx;
  (void)previousContext;  // Silence compiler, in case the context is not used by
                          // generated code.
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, pascalParser::RuleGuard, precedence);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(161);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
      case 1: {
        setState(154);
        match(pascalParser::NOT);
        setState(155);
        guard(5);
        break;
      }

      case 2: {
        setState(156);
        match(pascalParser::T__11);
        setState(157);
        guard(0);
        setState(158);
        match(pascalParser::T__12);
        break;
      }

      case 3: {
        setState(160);
        relation();
        break;
      }

      default:
        break;
    }
    _ctx->stop = _input->LT(-1);
    setState(171);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty()) triggerExitRuleEvent();
        previousContext = _localctx;
        setState(169);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
          case 1: {
            _localctx = _tracker.createInstance<GuardContext>(parentContext, parentState);
            pushNewRecursionContext(_localctx, startState, RuleGuard);
            setState(163);

            if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
            setState(164);
            match(pascalParser::AND);
            setState(165);
            guard(5);
            break;
          }

          case 2: {
            _localctx = _tracker.createInstance<GuardContext>(parentContext, parentState);
            pushNewRecursionContext(_localctx, startState, RuleGuard);
            setState(166);

            if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
            setState(167);
            match(pascalParser::OR);
            setState(168);
            guard(4);
            break;
          }

          default:
            break;
        }
      }
      setState(173);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
  } catch (RecognitionException& e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RelationContext
//------------------------------------------------------------------

pascalParser::RelationContext::RelationContext(ParserRuleContext* parent, size_t invokingState) : ParserRuleContext(parent, invokingState) {}

std::vector<pascalParser::ExprContext*> pascalParser::RelationContext::expr() { return getRuleContexts<pascalParser::ExprContext>(); }

pascalParser::ExprContext* pascalParser::RelationContext::expr(size_t i) { return getRuleContext<pascalParser::ExprContext>(i); }

tree::TerminalNode* pascalParser::RelationContext::LT() { return getToken(pascalParser::LT, 0); }

tree::TerminalNode* pascalParser::RelationContext::LEQ() { return getToken(pascalParser::LEQ, 0); }

tree::TerminalNode* pascalParser::RelationContext::EQ() { return getToken(pascalParser::EQ, 0); }

tree::TerminalNode* pascalParser::RelationContext::NEQ() { return getToken(pascalParser::NEQ, 0); }

tree::TerminalNode* pascalParser::RelationContext::GEQ() { return getToken(pascalParser::GEQ, 0); }

tree::TerminalNode* pascalParser::RelationContext::GT() { return getToken(pascalParser::GT, 0); }

size_t pascalParser::RelationContext::getRuleIndex() const { return pascalParser::RuleRelation; }

antlrcpp::Any pascalParser::RelationContext::accept(tree::ParseTreeVisitor* visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitRelation(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::RelationContext* pascalParser::relation() {
  RelationContext* _localctx = _tracker.createInstance<RelationContext>(_ctx, getState());
  enterRule(_localctx, 30, pascalParser::RuleRelation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(198);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
      case 1: {
        enterOuterAlt(_localctx, 1);
        setState(174);
        expr(0);
        setState(175);
        match(pascalParser::LT);
        setState(176);
        expr(0);
        break;
      }

      case 2: {
        enterOuterAlt(_localctx, 2);
        setState(178);
        expr(0);
        setState(179);
        match(pascalParser::LEQ);
        setState(180);
        expr(0);
        break;
      }

      case 3: {
        enterOuterAlt(_localctx, 3);
        setState(182);
        expr(0);
        setState(183);
        match(pascalParser::EQ);
        setState(184);
        expr(0);
        break;
      }

      case 4: {
        enterOuterAlt(_localctx, 4);
        setState(186);
        expr(0);
        setState(187);
        match(pascalParser::NEQ);
        setState(188);
        expr(0);
        break;
      }

      case 5: {
        enterOuterAlt(_localctx, 5);
        setState(190);
        expr(0);
        setState(191);
        match(pascalParser::GEQ);
        setState(192);
        expr(0);
        break;
      }

      case 6: {
        enterOuterAlt(_localctx, 6);
        setState(194);
        expr(0);
        setState(195);
        match(pascalParser::GT);
        setState(196);
        expr(0);
        break;
      }

      default:
        break;
    }

  } catch (RecognitionException& e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool pascalParser::sempred(RuleContext* context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 13:
      return exprSempred(dynamic_cast<ExprContext*>(context), predicateIndex);
    case 14:
      return guardSempred(dynamic_cast<GuardContext*>(context), predicateIndex);

    default:
      break;
  }
  return true;
}

bool pascalParser::exprSempred(ExprContext* _localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0:
      return precpred(_ctx, 9);
    case 1:
      return precpred(_ctx, 8);
    case 2:
      return precpred(_ctx, 7);
    case 3:
      return precpred(_ctx, 6);
    case 4:
      return precpred(_ctx, 5);

    default:
      break;
  }
  return true;
}

bool pascalParser::guardSempred(GuardContext* _localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5:
      return precpred(_ctx, 4);
    case 6:
      return precpred(_ctx, 3);

    default:
      break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> pascalParser::_decisionToDFA;
atn::PredictionContextCache pascalParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN pascalParser::_atn;
std::vector<uint16_t> pascalParser::_serializedATN;

std::vector<std::string> pascalParser::_ruleNames = {"start", "decl_list", "decl", "id_list", "main_code", "code_block", "st_list", "statement", "assign", "out", "in", "branch", "loop", "expr", "guard", "relation"};

std::vector<std::string> pascalParser::_literalNames = {"", "'program'", "';'", "'var'", "':'", "'integer'", "','", "'begin'", "'end'", "'.'", "':='", "'writeln'", "'('", "')'", "'readln'", "'if'", "'then'", "'else'", "'repeat'", "'until'", "'+'", "'-'", "'*'", "'/'", "'%'", "'and'", "'or'", "'not'", "'='", "'<'", "'<='", "'>'", "'>='", "'<>'"};

std::vector<std::string> pascalParser::_symbolicNames = {"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "PLUS", "MINUS", "MULT", "DIV", "MOD", "AND", "OR", "NOT", "EQ", "LT", "LEQ", "GT", "GEQ", "NEQ", "ID", "NUMBER", "STRING", "R_COMMENT", "C_COMMENT", "LINE_COMMENT", "WS", "ErrorChar"};

dfa::Vocabulary pascalParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> pascalParser::_tokenNames;

pascalParser::Initializer::Initializer() {
  for (size_t i = 0; i < _symbolicNames.size(); ++i) {
    std::string name = _vocabulary.getLiteralName(i);
    if (name.empty()) {
      name = _vocabulary.getSymbolicName(i);
    }

    if (name.empty()) {
      _tokenNames.push_back("<INVALID>");
    } else {
      _tokenNames.push_back(name);
    }
  }

  static const uint16_t serializedATNSegment0[] = {
      0x3,  0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 0x3,  0x2b, 0xcb, 0x4,  0x2,  0x9,  0x2,  0x4,  0x3,  0x9,  0x3,  0x4,  0x4,  0x9,  0x4,  0x4,  0x5,  0x9,  0x5,  0x4,  0x6,  0x9,  0x6,  0x4,  0x7,  0x9,  0x7,  0x4,  0x8,  0x9,  0x8,  0x4,  0x9,  0x9,  0x9,  0x4,  0xa,  0x9,  0xa,  0x4,  0xb,  0x9,  0xb,  0x4,  0xc,  0x9,  0xc,  0x4,  0xd,  0x9,  0xd,  0x4,  0xe,  0x9,  0xe,  0x4,  0xf,  0x9,  0xf,  0x4,  0x10, 0x9,  0x10, 0x4,  0x11, 0x9,  0x11, 0x3,  0x2,  0x3,  0x2,  0x3,  0x2,  0x3,  0x2,  0x3,  0x2,  0x3,  0x2,  0x3,  0x2,  0x3,  0x2,  0x3,  0x3,  0x3,  0x3,  0x3,  0x3,  0x3,  0x3,  0x5,  0x3,  0x2f, 0xa,  0x3,  0x3,  0x4,  0x3,  0x4,  0x3,  0x4,  0x3,  0x4,  0x3,  0x4,  0x3,  0x5,  0x3,  0x5,  0x3,  0x5,  0x3,  0x5,  0x5,  0x5,  0x3a, 0xa,  0x5,  0x3,  0x6,  0x3,  0x6,  0x3,  0x6,  0x3,  0x6,  0x3,  0x6,  0x3,  0x7,  0x3,  0x7,  0x3,  0x7,  0x3,  0x7,  0x3,  0x7,  0x5,  0x7,  0x46, 0xa,  0x7,  0x3,  0x8,  0x3,  0x8,  0x3,
      0x8,  0x3,    0x8,    0x3,    0x8,    0x3,    0x8,    0x3,    0x8,    0x5,  0x8,  0x4f, 0xa,  0x8,  0x3,  0x9,  0x3,  0x9,  0x3,  0x9,  0x3,  0x9,  0x3,  0x9,  0x5,  0x9,  0x56, 0xa,  0x9,  0x3,  0xa,  0x3,  0xa,  0x3,  0xa,  0x3,  0xa,  0x3,  0xb,  0x3,  0xb,  0x3,  0xb,  0x3,  0xb,  0x3,  0xb,  0x3,  0xb,  0x3,  0xb,  0x3,  0xb,  0x3,  0xb,  0x5,  0xb,  0x65, 0xa,  0xb,  0x3,  0xc,  0x3,  0xc,  0x3,  0xc,  0x3,  0xc,  0x3,  0xc,  0x3,  0xd,  0x3,  0xd,  0x3,  0xd,  0x3,  0xd,  0x3,  0xd,  0x3,  0xd,  0x3,  0xd,  0x3,  0xd,  0x3,  0xd,  0x3,  0xd,  0x3,  0xd,  0x3,  0xd,  0x5,  0xd,  0x78, 0xa,  0xd,  0x3,  0xe,  0x3,  0xe,  0x3,  0xe,  0x3,  0xe,  0x3,  0xe,  0x3,  0xf,  0x3,  0xf,  0x3,  0xf,  0x3,  0xf,  0x3,  0xf,  0x3,  0xf,  0x3,  0xf,  0x5,  0xf,  0x86, 0xa,  0xf,  0x3,  0xf,  0x3,  0xf,  0x3,  0xf,  0x3,  0xf,  0x3,  0xf,  0x3,  0xf,  0x3,  0xf,  0x3,  0xf,  0x3,  0xf,  0x3,  0xf,  0x3,  0xf,  0x3,  0xf,  0x3,  0xf,  0x3,  0xf,  0x3,  0xf,
      0x7,  0xf,    0x97,   0xa,    0xf,    0xc,    0xf,    0xe,    0xf,    0x9a, 0xb,  0xf,  0x3,  0x10, 0x3,  0x10, 0x3,  0x10, 0x3,  0x10, 0x3,  0x10, 0x3,  0x10, 0x3,  0x10, 0x3,  0x10, 0x5,  0x10, 0xa4, 0xa,  0x10, 0x3,  0x10, 0x3,  0x10, 0x3,  0x10, 0x3,  0x10, 0x3,  0x10, 0x3,  0x10, 0x7,  0x10, 0xac, 0xa,  0x10, 0xc,  0x10, 0xe,  0x10, 0xaf, 0xb,  0x10, 0x3,  0x11, 0x3,  0x11, 0x3,  0x11, 0x3,  0x11, 0x3,  0x11, 0x3,  0x11, 0x3,  0x11, 0x3,  0x11, 0x3,  0x11, 0x3,  0x11, 0x3,  0x11, 0x3,  0x11, 0x3,  0x11, 0x3,  0x11, 0x3,  0x11, 0x3,  0x11, 0x3,  0x11, 0x3,  0x11, 0x3,  0x11, 0x3,  0x11, 0x3,  0x11, 0x3,  0x11, 0x3,  0x11, 0x3,  0x11, 0x5,  0x11, 0xc9, 0xa,  0x11, 0x3,  0x11, 0x2,  0x4,  0x1c, 0x1e, 0x12, 0x2,  0x4,  0x6,  0x8,  0xa,  0xc,  0xe,  0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x2,  0x2,  0x2,  0xd5, 0x2,  0x22, 0x3,  0x2,  0x2,  0x2,  0x4,  0x2e, 0x3,  0x2,  0x2,  0x2,  0x6,  0x30, 0x3,  0x2,  0x2,  0x2,  0x8,  0x39, 0x3,
      0x2,  0x2,    0x2,    0xa,    0x3b,   0x3,    0x2,    0x2,    0x2,    0xc,  0x45, 0x3,  0x2,  0x2,  0x2,  0xe,  0x4e, 0x3,  0x2,  0x2,  0x2,  0x10, 0x55, 0x3,  0x2,  0x2,  0x2,  0x12, 0x57, 0x3,  0x2,  0x2,  0x2,  0x14, 0x64, 0x3,  0x2,  0x2,  0x2,  0x16, 0x66, 0x3,  0x2,  0x2,  0x2,  0x18, 0x77, 0x3,  0x2,  0x2,  0x2,  0x1a, 0x79, 0x3,  0x2,  0x2,  0x2,  0x1c, 0x85, 0x3,  0x2,  0x2,  0x2,  0x1e, 0xa3, 0x3,  0x2,  0x2,  0x2,  0x20, 0xc8, 0x3,  0x2,  0x2,  0x2,  0x22, 0x23, 0x7,  0x3,  0x2,  0x2,  0x23, 0x24, 0x7,  0x24, 0x2,  0x2,  0x24, 0x25, 0x7,  0x4,  0x2,  0x2,  0x25, 0x26, 0x7,  0x5,  0x2,  0x2,  0x26, 0x27, 0x5,  0x4,  0x3,  0x2,  0x27, 0x28, 0x5,  0xa,  0x6,  0x2,  0x28, 0x29, 0x7,  0x2,  0x2,  0x3,  0x29, 0x3,  0x3,  0x2,  0x2,  0x2,  0x2a, 0x2f, 0x5,  0x6,  0x4,  0x2,  0x2b, 0x2c, 0x5,  0x6,  0x4,  0x2,  0x2c, 0x2d, 0x5,  0x4,  0x3,  0x2,  0x2d, 0x2f, 0x3,  0x2,  0x2,  0x2,  0x2e, 0x2a, 0x3,  0x2,  0x2,  0x2,  0x2e, 0x2b, 0x3,  0x2,  0x2,
      0x2,  0x2f,   0x5,    0x3,    0x2,    0x2,    0x2,    0x30,   0x31,   0x5,  0x8,  0x5,  0x2,  0x31, 0x32, 0x7,  0x6,  0x2,  0x2,  0x32, 0x33, 0x7,  0x7,  0x2,  0x2,  0x33, 0x34, 0x7,  0x4,  0x2,  0x2,  0x34, 0x7,  0x3,  0x2,  0x2,  0x2,  0x35, 0x3a, 0x7,  0x24, 0x2,  0x2,  0x36, 0x37, 0x7,  0x24, 0x2,  0x2,  0x37, 0x38, 0x7,  0x8,  0x2,  0x2,  0x38, 0x3a, 0x5,  0x8,  0x5,  0x2,  0x39, 0x35, 0x3,  0x2,  0x2,  0x2,  0x39, 0x36, 0x3,  0x2,  0x2,  0x2,  0x3a, 0x9,  0x3,  0x2,  0x2,  0x2,  0x3b, 0x3c, 0x7,  0x9,  0x2,  0x2,  0x3c, 0x3d, 0x5,  0xe,  0x8,  0x2,  0x3d, 0x3e, 0x7,  0xa,  0x2,  0x2,  0x3e, 0x3f, 0x7,  0xb,  0x2,  0x2,  0x3f, 0xb,  0x3,  0x2,  0x2,  0x2,  0x40, 0x46, 0x5,  0x10, 0x9,  0x2,  0x41, 0x42, 0x7,  0x9,  0x2,  0x2,  0x42, 0x43, 0x5,  0xe,  0x8,  0x2,  0x43, 0x44, 0x7,  0xa,  0x2,  0x2,  0x44, 0x46, 0x3,  0x2,  0x2,  0x2,  0x45, 0x40, 0x3,  0x2,  0x2,  0x2,  0x45, 0x41, 0x3,  0x2,  0x2,  0x2,  0x46, 0xd,  0x3,  0x2,  0x2,  0x2,  0x47,
      0x48, 0x5,    0x10,   0x9,    0x2,    0x48,   0x49,   0x7,    0x4,    0x2,  0x2,  0x49, 0x4f, 0x3,  0x2,  0x2,  0x2,  0x4a, 0x4b, 0x5,  0x10, 0x9,  0x2,  0x4b, 0x4c, 0x7,  0x4,  0x2,  0x2,  0x4c, 0x4d, 0x5,  0xe,  0x8,  0x2,  0x4d, 0x4f, 0x3,  0x2,  0x2,  0x2,  0x4e, 0x47, 0x3,  0x2,  0x2,  0x2,  0x4e, 0x4a, 0x3,  0x2,  0x2,  0x2,  0x4f, 0xf,  0x3,  0x2,  0x2,  0x2,  0x50, 0x56, 0x5,  0x12, 0xa,  0x2,  0x51, 0x56, 0x5,  0x18, 0xd,  0x2,  0x52, 0x56, 0x5,  0x14, 0xb,  0x2,  0x53, 0x56, 0x5,  0x1a, 0xe,  0x2,  0x54, 0x56, 0x5,  0x16, 0xc,  0x2,  0x55, 0x50, 0x3,  0x2,  0x2,  0x2,  0x55, 0x51, 0x3,  0x2,  0x2,  0x2,  0x55, 0x52, 0x3,  0x2,  0x2,  0x2,  0x55, 0x53, 0x3,  0x2,  0x2,  0x2,  0x55, 0x54, 0x3,  0x2,  0x2,  0x2,  0x56, 0x11, 0x3,  0x2,  0x2,  0x2,  0x57, 0x58, 0x7,  0x24, 0x2,  0x2,  0x58, 0x59, 0x7,  0xc,  0x2,  0x2,  0x59, 0x5a, 0x5,  0x1c, 0xf,  0x2,  0x5a, 0x13, 0x3,  0x2,  0x2,  0x2,  0x5b, 0x5c, 0x7,  0xd,  0x2,  0x2,  0x5c, 0x5d, 0x7,
      0xe,  0x2,    0x2,    0x5d,   0x5e,   0x5,    0x1c,   0xf,    0x2,    0x5e, 0x5f, 0x7,  0xf,  0x2,  0x2,  0x5f, 0x65, 0x3,  0x2,  0x2,  0x2,  0x60, 0x61, 0x7,  0xd,  0x2,  0x2,  0x61, 0x62, 0x7,  0xe,  0x2,  0x2,  0x62, 0x63, 0x7,  0x26, 0x2,  0x2,  0x63, 0x65, 0x7,  0xf,  0x2,  0x2,  0x64, 0x5b, 0x3,  0x2,  0x2,  0x2,  0x64, 0x60, 0x3,  0x2,  0x2,  0x2,  0x65, 0x15, 0x3,  0x2,  0x2,  0x2,  0x66, 0x67, 0x7,  0x10, 0x2,  0x2,  0x67, 0x68, 0x7,  0xe,  0x2,  0x2,  0x68, 0x69, 0x7,  0x24, 0x2,  0x2,  0x69, 0x6a, 0x7,  0xf,  0x2,  0x2,  0x6a, 0x17, 0x3,  0x2,  0x2,  0x2,  0x6b, 0x6c, 0x7,  0x11, 0x2,  0x2,  0x6c, 0x6d, 0x5,  0x1e, 0x10, 0x2,  0x6d, 0x6e, 0x7,  0x12, 0x2,  0x2,  0x6e, 0x6f, 0x5,  0xc,  0x7,  0x2,  0x6f, 0x78, 0x3,  0x2,  0x2,  0x2,  0x70, 0x71, 0x7,  0x11, 0x2,  0x2,  0x71, 0x72, 0x5,  0x1e, 0x10, 0x2,  0x72, 0x73, 0x7,  0x12, 0x2,  0x2,  0x73, 0x74, 0x5,  0xc,  0x7,  0x2,  0x74, 0x75, 0x7,  0x13, 0x2,  0x2,  0x75, 0x76, 0x5,  0xc,  0x7,
      0x2,  0x76,   0x78,   0x3,    0x2,    0x2,    0x2,    0x77,   0x6b,   0x3,  0x2,  0x2,  0x2,  0x77, 0x70, 0x3,  0x2,  0x2,  0x2,  0x78, 0x19, 0x3,  0x2,  0x2,  0x2,  0x79, 0x7a, 0x7,  0x14, 0x2,  0x2,  0x7a, 0x7b, 0x5,  0xe,  0x8,  0x2,  0x7b, 0x7c, 0x7,  0x15, 0x2,  0x2,  0x7c, 0x7d, 0x5,  0x1e, 0x10, 0x2,  0x7d, 0x1b, 0x3,  0x2,  0x2,  0x2,  0x7e, 0x86, 0x8,  0xf,  0x1,  0x2,  0x7f, 0x80, 0x7,  0xe,  0x2,  0x2,  0x80, 0x81, 0x5,  0x1c, 0xf,  0x2,  0x81, 0x82, 0x7,  0xf,  0x2,  0x2,  0x82, 0x86, 0x3,  0x2,  0x2,  0x2,  0x83, 0x86, 0x7,  0x25, 0x2,  0x2,  0x84, 0x86, 0x7,  0x24, 0x2,  0x2,  0x85, 0x7e, 0x3,  0x2,  0x2,  0x2,  0x85, 0x7f, 0x3,  0x2,  0x2,  0x2,  0x85, 0x83, 0x3,  0x2,  0x2,  0x2,  0x85, 0x84, 0x3,  0x2,  0x2,  0x2,  0x86, 0x98, 0x3,  0x2,  0x2,  0x2,  0x87, 0x88, 0xc,  0xb,  0x2,  0x2,  0x88, 0x89, 0x7,  0x1a, 0x2,  0x2,  0x89, 0x97, 0x5,  0x1c, 0xf,  0xc,  0x8a, 0x8b, 0xc,  0xa,  0x2,  0x2,  0x8b, 0x8c, 0x7,  0x19, 0x2,  0x2,  0x8c,
      0x97, 0x5,    0x1c,   0xf,    0xb,    0x8d,   0x8e,   0xc,    0x9,    0x2,  0x2,  0x8e, 0x8f, 0x7,  0x18, 0x2,  0x2,  0x8f, 0x97, 0x5,  0x1c, 0xf,  0xa,  0x90, 0x91, 0xc,  0x8,  0x2,  0x2,  0x91, 0x92, 0x7,  0x17, 0x2,  0x2,  0x92, 0x97, 0x5,  0x1c, 0xf,  0x9,  0x93, 0x94, 0xc,  0x7,  0x2,  0x2,  0x94, 0x95, 0x7,  0x16, 0x2,  0x2,  0x95, 0x97, 0x5,  0x1c, 0xf,  0x8,  0x96, 0x87, 0x3,  0x2,  0x2,  0x2,  0x96, 0x8a, 0x3,  0x2,  0x2,  0x2,  0x96, 0x8d, 0x3,  0x2,  0x2,  0x2,  0x96, 0x90, 0x3,  0x2,  0x2,  0x2,  0x96, 0x93, 0x3,  0x2,  0x2,  0x2,  0x97, 0x9a, 0x3,  0x2,  0x2,  0x2,  0x98, 0x96, 0x3,  0x2,  0x2,  0x2,  0x98, 0x99, 0x3,  0x2,  0x2,  0x2,  0x99, 0x1d, 0x3,  0x2,  0x2,  0x2,  0x9a, 0x98, 0x3,  0x2,  0x2,  0x2,  0x9b, 0x9c, 0x8,  0x10, 0x1,  0x2,  0x9c, 0x9d, 0x7,  0x1d, 0x2,  0x2,  0x9d, 0xa4, 0x5,  0x1e, 0x10, 0x7,  0x9e, 0x9f, 0x7,  0xe,  0x2,  0x2,  0x9f, 0xa0, 0x5,  0x1e, 0x10, 0x2,  0xa0, 0xa1, 0x7,  0xf,  0x2,  0x2,  0xa1, 0xa4, 0x3,
      0x2,  0x2,    0x2,    0xa2,   0xa4,   0x5,    0x20,   0x11,   0x2,    0xa3, 0x9b, 0x3,  0x2,  0x2,  0x2,  0xa3, 0x9e, 0x3,  0x2,  0x2,  0x2,  0xa3, 0xa2, 0x3,  0x2,  0x2,  0x2,  0xa4, 0xad, 0x3,  0x2,  0x2,  0x2,  0xa5, 0xa6, 0xc,  0x6,  0x2,  0x2,  0xa6, 0xa7, 0x7,  0x1b, 0x2,  0x2,  0xa7, 0xac, 0x5,  0x1e, 0x10, 0x7,  0xa8, 0xa9, 0xc,  0x5,  0x2,  0x2,  0xa9, 0xaa, 0x7,  0x1c, 0x2,  0x2,  0xaa, 0xac, 0x5,  0x1e, 0x10, 0x6,  0xab, 0xa5, 0x3,  0x2,  0x2,  0x2,  0xab, 0xa8, 0x3,  0x2,  0x2,  0x2,  0xac, 0xaf, 0x3,  0x2,  0x2,  0x2,  0xad, 0xab, 0x3,  0x2,  0x2,  0x2,  0xad, 0xae, 0x3,  0x2,  0x2,  0x2,  0xae, 0x1f, 0x3,  0x2,  0x2,  0x2,  0xaf, 0xad, 0x3,  0x2,  0x2,  0x2,  0xb0, 0xb1, 0x5,  0x1c, 0xf,  0x2,  0xb1, 0xb2, 0x7,  0x1f, 0x2,  0x2,  0xb2, 0xb3, 0x5,  0x1c, 0xf,  0x2,  0xb3, 0xc9, 0x3,  0x2,  0x2,  0x2,  0xb4, 0xb5, 0x5,  0x1c, 0xf,  0x2,  0xb5, 0xb6, 0x7,  0x20, 0x2,  0x2,  0xb6, 0xb7, 0x5,  0x1c, 0xf,  0x2,  0xb7, 0xc9, 0x3,  0x2,  0x2,
      0x2,  0xb8,   0xb9,   0x5,    0x1c,   0xf,    0x2,    0xb9,   0xba,   0x7,  0x1e, 0x2,  0x2,  0xba, 0xbb, 0x5,  0x1c, 0xf,  0x2,  0xbb, 0xc9, 0x3,  0x2,  0x2,  0x2,  0xbc, 0xbd, 0x5,  0x1c, 0xf,  0x2,  0xbd, 0xbe, 0x7,  0x23, 0x2,  0x2,  0xbe, 0xbf, 0x5,  0x1c, 0xf,  0x2,  0xbf, 0xc9, 0x3,  0x2,  0x2,  0x2,  0xc0, 0xc1, 0x5,  0x1c, 0xf,  0x2,  0xc1, 0xc2, 0x7,  0x22, 0x2,  0x2,  0xc2, 0xc3, 0x5,  0x1c, 0xf,  0x2,  0xc3, 0xc9, 0x3,  0x2,  0x2,  0x2,  0xc4, 0xc5, 0x5,  0x1c, 0xf,  0x2,  0xc5, 0xc6, 0x7,  0x21, 0x2,  0x2,  0xc6, 0xc7, 0x5,  0x1c, 0xf,  0x2,  0xc7, 0xc9, 0x3,  0x2,  0x2,  0x2,  0xc8, 0xb0, 0x3,  0x2,  0x2,  0x2,  0xc8, 0xb4, 0x3,  0x2,  0x2,  0x2,  0xc8, 0xb8, 0x3,  0x2,  0x2,  0x2,  0xc8, 0xbc, 0x3,  0x2,  0x2,  0x2,  0xc8, 0xc0, 0x3,  0x2,  0x2,  0x2,  0xc8, 0xc4, 0x3,  0x2,  0x2,  0x2,  0xc9, 0x21, 0x3,  0x2,  0x2,  0x2,  0x10, 0x2e, 0x39, 0x45, 0x4e, 0x55, 0x64, 0x77, 0x85, 0x96, 0x98, 0xa3, 0xab, 0xad, 0xc8,
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0, serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) {
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

pascalParser::Initializer pascalParser::_init;
