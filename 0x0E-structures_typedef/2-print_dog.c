#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * print_dog - initializes a variable of type struct dog
 *
 * @d: pointer to struct dog to initialize
 *
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		if (d->age && d->owner)
			printf("Age: %f\n", d->age);
		else
			printf("Age: %s\n", "(nil)");
		printf("Name: %s", d->owner ? d->owner : "(nil)");
	}
	else
		return;
}
