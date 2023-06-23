#include "monty.h"

/**
 * free_stack - frees the whole stack
 * @head: head of the stack
 */
void free_stack(stack_t *head)
{
	stack_t *current;

	if (head == NULL)
		return;

	current = head;
	while (current)
	{
		head = current->next;
		free(current);
		current = head;
	}
}
