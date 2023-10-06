#include <stdio.h>
#include <unistd.h>

/**
 *main- Entry point for the program
 *
 *Description: A C program which write to the standard error
 *
 *Return: 1 (no success)
 */

int main(void)
{
	int i;

	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1, s, sizeof(s) / sizeof(char));
	i = write(stderr, s, sizeof(s) / sizeof(char));
	return (1);
}
