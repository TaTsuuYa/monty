#include "monty.h"

char *DATA;

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
		line[strlen(line) - 2] = '\0';
		command = strtok(line, SEP);
		DATA = strtok(NULL, SEP);
		exec(command, &stack, L);
		L++;
	}

	/* TODO: free the whole stack*/
	fclose(fp);
	return (EXIT_SUCCESS);
}
