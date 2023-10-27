#include <stdio.h>
#include <string.h>

/**
 * main - Entry point for the program
 * @argc - Number of arguments passed into function
 * @*argv - Array of command line arguments passed into function
 *
 * Return: 0 (success)
 */
int main(int argc, char const **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
