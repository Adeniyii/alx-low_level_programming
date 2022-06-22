#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 *
 * @array: array of elements
 * @size: size of array
 * @action: pointer to function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t cursor = 0;

	if (array == NULL || action == NULL)
		return;

	while (size > cursor)
	{
		action(array[cursor]);
		cursor++;
	}
}
