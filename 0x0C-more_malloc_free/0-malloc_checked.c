#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *mP;
	mP = malloc(b);
	!mP ? exit(98) : mP;
	return (mP);
}
