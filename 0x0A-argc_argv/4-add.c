#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point for the program
 * @argc:  Number of arguments passed into function
 * @argv: Array of command line arguments passed into function
 *
 * Return: 0 (success)
 */
int main(int argc, char const **argv)
{
	int res, i, j;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (1);
	}
	res = 0;
	i = 1;
	j = 0;
	while (i < argc)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		res += atoi(argv[i]);
		i++;
	}
	printf("%d\n", res);
	return (0);
}
