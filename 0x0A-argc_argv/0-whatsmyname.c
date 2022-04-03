#include "main.h"

/**
 * main - Entry point
 * @argc: count of cmd line arguments.
 * @argv: array of cmd line arguments.
 *
 * Return: Always (0).
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int i;

	for (i = 0; *(*argv + i) != '\0'; i++)
	{
		putchar(*(*argv + i));
	}
	putchar('\n');
	return (0);
}
