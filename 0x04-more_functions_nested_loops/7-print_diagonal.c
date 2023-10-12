#include "main.h"
/**
 * print_diagonal - a function that prints a diagonal line with length n
 *
 * @n: number which specifies the length of diagonal line
 *
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;
	while (i <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		for (j = 0; j <= i; j++)
			_putchar('\\');

		_putchar('\n');
		i++;
	}
}
