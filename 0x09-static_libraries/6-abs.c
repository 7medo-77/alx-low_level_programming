#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @number: Given numberber.
 *
 * Return: Always 0 (Success)
 */
int _abs(int number)
{
	if (number < 0)
	{
		number = number * -1;
	}
	return (number);
}
