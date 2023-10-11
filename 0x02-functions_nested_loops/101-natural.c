#include <stdio.h>

/**
 * main - Write a function that prints the n times table,
 * starting with 0.
 *
 * starting with 0.
 *
 * Return: the last digit of a numberber
 */

int main(void)
{
	int upper_bound = 1024;
	int rolling_sum = 0;
	int number;

	for (number = 0; number < upper_bound; number++)
	{
		if (number % 3 == 0 || number % 5 == 0)
		{
			rolling_sum += number;
		}
	}

	printf("%d\n", rolling_sum);

	return (0);
}
