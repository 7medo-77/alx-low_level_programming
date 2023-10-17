#include "main.h"
#include <stdlib.h>

/**
 * print_rev - A function that
 *
 * @s: A string passed on to the function
 */
void print_rev(char *s)
{
	int i, j, length;

	i = 0;
	while (*s++)
		i++;

	length = i;
	for (j = 0; j <= length / 2 ; )
	{
		int temp;
		temp = s[j++];
		s[j++] = s[i--];
		s[i--] = temp;
	}

	int m;

	m = 0;
	while (*s++)
		_putchar(s[m++]);
	_putchar('\n');
}
