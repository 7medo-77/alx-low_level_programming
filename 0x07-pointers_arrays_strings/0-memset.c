#include "main.h"
#include <stdio.h>

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *def;

	*def = s;

	for (i = 0; i < n; i++)
	{
		def[i] = b;
	}

	return (s);
}
