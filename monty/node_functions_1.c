#include "monty.h"

/**
 * pop_funct - Removes head of the node
 *
 * @top: pointer to first node in doubly linked list stack
 * @line_number: Line number in the monty file
 *
 */
void pop_funct(stack_t **top, unsigned int line_number)
{
	stack_t *temp;

	if (!param.top)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", param.line_no);
		free(param.line_string);
		exit(EXIT_FAILURE);
	}
	else
	{
		temp = param.top;
		if (!param.top->next && !param.top->prev)
		{
			free(temp);
			param.top = NULL;
		}
		else
		{
			param.top = param.top->next;
			param.top->prev = NULL;
			free(temp);
		}
	}
}



/**
 * add_funct - Adds the integer value of the first node
 *			   to the second node and removes the head
 *
 * @top: pointer to first node in doubly linked list stack
 * @line_number: Line number in the monty file
 *
 */
void add_funct(stack_t **top, unsigned int line_number)
{
	stack_t *probe = param.top, *temp;

	if (!probe->next->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", param.line_no);
		free(param.line_string);
		exit(EXIT_FAILURE);
	}
	else
	{
		temp = param.top;
		param.top->next->n += param.top->n;
		param.top = param.top->next;
		param.top->prev = NULL;
		free(temp);
	}
}


/**
 * swap_funct - Swaps the first and second nodes with each other
 *
 * @top: pointer to first node in doubly linked list stack
 * @line_number: Line number in the monty file
 *
 */
void swap_funct(stack_t **top, unsigned int line_number)
{
	stack_t *probe = param.top;
	int temp_int;

	if (!probe->next->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", param.line_no);
		free(param.line_string);
		exit(EXIT_FAILURE);
	}
	else
	{
		temp_int = probe->n;
		probe->n = probe->next->n;
		probe->next->n = temp_int;
	}
}

/**
 * sub_funct - Subtracts the second top element of the
 *			   stack with the top element of the stack
 *
 * @top: pointer to first node in doubly linked list stack
 * @line_number: Line number in the monty file
 *
 */
void sub_funct(stack_t **top, unsigned int line_number)
{
	stack_t *probe = param.top, *temp;

	if (!probe->next->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", param.line_no);
		free(param.line_string);
		exit(EXIT_FAILURE);
	}
	else
	{
		temp = param.top;
		param.top->next->n -= param.top->n;
		param.top = param.top->next;
		param.top->prev = NULL;
		free(temp);
	}
}
/**
 * mul_funct - Multiplies the second top element
 *			   of the stack with the top element of the stack
 *
 * @top: pointer to first node in doubly linked list stack
 * @line_number: Line number in the monty file
 *
 */
void mul_funct(stack_t **top, unsigned int line_number)
{
	stack_t *probe = param.top, *temp;

	if (!probe->next->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", param.line_no);
		free(param.line_string);
		exit(EXIT_FAILURE);
	}
	else
	{
		temp = param.top;
		param.top->next->n *= param.top->n;
		param.top = param.top->next;
		param.top->prev = NULL;
		free(temp);
	}
}
