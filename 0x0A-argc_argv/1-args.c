#include <stdio.h>
#include <string.h>

/**
 * main - Entry point for the program
 * @argc:  Number of arguments passed into function
 * @argv: Array of command line arguments passed into function
 *
 * Return: 0 (success)
 */
int main(int argc, char  **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
