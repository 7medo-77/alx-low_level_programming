#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the english alphabet from a-z
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char chart;
	int number = 0;

	for (; number < 10; number++)
	{
		for (chart = 'a'; chart <= 'z'; chart++)
		{
			_putchar(chart);
		}
		_putchar('\n');
	}

}
