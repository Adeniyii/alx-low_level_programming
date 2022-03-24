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
	int i;
	int nulled = 0;

	for (i = 0; i < n; i++)
	{
		if (*(src + i) == '\0')
		{
			*(dest + i) = '\0';
			nulled = 1;
		}
		else
		{
			if (nulled)
			{
				*(dest + i) = '\0';
			}
			else
			{
				*(dest + i) = *(src + i);
			}
		}
	}
	return (dest);
}
