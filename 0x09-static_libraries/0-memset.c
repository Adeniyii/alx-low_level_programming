#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 *
 * @s: string to modify
 * @b: char to replace string with
 * @n: no of chars to be replaced
 * Return: adress to modified string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
