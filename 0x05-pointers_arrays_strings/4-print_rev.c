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
	length = i;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
