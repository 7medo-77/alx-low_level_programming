#include <search.h>
#include <stdio.h>

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
 * binary_search - A function that returns the index of a value
 *				   to look for in an array, using binary searching algorithm
 *
 * @array: Array to search in
 * @size: Size of the array
 * @value: Value to look for in the array
 *
 * Return: Length of string
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	left = 0;
	right = size - 1;
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
