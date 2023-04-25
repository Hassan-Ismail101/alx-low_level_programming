#include "dog.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - create a struct of dog_t
 * @name: the name of the member
 * @age: the value of age member
 * @owner: the value of owner member
 * Return: pointer of the new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *dynName, *dynOwner;
	dog_t *ptr;

	dynName = malloc(strlen(name) + 1);
	if (dynName == NULL)
		return (NULL);
	dynOwner = malloc(strlen(owner) + 1);
	if (dynOwner == NULL)
	{
		free(dynName);
		return (NULL);
	}
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		free(dynName);
		free(dynOwner);
		return (NULL);
	}
	strcpy(dynName, name);
	strcpy(dynOwner, owner);
	ptr->name = dynName;
	ptr->age = age;
	ptr->owner = dynOwner;
	return (ptr);
}
