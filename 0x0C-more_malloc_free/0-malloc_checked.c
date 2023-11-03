#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	 if (malloc(b))
	 {
		 return (malloc(b));
	 }
	 else
		exit(98);

}
