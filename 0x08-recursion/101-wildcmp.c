#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * wildcmp - Write a function that compares two
 * strings and returns 1 if the strings can be
 * considered identical, otherwise return 0.
 *
 * @string_one: The first string.
 * @string_two: The second string.
 *
 * Return: 1 if the strings match, 0 otherwise.
 */

int wildcmp(char *string_one, char *string_two)
{
	if (*string_two == '*')
	{
		if (!*string_one)
			return (wildcmp(string_one, string_two + 1));
		return (wildcmp(string_one + 1, string_two) ||
		wildcmp(string_one, string_two + 1));
	}

	if (*string_one == *string_two ||
	(*string_two == '\0' && *string_one == '\0'))
	{
		if (*string_one == '\0' && *string_two == '\0')
			return (1);
		return (wildcmp(string_one + 1, string_two + 1));
	}

	return (0);
}
