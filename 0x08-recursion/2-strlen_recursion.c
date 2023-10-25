#include "main.h"

/**
 *  _strlen_recursion- prints a string, in reverse, followed by a new line
 * @s: string to print
 * Return: Number of chars in a string(i)
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		i = 0;

		return (0);
	}
	else
	{
		i = _strlen_recursion(s + 1) + 1;
		return (i);
	}
}

