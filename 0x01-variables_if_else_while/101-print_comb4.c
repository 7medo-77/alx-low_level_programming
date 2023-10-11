#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first_num, sec_num, third_num;

	for (first_num = 0; first_num < 8; first_num++)
	{
		sec_num = first_num + 1;
		while (sec_num < 9)
		{
			for (third_num = sec_num + 1; third_num < 10; third_num++)
			{
				putchar((first_num % 10) + '0');
				putchar((sec_num % 10) + '0');
				putchar((third_num % 10) + '0');

				if (first_num == 7 && sec_num == 8 && third_num == 9)
					break;

				putchar(',');
				putchar(' ');
			}
			sec_num++;
		}
	}
	putchar('\n');

	return (0);
}
