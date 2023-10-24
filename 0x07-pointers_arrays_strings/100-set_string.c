#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: pointer to pointer
 *
 * @to: pointer char
 */
void set_string (char **s, char *to)
{
	char *i;

	i = to;
	to = *s;
	*s = i;
}
