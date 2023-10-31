#include "main.h"
/**
 * free_grid - A program which frees space allocated to a two dimensional array
 * @grid: Two dimensional array
 * @height: Number of pointers to strings in the array
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
		free(grid[i]);
	free(grid);
}
