#include "main.h"
#include <stdlib.h>

/**
 * _puts - A function that prints a string, followed by a new line
 *
 * @str: The string passed to the argument
 *
 * Return: always 0 (Sucess)
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*str++)
	{
		_putchar(str[i]);
		i++;
	}
}
