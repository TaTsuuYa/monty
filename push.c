#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *current, *new;

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
	new->next = NULL;

	if (*stack == NULL)
	{
		(*stack) = new;
		return;
	}

	current = *stack;
	while (current->next)
		current = current->next;

	new->prev = current;
	current->next = new;
}
