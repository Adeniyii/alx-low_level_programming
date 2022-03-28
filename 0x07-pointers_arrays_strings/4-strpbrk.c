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
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
			else
			{
				continue;
			}
		}
	}
	return (NULL);
}
