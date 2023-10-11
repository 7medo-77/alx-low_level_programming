#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 *
 * @num: Given number.
 *
 * Return: the last digit of a number
 */

int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
	{
		last_digit = (num % 10) * -1;
	}
	else
	{
		last_digit = num % 10;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
