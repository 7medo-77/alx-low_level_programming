#include "main.h"
#include <stdlib.h>

/**
 * print_rev - A function that prints the string, but reversed
 *
 * @s: A string passed on to the function
 */
void print_rev(char *s)
{
	while (*s--)
		_putchar(*s);

	_putchar('\n');
}
