#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry point for the program
 * @argc:  Number of arguments passed into function
 * @argv: Array of command line arguments passed into function
 *
 * Return: 0 (success)
 */
int main(int argc, char const **argv)
{
	int res, a, b;

	(void)argc;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (-1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		res = a * b;
		printf("%d\n", res);
		return (0);
	}
}
