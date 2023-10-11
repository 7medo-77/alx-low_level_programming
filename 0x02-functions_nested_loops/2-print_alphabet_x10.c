#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the english alphabet from a-z
 * Return: Always 0 (Success)
 * --------------------------
 * Prototype: void print_alphabet(void);
 * You can only use _putchar twice in your code
 * --------------------------
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
