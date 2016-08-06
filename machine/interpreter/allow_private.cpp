#include "instructions/allow_private.hpp"

namespace rubinius {
  namespace interpreter {
    intptr_t allow_private(STATE, CallFrame* call_frame, intptr_t const opcodes[]) {
      instructions::allow_private();

      return ((Instruction)opcodes[call_frame->ip()])(state, call_frame, opcodes);
    }
  }
}