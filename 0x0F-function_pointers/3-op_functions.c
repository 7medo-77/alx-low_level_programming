#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * op_add - A function that adds two integers and returns the result
 *
 * @a: Input integer
 * @b: Input integer
 *
 * Return: Result of operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_mul- A function that multiplies two integers and returns the result
 *
 * @a: Input integer
 * @b: Input integer
 *
 * Return: Result of operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- A function that divides two integers and returns the result
 *
 * @a: Input integer
 * @b: Input integer
 *
 * Return: Result of operation
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_sub - A function that subtracts two integers and returns the result
 *
 * @a: Input integer
 * @b: Input integer
 *
 * Return: Result of operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mod- A function that divides two integers and returns the remainder
 *
 * @a: Input integer
 * @b: Input integer
 *
 * Return: Result of operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
