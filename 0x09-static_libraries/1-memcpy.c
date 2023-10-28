#include "main.h"

/**
 * _memcpy - Copies content from source to outputination
 * memory area
 * @source: pointer to source memory area
 * @output: Pointer to output memory output
 * @n: Number of bytes
 * Return: A pointer to @output
 */
char *_memcpy(char *output, char *source, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(output + i) = *(source + i);
	}

	return (output);
}
