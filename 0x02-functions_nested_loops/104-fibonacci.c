#include <stdio.h>

/**
 * main - Write a program that prints the first 50 Fibonacci numbers,
 * starting with 0.
 *
 * starting with 0.
 *
 * Return: the last digit of a number
 */
int main(void)
{
	int 0_98fib(void);
	0_98fib();
	return (0);
}

/**
 * 0_98fib - Write a program that prints the first
 * 50 Fibonacci numbers,
 * starting with 0.
 *
 *
 * Return: the last digit of a number
 */
int 0_98fib(void)
{
	/* Initialize variables */
	int count;
	unsigned long curr_1, curr_2, next, curr_1k,
	curr_2k, nextThousands, roll_carrier;


	count = 0;
	curr_1 = 0;
	curr_2 = 1;

	for (count = 1; count <= 91; count++)
	{
		next = curr_1 + curr_2;
		curr_1 = curr_2;
		curr_2 = next;
		printf("%lu, ", next);
	}

	curr_1k = curr_1 % 1000;
	curr_1 = curr_1 / 1000;
	curr_2k = curr_2 % 1000;
	curr_2 = curr_2 / 1000;

	while (count <= 98)
	{
		roll_carrier = (curr_1k + curr_2k) / 1000;
		nextThousands = (curr_1k + curr_2k) - roll_carrier * 1000;
		next = (curr_1 + curr_2) + roll_carrier;
		curr_1k = curr_2k;
		curr_2k = nextThousands;
		curr_1 = curr_2;
		curr_2 = next;

		if (nextThousands >= 100)
			printf("%lu%lu", next, nextThousands);
		else
			printf("%lu0%lu", next, nextThousands);

		if (count != 98)
			printf(", ");

		count++;
	}

	putchar('\n');
	return (0);
}
