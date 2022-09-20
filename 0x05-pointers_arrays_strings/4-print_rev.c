#include "main.h"

/**
 * print_rev - print a string, and new line to stdout.. in reverse
 * @str: the address of the string.
 */
void print_rev(char *str)
{
	int count = 1; /* starting from 1 to account for '\0' */

	while (*(str++))
		count++;

	while (count--)
		_putchar(*(--str));

	_putchar(10);
}
