#include "main.h"

int str_len(char *string);
/**
 * alloc_grid - allocate memory for two dimensional array
 *
 * @height: Number of rows in the grid
 * @width: Number of columns in the grid
 *
 * Return: Pointer to two-dimensional array
 */

int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	grid = malloc(height * sizeof(int *) + 1);
	i = 0;
	while (i < height)
	{
		for (j = 0; j < width; j++)
		{
			grid[i] = malloc(width * sizeof(int) + 1);
			grid[i][j] = '0';
		}
		i++;
	}
	return (grid);
}
