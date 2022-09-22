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
	int i = 0;
	char *tmp = dest;

	while (*dest)
		dest++;

	while (*src && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	if (!*src)
		*dest = '\0';

	return (tmp);
}
