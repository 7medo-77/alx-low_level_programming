#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Return: 1 if c is lowercase or Returns 0 otherwise
 */

int _islower(int number)
{
	if (number > 96 && number < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
