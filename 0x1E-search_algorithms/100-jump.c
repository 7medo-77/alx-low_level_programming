#include <search.h>
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

	for (; j)
}

