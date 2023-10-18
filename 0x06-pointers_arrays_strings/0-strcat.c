#include "main.h"
#include <stdio.h>
/**
 * _strlen - A function that counts the number of elements in an array
 *
 * @c: A paramter array which is entered into the function
 *
 * Return: Integer which represents the number of elemnts in an array(success)
 *
 */
int _strlen(char *c)
{
	int a;

	a = 0;
	while (c[a] != '\0')
		a++;
	return (a);
}

/**
 * function_name - A function that
 *
 * @dest: A paramter
 * @src:
 *
 * Return: Always 0 (success)
 */
char *_strcat(char *dest, char *src)
{
	char *concat;
	int len_src, len_dest, len_cat, i, j;

	len_src = _strlen(src);
	len_dest = _strlen(dest);
	len_cat = len_dest + len_src + 1;

	for (i = 0; i <= len_cat; i++)
	{
		if (i < len_dest - 1)
			concat[i] = dest[i];
		else if (i >= len_dest)
			concat[i] = src[i - len_dest];
		else if (i == len_cat)
			concat[i] = '\0';
	}
	return (concat);
}


