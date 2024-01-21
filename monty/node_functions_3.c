#include "monty.h"

/**
 * rotl_funct - Rotates the stack so that the first node
 *				becomes the last and the seconde last
 *				becomes the first
 *
 * @top: pointer to first node in doubly linked list stack
 * @line_number: Line number in the monty file
 *
 */
void rotl_funct(stack_t **top, unsigned int line_number)
{
	stack_t *probe = param.top, *temp = param.top;

	while (probe->next)
		probe = probe->next;

	probe->next = temp;
	param.top = param.top->next;
	temp->next = NULL;
	temp->prev = probe;
	param.top->prev = NULL;
}


/**
 * rotr_funct - Rotates the stack so that it inverts
 *
 * @top: pointer to first node in doubly linked list stack
 * @line_number: Line number in the monty file
 *
 */
void rotr_funct(stack_t **top, unsigned int line_number)
{
	stack_t *probe = param.top;

	if (!probe)
		printf("\n");
	else
	{
		while (probe && probe->n != 0 && (probe->n >= 33 && probe->n <= 127))
		{
			printf("%c", probe->n);
			probe = probe->next;
		}
		printf("\n");
	}
}


/**
 * free_list - Frees linked list
 *
 * @top: pointer to first node in doubly linked list stack
 */
void free_list(stack_t **top)
{
	stack_t *temp = param.top;

	while (param.top)
	{
		temp = param.top;
		param.top = param.top->next;
		free(temp);
	}

	param.line_string = NULL;
	free(param.line_string);
}
