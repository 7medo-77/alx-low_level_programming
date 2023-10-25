#include <stdio.h>
#include "main.h"

int prime_test(int n, int factor);

/**
 * is_prime_number - Write a function that returns 1
 * if the input integer is a prime number, otherwise return 0.
 *
 * Return: Always 0 (Success)
 *
 * @number: The number to be checked
 */

int is_prime_number(int number)
{
	if (number <= 1)
	{
		return (0);
	}

	return (prime_test(number, 2));
}

/**
 * prime_test - Helper function to check for prime numbers recursively.
 * @n: The integer to check.
 * @factor: The current factor to test.
 * Return: 1 if n is prime, 0 otherwise.
 */
int prime_test(int n, int factor)
{
	if (factor == n)
	{
		return (1);
	}
	if (n % factor == 0)
	{
		return (0);
	}
	return (prime_test(n, factor + 1));
}
