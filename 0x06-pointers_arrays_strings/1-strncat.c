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
	int len_dest, len_concat, i;
	char *res;

	len_dest = _strlen(dest);
	len_concat = len_dest + n;

	for (i = 0; i < len_concat; i++)
	{
		if (i < len_dest - 1)
			res[i] = dest[i];
		else if (i >= len_dest)
			res[i] = src[i - len_dest];
	}
	res[i] = '\0';
	return (res);
}
