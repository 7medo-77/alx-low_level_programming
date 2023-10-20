#include "main.h"

/**
 * rev_string - A function which reverses an array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together with no limit
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int over_flow = 0, i = 0, j = 0, nums = 0;
	int val1 = 0, val2 = 0, temporary = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || over_flow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temporary = val1 + val2 + over_flow;
		if (temporary >= 10)
			over_flow = 1;
		else
			over_flow = 0;
		if (nums >= (size_r - 1))
			return (0);
		*(r + nums) = (temporary % 10) + '0';
		nums++;
		j--;
		i--;
	}
	if (nums == size_r)
		return (0);
	*(r + nums) = '\0';
	rev_string(r);
	return (r);
}
