#include "main.h"

/**
 * @brief turn off bit at given index
 *
 * @n: int to be modified
 * @index: index of bit to turn off
 * Return: 1 if successful, 0 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1 << index);

	if (index > 63)
		return (-1);

	*n = *n & mask;

	return (1);
}
