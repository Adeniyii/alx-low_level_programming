#include <stdio.h>
#include <string.h>

/**
  * main - Entry point
  *
  * Return: Always success (0)
  */
int main(void)
{
	char source[] = "_putchar";
	int i, n = strlen(source);

	for (i = 0; i < n; i++)
	{
		int asciiVal = source[i];

		putchar(asciiVal);
	}

	putchar(10);
	return (0);
}
