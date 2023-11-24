#include "main.h"
/**
 * print_binary - Convert integer to binary
 *
 * @n: character string coprised of binary number
 *
 * Return: binary representation of long integer;
 */
void print_binary(unsigned long int n)
{
	int index, counter = 0;
	unsigned long int current;

	for (index = 63; index >= 0; index--)
	{
		current = n >> index;

		if (current & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
