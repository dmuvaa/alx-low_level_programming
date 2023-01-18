#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog -function that frees dogs
 * @d: dog to be freed
 * Returrn: 0 is success
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
