#include "main.h"
#include <stdio.h>
/**
 * string_toupper - A function that capitalizes lowercase letters in a string
 *
 * @s: String which would be capitalized
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] += 32;
		else
			i++;
	}
	return (s);
}
