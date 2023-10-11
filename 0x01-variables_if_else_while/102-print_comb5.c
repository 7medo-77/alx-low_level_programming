#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Write a program that prints all possible
 * different combinations of two digits
 *
 * Return: 0
 */
int main(void)
{
	int first_num = 0, sec_num;

	while (first_num <= 99)
	{
		sec_num = first_num;
			while (sec_num <= 99)
			{
				if (sec_num != first_num)
				{
					putchar ((first_num / 10) + 48);
					putchar ((first_num % 10) + 48);
					putchar(' ');
					putchar((sec_num / 10) + 48);
					putchar ((sec_num % 10) + 48);
					if (first_num != 98 || sec_num != 99)
					{
						putchar(',');
						putchar(' ');
					}
				}
				sec_num++;
			}
		first_num++;
	}
	putchar('\n');
	return (0);
}
