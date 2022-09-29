#include "main.h"

/**
 * _strpbrk - locate the first occurrence in the string 's'
 * of any of the bytes in the string 'accept'
 *
 * @s: string to search
 * @accept: string to search for
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * NULL if the character is not found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (s);

			accept++;
		}
		s++;
	}
	return (NULL);
}
