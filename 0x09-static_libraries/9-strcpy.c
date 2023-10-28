#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - A function that copies string into another array
 *
 * @dest: Destination for copying
 *
 * @src: Array which is to be copied into the destination
 *
 * Return: a pointer to array dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
		i++;

	for (j = 0; j <= i - 1; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);

}
