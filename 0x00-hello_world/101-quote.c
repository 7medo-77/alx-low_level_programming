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

	char *s = "and that piece of art is useful \" - Dora Korpar, 2015-10-19"
	for (i = 0; s != '\0'; i++)
	{
		j++;
	}
	write(2, s, j);
	return (1);
}
