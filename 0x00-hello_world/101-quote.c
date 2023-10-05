#include <stdio.h>

/**
 *main- Entry point for the program
 *
 *Description: A C program which write to the standard error
 *
 *Return: always 0 (Success)
 */

int main(void)
{
	write(2, "and that piece of art is useful \" - Dora Korpar, 2015-10-19");
	return (1);
}
