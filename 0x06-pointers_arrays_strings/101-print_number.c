#include "main.h"

/**
 * print_number - prints an integer;
 * @n: integer to be printed;
 */
void print_number(int n)
{
	unsigned int numb;

	if (n < 0)
	{
		numb = -n;
		_putchar('-');
	}
	else
	{
		numb = n;
	}

	if (numb / 10)
		print_number(numb / 10);

	_putchar((numb % 10) + '0');
}
