#include "main.h"

/**
 * factorial - returns the factorial of 'n'
 * @n: input
 *
 * Return: factorial of number (Success), -1 if invalid number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
