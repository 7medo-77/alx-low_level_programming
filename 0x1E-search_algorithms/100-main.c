#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
		0, 5
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 3, jump_search(array, size, 3));
	printf("Found %d at index: %d\n\n", 1, jump_search(array, size, 1));
	printf("Found %d at index: %d\n", 5, jump_search(array, size, 5));
	return (EXIT_SUCCESS);
}
