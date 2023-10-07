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

	while (i <= 57)
	{
		if (i == 57)
		{
			putchar(0 + i++);
		}
		else
		{
			putchar(0 + i++);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
