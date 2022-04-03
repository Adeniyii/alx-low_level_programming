#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: count of cmd line arguments.
 * @argv: array of cmd line arguments.
 *
 * Return: Always (0).
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
