#include "main.h"
#include <stdlib.h>

/**
 * print_rev - A function that prints the string, but reversed
 *
 * @s: A string passed on to the function
 */
void print_rev(char *s)
{
	int i, length;

	i = 0;
	while (*s)
		i++;
	length = i - 1;
	for ( ; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
