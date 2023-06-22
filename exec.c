#include "monty.h"

void exec(char *cmd, stack_t **stack, unsigned int L)
{
	int i;
	instruction_t inst[] =
		{
			{"push", push},
			{"pall", pall},
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
