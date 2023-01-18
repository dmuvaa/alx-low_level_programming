#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a structure of type dog
 * @d: pointer to structure
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
