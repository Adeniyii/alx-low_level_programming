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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
