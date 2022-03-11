#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 57, i, j, k;

	for (i = 48; i <= n; i++)
	{
		for (j = 48; j <= n; j++)
		{
			for (k = 48; k <= n; k++)
			{
				if (i < j && j < k && i < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 || j != 56 || k != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
