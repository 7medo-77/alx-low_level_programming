#include "main.h"
#include <stdio.h>
/**
 * reverse_array - A function that
 *
 * @s1:
 * @s2:
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
