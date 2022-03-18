#include "main.h"

/**
 * print_diagonal - print numbers from 0 - 9, excluding 2 and 4.
 * @n: .
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar(10);
		return;
	}
	print_diagonal(n - 1);

	for (i = n; i > 1; i--)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar(10);
}
