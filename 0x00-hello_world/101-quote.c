#include <stdio.h>
#include <unistd.h>

/**
 *main- Entry point for the program
 *
 *Description: A C program which write to the standard error
 *
 *Return: always 0 (Success)
 */

int main(void)
{
	int i, j;

	char *s = "and that piece of art is useful \" - Dora Korpar, 2015-10-19\m";

	for (i = 0; *s != '\0'; i++)
	{
		j++;
	}

	j = write(STDERR_FILENO, s, j);
	fprintf(stderr, "%s", s);
	return (1);
}
