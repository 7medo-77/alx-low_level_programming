#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	int i, rsum;
	va_list ap;

	rsum = 0;
	va_start(ap, n);

	i = 0;
	while (i < n)
	{
		rsum += va_arg(ap, int);
		i++;
	}
	va_end;
	return (rsum);
}
