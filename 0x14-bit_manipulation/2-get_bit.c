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
	int count = 63;

	mask = 1L;
	while (count >= 0)
	{
		if (count == index)
		{
			if (n & mask)
				return (1);
			else if ((n & mask) == '0')
				return (0);
		}
		mask <<= 1;
		count--;
	}
	return (-1);
}
