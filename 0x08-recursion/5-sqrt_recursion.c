#include "main.h"
#include <stdio.h>
/**
 * square_check - prints a string, in reverse, followed by a new line
 *
 * @n: number to be checked for square root
 * @i: number which is tested to be a square factor
 *
 * Return: square factor
 */
int square_check(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (square_check(n, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - Finding square factor of a number
 * @n: number entered into function to check if it's a square number
 */
int _sqrt_recursion(int n)
{
	return (square_check(n, 1));
}

