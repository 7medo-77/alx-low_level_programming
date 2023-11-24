#include "main.h"
#include <stdlib.h>

/**
 * set_bit - set the value of a bit at index n to 1
 *
 * @n: Integer parameter
 * @idx: index of the desired bit to be changed
 *
 * Return: Integer value
 */
int set_bit(unsigned long int *n, unsigned int idx)
{
	if (idx > sizeof(n) * 8)
		return (-1);
	*n |= (1 << idx);
	return (1);
}
