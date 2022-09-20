#include "main.h"

/**
 * _puts - print a string, and new line to stdout
 * @str: the address of the string.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
