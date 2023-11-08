#include "3-calc.h"
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
	if (argc > 4)
	{
		printf("Error");
		return (0);
	}
	int num1, num2, res;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	res = 0;

	if (argv[2][0])
	{
		res = (*get_op_func(argv[2]))(num1, num2);
	}
	return (res);
}
