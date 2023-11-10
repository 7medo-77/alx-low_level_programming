#include "variadic_functions.h"
/**
 * print_strings - A function that prints all the numbers passed to it
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

	char *string;

	va_start(ap, n);

	i = 0;
	while (i < n)
	{
		string = va_arg(ap, char*);
		if (i == (n - 1))
		{
			printf("%s", *string ? string : "(nil)");
			break;
		}
		printf("%s%s", *string ? string : "(nil)", sep);
		i++;
	}
	printf("\n");
	va_end(ap);
}
