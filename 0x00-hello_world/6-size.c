#include <stdio.h>
/**
 * main: entry point of the program
 *
 * Description: A C program which prints size of various types of variables
 *
 * return: Always 0 (Success)*/

int main (void)
{
	printf("Size of a char: %lu bytes(s)\n", sizeof(char));
	printf("Size of an int: %lu bytes(s)\n", sizeof(int));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(long int));
	printf("Size of long long int: %lu bytes(s)\n", sizeof(long long int));
	printf("Size of float: %lu bytes(s)\n", sizeof(float));
	return(0);
}
