#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - Write a function that allocates
 * memory for an array, using malloc.
 *
 * Return: Always 0 (Success)
 *
 * @ptr: the number of elements you want to allocate memory for
 * @old_size: the size of each element in bytes
 * @new_size: the
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr != NULL)
	{
		memcpy(new_ptr, ptr, (new_size < old_size) ? new_size : old_size);
		free(ptr);
		return (new_ptr);
	}
	else
	{
		return (NULL);
	}
}
