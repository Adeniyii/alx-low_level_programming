#include "main.h"
#include <stdio.h>

/* Helper functions */
int check_is_lower(char c);
int check_is_separator(char c);

/**
 * cap_string - capitalize sentence
 * @text: chars to convert.
 *
 * Return: address to capitalized letters.
 */
char *cap_string(char *text)
{
	char *tmp = text;
	int capitalize_next = 1;
	int is_lower, is_separator;

	while (*text)
	{
		is_lower = check_is_lower(*text);
		is_separator = !is_lower && check_is_separator(*text);

		if (is_lower && capitalize_next)
			*text = *text - 32; /* convert char to uppercase*/

		if (is_separator)
			capitalize_next = 1;
		else
			capitalize_next = 0;

		text++;
	}
	return (tmp);
}

/**
 * check_is_lower - check if char is a lower-case character.
 */
int check_is_lower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}

/**
 * check_is_separator - check if char is a specified separator.
 */
int check_is_separator(char c)
{
	if (c == 10 || c == 9 || c == 32 || c == 33 || c == 34 || c == 40 ||
	    c == 41 || c == 44 || c == 46 || c == 59 || c == 63 || c == 123 || c == 125)
		return (1);

	return (0);
}
