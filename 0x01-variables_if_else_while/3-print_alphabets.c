#include <stdio.h>
/**
 * main- entry point of the program
 *
 * Description: A C program printing all letters of alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'A';

	while (c <= 'Z')
			putchar(c++);

	while (c <= 'z')
	{
		if (c >= 'a' && c <= 'z')
			putchar(c++);
	}

	putchar('\n');
	return (0);
}
