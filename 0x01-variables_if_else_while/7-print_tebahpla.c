#include <stdio.h>
/**
 * main- entry point for the program
 *
 * Description: A c program priting alphabet in reverse
 *
 * Return: 0 (success)
 */
int main(void)
{
	char s = 'z';

	while (s >= 'a')
		putchar(s--);
	putchar('\n');
	return (0);
}
