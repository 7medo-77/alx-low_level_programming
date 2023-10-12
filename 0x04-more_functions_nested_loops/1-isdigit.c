#include <stdio.h>
#include "main.h"
/**
 * _isdigit - a function that
 *
 * @c: A character that is examined with the function
 *
 * Return: Always 0 (success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
