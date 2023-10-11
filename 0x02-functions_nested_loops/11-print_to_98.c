#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numberbers from n to 98,
 * followed by a new line
 *
 * starting with 0.
 * @n: Given numberber.
 *
 * Return: the last digit of a numberber
 */

void print_to_98(int n)
{

	int number;

	if (n <= 98)
	{
		for (number = n; number < 98; number++)
		{
			printf("%i, ", number);
		}
	}
	else
	{
		for (number = n; number > 98; number--)
		{
			printf("%i, ", number);
		}
	}
	printf("98\n");
}
