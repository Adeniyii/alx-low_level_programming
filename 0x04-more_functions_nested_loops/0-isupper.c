#include "main.h"

/**
 * _isupper - check for uppercase letter.
 * @c: letter to check.
 *
 * Return: 1 if uppercase. 0 otherwise.
 */
int _isupper(int c)
{
	char asciichar = c;

	if ((asciichar >= 65) && (asciichar < 90))
		return (1);
	return (0);
}
