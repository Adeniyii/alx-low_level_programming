#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 *
 * @s: string to search.
 * @accept: substring to search for.
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, matched = 0;
	char *tmp = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				matched = 1;
				break;
			}
			accept++;
		}
		if (!matched)
			return (count);

		accept = tmp;
		matched = 0;
		s++;
	}

	return (count);
}
