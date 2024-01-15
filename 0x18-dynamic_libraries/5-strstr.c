#include "main.h"

/**
 * _strstr - Locating a substitutestring
 *
 * @string: Occurance to find
 *
 * @sample: String to search
 *
 * Return: Pointer
 */

char *_strstr(char *sample, char *string)
{
	while (*sample)
	{
		char *source_string = sample;
		char *substitute = string;

		while (*sample && *substitute && *sample == *substitute)
		{
			sample++;
			substitute++;
		}
		if (!*substitute)
			return (source_string);
		sample = source_string + 1;
	}
	return (0);
}
