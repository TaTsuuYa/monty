#include "monty.h"

/**
 * push - pushes a new element to the stack
 * @stack: the stack head
 * @line_number: line number
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	if (DATA == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	new->n = atoi(DATA);
	new->prev = NULL;
	new->next = (*stack);

	if (*stack != NULL)
		(*stack)->prev = new;

	*stack = new;
}
