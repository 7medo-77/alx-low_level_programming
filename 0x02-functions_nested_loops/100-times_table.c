#include "main.h"

/**
 * print_times_table - Write a function that prints the n times table,
 * starting with 0.
 *
 *
 * starting with 0.
 * @numb_in: Given number.
 *
 * Return: the last digit of a number
 */

void print_times_table(int numb_in)
{
	int row_num, col_num, result;
	/* Check if the numb_in is within the valid range (0 to 15) */
	if (numb_in < 0 || numb_in > 15)
		return;
	/* Loop through each row */
	for (row_num = 0; row_num <= numb_in; row_num++)
	{
		/* Loop through each column */
		for (col_num = 0; col_num <= numb_in; col_num++)
		{
			/* Calculate the product of row_num and col_num */
			result = row_num * col_num;
			/* Print the result with proper formatting */
			if (col_num == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');
				/* Add leading spaces for proper alignment */
				if (result < 10)
					_putchar(' ');
				if (result < 100)
					_putchar(' ');
				/* Print the result with proper formatting (hundreds, tens, ones) */
				if (result >= 100)
					_putchar(result / 100 + '0');
				if (result >= 10)
					_putchar((result / 10) % 10 + '0');
				_putchar(result % 10 + '0');
			}
		}
		/* Move to the next row */
		_putchar('\n');
	}
}
