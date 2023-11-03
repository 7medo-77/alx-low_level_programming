#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *c;
	c = malloc(b);
	if (c != NULL)
		return (c);
	else
		exit(98);
}
