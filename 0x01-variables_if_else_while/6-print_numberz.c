#include <stdio.h>
/**
 * main- entry point for program
 *
 * Description: A C program printing numbers without use of char
 *
 * Return: always 0 (success)*/
int main(void)
{
	int i = 48;

	while (i <= 57)
		putchar(0 + (i++));
	putchar('\n');
	return (0);
}
