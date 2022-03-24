#include "main.h"
#include <stdio.h>

/**
 * string_toupper - convert chars to uppercase
 * @text: chars to convert.
 *
 * Return: address to uppercased letters.
 */
char *string_toupper(char *text)
{
	int i;

	for (i = 0; text[i] != '\0'; i++)
	{
		if (text[i] >= 97 && text[i] <= 122)
		{
			text[i] = text[i] - 32;
		}
	}
	return (text);
}
