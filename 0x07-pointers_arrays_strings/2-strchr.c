#include "main.h"

/**
 * _strchr - locate a character in a string
 *
 * @s: string to modify
 * @c: char to replace string with
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		else
		{
			continue;
		}
	}
	return (NULL);
}
