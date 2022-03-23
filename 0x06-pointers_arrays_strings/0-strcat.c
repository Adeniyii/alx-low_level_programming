#include "main.h"

/**
 * _strcat - append string from src to dest
 * @dest: destination of copied string.
 * @src: source to copy string from.
 *
 * Return: Pointer to the copied string.
 */
char *_strcat(char *dest, char *src)
{
	int i, cursor = -1;

	while (*(dest + cursor) != '\0')
	{
		cursor++;
	}

	for (i = 0; *(src + cursor) != '\0'; i++)
	{
		*(dest + cursor) = *(src + i);
		cursor++;
	}

	*(dest + cursor) = '\0';

	return (dest);
}
