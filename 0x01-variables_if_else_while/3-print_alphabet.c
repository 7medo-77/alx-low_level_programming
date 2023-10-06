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
	int i = 0;
	char c = 'a';

	while (i <= 52)
	{
		if (i == 52)
			putchar('\n');
		else
		{
			putchar(c++)
		}
	}
}
