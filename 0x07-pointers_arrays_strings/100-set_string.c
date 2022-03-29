#include "main.h"

/**
 * set_string - set the value of a pointer to a char
 * @s: pointer to copy to.
 * @to: pointer to copy from.
 */
void set_string(char **s, char *to)
{
	s[0] = to;
}
