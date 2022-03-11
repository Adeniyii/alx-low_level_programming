#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1 = 57, n2 = 102, i, j;

	for (i = 48; i <= n1; i++)
	{
		putchar(i);
	}
	for (j = 97; j <= n2; j++)
	{
		putchar(j);
	}
	putchar(10);
	return (0);
}
