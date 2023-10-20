#include "main.h"
#include <stdio.h>
/**
 * string_toupper - A function that capitalizes lowercase letters in a string
 *
 * @s: String which would be capitalized
 */
char *leet(char *string)
{
	char letters[] = "AaEeOoTtLl";
	char numbers[] = "4433007711";
	int i, j;

	i = 0;
	while (string[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (string[i] == letters[j])
			{
				string[i] = numbers[j];
			}
			j++;
		}
		i++;
	}
}
