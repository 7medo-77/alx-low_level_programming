#include <stdio.h>
/**
 * main- program entry point
 *
 * Description: A C program printing all possible combinations of single digits
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i = 48;

	while (i <= 56)
	{
		putchar(0 + ++i);
		if (i == 57)
		{
			putchar('\n');
		}
		else if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
