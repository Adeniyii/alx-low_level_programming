#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - create a 2D array
 * @width: no of columns.
 * @height: no of rows.
 *
 * Return: pointer to a 2 dimensional array of integers if (success),
 * null if (failure)
 */
int **alloc_grid(int width, int height)
{
	int **iarray;
	int i, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	iarray = malloc(sizeof(int) * height);

	if (iarray == NULL)
	{
		free(iarray);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		iarray[i] = malloc(sizeof(int) * width);
		if (iarray == NULL)
		{
			free(iarray);
			return (NULL);
		}

		for (n = 0; n < width; n++)
		{
			iarray[i][n] = 0;
		}
	}
	return (iarray);
}
