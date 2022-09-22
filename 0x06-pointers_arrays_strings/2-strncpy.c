#include "main.h"

/**
 * _strncpy - copy string from src to dest
 * @dest: destination of copied chars.
 * @src: source to copy chars from.
 * @n: max number of bytes to copy from src
 *
 * Return: Pointer to the copied string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *tmp = dest;

	while (i < n)
	{
		if (!*src)
		{
			*dest = '\0';
		}
		else
		{
			*dest = *src;
			src++;
		}

		dest++;
		i++;
	}

	return (tmp);
}
