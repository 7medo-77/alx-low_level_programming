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
	if (width && height)
	{
		int i, j, **grid;

		grid = malloc(height * sizeof(int *));

		if (grid == NULL)
		{
			return (NULL);
		}

		i = 0;
		while (i < height)
		{
			grid[i] = malloc(width * sizeof(int));
			if (grid[i] == NULL)
			{
				while (i--)
				{
					free(grid[i]);
				}
				free(grid);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
			i++;
		}
		return (grid);
	}
	else
		return (NULL);
}
