#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int count = 0;

	while (*(text + count))
		count++;

	int written = write(STDERR_FILENO, text, count + 1);

	return (1);
}
