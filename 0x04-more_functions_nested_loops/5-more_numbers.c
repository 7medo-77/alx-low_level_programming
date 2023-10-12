#include <stdio.h>
#include "main.h"
/**
 * more_numbers - a function that prints from 0 to 14 ten times
 *
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
