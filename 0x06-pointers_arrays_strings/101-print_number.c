#include "main.h"

/**
 * base_10 - exponent in 10 base
 * @n: an exponent
 * Return: returns 10 to exponent exponent
 */
int base_10(int n)
{
	int base = 10;

	while (n > 0)
	{
		base *= 10;
		n--;
	}
	return (base);
}

/**
 * print_number - prints integers enters as parameters using putchar
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	int exponent;

	exponent = base_10(8);

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n == 0)
		_putchar('0');

	else
	{
		while (n / exponent == 0)
			exponent /= 10;

		while (exponent >= 1)
		{
			_putchar((n / exponent) + '0');
			n %= exponent;
			exponent /= 10;
		}
	}
}
