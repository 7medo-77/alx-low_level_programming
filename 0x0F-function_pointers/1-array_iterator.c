#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @arr: array to iterate over
 * @size: size of the array
 * @func: pointer to function used
 */
void array_iterator(int *arr, size_t size, void (*func)(int))
{
	unsigned int i;

	if (!arr || !func)
		return;

	for (i = 0; i < size; i++)
		func(arr[i]);
}
