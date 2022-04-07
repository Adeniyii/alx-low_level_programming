#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array and fill with values min - max
 *
 * @min: Min number.
 * @max: Max number.
 * Return: int*
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(((max - min) + 1) * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= (max - min); i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
