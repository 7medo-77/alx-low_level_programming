#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints sum of two diagonals
 *
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 *
 */

void print_diagsums(int *a, int size)
{
	int array_index, rolling_diagsum_1 = 0, rolling_diagsum_2 = 0;

	for (array_index = 0; array_index < size; array_index++)
	{
		rolling_diagsum_1 += a[array_index];
		a += size;
	}

	a -= size;

	for (array_index = 0; array_index < size; array_index++)
	{
		rolling_diagsum_2 += a[array_index];
		a -= size;
	}

	printf("%d, %d\n", rolling_diagsum_1, rolling_diagsum_2);
}
