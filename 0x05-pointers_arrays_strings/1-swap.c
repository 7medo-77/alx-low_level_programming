#include "main.h"
#include <stdio.h>

/**
 * swap_int - A function which swaps the value of two integers
 *
 * @a: First parameter into argument
 * @b: Second parameter into argument
 *
 */

void swap_int(int *a, int *b)
{
	int *c;

	c = a;
	a = &b;
	b = &c;
}
