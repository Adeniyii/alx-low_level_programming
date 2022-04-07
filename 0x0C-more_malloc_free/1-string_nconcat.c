#include "main.h"
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
unsigned int min(unsigned int a, unsigned int b);

/**
 * string_nconcat - concat two strings
 *
 * @s1: first string.
 * @s2: second string.
 * Return: (char*) address of concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, target_string_length = 1;
	char *ptr;

	if (s1 != NULL)
		target_string_length += strlen(s1);

	if (s2 != NULL)
		target_string_length += min(strlen(s2), n);

	ptr = malloc(target_string_length);

	if (ptr == NULL)
	{
		return NULL;
	}

	if (s1 != NULL)
	{
		for (i = 0; i < strlen(s1); i++)
		{
			ptr[i] = s1[i];
		}
	}

	if (s2 != NULL)
	{
		for (j = 0; j < min(strlen(s2), n); j++, i++)
		{
			ptr[i] = s2[j];
		}
	}
	ptr[i] = '\0';

	return (ptr);
}

/**
 * min - return minimum of two numbers
 *
 * @a: first number to compare.
 * @b: second number to compare.
 * Return: min of two numbers
 */
unsigned int min(unsigned int a, unsigned int b)
{
	return (a > b) ? a : b;
}
