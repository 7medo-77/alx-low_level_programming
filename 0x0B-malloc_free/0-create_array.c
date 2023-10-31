#include "main.h"
/**
 * create_array - A function that allocates memory to array of size size and fills it with char c
 *
 * @size - Size of array
 * @c - character with which array is filled
 *
 * Return: pointer to allcated array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(size * sizeof(char) + 1);

	if (!size || p == NULL)
	{
		return NULL;
	}

	i = 0;
	while (i < size)
	{
		p[i++] = c;
	}
	p[i] = '\0';

	return (p);
}
