#include "main.h"
#include <stdio.h>

/* Helper Function Declaration*/
char encodeChar(char min, char max, char currChar);

/**
 * rot13 - encode a string using rot13
 * @text: chars to encode.
 *
 * Return: address to encoded chars.
 */
char *rot13(char *text)
{
	int i;
	const int MIN_UPPER = 65, MAX_UPPER = 90;
	const int MIN_LOWER = 97, MAX_LOWER = 122;

	for (i = 0; text[i] != '\0'; i++)
	{
		if ((text[i] >= MIN_UPPER && text[i] <= MAX_UPPER))
		{
			text[i] = encodeChar(MIN_UPPER, MAX_UPPER, text[i]);
		}
		else if ((text[i] >= MIN_LOWER && text[i] <= MAX_LOWER))
		{
			text[i] = encodeChar(MIN_LOWER, MAX_LOWER, text[i]);
		}
		else
		{
			continue;
		}
	}
	return (text);
}

/**
 * encodeChar - move char by KEY places
 * @min: lower limit of ascii alphabets.
 * @max: upper limit of ascii alphabets.
 * @currChar: char to move.
 *
 * Return: encoded char.
 */
char encodeChar(char min, char max, char currChar)
{
	const int KEY = 13, APLHA_COUNT = 26;
	int places, position, offset, encoded;

	places = KEY % APLHA_COUNT;
	position = places + currChar;

	if (position > max)
	{
		offset = (position - max) - 1;
		encoded = min + offset;
	}
	else
	{
		encoded = position;
	}
	return (encoded);
}
