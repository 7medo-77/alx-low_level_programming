#include "main.h"
#include <stdio.h>
/**
 * _strcat - A function that concatenates two strings
 *
 * @dest: A paramter on which src is added
 * @src: A paramter which is added to dest
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
