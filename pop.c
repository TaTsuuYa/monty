#include "monty.h"

/**
 * pop - removes top element
 * @stack: the stack head
 * @line_number: line number
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	while (current == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	*stack = current->next;
	free(current);
}
