#include <search.h>
#include <stdio.h>
/**
 * linear_search - A function that returns the key index from a key string
 *
 * @array: Array to search in
 * @size: Size of the array
 * @value: Value to look for in the array
 *
 * Return: Length of string
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
	{
		printf("Value checked array[%lu] = [%d]\n", size, array[size]);
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (array[i]);
	}
	return (-1);
}
