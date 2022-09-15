#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 57, i, j, k, l;

	for (i = 48; i <= n; i++)
	{
		for (j = 48; j <= n; j++)
		{
			for (k = 48; k <= n; k++)
			{
				for (l = 48; l <= n; l++)
				{
					if (j < l)
					{
						putchar(i);
						putchar(j);
						putchar(32);
						putchar(k);
						putchar(l);
						if (i != 57 || j != 56 || k != 57 || l != 57)
						{
							putchar(44);
							putchar(32);
						}
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
