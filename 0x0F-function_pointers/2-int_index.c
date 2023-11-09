#include "function_pointers.h"

/**
 * int_index - earches for an integer
 * @arr: arr to search in
 * @size: size of the arr
 * @compare: pointer to the comparing function
 *
 * Return: index of the first element for which
 * the compare function does not return 0, or -1 if no match is found
 * or size is negative
 */
int int_index(int *arr, int size, int (*compare)(int))
{
	int i;

	if (arr && compare)
	{
		for (i = 0; i < size; i++)
		{
			if (compare(arr[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
