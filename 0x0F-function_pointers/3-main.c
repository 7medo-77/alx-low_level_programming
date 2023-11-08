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

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	int num1, num2, res = 0;
	int (*funcP)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	funcP = get_op_func(argv[2]);
	res = funcP(num1, num2);

	if ((argv[1] == 0 || argv[3] == 0) && argv[2][0] == '/')
	{
		printf("Error\n");
		exit(100);
	}
	if (!funcP)
	{
		printf("Error\n");
		exit(99);
	}

	return (res);
}
