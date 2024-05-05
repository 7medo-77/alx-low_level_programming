#include <search.h>
#include <stdio.h>
#include <math.h>
/**
 * jump_search - A function that returns the index of a value
 *				   to look for in an array, using binary searching algorithm
 *
 * @array: Array to search in
 * @size: Size of the array
 * @value: Vaue to look for in the array
 *
 * Return: Length of string
 */
int jump_search(int *array, size_t size, int value)
{
	size_t hopper_low, hopper_high, increment;

	increment = sqrt(size);
	hopper_low = 0, hopper_high = 0 + increment;

	if (!array || size == 0)
		return (-1);

	for (; hopper_low < size; hopper_low += increment, hopper_high += increment)
	{
		printf("Value checked array[%lu] = [%d]\n", hopper_low, array[hopper_low]);
		if (hopper_high < size)
		{
			if (value >= array[hopper_low] && value <= array[hopper_high])
			{
				printf("Value found between indexes [%lu] and [%lu]\n", hopper_low, hopper_high);
				for (; hopper_low <= hopper_high; hopper_low++)
				{
					printf("Value checked array[%lu] = [%d]\n", hopper_low, array[hopper_low]);
					if (array[hopper_low] == value)
						return (hopper_low);
				}
			}
		}
		else if (hopper_high > size && array[hopper_low] < value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", hopper_low, hopper_high);
			for (; hopper_low < size; hopper_low++)
			{
				printf("Value checked array[%lu] = [%d]\n", hopper_low, array[hopper_low]);
				if (array[hopper_low] == value)
					return (hopper_low);
			}
		}
	}
	return (-1);
}
