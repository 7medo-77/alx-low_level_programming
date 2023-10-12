#include <stdio.h>

/**
 * main - enty point for the program
 *
 * Description: A FizzBuzz program printing fizz, buzz and fizzbuzz
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ", i++);
		else if (i % 3 == 0)
			printf("Fizz ", i++);
		else if (i % 5 == 0)
			printf("Buzz ", i++);
		else
			printf("%d ", i++);
	}
	return (0);
}
