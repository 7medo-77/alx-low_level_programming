#include "main.h"
#include <stdio.h>

/**
 * rev_string - A function that reverses a string
 *
 * @s: A string that is entered into the fucntion
 */
void rev_string(char *s)
{
	int i, j, len;

	i = 0;
	while (s[i] != '\0')
		i++;

	len = i - 1;
	for (j = 0; j <= (i - 1) / 2; j++)
	{
		char temp;

		temp = s[j];
		s[j] = s[len - j];
		s[len - j] = temp;
	}
}
