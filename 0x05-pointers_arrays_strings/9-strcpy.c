#include "main.h"

/**
 * _strcpy - copy string from src to dest
 * @dest: destination of copied string.
 * @src: source to copy string from.
 *
 * Return: Pointer to the copied string.
 */
char *_strcpy(char *dest, char *src)
{
	int i, cursor = 0;

	while (*(src + cursor) != 0)
	{
		cursor++;
	}

	for (i = 0; i <= cursor; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
