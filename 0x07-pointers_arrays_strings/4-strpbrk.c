#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 *
 * @string: Character to check
 *
 * @match: Character to look for
 *
 * Return: Pointer to character
 */

char *_strpbrj(char *string, char *match)
{
	int i, j;

	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = 0; match[j] != '\0'; j++)
		{
			if (string[i] == match[j])
				return (string + i);
		}
	}
	return (0);
}
