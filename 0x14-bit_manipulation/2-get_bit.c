#include "main.h"

/**
 * get_bit - Get the bit value at index
 * @n: input number
 * @index: position of bit to get
 *
 * Return: value of bit at given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (!n || !index)
		return (-1);

	if (mask & n)
		return (1);

	return (0);
}
