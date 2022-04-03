#include "main.h"

/**
 * main - Entry point
 * @argc: count of cmd line arguments.
 * @argv: array of cmd line arguments.
 *
 * Return: Always (0).
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
