#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: Parameter for argument count, similar to argc
 * @av: Paramter for argument vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *string, *s;
	int i, j, k, length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;

		while (s[j++])
			length++;
		length++;
	}

	string = (char *)malloc(sizeof(char) * (length + 1));
	if (string == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < length; i++)
	{
		s = av[i];
		k = 0;

		while (s[k])
		{
			string[j] = s[k];
			k++;
			j++;
		}
		string[j++] = '\n';
	}
	string[j] = '\0';

	return (string);
}
