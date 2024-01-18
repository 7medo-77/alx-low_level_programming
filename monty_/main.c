#include "monty.h"

stack_t *top = NULL;

int main(int argc, char **argv)
{
	parameters_all param;
	// char param.line_string[1024],  *param.monty_args[1024],
	// *param.opcode;
	FILE *file_pointer = fopen(argv[1], "r");
	int line_no = 1, i, k;
	size_t *chars_read;

	init_struct(&param, argv);
	param.delims = " \n";
	param.line_string = " \n";


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


	while (fgets(param.line_string, sizeof(char) * 1024, file_pointer) != NULL)
	{
		line_no++;
		param.opcode = strtok(param.line_string, param.delims);
		for (i = 0; param.opcode; i++)
		{
			param.monty_args[i] = malloc((strlen(param.opcode) + 1) * sizeof(char));
			if (!param.monty_args[i])
				return (0);
			param.monty_args[i] = strcpy(param.monty_args[i], param.opcode);
			printf("%s\n", param.monty_args[i]);
			strtok(NULL, param.delims);
		}
		param.monty_args[i] = "\0";
		k = 0;
		while (k < i - 1)
			free(param.monty_args[k++]);
	}
	fclose(file_pointer);
}
