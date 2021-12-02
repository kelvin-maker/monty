#include "monty.h"

/**
 * op_stack - set stack mode to last-in first-out (default)
 * @sp: stack pointer
 */
void stack(stack_t **sp __attribute__((unused)))
{
op_env.mode = LIFO;
}
