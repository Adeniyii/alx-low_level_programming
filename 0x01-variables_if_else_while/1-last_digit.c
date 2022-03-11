#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastdigit = n % 10;
	char first[] = "Last digit of ";

	if (lastdigit > 5)
	{
		printf("%S %d is %d and is greater than 5\n", first, n, lastdigit);
	}
	else if (lastdigit == 0)
	{
		printf("%S %d is %d and is 0\n", first, n, lastdigit);
	}
	else if (lastdigit != 0 && lastdigit < 6)
	{
		printf("%S %d is %d and is less than 6 and not 0\n", first, n, lastdigit);
	}
	return (0);
}
