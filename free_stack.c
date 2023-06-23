#include "monty.h"

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