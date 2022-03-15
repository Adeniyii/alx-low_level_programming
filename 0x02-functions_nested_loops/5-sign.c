#include <stdio.h>

/**
 * print_sign - Check the sign of a number
 * @n: The character to be compared
 *
 * Return: 1 if the number is > 0. 0 if == 0, -1 if < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		putchar(49);
		return (1);
	}
	else if (n == 0)
	{
		putchar(48);
		putchar(48);
		return (0);
	}
	else
	{
		putchar(45);
		putchar(49);
		return (-1);
	}
}
