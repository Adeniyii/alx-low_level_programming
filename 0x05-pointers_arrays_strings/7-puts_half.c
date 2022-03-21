#include "main.h"

/**
 * puts_half - print half of a string, and a new line to stdout
 * @str: the address of the string.
 */
void puts_half(char *str)
{
	int i, n, count = 0;

	while (*(str + count) != 0)
	{
		count++;
	}

	if (count % 2 == 0)
		n = count / 2;
	else
		n = (count / 2) + 1;

	for (i = n; i < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
