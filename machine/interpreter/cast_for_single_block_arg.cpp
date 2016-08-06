#include "instructions/cast_for_single_block_arg.hpp"

namespace rubinius {
  namespace interpreter {
    intptr_t cast_for_single_block_arg(STATE, CallFrame* call_frame, intptr_t const opcodes[]) {
      if(instructions::cast_for_single_block_arg(state, call_frame)) {
        call_frame->next_ip();
      } else {
        call_frame->exception_ip();
      }

      return ((Instruction)opcodes[call_frame->ip()])(state, call_frame, opcodes);
    }
  }
}