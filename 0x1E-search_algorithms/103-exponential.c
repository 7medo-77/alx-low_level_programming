#include "search_algos.h"
/**
 * array_printer - A function that prints all the values from
 *				   lower to upper bound in the sub-array
 *
 * @array: Array to search in
 * @left: Lower bound of the array
 * @right: Upper bound of the array
 *
 */
void array_printer(int *array, size_t left, size_t right)
{
	size_t l = left;

	printf("Searching in array: ");
	for (; l <= right; l++)
		printf("%d%s", array[l], l == right ? "\n" : ", ");
}

/**
 * binary_search_embed - A function that returns the index of a value
 *				   to look for in an array, using binary searching algorithm
 *
 * @array: Array to search in
 * @left: first element in the array
 * @right: last element of the array
 * @value: Value to look for in the array
 *
 * Return: Array of integers for binary search
 */
int binary_search_embed(int *array, size_t left, size_t right,
						int value)
{
	size_t mid;

	if (!array)
		return (-1);

	while (left <= right)
	{
		array_printer(array, left, right);
		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else if (array[mid] < value)
			left = mid + 1;
	}
	return (-1);
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
	size_t index = 1, res_index = 0, left = 0, right = 0;

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
				(value > array[index] && index * 2 > size - 1))
		{
			left = index;
			if ((index * 2) >= size)
				right = size - 1;
			else
				right = index * 2;
			printf("Value checked array[%lu] = [%d]\n", index, array[index]);
			printf("Value found between [%lu] and [%lu]\n",
					index, index * 2 > size - 1 ? size - 1 : index * 2);
			res_index = binary_search_embed(array, left, right, value);
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
