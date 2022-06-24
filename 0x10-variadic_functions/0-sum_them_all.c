#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return total sum of variable arguments
 * @n: length of variable arguments
 *
 * Return: Sum of variable integers, (0) is n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	size_t i;
	size_t sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
