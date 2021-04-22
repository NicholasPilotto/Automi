#include "automata.h"

#include <iostream>

using namespace std;

/**
 * Constructor for Abstract DFA.
 *
 * @param noStates Number of _states in the DFA.
 */
AbstractDFA::AbstractDFA(int noStates) : __states(noStates), __sink(false), __current(0) {
  // TODO: initialize data structures
  transitions = map<tpair, int>();
  final_states = map<int, bool>();
}

/**
 * Reset the automaton to the initial state.
 */
void AbstractDFA::reset() {
  // TODO: reset automaton to initial state
  __current = 0;
  __sink = false;
}

/**
 * Performs one step of the DFA for a given letter. If there is a transition
 * for the given letter, then the automaton proceeds to the successor state.
 * Otherwise it goes to the sink state. By construction it will stay in the
 * sink for every input letter.
 *
 * @param letter The current input.
 */
void AbstractDFA::doStep(char letter) {
  // TODO: do step by going to the next state according to the current state and
  // the read letter.
  if (__current != -1) {
    map<tpair, int>::iterator a = transitions.find(tpair(letter, __current));
    if (a != transitions.end()) {
      __current = (*a).second;
      if (__current == __states - 2) {
        final_states[__current] = true;
      }
    } else {
      __current = -1;
      __sink = true;
    }
  }
}

/**
 * Check if the automaton is currently accepting.
 *
 * @return True, if the automaton is currently in the accepting state.
 */
bool AbstractDFA::isAccepting() {
  // TODO: return if the current state is accepting
  return final_states.find(__current) != final_states.end();
}

/**
 * Run the DFA on the input.
 *
 * @param inputWord stream that contains the input word
 * @return True, if if the word is accepted by this automaton
 */
bool AbstractDFA::run(const string& inputWord) {
  this->reset();
  for (int i = 0; i < inputWord.length(); i++) {
    doStep(inputWord[i]);
  }
  return isAccepting();
}

/**
 * Construct a new DFA that recognizes exactly the given word. Given a word
 * "foo" the constructed automaton looks like: -> () -f-> () -o-> () -o-> []
 * from every state (including the final one) every other input letter leads
 * to a distinguished sink state in which the automaton then remains
 *
 * @param word A String that the automaton should recognize
 */
WordDFA::WordDFA(const string& word) : AbstractDFA(word.size() + 2) {
  // TODO: fill in correct number of states
  // TODO: build DFA recognizing the given word

  int i = 1;
  string::const_iterator it = word.cbegin();
  string::const_iterator cend = word.cend();
  for (; it != cend; it++) {
    transitions[tpair(*it, (i - 1))] = i;
    i++;
  }
}

/**
 * Construct a new DFA that recognizes comments within source code. There
 * are three kinds of comments: single line comment that starts with // and ends
 * with a newline, multiline comments that starts with (* and ends with *), and
 * multiline comments that starts with { and ends with }
 */
CommentDFA::CommentDFA() : AbstractDFA(0) {
  // TODO: fill in correct number of states
  // TODO: build DFA recognizing comments

  final_states[3] = true;
  final_states[7] = true;
  final_states[9] = true;

  transitions[tpair('/', 0)] = 1;
  transitions[tpair('(', 0)] = 4;
  transitions[tpair('{', 0)] = 8;
  transitions[tpair('/', 1)] = 2;
  transitions[tpair('\n', 2)] = 3;
  transitions[tpair('*', 4)] = 5;
  transitions[tpair('*', 5)] = 6;
  transitions[tpair(')', 6)] = 7;
  transitions[tpair('}', 8)] = 9;
}

/**
 * Performs one step of the DFA for a given letter. This method works
 * differently than in the superclass AbstractDFA.
 *
 * @param letter
 *            The current input.
 */
void CommentDFA::doStep(char letter) {
  // TODO: implement accordingly

  if (__current != -1) {
    if (__sink) {
      __current = -1;
    } else {
      map<tpair, int>::iterator a = transitions.find(tpair(letter, __current));
      if (a != transitions.end()) {
        __current = (*a).second;
      } else {
        if (__current == 1 || __current == 4)
 {
          __current = 0;
        } else if (__current == 6) {
          __current = 5;
        } else if (__current == 0 || __current == 3 || __current == 7 || __current == 9) {
          __sink = true;
        }
      }
    }
  }
}
