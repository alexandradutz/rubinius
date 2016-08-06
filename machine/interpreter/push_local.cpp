#include "instructions/push_local.hpp"

namespace rubinius {
  namespace interpreter {
    intptr_t push_local(STATE, CallFrame* call_frame, intptr_t const opcodes[]) {
      intptr_t local = argument(0);

      instructions::push_local(call_frame, local);

      return ((Instruction)opcodes[call_frame->ip()])(state, call_frame, opcodes);
    }
  }
}