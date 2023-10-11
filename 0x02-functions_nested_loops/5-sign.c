#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a digitber
 *
 * @digit: ASCii value.
 *
 * Return: 1 if c is lowercase or Returns 0 otherwise
 */

int print_sign(int digit)
{

	switch (digit)
	{
	case 0:
		_putchar('0');
		return (0);
	default:
		if (digit > 0)
		{
			_putchar('+');
			return (1);
		}
		else if (digit < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('-');
			return ('/');
		}
	}
}
