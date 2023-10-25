#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - prints a string, in reverse, followed by a new line
 * @n: number raised to power of y
 * @y: nth power of x
 * Return: -1 in case of input of y which is less than 0 (failure)
 *			1 in case y is equal to one (success)
 */
int _pow_recursion(int n, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	n = n * _pow_recursion(n, y - 1);
	return (n);
}
