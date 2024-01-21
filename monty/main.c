#include "monty.h"

parameters_all param;

int main(int argc, char **argv)
{
	char *delims = " \n\t";
	char example[1024];
	FILE *ofile;
	void (*Func_pointer)(stack_t **top, unsigned int line_number);

	init_struct();
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		free(param.line_string);
		exit(EXIT_FAILURE);
	}

	ofile = fopen(argv[1], "r");
	param.file_pointer = ofile;

	if (!param.file_pointer)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		free(param.line_string);
		exit(EXIT_FAILURE);
	}

	while (fgets(example, 1024, param.file_pointer) != 0)
	{
		param.line_no++;
		param.line_string = strtok(example, delims);
		while (param.line_string)
		{
			Func_pointer = opcode_handling(param);
			Func_pointer(&param.top, param.line_no);
			param.line_string = strtok(NULL, delims);
		}
	}
	fclose(param.file_pointer);
	free_list(&param.top);
}
