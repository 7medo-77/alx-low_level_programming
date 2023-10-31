#include "main.h"

int str_len(char *string);
/**
 * _strdup - create a duplicate of the character array entered as a paramter
 *
 * @str: String entered as a parameter
 *
 * Return: Pointer to char string
 */

char *_strdup(char *str)
{
	int i, len;
	char *sp;

	if (str == NULL)
	{
		return (NULL);
	}

	len = str_len(str);
	sp = malloc(len * sizeof(char) + 1);

	if (sp == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < len)
	{
		sp[i] = str[i];
		i++;
	}
	sp[i] = '\0';

	return (sp);
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
