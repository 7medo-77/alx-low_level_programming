#include "main.h"
/**
 * free_grid - A program which frees space allocated to a two dimensional array
 * @grid: Two dimensional array
 * @height: Number of pointers to strings in the array
 */

void free_grid(int **grid, int height)
{
	while (height--)
		free(grid[height]);
	free(grid);
}
