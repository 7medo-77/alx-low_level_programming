#include <stdio.h>
#include "main.h"
/**
 *  - a function that
 *
 * @ :
 *
 * Return: Always 0 (success)
 */
void print_numbers(void)
{
	int a;

	a = 0;
	while (a <= 9)
		_putchar((a++) + 48);
	_putchar('\n');
}
