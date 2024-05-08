#include <search.h>
#include <stdio.h>
#include <math.h>
/**
 * interpolation_search - A function that returns the index of a value
 *				   to look for in an array, using binary searching algorithm
 *
 * @array: Array to search in
 * @size: Size of the array
 * @value: Vaue to look for in the array
 *
 * Return: Length of string
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (!array)
		return (-1);

	high = size - 1;
	low = 0;

	while (value >= array[low] && value <= array[high] && low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));

		if (array[pos] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			return (pos);
		}
		else if (value > array[pos])
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			low = pos + 1;
		}
		else if (value < array[pos])
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			high = pos - 1;
		}
	}
	return (-1);
}
