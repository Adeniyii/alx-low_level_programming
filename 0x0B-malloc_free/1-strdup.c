#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copy a string to new mem address
 * @str: string to copy
 *
 * Return: char*
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = (char *)malloc(strlen(str));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
