#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, n = 9;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(i * j);
			_putchar(',');
			_putchar(' ');
		}
	}
}
