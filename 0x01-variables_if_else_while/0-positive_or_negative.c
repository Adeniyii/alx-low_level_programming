#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char* m;

	if (n > 0)
	{
		m = "is positive";
	}
	else if (n == 0)
	{
		m = "is zero";
	}
	else
	{
		m = "is negative";
	}

	printf("%d is %s\n", n, m);
	return (0);
}
