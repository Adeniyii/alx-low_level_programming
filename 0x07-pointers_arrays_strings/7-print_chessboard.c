#include "main.h"

/**
 * print_chessboard - print a chessboard
 * @a: multi-dimensional chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			_putchar(a[i][j - 1]);
			if (j == 8)
			{
				_putchar('\n');
			}
		}
	}
}
