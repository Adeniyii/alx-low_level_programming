#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0
 * @n Factor of multiplication table
 */
void print_times_table(int n)
{
	int rone, cone, d;

	for (rone = 0; rone <= n; rone++)
	{
		printf("0, ");
		for (cone = 1; cone <= n; cone++)
		{
			d = (rone * cone);
			if (d < 10)
			{
				printf(" ");
			}
			printf("%d", d);
			if (cone < n)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
