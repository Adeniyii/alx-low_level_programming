#include "main.h"

/**
 * _memcpy -  copy n bytes from memory area 'src' to memory area 'dest'
 *
 * @dest: destination to copy to
 * @src: src to copy from
 * @n: no of chars to be copied
 *
 * Return: address to destination string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
