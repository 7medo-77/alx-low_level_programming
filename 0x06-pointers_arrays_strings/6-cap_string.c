#include "main.h"
#include <stdio.h>
/**
 * cap_string - A function that capitalizes lowercase letters in a string
 *
 * @string: String which would be capitalized
 */
char *cap_string(char *string)
{
	int i, j;
	char delimiter[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '{', '}', '(', ')'};

	i = 0;
	while (string[i])
	{
		if (!(string[i] >= 'a' && string[i] <= 'z'))
			i++;

		if (string[0] >= 'a' && string[i] <= 'z')
			string[0] -= 32;

		j = 0;
		while (delimiter[j])
		{
			if ((string[i-1] == delimiter[j]) && (string[i] >= 'a' && string[i] <= 'z'))
				string[i] -= 32;
			j++;
		}
		i++;
	}
	return (string);
}
