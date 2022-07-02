#include <stdio.h>

/* function to show bytes in memory, from location start to start+n */
void show_mem_rep(char *start, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf(" %d", start[i]);

	printf("\n");
	printf("%p", start);
}

/* Main function to call above function*/
int main()
{
	int i;
	// 01111111 00000000 00000000 00000000 -> backwards because machine is little endian byte-mode
	int n = 0x7f;

	// this is to pick the stored int in groups of 8-bits (1 byte)
	// since chars can only accomodate a size of 1 byte.
	char *p = (char *)&n;

	// print each byte in denary, looping 4 times for the size of an int
	for (i = 0; i < sizeof(n); i++)
		printf(" %d", *(p + i));

	printf("\n");
	return 0;
}
