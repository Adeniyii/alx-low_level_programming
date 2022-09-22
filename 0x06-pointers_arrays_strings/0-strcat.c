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
	char *tmp = dest;

	while (*dest)
		dest++;

	while (*src)
	{
		*(dest) = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (tmp);
}
