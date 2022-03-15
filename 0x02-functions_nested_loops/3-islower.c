#include <stdio.h>

/**
 * _islower - Check if a character is lowercase
 * @value: The character to be checked
 *
 * Return: 1 if the character is lowercas. 0 otherwise
 */
int _islower(int value)
{
	if (value >= 97)
	{
		if (value <= 122)
		{
			return (1);
		}
		return (0);
	}
	return (0);
}
