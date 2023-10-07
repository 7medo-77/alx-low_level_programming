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
	char c = 'a';

	while (c <= 'z')
		putchar(c++);

	c = 'A';
	while (c <= 'Z')
	{
		if (c >= 'A' && c <= 'Z')
			putchar(c++);
		else
		    c++;
	}
	putchar('\n');
	return (0);
}
