#include "main.h"
/**
 * print_square - a function that prints a square of size n
 *
 * @size: number which specifies the size of square
 *
 * Return: Always 0 (success)
 */
void print_square(int size)
{
	int i, j;

	j = 1;
	while (j <= size)
	{
		if (size <= 0)
		{
			_putchar('\n');
			break;
		}
		for (i = 1; i <= size; i++)
			_putchar('#');
		_putchar('\n');
		j++;
	}
}
