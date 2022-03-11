#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1 = 122, n2 = 90, i, j;

	for (i = 97; i <= n1; i++)
	{
		putchar(i);
	}
	for (j = 65; j <= n2; j++)
	{
		putchar(j);
	}
	putchar(10);
	return (0);
}
