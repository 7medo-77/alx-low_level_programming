#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* array_range - Write a function that creates an array of integers.
* Return: the pointer to the newly created array
*
* @min_num: the minimum given number
* @max_num: the maximum given number
*/

int *array_range(int min_num, int max_num)
{
	int *mem_alloc;
	int total_size;
	int i = 0;
	if (min_num > max_num)
	{
		return (NULL);
	}
	total_size = (sizeof(int) * (max_num - min_num + 1));
	mem_alloc = malloc(total_size);
	if (!mem_alloc)
	{
		return (NULL);
	}
	while (min_num <= max_num)
	{
		mem_alloc[i] = min_num;
		i++;
		min_num++;
	}
	return (mem_alloc);
}
