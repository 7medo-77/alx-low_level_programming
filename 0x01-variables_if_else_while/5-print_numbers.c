#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: A C program
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c++);
	}
	putchar('\n');
	return (0);
}
