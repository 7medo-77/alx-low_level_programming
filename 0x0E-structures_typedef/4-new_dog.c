#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - initializes a variable of type struct dog
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: A pointer to initialized struct with its memory allocated
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);
	if (name && age && owner)
	{
		new->name = malloc(strlen(name) + 1);
		if (!new->name)
			return (NULL);

		new->name = strcpy(new->name, name);

		new->owner = malloc(strlen(owner) + 1);
		if (!new->owner)
			return (NULL);

		new->owner = strcpy(new->owner, owner);
		new->age = age;
	}
	else
		return (NULL);

	return (new);
}
