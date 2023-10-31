#include "main.h"

int str_len(char *string);
/**
 * str_concat - Function to concatenate two strings
 *
 * @s1: String entered as a parameter
 * @s2: String entered as a parameter
 *
 * Return: Pointer to char string
 */

char *str_concat(char *s1, char *s2)
{
	int i, len_cat, len_s1, len_s2, j;
	char *cat;

	len_s1 = str_len(s1);
	len_s2 = str_len(s2);
	len_cat = len_s1 + len_s2;

	cat = malloc(len_cat * sizeof(char) + 1);

	if (cat == NULL)
	{
		return (NULL);
	}

	!s1 ? s1 = "" : s1;
	!s2 ? s2 = "" : s2;

	for (i = 0; i < len_cat; i++)
	{
		if (i >= len_s1)
		{
			j = i - len_s1;
			cat[i] = s2[j];
		}
		cat[i] = s1[i];
	}
	cat[i] = '\0';
	return (cat);
}


/**
 * str_len - create a duplicate of the character array entered as a paramter
 *
 * @string: String entered as a parameter
 *
 * Return: Integer as length of the string
 */
int str_len(char *string)
{
	int i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}
