#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - A function that sums all arguments passed to it
 *
 * @n: number of arguments
 *
 * Return: Sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, rsum;
	va_list ap;

	rsum = 0;
	va_start(ap, n);

	i = 0;
	while (i < n)
	{
		rsum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (rsum);
}
