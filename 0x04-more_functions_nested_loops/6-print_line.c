#include "main.h"

/**
 * print_line - draw a straight line in the terminal.
 * @n: no of lines to be printed.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar(10);
		return;
	}

	_putchar('_');
	print_line(n - 1);
}
