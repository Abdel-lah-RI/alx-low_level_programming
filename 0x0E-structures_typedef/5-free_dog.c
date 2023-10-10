#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated for the struct dog
 * @d: struct dog to free memory from
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
