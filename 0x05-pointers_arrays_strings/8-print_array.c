#include "main.h"
#include <stdio.h>

/**
 * print_array - A function that prints n elements of an array of integers
 *
 * @n: A paramter which specifies the number of array elements to be printed
 *
 * @*a: The array within which n number of elements will be printed
 */
void print_array(int *a, int n)
{
	int i, j;

	i = 0;
	while (a[i] != '0')
		i++;
	for (j = 0; j < n; j++)
		printf("%d, ", a[j]);
	putchar('\n');
}
