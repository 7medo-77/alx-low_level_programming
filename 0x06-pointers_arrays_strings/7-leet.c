#include "main.h"
#include <stdio.h>
/**
 * leet - A function that encodes the letters AEOTL/aeotl with 1337 respectively
 *
 * @string: String to be encoded
 *
 * Return: Encoded string
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
	return (string);
}
