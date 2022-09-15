#include "main.h"

/**
 * get_endianness - Check the endianness of a system.
 *
 * Return: (1) if little endian, (0) if big endian
 */
int get_endianness(void)
{
	int i = 1;
	char *ptr = (char *)&i;

	if (*ptr)
		return (1);

	return (0);
}
