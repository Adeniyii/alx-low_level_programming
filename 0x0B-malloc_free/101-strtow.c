#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - split string into a multi-word array
 * @str: string to split.
 *
 * Return: array of split strings
 */
char **strtow(char *str)
{
	int i, j, k = 0, len = 0;
	char **strArr;

	if (str == "" || str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 65 && str[i] <= 90) ||
		    (str[i] >= 97 && str[i] <= 122))
		{
			len++;
		}
	}
}
