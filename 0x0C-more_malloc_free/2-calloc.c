#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Write a function that allocates
 * memory for an array, using malloc.
 *
 * Return: Always 0 (Success)
 *
 * @nmemb: the number of elements you want to allocate memory for
 * @size: the size of each element in bytes
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int full_size;
	void *pAlloc;
	unsigned int i = 0;
	char *charP;

	if (!nmemb || !size)
	{
		return (NULL);
	}

	full_size = nmemb * size;

	pAlloc = malloc(full_size);

	if (pAlloc != NULL)
	{
		charP = (char *)pAlloc;
		for (; i < full_size; i++)
		{
			charP[i] = 0;
		}
	}

	return (pAlloc);
}
