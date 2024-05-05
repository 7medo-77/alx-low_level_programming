#include <search.h>
#include <stdio.h>
/**
 * linear_search - A function that returns the index
 *				   for a search result in an array
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
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
