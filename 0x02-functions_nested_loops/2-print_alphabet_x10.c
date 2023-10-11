#include "main.h"
/**
 * print_alphabet_x10 - A C function prints _putchar
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i <= 9)
	{
		for (; c >= 'a' && c <= 'z'; )
		{
			_putchar(c++);
		}
		_putchar('\n');
		i++;
	}
}
