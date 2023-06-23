#include "monty.h"

/**
 * add - adds top 2 elements
 * @stack: the stack head
 * @line_number: line number
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *el;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	el = (*stack)->next;
	if (el == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	el->n += (*stack)->n;

	pop(stack, line_number);
}
