#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array to create.
 * @c: initializer to array.
 *
 * Return: char*
 */
char *create_array(unsigned int size, char c)
{
	if (size <= 0)
	{
		return (NULL);
	}

	char *ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr[0] = c;
	return (ptr);
}
