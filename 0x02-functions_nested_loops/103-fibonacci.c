#include <stdio.h>
/**
 * main - Write a program that prints the first 50 Fibonacci numbers,
 * starting with 0.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int a = 1, b = 2, next_num, rolling_sum = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			rolling_sum += b;
		}

		next_num = a + b;
		a = b;
		b = next_num;

	}

	printf("%lu\n", rolling_sum);

	return (0);
}
