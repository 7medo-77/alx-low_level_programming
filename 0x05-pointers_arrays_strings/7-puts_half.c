#include "main.h"
#include <stdio.h>

/**
 * puts_half - A function that prints the last half of a string str
 *
 * @str: A string entered into the function
 *
 * Return: always 0 (success)
 */
void puts_half(char *str)
{
	int len, j;

	len = 0;
	while (str[len] != '\0')
		len++;
	j = (len + 1) / 2;

	for (;j < len ; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
