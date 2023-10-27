#include <stdio.h>
#include <string.h>

/**
 * main - Entry point for the program
 * @argc:  Number of arguments passed into function
 * @argv: Array of command line arguments passed into function
 *
 * Return: 0 (success)
 */
int main(int argc, char const **argv)
{
	int a;

	(void)argc;
	a = 0;
	while (a < argc)
	{
		printf("%s\n", argv[a++]);
	}
	return (0);
}
