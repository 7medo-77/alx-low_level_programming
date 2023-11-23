#include "main.h"
/**
 * binary_to_uint - Convert binary array to integer
 *
 * @b: character string coprised of binary number
 *
 * Return: unsigned int;
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j = 0;
	unsigned int res = 0, num = 0;

	i = _strlen(b) - 1;
	while (i >= 0)
	{
		num = b[i] - '0';
		if ((num != 0 && num != 1) || !b)
			return (0);
		if (num == 1)
			res += num * power_of(2, j);
		i--;
		j++;
	}
	return (res);
}

/**
 * _strlen - A function that gets length of string
 *
 * @string: character array
 *
 * Return: Length of string
 */
int _strlen(const char *string)
{
	int i = 0;

	while (string[i])
		i++;
	return (i);
}


/**
 * power_of - A function that raises num to the power of exponent
 *
 * @num: Number raise the power of
 * @exponent: exponent
 *
 * Return: the number raised to the power n
 */
int power_of(int num, int exponent)
{
	int res = 1, i = 0;

	while (i <= exponent)
	{
		if (i == 0)
			res *= 1;
		else
			res *= num;
		i++;
	}
	return (res);
}

