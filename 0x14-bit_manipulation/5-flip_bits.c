#include "main.h"

/**
 * flip_bits - Number of bits which are desired to be flipped
 * to get from one number to another
 *
 * @n: First integer
 * @m: Second integer to be compared
 *
 * Return: Number of bit flips performed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int index_i = 0, bit_flips = 0;
	unsigned long int j_index = sizeof(unsigned long int) * 8;

	while (index_i < j_index)
	{
		if ((m & 1) != (n & 1))
			bit_flips += 1;
		n = n >> 1;
		m = m >> 1;
		index_i++;
	}

	return (bit_flips);
}

