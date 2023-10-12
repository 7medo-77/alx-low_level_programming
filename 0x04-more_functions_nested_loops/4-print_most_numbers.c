#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - a function that
 *
 * Return: Always 0 (success)
 */
void print_most_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		if (n == 2 || n == 4)
		{
			n++;
			continue;
		}
		else
			_putchar('0' + n++);
	}
	_putchar('\n');
}
