#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 */
void print_times_table(int n)
{
	int rone, cone, d;

	for (rone = 0; rone <= n; rone++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cone = 1; cone <= n; cone++)
		{
			d = (rone * cone);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (cone < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
