#include "main.h"

/**
 * reverse_array - reverse an array of n items
 * @a: first comparison string.
 * @n: length of array.
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
