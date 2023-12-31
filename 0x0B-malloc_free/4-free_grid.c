#include <stdlib.h>

/**
 * free_grid - frees a 2
 * dimensional grid previously created by alloc_grid.
 * @grid: the 2D grid to be freed
 * @height: the height of the grid
 *
 * Return: (void)
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

