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
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}
