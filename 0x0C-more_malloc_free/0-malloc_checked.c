#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocate space just because :|
 *
 * @b: Number of bytes to allocate.
 * Return: void*
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	return (ptr);
}
