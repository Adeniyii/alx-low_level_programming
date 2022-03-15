#include <stdio.h>

/**
 * _isalpha - Check if a character is alphabetic
 * @value: The character to be checked
 *
 * Return: 1 if the character is alphabetic. 0 otherwise
 */
int _isalpha(int value)
{
	if (value >= 97 && value <= 122)
	{
		return (1);
	}
	else if (value >= 65 && value <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
