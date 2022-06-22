#include "main.h"

/**
 * _isdigit - check for a digit.
 * @c: character to check.
 *
 * Return: 1 if digit. 0 otherwise.
 */
int _isdigit(int c)
{
	char asciichar = c;

	if ((asciichar >= 48) && (asciichar <= 57))
		return (1);
	return (0);
}
