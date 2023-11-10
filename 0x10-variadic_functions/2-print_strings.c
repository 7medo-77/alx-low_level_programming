#include "variadic_functions.h"
/**
 * print_numbers - A functoin that prints all the numbers passed to it
 *
 * @n: number of arguments
 * @separator: Delimiter between characters
 *
 * Return: Sum of all arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	const char *sep = (separator != NULL) ? separator : "";

	char *integer;

	va_start(ap, n);

	i = 0;
	while (i < n)
	{
		integer = va_arg(ap, char*);
		if (i == (n - 1))
		{
			printf("%s", integer);
			break;
		}
		printf("%s%s", integer, sep);
		i++;
	}
	printf("\n");
	va_end(ap);
}
