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
	int itr = 63;
	unsigned long int j;

	j = 0b1000000000000000000000000000000000000000000000000000000000000000;

	while (itr >= 0)
	{
		_putchar(n & j ? '1' : '0');
		j >>= 1;
		itr--;
	}
}
