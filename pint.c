#include "monty.h"

/**
 * pall - prints all stack elements
 * @stack: the stack head
 * @line_number: line number
 */

void pint(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	if (*stack != NULL)
		printf("%d\n", (*stack)->n);
}
