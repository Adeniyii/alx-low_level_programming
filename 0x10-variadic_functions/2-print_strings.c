#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints variable string arguments
 * @separator: separator between strings
 * @n: length of variable arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	size_t i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *val = va_arg(args, char *);

		if (val == NULL)
			printf("(nil)");
		else
			printf("%s", val);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
