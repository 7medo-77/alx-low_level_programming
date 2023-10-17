#include "main.h"
/**
 * _puts - A function that prints a string, followed by a new line
 *
 * @str: The string passed to the argument
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;	
	}
	_putchar('\n');
}
