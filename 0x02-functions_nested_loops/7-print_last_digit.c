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
	int absVal = n * ((n > 0) - (n < 0));
	int value = absVal % 10;

	_putchar(value + '0');
	return (value);
}
