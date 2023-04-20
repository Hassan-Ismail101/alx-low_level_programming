#include "dog.h"
#include <string.h>

/**
 * init_dog - initialize the members of struct
 * @d: the struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of dog'owner
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
