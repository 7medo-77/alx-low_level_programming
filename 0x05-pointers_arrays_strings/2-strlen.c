#include "main.h"
#include <stdlib.h>

/**
 * function_name - A function that
 *
 * @s: A paramter
 *
 * Return: always 0 (Sucess)
 */
int _strlen(char *s)
{
	int j;

	j = 0;
	while (*s)
		j++;
	return (j);
}
