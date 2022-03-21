#include "main.h"

/**
 * print_array - print the contents of an array to stdout
 * @str: the address of the string.
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
