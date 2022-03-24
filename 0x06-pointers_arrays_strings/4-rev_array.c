#include "main.h"

/**
 * reverse_array - reverse an array of n items
 * @a: first comparison string.
 * @n: second comparison string.
 */
void reverse_array(int *a, int n)
{
	int i, x;

	for (i = 0; i < n; i++)
	{
		n--;
		x = a[i];
		a[i] = a[n];
		a[n] = x;
	}
}
