#include "main.h"

/**
 * print_square - print squares to the terminal.
 * @size: size of square.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar(10);
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
}
