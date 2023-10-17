#include "main.h"
/**
 * _puts - A function that prints a string, followed by a new line
 *
 * @str: The string passed to the argument
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '0'; i++)
		_putchar((str[i]) + '0');
	_putchar('\n');
}
