#include "monty.h"

char *DATA;

/**
 * main - main program
 * @argc: arguments count
 * @argv: arguments list
 *
 * Return: EXIT_SUCCESS
 */
int main(int argc, char **argv)
{
	FILE *fp;
	char line[100], *command;
	int max = 100;
	unsigned int L = 1;
	stack_t *stack;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	stack = NULL;
	while (fgets(line, max, fp))
	{
		command = strtok(line, SEP);
		DATA = strtok(NULL, SEP);
		if (command != NULL)
			exec(command, &stack, L);
		L++;
	}

	free_stack(stack);
	fclose(fp);
	return (EXIT_SUCCESS);
}
