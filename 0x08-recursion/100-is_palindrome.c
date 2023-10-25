#include <stdio.h>
#include <string.h>
#include "main.h"

int palindrome_check(char *s, int first, int last);

/**
 * is_palindrome - Check if a string is a palindrome.
 * if the input integer is a prime number, otherwise return 0.
 *
 * @string: String to be checked
 *
 * Return:1 if s is a palindrome, 0 if not.
 */

int is_palindrome(char *string)
{
	int length = strlen(string);
	int result = palindrome_check(string, 0, length - 1);

	return (result);
}

/**
 * palindrome_check - Helper function to check
 * if a string is a palindrome.
 *
 * @s: The string to check.
 * @first: The first index.
 * @last: The last index.
 *
 * Return: 1 if s is a palindrome, 0 if not.
 */
int palindrome_check(char *s, int first, int last)
{
	int result;

	if (first >= last)
	{
		return (1);
	}
	if (s[first] != s[last])
	{
		return (0);
	}
	result = palindrome_check(s, first + 1, last - 1);
	return (result);
}
