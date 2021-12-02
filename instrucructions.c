#include "monty.h"
#include <string.h>

/**
 * do_instruction - get the function associated with an opcode
 * @opcode: the opcode to match
 *
 * Return: If opcode is NULL, return NULL. If match is found, return the
 * corresponding function. If match is not found, exit with EXIT_FAILURE.
 */
instruction_fn get_instruction_fn(const char *opcode)
{
static instruction_t instructions[] = {
{"add",   add},
{"div",   div_1},
{"mod",   mod},
{"mul",   mul},
{"nop",   nop},
{"pall",  pall},
{"pchar", pchar},
{"pint",  pint},
{"pop",   pop},
{"pstr",  pstr},
{"push",  push},
{"queue", queue},
{"rotl",  rotl},
{"rotr",  rotr},
{"stack", stack},
{"sub",   sub},
{"swap",  swap},
{0}
};
instruction_t *op = instructions;

if (opcode)
{
while (op->opcode)
{
if (!strcmp(opcode, op->opcode))
return (op->fn);
++op;
}
pfailure("L%u: unknown instruction %s\n", op_env.lineno, opcode);
}
return (NULL);
}
