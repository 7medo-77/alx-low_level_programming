#include "main.h"
/**
 * _puts - A function that prints a string, followed by a new line
 *
 * @str: The string passed to the argument
 */
void _puts(char *str)
{
	while (*str != '0')
	{
		_putchar((*str) + '0');
		str++;
	}
	_putchar('\n');
}
