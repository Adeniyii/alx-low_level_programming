#include "main.h"

/**
 * print_triangle - print a triangle to the terminal.
 * @size: depth of triangle.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar(10);
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			_putchar(' ');
		}

		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
}
