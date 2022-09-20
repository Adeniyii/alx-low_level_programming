#include "main.h"

/**
 * print_rev - print a string, and new line to stdout.. in reverse
 * @str: the address of the string.
 */
void print_rev(char *str)
{
	int count = 0;

	while (*(str++))
		count++;

	--str; /* skip '\0' from end of string */
	while (count--)
		_putchar(*(--str));

	_putchar(10);
}
