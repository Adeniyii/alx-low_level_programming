#include "main.h"

/**
 * rev_string - print a string to stdout.. in reverse
 * @str: the address of the string.
 */
void rev_string(char *str)
{
	int i, lastIndexValue;
	int cursor = 0;

	while (*(str + cursor) != 0)
	{
		cursor++;
	}

	for (i = 0; i < cursor; i++)
	{
		lastIndexValue = *(str + (--cursor));
		*(str + cursor) = *(str + i);
		*(str + i) = lastIndexValue;
	}
}
