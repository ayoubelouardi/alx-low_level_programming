#include "main.h"

/**
 * free_grid - free 2D array
 * @grid: pointer to the first pointer int the array
 * @height: the raws of the array
 * Description:
 * function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height == 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		for (i = 0; i < height; i++)
			free(grid);
	}
}
