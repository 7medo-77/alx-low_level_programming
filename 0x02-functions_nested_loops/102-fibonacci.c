#include <stdio.h>

/**
 * main - enty point of the program, prints 50 fibNums
 *
 *
 * Return: the last digit of a number
 */

int main(void)
{
	int i;
	int n = 50;
	unsigned long int a = 1, b = 2;

	printf("%lu, %lu", a, b);

	for (i = 2; i < n; i++)
	{
		unsigned long int next = a + b;

		printf(", %lu", next);

		a = b;
		b = next;
	}

	printf("\n");

	return (0);
}
