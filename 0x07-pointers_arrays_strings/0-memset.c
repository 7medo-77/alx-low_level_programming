#include <stdio.h>
#include "main.h"

/**
 * _memset - Write a function that fills memory with a constant byte.
 * Return: a pointer to the memory area s
 *
 * @array: a pointer to the memory area to be filled
 * @byte: the byte value to fill the memory area with
 * @numByte: the number of bytes to be filled
 */

char *_memset(char *array,
		  char byte,
		  unsigned int numByte)
{
	unsigned int num;

	for (num = 0; num < numByte; num++)
	{
		array[num] = byte;
	}

	return (array);
}
