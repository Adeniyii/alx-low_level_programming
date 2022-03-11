#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 57, i;

	for (i = 48; i <= n; i++)
	{
		putchar(i);
		if (i != n)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
