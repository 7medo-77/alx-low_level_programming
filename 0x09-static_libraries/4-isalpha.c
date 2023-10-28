#include <stdio.h>
#include "main.h"

/**
 * _isalpha - prints the sign of a digit
 *
 * @digit: is an integer argument
 *
 * Return: Always 0 (success)
 */

int _isalpha(int digit)
{
	if ((digit >= 'a' && digit <= 'z') || (digit >= 'A' && digit <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
