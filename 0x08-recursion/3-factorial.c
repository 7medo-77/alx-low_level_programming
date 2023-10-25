#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - prints a string, in reverse, followed by a new line
 * @n: string to print
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
	{
		n = n * factorial(n - 1);
		return (n);
	}
}
