#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 *
 * @nmemb: number of array slots.
 * @size: size of array elements.
 * Return: void*
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
