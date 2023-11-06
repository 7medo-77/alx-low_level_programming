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
		{
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Age: %s\n", "(nil)");
			printf("Owner: %s\n", "(nil)");
		}
	}
	else
		return;
}
