#include <stdio.h>
#include "lists.h"
void Print_Before_The_Main_Function(void) __attribute__ ((constructor));
/**
 * Print_Before_The_Main_Function - Function that prints a
 * sentence before entry point of the program (main)
 *
 * Return: void
 */

void Print_Before_The_Main_Function(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
