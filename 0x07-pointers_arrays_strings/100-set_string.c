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
	int i;

	i = 0;
	while (*to)
	{
		*s + i = &to + i;
		i++;
	}
}
