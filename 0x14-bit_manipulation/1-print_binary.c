#include "main.h"

/**
 * print_binary - print binary representation of decimal number
 * @n: decimal numer to convert
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	printf("%lu", n & 1);
}
