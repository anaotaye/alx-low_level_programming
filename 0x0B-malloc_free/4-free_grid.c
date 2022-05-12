#include <stdlib.h>

/**
 * free_grid - function that frees previously created two dimensional array
 * @grid: grid to free
 * @height: columns
 *
 * Return: nothing to return
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
