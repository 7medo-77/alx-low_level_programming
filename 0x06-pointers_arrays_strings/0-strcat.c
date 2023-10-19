#include "main.h"
#include <stdio.h>
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
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
