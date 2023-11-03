#include "main.h"
#include <stdlib.h>
int str_len(char *string);

/**
 * string_nconcat - allocates memory using malloc to a concatenated string from s1 and s2
 *
 * @n: number of bytes to concate from s2 with s1
 * @s1: String to concate s2 with
 * @s2: String from which n bytes are concatenated onto s1
 *
 * Return: a pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len_s1, len_s2, i, cat_length;
	char *cat;

	if(s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = str_len(s1);
	len_s2 = str_len(s2);

	n >= len_s2 ? n = len_s2 : n;
	cat_length = len_s1 + n;

	cat = malloc(cat_length * sizeof(char) + 1);
	if (!cat)
		return (NULL);

	i = 0;
	while (i < cat_length)
	{
		if (i < len_s1)
			cat[i] = s1[i];
		else
			cat[i] = s2[i- len_s1];
		i++;

	}
	cat[i] = '\0';
	return (cat);
}

/**
 * str_len - Gets length of string
 * @string: String to be counted
 *
 * Return: Length of string
 */
int str_len(char *string)
{
	int i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}
