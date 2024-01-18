#include "monty.h"

stack_t *top = NULL;

int main(int argc, char **argv)
{
	parameters_all *param = NULL;
	init_struct(param, argv);
	char line_string[1024],  *monty_args[1024],
	*opcode;
	const char *delims = " \n";
	int line_no = 1, i, k;
	size_t *chars_read;
	FILE *file_pointer = fopen(argv[1], "r");

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file");
		exit(EXIT_FAILURE);
	}

	if (file_pointer == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s", argv[1]);
		exit(EXIT_FAILURE);
	}


	while (fgets(line_string, sizeof(line_string), file_pointer) != NULL)
	{
		line_no++;
		opcode = strtok(line_string, delims);
		for (i = 0; opcode; i++)
		{
			monty_args[i] = malloc((strlen(opcode) + 1) * sizeof(char));
			if (!monty_args[i])
				return (0);
			monty_args[i] = strcpy(monty_args[i], opcode);
			printf("%s\n", monty_args[i]);
			opcode = strtok(NULL, delims);
		}
		monty_args[i] = "\0";
		k = 0;
		while (k < i - 1)
			free(monty_args[k++]);
	}
	fclose(file_pointer);
}
