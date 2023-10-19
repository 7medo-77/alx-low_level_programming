#include "main.h"
#include <stdio.h>
/**
 * reverse_array - A function that reverses a string
 *
 * @a: String to be reversed
 * @n: Length of string, including the null terminator
 */
void reverse_array(int *a, int n)
{
	int i, half, temp;

	half = (n - 1) / 2;
	for (i = 0; i < half; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
