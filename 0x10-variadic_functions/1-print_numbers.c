#include "variadic_functions.h"
/**
 * print_numbers - A functoin that prints all the numbers passed to it
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
	const char *sep = (separator != NULL) ? separator : "";

	int integer;

	va_start(ap, n);

	i = 0;
	while (i < n)
	{
		integer = va_arg(ap, int);
		if (i == (n - 1))
		{
			printf("%d", integer);
			break;
		}
		printf("%d%s", integer, sep);
		i++;
	}
	printf("\n");
	va_end(ap);
}
