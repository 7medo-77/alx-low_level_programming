#include "search_algos.h"
#include "1-binary.c"
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

int main(void)
{
	size_t size = 18, i = 0;
	int *array_res = malloc(sizeof(int) * size);


	while (i < size)
	{
		array_res[i] = i;
		printf("%d,", array_res[i++]);
	}

	return (1);
}
