#include "main.h"

/**
 * puts2 - print a every other character in a string, and a new line to stdout
 * @str: the address of the string.
 */
void puts2(char *str)
{
	int cursor = 0;

	while (*(str + cursor) != 0)
	{
		_putchar(*(str + cursor));
		if (*(str + cursor + 1) == 0)
			break;

		cursor += 2;
	}
	_putchar(10);
}
