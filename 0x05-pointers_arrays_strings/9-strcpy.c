#include "main.h"
#include <stdio.h>

/**
 * _strcpy - A function that copies string
 *
 * @dest: Destination for copying
 *
 * @src: Array which is to be copied into the destination
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

}
