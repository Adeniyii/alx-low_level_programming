#include "main.h"

/**
 * swap_int - swap values at a and b.
 * @a: first pointer.
 * @b: second pointer.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
