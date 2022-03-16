#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Returns the last value of a number
 * @n: The character to be formatted
 *
 * Return: The absolutee value of (n)
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * (-1);

	_putchar((n % 10) + '0');
	return (n % 10);
}
