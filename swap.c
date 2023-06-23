#include "monty.h"

/**
 * swap - swaps the top two elements
 * @stack: the stack head
 * @line_number: line number
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *el_1, *el_2, *t;

	el_1 = *stack;
	if (el_1 == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	el_2 = el_1->next;
	if (el_2 == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	t = el_2->next;

	el_1->next = t;
	el_1->prev = el_2;

	el_2->next = el_1;
	el_2->prev = *stack;

	if (t != NULL)
		t->prev = el_1;

	*stack = el_2;
}
