#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, n = 9;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int value = (i * j);
			if (value > 10)
				_putchar((value / 10) + '0');

			_putchar((value % 10) + '0');
			_putchar(',');
			_putchar(' ');
			if (value < 10)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
