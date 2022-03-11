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
	char* m = n > 0 ? "is positive" : n == 0 ? "is zero" : n < 0 ? "is negative" : "" 
	printf("%i is %s", n, m)
	return (0);
}
