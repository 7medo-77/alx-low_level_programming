#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- Entry point for the program
 *
 * Description: A C program to to check if negative or positive
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
