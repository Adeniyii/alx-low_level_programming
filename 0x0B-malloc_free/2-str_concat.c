#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string.
 * @s2: second string.
 *
 * Return: char*
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j;

	if (s1 == NULL)
	{
		ptr = malloc(strlen(s2));

		for (j = 0; j < strlen(s2); j++)
			ptr[j] = s2[j];
		return (ptr);
	}
	if (s2 == NULL)
	{
		ptr = malloc(strlen(s1));

		for (j = 0; j < strlen(s1); j++)
			ptr[j] = s1[j];
		return (ptr);
	}
	ptr = (char *)malloc(strlen(s1) + strlen(s2) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
		ptr[i] = s1[i];
	for (j = 0; j < strlen(s2); j++, i++)
		ptr[i] = s2[j];

	ptr[i] = '\0';
	return (ptr);
}
