#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: pointer to a two-dimensional array
 *
 * Return: none
 */
void print_chessboard(char (*a)[8])
{
	int i, row;

	for (row = 0; row < 8; row++)
	{
		for (i = 0; i < 8; i++)
			_putchar(a[row][i]);
		_putchar(10);
	}
}
