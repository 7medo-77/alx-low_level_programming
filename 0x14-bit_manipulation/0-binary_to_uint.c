#include "main.h"
int _strlen(const char *string);
int power_of(int num, int exponent);
/**
 * binary_to_uint - A function that converts binary character string to integer
 *
 * @b: character string coprised of binary number
 *
 * Return: unsigned int;
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int res = 0;

	i = 0;
	while (i <= _strlen(b))
	{
		if ((b[i] - '0') == 1)
			res += (b[i] - '0') * power_of(2, i);
		else
			continue;
	}
	return (res);
}
