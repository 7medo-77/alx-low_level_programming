#include "main.h"
#include <stdio.h>
/**
 * _strncpy - A function that concatenates n bytes from src on to dest string
 *
 * @src: A paramter indicating string to be added on to dest
 * @dest: A parameter which src is added to
 * @n: Number of bytes from string src
 *
 * Return: pointer to the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, k, l;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
