#include "main.h"

/**
 * _strncat - append string from src to dest
 * @dest: destination of copied chars.
 * @src: source to copy chars from.
 * @n: max number of bytes to copy from src
 *
 * Return: Pointer to the copied string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, cursor = 0;

	while (*(dest + cursor) != '\0')
	{
		cursor++;
	}

	for (i = 0; i < n; i++)
	{
		if (*(src + i) == '\0')
			break;

		*(dest + cursor) = *(src + i);
		cursor++;
	}

	*(dest + cursor) = '\0';

	return (dest);
}
