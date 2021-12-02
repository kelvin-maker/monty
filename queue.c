#include "monty.h"

/**
 * op_queue - set stack mode to first-in first-out
 * @sp: stack pointer
 */
void queue(stack_t **sp __attribute__((unused)))
{
op_env.mode = FIFO;
}
