#include <stdio.h>

/**
 * print_alphabet - a function that prints the alphabets, in lowercase
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	int i, n = 122;

	for (i = 97; i <= n; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
