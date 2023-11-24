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
	int bit;

	bit = (n >> index);
	if (index > 32)
		return (-1);
	return (bit & 1);
}
