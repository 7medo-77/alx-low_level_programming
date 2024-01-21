#include "monty.h"
/**
 * init_struct - Initialize global struct with values
 *
 * Return: No return type
 */
void init_struct(void)
{
	char *delim = "\n ";

	param.line_string = NULL;
	param.file_pointer = NULL;
	param.top = NULL;

	param.line_string = malloc(sizeof(char) * 1024);
	param.line_no = 0;
	strcpy(param.delims, delim);

	if (!param.line_string)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
		return;
	}
}

/**
 * push_funct - Adds a node at the end of a doubly linked list
 *
 * @top: pointer to first node in doubly linked list stack
 * @line_number: Line number in the monty file
 *
 */
void push_funct(stack_t **top, unsigned int line_number)
{
	stack_t *probe, *new;

	probe = param.top;
	new = malloc(sizeof(stack_t));
	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(param.line_string);
		exit(EXIT_FAILURE);
	}
	param.line_string = strtok(NULL, param.delims);

	if (
		((atoi(param.line_string) != 0) ||
		(atoi(param.line_string) == 0 && param.line_string[0] == '0')) &&
		param.line_string)
		new->n = atoi(param.line_string
		);
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", param.line_no);
		free(param.line_string);
		exit(EXIT_FAILURE);
	}

	if (!probe)
	{
		new->next = NULL;
		new->prev = NULL;
		param.top = new;
	}
	else
	{
		new->next = probe;
		new->prev = NULL;
		probe->prev = new;
		param.top = new;
	}
}


/**
 * pall_funct - Prints content of all nodes of the linked list
 *
 * @top: pointer to first node in doubly linked list stack
 * @line_number: Line number in the monty file
 *
 */
void pall_funct(stack_t **top, unsigned int line_number)
{
	stack_t *probe = param.top;

	if (!probe)
		return;

	while (probe)
	{
		printf("%d\n", probe->n);
		probe = probe->next;
	}
}

/**
 * pint_funct - Print integer content of the head node
 *
 * @top: pointer to first node in doubly linked list stack
 * @line_number: Line number in the monty file
 *
 */
void pint_funct(stack_t **top, unsigned int line_number)
{
	stack_t *probe = param.top;

	printf("%d\n", probe->n);
}


/**
 * opcode_handling - Adds a node at the end of a doubly linked list
 *
 * @param: struct of parameters needed by linked list functions
 *
 * Return: Function pointer to linked list operations
 */
void (*opcode_handling(parameters_all param))(stack_t **, unsigned int)
{
	instruction_t arr[] = {
		{"push", push_funct},
		{"pall", pall_funct},
		{"pint", pint_funct},
		{"pop", pop_funct},
		{"swap", swap_funct},
		{"add", add_funct},
		{"nop", nop_funct},
		{"sub", sub_funct},
		{"div", div_funct},
		{"mul", mul_funct},
		{"mod", mod_funct},
		{"mod", mod_funct},
		// {"#", comment_funct},
		{"pchar", pchar_funct},
		{"pstr", pstr_funct},
		{"rotl", rotl_funct},
		// {"rotr", push_funct},
		{NULL, NULL},
	};
	int index = 0;

	while (arr[index].opcode)
	{
		if (strcmp(arr[index].opcode, param.line_string) == 0)
			return (arr[index].f);
		index++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n"
			, param.line_no, param.line_string);
	free(param.line_string);
	exit(EXIT_FAILURE);
}
