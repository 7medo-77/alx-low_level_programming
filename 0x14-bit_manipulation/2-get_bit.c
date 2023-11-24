#include "main.h"
/**
 * get_bit - Returns the value of a bit a ta given index
 *
 * @n: character string coprised of binary number
 * @index: Index of the bit to be found
 *
 * Return: Bit which is searched for
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int count = 0;

	mask = 0b1000000000000000000000000000000000000000000000000000000000000000;
	while (count < 64)
	{
		if (count == index)
		{
			if ((n & mask) != '0')
				return (1);
			if ((n & mask) == '0')
				return (0);
		}
		mask >>= 1;
		count++;
	}
	return (-1);
}
