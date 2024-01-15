#include <unistd.h>
#include "main.h"

/**
 * main - entry point to the program
 * 
 * Description: A C function similar to putchar
 * 
 * Return: on success 1. on -1 error is returned
 */
int _putchar(char c)
{
   return (write(1, &c, 1));
}
