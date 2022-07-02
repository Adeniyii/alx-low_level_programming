#include "main.h"

int count_bits(unsigned long int mask, unsigned long int n);

/**
 * flip_bits - Counts the no of bits to be flipped to convert int n to m.
 * @n: first operand
 * @m: second operand
 *
 * Return: (unsigned int) no of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int count;

	count = bitty(1, num);
	return (count);
}

/**
 * count_bits - count number of (ON) bits in n
 * @mask: bit mask to use to check bit status of n
 * @n: number to carry out operation on
 *
 * Return: int number of (ON) bits in n
 */
int count_bits(unsigned long int mask, unsigned long int n)
{
	int count = 0;

	if (mask > 0)
	{
		int result = bitty(mask << 1, n);

		if ((mask & n) > 0)
		{
			count++;
		}
		return (count + result);
	}
	return (count);
}
