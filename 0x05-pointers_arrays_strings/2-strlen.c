#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: the address of the string.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s++))
		count++;
	return (count);
}
