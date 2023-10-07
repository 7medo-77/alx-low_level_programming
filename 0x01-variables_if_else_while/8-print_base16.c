#include <stdio.h>
/**
 * main- program entry point
 *
 * Description: A C program printing all hex characters
 *
 * Return: 0 (success)
 */
int main(void)
{
	char d = '0';

	while (d <= 'f')
		if ((d >= '0' && d <= '9') || (d >= 'a' && d <= 'f'))
			putchar(d++);
		else
			d++;
	putchar('\n');
	return (0);
}
