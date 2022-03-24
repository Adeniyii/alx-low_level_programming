#include "main.h"

/**
 * string_toupper - convert chars to uppercase
 * @text: chars to convert.
 *
 * Return: address to uppercased letters.
 */
char *string_toupper(char *text)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		text[i] = *(text - 40);
	}
	return (text);
}
