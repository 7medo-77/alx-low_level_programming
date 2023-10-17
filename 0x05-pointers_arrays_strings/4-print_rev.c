#include "main.h"
#include <stdlib.h>

/**
 * print_rev - A function that prints the string, but reversed
 *
 * @string: A string passed on to the function
 */
void print_rev(char *string)
{
	int len = 0;
	int num;

	while (string[len] != '\0')
		len++;

	num = len - 1;
	for (; num >= 0; num--)
		_putchar(string[num]);

	_putchar('\n');
}
