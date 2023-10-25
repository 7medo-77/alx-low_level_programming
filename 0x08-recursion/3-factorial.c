#include "main.h"
#include <stdio.h>
/**
 * factorial - prints factroial of number n;
 * @n: number entered into the function
 * Return: -1 if n is less than 0 (fail)
 *			factorial of number if success
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	n = n * factorial(n - 1);
	return (n);
}
