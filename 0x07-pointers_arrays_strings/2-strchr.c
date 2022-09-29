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
	while (s && *s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
