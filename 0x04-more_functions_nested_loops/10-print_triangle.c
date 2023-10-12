#include "main.h"
/**
 * print_triangle - a function that prints a square of size n
 *
 * @size: number which specifies the size of square
 *
 * Return: Always 0 (success)
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		if (size <= 0)
		{
			_putchar('\n');
			break;
		}
		for (j = 1; j <= size - i - 1; i++)
			_putchar(' ');
		for (k = 1; k <= i; k++)
			_putchar('#');
		_putchar('\n');
	}
}
