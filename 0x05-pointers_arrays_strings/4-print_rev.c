#include "main.h"

/**
 * print_rev - print a string, and new line to stdout.. in reverse
 * @str: the address of the string.
 */
void print_rev(char *str)
{
	int count = 0, i;
	int cursor = 0;

	while (*(str + cursor) != 0)
	{
		cursor++;
		count++;
	}

	for (i = count; i >= 0; i--)
	{
		_putchar(*(str + i));
	}
	_putchar(10);
}
