#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - used to free the dogs
 * @d: struct pointer
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
