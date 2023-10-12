#include <stdio.h>
#include "main.h"
/**
 * _isupper - A program which checks if character is uppercase
 * @c: the character that is checked
 * Return: Always 0 (success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
