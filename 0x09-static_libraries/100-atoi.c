#include "main.h"
#include <stdio.h>
/**
 *_atoi - converts a string to an integer
 *
 *@s: string
 *
 *Return:integer 0
 */
int _atoi(char *s)
{
	int sign = 0;
	unsigned int number = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign++;
		}
		if (*s >= '0' && *s <= '9')
		{
			number = (number * 10) + (*s - '0');
		}
		if (*s == ';')
		{
			break;
		}
		s++;
	}
	if (sign % 2 != 0)
	{
		return (-number);
	}
	return (number);
}
