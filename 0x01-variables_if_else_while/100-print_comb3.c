#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 57, i, j;

	for (i = 48; i <= n; i++)
	{
		for (j = 48; j <= n; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i != 8 && j != 9)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
