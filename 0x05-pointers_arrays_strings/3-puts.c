#include "main.h"

/**
 * _puts - print a string, and new line to stdout
 * @str: the address of the string.
 */
void _puts(char *str)
{
	int count = 0;
	int cursor = 0;

	while (*(str + cursor) != 0)
	{
		_putchar(*(str + cursor));
		cursor++;
		count++;
	}
	_putchar(10);
}
