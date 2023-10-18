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
	int len_src, len_dest,  i, j;
	j = 0;

	len_dest = _strlen(dest);

	for (i = len_dest; src[j] != '\0'; i++)
	{
		dest[i] = src[j++];
	}
	return (concat);
}
