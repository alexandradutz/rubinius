#include "instructions/raise_break.hpp"

namespace rubinius {
  namespace interpreter {
    intptr_t raise_break(STATE, CallFrame* call_frame, intptr_t const opcodes[]) {
      if(instructions::raise_break(state, call_frame)) {
        call_frame->next_ip();
      } else {
        call_frame->exception_ip();
      }

      return ((Instruction)opcodes[call_frame->ip()])(state, call_frame, opcodes);
    }
  }
}