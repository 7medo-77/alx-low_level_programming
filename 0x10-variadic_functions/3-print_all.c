#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_all - prints anything depending on flags
  *
  * @format: list of all argument types passed to the function.
  *
  */

void print_all(const char * const format, ...)
{
	unsigned int index;
	va_list args;
	char *s, *sep;

	va_start(args, format);

	sep = "";

	index = 0;
	while (format && format[index])
	{
		switch (format[index])
		{
		case 'c':
			printf("%s%c", sep, va_arg(args, int));
			break;
		case 'i':
			printf("%s%d", sep, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", sep, va_arg(args, double));
			break;
		case 's':
			s = va_arg(args, char *);

			if (s == NULL)
				s = "(nil)";
			printf("%s%s", sep, s);
			break;
		default:
			index++;
			continue;
		}
		sep = ", ";
		index++;
	}
	printf("\n");
	va_end(args);
}
