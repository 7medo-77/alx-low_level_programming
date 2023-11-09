#include "variadic_functions.h"
/**
 * print_numbers - A functoin that prints all
 *					the numbers passed to it
 *
 * @n: number of arguments
 * @separator: Delimiter between characters
 *
 * Return: Sum of all arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;
	va_start(ap, n);

	i = 0;
	while (i < n)
	{
		if (i == (n - 1))
		{
			printf("%d", va_arg(ap, int));
			break;
		}
		else
			printf("%d%s", va_arg(ap, int), *separator ? separator : "");
		i++;
	}
	printf("\n");
	va_end(ap);
}
