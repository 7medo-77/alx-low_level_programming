#include "monty.h"

void init_struct(parameters_all *param, char **argv)
{
	if (!param)
		return;

	param = malloc(sizeof(parameters_all));
	if (!param)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
		return;
	}

	param->line_string = NULL;
	param->monty_args = NULL;

	param->line_string = malloc(sizeof(char) * 1024);
	param->monty_args = malloc(sizeof(char *) * 50);
	param->line_number = 1;

	strcpy(param->line_string, "Initial_value");

	if (!param->line_string || !param->monty_args)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
		return;
	}
}
