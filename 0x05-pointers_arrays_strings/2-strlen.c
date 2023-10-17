#include "main.h"
#include <stdlib.h>

/**
 * _strlen - A function that returns the length of string
 *
 * @s: A paramter which is a string passed to the function
 *
 * Return: always 0 (Sucess)
 */
int _strlen(char *s)
{
	int j;

	j = 0;
	while (*s++)
		j++;
	return (j);
}
