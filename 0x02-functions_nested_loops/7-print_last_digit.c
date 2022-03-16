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
		n = n * ((n > 0) - (n < 0));
	int value = n % 10;

	_putchar(value + '0');
	return (value);
}
