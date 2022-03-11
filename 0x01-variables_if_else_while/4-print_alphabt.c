#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 122, i;

	for (i = 97; i <= n; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar(10);
	return (0);
}
