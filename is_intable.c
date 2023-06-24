#include "monty.h"

/**
 * is_intable - checks if a string can be converted
 * to an integer
 * @s: string
 *
 * Return: 1 if intable, 0 otherwise
 */

int is_intable(char *s)
{
	int i;

	if (s == NULL)
		return (0);

	for (i = 0; s[i] != 0; i++)
		if (s[i] != '-')
			if (s[i] < '0' || s[i] > '9')
				return (0);

	return (1);
}
