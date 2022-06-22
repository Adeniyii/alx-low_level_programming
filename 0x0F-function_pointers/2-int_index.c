#include "function_pointers.h"

/**
 * int_index - return index place if comparison = true, else -1
 *
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: Index of first matched element, (-1) if no match.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int cursor = 0;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	while (size > cursor)
	{
		if (cmp(array[cursor]) != 0)
		{
			return (cursor);
		}

		cursor++;
	}

	return (-1);
}
