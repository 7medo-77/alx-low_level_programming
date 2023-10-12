#include <stdio.h>
#include "main.h"
/**
 * print_line - a function that prints a dotted line with n length
 *
 * @n: number which specifies the length of line
 *
 * Return: Always 0 (success)
 */
void print_line(int n)
{
	while (n--)
		_putchar('_');

	_putchar('\n');
}

