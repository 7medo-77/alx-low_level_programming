#include "main.h"
#include <stdio.h>
/**
 * _strncat - A function that concatenates n bytes from src on to dest string
 *
 * @src: A paramter indicating string to be added on to dest
 * @dest: A parameter which src is added to
 * @n: Number of bytes from string src
 *
 * Return: Always 0 (success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	for (j = 0; j <= n; j++)
	{
		if (j == n)
			dest[i] = '\0';
		else
			dest[i] = src[j];
		i++;
	}
	return (dest);
}

