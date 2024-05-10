#include "search_algos.h"
/**
 * array_builder - A function that returns the index of a value
 *				   to look for in an array, using binary searching algorithm
 *
 * @array: Array to search in
 * @size: Size of the array
 * @index: Value to look for in the array
 *
 * Return: Array of integers for binary search
 */
int *array_builder(int *array, size_t size, size_t index)
{
	int *array_res = malloc(sizeof(int) * size);
	size_t i = 0, iter = index;

	while (array[iter])
		array_res[i++] = array[iter++];
	return (array_res);
}

/**
 * exponential_search - A function that returns the index of a value
 *				   to look for in an array, using binary searching algorithm
 *
 * @array: Array to search in
 * @size: Size of the array
 * @value: Vaue to look for in the array
 *
 * Return: Index of matching element in the array
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t index = 1, res_index = 0, range;
	int *array_product;

	while (index <= size - 1)
	{
		if (array[0] == value)
		{
			printf("Value checked array[%d] = [%d]\n", 0, array[0]);
			return (0);
		}
		else if (array[index] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", index, array[index]);
			return (index);
		}
		else if ((value > array[index] && value < array[index * 2]) ||
				(value > array[index] && value < array[size - 1]
				&& index * 2 > size - 1))
		{
			if ((index * 2) >= size)
				range = ((size) - index);
			else
				range = index + 1;
			printf("Value found between [%lu] and [%lu]\n",
					index, index * 2 > size - 1 ? size - 1 : index * 2);
			array_product = array_builder(array, range, index);
			res_index = binary_search(array_product, range, value);
			res_index += index;
			free(array_product);
			return (res_index);
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", index, array[index]);
			index *= 2;
			if (index > size)
				index = size - 1;
		}
	}
	return (-1);
}
