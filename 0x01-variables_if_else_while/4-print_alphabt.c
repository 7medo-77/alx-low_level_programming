#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Description: A C program which prints all alphabet letters except e and q
 *
 * Return: 0 (success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' || c != 'q')
			putchar(c++);
	}
	putchar('\n');
	return (0);
}
