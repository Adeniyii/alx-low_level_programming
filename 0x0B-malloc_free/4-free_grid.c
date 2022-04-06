#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - free memory allocated by a 2D array
 * @grid: 2d array.
 * @height: no of rows.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{

		free(grid[i]);
	}
	free(grid);
}
