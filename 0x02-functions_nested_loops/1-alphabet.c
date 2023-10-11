#include "main.h"

/**
 * main - entry point to the program
 *
 * Description: A C function prints _putchar
 *
 * Return: always 0 (success)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c >= 'a' && c <= 'z')
	{
		_putchar(c++);
	}
	_putchar('\n');
}
