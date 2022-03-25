#include "main.h"
#include <stdio.h>

/**
 * leet - function that encodes a string into 1337
 * @text: chars to encode.
 *
 * Return: address to encoded chars.
 */
char *leet(char *text)
{
	int i, j;
	char dict1[] = {'A', 'a', 'E', 'e', 'o', 'O', 't', 'T', 'l', 'L'};
	char dict2[] = {'4', '3', '0', '7', '1'};

	for (i = 0; text[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (*(text + i) == *(dict1 + j))
			{
				text[i] = dict2[j / 2];
			}
		}
	}
	return (text);
}
