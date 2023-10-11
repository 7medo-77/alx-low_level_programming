#include <stdio.h>
#include "main.h"

/**
 * times_table - Write a function that prints the 9 times table
 *
 *
 * Return: the num of times
 */

void times_table(void)
{
	int num, mul, res;

	for (num = 0; num < 10; num++)
	{
		for (mul = 0; mul <= 9; mul++)
		{
			res = (num * mul);
			if (mul != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res >= 10)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res < 10 && mul != 0)
			{
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
			else
			{
				_putchar((res % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
