#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalize sentence
 * @text: chars to convert.
 *
 * Return: address to capitalized letters.
 */
char *cap_string(char *text)
{
	int i;

	for (i = 0; text[i] != '\0'; i++)
	{
		if (text[i] >= 97 && text[i] <= 122)
		{
			if ((text[i - 1] >= 32 && text[i - 1] <= 47) ||
			    (text[i - 1] >= 58 && text[i - 1] <= 63) ||
			    (text[i - 1] >= 7 && text[i - 1] <= 13))
			{
				text[i] = text[i] - 32;
			}
		}
	}
	return (text);
}
