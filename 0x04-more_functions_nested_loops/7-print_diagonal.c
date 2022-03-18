#include "main.h"

/**
 * print_diagonal - print diagonal lines to th terminal.
 * @n: depth of diagonal.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar(10);
		return;
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar(10);
	}
}
