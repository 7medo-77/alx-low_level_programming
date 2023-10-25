#include "main.h"

/**
 * _print_rev_recursion - prints a string, in reverse, followed by a new line
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		_putchar(*(s - 1));
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*(s - 1));
	}
}
