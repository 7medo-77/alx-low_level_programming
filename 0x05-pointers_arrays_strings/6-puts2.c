#include <stdio.h>
#include "main.h"
/**
 * puts2 - A function that
 *
 * @str: A paramter entered into the function
 *
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		else
			continue;
		i++;
	}
}
