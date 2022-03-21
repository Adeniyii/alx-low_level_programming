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
	int i;

	while (1)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
		i++;
	}
	return (dest);
}
