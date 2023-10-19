#include "main.h"
#include <stdio.h>
/**
 * _strcmp - A function that compares two strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: Always 0 (success)
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, rolling_sum = 0;

	for (; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			rolling_sum += s1[i] - s2[i];
			break;
		}
	}
	return (rolling_sum);
}
