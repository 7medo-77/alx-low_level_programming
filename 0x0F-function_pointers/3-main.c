#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point for the program
 *
 * @argc: Argument count
 * @argv: Argument Vector
 *
 * Return: Result of mathematical operation between command line
 *			arguments passed as integers
 */

int main(int argc, char *argv[])
{
	int num1, num2, res = 0;
	int (*funcP)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	funcP = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (funcP == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	res = funcP(num1, num2);
	printf("%d\n", res);

	return (0);
}
