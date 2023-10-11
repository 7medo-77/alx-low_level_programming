#include "main.h"

/**
 * main - entry point to the program
 * Description: A C function prints _putchar
 * Return: always 0 (success)
 */
int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(i++);
	}
	_putchar('\n');
	return (0);
}
