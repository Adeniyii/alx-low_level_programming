#include "main.h"
#include <string.h>

/**
 * binary_to_uint - Return binary representation of decimal string
 * @b: string representation of binary digit
 *
 * Return: decimal representation of decimal string, or 0 if invalid input
 */
unsigned int binary_to_uint(const char *b)
{
	size_t result = 0;
	int i, base = 1;

	if (b == NULL)
	{
		return (0);
	}

	for (i = (strlen(b) - 1); i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}

		if (*(b + i) == '1')
		{
			result = result + base;
		}
		base = base * 2;
	}

	return (result);
}
