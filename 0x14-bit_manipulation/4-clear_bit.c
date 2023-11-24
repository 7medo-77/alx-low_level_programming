#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - At an index (idx), the value of the
 *			   desired bit is changed to 0
 * @n: Integer parameter
 * @idx: Index of the desired bit
 * Return: (1) Success,
 *		   (-1) Failure
 */

int clear_bit(unsigned long int *n, unsigned int idx)
{
	if (idx > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << idx);
	return (1);
}
