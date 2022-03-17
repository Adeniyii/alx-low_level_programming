#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Returns the last value of a number
 * @nld: The character to be formatted
 *
 * Return: The value of the last digit
 */
int print_last_digit(int nld)
{
	int pld;

	pld = (nld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	return (pld);
}
