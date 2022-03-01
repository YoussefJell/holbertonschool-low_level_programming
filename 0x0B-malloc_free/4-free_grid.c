#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free's the alloc_grid function
 * @grid: the grid
 * @height: the grid height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		grid[i] = NULL;
	}
	free(grid);
	grid = NULL;
}
