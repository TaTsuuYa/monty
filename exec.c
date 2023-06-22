#include "monty.h"

/**
 * exec - executes monty commands
 * @cmd: command
 * @stack: the stack head
 * @L: line number
 */

void exec(char *cmd, stack_t **stack, unsigned int L)
{
	int i;
	instruction_t inst[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{NULL, NULL},
	};

	for (i = 0; inst[i].opcode != NULL; i++)
	{
		if (strcmp(inst[i].opcode, cmd) == 0)
		{
			inst[i].f(stack, L);
			return;
		}
	}

	fprintf(stderr, "L%d: unknown instruction %s\n", L, inst[i].opcode);
	exit(EXIT_FAILURE);
}
