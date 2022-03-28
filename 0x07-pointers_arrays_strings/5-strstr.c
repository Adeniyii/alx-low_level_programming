#include "main.h"

/**
 * _strstr - locate a substring within a string
 *
 * @haystack: string to search through.
 * @needle: substring to locate.
 *
 * Return: pointer to the beginning of the located substring,
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}

		if (*y == '\0')
			return (haystack);
	}

	return (NULL);
}
