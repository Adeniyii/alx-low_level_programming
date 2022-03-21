#include "main.h"

/**
 * print_array - print the contents of an array to stdout
 * @a: the address of the array.
 * @n: the number of items to print.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
