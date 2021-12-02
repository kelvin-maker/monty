#include "monty.h"

/**
 * op_mul - mul the top two elements on the stack
 * @sp: stack pointer
 */
void mul(stack_t **sp)
{
int to_mul = 0;

if (!(*sp && *sp != (*sp)->next))
pfailure("L%u: can't mul, stack too short\n", op_env.lineno);

to_mul = (*sp)->n;

pop(sp);

(*sp)->n *= to_mul;
}
