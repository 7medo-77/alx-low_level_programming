#include "main.h"
#include <stdio.h>
/**
 * reverse_array - A function that reverses a string
 *
 * @a: String to be reversed
 * @n: Length of string, including the null terminator
 *
 * Return: Always 0 (success)
 */
void reverse_array(int *a, int n)
{
	int i, half, temp, len;

	len = 0;
	while (a[len])
		len++;

	half = (n - 1) / 2;
	for (i = 0; i < half; i++)
	{
		temp = a[i];
		a[i] = a[len - i];
		a[len - i] = temp;
	}
}
