#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Description: A C program printing the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char j = 'a';

	while (i <= 27)
	{
		putchar(j++);
		i++;
	}
	return (0);
}
