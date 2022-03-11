#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97, i;

	for (i = 122; i >= n; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
