#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_dog- initializes a variable of type struct dog
 *
 * @d: struct dog to be freed
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	else
		return;
}
